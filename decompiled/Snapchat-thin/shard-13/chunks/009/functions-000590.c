/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10ae8998c; end: 10ae89997;  */

/* WARNING: Removing unreachable block (ram,0x00010ae89a6c) */
/* WARNING: Removing unreachable block (ram,0x00010ae89b10) */

void FUN_10ae8998c(undefined8 *param_1,byte *param_2,long param_3)

{
  byte bVar1;
  undefined *puVar2;
  bool bVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_3 != 0) {
    bVar3 = false;
    do {
      bVar1 = *param_2;
      if (bVar1 < 0x22) {
        if (bVar1 == 9) {
          puVar2 = &DAT_10f47f586;
          goto LAB_10ae89af0;
        }
        puVar2 = &DAT_10f47f589;
        if ((bVar1 == 10) || (puVar2 = &DAT_10f47f594, bVar1 == 0xd)) goto LAB_10ae89af0;
LAB_10ae89a64:
        if (((int)(char)bVar1 - 0x20U < 0x5f) && ((!bVar3 || (-1 < (char)(&UNK_10e52ca36)[bVar1]))))
        {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                    (param_1,(int)(char)bVar1);
          goto LAB_10ae89afc;
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (param_1,&UNK_10f6025a1,2);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                  (param_1,(long)(char)(&UNK_10e530072)[bVar1 >> 4]);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                  (param_1,(long)(char)(&UNK_10e530072)[(ulong)bVar1 & 0xf]);
        bVar3 = true;
      }
      else {
        if (bVar1 == 0x22) {
          puVar2 = &DAT_10f47f5ef;
        }
        else if (bVar1 == 0x27) {
          puVar2 = &DAT_10f6d2c79;
        }
        else {
          if (bVar1 != 0x5c) goto LAB_10ae89a64;
          puVar2 = &DAT_10f47f5f4;
        }
LAB_10ae89af0:
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (param_1,puVar2,2);
LAB_10ae89afc:
        bVar3 = false;
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



/* Entry: 10ae89998; end: 10ae89bb3;  */

void FUN_10ae89998(undefined8 *param_1,byte *param_2,long param_3,int param_4,int param_5)

{
  undefined *puVar1;
  bool bVar2;
  byte bVar3;
  ulong uVar4;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_3 != 0) {
    bVar2 = false;
    do {
      bVar3 = *param_2;
      uVar4 = (ulong)bVar3;
      if (bVar3 < 0x22) {
        if (bVar3 == 9) {
          puVar1 = &DAT_10f47f586;
          goto LAB_10ae89af0;
        }
        puVar1 = &DAT_10f47f589;
        if ((bVar3 == 10) || (puVar1 = &DAT_10f47f594, bVar3 == 0xd)) goto LAB_10ae89af0;
LAB_10ae89a64:
        if (((param_5 != 0) && ((char)bVar3 < 0)) ||
           (((int)(char)bVar3 - 0x20U < 0x5f && ((!bVar2 || (-1 < (char)(&UNK_10e52ca36)[uVar4])))))
           ) {
LAB_10ae89b64:
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                    (param_1,(int)(char)bVar3);
          goto LAB_10ae89afc;
        }
        if (param_4 == 0) {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (param_1,"\\",1);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                    (param_1,(long)(char)(&UNK_10e530072)[bVar3 >> 6]);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                    (param_1,(long)(char)(&UNK_10e530072)[(ulong)(bVar3 >> 3) & 7]);
          bVar3 = (&UNK_10e530072)[uVar4 & 7];
          goto LAB_10ae89b64;
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (param_1,&UNK_10f6025a1,2);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                  (param_1,(long)(char)(&UNK_10e530072)[bVar3 >> 4]);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                  (param_1,(long)(char)(&UNK_10e530072)[uVar4 & 0xf]);
        bVar2 = true;
      }
      else {
        if (bVar3 == 0x22) {
          puVar1 = &DAT_10f47f5ef;
        }
        else if (bVar3 == 0x27) {
          puVar1 = &DAT_10f6d2c79;
        }
        else {
          if (bVar3 != 0x5c) goto LAB_10ae89a64;
          puVar1 = &DAT_10f47f5f4;
        }
LAB_10ae89af0:
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (param_1,puVar1,2);
LAB_10ae89afc:
        bVar2 = false;
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



/* Entry: 10ae89bb4; end: 10ae89bbf;  */

/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_10ae89bb4(byte *param_1,ulong param_2,undefined8 *param_3)

{
  bool bVar1;
  undefined1 *puVar2;
  byte bVar3;
  long lVar4;
  uint uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 *extraout_x8;
  undefined8 *puVar8;
  undefined8 *puVar9;
  int iVar10;
  int iVar11;
  undefined8 *puVar12;
  uint uVar13;
  undefined8 *puVar14;
  char cVar15;
  undefined4 uVar16;
  byte *pbVar17;
  byte *pbVar18;
  ulong uVar19;
  ulong uVar20;
  undefined8 *puVar21;
  ulong uVar22;
  ulong uVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  ulong uVar26;
  undefined *puVar27;
  undefined1 *puVar28;
  code *pcVar29;
  
  puVar28 = &stack0xfffffffffffffff0;
  puVar25 = (undefined8 *)(param_2 - (param_2 >> 2));
  puVar6 = param_3;
  puVar24 = puVar25;
  func_0x000107c34fec();
  uVar26 = param_2;
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    puVar14 = (undefined8 *)*param_3;
    if (puVar14 == (undefined8 *)0x0) {
      if (3 < param_2) {
        puVar12 = (undefined8 *)0x0;
        puVar21 = (undefined8 *)0x0;
        cVar15 = '\0';
        puVar9 = (undefined8 *)0x0;
LAB_10ae89e04:
        if (((((ulong)*param_1 == 0) || ((ulong)param_1[1] == 0)) || ((ulong)param_1[2] == 0)) ||
           (uVar5 = (int)(char)(&UNK_10e52f5e8)[param_1[1]] << 0xc |
                    (int)(char)(&UNK_10e52f5e8)[*param_1] << 0x12 |
                    (int)(char)(&UNK_10e52f5e8)[param_1[2]] << 6 |
                    (int)(char)(&UNK_10e52f5e8)[param_1[3]], puVar12 = (undefined8 *)(ulong)uVar5,
           (int)uVar5 < 0)) {
          uVar22 = 0;
          uVar23 = uVar26 - 2;
          uVar20 = uVar26 - 3;
          uVar19 = uVar26 - 4;
          pbVar18 = param_1;
          param_2 = uVar26;
LAB_10ae89e68:
          pbVar17 = pbVar18 + 1;
          puVar6 = (undefined8 *)(ulong)*pbVar18;
          cVar15 = *(char *)(puVar6 + 0x21ca5ebd);
          if (cVar15 < '\0') {
            param_2 = param_2 - 1;
            puVar24 = (undefined8 *)(ulong)*(byte *)((long)puVar6 + 0x10e52ca36);
            if ((*(byte *)((long)puVar6 + 0x10e52ca36) >> 3 & 1) != 0) goto code_r0x00010ae89e80;
            goto LAB_10ae89fac;
          }
          goto LAB_10ae89ebc;
        }
        param_2 = uVar26 - 4;
        param_1 = param_1 + 4;
        goto LAB_10ae89f3c;
      }
      puVar14 = (undefined8 *)0x0;
      iVar10 = 0;
      puVar12 = (undefined8 *)0x0;
      bVar1 = true;
      puVar21 = (undefined8 *)0x0;
    }
    else {
      if (3 < param_2) goto LAB_10ae89c38;
      bVar1 = false;
      iVar10 = 0;
      puVar12 = (undefined8 *)0x0;
      puVar21 = (undefined8 *)0x0;
    }
  }
  else {
    puVar14 = param_3;
    if (3 < param_2) {
LAB_10ae89c38:
      puVar6 = (undefined8 *)0x0;
      puVar21 = (undefined8 *)0x0;
      cVar15 = '\0';
      puVar8 = (undefined8 *)0x0;
LAB_10ae89c48:
      if ((((ulong)*param_1 == 0) || ((ulong)param_1[1] == 0)) || ((ulong)param_1[2] == 0)) {
LAB_10ae89c94:
        uVar22 = 0;
        uVar20 = uVar26 - 4;
        lVar7 = -2;
        pbVar18 = param_1;
        param_2 = uVar26;
LAB_10ae89ca8:
        pbVar17 = pbVar18 + 1;
        puVar24 = (undefined8 *)(ulong)*pbVar18;
        cVar15 = *(char *)(puVar24 + 0x21ca5ebd);
        puVar12 = (undefined8 *)(long)cVar15;
        iVar10 = (int)cVar15;
        puVar9 = puVar8;
        if (iVar10 < 0) {
          param_2 = param_2 - 1;
          if ((*(byte *)((long)puVar24 + 0x10e52ca36) >> 3 & 1) != 0) goto code_r0x00010ae89cc0;
          goto LAB_10ae89dd0;
        }
        goto LAB_10ae89cf4;
      }
      uVar5 = (int)(char)(&UNK_10e52f5e8)[param_1[1]] << 0xc |
              (int)(char)(&UNK_10e52f5e8)[*param_1] << 0x12 |
              (int)(char)(&UNK_10e52f5e8)[param_1[2]] << 6 | (int)(char)(&UNK_10e52f5e8)[param_1[3]]
      ;
      puVar6 = (undefined8 *)(ulong)uVar5;
      if ((int)uVar5 < 0) goto LAB_10ae89c94;
      param_2 = uVar26 - 4;
      param_1 = param_1 + 4;
      goto LAB_10ae89d80;
    }
    bVar1 = false;
    iVar10 = 0;
    puVar12 = (undefined8 *)0x0;
    puVar21 = (undefined8 *)0x0;
  }
  goto LAB_10ae8a058;
code_r0x00010ae89e80:
  uVar22 = uVar22 + 1;
  uVar23 = uVar23 - 1;
  uVar20 = uVar20 - 1;
  uVar19 = uVar19 - 1;
  pbVar18 = pbVar17;
  if (param_2 < 4) {
LAB_10ae89fac:
    puVar14 = (undefined8 *)0x0;
    iVar10 = 0;
    bVar1 = true;
    param_1 = pbVar17;
    puVar21 = puVar6;
    goto joined_r0x00010ae8a23c;
  }
  goto LAB_10ae89e68;
LAB_10ae89ebc:
  puVar6 = (undefined8 *)(ulong)param_1[uVar22 + 1];
  cVar15 = *(char *)(puVar6 + 0x21ca5ebd);
  if (cVar15 < '\0') {
    uVar22 = uVar22 + 1;
    if ((*(byte *)((long)puVar6 + 0x10e52ca36) >> 3 & 1) != 0) goto code_r0x00010ae89ea8;
    goto LAB_10ae89fd4;
  }
  pbVar18 = param_1 + uVar22 + 2;
  while( true ) {
    param_2 = uVar20;
    param_1 = pbVar18 + 1;
    puVar21 = (undefined8 *)(ulong)*pbVar18;
    cVar15 = *(char *)(puVar21 + 0x21ca5ebd);
    if (-1 < cVar15) break;
    if (((*(byte *)((long)puVar21 + 0x10e52ca36) >> 3 & 1) == 0) ||
       (uVar19 = uVar19 - 1, uVar20 = param_2 - 1, pbVar18 = param_1, param_2 < 2)) {
      puVar14 = (undefined8 *)0x0;
      iVar10 = 2;
      bVar1 = true;
      goto joined_r0x00010ae8a23c;
    }
  }
  pbVar18 = pbVar18 + 1;
  while( true ) {
    param_2 = uVar19;
    param_1 = pbVar18 + 1;
    puVar21 = (undefined8 *)(ulong)*pbVar18;
    cVar15 = *(char *)(puVar21 + 0x21ca5ebd);
    if (-1 < cVar15) break;
    if (((*(byte *)((long)puVar21 + 0x10e52ca36) >> 3 & 1) == 0) ||
       (pbVar18 = param_1, uVar19 = param_2 - 1, param_2 == 0)) {
      puVar14 = (undefined8 *)0x0;
      iVar10 = 3;
      bVar1 = true;
      goto joined_r0x00010ae8a23c;
    }
  }
  param_1 = pbVar18 + 1;
LAB_10ae89f3c:
  puVar9 = (undefined8 *)((long)puVar9 + 3);
  uVar26 = param_2;
  if (param_2 < 4) goto code_r0x00010ae89f48;
  goto LAB_10ae89e04;
code_r0x00010ae89ea8:
  uVar20 = uVar20 - 1;
  uVar19 = uVar19 - 1;
  bVar1 = uVar23 < 3;
  uVar23 = uVar23 - 1;
  if (bVar1) {
LAB_10ae89fd4:
    puVar14 = (undefined8 *)0x0;
    param_1 = param_1 + uVar22;
    param_2 = ~uVar22 + uVar26;
    bVar1 = true;
    goto LAB_10ae89f80;
  }
  goto LAB_10ae89ebc;
code_r0x00010ae89f48:
  puVar14 = (undefined8 *)0x0;
  bVar1 = true;
  goto LAB_10ae89dc0;
code_r0x00010ae89cc0:
  uVar22 = uVar22 + 1;
  lVar7 = lVar7 + -1;
  uVar20 = uVar20 - 1;
  pbVar18 = pbVar17;
  if (param_2 < 4) {
LAB_10ae89dd0:
    bVar1 = false;
    iVar10 = 0;
    param_1 = pbVar17;
    puVar21 = puVar24;
    puVar12 = puVar6;
    goto joined_r0x00010ae8a23c;
  }
  goto LAB_10ae89ca8;
LAB_10ae89cf4:
  param_2 = uVar26 + lVar7;
  puVar6 = (undefined8 *)(ulong)param_1[uVar22 + 1];
  cVar15 = *(char *)(puVar6 + 0x21ca5ebd);
  if (cVar15 < 0) {
    uVar22 = uVar22 + 1;
    if ((*(byte *)((long)puVar6 + 0x10e52ca36) >> 3 & 1) != 0) goto code_r0x00010ae89ce4;
    goto LAB_10ae89f6c;
  }
  uVar5 = (int)cVar15 | iVar10 << 6;
  puVar12 = (undefined8 *)(ulong)uVar5;
  pbVar18 = param_1 + uVar22 + 2;
  while( true ) {
    param_1 = pbVar18 + 1;
    puVar21 = (undefined8 *)(ulong)*pbVar18;
    cVar15 = *(char *)(puVar21 + 0x21ca5ebd);
    if (-1 < cVar15) break;
    param_2 = param_2 - 1;
    if (((*(byte *)((long)puVar21 + 0x10e52ca36) >> 3 & 1) == 0) ||
       (uVar20 = uVar20 - 1, pbVar18 = param_1, param_2 < 2)) {
      bVar1 = false;
      iVar10 = 2;
      goto joined_r0x00010ae8a23c;
    }
  }
  uVar5 = (int)cVar15 | uVar5 << 6;
  puVar12 = (undefined8 *)(ulong)uVar5;
  pbVar18 = pbVar18 + 1;
  while( true ) {
    param_2 = uVar20;
    param_1 = pbVar18 + 1;
    puVar21 = (undefined8 *)(ulong)*pbVar18;
    cVar15 = *(char *)(puVar21 + 0x21ca5ebd);
    if (-1 < cVar15) break;
    if (((*(byte *)((long)puVar21 + 0x10e52ca36) >> 3 & 1) == 0) ||
       (pbVar18 = param_1, uVar20 = param_2 - 1, param_2 == 0)) {
      bVar1 = false;
      iVar10 = 3;
      goto joined_r0x00010ae8a23c;
    }
  }
  uVar5 = (int)cVar15 | uVar5 << 6;
  param_1 = pbVar18 + 1;
LAB_10ae89d80:
  puVar9 = (undefined8 *)((long)puVar8 + 3);
  if (puVar25 < puVar9) goto LAB_10ae8a1b8;
  *(ushort *)((undefined1 *)((long)puVar14 + (long)puVar8) + 1) =
       (ushort)(uVar5 >> 8) & 0xff | (ushort)((uVar5 & 0xff00ff) << 8);
  puVar6 = (undefined8 *)(ulong)(uVar5 >> 0x10);
  *(undefined1 *)((long)puVar14 + (long)puVar8) = (char)(uVar5 >> 0x10);
  puVar8 = puVar9;
  uVar26 = param_2;
  if (param_2 < 4) goto code_r0x00010ae89db0;
  goto LAB_10ae89c48;
code_r0x00010ae89ce4:
  lVar7 = lVar7 + -1;
  uVar20 = uVar20 - 1;
  if (2 < param_2) goto LAB_10ae89cf4;
LAB_10ae89f6c:
  bVar1 = false;
  param_1 = param_1 + uVar22;
  param_2 = ~uVar22 + uVar26;
LAB_10ae89f80:
  iVar10 = 1;
  param_1 = param_1 + 1;
  puVar21 = puVar6;
  goto joined_r0x00010ae8a23c;
code_r0x00010ae89db0:
  bVar1 = false;
  puVar12 = puVar6;
LAB_10ae89dc0:
  iVar10 = 0;
  uVar26 = param_2;
joined_r0x00010ae8a23c:
  uVar16 = SUB84(puVar21,0);
  if (cVar15 < '\0') {
    if ((uVar16 != 0x2e) && (uVar16 != 0x3d)) {
      if ((*(byte *)((long)puVar21 + 0x10e52ca36) >> 3 & 1) == 0) goto LAB_10ae8a1b8;
      goto LAB_10ae8a024;
    }
  }
  else {
LAB_10ae8a024:
    if ((uVar16 != 0x2e) && (puVar21 = puVar9, uVar16 != 0x3d)) {
LAB_10ae8a058:
      while( true ) {
        do {
          do {
            puVar9 = puVar21;
            uVar22 = 0;
            while( true ) {
              uVar20 = uVar22;
              uVar26 = param_2;
              if (param_2 == uVar20) {
                lVar7 = 0;
                param_1 = param_1 + param_2;
                goto LAB_10ae8a110;
              }
              bVar3 = param_1[uVar20];
              if (-1 < (char)(&UNK_10e52f5e8)[bVar3]) break;
              uVar22 = uVar20 + 1;
              if (((byte)(&UNK_10e52ca36)[bVar3] >> 3 & 1) == 0) {
                param_1 = param_1 + uVar20;
                lVar7 = (param_2 - (uVar20 + 1)) + 1;
                if ((bVar3 == 0x2e) || (bVar3 == 0x3d)) goto LAB_10ae8a110;
                goto LAB_10ae8a1b8;
              }
            }
            iVar11 = (int)puVar12;
            uVar5 = (int)(char)(&UNK_10e52f5e8)[bVar3] | iVar11 << 6;
            puVar12 = (undefined8 *)(ulong)uVar5;
            iVar10 = iVar10 + 1;
            param_1 = param_1 + uVar20 + 1;
            param_2 = ~uVar20 + param_2;
            puVar21 = puVar9;
          } while (iVar10 != 4);
          iVar10 = 0;
          iVar11 = iVar11 << 6;
          puVar21 = (undefined8 *)((long)puVar9 + 3);
          puVar12 = (undefined8 *)0x0;
        } while (bVar1);
        if (puVar25 < puVar21) break;
        iVar10 = 0;
        puVar12 = (undefined8 *)0x0;
        puVar2 = (undefined1 *)((long)puVar14 + (long)puVar9);
        puVar2[2] = (char)uVar5;
        puVar2[1] = (char)((uint)iVar11 >> 8);
        *puVar2 = (char)((uint)iVar11 >> 0x10);
      }
      goto LAB_10ae8a1b8;
    }
  }
  lVar7 = param_2 + 1;
  param_1 = param_1 + -1;
LAB_10ae8a110:
  if (iVar10 < 2) {
    if (iVar10 != 0) goto LAB_10ae8a1b8;
    uVar5 = 0xffffffff;
    puVar21 = puVar9;
  }
  else if (iVar10 == 3) {
    puVar21 = (undefined8 *)((long)puVar9 + 2);
    if (!bVar1) {
      if (puVar25 < puVar21) goto LAB_10ae8a1b8;
      ((undefined1 *)((long)puVar14 + (long)puVar9))[1] = (char)((ulong)puVar12 >> 2);
      *(undefined1 *)((long)puVar14 + (long)puVar9) = (char)((ulong)puVar12 >> 10);
    }
    uVar5 = 0xfffffffe;
  }
  else {
    puVar21 = (undefined8 *)((long)puVar9 + 1);
    if (!bVar1) {
      if (puVar25 < puVar21) goto LAB_10ae8a1b8;
      *(char *)((long)puVar14 + (long)puVar9) = (char)((ulong)puVar12 >> 4);
    }
    uVar5 = 0xfffffffd;
  }
  uVar13 = 0;
  for (; lVar7 != 0; lVar7 = lVar7 + -1) {
    bVar3 = *param_1;
    if ((bVar3 == 0x3d) || (bVar3 == 0x2e)) {
      uVar13 = uVar13 + 1;
    }
    else if (((byte)(&UNK_10e52ca36)[bVar3] >> 3 & 1) == 0) goto LAB_10ae8a1b8;
    param_1 = param_1 + 1;
  }
  if ((uVar13 & uVar5) != 0) {
LAB_10ae8a1b8:
    if (*(char *)((long)param_3 + 0x17) < '\0') {
      *(undefined1 *)*param_3 = 0;
      param_3[1] = 0;
    }
    else {
      *(undefined1 *)param_3 = 0;
      *(undefined1 *)((long)param_3 + 0x17) = 0;
    }
    return (undefined8 *)0x0;
  }
  if ((long)*(char *)((long)param_3 + 0x17) < 0) {
    if (puVar21 <= (undefined8 *)param_3[1]) {
      param_3[1] = puVar21;
      param_3 = (undefined8 *)*param_3;
      goto LAB_10ae8a210;
    }
  }
  else if (puVar21 <= (undefined8 *)(long)*(char *)((long)param_3 + 0x17)) {
    *(char *)((long)param_3 + 0x17) = (char)puVar21;
LAB_10ae8a210:
    *(undefined1 *)((long)param_3 + (long)puVar21) = 0;
    return (undefined8 *)0x1;
  }
  func_0x000109276104();
  puVar27 = &UNK_10e52f5e8;
  pcVar29 = FUN_10ae8a248;
  *extraout_x8 = 0;
  extraout_x8[1] = 0;
  extraout_x8[2] = 0;
  lVar7 = ((ulong)puVar24 / 3) * 4;
  lVar4 = (long)puVar24 - (((ulong)puVar24 / 3) * 2 + (ulong)puVar24 / 3);
  if (lVar4 != 0) {
    lVar7 = lVar7 + 4;
  }
  func_0x000107c34fec(lVar4,extraout_x8,lVar7);
  puVar14 = (undefined8 *)*extraout_x8;
  uVar22 = extraout_x8[1];
  if (-1 < (char)*(byte *)((long)extraout_x8 + 0x17)) {
    uVar22 = (ulong)*(byte *)((long)extraout_x8 + 0x17);
    puVar14 = extraout_x8;
  }
  FUN_10ae87534(puVar6,puVar24,puVar14,uVar22,&UNK_10e52c992,1,in_x6,in_x7,uVar26,puVar27,puVar25,
                param_3,puVar28,pcVar29);
  if ((long)*(char *)((long)extraout_x8 + 0x17) < 0) {
    if ((undefined8 *)extraout_x8[1] < puVar6) goto LAB_10ae8a314;
    extraout_x8[1] = puVar6;
    puVar24 = (undefined8 *)*extraout_x8;
  }
  else {
    if ((undefined8 *)(long)*(char *)((long)extraout_x8 + 0x17) < puVar6) {
LAB_10ae8a314:
      func_0x000109276104();
                    /* WARNING: Does not return */
      pcVar29 = (code *)SoftwareBreakpoint(1,0x10ae8a31c);
      (*pcVar29)();
    }
    *(char *)((long)extraout_x8 + 0x17) = (char)puVar6;
    puVar24 = extraout_x8;
  }
  *(undefined1 *)((long)puVar24 + (long)puVar6) = 0;
  return puVar6;
}



/* Entry: 10ae89bc0; end: 10ae8a247;  */

/* WARNING: Type propagation algorithm not settling */

undefined8 *
FUN_10ae89bc0(byte *param_1,ulong param_2,undefined8 *param_3,long param_4,undefined8 param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  bool bVar1;
  undefined1 *puVar2;
  byte bVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *extraout_x8;
  undefined8 *puVar7;
  undefined8 *puVar8;
  int iVar9;
  int iVar10;
  undefined8 *puVar11;
  uint uVar12;
  undefined8 *puVar13;
  char cVar14;
  uint uVar15;
  undefined4 uVar16;
  byte *pbVar17;
  byte *pbVar18;
  ulong uVar19;
  ulong uVar20;
  undefined8 *puVar21;
  ulong uVar22;
  ulong uVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  ulong uVar26;
  undefined1 *puVar27;
  code *pcVar28;
  
  puVar27 = &stack0xfffffffffffffff0;
  puVar25 = (undefined8 *)(param_2 - (param_2 >> 2));
  puVar5 = param_3;
  puVar24 = puVar25;
  func_0x000107c34fec();
  uVar26 = param_2;
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    puVar13 = (undefined8 *)*param_3;
    if (puVar13 == (undefined8 *)0x0) {
      if (3 < param_2) {
        puVar11 = (undefined8 *)0x0;
        puVar21 = (undefined8 *)0x0;
        cVar14 = '\0';
        puVar8 = (undefined8 *)0x0;
LAB_10ae89e04:
        if (((((ulong)*param_1 == 0) || ((ulong)param_1[1] == 0)) || ((ulong)param_1[2] == 0)) ||
           (uVar15 = (int)*(char *)(param_4 + (ulong)param_1[1]) << 0xc |
                     (int)*(char *)(param_4 + (ulong)*param_1) << 0x12 |
                     (int)*(char *)(param_4 + (ulong)param_1[2]) << 6 |
                     (int)*(char *)(param_4 + (ulong)param_1[3]),
           puVar11 = (undefined8 *)(ulong)uVar15, (int)uVar15 < 0)) {
          uVar22 = 0;
          uVar23 = uVar26 - 2;
          uVar20 = uVar26 - 3;
          uVar19 = uVar26 - 4;
          pbVar18 = param_1;
          param_2 = uVar26;
LAB_10ae89e68:
          pbVar17 = pbVar18 + 1;
          puVar5 = (undefined8 *)(ulong)*pbVar18;
          cVar14 = *(char *)(param_4 + (long)puVar5);
          if (cVar14 < '\0') {
            param_2 = param_2 - 1;
            puVar24 = (undefined8 *)(ulong)*(byte *)((long)puVar5 + 0x10e52ca36);
            if ((*(byte *)((long)puVar5 + 0x10e52ca36) >> 3 & 1) != 0) goto code_r0x00010ae89e80;
            goto LAB_10ae89fac;
          }
          goto LAB_10ae89ebc;
        }
        param_2 = uVar26 - 4;
        param_1 = param_1 + 4;
        goto LAB_10ae89f3c;
      }
      puVar13 = (undefined8 *)0x0;
      iVar9 = 0;
      puVar11 = (undefined8 *)0x0;
      bVar1 = true;
      puVar21 = (undefined8 *)0x0;
    }
    else {
      if (3 < param_2) goto LAB_10ae89c38;
      bVar1 = false;
      iVar9 = 0;
      puVar11 = (undefined8 *)0x0;
      puVar21 = (undefined8 *)0x0;
    }
  }
  else {
    puVar13 = param_3;
    if (3 < param_2) {
LAB_10ae89c38:
      puVar5 = (undefined8 *)0x0;
      puVar21 = (undefined8 *)0x0;
      cVar14 = '\0';
      puVar7 = (undefined8 *)0x0;
LAB_10ae89c48:
      if ((((ulong)*param_1 == 0) || ((ulong)param_1[1] == 0)) || ((ulong)param_1[2] == 0)) {
LAB_10ae89c94:
        uVar22 = 0;
        uVar20 = uVar26 - 4;
        lVar6 = -2;
        pbVar18 = param_1;
        param_2 = uVar26;
LAB_10ae89ca8:
        pbVar17 = pbVar18 + 1;
        puVar24 = (undefined8 *)(ulong)*pbVar18;
        cVar14 = *(char *)(param_4 + (long)puVar24);
        puVar11 = (undefined8 *)(long)cVar14;
        iVar9 = (int)cVar14;
        puVar8 = puVar7;
        if (iVar9 < 0) {
          param_2 = param_2 - 1;
          if ((*(byte *)((long)puVar24 + 0x10e52ca36) >> 3 & 1) != 0) goto code_r0x00010ae89cc0;
          goto LAB_10ae89dd0;
        }
        goto LAB_10ae89cf4;
      }
      uVar15 = (int)*(char *)(param_4 + (ulong)param_1[1]) << 0xc |
               (int)*(char *)(param_4 + (ulong)*param_1) << 0x12 |
               (int)*(char *)(param_4 + (ulong)param_1[2]) << 6 |
               (int)*(char *)(param_4 + (ulong)param_1[3]);
      puVar5 = (undefined8 *)(ulong)uVar15;
      if ((int)uVar15 < 0) goto LAB_10ae89c94;
      param_2 = uVar26 - 4;
      param_1 = param_1 + 4;
      goto LAB_10ae89d80;
    }
    bVar1 = false;
    iVar9 = 0;
    puVar11 = (undefined8 *)0x0;
    puVar21 = (undefined8 *)0x0;
  }
  goto LAB_10ae8a058;
code_r0x00010ae89e80:
  uVar22 = uVar22 + 1;
  uVar23 = uVar23 - 1;
  uVar20 = uVar20 - 1;
  uVar19 = uVar19 - 1;
  pbVar18 = pbVar17;
  if (param_2 < 4) {
LAB_10ae89fac:
    puVar13 = (undefined8 *)0x0;
    iVar9 = 0;
    bVar1 = true;
    param_1 = pbVar17;
    puVar21 = puVar5;
    goto joined_r0x00010ae8a23c;
  }
  goto LAB_10ae89e68;
LAB_10ae89ebc:
  puVar5 = (undefined8 *)(ulong)param_1[uVar22 + 1];
  cVar14 = *(char *)(param_4 + (long)puVar5);
  if (cVar14 < '\0') {
    uVar22 = uVar22 + 1;
    if ((*(byte *)((long)puVar5 + 0x10e52ca36) >> 3 & 1) != 0) goto code_r0x00010ae89ea8;
    goto LAB_10ae89fd4;
  }
  pbVar18 = param_1 + uVar22 + 2;
  while( true ) {
    param_2 = uVar20;
    param_1 = pbVar18 + 1;
    puVar21 = (undefined8 *)(ulong)*pbVar18;
    cVar14 = *(char *)(param_4 + (long)puVar21);
    if (-1 < cVar14) break;
    if (((*(byte *)((long)puVar21 + 0x10e52ca36) >> 3 & 1) == 0) ||
       (uVar19 = uVar19 - 1, uVar20 = param_2 - 1, pbVar18 = param_1, param_2 < 2)) {
      puVar13 = (undefined8 *)0x0;
      iVar9 = 2;
      bVar1 = true;
      goto joined_r0x00010ae8a23c;
    }
  }
  pbVar18 = pbVar18 + 1;
  while( true ) {
    param_2 = uVar19;
    param_1 = pbVar18 + 1;
    puVar21 = (undefined8 *)(ulong)*pbVar18;
    cVar14 = *(char *)(param_4 + (long)puVar21);
    if (-1 < cVar14) break;
    if (((*(byte *)((long)puVar21 + 0x10e52ca36) >> 3 & 1) == 0) ||
       (pbVar18 = param_1, uVar19 = param_2 - 1, param_2 == 0)) {
      puVar13 = (undefined8 *)0x0;
      iVar9 = 3;
      bVar1 = true;
      goto joined_r0x00010ae8a23c;
    }
  }
  param_1 = pbVar18 + 1;
LAB_10ae89f3c:
  puVar8 = (undefined8 *)((long)puVar8 + 3);
  uVar26 = param_2;
  if (param_2 < 4) goto code_r0x00010ae89f48;
  goto LAB_10ae89e04;
code_r0x00010ae89ea8:
  uVar20 = uVar20 - 1;
  uVar19 = uVar19 - 1;
  bVar1 = uVar23 < 3;
  uVar23 = uVar23 - 1;
  if (bVar1) {
LAB_10ae89fd4:
    puVar13 = (undefined8 *)0x0;
    param_1 = param_1 + uVar22;
    param_2 = ~uVar22 + uVar26;
    bVar1 = true;
    goto LAB_10ae89f80;
  }
  goto LAB_10ae89ebc;
code_r0x00010ae89f48:
  puVar13 = (undefined8 *)0x0;
  bVar1 = true;
  goto LAB_10ae89dc0;
code_r0x00010ae89cc0:
  uVar22 = uVar22 + 1;
  lVar6 = lVar6 + -1;
  uVar20 = uVar20 - 1;
  pbVar18 = pbVar17;
  if (param_2 < 4) {
LAB_10ae89dd0:
    bVar1 = false;
    iVar9 = 0;
    param_1 = pbVar17;
    puVar21 = puVar24;
    puVar11 = puVar5;
    goto joined_r0x00010ae8a23c;
  }
  goto LAB_10ae89ca8;
LAB_10ae89cf4:
  param_2 = uVar26 + lVar6;
  puVar5 = (undefined8 *)(ulong)param_1[uVar22 + 1];
  cVar14 = *(char *)(param_4 + (long)puVar5);
  if (cVar14 < 0) {
    uVar22 = uVar22 + 1;
    if ((*(byte *)((long)puVar5 + 0x10e52ca36) >> 3 & 1) != 0) goto code_r0x00010ae89ce4;
    goto LAB_10ae89f6c;
  }
  uVar15 = (int)cVar14 | iVar9 << 6;
  puVar11 = (undefined8 *)(ulong)uVar15;
  pbVar18 = param_1 + uVar22 + 2;
  while( true ) {
    param_1 = pbVar18 + 1;
    puVar21 = (undefined8 *)(ulong)*pbVar18;
    cVar14 = *(char *)(param_4 + (long)puVar21);
    if (-1 < cVar14) break;
    param_2 = param_2 - 1;
    if (((*(byte *)((long)puVar21 + 0x10e52ca36) >> 3 & 1) == 0) ||
       (uVar20 = uVar20 - 1, pbVar18 = param_1, param_2 < 2)) {
      bVar1 = false;
      iVar9 = 2;
      goto joined_r0x00010ae8a23c;
    }
  }
  uVar15 = (int)cVar14 | uVar15 << 6;
  puVar11 = (undefined8 *)(ulong)uVar15;
  pbVar18 = pbVar18 + 1;
  while( true ) {
    param_2 = uVar20;
    param_1 = pbVar18 + 1;
    puVar21 = (undefined8 *)(ulong)*pbVar18;
    cVar14 = *(char *)(param_4 + (long)puVar21);
    if (-1 < cVar14) break;
    if (((*(byte *)((long)puVar21 + 0x10e52ca36) >> 3 & 1) == 0) ||
       (pbVar18 = param_1, uVar20 = param_2 - 1, param_2 == 0)) {
      bVar1 = false;
      iVar9 = 3;
      goto joined_r0x00010ae8a23c;
    }
  }
  uVar15 = (int)cVar14 | uVar15 << 6;
  param_1 = pbVar18 + 1;
LAB_10ae89d80:
  puVar8 = (undefined8 *)((long)puVar7 + 3);
  if (puVar25 < puVar8) goto LAB_10ae8a1b8;
  *(ushort *)((undefined1 *)((long)puVar13 + (long)puVar7) + 1) =
       (ushort)(uVar15 >> 8) & 0xff | (ushort)((uVar15 & 0xff00ff) << 8);
  puVar5 = (undefined8 *)(ulong)(uVar15 >> 0x10);
  *(undefined1 *)((long)puVar13 + (long)puVar7) = (char)(uVar15 >> 0x10);
  puVar7 = puVar8;
  uVar26 = param_2;
  if (param_2 < 4) goto code_r0x00010ae89db0;
  goto LAB_10ae89c48;
code_r0x00010ae89ce4:
  lVar6 = lVar6 + -1;
  uVar20 = uVar20 - 1;
  if (2 < param_2) goto LAB_10ae89cf4;
LAB_10ae89f6c:
  bVar1 = false;
  param_1 = param_1 + uVar22;
  param_2 = ~uVar22 + uVar26;
LAB_10ae89f80:
  iVar9 = 1;
  param_1 = param_1 + 1;
  puVar21 = puVar5;
  goto joined_r0x00010ae8a23c;
code_r0x00010ae89db0:
  bVar1 = false;
  puVar11 = puVar5;
LAB_10ae89dc0:
  iVar9 = 0;
  uVar26 = param_2;
joined_r0x00010ae8a23c:
  uVar16 = SUB84(puVar21,0);
  if (cVar14 < '\0') {
    if ((uVar16 != 0x2e) && (uVar16 != 0x3d)) {
      if ((*(byte *)((long)puVar21 + 0x10e52ca36) >> 3 & 1) == 0) goto LAB_10ae8a1b8;
      goto LAB_10ae8a024;
    }
  }
  else {
LAB_10ae8a024:
    if ((uVar16 != 0x2e) && (puVar21 = puVar8, uVar16 != 0x3d)) {
LAB_10ae8a058:
      while( true ) {
        do {
          do {
            puVar8 = puVar21;
            uVar22 = 0;
            while( true ) {
              uVar20 = uVar22;
              uVar26 = param_2;
              if (param_2 == uVar20) {
                lVar6 = 0;
                param_1 = param_1 + param_2;
                goto LAB_10ae8a110;
              }
              bVar3 = param_1[uVar20];
              uVar15 = (uint)*(char *)(param_4 + (ulong)bVar3);
              if (-1 < (int)uVar15) break;
              uVar22 = uVar20 + 1;
              if (((byte)(&UNK_10e52ca36)[bVar3] >> 3 & 1) == 0) {
                param_1 = param_1 + uVar20;
                lVar6 = (param_2 - (uVar20 + 1)) + 1;
                if ((bVar3 == 0x2e) || (bVar3 == 0x3d)) goto LAB_10ae8a110;
                goto LAB_10ae8a1b8;
              }
            }
            iVar10 = (int)puVar11;
            uVar15 = uVar15 | iVar10 << 6;
            puVar11 = (undefined8 *)(ulong)uVar15;
            iVar9 = iVar9 + 1;
            param_1 = param_1 + uVar20 + 1;
            param_2 = ~uVar20 + param_2;
            puVar21 = puVar8;
          } while (iVar9 != 4);
          iVar9 = 0;
          iVar10 = iVar10 << 6;
          puVar21 = (undefined8 *)((long)puVar8 + 3);
          puVar11 = (undefined8 *)0x0;
        } while (bVar1);
        if (puVar25 < puVar21) break;
        iVar9 = 0;
        puVar11 = (undefined8 *)0x0;
        puVar2 = (undefined1 *)((long)puVar13 + (long)puVar8);
        puVar2[2] = (char)uVar15;
        puVar2[1] = (char)((uint)iVar10 >> 8);
        *puVar2 = (char)((uint)iVar10 >> 0x10);
      }
      goto LAB_10ae8a1b8;
    }
  }
  lVar6 = param_2 + 1;
  param_1 = param_1 + -1;
LAB_10ae8a110:
  if (iVar9 < 2) {
    if (iVar9 != 0) goto LAB_10ae8a1b8;
    uVar15 = 0xffffffff;
    puVar21 = puVar8;
  }
  else if (iVar9 == 3) {
    puVar21 = (undefined8 *)((long)puVar8 + 2);
    if (!bVar1) {
      if (puVar25 < puVar21) goto LAB_10ae8a1b8;
      ((undefined1 *)((long)puVar13 + (long)puVar8))[1] = (char)((ulong)puVar11 >> 2);
      *(undefined1 *)((long)puVar13 + (long)puVar8) = (char)((ulong)puVar11 >> 10);
    }
    uVar15 = 0xfffffffe;
  }
  else {
    puVar21 = (undefined8 *)((long)puVar8 + 1);
    if (!bVar1) {
      if (puVar25 < puVar21) goto LAB_10ae8a1b8;
      *(char *)((long)puVar13 + (long)puVar8) = (char)((ulong)puVar11 >> 4);
    }
    uVar15 = 0xfffffffd;
  }
  uVar12 = 0;
  for (; lVar6 != 0; lVar6 = lVar6 + -1) {
    bVar3 = *param_1;
    if ((bVar3 == 0x3d) || (bVar3 == 0x2e)) {
      uVar12 = uVar12 + 1;
    }
    else if (((byte)(&UNK_10e52ca36)[bVar3] >> 3 & 1) == 0) goto LAB_10ae8a1b8;
    param_1 = param_1 + 1;
  }
  if ((uVar12 & uVar15) != 0) {
LAB_10ae8a1b8:
    if (*(char *)((long)param_3 + 0x17) < '\0') {
      *(undefined1 *)*param_3 = 0;
      param_3[1] = 0;
    }
    else {
      *(undefined1 *)param_3 = 0;
      *(undefined1 *)((long)param_3 + 0x17) = 0;
    }
    return (undefined8 *)0x0;
  }
  if ((long)*(char *)((long)param_3 + 0x17) < 0) {
    if (puVar21 <= (undefined8 *)param_3[1]) {
      param_3[1] = puVar21;
      param_3 = (undefined8 *)*param_3;
      goto LAB_10ae8a210;
    }
  }
  else if (puVar21 <= (undefined8 *)(long)*(char *)((long)param_3 + 0x17)) {
    *(char *)((long)param_3 + 0x17) = (char)puVar21;
LAB_10ae8a210:
    *(undefined1 *)((long)param_3 + (long)puVar21) = 0;
    return (undefined8 *)0x1;
  }
  func_0x000109276104();
  pcVar28 = FUN_10ae8a248;
  *extraout_x8 = 0;
  extraout_x8[1] = 0;
  extraout_x8[2] = 0;
  lVar6 = ((ulong)puVar24 / 3) * 4;
  lVar4 = (long)puVar24 - (((ulong)puVar24 / 3) * 2 + (ulong)puVar24 / 3);
  if (lVar4 != 0) {
    lVar6 = lVar6 + 4;
  }
  func_0x000107c34fec(lVar4,extraout_x8,lVar6);
  puVar13 = (undefined8 *)*extraout_x8;
  uVar22 = extraout_x8[1];
  if (-1 < (char)*(byte *)((long)extraout_x8 + 0x17)) {
    uVar22 = (ulong)*(byte *)((long)extraout_x8 + 0x17);
    puVar13 = extraout_x8;
  }
  FUN_10ae87534(puVar5,puVar24,puVar13,uVar22,&UNK_10e52c992,1,param_7,param_8,uVar26,param_4,
                puVar25,param_3,puVar27,pcVar28);
  if ((long)*(char *)((long)extraout_x8 + 0x17) < 0) {
    if ((undefined8 *)extraout_x8[1] < puVar5) goto LAB_10ae8a314;
    extraout_x8[1] = puVar5;
    puVar24 = (undefined8 *)*extraout_x8;
  }
  else {
    if ((undefined8 *)(long)*(char *)((long)extraout_x8 + 0x17) < puVar5) {
LAB_10ae8a314:
      func_0x000109276104();
                    /* WARNING: Does not return */
      pcVar28 = (code *)SoftwareBreakpoint(1,0x10ae8a31c);
      (*pcVar28)();
    }
    *(char *)((long)extraout_x8 + 0x17) = (char)puVar5;
    puVar24 = extraout_x8;
  }
  *(undefined1 *)((long)puVar24 + (long)puVar5) = 0;
  return puVar5;
}



/* Entry: 10ae8a248; end: 10ae8a337;  */

void FUN_10ae8a248(undefined8 *param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  code *pcVar4;
  long lVar5;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar5 = (param_3 / 3) * 4;
  lVar2 = param_3 - ((param_3 / 3) * 2 + param_3 / 3);
  if (lVar2 != 0) {
    lVar5 = lVar5 + 4;
  }
  func_0x000107c34fec(lVar2,param_1,lVar5);
  uVar1 = param_1[1];
  puVar3 = (undefined8 *)*param_1;
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_1 + 0x17);
    puVar3 = param_1;
  }
  FUN_10ae87534(param_2,param_3,puVar3,uVar1,&UNK_10e52c992,1);
  if ((long)*(char *)((long)param_1 + 0x17) < 0) {
    if ((ulong)param_1[1] < param_2) goto LAB_10ae8a314;
    param_1[1] = param_2;
    param_1 = (undefined8 *)*param_1;
  }
  else {
    if ((ulong)(long)*(char *)((long)param_1 + 0x17) < param_2) {
LAB_10ae8a314:
      func_0x000109276104();
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10ae8a31c);
      (*pcVar4)();
    }
    *(char *)((long)param_1 + 0x17) = (char)param_2;
  }
  *(undefined1 *)((long)param_1 + param_2) = 0;
  return;
}



/* Entry: 10ae8a338; end: 10ae8a3c3;  */

void FUN_10ae8a338(undefined8 *param_1,byte *param_2,long param_3)

{
  undefined8 *puVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  func_0x000107c34fec(param_1,param_3 << 1);
  if (param_3 != 0) {
    puVar1 = (undefined8 *)*param_1;
    if (-1 < *(char *)((long)param_1 + 0x17)) {
      puVar1 = param_1;
    }
    do {
      *(undefined2 *)puVar1 = *(undefined2 *)(&UNK_10e530083 + (ulong)*param_2 * 2);
      param_3 = param_3 + -1;
      puVar1 = (undefined8 *)((long)puVar1 + 2);
      param_2 = param_2 + 1;
    } while (param_3 != 0);
  }
  return;
}



/* Entry: 10ae8a3c4; end: 10ae8a69b;  */

ulong FUN_10ae8a3c4(uint *param_1,char *param_2,char *param_3,int param_4)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  char cVar9;
  char *pcVar10;
  char *pcVar11;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  
  if (0 < (int)*param_1) {
    _bzero(param_1 + 1,(ulong)*param_1 << 2);
  }
  *param_1 = 0;
  pcVar10 = param_2;
  if (param_2 < param_3) {
    do {
      pcVar10 = param_2;
      if (*param_2 != '0') break;
      param_2 = param_2 + 1;
      pcVar10 = param_3;
    } while (param_2 != param_3);
  }
  if (pcVar10 < param_3) {
    uVar8 = 0;
    iVar3 = (int)param_3;
    uVar12 = iVar3 - (uint)pcVar10;
    pcVar11 = param_3;
    do {
      param_3 = pcVar11 + -1;
      if (*param_3 != '0') {
        if (*param_3 != '.') {
          uVar14 = uVar8;
          if ((int)uVar8 == 0) goto LAB_10ae8a4f0;
          goto LAB_10ae8a4c8;
        }
        if (param_3 <= pcVar10) goto LAB_10ae8a4b4;
        uVar13 = 0;
        goto LAB_10ae8a48c;
      }
      uVar8 = uVar8 + 1;
      pcVar11 = param_3;
    } while (pcVar10 < param_3);
    pcVar11 = pcVar10;
    uVar8 = (ulong)uVar12;
    if (uVar12 == 0) {
      uVar14 = 0;
    }
    else {
LAB_10ae8a4c8:
      pcVar4 = pcVar10;
      _memchr(pcVar10,0x2e,(long)pcVar11 - (long)pcVar10);
      pcVar5 = pcVar11;
      if (pcVar4 != (char *)0x0) {
        pcVar5 = pcVar4;
      }
      uVar12 = (uint)uVar8;
      if (pcVar5 != pcVar11) {
        uVar12 = 0;
      }
      uVar14 = (ulong)uVar12;
    }
  }
  else {
LAB_10ae8a4b4:
    pcVar11 = param_3;
    uVar14 = 0;
  }
  goto LAB_10ae8a4f0;
  while( true ) {
    uVar13 = (ulong)((int)uVar13 + 1);
    param_3 = param_3 + -1;
    pcVar11 = pcVar10;
    uVar14 = (~(uint)pcVar10 + iVar3) - uVar8;
    if (param_3 <= pcVar10) break;
LAB_10ae8a48c:
    pcVar11 = param_3;
    uVar14 = uVar13;
    if (param_3[-1] != '0') break;
  }
LAB_10ae8a4f0:
  iVar3 = 0;
  if ((0 < param_4) && (pcVar10 != pcVar11)) {
    iVar6 = 0;
    uVar12 = 0;
    iVar3 = 0;
    do {
      cVar2 = *pcVar10;
      if (cVar2 == '.') {
        iVar3 = 1;
      }
      else {
        cVar9 = cVar2 + -0x30;
        param_4 = param_4 + -1;
        if (((param_4 == 0) && (pcVar10 + 1 != pcVar11)) && ((cVar2 == '5' || (cVar2 == '0')))) {
          cVar9 = cVar2 + -0x2f;
        }
        uVar14 = (ulong)(uint)((int)uVar14 - iVar3);
        uVar12 = uVar12 * 10 + (int)cVar9;
        iVar6 = iVar6 + 1;
        if (iVar6 == 9) {
          FUN_10ae8a874(param_1,1000000000);
          if (uVar12 == 0) {
            iVar6 = 0;
          }
          else {
            uVar8 = 0;
            do {
              uVar1 = param_1[uVar8 + 1];
              param_1[uVar8 + 1] = uVar1 + uVar12;
              uVar7 = (uint)uVar8;
              if (CARRY4(uVar1,uVar12)) {
                uVar7 = uVar7 + 1;
              }
              uVar8 = (ulong)uVar7;
            } while ((CARRY4(uVar1,uVar12)) && (uVar12 = 1, uVar7 < 0x54));
            uVar12 = 0;
            iVar6 = 0;
            uVar1 = *param_1;
            if ((int)uVar1 < (int)(uVar7 + 1)) {
              uVar1 = uVar7 + 1;
            }
            if (0x53 < uVar1) {
              uVar1 = 0x54;
            }
            *param_1 = uVar1;
          }
        }
      }
      pcVar10 = pcVar10 + 1;
    } while ((pcVar10 != pcVar11) && (0 < param_4));
    if ((iVar6 != 0) &&
       (FUN_10ae8a874(param_1,*(undefined4 *)(&UNK_10e52f820 + (long)iVar6 * 4)), uVar12 != 0)) {
      uVar8 = 0;
      do {
        uVar1 = param_1[uVar8 + 1];
        param_1[uVar8 + 1] = uVar1 + uVar12;
        uVar7 = (uint)uVar8;
        if (CARRY4(uVar1,uVar12)) {
          uVar7 = uVar7 + 1;
        }
        uVar8 = (ulong)uVar7;
      } while ((CARRY4(uVar1,uVar12)) && (uVar12 = 1, uVar7 < 0x54));
      uVar12 = *param_1;
      if ((int)uVar12 < (int)(uVar7 + 1)) {
        uVar12 = uVar7 + 1;
      }
      if (0x53 < uVar12) {
        uVar12 = 0x54;
      }
      *param_1 = uVar12;
    }
  }
  if ((pcVar10 < pcVar11) && (iVar3 == 0)) {
    pcVar5 = pcVar10;
    _memchr(pcVar10,0x2e,(long)pcVar11 - (long)pcVar10);
    iVar3 = (int)pcVar11;
    if (pcVar5 != (char *)0x0) {
      iVar3 = (int)pcVar5;
    }
    uVar14 = (ulong)(uint)((int)uVar14 + (iVar3 - (int)pcVar10));
  }
  return uVar14;
}



/* Entry: 10ae8a69c; end: 10ae8a873;  */

int FUN_10ae8a69c(uint *param_1,ulong *param_2,undefined8 param_3)

{
  uint uVar1;
  ulong uVar2;
  
  if (0 < (int)*param_1) {
    _bzero(param_1 + 1,(ulong)*param_1 << 2);
  }
  *param_1 = 0;
  if (param_2[3] != 0) {
    FUN_10ae8a3c4(param_1,param_2[3],param_2[4],param_3);
    return *(int *)((long)param_2 + 0xc) + (int)param_1;
  }
  uVar2 = *param_2;
  *(ulong *)(param_1 + 1) = uVar2;
  if (uVar2 >> 0x20 == 0) {
    if ((int)uVar2 == 0) goto LAB_10ae8a71c;
    uVar1 = 1;
  }
  else {
    uVar1 = 2;
  }
  *param_1 = uVar1;
LAB_10ae8a71c:
  return (int)param_2[1];
}



/* Entry: 10ae8a874; end: 10ae8a907;  */

void FUN_10ae8a874(uint *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  uint *puVar5;
  ulong uVar6;
  
  if (param_2 != 1) {
    uVar1 = *param_1;
    uVar2 = (ulong)uVar1;
    if (uVar1 != 0) {
      if (param_2 == 0) {
        if (0 < (int)uVar1) {
          _bzero(param_1 + 1,uVar2 << 2);
        }
        uVar1 = 0;
      }
      else {
        if ((int)uVar1 < 1) {
          return;
        }
        uVar3 = 0;
        puVar5 = param_1 + 1;
        uVar6 = uVar2;
        do {
          uVar4 = uVar3 + (ulong)*puVar5 * (ulong)param_2;
          *puVar5 = (uint)uVar4;
          uVar3 = uVar4 >> 0x20;
          uVar6 = uVar6 - 1;
          puVar5 = puVar5 + 1;
        } while (uVar6 != 0);
        if (0x53 < uVar1) {
          return;
        }
        if (uVar3 == 0) {
          return;
        }
        (param_1 + 1)[uVar2] = (uint)(uVar4 >> 0x20);
        uVar1 = uVar1 + 1;
      }
      *param_1 = uVar1;
    }
  }
  return;
}



/* Entry: 10ae8a908; end: 10ae8a987;  */

void FUN_10ae8a908(uint *param_1,ulong param_2,undefined1 *param_3)

{
  uint uVar1;
  int iVar2;
  undefined1 *puVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  uint *puVar9;
  ulong uVar10;
  
  puVar3 = &stack0xffffffffffffffe0;
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_2 >> 0x20 == 0) {
    puVar3 = param_3;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
      if ((int)param_2 != 1) {
        uVar4 = *param_1;
        uVar5 = (ulong)uVar4;
        if (uVar4 != 0) {
          if ((int)param_2 == 0) {
            if (0 < (int)uVar4) {
              _bzero(param_1 + 1,uVar5 << 2);
            }
            uVar4 = 0;
          }
          else {
            if ((int)uVar4 < 1) {
              return;
            }
            uVar7 = 0;
            puVar9 = param_1 + 1;
            uVar10 = uVar5;
            do {
              uVar8 = uVar7 + (ulong)*puVar9 * (param_2 & 0xffffffff);
              *puVar9 = (uint)uVar8;
              uVar7 = uVar8 >> 0x20;
              uVar10 = uVar10 - 1;
              puVar9 = puVar9 + 1;
            } while (uVar10 != 0);
            if (0x53 < uVar4) {
              return;
            }
            if (uVar7 == 0) {
              return;
            }
            (param_1 + 1)[uVar5] = (uint)(uVar8 >> 0x20);
            uVar4 = uVar4 + 1;
          }
          *param_1 = uVar4;
        }
      }
      return;
    }
  }
  else {
    param_2 = 2;
    FUN_10ae8a988(param_1,2,&stack0xffffffffffffffe0);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
      return;
    }
  }
  ___stack_chk_fail();
  uVar1 = *param_1;
  uVar4 = uVar1 + (int)param_2;
  if (1 < (int)uVar4) {
    if (0x54 < uVar4) {
      uVar4 = 0x55;
    }
    iVar2 = uVar4 - 2;
    do {
      FUN_10ae8aba0(param_1,uVar1,puVar3,param_2,iVar2);
      iVar2 = iVar2 + -1;
    } while (iVar2 != -1);
  }
  return;
}



/* Entry: 10ae8a988; end: 10ae8a9ff;  */

void FUN_10ae8a988(int *param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_1;
  uVar1 = iVar2 + (int)param_2;
  if (1 < (int)uVar1) {
    if (0x54 < uVar1) {
      uVar1 = 0x55;
    }
    iVar3 = uVar1 - 2;
    do {
      FUN_10ae8aba0(param_1,iVar2,param_3,param_2,iVar3);
      iVar3 = iVar3 + -1;
    } while (iVar3 != -1);
  }
  return;
}



/* Entry: 10ae8aa00; end: 10ae8aa73;  */

void FUN_10ae8aa00(uint *param_1,uint param_2)

{
  bool bVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  uint *puVar6;
  ulong uVar7;
  uint uVar8;
  
  uVar8 = param_2;
  if (0xc < (int)param_2) {
    do {
      FUN_10ae8a874(param_1,0x48c27395);
      param_2 = uVar8 - 0xd;
      bVar1 = 0x19 < uVar8;
      uVar8 = param_2;
    } while (bVar1);
  }
  if ((int)param_2 < 1) {
    return;
  }
  uVar8 = *(uint *)(&UNK_10e52f7e8 + (ulong)param_2 * 4);
  if (uVar8 != 1) {
    uVar2 = *param_1;
    uVar3 = (ulong)uVar2;
    if (uVar2 != 0) {
      if (uVar8 == 0) {
        if (0 < (int)uVar2) {
          _bzero(param_1 + 1,uVar3 << 2);
        }
        uVar2 = 0;
      }
      else {
        if ((int)uVar2 < 1) {
          return;
        }
        uVar4 = 0;
        puVar6 = param_1 + 1;
        uVar7 = uVar3;
        do {
          uVar5 = uVar4 + (ulong)*puVar6 * (ulong)uVar8;
          *puVar6 = (uint)uVar5;
          uVar4 = uVar5 >> 0x20;
          uVar7 = uVar7 - 1;
          puVar6 = puVar6 + 1;
        } while (uVar7 != 0);
        if (0x53 < uVar2) {
          return;
        }
        if (uVar4 == 0) {
          return;
        }
        (param_1 + 1)[uVar3] = (uint)(uVar5 >> 0x20);
        uVar2 = uVar2 + 1;
      }
      *param_1 = uVar2;
    }
  }
  return;
}



/* Entry: 10ae8aa74; end: 10ae8ab9f;  */

void FUN_10ae8aa74(uint *param_1,uint param_2)

{
  bool bVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  uint *puVar6;
  ulong uVar7;
  uint uVar8;
  
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0] = 1;
  param_1[1] = 1;
  param_1[2] = 0;
  if (0x1a < (int)param_2) {
    bVar1 = true;
    do {
      uVar8 = param_2 / 0x1b;
      if (0x13 < uVar8) {
        uVar8 = 0x14;
      }
      if (bVar1) {
        _memcpy(param_1 + 1,&UNK_10e52f848 + (ulong)((uVar8 - 1) * uVar8) * 4,uVar8 << 3);
        *param_1 = uVar8 << 1;
      }
      else {
        FUN_10ae8a988(param_1,uVar8 << 1,&UNK_10e52f848 + (ulong)((uVar8 - 1) * uVar8) * 4);
      }
      bVar1 = false;
      param_2 = param_2 + uVar8 * -0x1b;
    } while (0x1a < (int)param_2);
  }
  uVar8 = param_2;
  if (0xc < (int)param_2) {
    do {
      FUN_10ae8a874(param_1,0x48c27395);
      param_2 = uVar8 - 0xd;
      bVar1 = 0x19 < uVar8;
      uVar8 = param_2;
    } while (bVar1);
  }
  if ((int)param_2 < 1) {
    return;
  }
  uVar8 = *(uint *)(&UNK_10e52f7e8 + (ulong)param_2 * 4);
  if (uVar8 != 1) {
    uVar2 = *param_1;
    uVar3 = (ulong)uVar2;
    if (uVar2 != 0) {
      if (uVar8 == 0) {
        if (0 < (int)uVar2) {
          _bzero(param_1 + 1,uVar3 << 2);
        }
        uVar2 = 0;
      }
      else {
        if ((int)uVar2 < 1) {
          return;
        }
        uVar4 = 0;
        puVar6 = param_1 + 1;
        uVar7 = uVar3;
        do {
          uVar5 = uVar4 + (ulong)*puVar6 * (ulong)uVar8;
          *puVar6 = (uint)uVar5;
          uVar4 = uVar5 >> 0x20;
          uVar7 = uVar7 - 1;
          puVar6 = puVar6 + 1;
        } while (uVar7 != 0);
        if (0x53 < uVar2) {
          return;
        }
        if (uVar4 == 0) {
          return;
        }
        (param_1 + 1)[uVar3] = (uint)(uVar5 >> 0x20);
        uVar2 = uVar2 + 1;
      }
      *param_1 = uVar2;
    }
  }
  return;
}



/* Entry: 10ae8aba0; end: 10ae8ac6b;  */

void FUN_10ae8aba0(int *param_1,int param_2,long param_3,int param_4,uint param_5)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  uint *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  
  uVar7 = 0;
  uVar1 = param_2 - 1U;
  if ((int)param_5 <= (int)(param_2 - 1U)) {
    uVar1 = param_5;
  }
  if ((int)uVar1 < 0) {
    lVar3 = 0;
  }
  else {
    iVar2 = param_5 - uVar1;
    lVar3 = 0;
    if (iVar2 < param_4) {
      lVar3 = 0;
      uVar7 = 0;
      lVar5 = (long)iVar2;
      lVar6 = (ulong)uVar1 << 2;
      puVar4 = (uint *)(param_3 + (long)iVar2 * 4);
      do {
        lVar5 = lVar5 + 1;
        uVar7 = uVar7 + (ulong)*puVar4 * (ulong)*(uint *)((long)param_1 + lVar6 + 4);
        lVar3 = lVar3 + (uVar7 >> 0x20);
        uVar7 = uVar7 & 0xffffffff;
        if (lVar6 == 0) break;
        lVar6 = lVar6 + -4;
        puVar4 = puVar4 + 1;
      } while (lVar5 < param_4);
    }
  }
  FUN_10ae8ac6c(param_1,param_5 + 1,lVar3);
  param_1[(long)(int)param_5 + 1] = (int)uVar7;
  if ((uVar7 != 0) && (*param_1 <= (int)param_5)) {
    *param_1 = param_5 + 1;
  }
  return;
}



/* Entry: 10ae8ac6c; end: 10ae8ad33;  */

void FUN_10ae8ac6c(int *param_1,int param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  
  uVar5 = (uint)((ulong)param_3 >> 0x20);
  if (0x53 < param_2) {
    return;
  }
  if (param_3 == 0) {
    return;
  }
  uVar1 = param_1[(long)param_2 + 1];
  param_1[(long)param_2 + 1] = uVar1 + (uint)param_3;
  if (CARRY4(uVar1,(uint)param_3)) {
    bVar3 = uVar5 == 0xffffffff;
    uVar5 = uVar5 + 1;
    if (bVar3) {
      iVar4 = param_2 + 2;
      if (param_2 < 0x52) {
        do {
          iVar2 = param_1[(long)iVar4 + 1];
          param_1[(long)iVar4 + 1] = iVar2 + 1;
          if (iVar2 != -1) break;
          iVar4 = iVar4 + 1;
        } while (iVar4 < 0x54);
      }
      iVar4 = iVar4 + 1;
      goto LAB_10ae8ad14;
    }
  }
  else if (uVar5 == 0) {
    iVar4 = param_2 + 1;
    goto LAB_10ae8ad14;
  }
  if (param_2 < 0x53) {
    param_2 = param_2 + 1;
    do {
      uVar1 = param_1[(long)param_2 + 1];
      param_1[(long)param_2 + 1] = uVar1 + uVar5;
      if (!CARRY4(uVar1,uVar5)) break;
      param_2 = param_2 + 1;
      uVar5 = 1;
    } while (param_2 < 0x54);
    iVar4 = param_2 + 1;
  }
  else {
    iVar4 = 0x55;
  }
LAB_10ae8ad14:
  if (iVar4 <= *param_1) {
    iVar4 = *param_1;
  }
  if (0x53 < iVar4) {
    iVar4 = 0x54;
  }
  *param_1 = iVar4;
  return;
}



/* Entry: 10ae8ad34; end: 10ae8afaf;  */

void FUN_10ae8ad34(long *param_1,byte *param_2,byte *param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  int *piVar8;
  bool bVar9;
  char cStack_69;
  long lStack_68;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[3] = 0;
  if (param_2 == param_3) {
    return;
  }
  pbVar5 = param_2;
  FUN_10ae8afb0(param_2,param_3,param_1);
  if (((ulong)pbVar5 & 1) != 0) {
    return;
  }
  pbVar5 = param_2;
  pbVar6 = param_2;
  if (param_2 < param_3) {
    do {
      pbVar5 = pbVar6;
      if (*pbVar6 != 0x30) break;
      pbVar6 = pbVar6 + 1;
      pbVar5 = param_3;
    } while (pbVar6 != param_3);
  }
  lStack_68 = 0;
  cStack_69 = '\0';
  pbVar6 = pbVar5;
  func_0x00010ae8b148(pbVar5,param_3,0x13,&lStack_68,&cStack_69);
  iVar2 = (int)pbVar6;
  if (49999999 < iVar2) {
    return;
  }
  pbVar5 = pbVar5 + iVar2;
  iVar4 = 0x13 - iVar2;
  iVar1 = 0;
  if (iVar2 < 0x14) {
    iVar2 = 0x13;
    iVar1 = iVar4;
  }
  iVar2 = iVar2 + -0x13;
  if ((pbVar5 < param_3) && (*pbVar5 == 0x2e)) {
    pbVar5 = pbVar5 + 1;
    pbVar6 = pbVar5;
    pbVar7 = pbVar5;
    if (lStack_68 == 0) {
      for (; (pbVar6 < param_3 && (pbVar7 = pbVar6, *pbVar6 == 0x30)); pbVar6 = pbVar6 + 1) {
        pbVar7 = param_3;
      }
      iVar4 = (int)pbVar7 - (int)pbVar5;
      if (49999999 < iVar4) {
        return;
      }
      iVar2 = iVar2 - iVar4;
      pbVar5 = pbVar7;
    }
    pbVar6 = pbVar5;
    func_0x00010ae8b148(pbVar5,param_3,iVar1,&lStack_68,&cStack_69);
    iVar3 = (int)pbVar6;
    iVar4 = iVar3;
    if (iVar1 <= iVar3) {
      iVar4 = iVar1;
    }
    if (49999999 < iVar3) {
      return;
    }
    pbVar5 = pbVar5 + iVar3;
    iVar2 = iVar2 - iVar4;
  }
  if (pbVar5 == param_2) {
    return;
  }
  if (((long)pbVar5 - (long)param_2 == 1) && (*param_2 == 0x2e)) {
    return;
  }
  if (cStack_69 == '\x01') {
    param_1[3] = (long)param_2;
    param_1[4] = (long)pbVar5;
  }
  *param_1 = lStack_68;
  piVar8 = (int *)((long)param_1 + 0xc);
  *piVar8 = 0;
  if ((((param_4 & 3) != 2) && (pbVar5 < param_3)) && ((*pbVar5 & 0xdf) == 0x45)) {
    pbVar6 = pbVar5 + 1;
    pbVar7 = pbVar6;
    if (pbVar6 < param_3) {
      if (*pbVar6 != 0x2d) {
        pbVar7 = pbVar5 + 2;
        if (*pbVar6 != 0x2b) {
          pbVar7 = pbVar6;
        }
        goto LAB_10ae8af30;
      }
      bVar9 = false;
      pbVar7 = pbVar5 + 2;
    }
    else {
LAB_10ae8af30:
      bVar9 = true;
    }
    pbVar6 = pbVar7;
    func_0x00010ae8b220(pbVar7,param_3,piVar8);
    iVar4 = (int)pbVar6;
    pbVar6 = pbVar7 + iVar4;
    if ((!bVar9) && (iVar4 != 0)) {
      *piVar8 = -*piVar8;
      goto LAB_10ae8af70;
    }
    if (iVar4 != 0) goto LAB_10ae8af70;
  }
  pbVar6 = pbVar5;
  if ((param_4 & 3) == 1) {
    return;
  }
LAB_10ae8af70:
  *(undefined4 *)(param_1 + 2) = 0;
  iVar4 = 0;
  if (*param_1 != 0) {
    iVar4 = *(int *)((long)param_1 + 0xc) + iVar2;
  }
  *(int *)(param_1 + 1) = iVar4;
  param_1[5] = (long)pbVar6;
  return;
}



/* Entry: 10ae8afb0; end: 10ae8b2db;  */

undefined8 FUN_10ae8afb0(byte *param_1,byte *param_2,long param_3)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  byte *pbVar4;
  
  if ((long)param_2 - (long)param_1 < 3) {
    return 0;
  }
  bVar1 = *param_1;
  if (bVar1 < 0x69) {
    if (bVar1 != 0x49) {
      if (bVar1 != 0x4e) {
        return 0;
      }
LAB_10ae8b080:
      lVar3 = 0;
      do {
        if ((&UNK_10e52cb36)[param_1[lVar3 + 1]] != (&UNK_10e52cb36)[(byte)(&DAT_10f4653ff)[lVar3]])
        {
          return 0;
        }
        lVar3 = lVar3 + 1;
      } while (lVar3 != 2);
      *(undefined4 *)(param_3 + 0x10) = 2;
      pbVar4 = param_1 + 3;
      *(byte **)(param_3 + 0x28) = pbVar4;
      if (param_2 <= pbVar4) {
        return 1;
      }
      if (*pbVar4 != 0x28) {
        return 1;
      }
      param_1 = param_1 + 4;
      pbVar4 = param_1;
      if (param_2 <= param_1) {
        return 1;
      }
      while( true ) {
        bVar1 = *pbVar4;
        if ((0x19 < (bVar1 & 0xffffffdf) - 0x41) &&
           (uVar2 = bVar1 - 0x30, (bVar1 != 0x5f && 8 < uVar2) && (bVar1 == 0x5f || uVar2 != 9)))
        break;
        pbVar4 = pbVar4 + 1;
        if (pbVar4 == param_2) {
          return 1;
        }
      }
      if (bVar1 != 0x29) {
        return 1;
      }
      *(byte **)(param_3 + 0x18) = param_1;
      *(byte **)(param_3 + 0x20) = pbVar4;
      pbVar4 = pbVar4 + 1;
      goto LAB_10ae8b124;
    }
  }
  else {
    if (bVar1 == 0x6e) goto LAB_10ae8b080;
    if (bVar1 != 0x69) {
      return 0;
    }
  }
  lVar3 = 0;
  do {
    if ((&UNK_10e52cb36)[param_1[lVar3 + 1]] != (&UNK_10e52cb36)[(byte)(&UNK_10f6d2c7c)[lVar3]]) {
      return 0;
    }
    lVar3 = lVar3 + 1;
  } while (lVar3 != 2);
  *(undefined4 *)(param_3 + 0x10) = 1;
  if ((ulong)((long)param_2 - (long)param_1) < 8) {
LAB_10ae8b120:
    pbVar4 = param_1 + 3;
  }
  else {
    lVar3 = 0;
    do {
      if ((&UNK_10e52cb36)[param_1[lVar3 + 3]] != (&UNK_10e52cb36)[(byte)(&UNK_10f6d2c7f)[lVar3]])
      goto LAB_10ae8b120;
      lVar3 = lVar3 + 1;
    } while (lVar3 != 5);
    pbVar4 = param_1 + 8;
  }
LAB_10ae8b124:
  *(byte **)(param_3 + 0x28) = pbVar4;
  return 1;
}



/* Entry: 10ae8b2dc; end: 10ae8b55b;  */

void FUN_10ae8b2dc(ulong *param_1,byte *param_2,byte *param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  int *piVar8;
  bool bVar9;
  char cStack_69;
  ulong uStack_68;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[3] = 0;
  if (param_2 == param_3) {
    return;
  }
  pbVar5 = param_2;
  FUN_10ae8afb0(param_2,param_3,param_1);
  if (((ulong)pbVar5 & 1) != 0) {
    return;
  }
  pbVar5 = param_2;
  pbVar6 = param_2;
  if (param_2 < param_3) {
    do {
      pbVar5 = pbVar6;
      if (*pbVar6 != 0x30) break;
      pbVar6 = pbVar6 + 1;
      pbVar5 = param_3;
    } while (pbVar6 != param_3);
  }
  uStack_68 = 0;
  cStack_69 = '\0';
  pbVar6 = pbVar5;
  FUN_10ae8b55c(pbVar5,param_3,0xf,&uStack_68,&cStack_69);
  iVar2 = (int)pbVar6;
  if (12499999 < iVar2) {
    return;
  }
  pbVar5 = pbVar5 + iVar2;
  iVar4 = 0xf - iVar2;
  iVar1 = 0;
  if (iVar2 < 0x10) {
    iVar2 = 0xf;
    iVar1 = iVar4;
  }
  iVar2 = iVar2 + -0xf;
  if ((pbVar5 < param_3) && (*pbVar5 == 0x2e)) {
    pbVar5 = pbVar5 + 1;
    pbVar6 = pbVar5;
    pbVar7 = pbVar5;
    if (uStack_68 == 0) {
      for (; (pbVar6 < param_3 && (pbVar7 = pbVar6, *pbVar6 == 0x30)); pbVar6 = pbVar6 + 1) {
        pbVar7 = param_3;
      }
      iVar4 = (int)pbVar7 - (int)pbVar5;
      if (12499999 < iVar4) {
        return;
      }
      iVar2 = iVar2 - iVar4;
      pbVar5 = pbVar7;
    }
    pbVar6 = pbVar5;
    FUN_10ae8b55c(pbVar5,param_3,iVar1,&uStack_68,&cStack_69);
    iVar3 = (int)pbVar6;
    iVar4 = iVar3;
    if (iVar1 <= iVar3) {
      iVar4 = iVar1;
    }
    if (12499999 < iVar3) {
      return;
    }
    pbVar5 = pbVar5 + iVar3;
    iVar2 = iVar2 - iVar4;
  }
  if (pbVar5 == param_2) {
    return;
  }
  if (((long)pbVar5 - (long)param_2 == 1) && (*param_2 == 0x2e)) {
    return;
  }
  if (cStack_69 == '\x01') {
    uStack_68 = uStack_68 | 1;
  }
  *param_1 = uStack_68;
  piVar8 = (int *)((long)param_1 + 0xc);
  *piVar8 = 0;
  if ((((param_4 & 3) != 2) && (pbVar5 < param_3)) && ((*pbVar5 & 0xdf) == 0x50)) {
    pbVar6 = pbVar5 + 1;
    pbVar7 = pbVar6;
    if (pbVar6 < param_3) {
      if (*pbVar6 != 0x2d) {
        pbVar7 = pbVar5 + 2;
        if (*pbVar6 != 0x2b) {
          pbVar7 = pbVar6;
        }
        goto LAB_10ae8b4dc;
      }
      bVar9 = false;
      pbVar7 = pbVar5 + 2;
    }
    else {
LAB_10ae8b4dc:
      bVar9 = true;
    }
    pbVar6 = pbVar7;
    func_0x00010ae8b220(pbVar7,param_3,piVar8);
    iVar4 = (int)pbVar6;
    pbVar6 = pbVar7 + iVar4;
    if ((!bVar9) && (iVar4 != 0)) {
      *piVar8 = -*piVar8;
      goto LAB_10ae8b51c;
    }
    if (iVar4 != 0) goto LAB_10ae8b51c;
  }
  pbVar6 = pbVar5;
  if ((param_4 & 3) == 1) {
    return;
  }
LAB_10ae8b51c:
  *(undefined4 *)(param_1 + 2) = 0;
  iVar4 = 0;
  if (*param_1 != 0) {
    iVar4 = *(int *)((long)param_1 + 0xc) + iVar2 * 4;
  }
  *(int *)(param_1 + 1) = iVar4;
  param_1[5] = (ulong)pbVar6;
  return;
}



/* Entry: 10ae8b55c; end: 10ae8b747;  */

int FUN_10ae8b55c(byte *param_1,byte *param_2,uint param_3,long *param_4,undefined1 *param_5)

{
  bool bVar1;
  long lVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  long lVar6;
  
  lVar2 = *param_4;
  pbVar4 = param_1;
  if ((param_1 != param_2) && (pbVar3 = param_1, lVar2 == 0)) {
    do {
      pbVar4 = pbVar3;
      if (*pbVar3 != 0x30) break;
      pbVar3 = pbVar3 + 1;
      pbVar4 = param_2;
    } while (pbVar3 != param_2);
  }
  pbVar3 = pbVar4 + param_3;
  if ((long)param_2 - (long)pbVar4 <= (long)(ulong)param_3) {
    pbVar3 = param_2;
  }
  pbVar5 = pbVar4;
  if (pbVar4 < pbVar3) {
    do {
      pbVar5 = pbVar4;
      if ((long)(char)(&UNK_10e52fed8)[*pbVar4] < 0) break;
      lVar2 = (long)(char)(&UNK_10e52fed8)[*pbVar4] + lVar2 * 0x10;
      pbVar4 = pbVar4 + 1;
      pbVar5 = pbVar3;
    } while (pbVar4 != pbVar3);
  }
  if (pbVar5 < param_2) {
    bVar1 = false;
    lVar6 = (long)param_2 - (long)pbVar5;
    pbVar3 = pbVar5 + lVar6;
    pbVar4 = pbVar5;
    do {
      pbVar5 = pbVar4;
      if ((char)(&UNK_10e52fed8)[*pbVar4] < '\0') break;
      bVar1 = (bool)(bVar1 | *pbVar4 != 0x30);
      pbVar4 = pbVar4 + 1;
      lVar6 = lVar6 + -1;
      pbVar5 = pbVar3;
    } while (lVar6 != 0);
    if (bVar1) {
      *param_5 = 1;
    }
  }
  *param_4 = lVar2;
  return (int)pbVar5 - (int)param_1;
}



/* Entry: 10ae8b748; end: 10ae8b9d7;  */

byte * FUN_10ae8b748(byte *param_1,ulong *param_2,double *param_3)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  float fVar5;
  byte *pbVar6;
  byte *pbVar7;
  double dVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong *puVar13;
  
  *(float *)param_3 = 0.0;
  pbVar4 = param_1;
  if (param_2 != (ulong *)0x0) {
    pbVar7 = param_1;
    puVar13 = param_2;
    do {
      pbVar4 = pbVar7;
      if (((byte)(&UNK_10e52ca36)[*pbVar7] >> 3 & 1) == 0) break;
      pbVar7 = pbVar7 + 1;
      puVar13 = (ulong *)((long)puVar13 + -1);
      pbVar4 = param_1 + (long)param_2;
    } while (puVar13 != (ulong *)0x0);
  }
  puVar13 = (ulong *)(pbVar4 + -(long)param_1);
  if (param_2 < puVar13) {
    pbVar4 = &UNK_10f6d2c85;
    func_0x000109262df8();
    *param_3 = 0.0;
    pbVar7 = pbVar4;
    if (param_2 != (ulong *)0x0) {
      pbVar6 = pbVar4;
      puVar13 = param_2;
      do {
        pbVar7 = pbVar6;
        if (((byte)(&UNK_10e52ca36)[*pbVar6] >> 3 & 1) == 0) break;
        pbVar6 = pbVar6 + 1;
        puVar13 = (ulong *)((long)puVar13 + -1);
        pbVar7 = pbVar4 + (long)param_2;
      } while (puVar13 != (ulong *)0x0);
    }
    puVar13 = (ulong *)(pbVar7 + -(long)pbVar4);
    if (param_2 < puVar13) {
      uVar3 = 0xf6d2c85;
      func_0x000109262df8();
      if ((int)uVar3 < 0) {
        *(byte *)param_2 = 0x2d;
        uVar3 = -uVar3;
        param_2 = (ulong *)((long)param_2 + 1);
      }
      if (uVar3 < 100) {
        uVar9 = (int)(uVar3 - 10) >> 8;
        *(short *)param_2 =
             (short)((uVar3 + (uVar3 * 0x67 >> 10) * 0xfffff6) * 0x100 + (uVar3 * 0x67 >> 10) +
                     0x3030 >> (ulong)(uVar9 & 8));
        pbVar4 = (byte *)((long)param_2 + (long)(int)uVar9 + 2);
      }
      else if (uVar3 >> 4 < 0x271) {
        uVar9 = uVar3 * 0x28f6 >> 0x14;
        uVar9 = uVar9 | (uVar3 + uVar9 * -100) * 0x10000;
        uVar3 = uVar9 * 0x100 + (uVar9 * 0x67 >> 10 & 0xf000f) * -0x9ff;
        uVar9 = (uVar3 & 0xaaaaaaaa) >> 1 | (uVar3 & 0x55555555) << 1;
        uVar9 = (uVar9 & 0xcccccccc) >> 2 | (uVar9 & 0x33333333) << 2;
        uVar9 = (uVar9 & 0xf0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f) << 4;
        uVar9 = (uVar9 & 0xff00ff00) >> 8 | (uVar9 & 0xff00ff) << 8;
        uVar9 = (uint)LZCOUNT(uVar9 >> 0x10 | uVar9 << 0x10);
        *(uint *)param_2 = uVar3 + 0x30303030 >> (ulong)(uVar9 & 0x18);
        pbVar4 = (byte *)((long)param_2 + (4 - (ulong)(uVar9 >> 3)));
      }
      else if (uVar3 < 100000000) {
        uVar11 = (ulong)uVar3 / 10000 | (ulong)(uVar3 % 10000) << 0x20;
        lVar12 = uVar11 * 0x10000 + (uVar11 * 0x28f6 >> 0x14 & 0x7f0000007f) * -0x63ffff;
        uVar11 = lVar12 * 0x100 + ((ulong)(lVar12 * 0x67) >> 10 & 0xf000f000f000f) * -0x9ff;
        uVar10 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
        uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
        uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20);
        *param_2 = uVar11 + 0x3030303030303030 >> (uVar10 & 0x38);
        pbVar4 = (byte *)((long)param_2 + (8 - (uVar10 >> 3)));
      }
      else {
        uVar11 = (ulong)(uVar3 % 100000000) / 10000 | (ulong)((uVar3 % 100000000) % 10000) << 0x20;
        lVar12 = uVar11 * 0x10000 + (uVar11 * 0x28f6 >> 0x14 & 0x7f0000007f) * -0x63ffff;
        uVar9 = (int)(uVar3 / 100000000 - 10) >> 8;
        uVar2 = (uVar3 / 100000000) / 10;
        *(short *)param_2 =
             (short)((uVar2 | (uVar3 / 100000000 + uVar2 * 0xfffff6) * 0x100) + 0x3030 >>
                    (ulong)(uVar9 & 8));
        *(ulong *)((long)param_2 + (long)(int)uVar9 + 2) =
             lVar12 * 0x100 + ((ulong)(lVar12 * 0x67) >> 10 & 0xf000f000f000f) * -0x9ff +
             0x3030303030303030;
        pbVar4 = (byte *)((long)param_2 + (long)(int)uVar9 + 10);
      }
      *pbVar4 = 0;
      return pbVar4;
    }
    pbVar6 = pbVar4 + (long)puVar13;
    lVar12 = ((long)param_2 + (long)pbVar4) - (long)pbVar7;
    pbVar4 = (byte *)((long)param_2 + (long)pbVar4) + 1;
    do {
      pbVar7 = pbVar6;
      if (lVar12 == 0) break;
      pbVar1 = pbVar4 + -2;
      pbVar7 = pbVar4 + -1;
      lVar12 = lVar12 + -1;
      pbVar4 = pbVar7;
    } while (((byte)(&UNK_10e52ca36)[*pbVar1] >> 3 & 1) != 0);
    uVar11 = (long)param_2 - (long)puVar13;
    if ((ulong)((long)pbVar7 - (long)pbVar6) <= (ulong)((long)param_2 - (long)puVar13)) {
      uVar11 = (long)pbVar7 - (long)pbVar6;
    }
    if ((uVar11 != 0) && (*pbVar6 == 0x2b)) {
      pbVar6 = pbVar6 + 1;
      uVar11 = uVar11 - 1;
      if ((uVar11 != 0) && (*pbVar6 == 0x2d)) {
        return (byte *)0x0;
      }
    }
    pbVar4 = pbVar6 + uVar11;
    pbVar7 = pbVar4;
    func_0x00010ae87e28(pbVar6,pbVar4,param_3,3);
    if ((int)pbVar7 == 0x16) {
      return (byte *)0x0;
    }
    if (pbVar4 == pbVar6) {
      if ((int)pbVar7 == 0x22) {
        if (*param_3 <= 1.0) {
          if (-1.0 <= *param_3) {
            return (byte *)0x1;
          }
          dVar8 = -INFINITY;
        }
        else {
          dVar8 = INFINITY;
        }
        *param_3 = dVar8;
      }
      return (byte *)0x1;
    }
    return (byte *)0x0;
  }
  pbVar7 = param_1 + (long)puVar13;
  lVar12 = ((long)param_2 + (long)param_1) - (long)pbVar4;
  pbVar4 = (byte *)((long)param_2 + (long)param_1) + 1;
  do {
    pbVar6 = pbVar7;
    if (lVar12 == 0) break;
    pbVar1 = pbVar4 + -2;
    pbVar6 = pbVar4 + -1;
    lVar12 = lVar12 + -1;
    pbVar4 = pbVar6;
  } while (((byte)(&UNK_10e52ca36)[*pbVar1] >> 3 & 1) != 0);
  uVar11 = (long)param_2 - (long)puVar13;
  if ((ulong)((long)pbVar6 - (long)pbVar7) <= (ulong)((long)param_2 - (long)puVar13)) {
    uVar11 = (long)pbVar6 - (long)pbVar7;
  }
  if ((uVar11 != 0) && (*pbVar7 == 0x2b)) {
    pbVar7 = pbVar7 + 1;
    uVar11 = uVar11 - 1;
    if ((uVar11 != 0) && (*pbVar7 == 0x2d)) {
      return (byte *)0x0;
    }
  }
  pbVar4 = pbVar7 + uVar11;
  pbVar6 = pbVar4;
  func_0x00010ae88354(pbVar7,pbVar4,param_3,3);
  if ((int)pbVar6 == 0x16) {
    return (byte *)0x0;
  }
  if (pbVar4 == pbVar7) {
    if ((int)pbVar6 == 0x22) {
      if (*(float *)param_3 <= 1.0) {
        if (-1.0 <= *(float *)param_3) {
          return (byte *)0x1;
        }
        fVar5 = -INFINITY;
      }
      else {
        fVar5 = INFINITY;
      }
      *(float *)param_3 = fVar5;
    }
    return (byte *)0x1;
  }
  return (byte *)0x0;
}



/* Entry: 10ae8b9d8; end: 10ae8bc6b;  */

void FUN_10ae8b9d8(uint param_1,ulong *param_2)

{
  long lVar1;
  uint uVar2;
  undefined1 *puVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  
  if ((int)param_1 < 0) {
    *(undefined1 *)param_2 = 0x2d;
    param_1 = -param_1;
    param_2 = (ulong *)((long)param_2 + 1);
  }
  if (param_1 < 100) {
    uVar2 = (int)(param_1 - 10) >> 8;
    *(short *)param_2 =
         (short)((param_1 + (param_1 * 0x67 >> 10) * 0xfffff6) * 0x100 + (param_1 * 0x67 >> 10) +
                 0x3030 >> (ulong)(uVar2 & 8));
    puVar3 = (undefined1 *)((long)param_2 + (long)(int)uVar2 + 2);
  }
  else if (param_1 >> 4 < 0x271) {
    uVar2 = param_1 * 0x28f6 >> 0x14;
    uVar2 = uVar2 | (param_1 + uVar2 * -100) * 0x10000;
    uVar2 = uVar2 * 0x100 + (uVar2 * 0x67 >> 10 & 0xf000f) * -0x9ff;
    uVar4 = (uVar2 & 0xaaaaaaaa) >> 1 | (uVar2 & 0x55555555) << 1;
    uVar4 = (uVar4 & 0xcccccccc) >> 2 | (uVar4 & 0x33333333) << 2;
    uVar4 = (uVar4 & 0xf0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f) << 4;
    uVar4 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
    uVar4 = (uint)LZCOUNT(uVar4 >> 0x10 | uVar4 << 0x10);
    *(uint *)param_2 = uVar2 + 0x30303030 >> (ulong)(uVar4 & 0x18);
    puVar3 = (undefined1 *)((long)param_2 + (4 - (ulong)(uVar4 >> 3)));
  }
  else if (param_1 < 100000000) {
    uVar6 = (ulong)param_1 / 10000 | (ulong)(param_1 % 10000) << 0x20;
    lVar1 = uVar6 * 0x10000 + (uVar6 * 0x28f6 >> 0x14 & 0x7f0000007f) * -0x63ffff;
    uVar6 = lVar1 * 0x100 + ((ulong)(lVar1 * 0x67) >> 10 & 0xf000f000f000f) * -0x9ff;
    uVar5 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
    uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
    uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
    uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
    uVar5 = LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20);
    *param_2 = uVar6 + 0x3030303030303030 >> (uVar5 & 0x38);
    puVar3 = (undefined1 *)((long)param_2 + (8 - (uVar5 >> 3)));
  }
  else {
    uVar6 = (ulong)(param_1 % 100000000) / 10000 | (ulong)((param_1 % 100000000) % 10000) << 0x20;
    lVar1 = uVar6 * 0x10000 + (uVar6 * 0x28f6 >> 0x14 & 0x7f0000007f) * -0x63ffff;
    uVar2 = (int)(param_1 / 100000000 - 10) >> 8;
    uVar4 = (param_1 / 100000000) / 10;
    *(short *)param_2 =
         (short)((uVar4 | (param_1 / 100000000 + uVar4 * 0xfffff6) * 0x100) + 0x3030 >>
                (ulong)(uVar2 & 8));
    *(ulong *)((long)param_2 + (long)(int)uVar2 + 2) =
         lVar1 * 0x100 + ((ulong)(lVar1 * 0x67) >> 10 & 0xf000f000f000f) * -0x9ff +
         0x3030303030303030;
    puVar3 = (undefined1 *)((long)param_2 + (long)(int)uVar2 + 10);
  }
  *puVar3 = 0;
  return;
}



/* Entry: 10ae8bc6c; end: 10ae8c3eb;  */

undefined1 * FUN_10ae8bc6c(double param_1,undefined4 *param_2)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  ushort uVar8;
  undefined2 uVar9;
  double dVar10;
  undefined1 *puVar11;
  ulong uVar12;
  ulong uVar13;
  char cVar14;
  undefined4 *puVar15;
  ulong uVar16;
  undefined1 *puVar17;
  undefined4 *puVar18;
  uint uVar19;
  undefined4 *puVar20;
  short *psVar21;
  undefined1 uVar22;
  uint uVar23;
  ulong uVar24;
  ulong uVar25;
  uint uVar26;
  double dVar27;
  double dVar28;
  undefined1 auStack_54 [4];
  
  if (NAN(param_1)) {
    *param_2 = 0x6e616e;
    return (undefined1 *)0x3;
  }
  if (param_1 == 0.0) {
    puVar15 = param_2;
    if ((long)param_1 < 0) {
      puVar15 = (undefined4 *)((long)param_2 + 1);
      *(undefined1 *)param_2 = 0x2d;
    }
    *(undefined2 *)puVar15 = 0x30;
    return (undefined1 *)((long)puVar15 + (1 - (long)param_2));
  }
  puVar15 = param_2;
  if (param_1 < 0.0) {
    *(undefined1 *)param_2 = 0x2d;
    param_1 = -param_1;
    puVar15 = (undefined4 *)((long)param_2 + 1);
  }
  if (1.79769313486232e+308 < param_1) {
    *puVar15 = 0x666e69;
    return (undefined1 *)((long)puVar15 + (3 - (long)param_2));
  }
  if (999999.5 <= param_1) {
    dVar27 = param_1;
    if (1e+261 <= param_1) {
      dVar27 = param_1 * 1e-256;
    }
    uVar19 = 5;
    if (1e+261 <= param_1) {
      uVar19 = 0x105;
    }
    if (1e+133 <= dVar27) {
      uVar19 = uVar19 | 0x80;
      dVar27 = dVar27 * 1e-128;
    }
    if (1e+69 <= dVar27) {
      uVar19 = uVar19 | 0x40;
      dVar27 = dVar27 * 1e-64;
    }
    if (1e+37 <= dVar27) {
      uVar19 = uVar19 | 0x20;
      dVar27 = dVar27 * 1e-32;
    }
    if (1e+21 <= dVar27) {
      uVar19 = uVar19 + 0x10;
      dVar27 = dVar27 * 1e-16;
    }
    if (10000000000000.0 <= dVar27) {
      uVar19 = uVar19 + 8;
      dVar27 = dVar27 * 1e-08;
    }
    if (1000000000.0 <= dVar27) {
      uVar19 = uVar19 + 4;
      dVar27 = dVar27 * 0.0001;
    }
    if (10000000.0 <= dVar27) {
      uVar19 = uVar19 + 2;
      dVar27 = dVar27 * 0.01;
    }
    if (1000000.0 <= dVar27) {
      uVar19 = uVar19 + 1;
      dVar28 = 0.1;
      goto LAB_10ae8bf88;
    }
  }
  else {
    dVar27 = param_1 * 1e+256;
    if (1e-250 <= param_1) {
      dVar27 = param_1;
    }
    uVar19 = 0xffffff05;
    if (1e-250 <= param_1) {
      uVar19 = 5;
    }
    uVar26 = uVar19 - 0x80;
    dVar28 = dVar27 * 1e+128;
    if (1e-122 <= dVar27) {
      uVar26 = uVar19;
      dVar28 = dVar27;
    }
    uVar19 = uVar26 - 0x40;
    dVar27 = dVar28 * 1e+64;
    if (1e-58 <= dVar28) {
      uVar19 = uVar26;
      dVar27 = dVar28;
    }
    uVar26 = uVar19 - 0x20;
    dVar28 = dVar27 * 1e+32;
    if (1e-26 <= dVar27) {
      uVar26 = uVar19;
      dVar28 = dVar27;
    }
    uVar19 = uVar26 - 0x10;
    dVar27 = dVar28 * 1e+16;
    if (1e-10 <= dVar28) {
      uVar19 = uVar26;
      dVar27 = dVar28;
    }
    uVar26 = uVar19 - 8;
    dVar28 = dVar27 * 100000000.0;
    if (0.01 <= dVar27) {
      uVar26 = uVar19;
      dVar28 = dVar27;
    }
    uVar2 = uVar26 - 4;
    dVar10 = dVar28 * 10000.0;
    if (100.0 <= dVar28) {
      uVar2 = uVar26;
      dVar10 = dVar28;
    }
    uVar19 = uVar2 - 2;
    dVar27 = dVar10 * 100.0;
    if (10000.0 <= dVar10) {
      uVar19 = uVar2;
      dVar27 = dVar10;
    }
    if (dVar27 < 100000.0) {
      uVar19 = uVar19 - 1;
      dVar28 = 10.0;
LAB_10ae8bf88:
      dVar27 = dVar27 * dVar28;
    }
  }
  uVar25 = (ulong)(dVar27 * 65536.0);
  if ((uVar25 & 0xffff) - 0x7fff < 2) {
    _frexp(auStack_54);
    uVar24 = (long)(param_1 * -9.223372036854776e+18) << 1;
    uVar16 = uVar25 >> 0xf & 0xfffffffe;
    if ((int)uVar19 < 6) {
      uVar16 = uVar16 | 1;
      uVar12 = 0;
      FUN_10ae8c5dc();
      uVar13 = (ulong)(5 - uVar19);
      FUN_10ae8c5dc();
    }
    else {
      uVar12 = (ulong)(uVar19 - 5);
      uVar16 = uVar16 | 1;
      FUN_10ae8c5dc();
      uVar13 = 0;
    }
    cVar14 = '\x01';
    if (uVar24 < uVar16) {
      cVar14 = -1;
    }
    uVar26 = (uint)(uVar25 >> 0x10);
    if (uVar24 == uVar16) {
      cVar14 = '\x01';
      if (uVar13 < uVar12) {
        cVar14 = -1;
      }
      if (uVar13 != uVar12) goto LAB_10ae8c030;
    }
    else {
LAB_10ae8c030:
      if ('\0' < cVar14) {
        uVar26 = uVar26 + 1;
        goto LAB_10ae8c058;
      }
    }
    if (uVar24 == uVar16 && uVar13 == uVar12) {
      uVar26 = (uVar26 & 1) + uVar26;
    }
  }
  else {
    uVar26 = (uint)(uVar25 + 0x8000 >> 0x10);
  }
LAB_10ae8c058:
  if (uVar26 == 1000000) {
    uVar19 = uVar19 + 1;
    uVar26 = 100000;
  }
  uVar4 = uVar26 % 10000;
  uVar5 = (uVar26 / 10000) * 0x67;
  uVar23 = (uVar4 % 100) / 10;
  uVar2 = uVar23 + 0x3030;
  uVar23 = uVar2 + (uVar4 % 100 + uVar23 * 0xf6) * 0x100;
  uVar4 = (uVar4 / 100) * 0x100 + (int)((ulong)(uVar4 / 100) * 0x67 >> 10) * 0xf601 + 0x3030;
  iVar3 = (uVar5 >> 10) + 0x3030;
  uVar26 = iVar3 + (uVar26 / 10000 + (uVar5 >> 10) * 0xf6) * 0x100 & 0xff00;
  uVar8 = (ushort)(uVar26 >> 8) | (ushort)(((ulong)uVar4 << 0x30) >> 0x28);
  *(undefined2 *)puVar15 = 0x2e30;
  uVar22 = (undefined1)iVar3;
  uVar9 = (undefined2)uVar23;
  uVar6 = (undefined1)(uVar4 >> 8);
  if (9 < uVar19 + 4) {
    *(undefined1 *)puVar15 = uVar22;
    *(ushort *)((long)puVar15 + 2) = uVar8;
    *(undefined1 *)(puVar15 + 1) = uVar6;
    *(undefined2 *)((long)puVar15 + 5) = uVar9;
    puVar15 = puVar15 + 2;
    do {
      puVar20 = puVar15;
      puVar15 = (undefined4 *)((long)puVar20 + -1);
    } while (*(char *)((long)puVar20 + -2) == '0');
    if (*(char *)((long)puVar20 + -2) == '.') {
      puVar15 = (undefined4 *)((long)puVar20 + -2);
    }
    *(undefined1 *)puVar15 = 0x65;
    uVar22 = 0x2b;
    if ((int)uVar19 < 1) {
      uVar22 = 0x2d;
    }
    uVar26 = -uVar19;
    if (-1 < (int)uVar19) {
      uVar26 = uVar19;
    }
    *(undefined1 *)((long)puVar15 + 1) = uVar22;
    if (uVar26 < 100) {
      psVar21 = (short *)((long)puVar15 + 2);
    }
    else {
      uVar19 = (uVar26 >> 2 & 0x3fff) / 0x19;
      uVar26 = uVar26 + uVar19 * -100;
      psVar21 = (short *)((long)puVar15 + 3);
      *(char *)((long)puVar15 + 2) = (char)uVar19 + '0';
    }
    *psVar21 = (short)uVar26 * 0x100 + (short)((ulong)uVar26 * 0x67 >> 10) * -0x9ff + 0x3030;
    psVar21 = psVar21 + 1;
    *(undefined1 *)psVar21 = 0;
LAB_10ae8c3b8:
    return (undefined1 *)((long)psVar21 - (long)param_2);
  }
  uVar23 = uVar23 & 0xffff;
  uVar7 = (undefined1)(uVar23 >> 8);
  switch(uVar19) {
  case 0:
    *(undefined1 *)puVar15 = uVar22;
    *(ushort *)((long)puVar15 + 2) = uVar8;
    *(undefined1 *)(puVar15 + 1) = uVar6;
    *(undefined2 *)((long)puVar15 + 5) = uVar9;
    puVar15 = puVar15 + 2;
    do {
      puVar18 = puVar15;
      puVar15 = (undefined4 *)((long)puVar18 + -1);
    } while (*(char *)((long)puVar18 + -2) == '0');
    puVar20 = (undefined4 *)((long)puVar18 + -1);
    if (*(char *)((long)puVar18 + -2) == '.') {
      puVar20 = (undefined4 *)((long)puVar18 + -2);
    }
    goto code_r0x00010ae8c28c;
  case 1:
    *(undefined1 *)puVar15 = uVar22;
    *(char *)((long)puVar15 + 1) = (char)(uVar26 >> 8);
    *(undefined1 *)((long)puVar15 + 2) = 0x2e;
    *(short *)((long)puVar15 + 3) = (short)uVar4;
    puVar20 = puVar15 + 2;
    *(undefined2 *)((long)puVar15 + 5) = uVar9;
    do {
      cVar14 = *(char *)((long)puVar20 + -2);
      puVar20 = (undefined4 *)((long)puVar20 + -1);
    } while (cVar14 == '0');
    break;
  case 2:
    *(undefined1 *)puVar15 = uVar22;
    *(ushort *)((long)puVar15 + 1) = uVar8;
    *(undefined1 *)((long)puVar15 + 3) = 0x2e;
    *(undefined1 *)(puVar15 + 1) = uVar6;
    puVar20 = puVar15 + 2;
    *(undefined2 *)((long)puVar15 + 5) = uVar9;
    do {
      cVar14 = *(char *)((long)puVar20 + -2);
      puVar20 = (undefined4 *)((long)puVar20 + -1);
    } while (cVar14 == '0');
    break;
  case 3:
    *(undefined1 *)puVar15 = uVar22;
    *(ushort *)((long)puVar15 + 1) = uVar8;
    *(undefined1 *)((long)puVar15 + 3) = uVar6;
    if ((uVar23 >> 8 | uVar2 & 0xff) == 0x30) {
      psVar21 = (short *)(puVar15 + 1);
    }
    else {
      *(undefined1 *)(puVar15 + 1) = 0x2e;
      *(char *)((long)puVar15 + 5) = (char)uVar2;
      if (uVar23 >> 8 == 0x30) {
        psVar21 = (short *)((long)puVar15 + 6);
      }
      else {
        psVar21 = (short *)((long)puVar15 + 7);
        *(undefined1 *)((long)puVar15 + 6) = uVar7;
      }
    }
    *(undefined1 *)psVar21 = 0;
    goto LAB_10ae8c3b8;
  case 4:
    *(undefined1 *)puVar15 = uVar22;
    *(ushort *)((long)puVar15 + 1) = uVar8;
    *(undefined1 *)((long)puVar15 + 3) = uVar6;
    *(char *)(puVar15 + 1) = (char)uVar2;
    if (uVar23 >> 8 == 0x30) {
      puVar20 = (undefined4 *)((long)puVar15 + 5);
    }
    else {
      *(undefined1 *)((long)puVar15 + 5) = 0x2e;
      *(undefined1 *)((long)puVar15 + 6) = uVar7;
      puVar20 = (undefined4 *)((long)puVar15 + 7);
    }
    goto code_r0x00010ae8c28c;
  case 5:
    *(undefined1 *)puVar15 = uVar22;
    *(ushort *)((long)puVar15 + 1) = uVar8;
    *(undefined1 *)((long)puVar15 + 3) = uVar6;
    *(undefined2 *)(puVar15 + 1) = uVar9;
    *(undefined1 *)((long)puVar15 + 6) = 0;
    return (undefined1 *)((long)((long)puVar15 + 6) - (long)param_2);
  case 0xfffffffc:
    *(undefined1 *)((long)puVar15 + 2) = 0x30;
    puVar15 = (undefined4 *)((long)puVar15 + 1);
  case 0xfffffffd:
    *(undefined1 *)((long)puVar15 + 2) = 0x30;
    puVar15 = (undefined4 *)((long)puVar15 + 1);
  case 0xfffffffe:
    *(undefined1 *)((long)puVar15 + 2) = 0x30;
    puVar15 = (undefined4 *)((long)puVar15 + 1);
  case 0xffffffff:
    *(undefined1 *)((long)puVar15 + 2) = uVar22;
    *(ushort *)((long)puVar15 + 3) = uVar8;
    *(undefined1 *)((long)puVar15 + 5) = uVar6;
    *(undefined2 *)((long)puVar15 + 6) = uVar9;
    puVar17 = (undefined1 *)((long)puVar15 + 9);
    puVar11 = puVar17 + -(long)param_2;
    do {
      pcVar1 = puVar17 + -2;
      puVar11 = puVar11 + -1;
      puVar17 = puVar17 + -1;
    } while (*pcVar1 == '0');
    *puVar17 = 0;
    return puVar11;
  }
  if (cVar14 == '.') {
    puVar20 = (undefined4 *)((long)puVar20 + -1);
  }
code_r0x00010ae8c28c:
  *(undefined1 *)puVar20 = 0;
  return (undefined1 *)((long)puVar20 - (long)param_2);
}



/* Entry: 10ae8c3ec; end: 10ae8c5db;  */

undefined8 FUN_10ae8c3ec(byte *param_1,long param_2,ulong *param_3,uint param_4)

{
  byte bVar1;
  byte bVar2;
  undefined8 uVar3;
  long lVar4;
  byte *pbVar5;
  byte *pbVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  *param_3 = 0;
  if (param_1 == (byte *)0x0) {
    return 0;
  }
  pbVar5 = param_1;
  if (0 < param_2) {
    do {
      if (((byte)(&UNK_10e52ca36)[*pbVar5] >> 3 & 1) == 0) break;
      pbVar5 = pbVar5 + 1;
    } while (pbVar5 < param_1 + param_2);
  }
  do {
    lVar4 = param_2;
    if (param_1 + lVar4 <= pbVar5) {
      return 0;
    }
    param_2 = lVar4 + -1;
  } while (((byte)(&UNK_10e52ca36)[(param_1 + lVar4)[-1]] >> 3 & 1) != 0);
  bVar2 = *pbVar5;
  if (((bVar2 == 0x2d) || (bVar2 == 0x2b)) && (pbVar5 = pbVar5 + 1, param_1 + lVar4 <= pbVar5)) {
    return 0;
  }
  if (param_4 == 0x10) {
    if (((1 < (long)(param_1 + (param_2 - (long)pbVar5) + 1)) && (*pbVar5 == 0x30)) &&
       ((pbVar5[1] | 0x20) == 0x78)) {
LAB_10ae8c4f4:
      pbVar5 = pbVar5 + 2;
      if (param_1 + lVar4 <= pbVar5) {
        return 0;
      }
    }
    uVar8 = 0x10;
  }
  else {
    if (param_4 != 0) {
      if (0x22 < param_4 - 2) {
        return 0;
      }
      uVar8 = (ulong)param_4;
      goto LAB_10ae8c550;
    }
    if ((long)(param_1 + (param_2 - (long)pbVar5) + 1) < 2) {
      if (param_1 + (param_2 - (long)pbVar5) == (byte *)0x0) {
        bVar1 = *pbVar5;
        if (bVar1 == 0x30) {
          pbVar5 = pbVar5 + 1;
        }
        uVar8 = 8;
        if (bVar1 != 0x30) {
          uVar8 = 10;
        }
        goto LAB_10ae8c550;
      }
    }
    else if (*pbVar5 == 0x30) {
      if ((pbVar5[1] | 0x20) != 0x78) {
        uVar8 = 8;
        pbVar5 = pbVar5 + 1;
        goto LAB_10ae8c550;
      }
      goto LAB_10ae8c4f4;
    }
    uVar8 = 10;
  }
LAB_10ae8c550:
  if (bVar2 == 0x2d) {
    return 0;
  }
  if ((long)(param_1 + lVar4) - (long)pbVar5 < 1) {
    uVar7 = 0;
  }
  else {
    uVar7 = 0;
    do {
      pbVar6 = pbVar5 + 1;
      uVar9 = (ulong)(char)(&UNK_10e5302b8)[*pbVar5];
      if (uVar8 <= uVar9) {
        uVar3 = 0;
        goto LAB_10ae8c5d4;
      }
      if ((*(ulong *)(&UNK_10e5307c8 + uVar8 * 8) < uVar7) || (CARRY8(uVar9,uVar7 * uVar8))) {
        uVar3 = 0;
        uVar7 = 0xffffffffffffffff;
        goto LAB_10ae8c5d4;
      }
      uVar7 = uVar7 * uVar8 + uVar9;
      pbVar5 = pbVar6;
    } while (pbVar6 < param_1 + lVar4);
  }
  uVar3 = 1;
LAB_10ae8c5d4:
  *param_3 = uVar7;
  return uVar3;
}



/* Entry: 10ae8c5dc; end: 10ae8c663;  */

undefined1  [16] FUN_10ae8c5dc(ulong param_1,uint param_2)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  
  if (param_2 < 0xd) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    do {
      FUN_10ae8c664();
      bVar1 = 0x19 < param_2;
      param_2 = param_2 - 0xd;
    } while (bVar1);
  }
  FUN_10ae8c664();
  uVar4 = LZCOUNT(param_1);
  uVar2 = uVar3;
  if (uVar4 != 0) {
    uVar2 = uVar3 << (uVar4 & 0x3f);
    param_1 = param_1 << (uVar4 & 0x3f) | (uVar3 >> 1) >> ((ulong)~(uint)uVar4 & 0x3f);
  }
  auVar5._8_8_ = uVar2;
  auVar5._0_8_ = param_1;
  return auVar5;
}



/* Entry: 10ae8c664; end: 10ae8c6d7;  */

undefined1  [16] FUN_10ae8c664(ulong param_1,ulong param_2,uint param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  
  uVar5 = (param_2 & 0xffffffff) * (ulong)param_3;
  uVar2 = (param_2 >> 0x20) * (ulong)param_3;
  uVar4 = (param_1 >> 0x20) * (ulong)param_3;
  uVar3 = uVar2 << 0x20;
  uVar1 = uVar5 + uVar3;
  uVar3 = (uVar4 << 0x20) + (param_1 & 0xffffffff) * (ulong)param_3 + (uVar2 >> 0x20) +
          (ulong)CARRY8(uVar5,uVar3);
  uVar4 = uVar4 >> 0x20;
  if (uVar3 < (param_1 & 0xffffffff) * (ulong)param_3) {
    uVar4 = uVar4 + 1;
  }
  uVar2 = LZCOUNT(uVar4);
  if (uVar4 != 0) {
    uVar1 = uVar3 << (uVar2 & 0x3f) | (uVar1 >> 1) >> ((ulong)~(uint)uVar2 & 0x3f);
    uVar3 = uVar4 << (uVar2 & 0x3f) | (uVar3 >> 1) >> ((ulong)~(uint)uVar2 & 0x3f);
  }
  auVar6._8_8_ = uVar1;
  auVar6._0_8_ = uVar3;
  return auVar6;
}



/* Entry: 10ae8c6d8; end: 10ae8c7df;  */

void FUN_10ae8c6d8(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  func_0x000107c34fec(param_1,param_3[1] + param_2[1] + param_4[1] + param_5[1]);
  puVar1 = (undefined8 *)*param_1;
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    puVar1 = param_1;
  }
  lVar3 = param_2[1];
  if (lVar3 != 0) {
    _memcpy(puVar1,*param_2,lVar3);
  }
  lVar2 = param_3[1];
  if (lVar2 != 0) {
    _memcpy((long)puVar1 + lVar3,*param_3,lVar2);
  }
  lVar2 = (long)puVar1 + lVar3 + lVar2;
  lVar3 = param_4[1];
  if (lVar3 != 0) {
    _memcpy(lVar2,*param_4,lVar3);
  }
  if (param_5[1] != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memcpy_11034c658)(lVar2 + lVar3,*param_5);
    return;
  }
  return;
}



/* Entry: 10ae8c7e0; end: 10ae8c89b;  */

void FUN_10ae8c7e0(undefined8 *param_1,long param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar5 = param_3 << 4;
  lVar1 = 0;
  if (param_3 != 0) {
    lVar1 = 0;
    plVar2 = (long *)(param_2 + 8);
    lVar3 = lVar5;
    do {
      lVar1 = *plVar2 + lVar1;
      lVar3 = lVar3 + -0x10;
      plVar2 = plVar2 + 2;
    } while (lVar3 != 0);
  }
  func_0x000107c34fec(param_1,lVar1);
  if (param_3 != 0) {
    puVar4 = (undefined8 *)*param_1;
    if (-1 < *(char *)((long)param_1 + 0x17)) {
      puVar4 = param_1;
    }
    plVar2 = (long *)(param_2 + 8);
    do {
      lVar1 = *plVar2;
      if (lVar1 != 0) {
        _memcpy(puVar4,plVar2[-1],lVar1);
        puVar4 = (undefined8 *)((long)puVar4 + lVar1);
      }
      plVar2 = plVar2 + 2;
      lVar5 = lVar5 + -0x10;
    } while (lVar5 != 0);
  }
  return;
}



/* Entry: 10ae8c89c; end: 10ae8c94b;  */

void FUN_10ae8c89c(undefined8 *param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = (long)*(char *)((long)param_1 + 0x17);
  if (lVar5 < 0) {
    lVar5 = param_1[1];
  }
  lVar4 = param_3 << 4;
  lVar3 = lVar5;
  if (param_3 != 0) {
    plVar1 = (long *)(param_2 + 8);
    lVar2 = lVar4;
    do {
      lVar3 = *plVar1 + lVar3;
      lVar2 = lVar2 + -0x10;
      plVar1 = plVar1 + 2;
    } while (lVar2 != 0);
  }
  func_0x000107c2ba4c(param_1,lVar3);
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    param_1 = (undefined8 *)*param_1;
  }
  if (param_3 != 0) {
    lVar5 = (long)param_1 + lVar5;
    plVar1 = (long *)(param_2 + 8);
    do {
      lVar3 = *plVar1;
      if (lVar3 != 0) {
        _memcpy(lVar5,plVar1[-1],lVar3);
        lVar5 = lVar5 + lVar3;
      }
      plVar1 = plVar1 + 2;
      lVar4 = lVar4 + -0x10;
    } while (lVar4 != 0);
  }
  return;
}



/* Entry: 10ae8c94c; end: 10ae8c9e3;  */

void FUN_10ae8c94c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = (long)*(char *)((long)param_1 + 0x17);
  if (lVar1 < 0) {
    lVar1 = param_1[1];
  }
  func_0x000107c2ba4c(param_1,param_2[1] + lVar1 + param_3[1]);
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    param_1 = (undefined8 *)*param_1;
  }
  lVar2 = param_2[1];
  if (lVar2 != 0) {
    _memcpy((long)param_1 + lVar1,*param_2,lVar2);
  }
  if (param_3[1] != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memcpy_11034c658)((long)param_1 + lVar1 + lVar2,*param_3);
    return;
  }
  return;
}



/* Entry: 10ae8c9e4; end: 10ae8caaf;  */

void FUN_10ae8c9e4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long lVar1;
  long lVar2;
  
  lVar1 = (long)*(char *)((long)param_1 + 0x17);
  if (lVar1 < 0) {
    lVar1 = param_1[1];
  }
  func_0x000107c2ba4c(param_1,param_2[1] + lVar1 + param_3[1] + param_4[1]);
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    param_1 = (undefined8 *)*param_1;
  }
  lVar2 = param_2[1];
  if (lVar2 != 0) {
    _memcpy((long)param_1 + lVar1,*param_2,lVar2);
  }
  lVar2 = (long)param_1 + lVar1 + lVar2;
  lVar1 = param_3[1];
  if (lVar1 != 0) {
    _memcpy(lVar2,*param_3,lVar1);
  }
  if (param_4[1] != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memcpy_11034c658)(lVar2 + lVar1,*param_4);
    return;
  }
  return;
}



/* Entry: 10ae8cab0; end: 10ae8cb8b;  */

undefined1  [16]
FUN_10ae8cab0(char *param_1,long param_2,undefined1 *param_3,undefined1 *param_4,ulong param_5)

{
  ulong uVar1;
  byte bVar2;
  long *plVar3;
  char *pcVar4;
  long lVar5;
  long lVar6;
  undefined1 *puVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  char *pcVar11;
  char *pcVar12;
  long lVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  long lStack_40;
  undefined1 *puStack_38;
  
  plVar3 = &lStack_40;
  uVar10 = (ulong)param_1[0x17];
  if ((long)uVar10 < 0) {
    pcVar11 = *(char **)param_1;
    uVar10 = *(ulong *)(param_1 + 8);
    if (uVar10 != 1) goto LAB_10ae8cb30;
  }
  else {
    pcVar11 = param_1;
    if (param_1[0x17] != '\x01') {
LAB_10ae8cb30:
      if (uVar10 == 0 && param_3 != (undefined1 *)0x0) {
        param_4 = param_4 + param_2 + 1;
        uVar9 = 0;
      }
      else {
        lStack_40 = param_2;
        puStack_38 = param_3;
        func_0x00010923797c(&lStack_40,pcVar11,uVar10);
        if (plVar3 != (long *)0xffffffffffffffff) {
          param_3 = (undefined1 *)plVar3;
        }
        param_4 = param_3 + param_2;
        uVar9 = 0;
        if (plVar3 != (long *)0xffffffffffffffff) {
          uVar9 = uVar10;
        }
      }
      goto LAB_10ae8cb6c;
    }
  }
  uVar10 = (long)param_3 - (long)param_4;
  if (param_4 <= param_3 && uVar10 != 0) {
    lVar5 = (long)*pcVar11;
    puVar7 = param_4 + param_2;
    _memchr();
    if ((puVar7 != (undefined1 *)0x0) &&
       (puVar7 = puVar7 + -param_2, puVar7 != (undefined1 *)0xffffffffffffffff)) {
      if (param_3 < puVar7) {
        pcVar11 = "string_view::substr";
        func_0x000109262df8();
        pcVar4 = pcVar11;
        lVar6 = lVar5;
        if (uVar10 != 0) {
          lVar8 = 0;
          uVar9 = 0;
          do {
            if (*(char *)(lVar5 + uVar9) == '$') {
              uVar9 = uVar9 + 1;
              if (uVar10 <= uVar9) goto LAB_10ae8ccd8;
              bVar2 = *(byte *)(lVar5 + uVar9);
              if (9 < bVar2 - 0x30) {
                if (bVar2 == 0x24) goto LAB_10ae8cc0c;
                goto LAB_10ae8ccd8;
              }
              if (param_5 <= (ulong)bVar2 - 0x30) goto LAB_10ae8ccd8;
              lVar8 = *(long *)(param_4 + ((ulong)bVar2 - 0x30) * 0x10 + 8) + lVar8;
            }
            else {
LAB_10ae8cc0c:
              lVar8 = lVar8 + 1;
            }
            uVar9 = uVar9 + 1;
          } while (uVar9 < uVar10);
          if (lVar8 != 0) {
            lVar13 = (long)pcVar11[0x17];
            if (lVar13 < 0) {
              lVar13 = *(long *)(pcVar11 + 8);
            }
            lVar6 = lVar13 + lVar8;
            func_0x000107c2ba4c(pcVar11,lVar6);
            if (pcVar11[0x17] < '\0') {
              pcVar11 = *(char **)pcVar11;
            }
            uVar9 = 0;
            pcVar11 = pcVar11 + lVar13;
            do {
              if (*(char *)(lVar5 + uVar9) == '$') {
                uVar1 = uVar9 + 1;
                bVar2 = *(byte *)(lVar5 + uVar1);
                if (bVar2 - 0x30 < 10) {
                  lVar8 = *(long *)(param_4 + (ulong)bVar2 * 0x10 + -0x2f8);
                  if (lVar8 != 0) {
                    lVar6 = *(long *)(param_4 + (ulong)bVar2 * 0x10 + -0x300);
                    pcVar4 = pcVar11;
                    _memmove(pcVar11,lVar6,lVar8);
                  }
                  pcVar12 = pcVar11 + lVar8;
                  uVar9 = uVar1;
                }
                else {
                  pcVar12 = pcVar11;
                  if (bVar2 == 0x24) {
                    *pcVar11 = '$';
                    pcVar12 = pcVar11 + 1;
                    uVar9 = uVar1;
                  }
                }
              }
              else {
                pcVar12 = pcVar11 + 1;
                *pcVar11 = *(char *)(lVar5 + uVar9);
              }
              uVar9 = uVar9 + 1;
              pcVar11 = pcVar12;
            } while (uVar9 < uVar10);
          }
        }
LAB_10ae8ccd8:
        auVar15._8_8_ = lVar6;
        auVar15._0_8_ = pcVar4;
        return auVar15;
      }
      param_4 = puVar7 + param_2;
      uVar9 = (ulong)(param_3 != puVar7);
      goto LAB_10ae8cb6c;
    }
  }
  param_4 = param_3 + param_2;
  uVar9 = 0;
LAB_10ae8cb6c:
  auVar14._8_8_ = uVar9;
  auVar14._0_8_ = param_4;
  return auVar14;
}



/* Entry: 10ae8cb8c; end: 10ae8ccdb;  */

void FUN_10ae8cb8c(undefined8 *param_1,long param_2,ulong param_3,long param_4,ulong param_5)

{
  ulong uVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  char *pcVar5;
  char *pcVar6;
  long lVar7;
  
  if (param_3 != 0) {
    lVar3 = 0;
    uVar4 = 0;
    do {
      if (*(char *)(param_2 + uVar4) == '$') {
        uVar4 = uVar4 + 1;
        if (param_3 <= uVar4) {
          return;
        }
        bVar2 = *(byte *)(param_2 + uVar4);
        if (9 < bVar2 - 0x30) {
          if (bVar2 != 0x24) {
            return;
          }
          goto LAB_10ae8cc0c;
        }
        if (param_5 <= (ulong)bVar2 - 0x30) {
          return;
        }
        lVar3 = *(long *)(param_4 + ((ulong)bVar2 - 0x30) * 0x10 + 8) + lVar3;
      }
      else {
LAB_10ae8cc0c:
        lVar3 = lVar3 + 1;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < param_3);
    if (lVar3 != 0) {
      lVar7 = (long)*(char *)((long)param_1 + 0x17);
      if (lVar7 < 0) {
        lVar7 = param_1[1];
      }
      func_0x000107c2ba4c(param_1,lVar7 + lVar3);
      if (*(char *)((long)param_1 + 0x17) < '\0') {
        param_1 = (undefined8 *)*param_1;
      }
      uVar4 = 0;
      pcVar5 = (char *)((long)param_1 + lVar7);
      do {
        if (*(char *)(param_2 + uVar4) == '$') {
          uVar1 = uVar4 + 1;
          bVar2 = *(byte *)(param_2 + uVar1);
          if (bVar2 - 0x30 < 10) {
            lVar3 = param_4 + (ulong)bVar2 * 0x10;
            lVar7 = *(long *)(lVar3 + -0x2f8);
            if (lVar7 != 0) {
              _memmove(pcVar5,*(undefined8 *)(lVar3 + -0x300),lVar7);
            }
            pcVar6 = pcVar5 + lVar7;
            uVar4 = uVar1;
          }
          else {
            pcVar6 = pcVar5;
            if (bVar2 == 0x24) {
              *pcVar5 = '$';
              pcVar6 = pcVar5 + 1;
              uVar4 = uVar1;
            }
          }
        }
        else {
          pcVar6 = pcVar5 + 1;
          *pcVar5 = *(char *)(param_2 + uVar4);
        }
        uVar4 = uVar4 + 1;
        pcVar5 = pcVar6;
      } while (uVar4 < param_3);
    }
  }
  return;
}



/* Entry: 10ae8ccdc; end: 10ae8cd7b;  */

char * FUN_10ae8ccdc(ulong *param_1,long param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  long lVar5;
  
  if (param_2 == 0) {
    return (char *)0x0;
  }
  puVar1 = (ulong *)((long)param_1 + param_2);
  puVar2 = param_1;
  for (puVar4 = param_1; (7 < param_2 && ((*puVar4 & 0x8080808080808080) == 0)); puVar4 = puVar4 + 1
      ) {
    puVar2 = puVar2 + 1;
    param_2 = param_2 + -8;
  }
  puVar3 = puVar4;
  if (puVar4 < puVar1) {
    lVar5 = (long)puVar1 - (long)puVar2;
    puVar2 = (ulong *)((long)puVar4 + lVar5);
    do {
      puVar3 = puVar4;
      if ((char)*puVar4 < '\0') break;
      puVar4 = (ulong *)((long)puVar4 + 1);
      lVar5 = lVar5 + -1;
      puVar3 = puVar2;
    } while (lVar5 != 0);
  }
  lVar5 = (long)puVar3 - (long)param_1;
  func_0x000107c34ffc(puVar3,puVar1,1);
  return (char *)(lVar5 + (long)puVar3);
}



/* Entry: 10ae8cd7c; end: 10ae8cd7f;  */

char * FUN_10ae8cd7c(ulong *param_1,long param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  long lVar5;
  
  if (param_2 == 0) {
    return (char *)0x0;
  }
  puVar1 = (ulong *)((long)param_1 + param_2);
  puVar2 = param_1;
  for (puVar4 = param_1; (7 < param_2 && ((*puVar4 & 0x8080808080808080) == 0)); puVar4 = puVar4 + 1
      ) {
    puVar2 = puVar2 + 1;
    param_2 = param_2 + -8;
  }
  puVar3 = puVar4;
  if (puVar4 < puVar1) {
    lVar5 = (long)puVar1 - (long)puVar2;
    puVar2 = (ulong *)((long)puVar4 + lVar5);
    do {
      puVar3 = puVar4;
      if ((char)*puVar4 < '\0') break;
      puVar4 = (ulong *)((long)puVar4 + 1);
      lVar5 = lVar5 + -1;
      puVar3 = puVar2;
    } while (lVar5 != 0);
  }
  lVar5 = (long)puVar3 - (long)param_1;
  func_0x000107c34ffc(puVar3,puVar1,1);
  return (char *)(lVar5 + (long)puVar3);
}



/* Entry: 10ae8cd80; end: 10ae8cdcf;  */

void FUN_10ae8cd80(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x68;
  __Znwm();
  FUN_10ae8cdd0();
  *param_1 = uVar1;
  return;
}



/* Entry: 10ae8cdd0; end: 10ae8ce8f;  */

undefined8 * FUN_10ae8cdd0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  int extraout_w10;
  
  *param_1 = &PTR_FUN_110c8ba78;
  plVar2 = (long *)*param_2;
  lVar1 = param_2[1];
  param_1[1] = plVar2;
  param_1[2] = lVar1;
  if (lVar1 != 0) {
    do {
      func_0x00010ae8ffe4();
    } while (extraout_w10 != 0);
    plVar2 = (long *)*param_2;
  }
  param_1[3] = &PTR_FUN_110c8bad0;
  param_1[4] = param_1;
  uVar3 = *param_3;
  param_1[5] = &UNK_10f6d2cad;
  param_1[6] = uVar3;
  *(undefined4 *)(param_1 + 7) = 0;
  (**(code **)(*plVar2 + 0x28))();
  uVar3 = *param_3;
  param_1[8] = plVar2;
  param_1[9] = &UNK_10f6d2ccb;
  param_1[10] = uVar3;
  *(undefined4 *)(param_1 + 0xb) = 0;
  plVar2 = (long *)*param_2;
  (**(code **)(*plVar2 + 0x28))();
  param_1[0xc] = plVar2;
  return param_1;
}



/* Entry: 10ae8ce90; end: 10ae8ce93;  */

void FUN_10ae8ce90(void)

{
  return;
}



/* Entry: 10ae8ce94; end: 10ae8cecf;  */

void FUN_10ae8ce94(undefined8 param_1)

{
  undefined1 auStack_58 [56];
  
  func_0x00010ae90264();
  FUN_10ae8d324();
  func_0x000107c35018(param_1,auStack_58);
  func_0x00010ae90070();
  return;
}



/* Entry: 10ae8ced0; end: 10ae8cf43;  */

void FUN_10ae8ced0(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  code *extraout_x8;
  undefined1 auStack_100 [16];
  undefined8 uStack_f0;
  undefined1 auStack_89 [65];
  undefined8 uStack_48;
  
  func_0x000107c35008();
  func_0x00010ae901a8();
  func_0x00010ae90320();
  puVar1 = auStack_89;
  func_0x00010ae90178();
  func_0x00010ae902a0();
  func_0x00010ae902b0();
  func_0x000107c35000(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010ae902a0();
  func_0x00010ae902b0();
  func_0x00010ae90020();
  lVar4 = *(long *)(puVar1 + 8);
  plVar2 = *(long **)(lVar4 + 8);
  plVar3 = plVar2;
  (**(code **)(*plVar2 + 0x48))();
  (**(code **)(*plVar2 + 0x18))(auStack_100,plVar2,lVar4 + 0x28,param_2,plVar3);
  (**(code **)(*plRam0000000113815c70 + 0x120))(plRam0000000113815c70,uStack_f0);
  func_0x00010ae902b8(plRam0000000113815c70,uStack_f0);
  (*extraout_x8)();
  FUN_10ae8e1dc();
  return;
}



/* Entry: 10ae8cf44; end: 10ae8cf63;  */

void FUN_10ae8cf44(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  code *extraout_x8;
  undefined1 auStack_70 [16];
  undefined8 uStack_60;
  
  lVar3 = *(long *)(param_1 + 8);
  plVar1 = *(long **)(lVar3 + 8);
  plVar2 = plVar1;
  (**(code **)(*plVar1 + 0x48))();
  (**(code **)(*plVar1 + 0x18))(auStack_70,plVar1,lVar3 + 0x28,param_2,plVar2);
  (**(code **)(*plRam0000000113815c70 + 0x120))(plRam0000000113815c70,uStack_60);
  func_0x00010ae902b8(plRam0000000113815c70,uStack_60);
  (*extraout_x8)();
  FUN_10ae8e1dc();
  return;
}



/* Entry: 10ae8cf64; end: 10ae8d047;  */

void FUN_10ae8cf64(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  code *extraout_x8;
  undefined1 auStack_70 [16];
  undefined8 uStack_60;
  
  plVar1 = param_1;
  (**(code **)(*param_1 + 0x48))();
  (**(code **)(*param_1 + 0x18))(auStack_70,param_1,param_2,param_3,plVar1);
  (**(code **)(*plRam0000000113815c70 + 0x120))(plRam0000000113815c70,uStack_60);
  func_0x00010ae902b8(plRam0000000113815c70,uStack_60);
  (*extraout_x8)();
  FUN_10ae8e1dc();
  return;
}



/* Entry: 10ae8d048; end: 10ae8d0af;  */

long * FUN_10ae8d048(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 auStack_60 [2];
  undefined8 uStack_50;
  undefined8 uStack_40;
  
  plVar1 = *(long **)(param_1 + 8);
  (**(code **)(*plVar1 + 0x18))(auStack_60,plVar1,param_1 + 0x28,param_2);
  func_0x00010ae8ff14();
  func_0x00010ae90250();
  func_0x00010ae9003c(&PTR_FUN_110c8c028,uStack_40,uStack_50,auStack_60[0]);
  return plVar1;
}



/* Entry: 10ae8d0b0; end: 10ae8d0d3;  */

undefined8 FUN_10ae8d0b0(undefined8 param_1)

{
  FUN_10ae8d048();
  FUN_10ae8d0d4();
  return param_1;
}



/* Entry: 10ae8d0d4; end: 10ae8d0d7;  */

void FUN_10ae8d0d4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  *(undefined1 *)(param_1 + 0x40) = 1;
  lVar3 = *(long *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x48);
  lVar1 = lVar3 + 0xb8;
  func_0x0001004b9428();
  *(undefined1 *)(lVar2 + 0x20) = 0;
  *(undefined1 *)(lVar2 + 1) = 1;
  *(int *)(lVar2 + 4) = (int)lVar3;
  *(long *)(lVar2 + 0x10) = lVar1;
  return;
}



/* Entry: 10ae8d0d8; end: 10ae8d113;  */

void FUN_10ae8d0d8(undefined8 param_1)

{
  undefined1 auStack_58 [56];
  
  func_0x00010ae90264();
  FUN_10ae8d324();
  func_0x000107c35018(param_1,auStack_58);
  func_0x00010ae90070();
  return;
}



/* Entry: 10ae8d114; end: 10ae8d187;  */

void FUN_10ae8d114(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  long *plVar1;
  undefined1 *puVar2;
  long *plVar3;
  code *extraout_x8;
  long lVar4;
  undefined1 auStack_100 [16];
  undefined8 uStack_f0;
  undefined1 auStack_89 [65];
  undefined8 uStack_48;
  
  func_0x000107c35008();
  func_0x00010ae901a8();
  func_0x00010ae90320();
  puVar2 = auStack_89;
  func_0x00010ae90178();
  func_0x00010ae902a0();
  func_0x00010ae902b0();
  func_0x000107c35000(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010ae902a0();
  func_0x00010ae902b0();
  func_0x00010ae90020();
  lVar4 = *(long *)(puVar2 + 8);
  plVar3 = *(long **)(lVar4 + 8);
  plVar1 = plVar3;
  (**(code **)(*plVar3 + 0x48))();
  (**(code **)(*plVar3 + 0x18))(auStack_100,plVar3,lVar4 + 0x48,param_2,plVar1);
  (**(code **)(*plRam0000000113815c70 + 0x120))(plRam0000000113815c70,uStack_f0);
  func_0x00010ae902b8(plRam0000000113815c70,uStack_f0);
  (*extraout_x8)();
  FUN_10ae8e1dc();
  return;
}



/* Entry: 10ae8d188; end: 10ae8d1c7;  */

void FUN_10ae8d188(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  code *extraout_x8;
  long lVar3;
  undefined1 auStack_70 [16];
  undefined8 uStack_60;
  
  lVar3 = *(long *)(param_1 + 8);
  plVar2 = *(long **)(lVar3 + 8);
  plVar1 = plVar2;
  (**(code **)(*plVar2 + 0x48))();
  (**(code **)(*plVar2 + 0x18))(auStack_70,plVar2,lVar3 + 0x48,param_2,plVar1);
  (**(code **)(*plRam0000000113815c70 + 0x120))(plRam0000000113815c70,uStack_60);
  func_0x00010ae902b8(plRam0000000113815c70,uStack_60);
  (*extraout_x8)();
  FUN_10ae8e1dc();
  return;
}



/* Entry: 10ae8d1c8; end: 10ae8d22b;  */

long * FUN_10ae8d1c8(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 auStack_60 [2];
  undefined8 uStack_50;
  undefined8 uStack_40;
  
  (**(code **)(*param_1 + 0x18))(auStack_60,param_1,param_3,param_4,param_2);
  func_0x00010ae8ff14();
  func_0x00010ae90250();
  func_0x00010ae9003c(&PTR_FUN_110c8c338,uStack_40,uStack_50,auStack_60[0]);
  return param_1;
}



/* Entry: 10ae8d22c; end: 10ae8d24f;  */

undefined8 FUN_10ae8d22c(undefined8 param_1)

{
  func_0x00010ae8d1a8();
  FUN_10ae8d250();
  return param_1;
}



/* Entry: 10ae8d250; end: 10ae8d257;  */

void FUN_10ae8d250(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  *(undefined1 *)(param_1 + 0x40) = 1;
  lVar3 = *(long *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x48);
  lVar1 = lVar3 + 0xb8;
  func_0x0001004b9428();
  *(undefined1 *)(lVar2 + 0x20) = 0;
  *(undefined1 *)(lVar2 + 1) = 1;
  *(int *)(lVar2 + 4) = (int)lVar3;
  *(long *)(lVar2 + 0x10) = lVar1;
  return;
}



/* Entry: 10ae8d258; end: 10ae8d28f;  */

void FUN_10ae8d258(void)

{
  func_0x00010ae903a4();
  return;
}



/* Entry: 10ae8d290; end: 10ae8d297;  */

long FUN_10ae8d290(long param_1)

{
  return param_1 + 0x18;
}



/* Entry: 10ae8d298; end: 10ae8d2ef;  */

long FUN_10ae8d298(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)(param_2 + 0x18);
  lVar2 = *plVar1;
  if (lVar2 == 0) {
    plVar1 = (long *)(param_1 + 0x18);
  }
  else {
    if (lVar2 == param_2) {
      *(long *)(param_1 + 0x18) = param_1;
      func_0x00010ae901cc(*plVar1);
      func_0x00010ae90168();
      return param_1;
    }
    *(long *)(param_1 + 0x18) = lVar2;
  }
  *plVar1 = 0;
  return param_1;
}



/* Entry: 10ae8d2f0; end: 10ae8d323;  */

void FUN_10ae8d2f0(long param_1)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  
  func_0x00010ae8fff4();
  if ((bool)in_ZR) {
    uVar1 = 0x20;
  }
  else {
    if (param_1 == 0) {
      return;
    }
    uVar1 = 0x28;
  }
  func_0x00010ae8ff38(uVar1);
  return;
}



/* Entry: 10ae8d324; end: 10ae8d52f;  */

void FUN_10ae8d324(undefined4 *param_1,long *param_2,undefined8 param_3,undefined1 *param_4,
                  undefined8 *param_5,undefined8 param_6)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined8 extraout_x8;
  long extraout_x8_00;
  code *extraout_x8_01;
  undefined4 *extraout_x8_02;
  long *unaff_x19;
  undefined1 auStack_398 [8];
  undefined1 *puStack_390;
  undefined1 auStack_370 [24];
  undefined8 auStack_358 [6];
  undefined1 auStack_328 [56];
  undefined8 uStack_2f0;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  undefined8 uStack_2e0;
  undefined1 *puStack_2d8;
  undefined1 uStack_2c8;
  undefined1 auStack_2c0 [72];
  undefined1 *puStack_278;
  byte bStack_270;
  undefined8 uStack_268;
  undefined1 uStack_258;
  undefined1 uStack_254;
  undefined1 *puStack_248;
  undefined1 *puStack_240;
  undefined1 auStack_d0 [120];
  undefined8 uStack_58;
  
  func_0x00010ae8fedc();
  *param_1 = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  uStack_2f0 = 0x100000002;
  uStack_2e8 = 0;
  uStack_2e0 = 0;
  uStack_58 = extraout_x8;
  func_0x000104c4f3d4(auStack_d0,&uStack_2f0);
  (**(code **)(*param_2 + 0x18))(auStack_358,param_2,param_3,param_4,auStack_d0);
  FUN_10ae8d53c(&uStack_2f0);
  FUN_10ae8d530(auStack_328,auStack_2c0);
  func_0x00010ae90314();
  func_0x000107c27cbc(auStack_328);
  if ((int)*unaff_x19 == 0) {
    puVar1 = param_4;
    func_0x000107c27cc8();
    uStack_2c8 = 0;
    uStack_2e8._0_2_ = CONCAT11(1,(undefined1)uStack_2e8);
    uStack_2e4 = SUB84(puVar1,0);
    puStack_278 = param_4 + 0xd0;
    *param_4 = 1;
    uStack_258 = 1;
    uStack_254 = 1;
    puStack_240 = param_4 + 0x108;
    puStack_2d8 = param_4 + 0xb8;
    uStack_268 = param_6;
    puStack_248 = param_4;
    func_0x000107c35004();
    (**(code **)(extraout_x8_00 + 0x140))(auStack_328);
    func_0x00010ae90028(auStack_358[0]);
    (*extraout_x8_01)();
    param_5 = &uStack_2f0;
    func_0x000105395128(auStack_d0);
    if (((bStack_270 & 1) == 0) && ((int)*unaff_x19 == 0)) {
      func_0x000107c31940(auStack_370,&UNK_10f6d2ceb);
      param_5 = (undefined8 *)0xc;
      func_0x000105394120(auStack_328,0xc,auStack_370);
      func_0x00010ae90314();
      func_0x000107c27cbc(auStack_328);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_370);
    }
  }
  FUN_10ae8dbf8(&uStack_2f0);
  puVar1 = auStack_d0;
  func_0x000104c4f64c();
  func_0x000107c35000(uStack_58);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_370);
  FUN_10ae8dbf8(&uStack_2f0);
  func_0x000104c4f64c(auStack_d0);
  func_0x000107c27cbc();
  func_0x00010ae9037c();
  *unaff_x19 = (long)param_5;
  *(undefined4 *)(unaff_x19 + 3) = 0;
  *(undefined1 *)((long)unaff_x19 + 0x1c) = 0;
  puStack_390 = puVar1;
  func_0x00010ae8da38(unaff_x19 + 4,auStack_398);
  *extraout_x8_02 = 0;
  *(undefined8 *)(extraout_x8_02 + 4) = 0;
  *(undefined8 *)(extraout_x8_02 + 2) = 0;
  *(undefined8 *)(extraout_x8_02 + 8) = 0;
  *(undefined8 *)(extraout_x8_02 + 6) = 0;
  *(undefined8 *)(extraout_x8_02 + 0xc) = 0;
  *(undefined8 *)(extraout_x8_02 + 10) = 0;
  return;
}



/* Entry: 10ae8d530; end: 10ae8d53b;  */

void FUN_10ae8d530(undefined4 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puStack_28;
  
  *param_2 = param_3;
  *(undefined4 *)(param_2 + 3) = 0;
  *(undefined1 *)((long)param_2 + 0x1c) = 0;
  puStack_28 = param_2;
  func_0x00010ae8da38(param_2 + 4,&puStack_28);
  *param_1 = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  return;
}



/* Entry: 10ae8d53c; end: 10ae8d5a3;  */

void FUN_10ae8d53c(undefined8 *param_1)

{
  func_0x00010ae8ff78();
  *(undefined1 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined8 *)((long)param_1 + 0x95) = 0;
  *param_1 = &PTR_DAT_110c8bb60;
  param_1[0x1e] = param_1;
  param_1[0x1f] = param_1;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0xffffffff;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *(undefined1 *)(param_1 + 0x26) = 0;
  func_0x000107c27c68(param_1 + 0x27);
  return;
}



/* Entry: 10ae8d5a4; end: 10ae8d5b7;  */

void FUN_10ae8d5a4(void)

{
  FUN_10ae8dbf8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ae8d5b8; end: 10ae8d64b;  */

undefined8 FUN_10ae8d5b8(long param_1)

{
  long lVar1;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined1 *unaff_x21;
  
  func_0x00010ae900d8();
  if (*(char *)(param_1 + 0x130) == '\x01') {
    func_0x000107c27c70(*(undefined8 *)(unaff_x19 + 0x108));
    *unaff_x20 = *(undefined8 *)(unaff_x19 + 0xf8);
    *unaff_x21 = *(undefined1 *)(unaff_x19 + 0x218);
  }
  else {
    func_0x00010ae901c0();
    func_0x00010ae901d8();
    func_0x00010ae9034c(unaff_x19 + 0x80);
    *(undefined1 *)(unaff_x19 + 0x9c) = 0;
    func_0x00010ae902a8(unaff_x19 + 0xa0);
    *(undefined1 *)(unaff_x19 + 0x218) = *unaff_x21;
    lVar1 = unaff_x19;
    func_0x00010ae8d888();
    if ((int)lVar1 == 0) {
      return 0;
    }
    *unaff_x20 = *(undefined8 *)(unaff_x19 + 0xf8);
  }
  func_0x00010ae8ff14();
  func_0x00010ae8ffb4();
  return 1;
}



/* Entry: 10ae8d64c; end: 10ae8d68f;  */

void FUN_10ae8d64c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  code *UNRECOVERED_JUMPTABLE)

{
  long unaff_x19;
  undefined8 in_register_00005008;
  undefined8 in_register_00005028;
  undefined8 in_register_00005048;
  
  func_0x00010ae90140();
  *(undefined1 *)(param_4 + 0x130) = 0;
  func_0x00010ae8fec0();
  func_0x00010ae90308();
  *(undefined8 *)(unaff_x19 + 0x118) = in_register_00005028;
  *(undefined8 *)(unaff_x19 + 0x110) = param_2;
  *(undefined8 *)(unaff_x19 + 0x128) = in_register_00005048;
  *(undefined8 *)(unaff_x19 + 0x120) = param_3;
  *(undefined8 *)(unaff_x19 + 0x108) = in_register_00005008;
  *(undefined8 *)(unaff_x19 + 0x100) = param_1;
  func_0x00010ae8d8fc();
  if ((int)unaff_x19 != 0) {
    func_0x00010ae900f8();
                    /* WARNING: Could not recover jumptable at 0x00010ae90244. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



/* Entry: 10ae8d690; end: 10ae8d6e7;  */

undefined8 FUN_10ae8d690(long param_1)

{
  return *(undefined8 *)(param_1 + 0xf0);
}



/* Entry: 10ae8d6e8; end: 10ae8d787;  */

void FUN_10ae8d6e8(void)

{
  undefined1 uVar1;
  int iVar2;
  long lVar3;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 *extraout_x8;
  long unaff_x19;
  undefined8 uStack_48;
  
  func_0x00010ae8fe98();
  func_0x000107c27cac();
  func_0x00010ae900b4();
  func_0x00010ae900c4(unaff_x19 + 0x70);
  func_0x000107c27cb4();
  func_0x00010ae900c4(unaff_x19 + 0x80);
  FUN_10ae8d9ac();
  uVar1 = *(char *)(unaff_x19 + 0x9c) == '\x01';
  if (((bool)uVar1) && ((*(byte *)(unaff_x19 + 0x9b) & 1) == 0)) {
    func_0x00010ae90004();
    *extraout_x8 = 2;
    extraout_x8[1] = 0;
  }
  lVar3 = unaff_x19 + 0xa0;
  func_0x00010ae90078();
  func_0x00010ae90108();
  func_0x00010ae8ff24();
  func_0x00010ae8fe74();
  if ((int)lVar3 != 0) {
    func_0x00010ae8fe2c();
  }
  func_0x000107c35000(uStack_48);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  *(undefined1 *)(lVar3 + 0x130) = 1;
  func_0x00010ae900e8();
  iVar2 = (int)lVar3;
  func_0x00010ae8ffa8();
  func_0x00010ae8fe50();
  if (iVar2 == 0) {
    return;
  }
  func_0x00010ae8fef0();
                    /* WARNING: Could not recover jumptable at 0x00010ae8ffd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 10ae8d788; end: 10ae8d7c7;  */

void FUN_10ae8d788(long param_1)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar1 = (int)param_1;
  *(undefined1 *)(param_1 + 0x130) = 1;
  func_0x00010ae900e8();
  func_0x00010ae8ffa8();
  func_0x00010ae8fe50();
  if (iVar1 == 0) {
    return;
  }
  func_0x00010ae8fef0();
                    /* WARNING: Could not recover jumptable at 0x00010ae8ffd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 10ae8d7c8; end: 10ae8d9ab;  */

void FUN_10ae8d7c8(long param_1)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  
  func_0x00010ae8fff4();
  if ((bool)in_ZR) {
    uVar1 = 0x20;
  }
  else {
    if (param_1 == 0) {
      return;
    }
    uVar1 = 0x28;
  }
  func_0x00010ae8ff38(uVar1);
  return;
}



/* Entry: 10ae8d9ac; end: 10ae8d9e7;  */

void FUN_10ae8d9ac(long param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  
  if ((*(long *)(param_1 + 8) != 0) && ((*(byte *)(param_1 + 0x19) & 1) == 0)) {
    lVar1 = *param_3;
    *param_3 = lVar1 + 1;
    puVar2 = (undefined8 *)(param_2 + lVar1 * 0x50);
    *puVar2 = 5;
    puVar2[1] = 0;
    puVar2[2] = param_1 + 0x10;
  }
  return;
}



/* Entry: 10ae8d9e8; end: 10ae8da97;  */

void FUN_10ae8d9e8(undefined4 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puStack_28;
  
  *param_2 = param_3;
  *(int *)(param_2 + 3) = (int)param_4;
  *(char *)((long)param_2 + 0x1c) = (char)((ulong)param_4 >> 0x20);
  puStack_28 = param_2;
  func_0x00010ae8da38(param_2 + 4,&puStack_28);
  *param_1 = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  return;
}



/* Entry: 10ae8da98; end: 10ae8da9f;  */

void FUN_10ae8da98(void)

{
  return;
}



/* Entry: 10ae8daa0; end: 10ae8dad7;  */

void FUN_10ae8daa0(void)

{
  func_0x00010ae90170();
  func_0x00010ae90118();
  func_0x00010ae902d4();
  FUN_10ae8db2c();
  return;
}



/* Entry: 10ae8dad8; end: 10ae8daf7;  */

void FUN_10ae8dad8(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_110c8bc48;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10ae8daf8; end: 10ae8db1f;  */

void FUN_10ae8daf8(undefined8 param_1)

{
  func_0x00010ae902e4();
  func_0x00010ae90238(param_1,&PTR_DAT_110c8bca8);
  func_0x00010ae90130();
  return;
}



/* Entry: 10ae8db20; end: 10ae8db2b;  */

undefined ** FUN_10ae8db20(void)

{
  return &PTR_DAT_110c8bca8;
}



/* Entry: 10ae8db2c; end: 10ae8db4b;  */

void FUN_10ae8db2c(void)

{
  func_0x00010ae9020c();
  FUN_10ae8db4c();
  return;
}



/* Entry: 10ae8db4c; end: 10ae8db6b;  */

void FUN_10ae8db4c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10ae8db6c; end: 10ae8dbf7;  */

void FUN_10ae8db6c(undefined4 *param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  undefined4 auStack_60 [2];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  byte bStack_21;
  
  lVar1 = *param_2;
  func_0x000107c2ba5c(auStack_60,param_3,lVar1 + 0x10,&bStack_21);
  if ((bStack_21 & 1) == 0) {
    func_0x000104c00744(lVar1 + 0x10);
  }
  *param_1 = auStack_60[0];
  *(undefined8 *)(param_1 + 4) = uStack_50;
  *(undefined8 *)(param_1 + 2) = uStack_58;
  *(undefined8 *)(param_1 + 6) = uStack_48;
  uStack_58 = 0;
  uStack_50 = 0;
  *(undefined8 *)(param_1 + 10) = uStack_38;
  *(undefined8 *)(param_1 + 8) = uStack_40;
  *(undefined8 *)(param_1 + 0xc) = uStack_30;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  func_0x00010ae90204();
  return;
}



/* Entry: 10ae8dbf8; end: 10ae8dc8b;  */

undefined8 * FUN_10ae8dbf8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c8bb60;
  func_0x000104c00298(param_1 + 0x27);
  func_0x000107c27c64(param_1 + 0x12);
  func_0x00010ae90384();
  return param_1;
}



/* Entry: 10ae8dc8c; end: 10ae8de97;  */

void FUN_10ae8dc8c(undefined8 param_1,long *param_2,undefined8 param_3,undefined1 *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined1 in_ZR;
  long *plVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  long extraout_x8_03;
  undefined1 auStack_130 [56];
  int aiStack_f8 [14];
  undefined8 auStack_c0 [2];
  undefined8 uStack_b0;
  undefined1 auStack_90 [32];
  undefined8 uStack_70;
  
  plVar2 = param_2;
  func_0x00010ae8fedc();
  uStack_70 = extraout_x8;
  (**(code **)(*plVar2 + 0x48))();
  if (plVar2 == (long *)0x0) {
    func_0x00010ae90028(lRam0000000113815c70);
    (*extraout_x8_00)();
  }
  (**(code **)(*param_2 + 0x18))(auStack_c0,param_2,param_3,param_4,plVar2);
  lVar3 = lRam0000000113815c70;
  func_0x00010ae902b8(lRam0000000113815c70,uStack_b0);
  (*extraout_x8_01)();
  FUN_10ae8d53c();
  lVar1 = lVar3 + 0x220;
  func_0x00010ae8dc38(auStack_90,param_7);
  FUN_10ae8def8(lVar1,uStack_b0,auStack_90,lVar3);
  FUN_10ae8d2f0(auStack_90);
  FUN_10ae8d530(aiStack_f8,lVar3 + 0x30,param_5);
  if (aiStack_f8[0] == 0) {
    puVar4 = param_4;
    func_0x000107c27cc8();
    *(undefined1 *)(lVar3 + 0x28) = 0;
    *(undefined1 *)(lVar3 + 9) = 1;
    *(int *)(lVar3 + 0xc) = (int)puVar4;
    *(undefined1 **)(lVar3 + 0x18) = param_4 + 0xb8;
    *param_4 = 1;
    *(undefined1 **)(lVar3 + 0x78) = param_4 + 0xd0;
    *(undefined8 *)(lVar3 + 0x88) = param_6;
    *(undefined1 *)(lVar3 + 0x98) = 1;
    *(undefined1 *)(lVar3 + 0x9c) = 1;
    func_0x000107c27cc0(lVar3 + 0xa0,param_4,lVar3 + 0x268);
    *(long *)(lVar3 + 0xf0) = lVar1;
    func_0x00010ae90028(auStack_c0[0]);
    (*extraout_x8_02)();
  }
  else {
    func_0x000107c27c84(auStack_130,aiStack_f8);
    FUN_10ae8decc(lVar1,auStack_130);
    func_0x00010ae90204();
  }
  func_0x000107c27cbc(aiStack_f8);
  func_0x000107c35000(uStack_70);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010ae90204();
  func_0x000107c27cbc(aiStack_f8);
  func_0x00010ae90020();
  func_0x000107c35004();
  (**(code **)(extraout_x8_03 + 0x10))();
  return;
}



/* Entry: 10ae8de98; end: 10ae8decb;  */

void FUN_10ae8de98(undefined8 param_1)

{
  long extraout_x8;
  
  func_0x000107c35004();
  (**(code **)(extraout_x8 + 0x10))(param_1,&DAT_10f6842c6,&UNK_10f6d2dea,0x53);
  return;
}



/* Entry: 10ae8decc; end: 10ae8def7;  */

void FUN_10ae8decc(long param_1)

{
  undefined1 in_ZR;
  int iVar1;
  long lVar2;
  long *plVar3;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  long unaff_x19;
  undefined4 auStack_d8 [2];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 auStack_a0 [2];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined1 uStack_59;
  undefined1 auStack_58 [32];
  undefined8 uStack_38;
  
  func_0x000107c27c88(param_1 + 0x48);
  uStack_59 = 1;
  func_0x00010ae8fedc();
  lVar2 = *(long *)(param_1 + 0x40);
  lStack_68 = lVar2;
  uStack_38 = extraout_x8;
  func_0x00010ae90028();
  iVar1 = (int)lVar2;
  plVar3 = &lStack_68;
  (*extraout_x8_00)();
  if (iVar1 != 0) {
    in_ZR = lStack_68 == *(long *)(unaff_x19 + 0x40);
    if (!(bool)in_ZR) {
      func_0x00010ae90028(plRam0000000113815c70);
      (*extraout_x8_01)();
    }
    FUN_10ae8d298(auStack_58,unaff_x19 + 0x20);
    auStack_a0[0] = *(undefined4 *)(unaff_x19 + 0x48);
    uStack_90 = *(undefined8 *)(unaff_x19 + 0x58);
    uStack_98 = *(undefined8 *)(unaff_x19 + 0x50);
    uStack_88 = *(undefined8 *)(unaff_x19 + 0x60);
    *(undefined8 *)(unaff_x19 + 0x50) = 0;
    *(undefined8 *)(unaff_x19 + 0x58) = 0;
    uStack_78 = *(undefined8 *)(unaff_x19 + 0x70);
    uStack_80 = *(undefined8 *)(unaff_x19 + 0x68);
    uStack_70 = *(undefined8 *)(unaff_x19 + 0x78);
    *(undefined8 *)(unaff_x19 + 0x60) = 0;
    *(undefined8 *)(unaff_x19 + 0x68) = 0;
    *(undefined8 *)(unaff_x19 + 0x70) = 0;
    *(undefined8 *)(unaff_x19 + 0x78) = 0;
    FUN_10ae8e15c(unaff_x19 + 0x20,0);
    auStack_d8[0] = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    func_0x000107c27c88((undefined4 *)(unaff_x19 + 0x48),auStack_d8);
    func_0x00010ae90070();
    FUN_10ae8e0ec(auStack_58,auStack_a0);
    plVar3 = *(long **)(unaff_x19 + 0x18);
    (**(code **)(*plRam0000000113815c70 + 0x128))();
    func_0x000107c27cbc(auStack_a0);
    FUN_10ae8d2f0();
  }
  func_0x000107c35000(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107c27cbc(auStack_a0);
  FUN_10ae8d2f0(auStack_58);
  func_0x00010ae90020();
  plVar3[1] = 0;
  plVar3[2] = 0;
  plVar3[3] = 0;
  plVar3[4] = 0;
  plVar3[5] = 0;
  plVar3[6] = 0;
  FUN_10ae8e190();
  func_0x00010ae90070();
  return;
}



/* Entry: 10ae8def8; end: 10ae8df87;  */

undefined8 *
FUN_10ae8def8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long extraout_x8;
  
  param_1[3] = param_2;
  FUN_10ae8d298(param_1 + 4,param_3);
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[8] = param_4;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  func_0x000107c35004();
  (**(code **)(extraout_x8 + 0x120))();
  *param_1 = FUN_10ae8df88;
  *(undefined4 *)(param_1 + 1) = 0;
  return param_1;
}



/* Entry: 10ae8df88; end: 10ae8df93;  */

void FUN_10ae8df88(long param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  long unaff_x19;
  undefined4 auStack_d8 [2];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 auStack_a0 [2];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined1 uStack_59;
  undefined1 auStack_58 [32];
  undefined8 uStack_38;
  
  uVar1 = param_2 == 0;
  uStack_59 = !(bool)uVar1;
  func_0x00010ae8fedc();
  lVar3 = *(long *)(param_1 + 0x40);
  lStack_68 = lVar3;
  uStack_38 = extraout_x8;
  func_0x00010ae90028();
  iVar2 = (int)lVar3;
  plVar4 = &lStack_68;
  (*extraout_x8_00)();
  if (iVar2 != 0) {
    uVar1 = lStack_68 == *(long *)(unaff_x19 + 0x40);
    if (!(bool)uVar1) {
      func_0x00010ae90028(plRam0000000113815c70);
      (*extraout_x8_01)();
    }
    FUN_10ae8d298(auStack_58,unaff_x19 + 0x20);
    auStack_a0[0] = *(undefined4 *)(unaff_x19 + 0x48);
    uStack_90 = *(undefined8 *)(unaff_x19 + 0x58);
    uStack_98 = *(undefined8 *)(unaff_x19 + 0x50);
    uStack_88 = *(undefined8 *)(unaff_x19 + 0x60);
    *(undefined8 *)(unaff_x19 + 0x50) = 0;
    *(undefined8 *)(unaff_x19 + 0x58) = 0;
    uStack_78 = *(undefined8 *)(unaff_x19 + 0x70);
    uStack_80 = *(undefined8 *)(unaff_x19 + 0x68);
    uStack_70 = *(undefined8 *)(unaff_x19 + 0x78);
    *(undefined8 *)(unaff_x19 + 0x60) = 0;
    *(undefined8 *)(unaff_x19 + 0x68) = 0;
    *(undefined8 *)(unaff_x19 + 0x70) = 0;
    *(undefined8 *)(unaff_x19 + 0x78) = 0;
    FUN_10ae8e15c(unaff_x19 + 0x20,0);
    auStack_d8[0] = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    func_0x000107c27c88((undefined4 *)(unaff_x19 + 0x48),auStack_d8);
    func_0x00010ae90070();
    FUN_10ae8e0ec(auStack_58,auStack_a0);
    plVar4 = *(long **)(unaff_x19 + 0x18);
    (**(code **)(*plRam0000000113815c70 + 0x128))();
    func_0x000107c27cbc(auStack_a0);
    FUN_10ae8d2f0();
  }
  func_0x000107c35000(uStack_38);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107c27cbc(auStack_a0);
  FUN_10ae8d2f0(auStack_58);
  func_0x00010ae90020();
  plVar4[1] = 0;
  plVar4[2] = 0;
  plVar4[3] = 0;
  plVar4[4] = 0;
  plVar4[5] = 0;
  plVar4[6] = 0;
  FUN_10ae8e190();
  func_0x00010ae90070();
  return;
}



/* Entry: 10ae8df94; end: 10ae8e0eb;  */

void FUN_10ae8df94(long param_1,undefined1 param_2)

{
  undefined1 in_ZR;
  int iVar1;
  long lVar2;
  long *plVar3;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  long unaff_x19;
  undefined4 auStack_d8 [2];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 auStack_a0 [2];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined1 uStack_59;
  undefined1 auStack_58 [32];
  undefined8 uStack_38;
  
  uStack_59 = param_2;
  func_0x00010ae8fedc();
  lVar2 = *(long *)(param_1 + 0x40);
  lStack_68 = lVar2;
  uStack_38 = extraout_x8;
  func_0x00010ae90028();
  iVar1 = (int)lVar2;
  plVar3 = &lStack_68;
  (*extraout_x8_00)();
  if (iVar1 != 0) {
    in_ZR = lStack_68 == *(long *)(unaff_x19 + 0x40);
    if (!(bool)in_ZR) {
      func_0x00010ae90028(plRam0000000113815c70);
      (*extraout_x8_01)();
    }
    FUN_10ae8d298(auStack_58,unaff_x19 + 0x20);
    auStack_a0[0] = *(undefined4 *)(unaff_x19 + 0x48);
    uStack_90 = *(undefined8 *)(unaff_x19 + 0x58);
    uStack_98 = *(undefined8 *)(unaff_x19 + 0x50);
    uStack_88 = *(undefined8 *)(unaff_x19 + 0x60);
    *(undefined8 *)(unaff_x19 + 0x50) = 0;
    *(undefined8 *)(unaff_x19 + 0x58) = 0;
    uStack_78 = *(undefined8 *)(unaff_x19 + 0x70);
    uStack_80 = *(undefined8 *)(unaff_x19 + 0x68);
    uStack_70 = *(undefined8 *)(unaff_x19 + 0x78);
    *(undefined8 *)(unaff_x19 + 0x60) = 0;
    *(undefined8 *)(unaff_x19 + 0x68) = 0;
    *(undefined8 *)(unaff_x19 + 0x70) = 0;
    *(undefined8 *)(unaff_x19 + 0x78) = 0;
    FUN_10ae8e15c(unaff_x19 + 0x20,0);
    auStack_d8[0] = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    func_0x000107c27c88((undefined4 *)(unaff_x19 + 0x48),auStack_d8);
    func_0x00010ae90070();
    FUN_10ae8e0ec(auStack_58,auStack_a0);
    plVar3 = *(long **)(unaff_x19 + 0x18);
    (**(code **)(*plRam0000000113815c70 + 0x128))();
    func_0x000107c27cbc(auStack_a0);
    FUN_10ae8d2f0();
  }
  func_0x000107c35000(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107c27cbc(auStack_a0);
  FUN_10ae8d2f0(auStack_58);
  func_0x00010ae90020();
  plVar3[1] = 0;
  plVar3[2] = 0;
  plVar3[3] = 0;
  plVar3[4] = 0;
  plVar3[5] = 0;
  plVar3[6] = 0;
  FUN_10ae8e190();
  func_0x00010ae90070();
  return;
}



/* Entry: 10ae8e0ec; end: 10ae8e15b;  */

void FUN_10ae8e0ec(undefined8 param_1,undefined4 *param_2)

{
  undefined4 auStack_58 [2];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  auStack_58[0] = *param_2;
  uStack_48 = *(undefined8 *)(param_2 + 4);
  uStack_50 = *(undefined8 *)(param_2 + 2);
  uStack_40 = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_2 + 2) = 0;
  *(undefined8 *)(param_2 + 4) = 0;
  uStack_30 = *(undefined8 *)(param_2 + 10);
  uStack_38 = *(undefined8 *)(param_2 + 8);
  uStack_28 = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(param_2 + 6) = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 10) = 0;
  *(undefined8 *)(param_2 + 0xc) = 0;
  FUN_10ae8e190(param_1,auStack_58);
  func_0x00010ae90070();
  return;
}



/* Entry: 10ae8e15c; end: 10ae8e18f;  */

void FUN_10ae8e15c(long param_1)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  
  func_0x00010ae901f0();
  if ((bool)in_ZR) {
    uVar1 = 0x20;
  }
  else {
    if (param_1 == 0) {
      return;
    }
    uVar1 = 0x28;
  }
  func_0x00010ae8ff38(uVar1);
  return;
}



/* Entry: 10ae8e190; end: 10ae8e1a7;  */

void FUN_10ae8e190(long param_1)

{
  long extraout_x8;
  
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010ae90364. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 0x30))();
    return;
  }
  func_0x000104c501e4();
  func_0x000107c35004();
  (**(code **)(extraout_x8 + 0x10))();
  return;
}



/* Entry: 10ae8e1a8; end: 10ae8e1db;  */

void FUN_10ae8e1a8(undefined8 param_1)

{
  long extraout_x8;
  
  func_0x000107c35004();
  (**(code **)(extraout_x8 + 0x10))(param_1,&DAT_10f6842c6,&UNK_10f6d2d1f,0x465);
  return;
}



/* Entry: 10ae8e1dc; end: 10ae8e307;  */

undefined8 *
FUN_10ae8e1dc(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,long param_6)

{
  long extraout_x8;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int aiStack_68 [14];
  
  *param_1 = &PTR_DAT_110c8bcc8;
  param_1[1] = param_3;
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar3 = param_2[2];
  uVar5 = param_2[5];
  uVar4 = param_2[4];
  param_1[5] = param_2[3];
  param_1[4] = uVar3;
  param_1[7] = uVar5;
  param_1[6] = uVar4;
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  param_1[8] = param_6;
  FUN_10ae8e480(param_1 + 9);
  param_1[0x43] = 0;
  param_1[0x47] = 0;
  func_0x00010ae8e778(param_1 + 0x49);
  param_1[0x82] = 0;
  param_1[0x86] = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  param_1[0x8a] = 0;
  param_1[0x89] = 0;
  param_1[0x8c] = 0;
  param_1[0x8b] = 0;
  param_1[0x8e] = 0;
  param_1[0x8d] = 0;
  param_1[0x8f] = 2;
  *(undefined8 **)(param_6 + 8) = param_1;
  FUN_10ae8d530(aiStack_68,param_1 + 0xf,param_4);
  func_0x00010ae90070();
  if (aiStack_68[0] != 0) {
    func_0x000107c35004();
    (**(code **)(extraout_x8 + 0x10))();
  }
  *(undefined1 *)((long)param_1 + 0xb9) = 1;
  FUN_10ae8e308(param_1 + 0x4a,param_5);
  *(undefined1 *)(param_1 + 0x4e) = 1;
  return param_1;
}



/* Entry: 10ae8e308; end: 10ae8e34b;  */

void FUN_10ae8e308(undefined8 *param_1)

{
  long lVar1;
  code *extraout_x8;
  undefined8 unaff_x19;
  long unaff_x20;
  
  func_0x00010ae90284();
  func_0x00010ae90170();
  *param_1 = &PTR_DAT_110c8bed8;
  param_1[1] = unaff_x19;
  lVar1 = *(long *)(unaff_x20 + 0x10);
  *(undefined8 **)(unaff_x20 + 0x10) = param_1;
  if (lVar1 != 0) {
    func_0x00010ae90028();
    (*extraout_x8)();
  }
  *(undefined8 *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10ae8e34c; end: 10ae8e35b;  */

undefined8 * FUN_10ae8e34c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c8bdf0;
  func_0x000104c00298(param_1 + 0x19);
  func_0x00010ae8e7dc(param_1 + 1);
  return param_1;
}



/* Entry: 10ae8e35c; end: 10ae8e47f;  */

void FUN_10ae8e35c(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined1 in_ZR;
  long lVar4;
  undefined8 *puVar5;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  long unaff_x19;
  undefined **ppuStack_78;
  undefined **ppuStack_58;
  long lStack_50;
  undefined ***pppuStack_40;
  undefined8 uStack_38;
  
  func_0x00010ae8fedc();
  ppuStack_58 = &PTR_FUN_110c8bf28;
  pppuStack_40 = &ppuStack_58;
  lStack_50 = param_1;
  uStack_38 = extraout_x8;
  func_0x00010ae9038c();
  FUN_10ae8ebc8(&ppuStack_58);
  lVar4 = *(long *)(unaff_x19 + 8);
  lVar1 = lVar4 + 0xb8;
  func_0x000107c27cc8();
  *(undefined1 *)(unaff_x19 + 0x70) = 0;
  *(undefined1 *)(unaff_x19 + 0x51) = 1;
  *(int *)(unaff_x19 + 0x54) = (int)lVar4;
  *(long *)(unaff_x19 + 0x60) = lVar1;
  puVar2 = *(undefined1 **)(unaff_x19 + 8);
  uVar3 = *(undefined8 *)(unaff_x19 + 0x10);
  *puVar2 = 1;
  *(undefined1 **)(unaff_x19 + 200) = puVar2 + 0xd0;
  *(long *)(unaff_x19 + 0xd0) = param_1 + 0x200;
  func_0x00010ae90028(uVar3);
  (*extraout_x8_00)();
  ppuStack_78 = &PTR_FUN_110c8bfa8;
  func_0x00010ae9038c();
  FUN_10ae8ebc8(&ppuStack_78);
  func_0x000107c27cc0(unaff_x19 + 0x278,*(undefined8 *)(unaff_x19 + 8),unaff_x19 + 0x440);
  *(long *)(unaff_x19 + 0x2c8) = unaff_x19 + 0x3f8;
  puVar5 = *(undefined8 **)(unaff_x19 + 0x10);
  func_0x00010ae90028();
  (*extraout_x8_01)();
  func_0x000107c35000(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010ae90218();
  FUN_10ae8ebc8();
  func_0x00010ae90020();
  func_0x00010ae8ff78();
  *(undefined2 *)(puVar5 + 0xe) = 0;
  *(undefined1 *)(puVar5 + 0xf) = 0;
  *puVar5 = &PTR_DAT_110c8bd18;
  puVar5[0x10] = 0;
  puVar5[0x11] = puVar5;
  puVar5[0x12] = puVar5;
  puVar5[0x13] = 0;
  puVar5[0x14] = 0;
  puVar5[0x15] = 0;
  *(undefined4 *)(puVar5 + 0x16) = 0xffffffff;
  puVar5[0x17] = 0;
  puVar5[0x18] = 0;
  *(undefined1 *)(puVar5 + 0x19) = 0;
  func_0x000107c27c68(puVar5 + 0x1a);
  return;
}



/* Entry: 10ae8e480; end: 10ae8e4d3;  */

void FUN_10ae8e480(undefined8 *param_1)

{
  func_0x00010ae8ff78();
  *(undefined2 *)(param_1 + 0xe) = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  *param_1 = &PTR_DAT_110c8bd18;
  param_1[0x10] = 0;
  param_1[0x11] = param_1;
  param_1[0x12] = param_1;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0xffffffff;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined1 *)(param_1 + 0x19) = 0;
  func_0x000107c27c68(param_1 + 0x1a);
  return;
}



/* Entry: 10ae8e4d4; end: 10ae8e4e7;  */

void FUN_10ae8e4d4(void)

{
  func_0x00010ae8ec38();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ae8e4e8; end: 10ae8e56b;  */

undefined8 FUN_10ae8e4e8(long param_1)

{
  long lVar1;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined1 *unaff_x21;
  
  func_0x00010ae900d8();
  if (*(char *)(param_1 + 200) == '\x01') {
    func_0x000107c27c70(*(undefined8 *)(unaff_x19 + 0xa0));
    *unaff_x20 = *(undefined8 *)(unaff_x19 + 0x90);
    *unaff_x21 = *(undefined1 *)(unaff_x19 + 0x1b0);
  }
  else {
    func_0x00010ae901c0();
    func_0x00010ae901d8();
    *(undefined1 *)(unaff_x19 + 0x71) = 0;
    *(undefined1 *)(unaff_x19 + 0x1b0) = *unaff_x21;
    lVar1 = unaff_x19;
    FUN_10ae8e6a8();
    if ((int)lVar1 == 0) {
      return 0;
    }
    *unaff_x20 = *(undefined8 *)(unaff_x19 + 0x90);
  }
  func_0x00010ae8ff14();
  func_0x00010ae8ffb4();
  return 1;
}



/* Entry: 10ae8e56c; end: 10ae8e5b3;  */

void FUN_10ae8e56c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  code *UNRECOVERED_JUMPTABLE)

{
  long unaff_x19;
  undefined8 in_register_00005008;
  undefined8 in_register_00005028;
  undefined8 in_register_00005048;
  
  func_0x00010ae90140();
  *(undefined1 *)(param_4 + 200) = 0;
  func_0x00010ae8fec0();
  func_0x00010ae90308();
  *(undefined8 *)(unaff_x19 + 0xc0) = in_register_00005048;
  *(undefined8 *)(unaff_x19 + 0xb8) = param_3;
  *(undefined8 *)(unaff_x19 + 0xb0) = in_register_00005028;
  *(undefined8 *)(unaff_x19 + 0xa8) = param_2;
  *(undefined8 *)(unaff_x19 + 0xa0) = in_register_00005008;
  *(undefined8 *)(unaff_x19 + 0x98) = param_1;
  func_0x00010ae8e6ec();
  if ((int)unaff_x19 != 0) {
    func_0x00010ae900f8();
                    /* WARNING: Could not recover jumptable at 0x00010ae90244. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



/* Entry: 10ae8e5b4; end: 10ae8e5df;  */

undefined8 FUN_10ae8e5b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 10ae8e5e0; end: 10ae8e667;  */

void FUN_10ae8e5e0(void)

{
  undefined1 in_ZR;
  int iVar1;
  long lVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 *extraout_x8;
  long unaff_x19;
  undefined8 uStack_48;
  
  func_0x00010ae8fe98();
  func_0x000107c27cac();
  func_0x00010ae900b4();
  func_0x00010ae9040c();
  if (((bool)in_ZR) && ((*(byte *)(unaff_x19 + 0x70) & 1) == 0)) {
    func_0x00010ae90004();
    *extraout_x8 = 2;
    extraout_x8[1] = 0;
  }
  lVar2 = unaff_x19 + 0x78;
  func_0x00010ae900c4();
  func_0x000107c27cb4();
  func_0x00010ae90108();
  func_0x00010ae8ff24();
  func_0x00010ae8fe74();
  if ((int)lVar2 != 0) {
    func_0x00010ae8fe2c();
  }
  func_0x000107c35000(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  *(undefined1 *)(lVar2 + 200) = 1;
  func_0x00010ae900e8();
  iVar1 = (int)lVar2;
  func_0x00010ae8ffa8();
  func_0x00010ae8fe50();
  if (iVar1 == 0) {
    return;
  }
  func_0x00010ae8fef0();
                    /* WARNING: Could not recover jumptable at 0x00010ae8ffd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 10ae8e668; end: 10ae8e6a7;  */

void FUN_10ae8e668(long param_1)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar1 = (int)param_1;
  *(undefined1 *)(param_1 + 200) = 1;
  func_0x00010ae900e8();
  func_0x00010ae8ffa8();
  func_0x00010ae8fe50();
  if (iVar1 == 0) {
    return;
  }
  func_0x00010ae8fef0();
                    /* WARNING: Could not recover jumptable at 0x00010ae8ffd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 10ae8e6a8; end: 10ae8e807;  */

undefined8 FUN_10ae8e6a8(long param_1)

{
  code *extraout_x8;
  long lVar1;
  
  func_0x000107c27c90(param_1 + 0xd0);
  func_0x000107c27c94(param_1 + 0x30,param_1 + 0xd0);
  if (*(long *)(param_1 + 0x80) != 0) {
    *(undefined1 *)(param_1 + 0xe0) = 1;
    *(undefined8 *)(param_1 + 0x80) = 0;
  }
  if (*(long *)(param_1 + 0x100) == 0) {
    func_0x000104c019cc();
    func_0x000104c01ae0();
    (*extraout_x8)();
  }
  lVar1 = *(long *)(*(long *)(param_1 + 0xf8) + 0x20);
  if (lVar1 == 0) {
    lVar1 = *(long *)(*(long *)(param_1 + 0xf8) + 0x28);
    if (lVar1 == 0) {
      return 1;
    }
    if (*(long *)(lVar1 + 0x20) == *(long *)(lVar1 + 0x28)) {
      return 1;
    }
    func_0x000104c0070c(param_1 + 0xd0);
  }
  else {
    if (*(long *)(lVar1 + 0x28) == *(long *)(lVar1 + 0x30)) {
      return 1;
    }
    func_0x0001004b972c(param_1 + 0xd0);
  }
  return 0;
}



/* Entry: 10ae8e808; end: 10ae8e81b;  */

void FUN_10ae8e808(void)

{
  func_0x00010ae8ebfc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ae8e81c; end: 10ae8e89f;  */

void FUN_10ae8e81c(long param_1)

{
  long lVar1;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined1 *unaff_x21;
  
  func_0x00010ae900d8();
  if (*(char *)(param_1 + 0xc0) == '\x01') {
    func_0x000107c27c70(*(undefined8 *)(unaff_x19 + 0x98));
    *unaff_x20 = *(undefined8 *)(unaff_x19 + 0x88);
    *unaff_x21 = *(undefined1 *)(unaff_x19 + 0x1a8);
  }
  else {
    func_0x00010ae8e9e8(unaff_x19 + 8);
    func_0x00010ae902a8(unaff_x19 + 0x30);
    *(undefined1 *)(unaff_x19 + 0x1a8) = *unaff_x21;
    lVar1 = unaff_x19;
    func_0x00010ae8ea84();
    if ((int)lVar1 == 0) {
      return;
    }
    *unaff_x20 = *(undefined8 *)(unaff_x19 + 0x88);
  }
  func_0x00010ae8ff14();
  func_0x00010ae8ffb4();
  return;
}



/* Entry: 10ae8e8a0; end: 10ae8e8e3;  */

void FUN_10ae8e8a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  code *UNRECOVERED_JUMPTABLE)

{
  long unaff_x19;
  undefined8 in_register_00005008;
  undefined8 in_register_00005028;
  undefined8 in_register_00005048;
  
  func_0x00010ae90140();
  *(undefined1 *)(param_4 + 0xc0) = 0;
  func_0x00010ae8fec0();
  func_0x00010ae90308();
  *(undefined8 *)(unaff_x19 + 0xa8) = in_register_00005028;
  *(undefined8 *)(unaff_x19 + 0xa0) = param_2;
  *(undefined8 *)(unaff_x19 + 0xb8) = in_register_00005048;
  *(undefined8 *)(unaff_x19 + 0xb0) = param_3;
  *(undefined8 *)(unaff_x19 + 0x98) = in_register_00005008;
  *(undefined8 *)(unaff_x19 + 0x90) = param_1;
  FUN_10ae8eafc();
  if ((int)unaff_x19 != 0) {
    func_0x00010ae900f8();
                    /* WARNING: Could not recover jumptable at 0x00010ae90244. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}


