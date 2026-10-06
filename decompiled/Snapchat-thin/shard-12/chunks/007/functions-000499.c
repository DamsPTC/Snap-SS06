/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109701454; end: 109703913;  */

ulong * FUN_109701454(ulong *param_1,ulong param_2,ulong *param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  ulong uVar10;
  byte *pbVar11;
  undefined *puVar12;
  undefined1 uVar13;
  uint uVar14;
  uint *puVar15;
  ulong *puVar16;
  byte bVar17;
  bool bVar18;
  ulong uVar19;
  uint *puVar20;
  uint *puVar21;
  int iVar22;
  uint *puVar23;
  uint *puVar24;
  uint *unaff_x25;
  uint uVar25;
  ulong uVar26;
  ulong *puVar27;
  ulong uVar28;
  uint uStack_88;
  uint uStack_84;
  uint auStack_80 [6];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = param_2;
  uVar19 = param_3[1];
  uVar26 = *param_3;
  uVar28 = param_3[2];
  param_1[4] = param_3[3];
  param_1[3] = uVar28;
  param_1[2] = uVar19;
  param_1[1] = uVar26;
  uStack_88 = 3;
  uStack_84 = 3;
  uVar25 = *(uint *)((long)param_1 + 0xc);
  uVar26 = (ulong)uVar25;
  puVar20 = (uint *)param_1[2];
  if (puVar20 == (uint *)0x0) {
    uStack_88 = 0;
    goto LAB_1097032f4;
  }
  puVar23 = (uint *)((long)puVar20 + 1);
  bVar17 = *(byte *)puVar23;
  if (((byte)*puVar20 == 0x78) && (bVar17 == 0x2d)) {
    puVar21 = (uint *)0x0;
    puVar24 = puVar20;
  }
  else {
    puVar15 = (uint *)0x0;
    puVar24 = puVar15;
    puVar21 = puVar23;
    if (bVar17 == 0) {
      puVar24 = (uint *)0x0;
    }
    else {
      do {
        puVar15 = puVar24;
        if ((*(byte *)((long)puVar21 + -1) == 0x2d) && (*(byte *)((long)puVar21 + 1) == 0x2d)) {
          puVar15 = (uint *)((long)puVar21 + -1);
          if (puVar24 != (uint *)0x0) {
            puVar15 = puVar24;
          }
          puVar24 = puVar21;
          if (bVar17 == 0x78) goto LAB_109701558;
        }
        puVar21 = (uint *)((long)puVar21 + 1);
        bVar17 = *(byte *)puVar21;
        puVar24 = puVar15;
      } while (bVar17 != 0);
      puVar24 = (uint *)0x0;
    }
LAB_109701558:
    if (puVar15 != (uint *)0x0) {
      puVar21 = puVar15;
    }
  }
  puVar15 = puVar24;
  FUN_10970c3d8(puVar24,&uStack_84,auStack_80 + 3,&UNK_10f57eba6,FUN_1096f7e04);
  FUN_10970c3d8(puVar24,&uStack_88,auStack_80,&UNK_10f57ebac,FUN_10970c570);
  if (((ulong)puVar24 & 1) != 0) goto joined_r0x00010970313c;
  puVar27 = (ulong *)(ulong)uStack_88;
  if (uStack_88 == 0) goto joined_r0x00010970313c;
  unaff_x25 = (uint *)((long)puVar21 - (long)puVar20);
  if ((((6 < (long)unaff_x25) && (puVar24 = puVar20, _strchr(puVar20,0x2d), puVar24 != (uint *)0x0))
      && (puVar24 < puVar21)) && (uVar19 = (long)puVar21 - (long)puVar24, 4 < (long)uVar19)) {
    puVar8 = puVar24;
    if ((uVar19 & 0xfffffff8) != 0) {
      do {
        _strstr(puVar8,&UNK_10f57f251);
        puVar9 = puVar24;
        if (puVar8 == (uint *)0x0 || puVar21 <= puVar8) goto LAB_109702450;
        uVar14 = (uint)(byte)puVar8[2];
        puVar8 = puVar8 + 2;
      } while (uVar14 - 0x30 < 10 || (uVar14 & 0xffffffdf) - 0x41 < 0x1a);
      auStack_80[0] = 0x41505048;
      goto LAB_109702cf8;
    }
LAB_1097015ec:
    puVar8 = puVar24;
    if (6 < (uint)uVar19) {
      do {
        _strstr(puVar8,&UNK_10f57f275);
        if (puVar8 == (uint *)0x0 || puVar21 <= puVar8) goto LAB_1097015f4;
        uVar14 = (uint)*(byte *)((long)puVar8 + 7);
        puVar8 = (uint *)((long)puVar8 + 7);
      } while (uVar14 - 0x30 < 10 || (uVar14 & 0xffffffdf) - 0x41 < 0x1a);
      auStack_80[0] = 0x49505048;
      goto LAB_109703130;
    }
LAB_1097015f4:
    puVar8 = puVar24;
    if (4 < (uint)uVar19) {
      do {
        _strstr(puVar8,&UNK_10f57f27d);
        puVar9 = puVar24;
        if (puVar8 == (uint *)0x0 || puVar21 <= puVar8) goto LAB_109702498;
        uVar14 = (uint)*(byte *)((long)puVar8 + 5);
        puVar8 = (uint *)((long)puVar8 + 5);
      } while (uVar14 - 0x30 < 10 || (uVar14 & 0xffffffdf) - 0x41 < 0x1a);
      auStack_80[0] = 0x4b474520;
      goto LAB_1097032e0;
    }
  }
LAB_1097015fc:
  if (0x19 < (byte)*puVar20 - 0x61) goto LAB_109702184;
  puVar24 = auStack_80 + 1;
  iVar6 = (int)puVar21;
  iVar22 = (int)puVar23;
  switch((uint)(byte)*puVar20) {
  case 0x61:
    _strcmp(puVar23,&UNK_10f57f295);
    if ((int)puVar23 != 0) goto LAB_109702184;
    auStack_80[0] = 0x4a424f20;
    break;
  default:
    goto LAB_109702184;
  case 99:
    puVar16 = param_1;
    if ((uint)(iVar6 - iVar22) < 10) {
      if (6 < (uint)(iVar6 - iVar22)) goto LAB_109702784;
      goto LAB_10970181c;
    }
    puVar8 = puVar23;
    _strncmp(puVar23,&UNK_10f57f29f,10);
    if (((int)puVar8 != 0) ||
       ((*(byte *)((long)puVar20 + 0xb) != 0x2d && (*(byte *)((long)puVar20 + 0xb) != 0)))) {
      puVar8 = puVar23;
      _strncmp(puVar23,&UNK_10f57f2aa,10);
      if (((int)puVar8 == 0) &&
         ((*(byte *)((long)puVar20 + 0xb) == 0x2d || (*(byte *)((long)puVar20 + 0xb) == 0)))) {
        puVar16 = (ulong *)0x0;
        puVar20 = auStack_80;
        bVar18 = true;
        do {
          if (puVar27 <= puVar16) goto LAB_109703784;
          *puVar20 = *(uint *)(&UNK_10dfdff88 + (long)puVar16 * 4);
          puVar16 = (ulong *)0x1;
          bVar5 = !bVar18;
          puVar20 = puVar24;
          bVar18 = false;
          if (bVar5) goto code_r0x000109703778;
        } while( true );
      }
      puVar8 = puVar23;
      _strncmp(puVar23,&UNK_10f57f2b5,10);
      if (((int)puVar8 != 0) ||
         ((*(byte *)((long)puVar20 + 0xb) != 0x2d && (*(byte *)((long)puVar20 + 0xb) != 0)))) {
        puVar8 = puVar23;
        _strncmp(puVar23,&UNK_10f57f2c0,10);
        if (((int)puVar8 == 0) &&
           ((*(byte *)((long)puVar20 + 0xb) == 0x2d || (*(byte *)((long)puVar20 + 0xb) == 0)))) {
          puVar16 = (ulong *)0x0;
          puVar20 = auStack_80;
          bVar18 = true;
          do {
            if (puVar27 <= puVar16) goto LAB_109703784;
            *puVar20 = *(uint *)(&UNK_10dfdff88 + (long)puVar16 * 4);
            puVar16 = (ulong *)0x1;
            bVar5 = !bVar18;
            puVar20 = puVar24;
            bVar18 = false;
            if (bVar5) goto code_r0x000109703778;
          } while( true );
        }
        puVar8 = puVar23;
        _strncmp(puVar23,&UNK_10f57f2cb,10);
        if (((int)puVar8 != 0) ||
           ((*(byte *)((long)puVar20 + 0xb) != 0x2d && (*(byte *)((long)puVar20 + 0xb) != 0)))) {
          puVar8 = puVar23;
          _strncmp(puVar23,&UNK_10f57f2d6,10);
          if (((int)puVar8 == 0) &&
             ((*(byte *)((long)puVar20 + 0xb) == 0x2d || (*(byte *)((long)puVar20 + 0xb) == 0)))) {
            puVar16 = (ulong *)0x0;
            puVar20 = auStack_80;
            bVar18 = true;
            do {
              if (puVar27 <= puVar16) goto LAB_109703784;
              *puVar20 = *(uint *)(&UNK_10dfdff88 + (long)puVar16 * 4);
              puVar16 = (ulong *)0x1;
              bVar5 = !bVar18;
              puVar20 = puVar24;
              bVar18 = false;
              if (bVar5) goto code_r0x000109703778;
            } while( true );
          }
          puVar8 = puVar23;
          _strncmp(puVar23,&UNK_10f57f2e1,10);
          if (((int)puVar8 != 0) ||
             ((*(byte *)((long)puVar20 + 0xb) != 0x2d && (*(byte *)((long)puVar20 + 0xb) != 0)))) {
            puVar8 = puVar23;
            _strncmp(puVar23,&UNK_10f57f2ec,10);
            if (((int)puVar8 == 0) &&
               ((*(byte *)((long)puVar20 + 0xb) == 0x2d || (*(byte *)((long)puVar20 + 0xb) == 0))))
            {
              puVar16 = (ulong *)0x0;
              puVar20 = auStack_80;
              bVar18 = true;
              do {
                if (puVar27 <= puVar16) goto LAB_109703784;
                *puVar20 = *(uint *)(&UNK_10dfdff88 + (long)puVar16 * 4);
                puVar16 = (ulong *)0x1;
                bVar5 = !bVar18;
                puVar20 = puVar24;
                bVar18 = false;
                if (bVar5) goto code_r0x000109703778;
              } while( true );
            }
            puVar8 = puVar23;
            _strncmp(puVar23,&UNK_10f57f2f7,10);
            if (((int)puVar8 != 0) ||
               ((*(byte *)((long)puVar20 + 0xb) != 0x2d && (*(byte *)((long)puVar20 + 0xb) != 0))))
            {
              puVar8 = puVar23;
              _strncmp(puVar23,&UNK_10f57f302,10);
              if (((int)puVar8 == 0) &&
                 ((*(byte *)((long)puVar20 + 0xb) == 0x2d || (*(byte *)((long)puVar20 + 0xb) == 0)))
                 ) {
                puVar16 = (ulong *)0x0;
                puVar20 = auStack_80;
                bVar18 = true;
                do {
                  if (puVar27 <= puVar16) goto LAB_109703784;
                  *puVar20 = *(uint *)(&UNK_10dfdff88 + (long)puVar16 * 4);
                  puVar16 = (ulong *)0x1;
                  bVar5 = !bVar18;
                  puVar20 = puVar24;
                  bVar18 = false;
                  if (bVar5) goto code_r0x000109703778;
                } while( true );
              }
              puVar8 = puVar23;
              _strncmp(puVar23,&UNK_10f57f30d,10);
              if (((int)puVar8 != 0) ||
                 ((*(byte *)((long)puVar20 + 0xb) != 0x2d && (*(byte *)((long)puVar20 + 0xb) != 0)))
                 ) {
                puVar8 = puVar23;
                _strncmp(puVar23,&UNK_10f57f318,10);
                if (((int)puVar8 == 0) &&
                   ((*(byte *)((long)puVar20 + 0xb) == 0x2d || (*(byte *)((long)puVar20 + 0xb) == 0)
                    ))) {
                  puVar16 = (ulong *)0x0;
                  puVar20 = auStack_80;
                  bVar18 = true;
                  do {
                    if (puVar27 <= puVar16) goto LAB_109703784;
                    *puVar20 = *(uint *)(&UNK_10dfdff88 + (long)puVar16 * 4);
                    puVar16 = (ulong *)0x1;
                    bVar5 = !bVar18;
                    puVar20 = puVar24;
                    bVar18 = false;
                    if (bVar5) goto code_r0x000109703778;
                  } while( true );
                }
                puVar8 = puVar23;
                _strncmp(puVar23,&UNK_10f57f323,10);
                if (((int)puVar8 != 0) ||
                   ((*(byte *)((long)puVar20 + 0xb) != 0x2d && (*(byte *)((long)puVar20 + 0xb) != 0)
                    ))) {
                  puVar8 = puVar23;
                  _strncmp(puVar23,&UNK_10f57f32e,10);
                  if (((int)puVar8 == 0) &&
                     ((*(byte *)((long)puVar20 + 0xb) == 0x2d ||
                      (*(byte *)((long)puVar20 + 0xb) == 0)))) {
                    puVar16 = (ulong *)0x0;
                    puVar20 = auStack_80;
                    bVar18 = true;
                    do {
                      if (puVar27 <= puVar16) goto LAB_109703784;
                      *puVar20 = *(uint *)(&UNK_10dfdff88 + (long)puVar16 * 4);
                      puVar16 = (ulong *)0x1;
                      bVar5 = !bVar18;
                      puVar20 = puVar24;
                      bVar18 = false;
                      if (bVar5) goto code_r0x000109703778;
                    } while( true );
                  }
                  puVar8 = puVar23;
                  _strncmp(puVar23,&UNK_10f57f339,10);
                  if (((int)puVar8 != 0) ||
                     ((*(byte *)((long)puVar20 + 0xb) != 0x2d &&
                      (*(byte *)((long)puVar20 + 0xb) != 0)))) {
                    puVar8 = puVar23;
                    _strncmp(puVar23,&UNK_10f57f344,10);
                    if ((int)puVar8 == 0) goto code_r0x000109703730;
                    goto LAB_109702784;
                  }
                }
              }
            }
          }
        }
      }
    }
    goto code_r0x0001097032d8;
  case 0x67:
    uVar14 = iVar6 - iVar22;
    if (uVar14 < 10) {
      if (6 < uVar14) goto code_r0x00010970250c;
      if (uVar14 != 6) goto code_r0x000109701680;
    }
    else {
      puVar8 = puVar23;
      _strncmp(puVar23,&UNK_10f57f3db,10);
      if (((int)puVar8 == 0) &&
         ((*(byte *)((long)puVar20 + 0xb) == 0x2d || (*(byte *)((long)puVar20 + 0xb) == 0))))
      goto code_r0x0001097032d8;
      puVar8 = puVar23;
      _strncmp(puVar23,&UNK_10f57f3e6,10);
      if (((int)puVar8 == 0) &&
         ((*(byte *)((long)puVar20 + 0xb) == 0x2d || (*(byte *)((long)puVar20 + 0xb) == 0)))) {
        puVar16 = (ulong *)0x0;
        puVar20 = auStack_80;
        bVar18 = true;
        do {
          if (puVar27 <= puVar16) goto LAB_109703784;
          *puVar20 = *(uint *)(&UNK_10dfdff88 + (long)puVar16 * 4);
          puVar16 = (ulong *)0x1;
          bVar5 = !bVar18;
          puVar20 = puVar24;
          bVar18 = false;
          if (bVar5) goto code_r0x000109703778;
        } while( true );
      }
code_r0x00010970250c:
      puVar8 = puVar23;
      _strncmp(puVar23,&UNK_10f57f3f1,7);
      if ((int)puVar8 == 0) {
        if ((byte)puVar20[2] == 0x2d) goto LAB_109703124;
        if ((byte)puVar20[2] == 0) goto LAB_109703124;
      }
      puVar8 = puVar23;
      _strncmp(puVar23,&UNK_10f57f3f9,7);
      if ((int)puVar8 == 0) {
        if ((byte)puVar20[2] == 0x2d) goto LAB_109702174;
        if ((byte)puVar20[2] == 0) goto LAB_109702174;
      }
    }
    puVar8 = puVar23;
    _strncmp(puVar23,&UNK_10f57f401,6);
    if (((int)puVar8 != 0) ||
       ((*(byte *)((long)puVar20 + 7) != 0x2d && (*(byte *)((long)puVar20 + 7) != 0)))) {
code_r0x000109701680:
      if (*(byte *)puVar23 != 0x61) goto LAB_109702184;
      if (*(byte *)((long)puVar20 + 2) != 0x6e) goto LAB_109702184;
      if (*(byte *)((long)puVar20 + 3) != 0x2d) goto LAB_109702184;
      puVar23 = puVar20;
      FUN_109739dcc(puVar20,puVar21,&UNK_10f57f3cf);
      if ((int)puVar23 != 0) goto LAB_1097020a4;
      puVar23 = puVar20;
      FUN_109739dcc(puVar20,puVar21,&UNK_10f57f3d3);
      if ((int)puVar23 == 0) goto LAB_10970215c;
      puVar16 = (ulong *)0x0;
      puVar20 = auStack_80;
      bVar18 = true;
      do {
        if (puVar27 <= puVar16) goto LAB_1097022d4;
        *puVar20 = *(uint *)(&UNK_10dfdff88 + (long)puVar16 * 4);
        puVar16 = (ulong *)0x1;
        bVar5 = !bVar18;
        puVar20 = puVar24;
        bVar18 = false;
        if (bVar5) goto LAB_109701d18;
      } while( true );
    }
    auStack_80[0] = 0x49525420;
    break;
  case 0x68:
    if ((uint)(iVar6 - iVar22) < 10) {
      if ((uint)(iVar6 - iVar22) < 7) goto code_r0x000109701a28;
code_r0x000109702a78:
      puVar8 = puVar23;
      _strncmp(puVar23,&UNK_10f57f434,7);
      if ((int)puVar8 == 0) {
        if ((byte)puVar20[2] == 0x2d) goto LAB_109703124;
        if ((byte)puVar20[2] == 0) goto LAB_109703124;
      }
      puVar8 = puVar23;
      _strncmp(puVar23,&UNK_10f57f43c,7);
      if ((int)puVar8 == 0) {
        if ((byte)puVar20[2] == 0x2d) goto LAB_109702174;
        if ((byte)puVar20[2] == 0) goto LAB_109702174;
      }
      puVar8 = puVar23;
      _strncmp(puVar23,&UNK_10f57f444,7);
      if ((int)puVar8 == 0) {
        if ((byte)puVar20[2] == 0x2d) goto LAB_109703124;
        if ((byte)puVar20[2] == 0) goto LAB_109703124;
      }
      puVar8 = puVar23;
      _strncmp(puVar23,&UNK_10f57f44c,7);
      if ((int)puVar8 == 0) {
        if ((byte)puVar20[2] == 0x2d) goto LAB_109702174;
        if ((byte)puVar20[2] == 0) goto LAB_109702174;
      }
code_r0x000109701a28:
      if (*(byte *)puVar23 == 0x73) {
        if (*(byte *)((long)puVar20 + 2) != 0x6e) goto LAB_109702184;
        if (*(byte *)((long)puVar20 + 3) != 0x2d) goto LAB_109702184;
        puVar23 = puVar20;
        FUN_109739dcc(puVar20,puVar21,&UNK_10f57f3cf);
        if ((int)puVar23 != 0) goto LAB_1097020a4;
        puVar23 = puVar20;
        FUN_109739dcc(puVar20,puVar21,&UNK_10f57f3d3);
        if ((int)puVar23 == 0) goto LAB_10970215c;
        puVar16 = (ulong *)0x0;
        puVar20 = auStack_80;
        bVar18 = true;
        do {
          if (puVar27 <= puVar16) goto LAB_1097022d4;
          *puVar20 = *(uint *)(&UNK_10dfdff88 + (long)puVar16 * 4);
          puVar16 = (ulong *)0x1;
          bVar5 = !bVar18;
          puVar20 = puVar24;
          bVar18 = false;
          if (bVar5) goto LAB_109701d18;
        } while( true );
      }
      if (*(byte *)puVar23 != 0x61) goto LAB_109702184;
      if (*(byte *)((long)puVar20 + 2) != 0x6b) goto LAB_109702184;
      if (*(byte *)((long)puVar20 + 3) != 0x2d) goto LAB_109702184;
      puVar23 = puVar20;
      FUN_109739dcc(puVar20,puVar21,&UNK_10f57f3cf);
      if ((int)puVar23 != 0) goto LAB_1097020a4;
      puVar23 = puVar20;
      FUN_109739dcc(puVar20,puVar21,&UNK_10f57f3d3);
      if ((int)puVar23 == 0) goto LAB_10970215c;
      puVar16 = (ulong *)0x0;
      puVar20 = auStack_80;
      bVar18 = true;
      do {
        if (puVar27 <= puVar16) goto LAB_1097022d4;
        *puVar20 = *(uint *)(&UNK_10dfdff88 + (long)puVar16 * 4);
        puVar16 = (ulong *)0x1;
        bVar5 = !bVar18;
        puVar20 = puVar24;
        bVar18 = false;
        if (bVar5) goto LAB_109701d18;
      } while( true );
    }
    puVar8 = puVar23;
    _strncmp(puVar23,&UNK_10f57f408,10);
    if (((int)puVar8 != 0) ||
       ((*(byte *)((long)puVar20 + 0xb) != 0x2d && (*(byte *)((long)puVar20 + 0xb) != 0)))) {
      puVar8 = puVar23;
      _strncmp(puVar23,&UNK_10f57f413,10);
      if (((int)puVar8 == 0) &&
         ((*(byte *)((long)puVar20 + 0xb) == 0x2d || (*(byte *)((long)puVar20 + 0xb) == 0)))) {
        puVar16 = (ulong *)0x0;
        puVar20 = auStack_80;
        bVar18 = true;
        do {
          if (puVar27 <= puVar16) goto LAB_109703784;
          *puVar20 = *(uint *)(&UNK_10dfdff88 + (long)puVar16 * 4);
          puVar16 = (ulong *)0x1;
          bVar5 = !bVar18;
          puVar20 = puVar24;
          bVar18 = false;
          if (bVar5) goto code_r0x000109703778;
        } while( true );
      }
      puVar8 = puVar23;
      _strncmp(puVar23,&UNK_10f57f41e,10);
      if (((int)puVar8 != 0) ||
         ((*(byte *)((long)puVar20 + 0xb) != 0x2d && (*(byte *)((long)puVar20 + 0xb) != 0)))) {
        puVar8 = puVar23;
        _strncmp(puVar23,&UNK_10f57f429,10);
        if (((int)puVar8 == 0) &&
           ((*(byte *)((long)puVar20 + 0xb) == 0x2d || (*(byte *)((long)puVar20 + 0xb) == 0)))) {
          puVar16 = (ulong *)0x0;
          puVar20 = auStack_80;
          bVar18 = true;
          do {
            if (puVar27 <= puVar16) goto LAB_109703784;
            *puVar20 = *(uint *)(&UNK_10dfdff88 + (long)puVar16 * 4);
            puVar16 = (ulong *)0x1;
            bVar5 = !bVar18;
            puVar20 = puVar24;
            bVar18 = false;
            if (bVar5) goto code_r0x000109703778;
          } while( true );
        }
        goto code_r0x000109702a78;
      }
    }
code_r0x0001097032d8:
    auStack_80[0] = 0x5a484820;
    goto LAB_1097032e0;
  case 0x69:
    puVar8 = puVar23;
    _strcmp(puVar23,&UNK_10f57f454);
    if ((int)puVar8 == 0) {
      puVar16 = (ulong *)0x0;
      puVar20 = auStack_80;
      bVar18 = true;
      do {
        if (puVar27 <= puVar16) goto LAB_1097022d4;
        *puVar20 = *(uint *)(&UNK_10dfdff78 + (long)puVar16 * 4);
        puVar16 = (ulong *)0x1;
        bVar5 = !bVar18;
        puVar20 = puVar24;
        bVar18 = false;
        if (bVar5) goto LAB_109701d18;
      } while( true );
    }
    puVar24 = puVar23;
    _strcmp(puVar23,&UNK_10f57f45c);
    if ((int)puVar24 == 0) goto LAB_109703124;
    _strcmp(puVar23,&UNK_10f57f461);
    if ((int)puVar23 != 0) goto LAB_109702184;
    auStack_80[0] = 0x4c545a20;
    break;
  case 0x6c:
    if ((uint)(iVar6 - iVar22) < 7) goto LAB_109702184;
    puVar12 = &UNK_10f57f3af;
    goto code_r0x000109701724;
  case 0x6d:
    if ((uint)(iVar6 - iVar22) < 10) {
      if (6 < (uint)(iVar6 - iVar22)) goto code_r0x000109702950;
    }
    else {
      puVar8 = puVar23;
      _strncmp(puVar23,&UNK_10f57f2e1,10);
      if (((int)puVar8 == 0) &&
         ((*(byte *)((long)puVar20 + 0xb) == 0x2d || (*(byte *)((long)puVar20 + 0xb) == 0))))
      goto code_r0x0001097032d8;
      puVar8 = puVar23;
      _strncmp(puVar23,&UNK_10f57f2ec,10);
      if (((int)puVar8 == 0) &&
         ((*(byte *)((long)puVar20 + 0xb) == 0x2d || (*(byte *)((long)puVar20 + 0xb) == 0)))) {
        puVar16 = (ulong *)0x0;
        puVar20 = auStack_80;
        bVar18 = true;
        do {
          if (puVar27 <= puVar16) goto LAB_109703784;
          *puVar20 = *(uint *)(&UNK_10dfdff88 + (long)puVar16 * 4);
          puVar16 = (ulong *)0x1;
          bVar5 = !bVar18;
          puVar20 = puVar24;
          bVar18 = false;
          if (bVar5) goto code_r0x000109703778;
        } while( true );
      }
code_r0x000109702950:
      puVar8 = puVar23;
      _strncmp(puVar23,&UNK_10f57f37f,7);
      if ((int)puVar8 == 0) {
        if ((byte)puVar20[2] == 0x2d) goto LAB_109703124;
        if ((byte)puVar20[2] == 0) goto LAB_109703124;
      }
      puVar8 = puVar23;
      _strncmp(puVar23,&UNK_10f57f387,7);
      if ((int)puVar8 == 0) {
        if ((byte)puVar20[2] == 0x2d) goto LAB_109702174;
        if ((byte)puVar20[2] == 0) goto LAB_109702174;
      }
    }
    if (*(byte *)puVar23 != 0x6e) goto LAB_109702184;
    if (*(byte *)((long)puVar20 + 2) != 0x77) {
      if (*(byte *)((long)puVar20 + 2) != 0x70) goto LAB_109702184;
      if (*(byte *)((long)puVar20 + 3) != 0x2d) goto LAB_109702184;
      puVar23 = puVar20;
      FUN_109739dcc(puVar20,puVar21,&UNK_10f57f3cf);
      if ((int)puVar23 != 0) goto LAB_1097020a4;
      puVar23 = puVar20;
      FUN_109739dcc(puVar20,puVar21,&UNK_10f57f3d3);
      if ((int)puVar23 == 0) goto LAB_10970215c;
      puVar16 = (ulong *)0x0;
      puVar20 = auStack_80;
      bVar18 = true;
      do {
        if (puVar27 <= puVar16) goto LAB_1097022d4;
        *puVar20 = *(uint *)(&UNK_10dfdff88 + (long)puVar16 * 4);
        puVar16 = (ulong *)0x1;
        bVar5 = !bVar18;
        puVar20 = puVar24;
        bVar18 = false;
        if (bVar5) goto LAB_109701d18;
      } while( true );
    }
    if (*(byte *)((long)puVar20 + 3) != 0x2d) goto LAB_109702184;
    puVar23 = puVar20;
    FUN_109739dcc(puVar20,puVar21,&UNK_10f57f466);
    if ((int)puVar23 == 0) goto LAB_109702184;
    auStack_80[0] = 0x4d4f4e54;
    break;
  case 0x6e:
    if ((uint)(iVar6 - iVar22) < 10) {
      if (6 < (uint)(iVar6 - iVar22)) goto code_r0x0001097029cc;
    }
    else {
      puVar8 = puVar23;
      _strncmp(puVar23,&UNK_10f57f3db,10);
      if (((int)puVar8 == 0) &&
         ((*(byte *)((long)puVar20 + 0xb) == 0x2d || (*(byte *)((long)puVar20 + 0xb) == 0))))
      goto code_r0x0001097032d8;
      puVar8 = puVar23;
      _strncmp(puVar23,&UNK_10f57f3e6,10);
      if (((int)puVar8 == 0) &&
         ((*(byte *)((long)puVar20 + 0xb) == 0x2d || (*(byte *)((long)puVar20 + 0xb) == 0)))) {
        puVar16 = (ulong *)0x0;
        puVar20 = auStack_80;
        bVar18 = true;
        do {
          if (puVar27 <= puVar16) goto LAB_109703784;
          *puVar20 = *(uint *)(&UNK_10dfdff88 + (long)puVar16 * 4);
          puVar16 = (ulong *)0x1;
          bVar5 = !bVar18;
          puVar20 = puVar24;
          bVar18 = false;
          if (bVar5) goto code_r0x000109703778;
        } while( true );
      }
code_r0x0001097029cc:
      puVar8 = puVar23;
      _strncmp(puVar23,&UNK_10f57f3f1,7);
      if ((int)puVar8 == 0) {
        if ((byte)puVar20[2] == 0x2d) goto LAB_109703124;
        if ((byte)puVar20[2] == 0) goto LAB_109703124;
      }
      puVar8 = puVar23;
      _strncmp(puVar23,&UNK_10f57f3f9,7);
      if ((int)puVar8 == 0) {
        if ((byte)puVar20[2] == 0x2d) goto LAB_109702174;
        if ((byte)puVar20[2] == 0) goto LAB_109702174;
      }
    }
    if (((*(byte *)puVar23 == 0x61) && (*(byte *)((long)puVar20 + 2) == 0x6e)) &&
       (*(byte *)((long)puVar20 + 3) == 0x2d)) {
      puVar8 = puVar20;
      FUN_109739dcc(puVar20,puVar21,&UNK_10f57f3cf);
      if ((int)puVar8 != 0) goto LAB_1097020a4;
      puVar8 = puVar20;
      FUN_109739dcc(puVar20,puVar21,&UNK_10f57f3d3);
      if ((int)puVar8 != 0) {
        puVar16 = (ulong *)0x0;
        puVar20 = auStack_80;
        bVar18 = true;
        do {
          if (puVar27 <= puVar16) goto LAB_1097022d4;
          *puVar20 = *(uint *)(&UNK_10dfdff88 + (long)puVar16 * 4);
          puVar16 = (ulong *)0x1;
          bVar5 = !bVar18;
          puVar20 = puVar24;
          bVar18 = false;
          if (bVar5) goto LAB_109701d18;
        } while( true );
      }
      puVar24 = puVar20;
      FUN_109739dcc(puVar20,puVar21,&UNK_10f57f3d7);
      if ((int)puVar24 != 0) goto LAB_109702174;
    }
    puVar24 = puVar23;
    _strcmp(puVar23,&UNK_10f57f46a);
    if ((int)puVar24 == 0) {
      auStack_80[0] = 0x4e4f5220;
    }
    else {
      _strcmp(puVar23,&UNK_10f57f470);
      if ((int)puVar23 != 0) goto LAB_109702184;
      auStack_80[0] = 0x4e594e20;
    }
    break;
  case 0x72:
    if (*(byte *)puVar23 != 0x6f) goto LAB_109702184;
    if ((uint)unaff_x25 < 3) goto LAB_109702184;
    puVar23 = puVar20;
    if (*(byte *)((long)puVar20 + 2) != 0x2d) goto LAB_109702184;
    do {
      _strstr(puVar23,&UNK_10f57f476);
      if (puVar23 == (uint *)0x0 || puVar21 <= puVar23) goto LAB_109702184;
      uVar14 = (uint)*(byte *)((long)puVar23 + 3);
      puVar23 = (uint *)((long)puVar23 + 3);
    } while (uVar14 - 0x30 < 10 || (uVar14 & 0xffffffdf) - 0x41 < 0x1a);
    puVar16 = (ulong *)0x0;
    puVar20 = auStack_80;
    bVar18 = true;
    do {
      if (puVar27 <= puVar16) goto LAB_1097022d4;
      *puVar20 = *(uint *)(&UNK_10dfdff80 + (long)puVar16 * 4);
      puVar16 = (ulong *)0x1;
      bVar5 = !bVar18;
      puVar20 = puVar24;
      bVar18 = false;
      if (bVar5) goto LAB_109701d18;
    } while( true );
  case 0x77:
    if ((uint)(iVar6 - iVar22) < 10) {
      if ((uint)(iVar6 - iVar22) < 7) goto code_r0x000109701b1c;
    }
    else {
      puVar8 = puVar23;
      _strncmp(puVar23,&UNK_10f57f47a,10);
      if (((int)puVar8 == 0) &&
         ((*(byte *)((long)puVar20 + 0xb) == 0x2d || (*(byte *)((long)puVar20 + 0xb) == 0))))
      goto code_r0x0001097032d8;
      puVar8 = puVar23;
      _strncmp(puVar23,&UNK_10f57f485,10);
      if (((int)puVar8 == 0) &&
         ((*(byte *)((long)puVar20 + 0xb) == 0x2d || (*(byte *)((long)puVar20 + 0xb) == 0)))) {
        puVar16 = (ulong *)0x0;
        puVar20 = auStack_80;
        bVar18 = true;
        do {
          if (puVar27 <= puVar16) goto LAB_109703784;
          *puVar20 = *(uint *)(&UNK_10dfdff88 + (long)puVar16 * 4);
          puVar16 = (ulong *)0x1;
          bVar5 = !bVar18;
          puVar20 = puVar24;
          bVar18 = false;
          if (bVar5) goto code_r0x000109703778;
        } while( true );
      }
    }
    puVar8 = puVar23;
    _strncmp(puVar23,&UNK_10f57f490,7);
    if ((int)puVar8 == 0) {
      if ((byte)puVar20[2] == 0x2d) goto LAB_109703124;
      if ((byte)puVar20[2] == 0) goto LAB_109703124;
    }
    puVar8 = puVar23;
    _strncmp(puVar23,&UNK_10f57f498,7);
    if ((int)puVar8 == 0) {
      if ((byte)puVar20[2] == 0x2d) goto LAB_109702174;
      if ((byte)puVar20[2] == 0) goto LAB_109702174;
    }
code_r0x000109701b1c:
    if (*(byte *)puVar23 != 0x75) goto LAB_109702184;
    if (*(byte *)((long)puVar20 + 2) != 0x75) goto LAB_109702184;
    if (*(byte *)((long)puVar20 + 3) != 0x2d) goto LAB_109702184;
    puVar23 = puVar20;
    FUN_109739dcc(puVar20,puVar21,&UNK_10f57f3cf);
    if ((int)puVar23 != 0) goto LAB_1097020a4;
    puVar23 = puVar20;
    FUN_109739dcc(puVar20,puVar21,&UNK_10f57f3d3);
    if ((int)puVar23 == 0) goto LAB_10970215c;
    puVar16 = (ulong *)0x0;
    puVar20 = auStack_80;
    bVar18 = true;
    do {
      if (puVar27 <= puVar16) goto LAB_1097022d4;
      *puVar20 = *(uint *)(&UNK_10dfdff88 + (long)puVar16 * 4);
      puVar16 = (ulong *)0x1;
      bVar5 = !bVar18;
      puVar20 = puVar24;
      bVar18 = false;
      if (bVar5) goto LAB_109701d18;
    } while( true );
  case 0x79:
    if ((uint)(iVar6 - iVar22) < 7) goto LAB_109702184;
    puVar12 = &UNK_10f57f4a0;
code_r0x000109701724:
    _strncmp(puVar23,puVar12,7);
    if ((int)puVar23 != 0) goto LAB_109702184;
    if ((byte)puVar20[2] == 0x2d) goto LAB_109703124;
    if ((byte)puVar20[2] != 0) goto LAB_109702184;
    goto LAB_109703124;
  case 0x7a:
    if ((uint)(iVar6 - iVar22) < 9) {
code_r0x000109701754:
      puVar8 = puVar23;
      _strcmp(puVar23,&UNK_10f57f4bc);
      if ((int)puVar8 == 0) goto LAB_109703124;
      if (5 < (uint)(iVar6 - iVar22)) {
        puVar8 = puVar23;
        _strncmp(puVar23,&UNK_10f57f4c6,6);
        if ((int)puVar8 == 0) {
          if (*(byte *)((long)puVar20 + 7) == 0x2d) goto LAB_109703124;
          if (*(byte *)((long)puVar20 + 7) == 0) goto LAB_109703124;
        }
        puVar8 = puVar23;
        _strncmp(puVar23,&UNK_10f57f4cd,6);
        if ((int)puVar8 == 0) {
          if (*(byte *)((long)puVar20 + 7) == 0x2d) goto LAB_109702174;
          if (*(byte *)((long)puVar20 + 7) == 0) goto LAB_109702174;
        }
      }
      puVar8 = puVar23;
      _strcmp(puVar23,&UNK_10f57f4d4);
      if ((int)puVar8 == 0) goto LAB_109703124;
      if (*(byte *)puVar23 != 0x68) goto LAB_109702184;
      if (*(byte *)((long)puVar20 + 2) != 0x2d) goto LAB_109702184;
      puVar23 = puVar20;
      FUN_109739dcc(puVar20,puVar21,&UNK_10f57f3cf);
      if ((int)puVar23 != 0) goto LAB_1097020a4;
      puVar23 = puVar20;
      FUN_109739dcc(puVar20,puVar21,&UNK_10f57f3d3);
      if ((int)puVar23 == 0) goto LAB_10970215c;
      puVar16 = (ulong *)0x0;
      puVar20 = auStack_80;
      bVar18 = true;
      do {
        if (puVar27 <= puVar16) goto LAB_1097022d4;
        *puVar20 = *(uint *)(&UNK_10dfdff88 + (long)puVar16 * 4);
        puVar16 = (ulong *)0x1;
        bVar5 = !bVar18;
        puVar20 = puVar24;
        bVar18 = false;
        if (bVar5) goto LAB_109701d18;
      } while( true );
    }
    puVar8 = puVar23;
    _strncmp(puVar23,&UNK_10f57f4a8,9);
    if (((int)puVar8 != 0) ||
       ((*(byte *)((long)puVar20 + 10) != 0x2d && (*(byte *)((long)puVar20 + 10) != 0)))) {
      puVar8 = puVar23;
      _strncmp(puVar23,&UNK_10f57f4b2,9);
      if (((int)puVar8 != 0) ||
         ((*(byte *)((long)puVar20 + 10) != 0x2d && (*(byte *)((long)puVar20 + 10) != 0))))
      goto code_r0x000109701754;
      puVar16 = (ulong *)0x0;
      puVar20 = auStack_80;
      bVar18 = true;
      while (puVar16 < puVar27) {
        *puVar20 = *(uint *)(&UNK_10dfdff88 + (long)puVar16 * 4);
        puVar16 = (ulong *)0x1;
        bVar5 = !bVar18;
        puVar20 = puVar24;
        bVar18 = false;
        if (bVar5) {
          uStack_88 = 2;
          goto LAB_109703138;
        }
      }
      uStack_88 = (uint)puVar16;
      goto code_r0x000109702d04;
    }
    auStack_80[0] = 0x5a484820;
    goto LAB_109702cf8;
  }
LAB_109703130:
  uStack_88 = 1;
LAB_109703138:
  uVar25 = (uint)uVar26;
joined_r0x00010970313c:
  puVar27 = param_1;
  uVar14 = uStack_84;
  if (((ulong)puVar15 & 1) == 0) {
LAB_1097032f4:
    puVar27 = param_1;
    if (uStack_84 == 0) {
      uVar14 = 0;
    }
    else {
      uVar14 = 0;
      if ((int)uVar25 < 0x4d6c796d) {
        if (0x47756a71 < (int)uVar25) {
          if (uVar25 == 0x47756a72) {
            uVar7 = 0x676a7232;
          }
          else if (uVar25 == 0x47757275) {
            uVar7 = 0x67757232;
          }
          else {
            if (uVar25 != 0x4b6e6461) goto LAB_109703478;
            uVar7 = 0x6b6e6432;
          }
LAB_10970344c:
          auStack_80[3] = uVar7 | 0x33;
          uVar14 = 1;
          if (uStack_84 == 1) goto LAB_109703554;
          goto LAB_109703464;
        }
        if (uVar25 == 0x42656e67) {
          uVar7 = 0x626e6732;
          goto LAB_10970344c;
        }
        if (uVar25 == 0x44657661) {
          uVar7 = 0x64657632;
          goto LAB_10970344c;
        }
      }
      else {
        if (0x4f727960 < (int)uVar25) {
          if (uVar25 == 0x4f727961) {
            uVar7 = 0x6f727932;
          }
          else if (uVar25 == 0x54616d6c) {
            uVar7 = 0x746d6c32;
          }
          else {
            if (uVar25 != 0x54656c75) goto LAB_109703478;
            uVar7 = 0x74656c32;
          }
          goto LAB_10970344c;
        }
        uVar7 = 0x6d6c6d32;
        if (uVar25 == 0x4d6c796d) goto LAB_10970344c;
        if (uVar25 != 0x4d796d72) goto LAB_109703478;
        uVar7 = 0x6d796d32;
LAB_109703464:
        auStack_80[(ulong)uVar14 + 3] = uVar7;
        uVar14 = uVar14 + 1;
        if (uStack_84 <= uVar14) goto LAB_109703554;
      }
LAB_109703478:
      if ((int)uVar25 < 0x4e6b6f6f) {
        if (uVar25 == 0) goto LAB_109703554;
        if (uVar25 == 0x48697261) {
          uVar7 = 0x6b616e61;
        }
        else {
          uVar7 = 0x6c616f20;
          if (uVar25 != 0x4c616f6f) goto LAB_109703520;
        }
      }
      else if ((int)uVar25 < 0x59696969) {
        if (uVar25 == 0x4e6b6f6f) {
          uVar7 = 0x6e6b6f20;
        }
        else if (uVar25 == 0x56616969) {
          uVar7 = 0x76616920;
        }
        else {
LAB_109703520:
          uVar7 = uVar25 | 0x20000000;
        }
      }
      else if (uVar25 == 0x59696969) {
        uVar7 = 0x79692020;
      }
      else {
        if (uVar25 != 0x5a6d7468) goto LAB_109703520;
        uVar7 = 0x6d617468;
      }
      auStack_80[(ulong)uVar14 + 3] = uVar7;
      uVar14 = uVar14 + 1;
    }
  }
LAB_109703554:
  puVar24 = (uint *)0x0;
  uVar26 = (ulong)uVar14;
  puVar16 = (ulong *)0x1;
  do {
    param_1 = puVar16;
    uVar3 = *(undefined4 *)(&UNK_10dfe0d44 + (long)puVar24 * 4);
    uVar19 = *puVar27;
    FUN_109700ce0(uVar19,uVar3);
    puVar1 = (undefined4 *)((long)puVar27 + (long)puVar24 * 4 + 0x38);
    if (uVar14 != 0) {
      puVar20 = auStack_80 + 3;
      uVar28 = uVar26;
      do {
        unaff_x25 = puVar20 + 1;
        puVar23 = (uint *)(ulong)*puVar20;
        uVar10 = uVar19;
        FUN_109700d54(uVar19,puVar23,puVar1);
        if ((uVar10 & 1) != 0) {
          uVar13 = 1;
          goto LAB_10970366c;
        }
        uVar28 = uVar28 - 1;
        puVar20 = unaff_x25;
      } while (uVar28 != 0);
    }
    uVar28 = uVar19;
    FUN_109700d54(uVar19,0x44464c54,puVar1);
    if ((uVar28 & 1) == 0) {
      uVar28 = uVar19;
      FUN_109700d54(uVar19,0x64666c74,puVar1);
      if ((uVar28 & 1) == 0) {
        FUN_109700d54(uVar19,0x6c61746e,puVar1);
        if ((uVar19 & 1) == 0) {
          puVar23 = (uint *)0x0;
          uVar13 = 0;
          *puVar1 = 0xffff;
        }
        else {
          uVar13 = 0;
          puVar23 = (uint *)0x6c61746e;
        }
      }
      else {
        uVar13 = 0;
        puVar23 = (uint *)0x64666c74;
      }
    }
    else {
      uVar13 = 0;
      puVar23 = (uint *)0x44464c54;
    }
LAB_10970366c:
    uVar25 = uStack_88;
    *(int *)((long)puVar27 + (long)puVar24 * 4 + 0x2c) = (int)puVar23;
    *(undefined1 *)((long)puVar27 + 0x34 + (long)puVar24) = uVar13;
    puVar20 = (uint *)*puVar27;
    puVar21 = (uint *)(ulong)uStack_88;
    FUN_109700ce0(puVar20,uVar3);
    func_0x000109700e58();
    puVar15 = (uint *)((long)puVar27 + (long)puVar24 * 4 + 0x40);
    if (uVar25 != 0) {
      puVar24 = auStack_80;
      do {
        puVar23 = puVar24 + 1;
        pbVar11 = (byte *)((long)puVar20 + 2);
        func_0x00010972a194(pbVar11,*puVar24,puVar15);
        if (((ulong)pbVar11 & 1) != 0) goto LAB_1097036e4;
        puVar21 = (uint *)((long)puVar21 + -1);
        puVar24 = puVar23;
      } while (puVar21 != (uint *)0x0);
    }
    pbVar11 = (byte *)((long)puVar20 + 2);
    func_0x00010972a194(pbVar11,0x64666c74,puVar15);
    if (((ulong)pbVar11 & 1) == 0) {
      *puVar15 = 0xffff;
    }
LAB_1097036e4:
    puVar24 = (uint *)0x1;
    puVar16 = (ulong *)0x0;
  } while ((int)param_1 != 0);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar27;
  }
  ___stack_chk_fail();
  puVar16 = puVar27;
code_r0x000109703730:
  uVar25 = (uint)uVar26;
  if ((*(byte *)((long)puVar20 + 0xb) == 0x2d) || (*(byte *)((long)puVar20 + 0xb) == 0)) {
    puVar16 = (ulong *)0x0;
    puVar20 = auStack_80;
    bVar18 = true;
    while (puVar16 < puVar27) {
      *puVar20 = *(uint *)(&UNK_10dfdff88 + (long)puVar16 * 4);
      puVar16 = (ulong *)0x1;
      bVar5 = !bVar18;
      puVar20 = puVar24;
      bVar18 = false;
      if (bVar5) goto code_r0x000109703778;
    }
LAB_109703784:
    uStack_88 = (uint)puVar16;
    goto joined_r0x00010970313c;
  }
LAB_109702784:
  puVar8 = puVar23;
  _strncmp(puVar23,&UNK_10f57f34f,7);
  param_1 = puVar16;
  if (((int)puVar8 == 0) && (((byte)puVar20[2] == 0x2d || ((byte)puVar20[2] == 0))))
  goto LAB_109703124;
  puVar8 = puVar23;
  _strncmp(puVar23,&UNK_10f57f357,7);
  if (((int)puVar8 == 0) && (((byte)puVar20[2] == 0x2d || ((byte)puVar20[2] == 0))))
  goto LAB_109702174;
  puVar8 = puVar23;
  _strncmp(puVar23,&UNK_10f57f35f,7);
  if (((int)puVar8 == 0) && (((byte)puVar20[2] == 0x2d || ((byte)puVar20[2] == 0))))
  goto LAB_109703124;
  puVar8 = puVar23;
  _strncmp(puVar23,&UNK_10f57f367,7);
  if (((int)puVar8 == 0) && (((byte)puVar20[2] == 0x2d || ((byte)puVar20[2] == 0))))
  goto LAB_109702174;
  puVar8 = puVar23;
  _strncmp(puVar23,&UNK_10f57f36f,7);
  if (((int)puVar8 == 0) && (((byte)puVar20[2] == 0x2d || ((byte)puVar20[2] == 0))))
  goto LAB_109703124;
  puVar8 = puVar23;
  _strncmp(puVar23,&UNK_10f57f377,7);
  if (((int)puVar8 == 0) && (((byte)puVar20[2] == 0x2d || ((byte)puVar20[2] == 0))))
  goto LAB_109702174;
  puVar8 = puVar23;
  _strncmp(puVar23,&UNK_10f57f37f,7);
  if (((int)puVar8 == 0) && (((byte)puVar20[2] == 0x2d || ((byte)puVar20[2] == 0))))
  goto LAB_109703124;
  puVar8 = puVar23;
  _strncmp(puVar23,&UNK_10f57f387,7);
  if (((int)puVar8 == 0) && (((byte)puVar20[2] == 0x2d || ((byte)puVar20[2] == 0))))
  goto LAB_109702174;
  puVar8 = puVar23;
  _strncmp(puVar23,&UNK_10f57f38f,7);
  if (((int)puVar8 == 0) && (((byte)puVar20[2] == 0x2d || ((byte)puVar20[2] == 0))))
  goto LAB_109703124;
  puVar8 = puVar23;
  _strncmp(puVar23,&UNK_10f57f397,7);
  if (((int)puVar8 == 0) && (((byte)puVar20[2] == 0x2d || ((byte)puVar20[2] == 0))))
  goto LAB_109702174;
  puVar8 = puVar23;
  _strncmp(puVar23,&UNK_10f57f39f,7);
  if (((int)puVar8 == 0) && (((byte)puVar20[2] == 0x2d || ((byte)puVar20[2] == 0))))
  goto LAB_109703124;
  puVar8 = puVar23;
  _strncmp(puVar23,&UNK_10f57f3a7,7);
  if (((int)puVar8 == 0) && (((byte)puVar20[2] == 0x2d || ((byte)puVar20[2] == 0))))
  goto LAB_109702174;
  puVar8 = puVar23;
  _strncmp(puVar23,&UNK_10f57f3af,7);
  if (((int)puVar8 == 0) && (((byte)puVar20[2] == 0x2d || ((byte)puVar20[2] == 0))))
  goto LAB_109703124;
  puVar8 = puVar23;
  _strncmp(puVar23,&UNK_10f57f3b7,7);
  if (((int)puVar8 == 0) && (((byte)puVar20[2] == 0x2d || ((byte)puVar20[2] == 0))))
  goto LAB_109702174;
  puVar8 = puVar23;
  _strncmp(puVar23,&UNK_10f57f3bf,7);
  if (((int)puVar8 == 0) && (((byte)puVar20[2] == 0x2d || ((byte)puVar20[2] == 0))))
  goto LAB_109703124;
  puVar8 = puVar23;
  _strncmp(puVar23,&UNK_10f57f3c7,7);
  if (((int)puVar8 == 0) && (((byte)puVar20[2] == 0x2d || ((byte)puVar20[2] == 0))))
  goto LAB_109702174;
LAB_10970181c:
  uVar25 = (uint)uVar26;
  bVar17 = (byte)*puVar23;
  if (0x6d < bVar17) {
    if (bVar17 < 0x73) {
      if (bVar17 == 0x6e) {
        if ((*(byte *)((long)puVar20 + 2) != 0x70) || (*(byte *)((long)puVar20 + 3) != 0x2d))
        goto LAB_109702184;
        puVar23 = puVar20;
        FUN_109739dcc(puVar20,puVar21,&UNK_10f57f3cf);
        if ((int)puVar23 != 0) goto LAB_1097020a4;
        puVar23 = puVar20;
        FUN_109739dcc(puVar20,puVar21,&UNK_10f57f3d3);
        if ((int)puVar23 == 0) goto LAB_10970215c;
        puVar16 = (ulong *)0x0;
        puVar20 = auStack_80;
        bVar18 = true;
        while (puVar16 < puVar27) {
          *puVar20 = *(uint *)(&UNK_10dfdff88 + (long)puVar16 * 4);
          puVar16 = (ulong *)0x1;
          bVar5 = !bVar18;
          puVar20 = puVar24;
          bVar18 = false;
          if (bVar5) goto LAB_109701d18;
        }
      }
      else {
        if (((bVar17 != 0x70) || (*(byte *)((long)puVar20 + 2) != 0x78)) ||
           (*(byte *)((long)puVar20 + 3) != 0x2d)) goto LAB_109702184;
        puVar23 = puVar20;
        FUN_109739dcc(puVar20,puVar21,&UNK_10f57f3cf);
        if ((int)puVar23 != 0) goto LAB_1097020a4;
        puVar23 = puVar20;
        FUN_109739dcc(puVar20,puVar21,&UNK_10f57f3d3);
        if ((int)puVar23 == 0) goto LAB_10970215c;
        puVar16 = (ulong *)0x0;
        puVar20 = auStack_80;
        bVar18 = true;
        while (puVar16 < puVar27) {
          *puVar20 = *(uint *)(&UNK_10dfdff88 + (long)puVar16 * 4);
          puVar16 = (ulong *)0x1;
          bVar5 = !bVar18;
          puVar20 = puVar24;
          bVar18 = false;
          if (bVar5) goto LAB_109701d18;
        }
      }
    }
    else {
      if (bVar17 == 0x73) {
        if ((*(byte *)((long)puVar20 + 2) == 0x70) && (*(byte *)((long)puVar20 + 3) == 0x2d)) {
          puVar23 = puVar20;
          FUN_109739dcc(puVar20,puVar21,&UNK_10f57f3cf);
          if ((int)puVar23 == 0) {
            puVar23 = puVar20;
            FUN_109739dcc(puVar20,puVar21,&UNK_10f57f3d3);
            if ((int)puVar23 == 0) goto LAB_10970215c;
            puVar16 = (ulong *)0x0;
            puVar20 = auStack_80;
            bVar18 = true;
            while (puVar16 < puVar27) {
              *puVar20 = *(uint *)(&UNK_10dfdff88 + (long)puVar16 * 4);
              puVar16 = (ulong *)0x1;
              bVar5 = !bVar18;
              puVar20 = puVar24;
              bVar18 = false;
              if (bVar5) goto LAB_109701d18;
            }
            goto LAB_1097022d4;
          }
          goto LAB_1097020a4;
        }
        goto LAB_109702184;
      }
      if (bVar17 != 0x7a) goto LAB_109702184;
      if (*(byte *)((long)puVar20 + 2) == 0x6f) {
        if (*(byte *)((long)puVar20 + 3) != 0x2d) goto LAB_109702184;
        puVar23 = puVar20;
        FUN_109739dcc(puVar20,puVar21,&UNK_10f57f3cf);
        if ((int)puVar23 == 0) {
          puVar23 = puVar20;
          FUN_109739dcc(puVar20,puVar21,&UNK_10f57f3d3);
          if ((int)puVar23 == 0) goto LAB_10970215c;
          puVar16 = (ulong *)0x0;
          puVar20 = auStack_80;
          bVar18 = true;
          while (puVar16 < puVar27) {
            *puVar20 = *(uint *)(&UNK_10dfdff88 + (long)puVar16 * 4);
            puVar16 = (ulong *)0x1;
            bVar5 = !bVar18;
            puVar20 = puVar24;
            bVar18 = false;
            if (bVar5) goto LAB_109701d18;
          }
          goto LAB_1097022d4;
        }
        goto LAB_1097020a4;
      }
      if ((*(byte *)((long)puVar20 + 2) != 0x68) || (*(byte *)((long)puVar20 + 3) != 0x2d))
      goto LAB_109702184;
      puVar23 = puVar20;
      FUN_109739dcc(puVar20,puVar21,&UNK_10f57f3cf);
      if ((int)puVar23 != 0) goto LAB_1097020a4;
      puVar23 = puVar20;
      FUN_109739dcc(puVar20,puVar21,&UNK_10f57f3d3);
      if ((int)puVar23 == 0) goto LAB_10970215c;
      puVar16 = (ulong *)0x0;
      puVar20 = auStack_80;
      bVar18 = true;
      while (puVar16 < puVar27) {
        *puVar20 = *(uint *)(&UNK_10dfdff88 + (long)puVar16 * 4);
        puVar16 = (ulong *)0x1;
        bVar5 = !bVar18;
        puVar20 = puVar24;
        bVar18 = false;
        if (bVar5) goto LAB_109701d18;
      }
    }
LAB_1097022d4:
    uStack_88 = (uint)puVar16;
    goto joined_r0x00010970313c;
  }
  if (bVar17 == 100) {
    if ((*(byte *)((long)puVar20 + 2) == 0x6f) && (*(byte *)((long)puVar20 + 3) == 0x2d)) {
      puVar23 = puVar20;
      FUN_109739dcc(puVar20,puVar21,&UNK_10f57f3cf);
      if ((int)puVar23 == 0) {
        puVar23 = puVar20;
        FUN_109739dcc(puVar20,puVar21,&UNK_10f57f3d3);
        if ((int)puVar23 == 0) goto LAB_10970215c;
        puVar16 = (ulong *)0x0;
        puVar20 = auStack_80;
        bVar18 = true;
        while (puVar16 < puVar27) {
          *puVar20 = *(uint *)(&UNK_10dfdff88 + (long)puVar16 * 4);
          puVar16 = (ulong *)0x1;
          bVar5 = !bVar18;
          puVar20 = puVar24;
          bVar18 = false;
          if (bVar5) goto LAB_109701d18;
        }
        goto LAB_1097022d4;
      }
LAB_1097020a4:
      auStack_80[0] = 0x5a484820;
      goto LAB_109703130;
    }
  }
  else if (bVar17 == 0x6a) {
    if ((*(byte *)((long)puVar20 + 2) == 0x79) && (*(byte *)((long)puVar20 + 3) == 0x2d)) {
      puVar23 = puVar20;
      FUN_109739dcc(puVar20,puVar21,&UNK_10f57f3cf);
      if ((int)puVar23 == 0) {
        puVar23 = puVar20;
        FUN_109739dcc(puVar20,puVar21,&UNK_10f57f3d3);
        if ((int)puVar23 == 0) goto LAB_10970215c;
        puVar16 = (ulong *)0x0;
        puVar20 = auStack_80;
        bVar18 = true;
        while (puVar16 < puVar27) {
          *puVar20 = *(uint *)(&UNK_10dfdff88 + (long)puVar16 * 4);
          puVar16 = (ulong *)0x1;
          bVar5 = !bVar18;
          puVar20 = puVar24;
          bVar18 = false;
          if (bVar5) goto LAB_109701d18;
        }
        goto LAB_1097022d4;
      }
      goto LAB_1097020a4;
    }
  }
  else if (((bVar17 == 0x6d) && (*(byte *)((long)puVar20 + 2) == 0x6e)) &&
          (*(byte *)((long)puVar20 + 3) == 0x2d)) {
    puVar23 = puVar20;
    FUN_109739dcc(puVar20,puVar21,&UNK_10f57f3cf);
    if ((int)puVar23 != 0) goto LAB_1097020a4;
    puVar23 = puVar20;
    FUN_109739dcc(puVar20,puVar21,&UNK_10f57f3d3);
    if ((int)puVar23 != 0) {
      puVar16 = (ulong *)0x0;
      puVar20 = auStack_80;
      bVar18 = true;
      while (puVar16 < puVar27) {
        *puVar20 = *(uint *)(&UNK_10dfdff88 + (long)puVar16 * 4);
        puVar16 = (ulong *)0x1;
        bVar5 = !bVar18;
        puVar20 = puVar24;
        bVar18 = false;
        if (bVar5) goto LAB_109701d18;
      }
      goto LAB_1097022d4;
    }
LAB_10970215c:
    puVar23 = puVar20;
    FUN_109739dcc(puVar20,puVar21,&UNK_10f57f3d7);
    if ((int)puVar23 != 0) goto LAB_109702174;
  }
LAB_109702184:
  uVar25 = (uint)uVar26;
  puVar23 = puVar20;
  _strchr(puVar20,0x2d);
  puVar24 = puVar20;
  if ((5 < (long)unaff_x25) && (puVar23 != (uint *)0x0)) {
    puVar8 = (uint *)((long)puVar23 + 1);
    puVar9 = puVar8;
    _strchr(puVar8,0x2d);
    if (puVar9 == (uint *)0x0) {
      puVar9 = puVar8;
      _strlen();
    }
    else {
      puVar9 = (uint *)((long)puVar9 + ~(ulong)puVar23);
    }
    if ((puVar9 == (uint *)0x3) && (puVar24 = puVar8, 0x19 < (*(byte *)puVar8 & 0xffffffdf) - 0x41))
    {
      puVar24 = puVar20;
    }
  }
  puVar20 = puVar24;
  _strchr(puVar24,0x2d);
  iVar6 = (int)puVar21;
  if (puVar20 != (uint *)0x0) {
    iVar6 = (int)puVar20;
  }
  iVar6 = iVar6 - (int)puVar24;
  if (iVar6 == 2) {
    uVar14 = 0xcc;
    puVar12 = &UNK_10dfe1be0;
LAB_10970222c:
    puVar20 = puVar24;
    FUN_1096f5c50();
    uVar19 = (ulong)uRam0000000113735dcc;
    uVar7 = (uint)puVar20;
    if ((uVar14 <= uRam0000000113735dcc) || (*(uint *)(puVar12 + uVar19 * 8) != uVar7)) {
      iVar6 = 0;
      iVar22 = uVar14 - 1;
      do {
        uVar4 = (uint)(iVar22 + iVar6) >> 1;
        uVar19 = (ulong)uVar4;
        uVar2 = *(uint *)(puVar12 + uVar19 * 8);
        if (uVar7 <= uVar2 && uVar2 != uVar7) {
          iVar22 = uVar4 - 1;
        }
        else {
          if (uVar7 <= uVar2) break;
          iVar6 = uVar4 + 1;
        }
        if (iVar22 < iVar6) goto LAB_1097022e4;
      } while( true );
    }
    uRam0000000113735dcc = (uint)uVar19;
    do {
      uVar28 = uVar19;
      if ((int)uVar28 == 0) break;
      uVar19 = (ulong)((int)uVar28 - 1);
    } while (*(int *)(puVar12 + uVar28 * 8) == *(int *)(puVar12 + uVar19 * 8));
    if (uStack_88 != 0) {
      puVar27 = (ulong *)0x0;
      puVar20 = (uint *)((long)(puVar12 + uVar28 * 8) + 4);
      do {
        puVar16 = puVar27;
        if ((((ulong)uVar14 <= uVar28 + (long)puVar27) || (*puVar20 == 0)) ||
           (puVar20[-1] != *(uint *)(puVar12 + uVar28 * 8))) break;
        auStack_80[(long)puVar27] = *puVar20;
        puVar27 = (ulong *)((long)puVar27 + 1);
        puVar20 = puVar20 + 2;
        puVar16 = (ulong *)(ulong)uStack_88;
      } while ((ulong *)(ulong)uStack_88 != puVar27);
      goto LAB_1097022d4;
    }
  }
  else {
    if (iVar6 == 3) {
      uVar14 = 0x4c9;
      puVar12 = &UNK_10dfe2240;
      goto LAB_10970222c;
    }
LAB_1097022e4:
    if (puVar23 == (uint *)0x0) {
      puVar23 = puVar24;
      _strlen();
      puVar23 = (uint *)((long)puVar24 + (long)puVar23);
    }
    if ((long)puVar23 - (long)puVar24 == 3) {
      FUN_1096f5c50(puVar24,3);
      auStack_80[0] = (uint)puVar24 & 0xdfdfdfff;
      goto LAB_109703130;
    }
  }
  uStack_88 = 0;
  goto LAB_109703138;
  while (uVar14 = (uint)(byte)puVar9[2], puVar9 = puVar9 + 2,
        uVar14 - 0x30 < 10 || (uVar14 & 0xffffffdf) - 0x41 < 0x1a) {
LAB_109702450:
    _strstr(puVar9,&UNK_10f57f25a);
    puVar8 = puVar24;
    if (puVar9 == (uint *)0x0 || puVar21 <= puVar9) goto LAB_109702b74;
  }
  auStack_80[0] = 0x50475220;
  goto LAB_109702cf8;
  while (uVar14 = (uint)(byte)puVar8[2], puVar8 = puVar8 + 2,
        uVar14 - 0x30 < 10 || (uVar14 & 0xffffffdf) - 0x41 < 0x1a) {
LAB_109702b74:
    _strstr(puVar8,&UNK_10f57f263);
    puVar9 = puVar24;
    if (puVar8 == (uint *)0x0 || puVar21 <= puVar8) goto LAB_109702c8c;
  }
  auStack_80[0] = 0x48594520;
  goto LAB_109702cf8;
  while (uVar14 = (uint)(byte)puVar9[2], puVar9 = puVar9 + 2,
        uVar14 - 0x30 < 10 || (uVar14 & 0xffffffdf) - 0x41 < 0x1a) {
LAB_109702c8c:
    _strstr(puVar9,&UNK_10f57f26c);
    if (puVar9 == (uint *)0x0 || puVar21 <= puVar9) goto LAB_1097015ec;
  }
  auStack_80[0] = 0x50524f20;
LAB_109702cf8:
  uStack_88 = 1;
code_r0x000109702d04:
  puVar27 = param_1;
  uVar14 = uStack_84;
  if (((ulong)puVar15 & 1) != 0) goto LAB_109703554;
  goto LAB_1097032f4;
  while (uVar14 = (uint)*(byte *)((long)puVar9 + 5), puVar9 = (uint *)((long)puVar9 + 5),
        uVar14 - 0x30 < 10 || (uVar14 & 0xffffffdf) - 0x41 < 0x1a) {
LAB_109702498:
    _strstr(puVar9,&UNK_10f57f283);
    puVar8 = puVar24;
    if (puVar9 == (uint *)0x0 || puVar21 <= puVar9) goto LAB_109702bbc;
  }
  auStack_80[0] = 0x53595245;
  goto LAB_1097032e0;
  while (uVar14 = (uint)*(byte *)((long)puVar8 + 5), puVar8 = (uint *)((long)puVar8 + 5),
        uVar14 - 0x30 < 10 || (uVar14 & 0xffffffdf) - 0x41 < 0x1a) {
LAB_109702bbc:
    _strstr(puVar8,&UNK_10f57f289);
    if (puVar8 == (uint *)0x0 || puVar21 <= puVar8) goto LAB_109702c1c;
  }
  auStack_80[0] = 0x5359524a;
  goto LAB_1097032e0;
  while (puVar24 = (uint *)((long)puVar24 + 5),
        *(byte *)puVar24 - 0x30 < 10 || (*(byte *)puVar24 & 0xffffffdf) - 0x41 < 0x1a) {
LAB_109702c1c:
    _strstr(puVar24,&UNK_10f57f28f);
    if (puVar24 == (uint *)0x0 || puVar21 <= puVar24) goto LAB_1097015fc;
  }
  auStack_80[0] = 0x5359524e;
LAB_1097032e0:
  uStack_88 = 1;
  goto joined_r0x00010970313c;
code_r0x000109703778:
  uStack_88 = 2;
  goto LAB_109703138;
LAB_109703124:
  auStack_80[0] = 0x5a485320;
  goto LAB_109703130;
LAB_109702174:
  auStack_80[0] = 0x5a485420;
  goto LAB_109703130;
LAB_109701d18:
  uStack_88 = 2;
  goto LAB_109703138;
}



/* Entry: 109703914; end: 1097039df;  */

long FUN_109703914(long param_1)

{
  long lVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  int *piVar5;
  int *piVar6;
  
  piVar5 = (int *)(param_1 + 0x50);
  if (*piVar5 != 0) {
    *(undefined4 *)(param_1 + 0x54) = 0;
    _free(*(undefined8 *)(param_1 + 0x58));
  }
  lVar4 = 0;
  piVar5[0] = 0;
  piVar5[1] = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  bVar2 = true;
  do {
    bVar3 = bVar2;
    piVar6 = (int *)(param_1 + 0x60 + lVar4 * 0x10);
    if (*piVar6 != 0) {
      piVar6[1] = 0;
      _free(*(undefined8 *)(piVar6 + 2));
    }
    piVar6[0] = 0;
    piVar6[1] = 0;
    piVar6[2] = 0;
    piVar6[3] = 0;
    lVar4 = 1;
    bVar2 = false;
  } while (bVar3);
  lVar4 = 0;
  do {
    lVar1 = param_1 + lVar4;
    piVar6 = (int *)(lVar1 + 0x70);
    if (*piVar6 != 0) {
      *(undefined4 *)(lVar1 + 0x74) = 0;
      _free(*(undefined8 *)(lVar1 + 0x78));
    }
    piVar6[0] = 0;
    piVar6[1] = 0;
    *(undefined8 *)(lVar1 + 0x78) = 0;
    lVar4 = lVar4 + -0x10;
  } while (lVar4 != -0x20);
  if (*piVar5 != 0) {
    *(undefined4 *)(param_1 + 0x54) = 0;
    _free(*(undefined8 *)(param_1 + 0x58));
  }
  piVar5[0] = 0;
  piVar5[1] = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  return param_1;
}



/* Entry: 1097039e0; end: 109703a43;  */

void FUN_1097039e0(long param_1,int param_2,uint param_3,uint param_4)

{
  int iVar1;
  int *piVar2;
  
  if (param_2 != 0) {
    piVar2 = (int *)(param_1 + 0x50);
    FUN_109703a44();
    iVar1 = *(int *)(param_1 + 0x54);
    *piVar2 = param_2;
    piVar2[1] = iVar1;
    piVar2[2] = param_4;
    piVar2[3] = param_3;
    piVar2[4] = -(param_3 & 1) & param_4;
    piVar2[5] = *(int *)(param_1 + 0x48);
    piVar2[6] = *(int *)(param_1 + 0x4c);
  }
  return;
}



/* Entry: 109703a44; end: 109703ad3;  */

long FUN_109703a44(long param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  
  uVar1 = *(int *)(param_1 + 4) + 1;
  uVar1 = uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU);
  lVar4 = param_1;
  FUN_10974dc90(param_1,uVar1,0);
  if ((int)lVar4 == 0) {
    lVar4 = 0x11382ab30;
    uRam000000011382ab30 = 0;
    uRam000000011382ab38 = 0;
    uRam000000011382ab48 = 0;
    uRam000000011382ab40 = 0;
  }
  else {
    uVar2 = *(uint *)(param_1 + 4);
    if ((uVar2 < uVar1) && (iVar3 = (uVar1 - uVar2) * 0x1c, iVar3 != 0)) {
      _bzero(*(long *)(param_1 + 8) + (ulong)uVar2 * 0x1c,iVar3);
    }
    *(uint *)(param_1 + 4) = uVar1;
    lVar4 = *(long *)(param_1 + 8) + (ulong)(uVar1 - 1) * 0x1c;
  }
  return lVar4;
}



/* Entry: 109703ad4; end: 109703e03;  */

uint * FUN_109703ad4(undefined8 *param_1,long param_2,ulong param_3,uint param_4,uint param_5,
                    undefined4 param_6,byte param_7,int param_8,undefined4 param_9,
                    undefined4 param_10)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint *puVar4;
  uint *puVar5;
  long lVar6;
  byte bVar7;
  byte bVar8;
  uint uVar9;
  uint *puVar10;
  byte bVar11;
  uint *puVar12;
  undefined2 *puVar13;
  byte bVar14;
  uint uVar15;
  ulong uVar16;
  uint uVar17;
  int iVar18;
  uint uStack_f4;
  uint auStack_f0 [32];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar9 = (uint)*param_1;
  uVar3 = *(undefined4 *)(&UNK_10dfe0d44 + (param_3 & 0xffffffff) * 4);
  FUN_109700ce0();
  func_0x000109700ec8();
  param_2 = param_2 + (param_3 & 0xffffffff) * 0x10;
  bVar7 = 2;
  if (param_8 == 0) {
    bVar7 = 0;
  }
  iVar18 = 0;
  bVar11 = 4;
  if ((char)param_9 == '\0') {
    bVar11 = 0;
  }
  bVar14 = 8;
  if (param_9._1_1_ == '\0') {
    bVar14 = 0;
  }
  do {
    uStack_f4 = 0x20;
    puVar4 = (uint *)*param_1;
    FUN_109700ce0(puVar4,uVar3);
    if ((param_5 != 0xffffffff) &&
       (uVar15 = (*puVar4 & 0xff00ff00) >> 8 | (*puVar4 & 0xff00ff) << 8,
       0x10000 < (uVar15 >> 0x10 | uVar15 << 0x10))) {
      puVar5 = puVar4;
      FUN_10972a6a4();
      uVar15 = (puVar5[1] & 0xff00ff00) >> 8 | (puVar5[1] & 0xff00ff) << 8;
      puVar10 = (uint *)&UNK_10dfe4888;
      if (param_5 < (uVar15 >> 0x10 | uVar15 << 0x10)) {
        puVar10 = puVar5 + (ulong)param_5 * 2 + 2;
      }
      uVar15 = (puVar10[1] & 0xff00ff00) >> 8 | (puVar10[1] & 0xff00ff) << 8;
      uVar15 = uVar15 >> 0x10 | uVar15 << 0x10;
      puVar10 = (uint *)&UNK_10dfe4888;
      if (uVar15 != 0) {
        puVar10 = (uint *)((long)puVar5 + (ulong)uVar15);
      }
      uVar15 = (uint)(ushort)((ushort)puVar10[1] >> 8) | ((ushort)puVar10[1] & 0xff00ff) << 8;
      uVar16 = (ulong)uVar15;
      puVar5 = puVar10;
      if (uVar15 != 0) {
        do {
          puVar12 = (uint *)((long)puVar5 + 6);
          if (param_4 == ((uint)(*(ushort *)puVar12 >> 8) | (*(ushort *)puVar12 & 0xff00ff) << 8)) {
            uVar15 = (uint)(byte)puVar5[2] << 0x18 | (uint)*(byte *)((long)puVar5 + 9) << 0x10 |
                     (uint)*(byte *)((long)puVar5 + 10) << 8;
            goto LAB_109703c9c;
          }
          uVar16 = uVar16 - 1;
          puVar5 = puVar12;
        } while (uVar16 != 0);
      }
    }
    puVar10 = (uint *)&UNK_10dfe4888;
    if (((ushort)((ushort)*puVar4 >> 8 | (ushort)*puVar4 << 8) == 1) &&
       (uVar15 = (uint)(*(ushort *)((long)puVar4 + 6) >> 8) |
                 (*(ushort *)((long)puVar4 + 6) & 0xff00ff) << 8, uVar15 != 0)) {
      puVar10 = (uint *)((long)puVar4 + (ulong)uVar15);
    }
    puVar12 = (uint *)&UNK_10dfe4888;
    if (param_4 < ((uint)(ushort)((ushort)*puVar10 >> 8) | ((ushort)*puVar10 & 0xff00ff) << 8)) {
      puVar12 = (uint *)((long)puVar10 + (ulong)param_4 * 6 + 2);
    }
    uVar15 = (uint)(byte)puVar12[1] << 8;
LAB_109703c9c:
    uVar15 = uVar15 | *(byte *)((long)puVar12 + 5);
    puVar4 = (uint *)&UNK_10dfe4888;
    if (uVar15 != 0) {
      puVar4 = (uint *)((long)puVar10 + (ulong)uVar15);
    }
    puVar4 = (uint *)((long)puVar4 + 2);
    func_0x00010972a1f8(puVar4,iVar18,&uStack_f4,auStack_f0);
    uVar15 = uStack_f4;
    uVar16 = (ulong)uStack_f4;
    if (uStack_f4 == 0) break;
    puVar5 = auStack_f0;
    do {
      uVar17 = *puVar5;
      if (uVar17 < uVar9) {
        uVar1 = *(int *)(param_2 + 0x24) + 1;
        uVar1 = uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU);
        puVar4 = (uint *)(param_2 + 0x20);
        func_0x00010974dd58(puVar4,uVar1,0);
        if ((int)puVar4 == 0) {
          bVar8 = 0;
          puVar13 = (undefined2 *)0x11382ab30;
          uRam000000011382ab38 = uRam000000011382ab38 & 0xffffffff00000000;
          uRam000000011382ab30 = 0;
        }
        else {
          uVar2 = *(uint *)(param_2 + 0x24);
          if ((uVar2 < uVar1) && ((uVar1 - uVar2) * 0xc != 0)) {
            puVar4 = (uint *)(*(long *)(param_2 + 0x28) + (ulong)uVar2 * 0xc);
            _bzero();
          }
          *(uint *)(param_2 + 0x24) = uVar1;
          puVar13 = (undefined2 *)(*(long *)(param_2 + 0x28) + (ulong)(uVar1 - 1) * 0xc);
          bVar8 = *(byte *)(puVar13 + 1) & 0xf0;
        }
        *puVar13 = (short)uVar17;
        *(byte *)(puVar13 + 1) = bVar7 | param_7 | bVar11 | bVar14 | bVar8;
        *(undefined4 *)(puVar13 + 2) = param_6;
        *(undefined4 *)(puVar13 + 4) = param_10;
      }
      uVar16 = uVar16 - 1;
      puVar5 = puVar5 + 1;
    } while (uVar16 != 0);
    iVar18 = uVar15 + iVar18;
  } while (uVar15 == 0x20);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar4;
  }
  ___stack_chk_fail();
  uVar9 = *puVar4;
  if ((int)uVar9 < 0) {
LAB_109703ec4:
    puVar4 = (uint *)0x11382ab30;
    uRam000000011382ab30 = 0;
    uRam000000011382ab38 = 0;
  }
  else {
    uVar15 = puVar4[1] + 1;
    uVar1 = uVar15 & ((int)uVar15 >> 0x1f ^ 0xffffffffU);
    uVar17 = uVar9;
    if ((int)uVar9 < (int)uVar15) {
      do {
        uVar17 = uVar17 + (uVar17 >> 1) + 8;
      } while (uVar17 < uVar1);
      if (uVar17 >> 0x1c != 0) {
LAB_109703ebc:
        *puVar4 = ~uVar9;
        goto LAB_109703ec4;
      }
      lVar6 = *(long *)(puVar4 + 2);
      FUN_10974de20(lVar6,uVar17);
      if (lVar6 == 0) {
        uVar9 = *puVar4;
        if (uVar9 < uVar17) goto LAB_109703ebc;
      }
      else {
        *(long *)(puVar4 + 2) = lVar6;
        *puVar4 = uVar17;
      }
    }
    uVar9 = puVar4[1];
    if ((uVar9 < uVar1) && ((uVar1 - uVar9 & 0xfffffff) != 0)) {
      _bzero(*(long *)(puVar4 + 2) + (ulong)uVar9 * 0x10);
    }
    puVar4[1] = uVar1;
    puVar4 = (uint *)(*(long *)(puVar4 + 2) + (ulong)(uVar1 - 1) * 0x10);
  }
  return puVar4;
}



/* Entry: 109703e04; end: 109703ed3;  */

long FUN_109703e04(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = *param_1;
  if ((int)uVar4 < 0) {
LAB_109703ec4:
    lVar3 = 0x11382ab30;
    uRam000000011382ab30 = 0;
    uRam000000011382ab38 = 0;
  }
  else {
    uVar1 = param_1[1] + 1;
    uVar2 = uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU);
    uVar5 = uVar4;
    if ((int)uVar4 < (int)uVar1) {
      do {
        uVar5 = uVar5 + (uVar5 >> 1) + 8;
      } while (uVar5 < uVar2);
      if (uVar5 >> 0x1c != 0) {
LAB_109703ebc:
        *param_1 = ~uVar4;
        goto LAB_109703ec4;
      }
      lVar3 = *(long *)(param_1 + 2);
      FUN_10974de20(lVar3,uVar5);
      if (lVar3 == 0) {
        uVar4 = *param_1;
        if (uVar4 < uVar5) goto LAB_109703ebc;
      }
      else {
        *(long *)(param_1 + 2) = lVar3;
        *param_1 = uVar5;
      }
    }
    uVar4 = param_1[1];
    if ((uVar4 < uVar2) && ((uVar2 - uVar4 & 0xfffffff) != 0)) {
      _bzero(*(long *)(param_1 + 2) + (ulong)uVar4 * 0x10);
    }
    param_1[1] = uVar2;
    lVar3 = *(long *)(param_1 + 2) + (ulong)(uVar2 - 1) * 0x10;
  }
  return lVar3;
}



/* Entry: 109703ed4; end: 109703f23;  */

uint FUN_109703ed4(uint *param_1,uint *param_2)

{
  uint uVar1;
  
  if (*param_1 == *param_2) {
    uVar1 = 0xffffffff;
    if (param_2[1] <= param_1[1]) {
      uVar1 = (uint)(param_2[1] < param_1[1]);
    }
    return uVar1;
  }
  uVar1 = 1;
  if (*param_1 < *param_2) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



/* Entry: 109703f24; end: 1097044bf;  */

bool FUN_109703f24(float param_1,long param_2,int param_3,int *param_4)

{
  char *pcVar1;
  char *pcVar2;
  ushort uVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  float fVar8;
  
  lVar7 = *(long *)(param_2 + 0x20);
  if (param_3 < 0x76617363) {
    if (param_3 == 0x68617363) {
      lVar6 = lVar7 + 0x90;
      FUN_109746db4();
      pcVar1 = "";
      pcVar2 = pcVar1;
      if (0x4d < *(uint *)(lVar6 + 0x18)) {
        pcVar2 = *(char **)(lVar6 + 0x10);
      }
      if (pcVar2[0x3f] < '\0') {
        lVar6 = lVar7 + 0x90;
        FUN_109746db4();
        pcVar2 = pcVar1;
        if (0x4d < *(uint *)(lVar6 + 0x18)) {
          pcVar2 = *(char **)(lVar6 + 0x10);
        }
        iVar5 = (int)pcVar2;
        FUN_1097044c0();
        if (iVar5 == 0) goto LAB_1097042d8;
        if (param_4 == (int *)0x0) {
          return true;
        }
        lVar6 = lVar7 + 0x90;
        FUN_109746db4();
        pcVar2 = pcVar1;
        if (0x4d < *(uint *)(lVar6 + 0x18)) {
          pcVar2 = *(char **)(lVar6 + 0x10);
        }
        uVar3 = *(ushort *)(pcVar2 + 0x44);
      }
      else {
LAB_1097042d8:
        lVar6 = lVar7 + 0x80;
        FUN_10974e25c();
        pcVar2 = pcVar1;
        if (0x23 < *(uint *)(lVar6 + 0x18)) {
          pcVar2 = *(char **)(lVar6 + 0x10);
        }
        if (pcVar2[1] == '\0' && *pcVar2 == '\0') {
          return false;
        }
        if (param_4 == (int *)0x0) {
          return true;
        }
        lVar6 = lVar7 + 0x80;
        FUN_10974e25c();
        pcVar2 = pcVar1;
        if (0x23 < *(uint *)(lVar6 + 0x18)) {
          pcVar2 = *(char **)(lVar6 + 0x10);
        }
        uVar3 = *(ushort *)(pcVar2 + 4);
      }
      lVar7 = lVar7 + 0x110;
      FUN_10974de84();
      if (0xb < *(uint *)(lVar7 + 0x18)) {
        pcVar1 = *(char **)(lVar7 + 0x10);
      }
      func_0x000109704510(pcVar1,0x68617363,*(undefined8 *)(param_2 + 0x80),
                          *(undefined4 *)(param_2 + 0x78));
      param_1 = ABS(param_1 + (float)(int)(short)(uVar3 >> 8 | uVar3 << 8));
    }
    else {
      if (param_3 == 0x68647363) {
        lVar6 = lVar7 + 0x90;
        FUN_109746db4();
        pcVar1 = "";
        pcVar2 = pcVar1;
        if (0x4d < *(uint *)(lVar6 + 0x18)) {
          pcVar2 = *(char **)(lVar6 + 0x10);
        }
        if (pcVar2[0x3f] < '\0') {
          lVar6 = lVar7 + 0x90;
          FUN_109746db4();
          pcVar2 = pcVar1;
          if (0x4d < *(uint *)(lVar6 + 0x18)) {
            pcVar2 = *(char **)(lVar6 + 0x10);
          }
          iVar5 = (int)pcVar2;
          FUN_1097044c0();
          if (iVar5 == 0) goto LAB_1097043fc;
          if (param_4 == (int *)0x0) {
            return true;
          }
          lVar6 = lVar7 + 0x90;
          FUN_109746db4();
          pcVar2 = pcVar1;
          if (0x4d < *(uint *)(lVar6 + 0x18)) {
            pcVar2 = *(char **)(lVar6 + 0x10);
          }
          uVar3 = *(ushort *)(pcVar2 + 0x46);
        }
        else {
LAB_1097043fc:
          lVar6 = lVar7 + 0x80;
          FUN_10974e25c();
          pcVar2 = pcVar1;
          if (0x23 < *(uint *)(lVar6 + 0x18)) {
            pcVar2 = *(char **)(lVar6 + 0x10);
          }
          if (pcVar2[1] == '\0' && *pcVar2 == '\0') {
            return false;
          }
          if (param_4 == (int *)0x0) {
            return true;
          }
          lVar6 = lVar7 + 0x80;
          FUN_10974e25c();
          pcVar2 = pcVar1;
          if (0x23 < *(uint *)(lVar6 + 0x18)) {
            pcVar2 = *(char **)(lVar6 + 0x10);
          }
          uVar3 = *(ushort *)(pcVar2 + 6);
        }
        lVar7 = lVar7 + 0x110;
        FUN_10974de84();
        if (0xb < *(uint *)(lVar7 + 0x18)) {
          pcVar1 = *(char **)(lVar7 + 0x10);
        }
        func_0x000109704510(pcVar1,0x68647363,*(undefined8 *)(param_2 + 0x80),
                            *(undefined4 *)(param_2 + 0x78));
        param_1 = param_1 + (float)(int)(short)(uVar3 >> 8 | uVar3 << 8);
        fVar8 = *(float *)(param_2 + 0x50);
LAB_10970448c:
        fVar8 = 0.5 - fVar8 * ABS(param_1);
        goto LAB_109704498;
      }
      if (param_3 != 0x686c6770) {
        return false;
      }
      lVar6 = lVar7 + 0x90;
      FUN_109746db4();
      pcVar1 = "";
      pcVar2 = pcVar1;
      if (0x4d < *(uint *)(lVar6 + 0x18)) {
        pcVar2 = *(char **)(lVar6 + 0x10);
      }
      if (pcVar2[0x3f] < '\0') {
        lVar6 = lVar7 + 0x90;
        FUN_109746db4();
        pcVar2 = pcVar1;
        if (0x4d < *(uint *)(lVar6 + 0x18)) {
          pcVar2 = *(char **)(lVar6 + 0x10);
        }
        iVar5 = (int)pcVar2;
        FUN_1097044c0();
        if (iVar5 == 0) goto LAB_109704364;
        if (param_4 == (int *)0x0) {
          return true;
        }
        lVar6 = lVar7 + 0x90;
        FUN_109746db4();
        pcVar2 = pcVar1;
        if (0x4d < *(uint *)(lVar6 + 0x18)) {
          pcVar2 = *(char **)(lVar6 + 0x10);
        }
        uVar3 = *(ushort *)(pcVar2 + 0x48);
      }
      else {
LAB_109704364:
        lVar6 = lVar7 + 0x80;
        FUN_10974e25c();
        pcVar2 = pcVar1;
        if (0x23 < *(uint *)(lVar6 + 0x18)) {
          pcVar2 = *(char **)(lVar6 + 0x10);
        }
        if (pcVar2[1] == '\0' && *pcVar2 == '\0') {
          return false;
        }
        if (param_4 == (int *)0x0) {
          return true;
        }
        lVar6 = lVar7 + 0x80;
        FUN_10974e25c();
        pcVar2 = pcVar1;
        if (0x23 < *(uint *)(lVar6 + 0x18)) {
          pcVar2 = *(char **)(lVar6 + 0x10);
        }
        uVar3 = *(ushort *)(pcVar2 + 8);
      }
      lVar7 = lVar7 + 0x110;
      FUN_10974de84();
      if (0xb < *(uint *)(lVar7 + 0x18)) {
        pcVar1 = *(char **)(lVar7 + 0x10);
      }
      func_0x000109704510(pcVar1,0x686c6770,*(undefined8 *)(param_2 + 0x80),
                          *(undefined4 *)(param_2 + 0x78));
      param_1 = param_1 + (float)(int)(short)(uVar3 >> 8 | uVar3 << 8);
    }
    fVar8 = *(float *)(param_2 + 0x50);
  }
  else {
    if (param_3 == 0x76617363) {
      lVar6 = lVar7 + 0xb8;
      FUN_10974e46c();
      pcVar1 = "";
      pcVar2 = pcVar1;
      if (0x23 < *(uint *)(lVar6 + 0x18)) {
        pcVar2 = *(char **)(lVar6 + 0x10);
      }
      bVar4 = pcVar2[1] != '\0' || *pcVar2 != '\0';
      if (param_4 == (int *)0x0) {
        return bVar4;
      }
      if (pcVar2[1] == '\0' && *pcVar2 == '\0') {
        return bVar4;
      }
      lVar6 = lVar7 + 0xb8;
      FUN_10974e46c();
      pcVar2 = pcVar1;
      if (0x23 < *(uint *)(lVar6 + 0x18)) {
        pcVar2 = *(char **)(lVar6 + 0x10);
      }
      uVar3 = *(ushort *)(pcVar2 + 4);
      lVar7 = lVar7 + 0x110;
      FUN_10974de84();
      if (0xb < *(uint *)(lVar7 + 0x18)) {
        pcVar1 = *(char **)(lVar7 + 0x10);
      }
      func_0x000109704510(pcVar1,0x76617363,*(undefined8 *)(param_2 + 0x80),
                          *(undefined4 *)(param_2 + 0x78));
      param_1 = ABS(param_1 + (float)(int)(short)(uVar3 >> 8 | uVar3 << 8));
    }
    else {
      if (param_3 == 0x76647363) {
        lVar6 = lVar7 + 0xb8;
        FUN_10974e46c();
        pcVar1 = "";
        pcVar2 = pcVar1;
        if (0x23 < *(uint *)(lVar6 + 0x18)) {
          pcVar2 = *(char **)(lVar6 + 0x10);
        }
        bVar4 = pcVar2[1] != '\0' || *pcVar2 != '\0';
        if (param_4 == (int *)0x0) {
          return bVar4;
        }
        if (pcVar2[1] == '\0' && *pcVar2 == '\0') {
          return bVar4;
        }
        lVar6 = lVar7 + 0xb8;
        FUN_10974e46c();
        pcVar2 = pcVar1;
        if (0x23 < *(uint *)(lVar6 + 0x18)) {
          pcVar2 = *(char **)(lVar6 + 0x10);
        }
        uVar3 = *(ushort *)(pcVar2 + 6);
        lVar7 = lVar7 + 0x110;
        FUN_10974de84();
        if (0xb < *(uint *)(lVar7 + 0x18)) {
          pcVar1 = *(char **)(lVar7 + 0x10);
        }
        func_0x000109704510(pcVar1,0x76647363,*(undefined8 *)(param_2 + 0x80),
                            *(undefined4 *)(param_2 + 0x78));
        param_1 = param_1 + (float)(int)(short)(uVar3 >> 8 | uVar3 << 8);
        fVar8 = *(float *)(param_2 + 0x4c);
        goto LAB_10970448c;
      }
      if (param_3 != 0x766c6770) {
        return false;
      }
      lVar6 = lVar7 + 0xb8;
      FUN_10974e46c();
      pcVar1 = "";
      pcVar2 = pcVar1;
      if (0x23 < *(uint *)(lVar6 + 0x18)) {
        pcVar2 = *(char **)(lVar6 + 0x10);
      }
      bVar4 = pcVar2[1] != '\0' || *pcVar2 != '\0';
      if (param_4 == (int *)0x0) {
        return bVar4;
      }
      if (pcVar2[1] == '\0' && *pcVar2 == '\0') {
        return bVar4;
      }
      lVar6 = lVar7 + 0xb8;
      FUN_10974e46c();
      pcVar2 = pcVar1;
      if (0x23 < *(uint *)(lVar6 + 0x18)) {
        pcVar2 = *(char **)(lVar6 + 0x10);
      }
      uVar3 = *(ushort *)(pcVar2 + 8);
      lVar7 = lVar7 + 0x110;
      FUN_10974de84();
      if (0xb < *(uint *)(lVar7 + 0x18)) {
        pcVar1 = *(char **)(lVar7 + 0x10);
      }
      func_0x000109704510(pcVar1,0x766c6770,*(undefined8 *)(param_2 + 0x80),
                          *(undefined4 *)(param_2 + 0x78));
      param_1 = param_1 + (float)(int)(short)(uVar3 >> 8 | uVar3 << 8);
    }
    fVar8 = *(float *)(param_2 + 0x4c);
  }
  fVar8 = fVar8 * param_1 + 0.5;
LAB_109704498:
  *param_4 = (int)fVar8;
  return true;
}



/* Entry: 1097044c0; end: 1097045a7;  */

bool FUN_1097044c0(long param_1)

{
  if (((*(char *)(param_1 + 5) == '\0' && *(char *)(param_1 + 4) == '\0') &&
      (*(char *)(param_1 + 7) == '\0' && *(char *)(param_1 + 6) == '\0')) &&
     (*(char *)(param_1 + 0x41) == '\0' && *(char *)(param_1 + 0x40) == '\0')) {
    return *(char *)(param_1 + 0x43) != '\0' || *(char *)(param_1 + 0x42) != '\0';
  }
  return true;
}



/* Entry: 1097045a8; end: 109704617;  */

bool FUN_1097045a8(long param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *param_3 = param_2;
  *param_4 = 0;
  (**(code **)(lVar1 + 0x48))();
  return (int)lVar1 != 0;
}



/* Entry: 109704618; end: 1097048e7;  */

void FUN_109704618(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  ushort uVar3;
  long lVar4;
  undefined8 uVar5;
  uint uVar6;
  long lVar7;
  ushort *puVar8;
  long lVar9;
  ushort uVar10;
  undefined4 uStack_3c;
  int iStack_38;
  undefined4 uStack_34;
  
  lVar9 = *(long *)(param_1 + 8);
  iVar2 = *(int *)(*(long *)(lVar9 + 0x70) + (ulong)*(uint *)(lVar9 + 0x5c) * 0x14);
  if ((int)param_2 == 0) {
    lVar4 = param_1;
    FUN_10973098c(param_1,param_2,iVar2);
    if ((int)lVar4 != 0) {
LAB_1097046cc:
      *(int *)(lVar9 + 0x5c) = *(int *)(lVar9 + 0x5c) + 1;
      return;
    }
    lVar4 = *(long *)(param_1 + 0x10);
    uStack_34 = *(undefined4 *)(lVar9 + 0x28);
    lVar7 = *(long *)(*(long *)(lVar4 + 0x90) + 0x10);
    if (lVar7 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined8 *)(lVar7 + 0x10);
    }
    (**(code **)(*(long *)(lVar4 + 0x90) + 0x30))
              (lVar4,*(undefined8 *)(lVar4 + 0x98),iVar2,&uStack_34,uVar5);
    uVar1 = uStack_34;
    if ((int)lVar4 != 0) goto LAB_1097048b8;
  }
  else {
    lVar4 = *(long *)(param_1 + 0x10);
    uStack_34 = *(undefined4 *)(lVar9 + 0x28);
    lVar7 = *(long *)(*(long *)(lVar4 + 0x90) + 0x10);
    if (lVar7 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined8 *)(lVar7 + 0x10);
    }
    (**(code **)(*(long *)(lVar4 + 0x90) + 0x30))
              (lVar4,*(undefined8 *)(lVar4 + 0x98),iVar2,&uStack_34,uVar5);
    uVar1 = uStack_34;
    if ((int)lVar4 != 0) goto LAB_1097048b8;
    lVar4 = param_1;
    FUN_10973098c(param_1,1,iVar2);
    if ((int)lVar4 != 0) goto LAB_1097046cc;
  }
  if ((*(ushort *)(*(long *)(lVar9 + 0x70) + (ulong)*(uint *)(lVar9 + 0x5c) * 0x14 + 0x10) & 0x1f)
      == 0x1d) {
    if (iVar2 < 0x202f) {
      switch(iVar2) {
      case 0x2000:
      case 0x2002:
        uVar10 = 0x200;
        break;
      case 0x2001:
      case 0x2003:
code_r0x000109704768:
        uVar10 = 0x100;
        break;
      case 0x2004:
        uVar10 = 0x300;
        break;
      case 0x2005:
        uVar10 = 0x400;
        break;
      case 0x2006:
        uVar10 = 0x600;
        break;
      case 0x2007:
        uVar10 = 0x1300;
        break;
      case 0x2008:
        uVar10 = 0x1400;
        break;
      case 0x2009:
        uVar10 = 0x500;
        break;
      case 0x200a:
        uVar10 = 0x1000;
        break;
      default:
        uVar10 = 0x1200;
        if ((iVar2 != 0x20) && (iVar2 != 0xa0)) goto LAB_10970486c;
      }
    }
    else if (iVar2 == 0x202f) {
      uVar10 = 0x1500;
    }
    else {
      if (iVar2 != 0x205f) {
        if (iVar2 == 0x3000) goto code_r0x000109704768;
        goto LAB_10970486c;
      }
      uVar10 = 0x1100;
    }
    lVar4 = *(long *)(param_1 + 0x10);
    iStack_38 = 0;
    lVar7 = *(long *)(*(long *)(lVar4 + 0x90) + 0x10);
    if (lVar7 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined8 *)(lVar7 + 0x10);
    }
    (**(code **)(*(long *)(lVar4 + 0x90) + 0x30))
              (lVar4,*(undefined8 *)(lVar4 + 0x98),0x20,&iStack_38,uVar5);
    if (((int)lVar4 != 0) || (iStack_38 = *(int *)(lVar9 + 0x24), iStack_38 != 0)) {
      lVar4 = *(long *)(lVar9 + 0x70);
      uVar6 = *(uint *)(lVar9 + 0x5c);
      puVar8 = (ushort *)(lVar4 + (ulong)uVar6 * 0x14 + 0x10);
      uVar3 = *puVar8;
      if ((uVar3 & 0x1f) == 0x1d) {
        *puVar8 = uVar3 & 0xfd | uVar10;
        lVar4 = *(long *)(lVar9 + 0x70);
        uVar6 = *(uint *)(lVar9 + 0x5c);
      }
      *(int *)(lVar4 + (ulong)uVar6 * 0x14 + 0xc) = iStack_38;
      FUN_109704924(lVar9);
      *(uint *)(lVar9 + 0xc0) = *(uint *)(lVar9 + 0xc0) | 4;
      return;
    }
  }
LAB_10970486c:
  uVar1 = uStack_34;
  if (iVar2 == 0x2011) {
    lVar4 = *(long *)(param_1 + 0x10);
    uStack_3c = 0;
    lVar7 = *(long *)(*(long *)(lVar4 + 0x90) + 0x10);
    if (lVar7 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined8 *)(lVar7 + 0x10);
    }
    (**(code **)(*(long *)(lVar4 + 0x90) + 0x30))
              (lVar4,*(undefined8 *)(lVar4 + 0x98),0x2010,&uStack_3c,uVar5);
    uVar1 = uStack_34;
    if ((int)lVar4 != 0) {
      uVar1 = uStack_3c;
    }
  }
LAB_1097048b8:
  *(undefined4 *)(*(long *)(lVar9 + 0x70) + (ulong)*(uint *)(lVar9 + 0x5c) * 0x14 + 0xc) = uVar1;
  FUN_109704924(lVar9);
  return;
}



/* Entry: 1097048e8; end: 109704923;  */

uint FUN_1097048e8(long param_1,long param_2)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  
  uVar1 = 0;
  if ((1 << (ulong)(*(ushort *)(param_1 + 0x10) & 0x1f) & 0x1c00U) != 0) {
    uVar1 = *(ushort *)(param_1 + 0x10) >> 8;
  }
  uVar2 = 0;
  if ((1 << (ulong)(*(ushort *)(param_2 + 0x10) & 0x1f) & 0x1c00U) != 0) {
    uVar2 = *(ushort *)(param_2 + 0x10) >> 8;
  }
  uVar3 = (uint)(uVar2 < uVar1);
  if (uVar1 < uVar2) {
    uVar3 = 0xffffffff;
  }
  return uVar3;
}



/* Entry: 109704924; end: 1097049bf;  */

void FUN_109704924(long param_1)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (*(char *)(param_1 + 0x5a) == '\x01') {
    if ((*(long *)(param_1 + 0x78) != *(long *)(param_1 + 0x70)) ||
       (iVar2 = *(int *)(param_1 + 100), iVar2 != *(int *)(param_1 + 0x5c))) {
      lVar1 = param_1;
      FUN_1096f5fd4(param_1,1,1);
      if ((int)lVar1 == 0) {
        return;
      }
      puVar3 = (undefined8 *)(*(long *)(param_1 + 0x70) + (ulong)*(uint *)(param_1 + 0x5c) * 0x14);
      puVar4 = (undefined8 *)(*(long *)(param_1 + 0x78) + (ulong)*(uint *)(param_1 + 100) * 0x14);
      uVar6 = puVar3[1];
      uVar5 = *puVar3;
      *(undefined4 *)(puVar4 + 2) = *(undefined4 *)(puVar3 + 2);
      puVar4[1] = uVar6;
      *puVar4 = uVar5;
      iVar2 = *(int *)(param_1 + 100);
    }
    *(int *)(param_1 + 100) = iVar2 + 1;
  }
  *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 1;
  return;
}



/* Entry: 1097049c0; end: 109704c47;  */

void FUN_1097049c0(uint *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  
  uVar7 = *(ulong *)(param_2 + 0x10);
  uVar1 = *param_1;
  uVar3 = uVar7;
  (**(code **)(uVar7 + 0x28))(uVar7,uVar1,*(undefined8 *)(uVar7 + 0x68));
  uVar4 = (uint)uVar3;
  uVar8 = uVar4;
  if (uVar1 < 0x80) goto LAB_109704b40;
  uVar2 = *(uint *)(param_2 + 0xc0);
  *(uint *)(param_2 + 0xc0) = uVar2 | 1;
  uVar5 = uVar1 >> 0x10;
  if (uVar5 == 0) {
    uVar5 = uVar1 >> 8;
    if (uVar5 < 0x18) {
      if (uVar5 < 6) {
        if (uVar5 == 0) {
          if (uVar1 == 0xad) {
LAB_109704afc:
            *(uint *)(param_2 + 0xc0) = uVar2 | 3;
            uVar8 = uVar4 | 0x20;
          }
        }
        else if ((uVar5 == 3) && (uVar1 == 0x34f)) {
          *(uint *)(param_2 + 0xc0) = uVar2 | 0x13;
          goto LAB_109704bf4;
        }
      }
      else if (uVar5 == 6) {
        if (uVar1 == 0x61c) goto LAB_109704afc;
      }
      else if (uVar5 == 0x17) {
        uVar5 = uVar1 & 0xfffe;
        uVar6 = 0x17b4;
        goto LAB_109704b20;
      }
    }
    else {
      if (0xfd < uVar5) {
        if (uVar5 == 0xfe) {
          if (uVar1 != 0xfeff) {
            uVar5 = uVar1 & 0xfff0;
            uVar6 = 0xfe00;
LAB_109704b20:
            if (uVar5 != uVar6) goto LAB_109704b28;
          }
        }
        else if ((uVar5 != 0xff) || (8 < uVar1 - 0xfff0)) goto LAB_109704b28;
        goto LAB_109704bd4;
      }
      if (uVar5 == 0x18) {
        if (uVar1 - 0x180b < 4) goto LAB_109704bd4;
      }
      else if (uVar5 == 0x20) {
        if ((uVar1 - 0x2010 < 0xfffffffb) && (4 < uVar1 - 0x202a)) {
          uVar5 = uVar1 & 0xfff0;
          uVar6 = 0x2060;
          goto LAB_109704b20;
        }
        goto LAB_109704bd4;
      }
    }
  }
  else if (uVar5 == 0xe) {
    if ((uVar1 & 0xfffff000) == 0xe0000) goto LAB_109704bd4;
  }
  else if (uVar5 == 1 && uVar1 - 0x1d173 < 8) {
LAB_109704bd4:
    *(uint *)(param_2 + 0xc0) = uVar2 | 3;
    if ((uVar1 - 0x180b < 5) && (uVar1 - 0x180b != 3)) {
LAB_109704bf4:
      uVar8 = uVar4 | 0x60;
    }
    else {
      uVar2 = uVar4 | 0x20;
      if (uVar1 - 0xe0020 < 0x60) {
        uVar2 = uVar4 | 0x60;
      }
      if (uVar1 == 0x200c) {
        uVar2 = uVar4 | 0x220;
      }
      uVar8 = uVar4 | 0x120;
      if (uVar1 != 0x200d) {
        uVar8 = uVar2;
      }
    }
  }
LAB_109704b28:
  if (uVar4 < 0x20 && (1 << (ulong)(uVar4 & 0x1f) & 0x1c00U) != 0) {
    uVar4 = 0xfe00;
    if ((uVar1 != 0x1a60) && (uVar1 != 0xfc6)) {
      if (uVar1 == 0xf39) {
        uVar4 = 0x7f00;
      }
      else {
        (**(code **)(uVar7 + 0x18))(uVar7,uVar1,*(undefined8 *)(uVar7 + 0x58));
        uVar4 = (uint)(byte)(&UNK_10dfe4b27)[uVar7 & 0xffffffff] << 8;
      }
    }
    uVar8 = uVar8 | uVar4 | 0x80;
  }
LAB_109704b40:
  *(short *)(param_1 + 4) = (short)uVar8;
  return;
}



/* Entry: 109704c48; end: 109704cc7;  */

undefined4 FUN_109704c48(int param_1,long param_2,uint param_3,undefined4 *param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  iVar3 = param_1 + -1;
  if (0 < param_1) {
    iVar5 = 0;
    do {
      uVar2 = (uint)(iVar3 + iVar5) >> 1;
      uVar1 = *(uint *)(param_2 + (ulong)uVar2 * 0x24);
      if (param_3 <= uVar1 && uVar1 != param_3) {
        iVar3 = uVar2 - 1;
      }
      else {
        if (param_3 <= uVar1) {
          param_2 = param_2 + (ulong)uVar2 * 0x24;
          goto joined_r0x000109704ca4;
        }
        iVar5 = uVar2 + 1;
      }
    } while (iVar5 <= iVar3);
  }
  param_2 = 0;
joined_r0x000109704ca4:
  if (param_4 != (undefined4 *)0x0) {
    if (param_2 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined4 *)(param_2 + 0x14);
    }
    *param_4 = uVar4;
  }
  if (param_2 == 0) {
    return 0;
  }
  return *(undefined4 *)(param_2 + 0x18);
}



/* Entry: 109704cc8; end: 109704d67;  */

void FUN_109704cc8(long param_1)

{
  bool bVar1;
  bool bVar2;
  int *piVar3;
  long lVar4;
  
  piVar3 = (int *)(param_1 + 0x10);
  if (*piVar3 != 0) {
    *(undefined4 *)(param_1 + 0x14) = 0;
    _free(*(undefined8 *)(param_1 + 0x18));
  }
  lVar4 = 0;
  piVar3[0] = 0;
  piVar3[1] = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  bVar1 = true;
  do {
    bVar2 = bVar1;
    piVar3 = (int *)(param_1 + 0x20 + lVar4 * 0x10);
    if (*piVar3 != 0) {
      piVar3[1] = 0;
      _free(*(undefined8 *)(piVar3 + 2));
    }
    piVar3[0] = 0;
    piVar3[1] = 0;
    piVar3[2] = 0;
    piVar3[3] = 0;
    piVar3 = (int *)(param_1 + 0x40 + lVar4 * 0x10);
    if (*piVar3 != 0) {
      piVar3[1] = 0;
      _free(*(undefined8 *)(piVar3 + 2));
    }
    piVar3[0] = 0;
    piVar3[1] = 0;
    piVar3[2] = 0;
    piVar3[3] = 0;
    lVar4 = 1;
    bVar1 = false;
  } while (bVar2);
  return;
}



/* Entry: 109704d68; end: 109708d1f;  */

undefined8 FUN_109704d68(long param_1,long param_2,ulong param_3,long param_4,uint param_5)

{
  uint *puVar1;
  int *piVar2;
  long *plVar3;
  undefined2 uVar4;
  uint uVar5;
  undefined4 uVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  undefined1 auVar12 [16];
  char cVar13;
  short sVar14;
  bool bVar15;
  ushort uVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  int iVar21;
  ulong *puVar22;
  ulong *puVar23;
  ushort *puVar24;
  ulong *puVar25;
  ulong *puVar26;
  ushort *puVar27;
  byte *pbVar28;
  byte *pbVar29;
  undefined *puVar30;
  undefined *puVar31;
  undefined8 uVar32;
  ushort uVar33;
  uint uVar34;
  uint uVar35;
  ulong uVar36;
  undefined4 *puVar37;
  code *pcVar38;
  uint uVar39;
  uint uVar40;
  long lVar41;
  undefined1 *puVar42;
  ulong uVar43;
  long lVar44;
  undefined8 *puVar45;
  undefined8 *puVar46;
  long lVar47;
  ulong uVar48;
  ulong uVar49;
  ushort uVar50;
  uint uVar51;
  long lVar52;
  uint *puVar53;
  ushort *puVar54;
  undefined4 *puVar55;
  ushort uVar56;
  ulong uVar57;
  byte *pbVar58;
  int iVar59;
  int *piVar60;
  uint *puVar61;
  uint uVar62;
  ulong uVar63;
  uint uVar64;
  float fVar65;
  undefined8 uVar66;
  long lStack_248;
  undefined8 uStack_218;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  code *pcStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  uint uStack_1d8;
  int iStack_1d4;
  undefined8 *puStack_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined1 uStack_1b4;
  byte *pbStack_1b0;
  undefined8 uStack_1a8;
  long lStack_1a0;
  undefined8 *puStack_198;
  byte *pbStack_190;
  byte *pbStack_188;
  ulong uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  uint uStack_138;
  int iStack_134;
  code *pcStack_130;
  undefined8 uStack_110;
  undefined8 *puStack_108;
  byte *pbStack_100;
  byte *pbStack_f8;
  uint uStack_ec;
  uint uStack_e8;
  undefined4 uStack_e4;
  byte bStack_db;
  byte bStack_da;
  byte bStack_d9;
  byte bStack_d8;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  byte *pbStack_c0;
  byte *pbStack_b8;
  uint auStack_b0 [8];
  uint uStack_90;
  undefined1 uStack_8c;
  int iStack_84;
  undefined8 uStack_80;
  
  uVar5 = *(uint *)(param_3 + 0x38);
  *(byte *)(param_3 + 0xb8) = *(byte *)(param_3 + 0xb8) | 0x30;
  uVar40 = *(uint *)(param_3 + 0x60);
  uVar48 = (ulong)uVar40;
  if (uVar40 != 0) {
    uVar6 = *(undefined4 *)(param_1 + 0x94);
    lVar52 = *(long *)(param_3 + 0x70);
    puVar37 = (undefined4 *)(lVar52 + 4);
    do {
      *puVar37 = uVar6;
      uVar48 = uVar48 - 1;
      puVar37 = puVar37 + 5;
    } while (uVar48 != 0);
    uVar48 = 0;
    do {
      uVar35 = (uint)uVar48;
      puVar61 = (uint *)(lVar52 + uVar48 * 0x14);
      FUN_1097049c0(puVar61,param_3);
      puVar53 = puVar61 + 4;
      uVar33 = (ushort)*puVar53;
      if ((1 << (ulong)(uVar33 & 0x1f) & 0x200003a0U) == 0) {
        if (((uVar33 & 0x1f) == 0x18) && (*puVar61 - 0x1f3fb < 5)) {
LAB_109704f10:
          *(ushort *)puVar53 = uVar33 | 0x80;
        }
        else if ((uVar35 == 0) || (0x19 < *puVar61 - 0x1f1e6)) {
          if ((uVar33 & 0x11f) == 0x101) {
            *(ushort *)puVar53 = uVar33 | 0x80;
            uVar34 = uVar35 + 1;
            if (uVar34 < uVar40) {
              piVar60 = (int *)(lVar52 + (ulong)uVar34 * 0x14);
              iVar21 = *piVar60;
              func_0x000109710b90();
              if (iVar21 != 0) {
                FUN_1097049c0(piVar60,param_3);
                puVar53 = (uint *)(piVar60 + 4);
                uVar33 = (ushort)*puVar53;
                uVar35 = uVar34;
                goto LAB_109704f10;
              }
            }
          }
          else if ((*puVar61 >> 1 == 0x7fcf) || (*puVar61 - 0xe0020 < 0x60)) goto LAB_109704f10;
        }
        else {
          piVar60 = (int *)(lVar52 + (ulong)(uVar35 - 1) * 0x14);
          if ((*piVar60 - 0x1f1e6U < 0x1a) && ((*(ushort *)(piVar60 + 4) >> 7 & 1) == 0))
          goto LAB_109704f10;
        }
      }
      uVar48 = (ulong)(uVar35 + 1);
    } while (uVar35 + 1 < uVar40);
  }
  if ((((*(uint *)(param_3 + 0x18) & 0x11) == 1) && (*(int *)(param_3 + 0xb0) == 0)) &&
     ((1 << (ulong)(*(ushort *)(*(long *)(param_3 + 0x70) + 0x10) & 0x1f) & 0x1c00U) != 0)) {
    uStack_218._0_4_ = 0;
    lVar52 = *(long *)(*(long *)(param_2 + 0x90) + 0x10);
    if (lVar52 == 0) {
      uVar32 = 0;
    }
    else {
      uVar32 = *(undefined8 *)(lVar52 + 0x10);
    }
    lVar52 = param_2;
    (**(code **)(*(long *)(param_2 + 0x90) + 0x30))
              (param_2,*(undefined8 *)(param_2 + 0x98),0x25cc,&uStack_218,uVar32);
    if ((int)lVar52 != 0) {
      uStack_20c = 0;
      uStack_208._0_4_ = 0;
      uStack_218._4_4_ = 0;
      uStack_210 = 0;
      uStack_218._0_4_ = 0x25cc;
      FUN_1097049c0(&uStack_218,param_3);
      uVar6 = (uint)uStack_218;
      *(undefined2 *)(param_3 + 0x5a) = 1;
      *(undefined4 *)(param_3 + 100) = 0;
      *(long *)(param_3 + 0x78) = *(long *)(param_3 + 0x70);
      *(undefined4 *)(param_3 + 0x5c) = 0;
      uVar32 = CONCAT44((undefined4)uStack_208,uStack_20c);
      uVar66 = *(undefined8 *)(*(long *)(param_3 + 0x70) + 4);
      uVar48 = param_3;
      FUN_1096f5fd4(param_3,0,1);
      if ((int)uVar48 != 0) {
        puVar37 = (undefined4 *)(*(long *)(param_3 + 0x78) + (ulong)*(uint *)(param_3 + 100) * 0x14)
        ;
        *puVar37 = uVar6;
        *(undefined8 *)(puVar37 + 1) = uVar66;
        *(undefined8 *)(puVar37 + 3) = uVar32;
        *(int *)(param_3 + 100) = *(int *)(param_3 + 100) + 1;
      }
      func_0x0001096f6314(param_3);
    }
  }
  if ((*(byte *)(param_3 + 0xc0) & 1) != 0) {
    uVar40 = *(uint *)(param_3 + 0x60);
    uVar48 = (ulong)uVar40;
    if (*(int *)(param_3 + 0x1c) == 0) {
      if (uVar40 != 0) {
        lVar52 = 0x24;
        uVar49 = 0;
        do {
          uVar36 = uVar48;
          if (uVar40 - 1 == uVar49) break;
          uVar36 = uVar49 + 1;
          puVar54 = (ushort *)(*(long *)(param_3 + 0x70) + lVar52);
          lVar52 = lVar52 + 0x14;
          uVar49 = uVar36;
        } while ((*puVar54 >> 7 & 1) != 0);
        uVar49 = 0;
        do {
          uVar35 = (uint)uVar36;
          if (1 < uVar35 - (int)uVar49) {
            func_0x0001096f65e4(param_3,uVar49,uVar36);
            uVar48 = (ulong)*(uint *)(param_3 + 0x60);
          }
          uVar34 = (uint)uVar48;
          if (uVar34 <= uVar35 + 1) {
            uVar34 = uVar35 + 1;
          }
          uVar57 = uVar36;
          do {
            iVar21 = (int)uVar57;
            uVar57 = (ulong)uVar34;
            if (uVar34 - 1 == iVar21) break;
            uVar57 = (ulong)(iVar21 + 1);
          } while ((*(ushort *)(*(long *)(param_3 + 0x70) + uVar57 * 0x14 + 0x10) >> 7 & 1) != 0);
          uVar49 = uVar36;
          uVar36 = uVar57;
        } while (uVar35 < uVar40);
      }
    }
    else if (uVar40 != 0) {
      lVar52 = 0x24;
      uVar49 = 0;
      do {
        uVar36 = uVar48;
        if (uVar40 - 1 == uVar49) break;
        uVar36 = uVar49 + 1;
        puVar54 = (ushort *)(*(long *)(param_3 + 0x70) + lVar52);
        lVar52 = lVar52 + 0x14;
        uVar49 = uVar36;
      } while ((*puVar54 >> 7 & 1) != 0);
      uVar48 = 0;
      do {
        uVar49 = uVar36;
        FUN_109710ea8(param_3,3,uVar48,uVar49,1,0);
        uVar35 = *(uint *)(param_3 + 0x60);
        uVar34 = (uint)uVar49;
        if (uVar35 <= uVar34 + 1) {
          uVar35 = uVar34 + 1;
        }
        uVar36 = uVar49;
        do {
          iVar21 = (int)uVar36;
          uVar36 = (ulong)uVar35;
          if (uVar35 - 1 == iVar21) break;
          uVar36 = (ulong)(iVar21 + 1);
        } while ((*(ushort *)(*(long *)(param_3 + 0x70) + uVar36 * 0x14 + 0x10) >> 7 & 1) != 0);
        uVar48 = uVar49;
      } while (uVar34 < uVar40);
    }
  }
  uVar48 = param_1 + 0x60;
  uVar35 = *(uint *)(param_3 + 0x38);
  uVar40 = *(uint *)(param_3 + 0x3c);
  FUN_1096f6b04();
  if (uVar40 == 5 && uVar35 == 4) {
    uVar40 = *(uint *)(param_3 + 0x60);
    if (uVar40 != 0) {
      bVar19 = false;
      bVar20 = false;
      puVar54 = (ushort *)(*(long *)(param_3 + 0x70) + 0x10);
      uVar49 = 1;
      bVar17 = true;
      uVar36 = (ulong)uVar40;
      do {
        if ((*puVar54 & 0x1f) == 0xd) {
          bVar19 = true;
        }
        else {
          if ((1 << (ulong)(*puVar54 & 0x1f) & 0x3e0U) != 0) break;
          bVar20 = (bool)(*(int *)(puVar54 + -8) - 0x1f1e6U < 0x1a | bVar20);
        }
        bVar17 = uVar49 < uVar40;
        uVar49 = uVar49 + 1;
        puVar54 = puVar54 + 10;
        uVar36 = uVar36 - 1;
      } while (uVar36 != 0);
      uVar40 = 4;
      if (bVar17) {
        uVar40 = 5;
      }
      if (!bVar19 && !bVar20) {
        uVar40 = 5;
      }
      goto LAB_1097050f8;
    }
    uVar40 = 5;
LAB_109705104:
    if ((uVar35 != uVar40) && (uVar40 != 0)) {
LAB_109705124:
      iVar21 = *(int *)(param_3 + 0x1c);
      uVar40 = *(uint *)(param_3 + 0x60);
      uVar49 = (ulong)uVar40;
      if (uVar40 == 1) {
        uVar57 = 0;
        uVar36 = 1;
LAB_1097051b4:
        if ((iVar21 == 1) && (1 < (uint)((int)uVar36 - (int)uVar57))) {
          func_0x0001096f65e4(param_3,uVar57,uVar36);
        }
        FUN_1096f7004(param_3,uVar57,uVar36);
        FUN_1096f7004(param_3,0,*(undefined4 *)(param_3 + 0x60));
        uVar35 = *(uint *)(param_3 + 0x38);
      }
      else if (uVar40 != 0) {
        uVar57 = 0;
        uVar36 = 1;
        lVar52 = 0x24;
        do {
          if ((*(ushort *)(*(long *)(param_3 + 0x70) + lVar52) >> 7 & 1) == 0) {
            if ((iVar21 == 1) && (1 < (uint)((int)uVar36 - (int)uVar57))) {
              func_0x0001096f65e4(param_3,uVar57,uVar36);
            }
            FUN_1096f7004(param_3,uVar57,uVar36);
            uVar49 = (ulong)*(uint *)(param_3 + 0x60);
            uVar57 = uVar36;
          }
          uVar36 = uVar36 + 1;
          lVar52 = lVar52 + 0x14;
        } while (uVar36 < uVar49);
        goto LAB_1097051b4;
      }
      *(uint *)(param_3 + 0x38) = uVar35 ^ 1;
    }
  }
  else {
LAB_1097050f8:
    if ((uVar35 & 0xfffffffe) == 4) goto LAB_109705104;
    if ((uVar35 != 6) && ((uVar35 & 0xfffffffe) == 6)) goto LAB_109705124;
  }
  if ((*(long *)(*(long *)(param_1 + 0x80) + 0x20) != 0) &&
     (uVar49 = param_3, FUN_1096f53f4(param_3,param_2,&UNK_10f57ec69), (int)uVar49 != 0)) {
    (**(code **)(*(long *)(param_1 + 0x80) + 0x20))(uVar48,param_3,param_2);
    FUN_1096f53f4(param_3,param_2,&UNK_10f57ec7f);
  }
  uVar40 = *(uint *)(param_3 + 0x60);
  uVar49 = (ulong)uVar40;
  puVar53 = *(uint **)(param_3 + 0x70);
  if (((uVar5 & 0xfffffffd) == 5) && (uVar40 != 0)) {
    lVar52 = *(long *)(param_3 + 0x10);
    uVar35 = *(uint *)(param_1 + 0xfc);
    puVar61 = puVar53;
    uVar36 = uVar49;
    do {
      lVar47 = lVar52;
      (**(code **)(lVar52 + 0x30))(lVar52,*puVar61,*(undefined8 *)(lVar52 + 0x70));
      if ((uint)lVar47 == *puVar61) {
LAB_1097052f0:
        puVar61[1] = puVar61[1] | uVar35;
      }
      else {
        uStack_218._0_4_ = 0;
        lVar41 = *(long *)(*(long *)(param_2 + 0x90) + 0x10);
        if (lVar41 == 0) {
          uVar32 = 0;
        }
        else {
          uVar32 = *(undefined8 *)(lVar41 + 0x10);
        }
        lVar41 = param_2;
        (**(code **)(*(long *)(param_2 + 0x90) + 0x30))
                  (param_2,*(undefined8 *)(param_2 + 0x98),lVar47,&uStack_218,uVar32);
        if ((int)lVar41 == 0) goto LAB_1097052f0;
        *puVar61 = (uint)lVar47;
      }
      puVar61 = puVar61 + 5;
      uVar36 = uVar36 - 1;
    } while (uVar36 != 0);
  }
  if ((((uVar5 & 0xfffffffe) == 6) && ((*(ushort *)(param_1 + 0x104) >> 2 & 1) == 0)) &&
     (uVar40 != 0)) {
    do {
      uVar40 = *puVar53;
      uVar35 = uVar40 >> 8;
      if (uVar35 < 0xfe) {
        if (uVar35 == 0x20) {
          if ((int)uVar40 < 0x2025) {
            if (uVar40 == 0x2013) {
              uVar35 = 0xfe32;
            }
            else {
              if (uVar40 != 0x2014) goto LAB_10970555c;
              uVar35 = 0xfe31;
            }
          }
          else if (uVar40 == 0x2025) {
            uVar35 = 0xfe30;
          }
          else {
            if (uVar40 != 0x2026) goto LAB_10970555c;
            uVar35 = 0xfe19;
          }
        }
        else {
          uVar34 = uVar40 - 0x3001;
          if ((uVar35 != 0x30 || 0x16 < uVar34) || ((0x79ff83U >> (ulong)(uVar34 & 0x1f) & 1) == 0))
          goto LAB_10970555c;
          uVar35 = *(uint *)(&UNK_10dff6ce8 + (ulong)uVar34 * 4);
        }
LAB_109705514:
        if (uVar35 != uVar40) {
          uStack_218._0_4_ = 0;
          lVar52 = *(long *)(*(long *)(param_2 + 0x90) + 0x10);
          if (lVar52 == 0) {
            uVar32 = 0;
          }
          else {
            uVar32 = *(undefined8 *)(lVar52 + 0x10);
          }
          lVar52 = param_2;
          (**(code **)(*(long *)(param_2 + 0x90) + 0x30))
                    (param_2,*(undefined8 *)(param_2 + 0x98),uVar35,&uStack_218,uVar32);
          if ((int)lVar52 != 0) {
            *puVar53 = uVar35;
          }
        }
      }
      else if (uVar35 == 0xfe) {
        if (uVar40 == 0xfe4f) {
          uVar35 = 0xfe34;
          goto LAB_109705514;
        }
      }
      else if (uVar35 == 0xff) {
        if ((int)uVar40 < 0xff1f) {
          if ((int)uVar40 < 0xff0c) {
            if (uVar40 == 0xff01) {
              uVar35 = 0xfe15;
            }
            else if (uVar40 == 0xff08) {
              uVar35 = 0xfe35;
            }
            else {
              if (uVar40 != 0xff09) goto LAB_10970555c;
              uVar35 = 0xfe36;
            }
          }
          else if (uVar40 == 0xff0c) {
            uVar35 = 0xfe10;
          }
          else if (uVar40 == 0xff1a) {
            uVar35 = 0xfe13;
          }
          else {
            if (uVar40 != 0xff1b) goto LAB_10970555c;
            uVar35 = 0xfe14;
          }
        }
        else if ((int)uVar40 < 0xff3f) {
          if (uVar40 == 0xff1f) {
            uVar35 = 0xfe16;
          }
          else if (uVar40 == 0xff3b) {
            uVar35 = 0xfe47;
          }
          else {
            if (uVar40 != 0xff3d) goto LAB_10970555c;
            uVar35 = 0xfe48;
          }
        }
        else if (uVar40 == 0xff3f) {
          uVar35 = 0xfe33;
        }
        else if (uVar40 == 0xff5b) {
          uVar35 = 0xfe37;
        }
        else {
          if (uVar40 != 0xff5d) goto LAB_10970555c;
          uVar35 = 0xfe38;
        }
        goto LAB_109705514;
      }
LAB_10970555c:
      puVar53 = puVar53 + 5;
      uVar49 = uVar49 - 1;
    } while (uVar49 != 0);
  }
  *(byte *)(param_3 + 0xb8) = *(byte *)(param_3 + 0xb8) | 0xf;
  uVar40 = *(uint *)(param_3 + 0x60);
  if (uVar40 != 0) {
    uVar35 = 0;
    lVar52 = *(long *)(param_1 + 0x80);
    uVar34 = 2;
    if (*(uint *)(lVar52 + 0x54) != 4) {
      uVar34 = *(uint *)(lVar52 + 0x54);
    }
    uStack_210 = (undefined4)param_3;
    uStack_20c = (undefined4)(param_3 >> 0x20);
    uStack_200 = *(undefined8 *)(param_3 + 0x10);
    uStack_208._0_4_ = (undefined4)param_2;
    uStack_208._4_4_ = (undefined4)((ulong)param_2 >> 0x20);
    uStack_1f8 = FUN_1097045a8;
    if (*(code **)(lVar52 + 0x30) != (code *)0x0) {
      uStack_1f8 = *(code **)(lVar52 + 0x30);
    }
    pcStack_1f0 = (code *)0x1097045d8;
    if (*(code **)(lVar52 + 0x38) != (code *)0x0) {
      pcStack_1f0 = *(code **)(lVar52 + 0x38);
    }
    *(undefined2 *)(param_3 + 0x5a) = 1;
    *(undefined4 *)(param_3 + 100) = 0;
    *(undefined8 *)(param_3 + 0x78) = *(undefined8 *)(param_3 + 0x70);
    *(undefined4 *)(param_3 + 0x5c) = 0;
    bVar19 = true;
    uStack_218 = uVar48;
LAB_10970560c:
    uVar51 = uVar40;
    if (uVar40 <= uVar35 + 1) {
      uVar51 = uVar35 + 1;
    }
    lVar52 = (ulong)uVar35 * 0x14 + 0x24;
    lVar47 = (ulong)(uVar51 - 1) - (ulong)uVar35;
    iVar21 = 1;
    do {
      if (lVar47 == 0) goto LAB_109705658;
      puVar54 = (ushort *)(*(long *)(param_3 + 0x70) + lVar52);
      iVar21 = iVar21 + -1;
      lVar52 = lVar52 + 0x14;
      lVar47 = lVar47 + -1;
    } while ((1 << (ulong)(*puVar54 & 0x1f) & 0x1c00U) == 0);
    uVar51 = uVar35 - iVar21;
LAB_109705658:
    if ((uVar34 & 0xfffffffd) == 1) {
LAB_1097056c8:
      while ((uVar35 < uVar51 && (*(char *)(param_3 + 0x58) == '\x01'))) {
        FUN_109704618(&uStack_218,(uVar34 & 0xfffffffd) != 1);
        uVar35 = *(uint *)(param_3 + 0x5c);
      }
      if ((uVar35 == uVar40) || (*(char *)(param_3 + 0x58) != '\x01')) goto LAB_109705a88;
      uVar51 = uVar40;
      if (uVar40 <= uVar35 + 1) {
        uVar51 = uVar35 + 1;
      }
      do {
        uVar35 = uVar35 + 1;
        uVar39 = uVar51;
        if (uVar40 <= uVar35) break;
        uVar39 = uVar35;
      } while ((1 << (ulong)(*(ushort *)(*(long *)(param_3 + 0x70) + (ulong)uVar35 * 0x14 + 0x10) &
                            0x1f) & 0x1c00U) != 0);
      lVar52 = CONCAT44(uStack_20c,uStack_210);
      uVar35 = *(uint *)(lVar52 + 0x5c);
      iVar21 = uVar39 - uVar35;
      if (uVar35 <= uVar39 && iVar21 != 0) {
        if ((*(byte *)(lVar52 + 0x58) & 1) != 0) {
          puVar53 = (uint *)(*(long *)(lVar52 + 0x70) + (ulong)uVar35 * 0x14);
          do {
            if ((*puVar53 >> 4 == 0xfe0) || (0xffffff0f < *puVar53 - 0xe01f0)) {
              lVar47 = CONCAT44(uStack_208._4_4_,(undefined4)uStack_208);
              goto joined_r0x0001097057dc;
            }
            iVar21 = iVar21 + -1;
            puVar53 = puVar53 + 5;
          } while (iVar21 != 0);
        }
        do {
          if (*(char *)(lVar52 + 0x58) != '\x01') break;
          FUN_109704618(&uStack_218,uVar34 == 0);
        } while (*(uint *)(lVar52 + 0x5c) < uVar39);
      }
      goto LAB_1097057b4;
    }
    lVar52 = *(long *)(*(long *)(param_2 + 0x90) + 0x10);
    if (lVar52 == 0) {
      uVar32 = 0;
    }
    else {
      uVar32 = *(undefined8 *)(lVar52 + 0x18);
    }
    lVar47 = *(long *)(param_3 + 0x70) + (ulong)uVar35 * 0x14;
    lVar52 = param_2;
    (**(code **)(*(long *)(param_2 + 0x90) + 0x38))
              (param_2,*(undefined8 *)(param_2 + 0x98),uVar51 - uVar35,lVar47,0x14,lVar47 + 0xc,0x14
               ,uVar32);
    uVar49 = param_3;
    func_0x0001096f638c(param_3,lVar52);
    if ((int)uVar49 != 0) {
      uVar35 = *(uint *)(param_3 + 0x5c);
      goto LAB_1097056c8;
    }
LAB_109705a88:
    func_0x0001096f6314(param_3);
    if (!bVar19) goto LAB_109705a9c;
    bVar19 = true;
    goto LAB_109705bc0;
  }
  goto LAB_109705dfc;
joined_r0x0001097057dc:
  if ((uVar39 - 1 <= uVar35) || (*(char *)(lVar52 + 0x58) != '\x01')) goto LAB_109705a14;
  lVar41 = *(long *)(lVar52 + 0x70);
  uVar51 = *(uint *)(lVar41 + (ulong)(uVar35 + 1) * 0x14);
  uVar6 = *(undefined4 *)(lVar41 + (ulong)uVar35 * 0x14);
  puVar37 = (undefined4 *)(lVar41 + (ulong)uVar35 * 0x14 + 0xc);
  *puVar37 = 0;
  lVar41 = *(long *)(lVar47 + 0x90);
  lVar44 = *(long *)(lVar41 + 0x10);
  if ((uVar51 >> 4 == 0xfe0) || (0xffffff0f < uVar51 - 0xe01f0)) {
    if (lVar44 == 0) {
      uVar32 = 0;
    }
    else {
      uVar32 = *(undefined8 *)(lVar44 + 0x20);
    }
    lVar44 = lVar47;
    (**(code **)(lVar41 + 0x40))(lVar47,*(undefined8 *)(lVar47 + 0x98),uVar6,uVar51,puVar37,uVar32);
    if ((int)lVar44 == 0) {
      uVar6 = *(undefined4 *)(*(long *)(lVar52 + 0x70) + (ulong)*(uint *)(lVar52 + 0x5c) * 0x14);
      puVar37 = (undefined4 *)
                (*(long *)(lVar52 + 0x70) + (ulong)*(uint *)(lVar52 + 0x5c) * 0x14 + 0xc);
      *puVar37 = 0;
      lVar41 = *(long *)(*(long *)(lVar47 + 0x90) + 0x10);
      if (lVar41 == 0) {
        uVar32 = 0;
      }
      else {
        uVar32 = *(undefined8 *)(lVar41 + 0x10);
      }
      (**(code **)(*(long *)(lVar47 + 0x90) + 0x30))
                (lVar47,*(undefined8 *)(lVar47 + 0x98),uVar6,puVar37,uVar32);
      FUN_109704924(lVar52);
      *(uint *)(lVar52 + 0xc0) = *(uint *)(lVar52 + 0xc0) | 0x80;
      lVar41 = *(long *)(lVar52 + 0x70) + (ulong)*(uint *)(lVar52 + 0x5c) * 0x14;
      *(ushort *)(lVar41 + 0x10) = *(ushort *)(lVar41 + 0x10) & 0xe0 | 0x401;
      if (*(int *)(lVar52 + 0x2c) != -1) {
        lVar41 = *(long *)(lVar52 + 0x70) + (ulong)*(uint *)(lVar52 + 0x5c) * 0x14;
        *(ushort *)(lVar41 + 0x10) = *(ushort *)(lVar41 + 0x10) & 0xffdf;
      }
      uVar6 = *(undefined4 *)(*(long *)(lVar52 + 0x70) + (ulong)*(uint *)(lVar52 + 0x5c) * 0x14);
      puVar37 = (undefined4 *)
                (*(long *)(lVar52 + 0x70) + (ulong)*(uint *)(lVar52 + 0x5c) * 0x14 + 0xc);
      *puVar37 = 0;
      lVar41 = *(long *)(*(long *)(lVar47 + 0x90) + 0x10);
      if (lVar41 == 0) {
        uVar32 = 0;
      }
      else {
        uVar32 = *(undefined8 *)(lVar41 + 0x10);
      }
      (**(code **)(*(long *)(lVar47 + 0x90) + 0x30))
                (lVar47,*(undefined8 *)(lVar47 + 0x98),uVar6,puVar37,uVar32);
      FUN_109704924(lVar52);
    }
    else {
      puStack_c8 = (undefined8 *)
                   CONCAT44(puStack_c8._4_4_,
                            *(undefined4 *)
                             (*(long *)(lVar52 + 0x70) + (ulong)*(uint *)(lVar52 + 0x5c) * 0x14));
      FUN_109730ba4(lVar52,2,1,&puStack_c8);
    }
    uVar35 = *(uint *)(lVar52 + 0x5c);
    while ((uVar35 < uVar39 && (*(char *)(lVar52 + 0x58) == '\x01'))) {
      puVar53 = (uint *)(*(long *)(lVar52 + 0x70) + (ulong)uVar35 * 0x14);
      uVar51 = *puVar53;
      if ((uVar51 >> 4 != 0xfe0) && (uVar51 - 0xe01f0 < 0xffffff10)) break;
      puVar53 = puVar53 + 3;
      *puVar53 = 0;
      lVar41 = *(long *)(*(long *)(lVar47 + 0x90) + 0x10);
      if (lVar41 == 0) {
        uVar32 = 0;
      }
      else {
        uVar32 = *(undefined8 *)(lVar41 + 0x10);
      }
      (**(code **)(*(long *)(lVar47 + 0x90) + 0x30))
                (lVar47,*(undefined8 *)(lVar47 + 0x98),uVar51,puVar53,uVar32);
      FUN_109704924(lVar52);
      uVar35 = *(uint *)(lVar52 + 0x5c);
    }
  }
  else {
    if (lVar44 == 0) {
      uVar32 = 0;
    }
    else {
      uVar32 = *(undefined8 *)(lVar44 + 0x10);
    }
    (**(code **)(lVar41 + 0x30))(lVar47,*(undefined8 *)(lVar47 + 0x98),uVar6,puVar37,uVar32);
    FUN_109704924(lVar52);
    uVar35 = *(uint *)(lVar52 + 0x5c);
  }
  goto joined_r0x0001097057dc;
LAB_109705a14:
  if (uVar35 < uVar39) {
    uVar6 = *(undefined4 *)(*(long *)(lVar52 + 0x70) + (ulong)uVar35 * 0x14);
    puVar37 = (undefined4 *)(*(long *)(lVar52 + 0x70) + (ulong)uVar35 * 0x14 + 0xc);
    *puVar37 = 0;
    lVar41 = *(long *)(*(long *)(lVar47 + 0x90) + 0x10);
    if (lVar41 == 0) {
      uVar32 = 0;
    }
    else {
      uVar32 = *(undefined8 *)(lVar41 + 0x10);
    }
    (**(code **)(*(long *)(lVar47 + 0x90) + 0x30))
              (lVar47,*(undefined8 *)(lVar47 + 0x98),uVar6,puVar37,uVar32);
    FUN_109704924(lVar52);
  }
LAB_1097057b4:
  uVar35 = *(uint *)(param_3 + 0x5c);
  if ((uVar40 <= uVar35) || (bVar19 = false, (*(byte *)(param_3 + 0x58) & 1) == 0))
  goto LAB_109705a74;
  goto LAB_10970560c;
code_r0x000109707bc0:
  if ((((byte)puVar24[1] >> 6 & 1) == 0) ||
     (iVar59 = *(int *)(pcVar38 + 200), *(int *)(pcVar38 + 200) = iVar59 + -1, uVar33 = uVar50,
     iVar59 < 1)) {
LAB_109707bdc:
    FUN_109704924(pcVar38);
    if (pcVar38[0x58] != (code)0x1) goto LAB_1097080c4;
    uVar57 = (ulong)*(uint *)(pcVar38 + 0x5c);
    uVar33 = uVar50;
  }
  goto LAB_109707630;
code_r0x000109708070:
  if ((((byte)puVar24[1] >> 6 & 1) == 0) ||
     (iVar59 = *(int *)(pcVar38 + 200), *(int *)(pcVar38 + 200) = iVar59 + -1, uVar33 = uVar50,
     iVar59 < 1)) {
LAB_10970808c:
    FUN_109704924(pcVar38);
    if (pcVar38[0x58] != (code)0x1) goto LAB_1097080c4;
    uVar57 = (ulong)*(uint *)(pcVar38 + 0x5c);
    uVar33 = uVar50;
  }
  goto LAB_109707c6c;
LAB_109705a74:
  func_0x0001096f6314(param_3);
LAB_109705a9c:
  uVar49 = param_3;
  FUN_1096f53f4(param_3,param_2,&UNK_10f57eb07);
  if ((int)uVar49 != 0) {
    uVar40 = *(uint *)(param_3 + 0x60);
    if (uVar40 != 0) {
      uVar49 = 0;
      lVar52 = *(long *)(param_3 + 0x70);
      do {
        uVar35 = (uint)*(ushort *)(lVar52 + uVar49 * 0x14 + 0x10);
        uVar36 = uVar49;
        if (0xff < uVar35 && (1 << (ulong)(uVar35 & 0x1f) & 0x1c00U) != 0) {
          iVar21 = (int)uVar49;
          uVar35 = uVar40;
          if (uVar40 <= iVar21 + 1U) {
            uVar35 = iVar21 + 1;
          }
          lVar47 = (uVar35 - 1) - uVar49;
          puVar54 = (ushort *)(lVar52 + 0x24 + uVar49 * 0x14);
          uVar57 = uVar49;
          do {
            uVar36 = (ulong)uVar35;
            if (lVar47 == 0) break;
            uVar33 = *puVar54;
            uVar36 = (ulong)((int)uVar57 + 1);
            lVar47 = lVar47 + -1;
            puVar54 = puVar54 + 10;
            uVar57 = uVar36;
          } while (0xff < uVar33 && (1 << (ulong)(uVar33 & 0x1f) & 0x1c00U) != 0);
          if ((uint)((int)uVar36 - iVar21) < 0x21) {
            FUN_1096f7a40(param_3,uVar49,uVar36,FUN_1097048e8);
            pcVar38 = *(code **)(*(long *)(param_1 + 0x80) + 0x48);
            if (pcVar38 != (code *)0x0) {
              (*pcVar38)(uVar48,param_3,uVar49,uVar36);
            }
          }
        }
        uVar35 = (int)uVar36 + 1;
        uVar49 = (ulong)uVar35;
      } while (uVar35 < uVar40);
    }
    FUN_1096f53f4(param_3,param_2,&UNK_10f57eb15);
  }
  bVar19 = false;
LAB_109705bc0:
  if (((*(byte *)(param_3 + 0xc0) >> 4 & 1) != 0) && (2 < *(uint *)(param_3 + 0x60))) {
    puVar54 = (ushort *)(*(long *)(param_3 + 0x70) + 0x24);
    lVar52 = (ulong)(*(uint *)(param_3 + 0x60) - 1) - 1;
    do {
      if ((*(int *)(puVar54 + -8) == 0x34f) &&
         ((uVar33 = puVar54[10], uVar33 < 0x100 || (1 << (ulong)(uVar33 & 0x1f) & 0x1c00U) == 0 ||
          (puVar54[-10] >> 8 <= uVar33 >> 8 || (1 << (ulong)(puVar54[-10] & 0x1f) & 0x1c00U) == 0)))
         ) {
        *puVar54 = *puVar54 & 0xffbf;
      }
      puVar54 = puVar54 + 10;
      lVar52 = lVar52 + -1;
    } while (lVar52 != 0);
  }
  if ((!bVar19) && (*(char *)(param_3 + 0x58) == '\x01' && (uVar34 & 0xfffffffe) == 2)) {
    *(undefined2 *)(param_3 + 0x5a) = 1;
    *(undefined4 *)(param_3 + 0x5c) = 0;
    *(undefined4 *)(param_3 + 100) = 0;
    *(undefined8 *)(param_3 + 0x78) = *(undefined8 *)(param_3 + 0x70);
    uVar40 = *(uint *)(param_3 + 0x60);
    FUN_109704924(param_3);
    uVar49 = (ulong)*(uint *)(param_3 + 0x5c);
    if (uVar49 < uVar40) {
      uVar36 = 0;
      do {
        puVar37 = (undefined4 *)(*(long *)(param_3 + 0x70) + uVar49 * 0x14);
        uVar33 = *(ushort *)(puVar37 + 4);
        if ((1 << (ulong)(uVar33 & 0x1f) & 0x1c00U) == 0) {
LAB_109705da8:
          uVar49 = param_3;
          FUN_109704924();
          if ((int)uVar49 == 0) break;
          uVar34 = *(int *)(param_3 + 100) - 1;
          uVar35 = 0;
          if (*(int *)(param_3 + 100) != 0) {
            uVar35 = uVar34;
          }
          uVar33 = *(ushort *)(*(long *)(param_3 + 0x78) + (ulong)uVar35 * 0x14 + 0x10);
          if (0xff < uVar33 && (1 << (ulong)(uVar33 & 0x1f) & 0x1c00U) != 0) {
            uVar34 = (uint)uVar36;
          }
          uVar36 = (ulong)uVar34;
        }
        else {
          iVar21 = *(int *)(param_3 + 100);
          if ((uint)uVar36 != iVar21 - 1U) {
            uVar35 = 0;
            if (iVar21 != 0) {
              uVar35 = iVar21 - 1;
            }
            uVar50 = *(ushort *)(*(long *)(param_3 + 0x78) + (ulong)uVar35 * 0x14 + 0x10);
            uVar56 = 0;
            if ((1 << (ulong)(uVar50 & 0x1f) & 0x1c00U) != 0) {
              uVar56 = uVar50 >> 8;
            }
            if (uVar33 >> 8 <= uVar56) goto LAB_109705da8;
          }
          puVar45 = &uStack_218;
          (*pcStack_1f0)(puVar45,*(undefined4 *)(*(long *)(param_3 + 0x78) + uVar36 * 0x14),*puVar37
                         ,&puStack_c8);
          if ((int)puVar45 == 0) goto LAB_109705da8;
          uStack_80 = uStack_80 & 0xffffffff;
          lVar52 = *(long *)(*(long *)(param_2 + 0x90) + 0x10);
          if (lVar52 == 0) {
            uVar32 = 0;
          }
          else {
            uVar32 = *(undefined8 *)(lVar52 + 0x10);
          }
          lVar52 = param_2;
          (**(code **)(*(long *)(param_2 + 0x90) + 0x30))
                    (param_2,*(undefined8 *)(param_2 + 0x98),(ulong)puStack_c8 & 0xffffffff,
                     (long)&uStack_80 + 4,uVar32);
          if ((int)lVar52 == 0) goto LAB_109705da8;
          uVar49 = param_3;
          FUN_109704924();
          if ((int)uVar49 == 0) break;
          func_0x0001096f67a8(param_3,uVar36,*(undefined4 *)(param_3 + 100));
          *(int *)(param_3 + 100) = *(int *)(param_3 + 100) + -1;
          puVar37 = (undefined4 *)(*(long *)(param_3 + 0x78) + uVar36 * 0x14);
          *puVar37 = (int)puStack_c8;
          puVar37[3] = uStack_80._4_4_;
          FUN_1097049c0(*(long *)(param_3 + 0x78) + uVar36 * 0x14,param_3);
        }
        uVar49 = (ulong)*(uint *)(param_3 + 0x5c);
      } while (uVar49 < uVar40);
    }
    func_0x0001096f6314(param_3);
  }
LAB_109705dfc:
  if (((*(byte *)(param_3 + 0xc0) & 1) != 0) && ((*(ushort *)(param_1 + 0x104) >> 1 & 1) != 0)) {
    if ((*(uint *)(param_3 + 0x38) & 0xfffffffd) == 4) {
      uVar40 = *(uint *)(param_1 + 0xf0) | *(uint *)(param_1 + 0xf4);
      uVar35 = *(uint *)(param_1 + 0xf8) | *(uint *)(param_1 + 0xf0);
    }
    else {
      uVar40 = *(uint *)(param_1 + 0xf8) | *(uint *)(param_1 + 0xf0);
      uVar35 = *(uint *)(param_1 + 0xf4) | *(uint *)(param_1 + 0xf0);
    }
    uVar34 = *(uint *)(param_3 + 0x60);
    if (uVar34 != 0) {
      uVar49 = 0;
      lVar52 = *(long *)(param_3 + 0x70);
      do {
        uVar51 = (uint)uVar49;
        piVar60 = (int *)(lVar52 + uVar49 * 0x14);
        if (*piVar60 == 0x2044) {
          uVar36 = 0;
          uVar39 = uVar51 + 1;
          uVar57 = (ulong)uVar39;
          puVar54 = (ushort *)(lVar52 + -4 + uVar49 * 0x14);
          do {
            if (uVar49 == uVar36) {
              uVar36 = 0;
              goto LAB_109705ecc;
            }
            uVar33 = *puVar54;
            uVar36 = uVar36 + 1;
            puVar54 = puVar54 + -10;
          } while ((uVar33 & 0x1f) == 0xd);
          uVar36 = (ulong)((uVar51 - (int)uVar36) + 1);
LAB_109705ecc:
          uVar64 = (uint)uVar36;
          if (uVar39 < uVar34) {
            lVar47 = uVar57 * 4 + (ulong)uVar39;
            puVar54 = (ushort *)(lVar52 + 0x10 + lVar47 * 4);
            uVar43 = uVar57;
            do {
              uVar63 = uVar43;
              if ((*puVar54 & 0x1f) != 0xd) break;
              uVar43 = uVar43 + 1;
              puVar54 = puVar54 + 10;
              uVar63 = (ulong)uVar34;
            } while (uVar34 != uVar43);
            uVar62 = (uint)uVar63;
            if ((uVar64 == uVar51) || (uVar62 == uVar39)) {
              if (uVar64 == uVar51) {
                FUN_109730c80(param_3,uVar49,uVar57);
              }
              if (uVar62 == uVar39) goto LAB_109705ffc;
            }
            else {
              FUN_109710ea8(param_3,3,uVar36,uVar63,1,0);
              if (uVar64 < uVar51) {
                lVar41 = uVar49 - uVar36;
                puVar53 = (uint *)(lVar52 + 4 + uVar36 * 0x14);
                do {
                  *puVar53 = *puVar53 | uVar40;
                  lVar41 = lVar41 + -1;
                  puVar53 = puVar53 + 5;
                } while (lVar41 != 0);
              }
              piVar60[1] = piVar60[1] | *(uint *)(param_1 + 0xf0);
              if (uVar39 < uVar62) {
                iVar21 = ~uVar51 + uVar62;
                puVar53 = (uint *)(lVar52 + 4 + lVar47 * 4);
                do {
                  *puVar53 = *puVar53 | uVar35;
                  iVar21 = iVar21 + -1;
                  puVar53 = puVar53 + 5;
                } while (iVar21 != 0);
              }
              uVar51 = uVar62 - 1;
            }
          }
          else {
            if (uVar64 == uVar51) {
              FUN_109730c80(param_3,uVar49,uVar57);
            }
LAB_109705ffc:
            FUN_109730c80(param_3,uVar49,uVar57);
          }
        }
        uVar49 = (ulong)(uVar51 + 1);
      } while (uVar51 + 1 < uVar34);
    }
  }
  pcVar38 = *(code **)(*(long *)(param_1 + 0x80) + 0x40);
  if (pcVar38 != (code *)0x0) {
    (*pcVar38)(uVar48,param_3,param_2);
  }
  if (param_5 != 0) {
    uVar49 = 0;
    do {
      puVar37 = (undefined4 *)(param_4 + uVar49 * 0x10);
      uVar40 = puVar37[2];
      if ((uVar40 != 0) || (puVar37[3] != -1)) {
        uVar35 = *(uint *)(param_1 + 0x9c);
        FUN_109704c48(uVar35,*(undefined8 *)(param_1 + 0xa0),*puVar37,&uStack_218);
        if ((uVar35 != 0) &&
           (uVar36 = (ulong)*(uint *)(param_3 + 0x60), *(uint *)(param_3 + 0x60) != 0)) {
          uVar34 = puVar37[3];
          iVar21 = puVar37[1];
          puVar53 = (uint *)(*(long *)(param_3 + 0x70) + 4);
          do {
            if (uVar40 <= puVar53[1] && puVar53[1] < uVar34) {
              *puVar53 = *puVar53 & ~uVar35 | iVar21 << (ulong)((uint)uStack_218 & 0x1f) & uVar35;
            }
            puVar53 = puVar53 + 5;
            uVar36 = uVar36 - 1;
          } while (uVar36 != 0);
        }
      }
      uVar49 = uVar49 + 1;
    } while (uVar49 != param_5);
  }
  uVar49 = (ulong)*(uint *)(param_3 + 0x60);
  if (*(uint *)(param_3 + 0x60) != 0) {
    puVar37 = *(undefined4 **)(param_3 + 0x70);
    do {
      *puVar37 = puVar37[3];
      uVar49 = uVar49 - 1;
      puVar37 = puVar37 + 5;
    } while (uVar49 != 0);
  }
  *(undefined4 *)(param_3 + 0x30) = 2;
  *(byte *)(param_3 + 0xb8) = *(byte *)(param_3 + 0xb8) & 0xf0 | 7;
  lVar52 = *(long *)(param_2 + 0x20) + 0x118;
  FUN_10972ad34();
  uVar49 = (ulong)*(uint *)(param_3 + 0x60);
  if (*(uint *)(param_3 + 0x60) != 0) {
    puVar42 = (undefined1 *)(*(long *)(param_3 + 0x70) + 0xe);
    do {
      lVar47 = lVar52;
      FUN_10972ac88(lVar52,*(undefined4 *)(puVar42 + -0xe));
      *(short *)(puVar42 + -2) = (short)lVar47;
      *puVar42 = 0;
      uVar49 = uVar49 - 1;
      puVar42 = puVar42 + 0x14;
    } while (uVar49 != 0);
  }
  uVar40 = (uint)*(ushort *)(param_1 + 0x104);
  if (((*(ushort *)(param_1 + 0x104) >> 5 & 1) != 0) &&
     (uVar49 = (ulong)*(uint *)(param_3 + 0x60), *(uint *)(param_3 + 0x60) != 0)) {
    puVar54 = (ushort *)(*(long *)(param_3 + 0x70) + 0xc);
    do {
      if ((puVar54[2] & 0x1f) == 0xc) {
        if ((puVar54[2] >> 5 & 1) == 0) {
          uVar33 = 8;
        }
        else {
          uVar33 = 2;
          if ((*puVar54 & 0x10) != 0) {
            uVar33 = 8;
          }
        }
      }
      else {
        uVar33 = 2;
      }
      *puVar54 = uVar33;
      uVar49 = uVar49 - 1;
      puVar54 = puVar54 + 10;
    } while (uVar49 != 0);
    uVar40 = (uint)*(ushort *)(param_1 + 0x104);
  }
  if ((uVar40 >> 0xb & 1) == 0) {
    puVar22 = (ulong *)(*(long *)(param_2 + 0x20) + 0x120);
    FUN_10972c6ec();
    if (*(long *)(param_3 + 0xd0) != 0) {
      uVar49 = param_3;
      FUN_1096f53f4(param_3,param_2,&UNK_10f57ea6f);
      if ((int)uVar49 == 0) goto LAB_109706744;
    }
    FUN_109734580(&uStack_218,0,param_2,param_3,*puVar22);
    pcStack_130 = FUN_10974b5c4;
    uVar49 = (ulong)*(uint *)(param_1 + 0xcc);
    if (*(uint *)(param_1 + 0xcc) != 0) {
      uVar57 = 0;
      uVar36 = 0;
      do {
        if (uVar57 < uVar49) {
          puVar53 = (uint *)(*(long *)(param_1 + 0xd0) + uVar57 * 0x10);
        }
        else {
          puVar53 = (uint *)&UNK_10dfe4888;
        }
        if (uVar36 < *puVar53) {
          do {
            if (uVar36 < *(uint *)(param_1 + 0xac)) {
              puVar54 = (ushort *)(*(long *)(param_1 + 0xb0) + uVar36 * 0xc);
            }
            else {
              puVar54 = (ushort *)&UNK_10dfe4888;
            }
            uVar33 = *puVar54;
            puVar23 = puVar22;
            FUN_109701398(puVar22,uVar33,param_3);
            if (puVar23 != (ulong *)0x0) {
              if (*(long *)(param_3 + 0xd0) != 0) {
                uVar49 = param_3;
                FUN_1096f53f4(param_3,param_2,&UNK_10f57f528);
                if ((int)uVar49 == 0) goto LAB_109706538;
              }
              if (((((ulong)puStack_108 & *puVar23) == 0) ||
                  (((ulong)pbStack_100 & puVar23[1]) == 0)) ||
                 (((ulong)pbStack_f8 & puVar23[2]) == 0)) {
                if (*(long *)(param_3 + 0xd0) != 0) {
                  FUN_1096f53f4(param_3,param_2,&UNK_10f57f54b);
                  goto LAB_1097064f8;
                }
              }
              else {
                uStack_e8 = (uint)uVar33;
                uStack_ec = *(uint *)(puVar54 + 2);
                uStack_d0 = 0xffffffff;
                bStack_da = (byte)puVar54[1] >> 1 & 1;
                bStack_db = (byte)puVar54[1] & 1;
                bStack_d8 = (byte)puVar54[1] >> 2 & 1;
                bStack_d9 = (byte)puVar54[1] >> 3 & 1;
                puVar54 = (ushort *)&UNK_10dfe4888;
                if ((ushort *)*puVar22 != (ushort *)0x0) {
                  puVar54 = (ushort *)*puVar22;
                }
                puVar24 = (ushort *)&UNK_10dfe4888;
                if (3 < *(uint *)(puVar54 + 0xc)) {
                  puVar24 = *(ushort **)(puVar54 + 8);
                }
                func_0x00010972a6f4(puVar24,uVar33);
                uVar35 = uStack_ec;
                uVar49 = uStack_178;
                uVar40 = *(uint *)(uStack_178 + 0x60);
                if ((uVar40 != 0) && (uStack_ec != 0)) {
                  uVar33 = puVar24[2];
                  bVar7 = *(byte *)((long)puVar24 + 5);
                  sVar14 = CONCAT11((byte)uVar33,bVar7);
                  puVar54 = puVar24;
                  FUN_10974b6e0();
                  pcVar38 = uStack_1f8;
                  puStack_1c8 = &uStack_218;
                  lStack_1e8 = 0;
                  lStack_1e0 = 0;
                  pcStack_1f0 = (code *)0x0;
                  bVar19 = (int)pbStack_190 == 1;
                  uStack_1f8._0_2_ = CONCAT11(bStack_da,bVar19);
                  uStack_1f8._0_3_ = CONCAT12(bVar19,(undefined2)uStack_1f8);
                  uStack_1c0 = SUB84(puVar54,0);
                  uStack_200 = CONCAT44(uVar35,uStack_1c0);
                  bVar11 = (int)pbStack_190 == 0 & bStack_d9;
                  uStack_1f8._0_4_ = CONCAT13(bVar11,(undefined3)uStack_1f8);
                  uStack_1f8._5_3_ = SUB83(pcVar38,5);
                  uStack_1f8._0_5_ = (uint5)(uint)uStack_1f8;
                  puStack_198 = (undefined8 *)CONCAT44(puStack_198._4_4_,uVar40);
                  pbStack_1b0 = (byte *)0x0;
                  uStack_1a8 = 0;
                  lStack_1a0 = 0;
                  bVar8 = bStack_db;
                  if (bVar19) {
                    bVar8 = 1;
                  }
                  uStack_1b8._0_2_ = CONCAT11(1,bVar8);
                  uStack_1b8._0_3_ = CONCAT12(bVar19,(undefined2)uStack_1b8);
                  uStack_1bc = 0xffffffff;
                  uStack_1b8 = CONCAT13(!bVar19 & bVar11,(undefined3)uStack_1b8);
                  uStack_1b4 = 0;
                  uVar56 = *puVar24 >> 8 | *puVar24 << 8;
                  uVar43 = uVar49;
                  uStack_1d8 = uVar40;
                  uStack_e4 = uStack_1c0;
                  uStack_208 = puStack_1c8;
                  if (uVar56 == 7) {
                    if (*(char *)((long)puVar24 + 5) == '\0' && (char)puVar24[2] == '\0') {
                      puVar54 = (ushort *)&UNK_10dfe4888;
                    }
                    else {
                      puVar54 = puVar24 + 3;
                    }
                    uVar40 = (uint)(*puVar54 >> 8) | (*puVar54 & 0xff00ff) << 8;
                    puVar54 = (ushort *)&UNK_10dfe4888;
                    if (uVar40 != 0) {
                      puVar54 = (ushort *)((long)puVar24 + (ulong)uVar40);
                    }
                    if ((ushort)(*puVar54 >> 8 | *puVar54 << 8) == 1) {
                      uVar56 = puVar54[1] >> 8 | puVar54[1] << 8;
                      uVar43 = uStack_178;
                      goto joined_r0x0001097065a8;
                    }
                  }
                  else {
joined_r0x0001097065a8:
                    if (uVar56 == 8) {
                      *(int *)(uVar49 + 0x5c) = *(int *)(uVar49 + 0x60) + -1;
                      uVar40 = *(uint *)(uVar43 + 0x5c);
                      do {
                        puVar37 = (undefined4 *)(*(long *)(uVar43 + 0x70) + (ulong)uVar40 * 0x14);
                        puVar25 = puVar23;
                        FUN_10972a9e4(puVar23,*puVar37);
                        if (((int)puVar25 != 0) && ((uStack_ec & puVar37[1]) != 0)) {
                          puVar45 = &uStack_218;
                          FUN_109732a58(puVar45,puVar37,uStack_e4);
                          iVar21 = 0;
                          if (sVar14 != 0) {
                            iVar21 = (int)puVar45;
                          }
                          puVar25 = puVar23 + 4;
                          iVar59 = (uint)(byte)uVar33 * 0x100 + (uint)bVar7;
                          if (iVar21 == 1) {
                            do {
                              puVar26 = puVar25;
                              FUN_10974b720(puVar25,&uStack_218);
                              iVar21 = (int)puVar26;
                              if (iVar59 + -1 == 0) {
                                iVar21 = 1;
                              }
                              puVar25 = puVar25 + 7;
                              iVar59 = iVar59 + -1;
                            } while (iVar21 != 1);
                          }
                        }
                        uVar40 = *(int *)(uVar43 + 0x5c) - 1;
                        *(uint *)(uVar43 + 0x5c) = uVar40;
                      } while (-1 < (int)uVar40);
                      goto LAB_1097064f8;
                    }
                  }
                  *(undefined2 *)(uVar49 + 0x5a) = 1;
                  *(undefined4 *)(uVar49 + 100) = 0;
                  *(undefined8 *)(uVar49 + 0x78) = *(undefined8 *)(uVar49 + 0x70);
                  *(undefined4 *)(uVar49 + 0x5c) = 0;
                  FUN_10974dae8(&uStack_218,puVar23,sVar14);
                  func_0x0001096f6314(uVar49);
                }
LAB_1097064f8:
                if (*(long *)(param_3 + 0xd0) != 0) {
                  FUN_1096f53f4(param_3,param_2,&UNK_10f57f589);
                }
              }
            }
LAB_109706538:
            uVar36 = uVar36 + 1;
          } while (uVar36 < *puVar53);
        }
        if (*(code **)(puVar53 + 2) != (code *)0x0) {
          uVar49 = uVar48;
          (**(code **)(puVar53 + 2))(uVar48,param_2);
          if ((int)uVar49 != 0) {
            puStack_c8 = (undefined8 *)0x0;
            pbStack_c0 = (byte *)0x0;
            pbStack_b8 = (byte *)0x0;
            FUN_1097347a8(&puStack_c8,*(undefined8 *)(param_3 + 0x70),
                          *(undefined4 *)(param_3 + 0x60));
            pbStack_100 = pbStack_c0;
            puStack_108 = puStack_c8;
            pbStack_f8 = pbStack_b8;
          }
        }
        uVar57 = uVar57 + 1;
        uVar49 = (ulong)*(uint *)(param_1 + 0xcc);
      } while (uVar57 < uVar49);
    }
    _free(uStack_110);
    FUN_109710c0c(&uStack_170);
    if (*(long *)(param_3 + 0xd0) != 0) {
      FUN_1096f53f4(param_3,param_2,&UNK_10f57ea96);
    }
  }
  else {
    FUN_1096f4078(uVar48,param_2,param_3,param_4,param_5);
  }
LAB_109706744:
  if (((*(ushort *)(param_1 + 0x104) ^ 0xffff) & 0x900) == 0) {
    FUN_1096f5484(param_3);
  }
  *(undefined2 *)(param_3 + 0x5a) = 0x100;
  *(undefined4 *)(param_3 + 100) = 0;
  puVar37 = *(undefined4 **)(param_3 + 0x70);
  *(undefined4 **)(param_3 + 0x78) = puVar37;
  uVar40 = *(uint *)(param_3 + 0x60);
  if (uVar40 * 0x14 != 0) {
    _bzero(*(undefined8 *)(param_3 + 0x80));
    uVar40 = *(uint *)(param_3 + 0x60);
    puVar37 = *(undefined4 **)(param_3 + 0x70);
  }
  lVar52 = *(long *)(param_3 + 0x80);
  if ((*(uint *)(param_3 + 0x38) & 0xfffffffe) == 4) {
    lVar47 = *(long *)(*(long *)(param_2 + 0x90) + 0x10);
    if (lVar47 == 0) {
      uVar32 = 0;
    }
    else {
      uVar32 = *(undefined8 *)(lVar47 + 0x38);
    }
    (**(code **)(*(long *)(param_2 + 0x90) + 0x58))
              (param_2,*(undefined8 *)(param_2 + 0x98),uVar40,puVar37,0x14,lVar52,0x14,uVar32);
    lVar47 = param_2;
    do {
      if (*(undefined **)(*(long *)(lVar47 + 0x90) + 0x68) != PTR_DAT_1132e00e0) {
        if (uVar40 != 0) {
          uVar49 = (ulong)uVar40;
          piVar60 = (int *)(lVar52 + 0xc);
          do {
            FUN_1097123f0(param_2,*puVar37,&uStack_218,&puStack_c8);
            piVar60[-1] = piVar60[-1] - (uint)uStack_218;
            *piVar60 = *piVar60 - (int)puStack_c8;
            uVar49 = uVar49 - 1;
            piVar60 = piVar60 + 5;
            puVar37 = puVar37 + 5;
          } while (uVar49 != 0);
        }
        break;
      }
      lVar47 = *(long *)(lVar47 + 0x18);
    } while (lVar47 != 0 && lVar47 != 0x1132e0130);
  }
  else {
    lVar47 = *(long *)(*(long *)(param_2 + 0x90) + 0x10);
    if (lVar47 == 0) {
      uVar32 = 0;
    }
    else {
      uVar32 = *(undefined8 *)(lVar47 + 0x40);
    }
    (**(code **)(*(long *)(param_2 + 0x90) + 0x60))
              (param_2,*(undefined8 *)(param_2 + 0x98),uVar40,puVar37,0x14,lVar52 + 4,0x14,uVar32);
    if (uVar40 != 0) {
      uVar49 = (ulong)uVar40;
      piVar60 = (int *)(lVar52 + 0xc);
      do {
        func_0x0001097124d4(param_2,*puVar37,&uStack_218,&puStack_c8);
        piVar60[-1] = piVar60[-1] - (uint)uStack_218;
        *piVar60 = *piVar60 - (int)puStack_c8;
        uVar49 = uVar49 - 1;
        piVar60 = piVar60 + 5;
        puVar37 = puVar37 + 5;
      } while (uVar49 != 0);
    }
  }
  uVar49 = (ulong)*(uint *)(param_3 + 0x60);
  puVar37 = *(undefined4 **)(param_3 + 0x70);
  lStack_248 = *(long *)(param_3 + 0x80);
  if (((*(byte *)(param_3 + 0xc0) >> 2 & 1) != 0) && (*(uint *)(param_3 + 0x60) != 0)) {
    uVar36 = 0;
    uVar40 = *(uint *)(param_3 + 0x38) & 0xfffffffe;
    uVar57 = uStack_218;
    do {
      uStack_218._4_4_ = (undefined4)(uVar57 >> 0x20);
      piVar60 = puVar37 + uVar36 * 5;
      if (((*(ushort *)(piVar60 + 4) & 0x1f) == 0x1d) && ((*(ushort *)(piVar60 + 3) >> 5 & 1) == 0))
      {
        if ((*(int *)(param_3 + 0x24) != 0) && (*piVar60 == *(int *)(param_3 + 0x24))) {
          if (uVar40 == 4) {
            iVar59 = *(int *)(param_2 + 0x28);
            iVar21 = iVar59 + 3;
            if (-1 < iVar59) {
              iVar21 = iVar59;
            }
            *(int *)(lStack_248 + uVar36 * 0x14) = iVar21 >> 2;
          }
          else {
            iVar59 = *(int *)(param_2 + 0x2c);
            iVar21 = iVar59 + 3;
            if (-1 < iVar59) {
              iVar21 = iVar59;
            }
            *(int *)(lStack_248 + uVar36 * 0x14 + 4) = -(iVar21 >> 2);
          }
        }
        uVar35 = (uint)(*(ushort *)(piVar60 + 4) >> 8);
        if ((*(ushort *)(piVar60 + 4) & 0x1f) != 0x1d) {
          uVar35 = 0;
        }
        if (uVar35 < 0x10) {
          if (uVar35 - 1 < 6) {
LAB_1097069c8:
            if (uVar40 == 4) {
              iVar21 = 0;
              if (uVar35 != 0) {
                iVar21 = (int)(*(int *)(param_2 + 0x28) + (uVar35 >> 1)) / (int)uVar35;
              }
              goto LAB_1097069e0;
            }
            iVar21 = 0;
            if (uVar35 != 0) {
              iVar21 = (int)(*(int *)(param_2 + 0x2c) + (uVar35 >> 1)) / (int)uVar35;
            }
            iVar21 = -iVar21;
LAB_109706a70:
            *(int *)(lStack_248 + uVar36 * 0x14 + 4) = iVar21;
          }
        }
        else if (uVar35 < 0x13) {
          if (uVar35 == 0x10) goto LAB_1097069c8;
          if (uVar35 != 0x11) goto LAB_109706bf0;
          if (uVar40 != 4) {
            auVar12 = SEXT816((long)*(int *)(param_2 + 0x2c) * -4) * SEXT816(0xe38e38e38e38e39);
            iVar21 = auVar12._8_4_ - (auVar12._12_4_ >> 0x1f);
            goto LAB_109706a70;
          }
          auVar12 = SEXT816((long)*(int *)(param_2 + 0x28) << 2) * SEXT816(0xe38e38e38e38e39);
          iVar21 = auVar12._8_4_ - (auVar12._12_4_ >> 0x1f);
LAB_1097069e0:
          *(int *)(lStack_248 + uVar36 * 0x14) = iVar21;
        }
        else if (uVar35 == 0x15) {
          if (uVar40 == 4) {
            *(int *)(lStack_248 + uVar36 * 0x14) = *(int *)(lStack_248 + uVar36 * 0x14) / 2;
          }
          else {
            lVar52 = lStack_248 + uVar36 * 0x14;
            *(int *)(lVar52 + 4) = *(int *)(lVar52 + 4) / 2;
          }
        }
        else if (uVar35 == 0x14) {
          uStack_218._0_4_ = 0;
          lVar52 = *(long *)(*(long *)(param_2 + 0x90) + 0x10);
          if (lVar52 == 0) {
            uVar32 = 0;
          }
          else {
            uVar32 = *(undefined8 *)(lVar52 + 0x10);
          }
          lVar52 = param_2;
          (**(code **)(*(long *)(param_2 + 0x90) + 0x30))
                    (param_2,*(undefined8 *)(param_2 + 0x98),0x2e,&uStack_218,uVar32);
          if ((int)lVar52 == 0) {
            uStack_218._0_4_ = 0;
            lVar52 = *(long *)(*(long *)(param_2 + 0x90) + 0x10);
            if (lVar52 == 0) {
              uVar32 = 0;
            }
            else {
              uVar32 = *(undefined8 *)(lVar52 + 0x10);
            }
            lVar52 = param_2;
            (**(code **)(*(long *)(param_2 + 0x90) + 0x30))
                      (param_2,*(undefined8 *)(param_2 + 0x98),0x2c,&uStack_218,uVar32);
            uVar57 = CONCAT44(uStack_218._4_4_,(uint)uStack_218);
            if ((int)lVar52 == 0) goto LAB_109706bf0;
          }
LAB_109706b80:
          lVar52 = *(long *)(param_2 + 0x90);
          if (uVar40 == 4) {
            lVar47 = param_2;
            (**(code **)(lVar52 + 0x48))();
            *(int *)(lStack_248 + uVar36 * 0x14) = (int)lVar47;
          }
          else {
            if (*(long *)(lVar52 + 0x10) == 0) {
              uVar32 = 0;
            }
            else {
              uVar32 = *(undefined8 *)(*(long *)(lVar52 + 0x10) + 0x30);
            }
            lVar47 = param_2;
            (**(code **)(lVar52 + 0x50))
                      (param_2,*(undefined8 *)(param_2 + 0x98),(uint)uStack_218,uVar32);
            *(int *)(lStack_248 + uVar36 * 0x14 + 4) = (int)lVar47;
          }
          uVar57 = CONCAT44(uStack_218._4_4_,(uint)uStack_218);
        }
        else if (uVar35 == 0x13) {
          iVar21 = 0x30;
          do {
            uStack_218._0_4_ = 0;
            lVar52 = *(long *)(*(long *)(param_2 + 0x90) + 0x10);
            if (lVar52 == 0) {
              uVar32 = 0;
            }
            else {
              uVar32 = *(undefined8 *)(lVar52 + 0x10);
            }
            lVar52 = param_2;
            (**(code **)(*(long *)(param_2 + 0x90) + 0x30))
                      (param_2,*(undefined8 *)(param_2 + 0x98),iVar21,&uStack_218,uVar32);
            if ((int)lVar52 != 0) goto LAB_109706b80;
            iVar21 = iVar21 + 1;
            uVar57 = CONCAT44(uStack_218._4_4_,(uint)uStack_218);
          } while (iVar21 != 0x3a);
        }
      }
LAB_109706bf0:
      uStack_218 = uVar57;
      uVar36 = uVar36 + 1;
      uVar57 = uStack_218;
    } while (uVar36 != uVar49);
    uVar49 = (ulong)*(uint *)(param_3 + 0x60);
    puVar37 = *(undefined4 **)(param_3 + 0x70);
    lStack_248 = *(long *)(param_3 + 0x80);
  }
  lVar52 = param_2;
  if ((*(ushort *)(param_1 + 0x104) >> 7 & 1) == 0) {
    bVar19 = false;
  }
  else {
    bVar19 = (*(uint *)(param_3 + 0x38) & 0xfffffffd) == 4;
  }
  while (uVar40 = (uint)uVar49,
        *(undefined **)(*(long *)(lVar52 + 0x90) + 0x68) == PTR_DAT_1132e00e0) {
    lVar52 = *(long *)(lVar52 + 0x18);
    uVar36 = uVar49;
    uVar35 = uVar40;
    if (lVar52 == 0 || lVar52 == 0x1132e0130) goto joined_r0x000109706c60;
  }
  if (uVar40 == 0) goto LAB_109706cf8;
  uVar36 = uVar49;
  piVar60 = (int *)(lStack_248 + 0xc);
  puVar55 = puVar37;
  do {
    FUN_1097123f0(param_2,*puVar55,&uStack_218,&puStack_c8);
    piVar60[-1] = piVar60[-1] + (uint)uStack_218;
    *piVar60 = *piVar60 + (int)puStack_c8;
    uVar36 = uVar36 - 1;
    piVar60 = piVar60 + 5;
    puVar55 = puVar55 + 5;
  } while (uVar36 != 0);
  uVar36 = (ulong)*(uint *)(param_3 + 0x60);
  uVar35 = *(uint *)(param_3 + 0x60);
joined_r0x000109706c60:
  if (uVar35 != 0) {
    lVar52 = 0;
    do {
      *(undefined1 *)(*(long *)(param_3 + 0x80) + lVar52 + 0x12) = 0;
      *(undefined2 *)(*(long *)(param_3 + 0x80) + lVar52 + 0x10) = 0;
      lVar52 = lVar52 + 0x14;
    } while (uVar36 * 0x14 - lVar52 != 0);
  }
LAB_109706cf8:
  uVar35 = (uint)*(ushort *)(param_1 + 0x104);
  if ((((*(ushort *)(param_1 + 0x104) >> 4 & 1) != 0) &&
      (*(int *)(*(long *)(param_1 + 0x80) + 0x58) == 1)) &&
     (uVar34 = *(uint *)(param_3 + 0x60), uVar34 != 0)) {
    lVar52 = 0;
    lVar47 = *(long *)(param_3 + 0x70);
    do {
      if ((*(ushort *)(lVar47 + 0xc + lVar52) >> 3 & 1) != 0) {
        lVar41 = *(long *)(param_3 + 0x80);
        if (bVar19) {
          puVar45 = (undefined8 *)(lVar41 + lVar52);
          puVar45[1] = CONCAT44((int)((ulong)puVar45[1] >> 0x20) - (int)((ulong)*puVar45 >> 0x20),
                                (int)puVar45[1] - (int)*puVar45);
        }
        *(undefined8 *)(lVar41 + lVar52) = 0;
      }
      lVar52 = lVar52 + 0x14;
    } while ((ulong)uVar34 * 0x14 - lVar52 != 0);
    uVar35 = (uint)*(ushort *)(param_1 + 0x104);
  }
  if ((uVar35 >> 8 & 1) == 0) {
    if ((uVar35 >> 10 & 1) != 0) {
      puVar45 = (undefined8 *)(*(long *)(param_2 + 0x20) + 0x148);
      func_0x000109741a18();
      FUN_1096f3f00(&uStack_218,uVar48,param_2,param_3,*puVar45);
      uVar36 = param_3;
      FUN_1096f53f4(param_3,param_2,&UNK_10f57ea06);
      if ((uVar36 & 1) != 0) {
        lVar52 = *(long *)(param_2 + 0x20);
        plVar3 = (long *)(lVar52 + 0x150);
        puVar31 = (undefined *)*plVar3;
        if ((undefined *)*plVar3 == (undefined *)0x0) {
          while (puVar30 = *(undefined **)(lVar52 + 0x60), puVar31 = &UNK_10dfe4888,
                puVar30 != (undefined *)0x0) {
            FUN_109743208();
            if (puVar30 == (undefined *)0x0) {
              if (*plVar3 == 0) {
                cVar13 = '\x01';
                bVar20 = (bool)ExclusiveMonitorPass(plVar3,0x10);
                if (bVar20) {
                  *plVar3 = (long)&UNK_10dfe4888;
                  cVar13 = ExclusiveMonitorsStatus();
                }
                if (cVar13 == '\0') break;
              }
              else {
                ClearExclusiveLocal();
              }
            }
            else {
              if (*plVar3 == 0) {
                cVar13 = '\x01';
                bVar20 = (bool)ExclusiveMonitorPass(plVar3,0x10);
                if (bVar20) {
                  *plVar3 = (long)puVar30;
                  cVar13 = ExclusiveMonitorsStatus();
                }
                puVar31 = puVar30;
                if (cVar13 == '\0') break;
              }
              else {
                ClearExclusiveLocal();
              }
              if (puVar30 != &UNK_10dfe4888) {
                FUN_1096f5a5c();
              }
            }
            puVar31 = (undefined *)*plVar3;
            if (puVar31 != (undefined *)0x0) break;
          }
        }
        pbStack_1b0 = &UNK_10dfe4888;
        if (0xb < *(uint *)(puVar31 + 0x18)) {
          pbStack_1b0 = *(byte **)(puVar31 + 0x10);
        }
        pbVar28 = &UNK_10dfe4888;
        if ((byte *)*puVar45 != (byte *)0x0) {
          pbVar28 = (byte *)*puVar45;
        }
        pbVar58 = &UNK_10dfe4888;
        if (7 < *(uint *)(pbVar28 + 0x18)) {
          pbVar58 = *(byte **)(pbVar28 + 0x10);
        }
        FUN_109730c80(uStack_1f8,0,0xffffffff);
        if (*(uint *)(uStack_1f8 + 0x60) < 0x20) {
          puStack_c8 = (undefined8 *)0x0;
          pbStack_c0 = (byte *)0x0;
          pbStack_b8 = (byte *)0x0;
          FUN_1097347a8(&puStack_c8,*(undefined8 *)(uStack_1f8 + 0x70));
          pbStack_190 = pbStack_c0;
          puStack_198 = puStack_c8;
          pbStack_188 = pbStack_b8;
        }
        else {
          pbStack_190 = (byte *)0xffffffffffffffff;
          pbStack_188 = (byte *)0xffffffffffffffff;
          puStack_198 = (undefined8 *)0xffffffffffffffff;
        }
        iStack_134 = 0;
        uVar35 = (*(uint *)(pbVar58 + 4) & 0xff00ff00) >> 8 |
                 (*(uint *)(pbVar58 + 4) & 0xff00ff) << 8;
        uVar35 = uVar35 >> 0x10 | uVar35 << 0x10;
        if (uVar35 != 0) {
          uVar36 = 0;
          bVar20 = false;
          pbVar58 = pbVar58 + 8;
          do {
            uVar34 = *(uint *)(uStack_1f8 + 0x38);
            bVar11 = pbVar58[4];
            if (((uVar34 & 0xfffffffe) != 4) != (uint)(int)(char)bVar11 < 0x80000000) {
              pcVar38 = uStack_1f8;
              FUN_1096f53f4(uStack_1f8,uStack_208,&UNK_10f57f506);
              if ((int)pcVar38 != 0) {
                if (bVar20) {
LAB_10970736c:
                  bVar20 = true;
                }
                else {
                  if ((pbVar58[4] >> 6 & 1) != 0) {
                    uVar57 = (ulong)*(uint *)(uStack_1f8 + 0x60);
                    if (*(uint *)(uStack_1f8 + 0x60) != 0) {
                      puVar42 = (undefined1 *)(*(long *)(uStack_1f8 + 0x80) + 0x12);
                      do {
                        *puVar42 = 2;
                        uVar4 = 1;
                        if ((*(uint *)(uStack_1f8 + 0x38) & 0xfffffffd) == 4) {
                          uVar4 = 0xffff;
                        }
                        *(undefined2 *)(puVar42 + -2) = uVar4;
                        puVar42 = puVar42 + 0x14;
                        uVar57 = uVar57 - 1;
                      } while (uVar57 != 0);
                    }
                    goto LAB_10970736c;
                  }
                  bVar20 = false;
                }
                bVar17 = ((uVar34 & 0xfffffffd) == 5) == ((bVar11 & 0x10) == 0);
                if (bVar17) {
                  FUN_1096f7004(uStack_1f8,0,*(undefined4 *)(uStack_1f8 + 0x60));
                }
                puVar22 = (ulong *)(puVar45[2] + uVar36 * 0x30);
                if (*(uint *)((long)puVar45 + 0xc) <= uVar36) {
                  puVar22 = (ulong *)&UNK_10dfe4888;
                }
                uStack_160 = puVar22[1];
                uStack_168 = *puVar22;
                uStack_158 = puVar22[2];
                puVar22 = (ulong *)(puVar45[2] + uVar36 * 0x30);
                if (*(uint *)((long)puVar45 + 0xc) <= uVar36) {
                  puVar22 = (ulong *)&UNK_10dfe4888;
                }
                uStack_148 = puVar22[4];
                uStack_150 = puVar22[3];
                uStack_140 = puVar22[5];
                pbVar28 = pbVar58;
                if (uVar35 - 1 <= uVar36) {
                  pbVar28 = (byte *)0x0;
                }
                FUN_1097429a8(&pcStack_1f0,pbVar28);
                if (pbVar58[7] == 4) {
                  bVar11 = pbVar58[0x1c];
                  bVar8 = pbVar58[0x1d];
                  bVar7 = pbVar58[0x1e];
                  bVar9 = pbVar58[0x1f];
                  lVar52 = uStack_208[4];
                  iVar21 = *(int *)(lVar52 + 0x18);
                  if (iVar21 == -1) {
                    FUN_109710978();
                    iVar21 = (int)lVar52;
                  }
                  puVar54 = (ushort *)(pbVar58 + 0xc);
                  puVar24 = puVar54;
                  func_0x000109743c68(puVar54,0,1);
                  pcVar38 = uStack_1f8;
                  if ((((ushort)(puVar24[2] >> 8 | puVar24[2] << 8) != 0xffff) ||
                      (*(byte *)((long)puVar24 + 1) != 0 || (byte)*puVar24 != 0)) ||
                     (((uStack_168 & (ulong)puStack_198) != 0 &&
                      (((((uStack_160 & (ulong)pbStack_190) != 0 &&
                         ((uStack_158 & (ulong)pbStack_188) != 0)) &&
                        ((uStack_150 & (ulong)puStack_198) != 0)) &&
                       (((uStack_148 & (ulong)pbStack_190) != 0 &&
                        ((uStack_140 & (ulong)pbStack_188) != 0)))))))) {
                    if ((lStack_1a0 == 0) || (*(uint *)(lStack_1a0 + 4) < 2)) {
                      puVar53 = (uint *)0x0;
                    }
                    else {
                      puVar53 = *(uint **)(lStack_1a0 + 8);
                    }
                    *(undefined4 *)(uStack_1f8 + 0x5c) = 0;
                    if (uStack_1f8[0x58] == (code)0x1) {
                      uVar57 = 0;
                      bVar15 = false;
                      bVar11 = bVar11 >> 6;
                      uVar43 = 0;
                      lVar52 = (ulong)bVar9 + (ulong)bVar8 * 0x10000 + (ulong)bVar7 * 0x100;
                      uVar33 = 0;
LAB_109707630:
                      uVar34 = *(uint *)(pcVar38 + 0x60);
                      uVar51 = (uint)uVar57;
                      if (puVar53 == (uint *)0x0) {
LAB_109707690:
                        if (uVar51 < uVar34) {
                          uVar34 = *(uint *)(*(long *)(pcVar38 + 0x70) + uVar57 * 0x14);
                          if (uVar34 == 0xffff) {
                            uVar56 = 2;
                          }
                          else {
                            if ((((uStack_180 >> ((ulong)(uVar34 >> 4) & 0x3f) & 1) != 0) &&
                                ((uStack_178 >> ((ulong)uVar34 & 0x3f) & 1) != 0)) &&
                               ((uStack_170 >> ((ulong)(uVar34 >> 9) & 0x3f) & 1) != 0)) {
                              puVar24 = (ushort *)
                                        ((long)puVar54 +
                                        (ulong)pbVar58[0x13] +
                                        (ulong)pbVar58[0x12] * 0x100 +
                                        (ulong)pbVar58[0x10] * 0x1000000 +
                                        (ulong)pbVar58[0x11] * 0x10000);
                              FUN_10973f414(puVar24,(ulong)uVar34,iVar21);
                              if (puVar24 != (ushort *)0x0) {
                                uVar56 = *puVar24 >> 8 | *puVar24 << 8;
                                goto LAB_109707720;
                              }
                            }
                            uVar56 = 1;
                          }
                        }
                        else {
                          uVar56 = 0;
                        }
LAB_109707720:
                        puVar24 = puVar54;
                        func_0x000109743c68(puVar54,uVar33,uVar56);
                        uVar50 = *puVar24 >> 8 | *puVar24 << 8;
                        if ((ushort)(puVar24[2] >> 8 | puVar24[2] << 8) == 0xffff) {
                          if ((uVar33 != 0) &&
                             ((uVar16 = puVar24[1], ((byte)uVar16 >> 6 & 1) == 0 || (uVar50 != 0))))
                          {
                            puVar27 = puVar54;
                            func_0x000109743c68(puVar54,0,uVar56);
                            if (((ushort)(puVar27[2] >> 8 | puVar27[2] << 8) != 0xffff) ||
                               ((uVar50 != (ushort)(*puVar27 >> 8 | *puVar27 << 8) ||
                                (((byte)((byte)puVar27[1] ^ (byte)uVar16) >> 6 & 1) != 0))))
                            goto LAB_1097077d8;
                          }
                          puVar27 = puVar54;
                          func_0x000109743c68(puVar54,uVar33,0);
                          puVar46 = uStack_208;
                          if ((ushort)(puVar27[2] >> 8 | puVar27[2] << 8) != 0xffff)
                          goto LAB_1097077d8;
                        }
                        else {
LAB_1097077d8:
                          lVar47 = 100;
                          if (pcVar38[0x5a] == (code)0x0) {
                            lVar47 = 0x5c;
                          }
                          puVar46 = uStack_208;
                          if ((*(int *)(pcVar38 + lVar47) != 0) &&
                             (*(uint *)(pcVar38 + 0x5c) < *(uint *)(pcVar38 + 0x60))) {
                            FUN_109710ea8(pcVar38,3,*(int *)(pcVar38 + lVar47) + -1,
                                          *(uint *)(pcVar38 + 0x5c) + 1,1,1);
                            puVar46 = uStack_208;
                          }
                        }
                        if ((bVar15) &&
                           (uVar34 = (uint)(puVar24[2] >> 8) | (puVar24[2] & 0xff00ff) << 8,
                           uVar34 != 0xffff)) {
                          uVar51 = *(uint *)(pcVar38 + 0x5c);
                          uVar57 = (ulong)uVar51;
                          if (*(uint *)(pcVar38 + 0x60) <= uVar51) goto LAB_109707b8c;
                          lVar47 = *(long *)(pcVar38 + 0x80) + (ulong)uVar51 * 0x14;
                          uStack_208 = puVar46;
                          if (1 < bVar11) {
                            if (bVar11 == 2) {
                              pbVar28 = (byte *)((long)puVar54 + (ulong)(uVar34 << 2) * 2 + lVar52);
                              if ((((ulong)uStack_1d8 < (ulong)((long)pbVar28 - lStack_1e8)) ||
                                  (((int)lStack_1e0 - (int)pbVar28 & 0xfffffff8U) == 0)) ||
                                 (iStack_1d4 = iStack_1d4 + -8, iStack_1d4 < 1)) goto LAB_109707bfc;
                              bVar8 = pbVar28[2];
                              bVar7 = pbVar28[3];
                              bVar9 = pbVar28[6];
                              bVar10 = pbVar28[7];
                              *(int *)(lVar47 + 8) =
                                   (int)(puVar46[0xb] *
                                         ((long)(short)((ushort)*pbVar28 << 8) | (ulong)pbVar28[1])
                                         + 0x8000 >> 0x10) -
                                   (int)(puVar46[0xb] *
                                         ((long)(short)((ushort)pbVar28[4] << 8) | (ulong)pbVar28[5]
                                         ) + 0x8000 >> 0x10);
                              *(int *)(lVar47 + 0xc) =
                                   (int)(puVar46[0xc] *
                                         ((long)(short)((ushort)bVar8 << 8) | (ulong)bVar7) + 0x8000
                                        >> 0x10) -
                                   (int)(puVar46[0xc] *
                                         ((long)(short)((ushort)bVar9 << 8) | (ulong)bVar10) +
                                         0x8000 >> 0x10);
                            }
LAB_109707b6c:
                            *(undefined1 *)(lVar47 + 0x12) = 1;
                            *(short *)(lVar47 + 0x10) =
                                 (short)uVar43 - (short)*(undefined4 *)(pcVar38 + 0x5c);
                            *(uint *)(pcVar38 + 0xc0) = *(uint *)(pcVar38 + 0xc0) | 8;
                            goto LAB_109707b8c;
                          }
                          if (bVar11 != 0) {
                            puVar27 = (ushort *)((long)puVar54 + (ulong)(uVar34 << 1) * 2 + lVar52);
                            if ((((ulong)uStack_1d8 < (ulong)((long)puVar27 - lStack_1e8)) ||
                                (((int)lStack_1e0 - (int)puVar27 & 0xfffffffcU) == 0)) ||
                               (iStack_1d4 = iStack_1d4 + -4, iStack_1d4 < 1)) goto LAB_109707bfc;
                            uVar33 = puVar27[1];
                            bVar8 = *(byte *)((long)puVar27 + 3);
                            pbVar28 = pbStack_1b0;
                            FUN_109743ce0(pbStack_1b0,
                                          *(undefined4 *)
                                           (*(long *)(uStack_1f8 + 0x70) + uVar43 * 0x14),
                                          *puVar27 >> 8 | *puVar27 << 8,uStack_1b8);
                            pbVar29 = pbStack_1b0;
                            FUN_109743ce0(pbStack_1b0,
                                          *(undefined4 *)
                                           (*(long *)(uStack_1f8 + 0x70) +
                                           (ulong)*(uint *)(uStack_1f8 + 0x5c) * 0x14),
                                          CONCAT11((byte)uVar33,bVar8),uStack_1b8);
                            *(int *)(lVar47 + 8) =
                                 (int)(uStack_208[0xb] *
                                       ((long)(short)((ushort)*pbVar28 << 8) | (ulong)pbVar28[1]) +
                                       0x8000 >> 0x10) -
                                 (int)(uStack_208[0xb] *
                                       ((long)(short)((ushort)*pbVar29 << 8) | (ulong)pbVar29[1]) +
                                       0x8000 >> 0x10);
                            *(int *)(lVar47 + 0xc) =
                                 (int)(uStack_208[0xc] *
                                       ((long)(short)((ushort)pbVar28[2] << 8) | (ulong)pbVar28[3])
                                       + 0x8000 >> 0x10) -
                                 (int)(uStack_208[0xc] *
                                       ((long)(short)((ushort)pbVar29[2] << 8) | (ulong)pbVar29[3])
                                       + 0x8000 >> 0x10);
                            puVar46 = uStack_208;
                            goto LAB_109707b6c;
                          }
                          puVar27 = (ushort *)((long)puVar54 + (ulong)(uVar34 << 1) * 2 + lVar52);
                          if ((((ulong)uStack_1d8 < (ulong)((long)puVar27 - lStack_1e8)) ||
                              (((int)lStack_1e0 - (int)puVar27 & 0xfffffffcU) == 0)) ||
                             (iStack_1d4 = iStack_1d4 + -4, iStack_1d4 < 1)) {
LAB_109707bfc:
                            bVar15 = true;
                          }
                          else {
                            uVar33 = puVar27[1];
                            bVar8 = *(byte *)((long)puVar27 + 3);
                            puStack_c8 = (undefined8 *)((ulong)puStack_c8 & 0xffffffff00000000);
                            uStack_80 = 0;
                            iStack_84 = 0;
                            func_0x0001096fb4c8(puVar46,*(undefined4 *)
                                                         (*(long *)(uStack_1f8 + 0x70) +
                                                         uVar43 * 0x14),
                                                *puVar27 >> 8 | *puVar27 << 8,4,&puStack_c8,
                                                (long)&uStack_80 + 4);
                            if ((int)puVar46 != 0) {
                              puVar46 = uStack_208;
                              func_0x0001096fb4c8(uStack_208,
                                                  *(undefined4 *)
                                                   (*(long *)(uStack_1f8 + 0x70) +
                                                   (ulong)*(uint *)(uStack_1f8 + 0x5c) * 0x14),
                                                  CONCAT11((byte)uVar33,bVar8),4,&uStack_80,
                                                  &iStack_84);
                              if ((int)puVar46 != 0) {
                                *(int *)(lVar47 + 8) = (int)puStack_c8 - (int)uStack_80;
                                *(int *)(lVar47 + 0xc) = uStack_80._4_4_ - iStack_84;
                                puVar46 = uStack_208;
                                goto LAB_109707b6c;
                              }
                            }
                            uVar57 = (ulong)*(uint *)(pcVar38 + 0x5c);
                            bVar15 = true;
                          }
                        }
                        else {
LAB_109707b8c:
                          bVar18 = (char)(byte)puVar24[1] < '\0';
                          uVar57 = (ulong)*(uint *)(pcVar38 + 0x5c);
                          bVar15 = (bool)(bVar18 | bVar15);
                          uVar34 = *(uint *)(pcVar38 + 0x5c);
                          if (!bVar18) {
                            uVar34 = (uint)uVar43;
                          }
                          uVar43 = (ulong)uVar34;
                          uStack_208 = puVar46;
                        }
                        if (((int)uVar57 != *(int *)(pcVar38 + 0x60)) &&
                           (pcVar38[0x58] == (code)0x1)) goto code_r0x000109707bc0;
                      }
                      else {
                        if (uVar51 < uVar34) {
                          uVar39 = *(uint *)(*(long *)(pcVar38 + 0x70) + uVar57 * 0x14 + 8);
                          puVar61 = puVar53 + 3;
                          do {
                            puVar53 = puVar53 + -3;
                            puVar1 = puVar61 + -2;
                            puVar61 = puVar61 + -3;
                          } while (uVar39 < *puVar1);
                          do {
                            puVar61 = puVar53 + 5;
                            puVar53 = puVar53 + 3;
                          } while (*puVar61 < uVar39);
                        }
                        if ((uStack_138 & *puVar53) != 0) goto LAB_109707690;
                        if (uVar51 != uVar34) {
                          uVar50 = 0;
                          goto LAB_109707bdc;
                        }
                      }
                    }
                  }
                  goto LAB_1097080c4;
                }
                if ((pbVar58[7] == 1) && ((pbVar58[4] >> 6 & 1) != 0)) {
                  puVar54 = (ushort *)(pbVar58 + 0xc);
                  bVar11 = pbVar58[0x1c];
                  bVar8 = pbVar58[0x1d];
                  bVar7 = pbVar58[0x1e];
                  bVar9 = pbVar58[0x1f];
                  pbVar28 = (byte *)((long)puVar54 +
                                    (ulong)bVar9 +
                                    (ulong)bVar7 * 0x100 +
                                    (ulong)bVar11 * 0x1000000 + (ulong)bVar8 * 0x10000);
                  uStack_90 = 0;
                  uStack_8c = 1;
                  lVar52 = uStack_208[4];
                  iVar21 = *(int *)(lVar52 + 0x18);
                  puStack_c8 = &uStack_218;
                  pbStack_c0 = pbVar58;
                  pbStack_b8 = pbVar28;
                  if (iVar21 == -1) {
                    FUN_109710978();
                    iVar21 = (int)lVar52;
                  }
                  puVar24 = puVar54;
                  func_0x000109743bf0(puVar54,0,1);
                  pcVar38 = uStack_1f8;
                  if ((((ushort)(puVar24[2] >> 8 | puVar24[2] << 8) != 0xffff) ||
                      (*(byte *)((long)puVar24 + 1) != 0 || (byte)*puVar24 != 0)) ||
                     ((((uStack_168 & (ulong)puStack_198) != 0 &&
                       ((((uStack_160 & (ulong)pbStack_190) != 0 &&
                         ((uStack_158 & (ulong)pbStack_188) != 0)) &&
                        ((uStack_150 & (ulong)puStack_198) != 0)))) &&
                      (((uStack_148 & (ulong)pbStack_190) != 0 &&
                       ((uStack_140 & (ulong)pbStack_188) != 0)))))) {
                    if ((lStack_1a0 == 0) || (*(uint *)(lStack_1a0 + 4) < 2)) {
                      puVar53 = (uint *)0x0;
                    }
                    else {
                      puVar53 = *(uint **)(lStack_1a0 + 8);
                    }
                    *(undefined4 *)(uStack_1f8 + 0x5c) = 0;
                    if (uStack_1f8[0x58] == (code)0x1) {
                      uVar57 = 0;
                      uVar33 = 0;
LAB_109707c6c:
                      uVar43 = (ulong)*(uint *)(pcVar38 + 0x60);
                      if (puVar53 == (uint *)0x0) {
LAB_109707ccc:
                        if (uVar57 < uVar43) {
                          uVar34 = *(uint *)(*(long *)(pcVar38 + 0x70) + uVar57 * 0x14);
                          if (uVar34 == 0xffff) {
                            uVar56 = 2;
                          }
                          else {
                            if ((((uStack_180 >> ((ulong)(uVar34 >> 4) & 0x3f) & 1) != 0) &&
                                ((uStack_178 >> ((ulong)uVar34 & 0x3f) & 1) != 0)) &&
                               ((uStack_170 >> ((ulong)(uVar34 >> 9) & 0x3f) & 1) != 0)) {
                              puVar24 = (ushort *)
                                        ((long)puVar54 +
                                        (ulong)pbVar58[0x13] +
                                        (ulong)pbVar58[0x12] * 0x100 +
                                        (ulong)pbVar58[0x10] * 0x1000000 +
                                        (ulong)pbVar58[0x11] * 0x10000);
                              FUN_10973f414(puVar24,(ulong)uVar34,iVar21);
                              if (puVar24 != (ushort *)0x0) {
                                uVar56 = *puVar24 >> 8 | *puVar24 << 8;
                                goto LAB_109707d5c;
                              }
                            }
                            uVar56 = 1;
                          }
                        }
                        else {
                          uVar56 = 0;
                        }
LAB_109707d5c:
                        puVar24 = puVar54;
                        func_0x000109743bf0(puVar54,uVar33,uVar56);
                        uVar50 = *puVar24 >> 8 | *puVar24 << 8;
                        if ((ushort)(puVar24[2] >> 8 | puVar24[2] << 8) == 0xffff) {
                          if ((uVar33 != 0) &&
                             ((uVar16 = puVar24[1], ((byte)uVar16 >> 6 & 1) == 0 || (uVar50 != 0))))
                          {
                            puVar27 = puVar54;
                            func_0x000109743bf0(puVar54,0,uVar56);
                            if (((ushort)(puVar27[2] >> 8 | puVar27[2] << 8) != 0xffff) ||
                               ((uVar50 != (ushort)(*puVar27 >> 8 | *puVar27 << 8) ||
                                (((byte)((byte)puVar27[1] ^ (byte)uVar16) >> 6 & 1) != 0))))
                            goto LAB_109707e14;
                          }
                          puVar27 = puVar54;
                          func_0x000109743bf0(puVar54,uVar33,0);
                          if ((ushort)(puVar27[2] >> 8 | puVar27[2] << 8) != 0xffff)
                          goto LAB_109707e14;
                        }
                        else {
LAB_109707e14:
                          lVar52 = 100;
                          if (pcVar38[0x5a] == (code)0x0) {
                            lVar52 = 0x5c;
                          }
                          if ((*(int *)(pcVar38 + lVar52) != 0) &&
                             (*(uint *)(pcVar38 + 0x5c) < *(uint *)(pcVar38 + 0x60))) {
                            FUN_109710ea8(pcVar38,3,*(int *)(pcVar38 + lVar52) + -1,
                                          *(uint *)(pcVar38 + 0x5c) + 1,1,1);
                          }
                        }
                        if (((byte)puVar24[1] >> 5 & 1) != 0) {
                          uStack_90 = 0;
                        }
                        if ((char)(byte)puVar24[1] < '\0') {
                          if (uStack_90 < 8) {
                            auStack_b0[uStack_90] = *(uint *)(pcVar38 + 0x5c);
                            uStack_90 = uStack_90 + 1;
                          }
                          else {
                            uStack_90 = 0;
                          }
                        }
                        uVar34 = (uint)(puVar24[2] >> 8) | (puVar24[2] & 0xff00ff) << 8;
                        if ((uVar34 != 0xffff) && (uStack_90 != 0)) {
                          uVar51 = (uint)pbVar58[8] * 0x1000000 | (uint)pbVar58[9] << 0x10 |
                                   (uint)pbVar58[10] << 8 | (uint)pbVar58[0xb];
                          if (uVar51 < 2) {
                            uVar51 = 1;
                          }
                          if ((-1 < (int)uStack_90) &&
                             (uVar57 = (ulong)(uStack_90 << 1) * (ulong)uVar51,
                             (uVar57 & 0xffffffff00000000) == 0)) {
                            uVar43 = (ulong)(uVar34 >> 1);
                            if ((ulong)((long)(pbVar28 + uVar43 * 2) - lStack_1e8) <=
                                (ulong)uStack_1d8) {
                              uVar34 = (uint)uVar57;
                              if ((uVar34 <= (uint)((int)lStack_1e0 - (int)(pbVar28 + uVar43 * 2)))
                                 && (iStack_1d4 = iStack_1d4 - uVar34, 0 < iStack_1d4)) {
                                pbVar29 = pbVar58 + uVar43 * 2 +
                                                    (ulong)bVar11 * 0x1000000 +
                                                    (ulong)bVar8 * 0x10000 +
                                                    (ulong)bVar7 * 0x100 + (ulong)bVar9 + 0xd;
                                uVar57 = (ulong)((uint)pbVar58[8] * 0x1000000 +
                                                 (uint)pbVar58[9] * 0x10000 +
                                                (uint)pbVar58[10] * 0x100 + (uint)pbVar58[0xb]);
                                if (uVar57 < 2) {
                                  uVar57 = 1;
                                }
                                do {
                                  uStack_90 = uStack_90 - 1;
                                  if (auStack_b0[uStack_90] < *(uint *)(pcVar38 + 0x60)) {
                                    bVar10 = *pbVar29;
                                    uVar33 = bVar10 & 0xfe | (ushort)pbVar29[-1] << 8;
                                    lVar52 = *(long *)(pcVar38 + 0x80) +
                                             (ulong)auStack_b0[uStack_90] * 0x14;
                                    if ((*(uint *)(pcVar38 + 0x38) & 0xfffffffe) == 4) {
                                      if (uVar33 == 0x8000) {
                                        *(undefined1 *)(lVar52 + 0x12) = 0;
                                        *(undefined2 *)(lVar52 + 0x10) = 0;
                                        *(undefined4 *)(lVar52 + 0xc) = 0;
                                      }
                                      else if (*(char *)(lVar52 + 0x12) != '\0') {
                                        *(int *)(lVar52 + 0xc) =
                                             *(int *)(lVar52 + 0xc) +
                                             (int)((ulong)(uStack_208[0xc] * (long)(short)uVar33 +
                                                          0x8000) >> 0x10);
LAB_109708030:
                                        *(uint *)(pcVar38 + 0xc0) = *(uint *)(pcVar38 + 0xc0) | 8;
                                      }
                                    }
                                    else if (uVar33 == 0x8000) {
                                      *(undefined1 *)(lVar52 + 0x12) = 0;
                                      *(undefined2 *)(lVar52 + 0x10) = 0;
                                      *(undefined4 *)(lVar52 + 8) = 0;
                                    }
                                    else if (*(char *)(lVar52 + 0x12) != '\0') {
                                      *(int *)(lVar52 + 8) =
                                           *(int *)(lVar52 + 8) +
                                           (int)((ulong)(uStack_208[0xb] * (long)(short)uVar33 +
                                                        0x8000) >> 0x10);
                                      goto LAB_109708030;
                                    }
                                    if ((uStack_90 == 0) || ((bVar10 & 1) != 0)) goto LAB_109708058;
                                  }
                                  else if (uStack_90 == 0) goto LAB_109708058;
                                  pbVar29 = pbVar29 + uVar57 * 2;
                                } while( true );
                              }
                            }
                          }
                          uStack_90 = 0;
                        }
LAB_109708058:
                        uVar57 = (ulong)*(uint *)(pcVar38 + 0x5c);
                        if ((uVar57 != *(uint *)(pcVar38 + 0x60)) && (pcVar38[0x58] == (code)0x1))
                        goto code_r0x000109708070;
                      }
                      else {
                        if (uVar57 < uVar43) {
                          uVar34 = *(uint *)(*(long *)(pcVar38 + 0x70) + uVar57 * 0x14 + 8);
                          puVar61 = puVar53 + 3;
                          do {
                            puVar53 = puVar53 + -3;
                            puVar1 = puVar61 + -2;
                            puVar61 = puVar61 + -3;
                          } while (uVar34 < *puVar1);
                          do {
                            puVar61 = puVar53 + 5;
                            puVar53 = puVar53 + 3;
                          } while (*puVar61 < uVar34);
                        }
                        if ((uStack_138 & *puVar53) != 0) goto LAB_109707ccc;
                        if (uVar57 != uVar43) {
                          uVar50 = 0;
                          goto LAB_10970808c;
                        }
                      }
                    }
                  }
                }
LAB_1097080c4:
                lStack_1e8 = *(long *)(CONCAT44(uStack_1bc,uStack_1c0) + 0x10);
                uStack_1d8 = *(uint *)(CONCAT44(uStack_1bc,uStack_1c0) + 0x18);
                lStack_1e0 = lStack_1e8 + (ulong)uStack_1d8;
                if (bVar17) {
                  FUN_1096f7004(uStack_1f8,0,*(undefined4 *)(uStack_1f8 + 0x60));
                }
                FUN_1096f53f4(uStack_1f8,uStack_208,&UNK_10f57f518);
              }
            }
            pbVar58 = pbVar58 + (ulong)pbVar58[3] +
                                (ulong)pbVar58[2] * 0x100 +
                                (ulong)*pbVar58 * 0x1000000 + (ulong)pbVar58[1] * 0x10000;
            iStack_134 = iStack_134 + 1;
            uVar36 = uVar36 + 1;
          } while (uVar36 != uVar35);
        }
        FUN_1096f53f4(param_3,param_2,&UNK_10f57ea17);
      }
      FUN_1096f4038(&uStack_218);
    }
  }
  else {
    puVar22 = (ulong *)(*(long *)(param_2 + 0x20) + 0x128);
    func_0x00010972ef1c();
    if (*(long *)(param_3 + 0xd0) != 0) {
      uVar36 = param_3;
      FUN_1096f53f4(param_3,param_2,&UNK_10f57eabb);
      if ((int)uVar36 == 0) goto LAB_1097081ac;
    }
    FUN_109734580(&uStack_218,1,param_2,param_3,*puVar22);
    pcStack_130 = FUN_10974b778;
    uVar36 = (ulong)*(uint *)(param_1 + 0xdc);
    if (*(uint *)(param_1 + 0xdc) != 0) {
      uVar43 = 0;
      uVar57 = 0;
      do {
        if (uVar43 < uVar36) {
          puVar53 = (uint *)(*(long *)(param_1 + 0xe0) + uVar43 * 0x10);
        }
        else {
          puVar53 = (uint *)&UNK_10dfe4888;
        }
        if (uVar57 < *puVar53) {
          lVar52 = uVar57 * 0xc;
          do {
            if (uVar57 < *(uint *)(param_1 + 0xbc)) {
              puVar54 = (ushort *)(*(long *)(param_1 + 0xc0) + lVar52);
            }
            else {
              puVar54 = (ushort *)&UNK_10dfe4888;
            }
            uVar33 = *puVar54;
            puVar23 = puVar22;
            FUN_10974b894(puVar22,uVar33,param_3);
            if (puVar23 != (ulong *)0x0) {
              if (*(long *)(param_3 + 0xd0) != 0) {
                uVar36 = param_3;
                FUN_1096f53f4(param_3,param_2,&UNK_10f57f528);
                if ((int)uVar36 == 0) goto LAB_10970717c;
              }
              if (((((ulong)puStack_108 & *puVar23) == 0) ||
                  (((ulong)pbStack_100 & puVar23[1]) == 0)) ||
                 (((ulong)pbStack_f8 & puVar23[2]) == 0)) {
                if (*(long *)(param_3 + 0xd0) == 0) goto LAB_10970717c;
                FUN_1096f53f4(param_3,param_2,&UNK_10f57f54b);
              }
              else {
                uStack_e8 = (uint)uVar33;
                uStack_ec = *(uint *)(puVar54 + 2);
                uStack_d0 = 0xffffffff;
                bStack_da = (byte)puVar54[1] >> 1 & 1;
                bStack_db = (byte)puVar54[1] & 1;
                bStack_d8 = (byte)puVar54[1] >> 2 & 1;
                bStack_d9 = (byte)puVar54[1] >> 3 & 1;
                puVar31 = &UNK_10dfe4888;
                if ((undefined *)*puVar22 != (undefined *)0x0) {
                  puVar31 = (undefined *)*puVar22;
                }
                puVar30 = &UNK_10dfe4888;
                if (3 < *(uint *)(puVar31 + 0x18)) {
                  puVar30 = *(undefined **)(puVar31 + 0x10);
                }
                func_0x00010972a6f4(puVar30,uVar33);
                uVar34 = uStack_ec;
                uVar36 = uStack_178;
                uVar35 = *(uint *)(uStack_178 + 0x60);
                if ((uVar35 != 0) && (uStack_ec != 0)) {
                  uVar33 = *(ushort *)(puVar30 + 4);
                  FUN_10974b6e0();
                  pcVar38 = uStack_1f8;
                  puStack_1c8 = &uStack_218;
                  lStack_1e8 = 0;
                  lStack_1e0 = 0;
                  pcStack_1f0 = (code *)0x0;
                  bVar20 = (int)pbStack_190 == 1;
                  uStack_1f8._0_2_ = CONCAT11(bStack_da,bVar20);
                  uStack_1f8._0_3_ = CONCAT12(bVar20,(undefined2)uStack_1f8);
                  uStack_1c0 = SUB84(puVar30,0);
                  uStack_200 = CONCAT44(uVar34,uStack_1c0);
                  bVar8 = (int)pbStack_190 == 0 & bStack_d9;
                  uStack_1f8._0_4_ = CONCAT13(bVar8,(undefined3)uStack_1f8);
                  uStack_1f8._5_3_ = SUB83(pcVar38,5);
                  uStack_1f8._0_5_ = (uint5)(uint)uStack_1f8;
                  puStack_198 = (undefined8 *)CONCAT44(puStack_198._4_4_,uVar35);
                  pbStack_1b0 = (byte *)0x0;
                  uStack_1a8 = 0;
                  lStack_1a0 = 0;
                  bVar11 = bStack_db;
                  if (bVar20) {
                    bVar11 = 1;
                  }
                  uStack_1b8._0_2_ = CONCAT11(1,bVar11);
                  uStack_1b8._0_3_ = CONCAT12(bVar20,(undefined2)uStack_1b8);
                  uStack_1bc = 0xffffffff;
                  uStack_1b8 = CONCAT13(!bVar20 & bVar8,(undefined3)uStack_1b8);
                  uStack_1b4 = 0;
                  *(undefined4 *)(uVar36 + 0x5c) = 0;
                  uStack_1d8 = uVar35;
                  uStack_e4 = uStack_1c0;
                  uStack_208 = puStack_1c8;
                  FUN_10974dae8(&uStack_218,puVar23,uVar33 >> 8 | uVar33 << 8);
                }
              }
              if (*(long *)(param_3 + 0xd0) != 0) {
                FUN_1096f53f4(param_3,param_2,&UNK_10f57f589);
              }
            }
LAB_10970717c:
            uVar57 = uVar57 + 1;
            lVar52 = lVar52 + 0xc;
          } while (uVar57 < *puVar53);
          uVar57 = uVar57 & 0xffffffff;
        }
        if (*(code **)(puVar53 + 2) != (code *)0x0) {
          uVar36 = uVar48;
          (**(code **)(puVar53 + 2))(uVar48,param_2);
          if ((int)uVar36 != 0) {
            puStack_c8 = (undefined8 *)0x0;
            pbStack_c0 = (byte *)0x0;
            pbStack_b8 = (byte *)0x0;
            FUN_1097347a8(&puStack_c8,*(undefined8 *)(param_3 + 0x70),
                          *(undefined4 *)(param_3 + 0x60));
            pbStack_100 = pbStack_c0;
            puStack_108 = puStack_c8;
            pbStack_f8 = pbStack_b8;
          }
        }
        uVar43 = uVar43 + 1;
        uVar36 = (ulong)*(uint *)(param_1 + 0xdc);
      } while (uVar43 < uVar36);
    }
    _free(uStack_110);
    FUN_109710c0c(&uStack_170);
    if (*(long *)(param_3 + 0xd0) != 0) {
      FUN_1096f53f4(param_3,param_2,&UNK_10f57eae2);
    }
  }
LAB_1097081ac:
  uVar33 = *(ushort *)(param_1 + 0x104);
  if ((uVar33 >> 0xc & 1) != 0) {
    lVar52 = *(long *)(param_2 + 0x20) + 0x158;
    FUN_109743fc4();
    puVar31 = &UNK_10dfe4888;
    if (0xb < *(uint *)(lVar52 + 0x18)) {
      puVar31 = *(undefined **)(lVar52 + 0x10);
    }
    FUN_1096f3f00(&uStack_218,uVar48,param_2,param_3,&UNK_10dfe4888);
    pcVar38 = uStack_1f8;
    puVar45 = uStack_208;
    if (0.0 < *(float *)(uStack_208 + 0xe)) {
      uVar35 = *(uint *)(CONCAT44(uStack_20c,uStack_210) + 0xa0);
      if ((*(uint *)(uStack_1f8 + 0x38) & 0xfffffffe) == 4) {
        uVar34 = (uint)(*(ushort *)(puVar31 + 6) >> 8) | (*(ushort *)(puVar31 + 6) & 0xff00ff) << 8;
        puVar30 = &UNK_10dfe4888;
        if (uVar34 != 0) {
          puVar30 = puVar31 + uVar34;
        }
        FUN_109710cec(puVar30,puVar31);
        uVar34 = *(uint *)(pcVar38 + 0x60);
        if (uVar34 != 0) {
          uVar36 = 0;
          fVar65 = *(float *)((long)puVar45 + 0x4c);
          lVar52 = 0x24;
          do {
            if (uVar34 - 1 == uVar36) {
              lVar47 = *(long *)(pcVar38 + 0x70);
              uVar36 = (ulong)uVar34;
              break;
            }
            uVar36 = uVar36 + 1;
            lVar47 = *(long *)(pcVar38 + 0x70);
            puVar54 = (ushort *)(lVar47 + lVar52);
            lVar52 = lVar52 + 0x14;
          } while ((*puVar54 >> 7 & 1) != 0);
          uVar57 = 0;
          do {
            uVar43 = uVar36;
            if ((*(uint *)(lVar47 + (uVar57 & 0xffffffff) * 0x14 + 4) & uVar35) != 0) {
              piVar60 = (int *)(*(long *)(pcVar38 + 0x80) + (uVar57 & 0xffffffff) * 0x14);
              *piVar60 = *piVar60 + (int)(fVar65 * (float)(int)puVar30 + 0.5);
              piVar60[2] = piVar60[2] + (int)(fVar65 * (float)((int)puVar30 / 2) + 0.5);
            }
            uVar39 = (uint)uVar43;
            uVar51 = uVar34;
            if (uVar34 <= uVar39 + 1) {
              uVar51 = uVar39 + 1;
            }
            uVar36 = uVar43;
            do {
              iVar21 = (int)uVar36;
              uVar36 = (ulong)uVar51;
              if (uVar51 - 1 == iVar21) break;
              uVar36 = (ulong)(iVar21 + 1);
            } while ((*(ushort *)(lVar47 + uVar36 * 0x14 + 0x10) >> 7 & 1) != 0);
            uVar57 = uVar43;
          } while (uVar39 < uVar34);
        }
      }
      else {
        uVar34 = (uint)(*(ushort *)(puVar31 + 8) >> 8) | (*(ushort *)(puVar31 + 8) & 0xff00ff) << 8;
        puVar30 = &UNK_10dfe4888;
        if (uVar34 != 0) {
          puVar30 = puVar31 + uVar34;
        }
        FUN_109710cec(puVar30,puVar31);
        uVar34 = *(uint *)(pcVar38 + 0x60);
        if (uVar34 != 0) {
          uVar36 = 0;
          fVar65 = *(float *)(puVar45 + 10);
          lVar52 = 0x24;
          do {
            if (uVar34 - 1 == uVar36) {
              lVar47 = *(long *)(pcVar38 + 0x70);
              uVar36 = (ulong)uVar34;
              break;
            }
            uVar36 = uVar36 + 1;
            lVar47 = *(long *)(pcVar38 + 0x70);
            puVar54 = (ushort *)(lVar47 + lVar52);
            lVar52 = lVar52 + 0x14;
          } while ((*puVar54 >> 7 & 1) != 0);
          uVar57 = 0;
          do {
            uVar43 = uVar36;
            if ((*(uint *)(lVar47 + (uVar57 & 0xffffffff) * 0x14 + 4) & uVar35) != 0) {
              lVar52 = *(long *)(pcVar38 + 0x80) + (uVar57 & 0xffffffff) * 0x14;
              *(int *)(lVar52 + 4) =
                   *(int *)(lVar52 + 4) + (int)(fVar65 * (float)(int)puVar30 + 0.5);
              *(int *)(lVar52 + 0xc) =
                   *(int *)(lVar52 + 0xc) + (int)(fVar65 * (float)((int)puVar30 / 2) + 0.5);
            }
            uVar39 = (uint)uVar43;
            uVar51 = uVar34;
            if (uVar34 <= uVar39 + 1) {
              uVar51 = uVar39 + 1;
            }
            uVar36 = uVar43;
            do {
              iVar21 = (int)uVar36;
              uVar36 = (ulong)uVar51;
              if (uVar51 - 1 == iVar21) break;
              uVar36 = (ulong)(iVar21 + 1);
            } while ((*(ushort *)(lVar47 + uVar36 * 0x14 + 0x10) >> 7 & 1) != 0);
            uVar57 = uVar43;
          } while (uVar39 < uVar34);
        }
      }
    }
    FUN_1096f4038(&uStack_218);
    uVar33 = *(ushort *)(param_1 + 0x104);
  }
  if ((((uVar33 >> 4 & 1) != 0) && (*(int *)(*(long *)(param_1 + 0x80) + 0x58) == 2)) &&
     (uVar35 = *(uint *)(param_3 + 0x60), uVar35 != 0)) {
    lVar52 = 0;
    lVar47 = *(long *)(param_3 + 0x70);
    do {
      if ((*(ushort *)(lVar47 + 0xc + lVar52) >> 3 & 1) != 0) {
        lVar41 = *(long *)(param_3 + 0x80);
        if (bVar19) {
          puVar45 = (undefined8 *)(lVar41 + lVar52);
          puVar45[1] = CONCAT44((int)((ulong)puVar45[1] >> 0x20) - (int)((ulong)*puVar45 >> 0x20),
                                (int)puVar45[1] - (int)*puVar45);
        }
        *(undefined8 *)(lVar41 + lVar52) = 0;
      }
      lVar52 = lVar52 + 0x14;
    } while ((ulong)uVar35 * 0x14 - lVar52 != 0);
  }
  if ((((*(byte *)(param_3 + 0xc0) >> 1 & 1) != 0) && ((*(byte *)(param_3 + 0x18) & 0xc) == 0)) &&
     (uVar36 = (ulong)*(uint *)(param_3 + 0x60), *(uint *)(param_3 + 0x60) != 0)) {
    puVar45 = *(undefined8 **)(param_3 + 0x80);
    puVar54 = (ushort *)(*(long *)(param_3 + 0x70) + 0x10);
    do {
      if (((*puVar54 >> 5 & 1) != 0) && ((puVar54[-2] >> 4 & 1) == 0)) {
        *puVar45 = 0;
        puVar45[1] = 0;
      }
      puVar45 = (undefined8 *)((long)puVar45 + 0x14);
      puVar54 = puVar54 + 10;
      uVar36 = uVar36 - 1;
    } while (uVar36 != 0);
  }
  if (((*(ushort *)(param_1 + 0x104) >> 0xb & 1) != 0) &&
     (uVar36 = (ulong)*(uint *)(param_3 + 0x60), *(uint *)(param_3 + 0x60) != 0)) {
    puVar45 = *(undefined8 **)(param_3 + 0x80);
    piVar60 = *(int **)(param_3 + 0x70);
    do {
      if (*piVar60 == 0xffff) {
        *puVar45 = 0;
        puVar45[1] = 0;
      }
      puVar45 = (undefined8 *)((long)puVar45 + 0x14);
      uVar36 = uVar36 - 1;
      piVar60 = piVar60 + 5;
    } while (uVar36 != 0);
  }
  uVar57 = param_3;
  FUN_1096f6f94(param_3,&uStack_218);
  iVar21 = (uint)uStack_218;
  uVar36 = uStack_218 & 0xffffffff;
  if (((*(byte *)(param_3 + 0xc0) >> 3 & 1) != 0) && ((uint)uStack_218 != 0)) {
    iVar59 = 0;
    uVar6 = *(undefined4 *)(param_3 + 0x38);
    do {
      FUN_10972c5b0(uVar57,uVar36,iVar59,uVar6,0x40);
      iVar59 = iVar59 + 1;
    } while (iVar21 != iVar59);
  }
  lVar52 = param_2;
  if (*(float *)(param_2 + 0x44) != 0.0 && iVar21 != 0) {
    piVar60 = (int *)(uVar57 + 8);
    do {
      if (piVar60[1] != 0) {
        *piVar60 = (int)((float)(int)(*(float *)(param_2 + 0x48) * (float)piVar60[1] + 0.5) +
                        (float)*piVar60);
      }
      piVar60 = piVar60 + 5;
      uVar36 = uVar36 - 1;
    } while (uVar36 != 0);
  }
  do {
    if (*(undefined **)(*(long *)(lVar52 + 0x90) + 0x68) != PTR_DAT_1132e00e0) {
      if (uVar40 != 0) {
        piVar60 = (int *)(lStack_248 + 0xc);
        do {
          FUN_1097123f0(param_2,*puVar37,&uStack_218,&puStack_c8);
          piVar60[-1] = piVar60[-1] - (uint)uStack_218;
          *piVar60 = *piVar60 - (int)puStack_c8;
          uVar49 = uVar49 - 1;
          piVar60 = piVar60 + 5;
          puVar37 = puVar37 + 5;
        } while (uVar49 != 0);
      }
      break;
    }
    lVar52 = *(long *)(lVar52 + 0x18);
  } while (lVar52 != 0 && lVar52 != 0x1132e0130);
  if ((*(uint *)(param_3 + 0x38) & 0xfffffffd) == 5) {
    FUN_1096f7004(param_3,0,*(undefined4 *)(param_3 + 0x60));
  }
  *(byte *)(param_3 + 0xb8) = *(byte *)(param_3 + 0xb8) & 0xf8;
  uVar49 = uStack_218;
  if ((*(ushort *)(param_1 + 0x104) & 0x900) == 0x800) {
    FUN_1096f5484(param_3);
    uVar49 = uStack_218;
  }
  uStack_218._4_4_ = (undefined4)(uVar49 >> 0x20);
  uVar40 = *(uint *)(param_3 + 0xc0);
  if ((((uVar40 >> 7 & 1) != 0) && (*(int *)(param_3 + 0x2c) != -1)) &&
     (uVar36 = (ulong)*(uint *)(param_3 + 0x60), *(uint *)(param_3 + 0x60) != 0)) {
    puVar45 = *(undefined8 **)(param_3 + 0x80);
    puVar54 = (ushort *)(*(long *)(param_3 + 0x70) + 0x10);
    do {
      if ((*puVar54 & 0x41f) == 0x401) {
        *(undefined4 *)(puVar54 + -8) = *(undefined4 *)(param_3 + 0x2c);
        *puVar45 = 0;
        puVar45[1] = 0;
        *puVar54 = *puVar54 & 0xe0 | 0xc;
      }
      puVar45 = (undefined8 *)((long)puVar45 + 0x14);
      puVar54 = puVar54 + 10;
      uVar36 = uVar36 - 1;
    } while (uVar36 != 0);
    uVar40 = *(uint *)(param_3 + 0xc0);
  }
  if (((uVar40 >> 1 & 1) != 0) && ((*(uint *)(param_3 + 0x18) >> 2 & 1) == 0)) {
    uVar40 = *(uint *)(param_3 + 0x60);
    uVar36 = (ulong)uVar40;
    lVar52 = *(long *)(param_3 + 0x70);
    uStack_218._0_4_ = *(int *)(param_3 + 0x24);
    if ((*(uint *)(param_3 + 0x18) >> 3 & 1) == 0) {
      if ((uint)uStack_218 == 0) {
        uStack_218._0_4_ = 0;
        lVar47 = *(long *)(*(long *)(param_2 + 0x90) + 0x10);
        if (lVar47 == 0) {
          uVar32 = 0;
        }
        else {
          uVar32 = *(undefined8 *)(lVar47 + 0x10);
        }
        lVar47 = param_2;
        (**(code **)(*(long *)(param_2 + 0x90) + 0x30))
                  (param_2,*(undefined8 *)(param_2 + 0x98),0x20,&uStack_218,uVar32);
        if ((int)lVar47 == 0) {
          uVar40 = *(uint *)(param_3 + 0x60);
          goto LAB_109708844;
        }
      }
      uVar49 = CONCAT44(uStack_218._4_4_,(uint)uStack_218);
      if (uVar40 != 0) {
        puVar54 = (ushort *)(lVar52 + 0x10);
        do {
          if (((*puVar54 >> 5 & 1) != 0) && ((puVar54[-2] >> 4 & 1) == 0)) {
            *(uint *)(puVar54 + -8) = (uint)uStack_218;
          }
          puVar54 = puVar54 + 10;
          uVar36 = uVar36 - 1;
          uVar49 = CONCAT44(uStack_218._4_4_,(uint)uStack_218);
        } while (uVar36 != 0);
      }
    }
    else {
LAB_109708844:
      if (uVar40 == 0) {
        uVar49 = 0;
      }
      else {
        uVar36 = 0;
        uVar49 = 0;
        do {
          lVar52 = *(long *)(param_3 + 0x70);
          puVar45 = (undefined8 *)(lVar52 + uVar36 * 0x14);
          iVar21 = (int)uVar49;
          if (((*(ushort *)(puVar45 + 2) >> 5 & 1) == 0) ||
             ((*(ushort *)((long)puVar45 + 0xc) >> 4 & 1) != 0)) {
            if (uVar36 != uVar49) {
              puVar46 = (undefined8 *)(lVar52 + uVar49 * 0x14);
              uVar66 = puVar45[1];
              uVar32 = *puVar45;
              *(undefined4 *)(puVar46 + 2) = *(undefined4 *)(puVar45 + 2);
              puVar46[1] = uVar66;
              *puVar46 = uVar32;
              puVar46 = (undefined8 *)(*(long *)(param_3 + 0x80) + uVar36 * 0x14);
              uVar66 = puVar46[1];
              uVar32 = *puVar46;
              puVar45 = (undefined8 *)(*(long *)(param_3 + 0x80) + uVar49 * 0x14);
              *(undefined4 *)(puVar45 + 2) = *(undefined4 *)(puVar46 + 2);
              puVar45[1] = uVar66;
              *puVar45 = uVar32;
            }
            uVar49 = (ulong)(iVar21 + 1);
          }
          else {
            uVar35 = *(uint *)(lVar52 + uVar36 * 0x14 + 8);
            if (uVar36 + 1 < (ulong)uVar40) {
              if (uVar35 != *(uint *)(lVar52 + (uVar36 + 1) * 0x14 + 8)) {
                if (iVar21 != 0) goto LAB_10970890c;
                func_0x0001096f65e4(param_3,uVar36,(int)uVar36 + 2);
                uVar49 = 0;
              }
            }
            else if (iVar21 != 0) {
LAB_10970890c:
              uVar34 = *(uint *)(lVar52 + (ulong)(iVar21 - 1) * 0x14 + 8);
              if (uVar35 < uVar34) {
                uVar51 = *(uint *)(lVar52 + uVar36 * 0x14 + 4);
                puVar53 = (uint *)(lVar52 + uVar49 * 0x14 + -0x10);
                uVar57 = uVar49;
                do {
                  if (puVar53[1] != uVar34) break;
                  *puVar53 = *puVar53 & 0xfffffff8 | uVar51 & 7;
                  puVar53[1] = uVar35;
                  uVar57 = uVar57 - 1;
                  puVar53 = puVar53 + -5;
                } while (uVar57 != 0);
              }
            }
          }
          uVar36 = uVar36 + 1;
        } while (uVar36 != uVar40);
      }
      *(int *)(param_3 + 0x60) = (int)uVar49;
      uVar49 = CONCAT44(uStack_218._4_4_,(uint)uStack_218);
    }
  }
  if (*(long *)(*(long *)(param_1 + 0x80) + 0x28) != 0) {
    uVar36 = param_3;
    uStack_218 = uVar49;
    FUN_1096f53f4(param_3,param_2,&UNK_10f57ec93);
    if ((int)uVar36 != 0) {
      (**(code **)(*(long *)(param_1 + 0x80) + 0x28))(uVar48,param_3,param_2);
      FUN_1096f53f4(param_3,param_2,&UNK_10f57ecac);
    }
  }
  if ((*(byte *)(param_3 + 0xc0) >> 5 & 1) != 0) {
    uVar40 = *(uint *)(param_3 + 0x60);
    if (uVar40 != 0) {
      uVar35 = *(uint *)(param_3 + 0x18);
      lVar52 = *(long *)(param_3 + 0x70);
      piVar60 = (int *)(lVar52 + 0x1c);
      uVar48 = 0;
      do {
        uVar49 = (ulong)uVar40;
        if (uVar40 - 1 == uVar48) break;
        uVar49 = uVar48 + 1;
        piVar2 = piVar60 + -5;
        iVar21 = *piVar60;
        piVar60 = piVar60 + 5;
        uVar48 = uVar49;
      } while (*piVar2 == iVar21);
      uVar48 = 0;
      do {
        uVar34 = (uint)uVar49;
        if ((uint)uVar48 < uVar34) {
          uVar51 = 0;
          lVar47 = (uVar49 & 0xffffffff) - (uVar48 & 0xffffffff);
          puVar53 = (uint *)(lVar52 + 4 + (uVar48 & 0xffffffff) * 0x14);
          do {
            uVar51 = *puVar53 & 7 | uVar51;
            lVar47 = lVar47 + -1;
            puVar53 = puVar53 + 5;
          } while (lVar47 != 0);
        }
        else {
          uVar51 = 0;
        }
        if ((uVar35 >> 7 & 1) != 0) {
          if ((uVar51 & 1) != 0) {
            uVar51 = uVar51 & 0xfffffffb;
          }
          if ((uVar51 & 4) != 0) {
            uVar51 = uVar51 | 3;
          }
        }
        uVar39 = uVar51 & 0xfffffffd;
        if ((uVar35 & 0x40) != 0) {
          uVar39 = uVar51;
        }
        if ((uint)uVar48 < uVar34) {
          lVar47 = (uVar49 & 0xffffffff) - (uVar48 & 0xffffffff);
          puVar53 = (uint *)(lVar52 + 4 + (uVar48 & 0xffffffff) * 0x14);
          do {
            *puVar53 = uVar39;
            lVar47 = lVar47 + -1;
            puVar53 = puVar53 + 5;
          } while (lVar47 != 0);
        }
        uVar51 = uVar40;
        if (uVar40 <= uVar34 + 1) {
          uVar51 = uVar34 + 1;
        }
        uVar48 = uVar49;
        do {
          uVar36 = (ulong)uVar51;
          if (uVar51 - 1 == (int)uVar48) break;
          uVar36 = (ulong)((int)uVar48 + 1);
          uVar57 = uVar48 & 0xffffffff;
          uVar48 = uVar36;
        } while (*(int *)(lVar52 + uVar57 * 0x14 + 8) == *(int *)(lVar52 + uVar36 * 0x14 + 8));
        uVar48 = uVar49;
        uVar49 = uVar36;
      } while (uVar34 < uVar40);
    }
  }
  *(uint *)(param_3 + 0x38) = uVar5;
  *(undefined8 *)(param_3 + 0xc4) = 0x1fffffff3fffffff;
  *(undefined2 *)(param_3 + 0xb8) = 0;
  return 1;
}



/* Entry: 109708d20; end: 109708fb7;  */

void FUN_109708d20(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)0x1;
  _calloc(1,0x48);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 1;
    puVar1[1] = 1;
    *(undefined8 *)(puVar1 + 2) = 0;
    *(undefined1 *)(puVar1 + 4) = 1;
    puVar1[5] = 0;
    puVar1[6] = 0;
    *puVar1 = 1;
    puVar1[1] = 1;
    *(undefined8 *)(puVar1 + 2) = 0;
  }
  return;
}



/* Entry: 109708fb8; end: 109709037;  */

void FUN_109708fb8(long param_1)

{
  uint *puVar1;
  ulong uVar2;
  
  puVar1 = *(uint **)(param_1 + 0x20);
  if ((puVar1 != (uint *)0x0) && (*puVar1 != 0)) {
    uVar2 = 0;
    do {
      if (*(long *)(puVar1 + uVar2 * 2 + 10) != 0) {
        _free(*(undefined8 *)(puVar1 + uVar2 * 2 + 0x18));
        if ((char)puVar1[1] == '\x01') {
          _free(*(undefined8 *)(puVar1 + uVar2 * 2 + 10));
        }
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *puVar1);
    _free(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(param_1);
  return;
}



/* Entry: 109709038; end: 109709367;  */

void FUN_109709038(long param_1,long param_2,int param_3)

{
  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined1 *puVar11;
  byte *pbVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  char *pcVar17;
  
  *(byte *)(param_2 + 0xb8) = *(byte *)(param_2 + 0xb8) | 0x80;
  uVar10 = *(uint *)(param_2 + 0x60);
  lVar16 = *(long *)(param_2 + 0x70);
  if (*(int *)(param_2 + 0xb0) != 0) {
    uVar13 = 0;
    do {
      uVar14 = (ulong)*(uint *)(param_2 + 0x88 + uVar13 * 4);
      lVar4 = *(long *)(param_2 + 0x10);
      (**(code **)(lVar4 + 0x28))(lVar4,uVar14,*(undefined8 *)(lVar4 + 0x68));
      func_0x000109730cd8(uVar14,lVar4);
      if ((int)uVar14 != 7) {
        uVar13 = (ulong)*(ushort *)(&UNK_10dfe6dba + (uVar14 & 0xffffffff) * 4);
        goto LAB_1097090dc;
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 < *(uint *)(param_2 + 0xb0));
  }
  uVar13 = 0;
LAB_1097090dc:
  if (uVar10 == 0) {
    uVar15 = 0xffffffff;
  }
  else {
    uVar14 = 0;
    pcVar2 = (char *)(lVar16 + 0x13);
    uVar15 = 0xffffffff;
    pcVar17 = pcVar2;
    do {
      uVar5 = (ulong)*(uint *)(pcVar17 + -0x13);
      func_0x000109730cd8(uVar5,*(ushort *)(pcVar17 + -3) & 0x1f);
      uVar3 = (uint)uVar5;
      if (uVar3 == 7) {
        *pcVar17 = '\a';
      }
      else {
        pcVar1 = &UNK_10dfe6db8 + (uVar5 & 0xffffffff) * 4 + uVar13 * 0x18;
        if (*pcVar1 == '\a' || (int)uVar15 == -1) {
          if ((int)uVar15 == -1) {
            if ((1 < uVar3) && ((*(byte *)(param_2 + 0x18) >> 6 & 1) != 0)) {
              uVar9 = 2;
              uVar15 = 0;
              uVar7 = 0;
              uVar8 = 1;
              goto LAB_10970918c;
            }
          }
          else if (1 < uVar3 || uVar13 - 2 < 4) {
            func_0x000109730c80(param_2,uVar15,(int)uVar14 + 1);
          }
        }
        else {
          pcVar2[(uVar15 & 0xffffffff) * 0x14] = *pcVar1;
          uVar9 = 3;
          if ((*(uint *)(param_2 + 0x18) & 0x80) != 0) {
            uVar9 = 4;
          }
          uVar7 = 1;
          uVar8 = 0;
LAB_10970918c:
          FUN_109710ea8(param_2,uVar9,uVar15,(int)uVar14 + 1,uVar7,uVar8);
        }
        *pcVar17 = pcVar1[1];
        uVar13 = (ulong)*(ushort *)(pcVar1 + 2);
        uVar15 = uVar14;
      }
      uVar14 = uVar14 + 1;
      pcVar17 = pcVar17 + 0x14;
    } while (uVar10 != uVar14);
  }
  if (*(int *)(param_2 + 0xb4) != 0) {
    lVar4 = 0x27;
    do {
      uVar14 = (ulong)*(uint *)(param_2 + lVar4 * 4);
      lVar6 = *(long *)(param_2 + 0x10);
      (**(code **)(lVar6 + 0x28))(lVar6,uVar14,*(undefined8 *)(lVar6 + 0x68));
      func_0x000109730cd8(uVar14,lVar6);
      if ((int)uVar14 != 7) {
        if ((&UNK_10dfe6db8)[(uVar14 & 0xffffffff) * 4 + uVar13 * 0x18] == '\a' || (int)uVar15 == -1
           ) {
          if (uVar13 - 2 < 4) {
            func_0x000109730c80(param_2,uVar15,*(undefined4 *)(param_2 + 0x60));
          }
        }
        else {
          *(undefined *)(lVar16 + (uVar15 & 0xffffffff) * 0x14 + 0x13) =
               (&UNK_10dfe6db8)[(uVar14 & 0xffffffff) * 4 + uVar13 * 0x18];
          uVar9 = 3;
          if ((*(uint *)(param_2 + 0x18) & 0x80) != 0) {
            uVar9 = 4;
          }
          FUN_109710ea8(param_2,uVar9,uVar15,*(undefined4 *)(param_2 + 0x60),1,0);
        }
        break;
      }
      uVar14 = lVar4 - 0x26;
      lVar4 = lVar4 + 1;
    } while (uVar14 < *(uint *)(param_2 + 0xb4));
  }
  uVar10 = *(uint *)(param_2 + 0x60);
  lVar16 = *(long *)(param_2 + 0x70);
  if ((param_3 == 0x4d6f6e67) && (1 < uVar10)) {
    puVar11 = (undefined1 *)(lVar16 + 0x13);
    lVar16 = (ulong)uVar10 - 1;
    do {
      if (*(int *)(puVar11 + 1) - 0x180bU < 5 && *(int *)(puVar11 + 1) - 0x180bU != 3) {
        puVar11[0x14] = *puVar11;
      }
      puVar11 = puVar11 + 0x14;
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
    uVar10 = *(uint *)(param_2 + 0x60);
    lVar16 = *(long *)(param_2 + 0x70);
  }
  if (uVar10 != 0) {
    uVar13 = (ulong)uVar10;
    pbVar12 = (byte *)(lVar16 + 0x13);
    do {
      *(uint *)(pbVar12 + -0xf) =
           *(uint *)(pbVar12 + -0xf) | *(uint *)(param_1 + (ulong)*pbVar12 * 4);
      pbVar12 = pbVar12 + 0x14;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
  }
  return;
}



/* Entry: 109709368; end: 109709787;  */

void FUN_109709368(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  bool bVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined *puVar8;
  undefined *puVar9;
  bool bVar10;
  undefined *puVar11;
  ushort *puVar12;
  long lVar13;
  undefined *puVar14;
  ulong uVar15;
  ushort *puVar16;
  
  puVar6 = (undefined4 *)(param_1 + 0x78);
  FUN_109703a44();
  uVar3 = *(undefined4 *)(param_1 + 0x7c);
  *puVar6 = 0x73746368;
  puVar6[1] = uVar3;
  *(undefined8 *)(puVar6 + 2) = 0x100000001;
  puVar6[4] = 1;
  puVar6[5] = *(undefined4 *)(param_1 + 0x70);
  puVar6[6] = *(undefined4 *)(param_1 + 0x74);
  piVar7 = (int *)(param_1 + 0x88);
  FUN_109703e04();
  iVar4 = *(int *)(param_1 + 0x70);
  *piVar7 = iVar4;
  piVar7[2] = 0x9730e64;
  piVar7[3] = 1;
  *(int *)(param_1 + 0x70) = iVar4 + 1;
  puVar6 = (undefined4 *)(param_1 + 0x78);
  FUN_109703a44();
  uVar3 = *(undefined4 *)(param_1 + 0x7c);
  *puVar6 = 0x63636d70;
  puVar6[1] = uVar3;
  *(undefined8 *)(puVar6 + 2) = 0x900000001;
  puVar6[4] = 1;
  puVar6[5] = *(undefined4 *)(param_1 + 0x70);
  puVar6[6] = *(undefined4 *)(param_1 + 0x74);
  puVar6 = (undefined4 *)(param_1 + 0x78);
  FUN_109703a44();
  uVar3 = *(undefined4 *)(param_1 + 0x7c);
  *puVar6 = 0x6c6f636c;
  puVar6[1] = uVar3;
  *(undefined8 *)(puVar6 + 2) = 0x900000001;
  puVar6[4] = 1;
  puVar6[5] = *(undefined4 *)(param_1 + 0x70);
  puVar6[6] = *(undefined4 *)(param_1 + 0x74);
  piVar7 = (int *)(param_1 + 0x88);
  FUN_109703e04();
  uVar15 = 0;
  iVar4 = *(int *)(param_1 + 0x70);
  *piVar7 = iVar4;
  piVar7[2] = 0;
  piVar7[3] = 0;
  *(int *)(param_1 + 0x70) = iVar4 + 1;
  do {
    uVar2 = ((uint)(0x2cL >> (uVar15 & 0x3f)) & 1) << 1 ^ 10;
    if (*(int *)(param_1 + 0xc) != 0x41726162) {
      uVar2 = 8;
    }
    FUN_1097039e0(param_1 + 0x28,*(undefined4 *)(&UNK_10dfe0e10 + uVar15 * 4),uVar2,1);
    piVar7 = (int *)(param_1 + 0x88);
    FUN_109703e04();
    iVar4 = *(int *)(param_1 + 0x70);
    *piVar7 = iVar4;
    piVar7[2] = 0;
    piVar7[3] = 0;
    *(int *)(param_1 + 0x70) = iVar4 + 1;
    uVar15 = uVar15 + 1;
  } while (uVar15 != 7);
  piVar7 = (int *)(param_1 + 0x88);
  FUN_109703e04();
  iVar4 = *(int *)(param_1 + 0x70);
  *piVar7 = iVar4;
  piVar7[2] = 0x9730ecc;
  piVar7[3] = 1;
  *(int *)(param_1 + 0x70) = iVar4 + 1;
  puVar6 = (undefined4 *)(param_1 + 0x78);
  FUN_109703a44();
  uVar3 = *(undefined4 *)(param_1 + 0x7c);
  *puVar6 = 0x726c6967;
  puVar6[1] = uVar3;
  *(undefined8 *)(puVar6 + 2) = 0xb00000001;
  puVar6[4] = 1;
  puVar6[5] = *(undefined4 *)(param_1 + 0x70);
  puVar6[6] = *(undefined4 *)(param_1 + 0x74);
  if (*(int *)(param_1 + 0xc) == 0x41726162) {
    piVar7 = (int *)(param_1 + 0x88);
    FUN_109703e04();
    iVar4 = *(int *)(param_1 + 0x70);
    *piVar7 = iVar4;
    piVar7[2] = 0x9730ee0;
    piVar7[3] = 1;
    *(int *)(param_1 + 0x70) = iVar4 + 1;
  }
  puVar6 = (undefined4 *)(param_1 + 0x78);
  FUN_109703a44();
  lVar13 = 0;
  uVar3 = *(undefined4 *)(param_1 + 0x7c);
  *puVar6 = 0x63616c74;
  puVar6[1] = uVar3;
  *(undefined8 *)(puVar6 + 2) = 0x900000001;
  puVar6[4] = 1;
  puVar6[5] = *(undefined4 *)(param_1 + 0x70);
  puVar6[6] = *(undefined4 *)(param_1 + 0x74);
  bVar10 = false;
  do {
    puVar8 = *(undefined **)(param_1 + 0x28);
    uVar2 = *(uint *)(param_1 + 0x68 + lVar13 * 4);
    FUN_109700ce0(puVar8,*(undefined4 *)(&UNK_10dfe0d44 + lVar13 * 4));
    puVar9 = puVar8;
    func_0x000109700e58();
    if (uVar2 == 0xffff) {
      puVar11 = puVar9 + 1;
      puVar14 = puVar9;
    }
    else {
      if (uVar2 < ((uint)(*(ushort *)(puVar9 + 2) >> 8) | (*(ushort *)(puVar9 + 2) & 0xff00ff) << 8)
         ) {
        puVar11 = puVar9 + (ulong)uVar2 * 6 + 4;
      }
      else {
        puVar11 = &UNK_10dfe4888;
      }
      puVar14 = puVar11 + 4;
      puVar11 = puVar11 + 5;
    }
    puVar1 = &UNK_10dfe4b0a;
    if (CONCAT11(*puVar14,*puVar11) != 0) {
      puVar1 = puVar9 + (uint)CONCAT11(*puVar14,*puVar11);
    }
    uVar2 = (uint)(*(ushort *)(puVar1 + 4) >> 8) | (*(ushort *)(puVar1 + 4) & 0xff00ff) << 8;
    if (uVar2 != 0) {
      uVar15 = 0;
      puVar16 = (ushort *)(puVar1 + 6);
      do {
        puVar12 = puVar16;
        if (((uint)(*(ushort *)(puVar1 + 4) >> 8) | (*(ushort *)(puVar1 + 4) & 0xff00ff) << 8) <=
            uVar15) {
          puVar12 = (ushort *)&UNK_10dfe4b08;
        }
        puVar9 = puVar8;
        func_0x000109700de4(puVar8,*puVar12 >> 8 | *puVar12 << 8);
        if ((int)puVar9 == 0x72636c74) goto LAB_1097096d4;
        uVar15 = uVar15 + 1;
        puVar16 = puVar16 + 1;
      } while (uVar2 != uVar15);
    }
    lVar13 = 1;
    bVar5 = !bVar10;
    bVar10 = true;
  } while (bVar5);
  piVar7 = (int *)(param_1 + 0x88);
  FUN_109703e04();
  iVar4 = *(int *)(param_1 + 0x70);
  *piVar7 = iVar4;
  piVar7[2] = 0;
  piVar7[3] = 0;
  *(int *)(param_1 + 0x70) = iVar4 + 1;
LAB_1097096d4:
  puVar6 = (undefined4 *)(param_1 + 0x78);
  FUN_109703a44();
  uVar3 = *(undefined4 *)(param_1 + 0x7c);
  *puVar6 = 0x6c696761;
  puVar6[1] = uVar3;
  *(undefined8 *)(puVar6 + 2) = 0x900000001;
  puVar6[4] = 1;
  puVar6[5] = *(undefined4 *)(param_1 + 0x70);
  puVar6[6] = *(undefined4 *)(param_1 + 0x74);
  puVar6 = (undefined4 *)(param_1 + 0x78);
  FUN_109703a44();
  uVar3 = *(undefined4 *)(param_1 + 0x7c);
  *puVar6 = 0x636c6967;
  puVar6[1] = uVar3;
  *(undefined8 *)(puVar6 + 2) = 0x900000001;
  puVar6[4] = 1;
  puVar6[5] = *(undefined4 *)(param_1 + 0x70);
  puVar6[6] = *(undefined4 *)(param_1 + 0x74);
  puVar6 = (undefined4 *)(param_1 + 0x78);
  FUN_109703a44();
  uVar3 = *(undefined4 *)(param_1 + 0x7c);
  *puVar6 = 0x6d736574;
  puVar6[1] = uVar3;
  *(undefined8 *)(puVar6 + 2) = 0x900000001;
  puVar6[4] = 1;
  puVar6[5] = *(undefined4 *)(param_1 + 0x70);
  puVar6[6] = *(undefined4 *)(param_1 + 0x74);
  return;
}



/* Entry: 109709788; end: 109709bef;  */

void FUN_109709788(undefined8 param_1,ulong param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  int iVar14;
  ulong uVar15;
  undefined8 uVar16;
  int iVar17;
  ulong uVar18;
  undefined8 *puVar19;
  long lVar20;
  undefined8 *puVar21;
  ulong uVar22;
  undefined8 *puVar23;
  int iVar24;
  int iVar25;
  ulong uVar26;
  uint uVar27;
  undefined4 *puVar28;
  long lVar29;
  int iVar30;
  uint uVar31;
  int iVar32;
  long lVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  int iStack_80;
  
  if ((*(byte *)(param_2 + 0xc3) & 1) != 0) {
    iVar7 = *(int *)(param_2 + 0x38);
    if (iVar7 != 5) {
      FUN_1096f7004(param_2,0,*(undefined4 *)(param_2 + 0x60));
    }
    iStack_80 = 0;
    uVar9 = *(int *)(param_3 + 0x28) >> 0x1f | 1;
    bVar11 = false;
    bVar12 = true;
    do {
      do {
        do {
          uVar8 = *(uint *)(param_2 + 0x60);
          uVar1 = uVar8 + iStack_80;
          if (uVar8 != 0) {
            lVar29 = *(long *)(param_2 + 0x70);
            lVar33 = *(long *)(param_2 + 0x80);
            uVar31 = uVar1;
            uVar10 = uVar8;
LAB_109709844:
            puVar19 = (undefined8 *)(lVar29 + (ulong)(uVar10 - 1) * 0x14);
            if ((*(byte *)((long)puVar19 + 0x13) & 0xfe) == 8) {
              iVar32 = 0;
              iVar30 = 0;
              iVar24 = 0;
              uVar18 = (ulong)uVar10;
              do {
                uVar27 = (int)uVar18 - 1;
                uVar26 = (ulong)uVar27;
                if ((*(byte *)(lVar29 + 0x13 + uVar26 * 0x14) & 0xfe) != 8) {
                  iVar17 = 0;
                  uVar15 = uVar18;
                  uVar26 = uVar18;
                  goto LAB_109709940;
                }
                lVar20 = *(long *)(*(long *)(param_3 + 0x90) + 0x10);
                if (lVar20 == 0) {
                  uVar16 = 0;
                }
                else {
                  uVar16 = *(undefined8 *)(lVar20 + 0x28);
                }
                puVar28 = (undefined4 *)(lVar29 + uVar26 * 0x14);
                lVar20 = param_3;
                (**(code **)(*(long *)(param_3 + 0x90) + 0x48))
                          (param_3,*(undefined8 *)(param_3 + 0x98),*puVar28,uVar16);
                bVar13 = *(char *)((long)puVar28 + 0x13) == '\b';
                iVar14 = (int)lVar20;
                iVar17 = 0;
                if (bVar13) {
                  iVar17 = iVar14;
                }
                iVar24 = iVar17 + iVar24;
                if (bVar13) {
                  iVar14 = 0;
                }
                iVar30 = iVar14 + iVar30;
                if (!bVar13) {
                  iVar32 = iVar32 + 1;
                }
                uVar18 = uVar26;
              } while (uVar27 != 0);
              iVar17 = 0;
              goto LAB_10970998c;
            }
            uVar27 = uVar10;
            if (bVar11) {
              uVar31 = uVar31 - 1;
              puVar21 = (undefined8 *)(lVar29 + (ulong)uVar31 * 0x14);
              uVar34 = puVar19[1];
              uVar16 = *puVar19;
              *(undefined4 *)(puVar21 + 2) = *(undefined4 *)(puVar19 + 2);
              puVar21[1] = uVar34;
              *puVar21 = uVar16;
              puVar19 = (undefined8 *)(lVar33 + (ulong)(uVar10 - 1) * 0x14);
              uVar34 = puVar19[1];
              uVar16 = *puVar19;
              puVar21 = (undefined8 *)(lVar33 + (ulong)uVar31 * 0x14);
              *(undefined4 *)(puVar21 + 2) = *(undefined4 *)(puVar19 + 2);
              puVar21[1] = uVar34;
              *puVar21 = uVar16;
            }
            goto LAB_109709b48;
          }
LAB_109709b50:
          if (!bVar12) {
            *(uint *)(param_2 + 0x60) = uVar1;
            goto LAB_109709bbc;
          }
          bVar12 = false;
          bVar11 = true;
        } while (iStack_80 + uVar8 == 0);
        bVar12 = false;
        bVar11 = true;
      } while (iStack_80 + uVar8 < *(uint *)(param_2 + 0x68));
      uVar18 = param_2;
      FUN_1096f5ea4();
      bVar12 = false;
      bVar11 = true;
    } while ((uVar18 & 1) != 0);
LAB_109709bbc:
    if (iVar7 != 5) {
      uVar1 = *(uint *)(param_2 + 0x60);
      uVar18 = 0;
      uVar9 = *(uint *)(param_2 + 0x60);
      if (uVar1 <= *(uint *)(param_2 + 0x60)) {
        uVar9 = uVar1;
      }
      uVar8 = uVar9 - 1;
      uVar26 = (ulong)uVar8;
      if (1 < uVar9 && uVar8 != 0) {
        puVar19 = *(undefined8 **)(param_2 + 0x70);
        puVar21 = (undefined8 *)((long)puVar19 + (ulong)uVar8 * 0x14);
        do {
          uVar26 = uVar26 - 1;
          uVar5 = *(undefined4 *)(puVar21 + 2);
          uVar34 = puVar21[1];
          uVar16 = *puVar21;
          uVar6 = *(undefined4 *)(puVar19 + 2);
          uVar35 = *puVar19;
          puVar21[1] = puVar19[1];
          *puVar21 = uVar35;
          *(undefined4 *)(puVar21 + 2) = uVar6;
          puVar19[1] = uVar34;
          *puVar19 = uVar16;
          *(undefined4 *)(puVar19 + 2) = uVar5;
          uVar18 = uVar18 + 1;
          puVar19 = (undefined8 *)((long)puVar19 + 0x14);
          puVar21 = (undefined8 *)((long)puVar21 + -0x14);
        } while (uVar18 < (uVar26 & 0xffffffff));
      }
      if (*(char *)(param_2 + 0x5b) == '\x01') {
        uVar18 = 0;
        uVar9 = *(uint *)(param_2 + 0x60);
        if (uVar1 <= *(uint *)(param_2 + 0x60)) {
          uVar9 = uVar1;
        }
        uVar1 = uVar9 - 1;
        uVar26 = (ulong)uVar1;
        if (1 < uVar9 && uVar1 != 0) {
          puVar19 = *(undefined8 **)(param_2 + 0x80);
          puVar21 = (undefined8 *)((long)puVar19 + (ulong)uVar1 * 0x14);
          do {
            uVar26 = uVar26 - 1;
            uVar5 = *(undefined4 *)(puVar21 + 2);
            uVar34 = puVar21[1];
            uVar16 = *puVar21;
            uVar6 = *(undefined4 *)(puVar19 + 2);
            uVar35 = *puVar19;
            puVar21[1] = puVar19[1];
            *puVar21 = uVar35;
            *(undefined4 *)(puVar21 + 2) = uVar6;
            puVar19[1] = uVar34;
            *puVar19 = uVar16;
            *(undefined4 *)(puVar19 + 2) = uVar5;
            uVar18 = uVar18 + 1;
            puVar19 = (undefined8 *)((long)puVar19 + 0x14);
            puVar21 = (undefined8 *)((long)puVar21 + -0x14);
          } while (uVar18 < (uVar26 & 0xffffffff));
        }
      }
      return;
    }
  }
  return;
  while( true ) {
    iVar17 = *(int *)(lVar33 + uVar22 * 0x14) + iVar17;
    uVar15 = (ulong)((int)uVar15 - 1);
    if (uVar22 == 0) break;
LAB_109709940:
    uVar26 = uVar26 - 1;
    uVar22 = uVar26 & 0xffffffff;
    lVar20 = lVar29 + uVar22 * 0x14;
    if (((*(byte *)(lVar20 + 0x13) & 0xfe) == 8) ||
       ((((*(ushort *)(lVar20 + 0x10) >> 5 & 1) == 0 || ((*(ushort *)(lVar20 + 0xc) >> 4 & 1) != 0))
        && ((1 << (ulong)(*(ushort *)(lVar20 + 0x10) & 0x1f) & 0x780fcccU) == 0))))
    goto LAB_109709990;
  }
LAB_10970998c:
  uVar15 = 0;
LAB_109709990:
  iVar17 = iVar17 - iVar24;
  iVar24 = iVar17 * uVar9;
  iVar30 = iVar30 * uVar9;
  if ((iVar30 >= 1 && iVar24 != iVar30) && (iVar30 < 1 || iVar30 <= iVar24)) {
    iVar14 = 0;
    if (iVar30 != 0) {
      iVar14 = iVar24 / iVar30;
    }
    iVar14 = iVar14 + -1;
  }
  else {
    iVar14 = 0;
  }
  iVar25 = iVar14 + 1;
  if (iVar25 * iVar30 < iVar24 && 0 < iVar32) {
    iVar24 = (iVar14 + 2) * iVar30 - iVar24;
    if (iVar24 < 1) {
      iVar30 = 0;
    }
    else {
      iVar17 = 0;
      iVar30 = 0;
      if (iVar25 * iVar32 != 0) {
        iVar30 = iVar24 / (iVar25 * iVar32);
      }
    }
  }
  else {
    iVar30 = 0;
    iVar25 = iVar14;
  }
  uVar27 = (uint)uVar18 + 1;
  if (bVar12) {
    iStack_80 = iStack_80 + iVar25 * iVar32;
  }
  else {
    uVar26 = (ulong)uVar10;
    FUN_109710ea8(param_2,3,uVar15,uVar26,1,0);
    if ((uint)uVar18 < uVar10) {
      iVar17 = iVar17 / 2;
      do {
        lVar20 = *(long *)(*(long *)(param_3 + 0x90) + 0x10);
        if (lVar20 == 0) {
          uVar16 = 0;
        }
        else {
          uVar16 = *(undefined8 *)(lVar20 + 0x28);
        }
        uVar26 = uVar26 - 1;
        puVar19 = (undefined8 *)(lVar29 + uVar26 * 0x14);
        lVar20 = param_3;
        (**(code **)(*(long *)(param_3 + 0x90) + 0x48))
                  (param_3,*(undefined8 *)(param_3 + 0x98),*(undefined4 *)puVar19,uVar16);
        iVar24 = iVar25 + 1;
        if (*(char *)((long)puVar19 + 0x13) != '\t') {
          iVar24 = 1;
        }
        puVar21 = (undefined8 *)(lVar33 + uVar26 * 0x14);
        *(undefined4 *)puVar21 = 0;
        if (iVar24 != 0) {
          iVar32 = 0;
          do {
            iVar14 = 0;
            if (iVar32 != 0) {
              iVar14 = iVar30;
            }
            iVar2 = iVar14 + (iVar17 - (int)lVar20);
            iVar3 = iVar17 + (int)lVar20;
            iVar32 = iVar32 + -1;
            iVar4 = iVar2;
            if (iVar7 != 5) {
              iVar4 = iVar17;
            }
            *(int *)(puVar21 + 1) = iVar4;
            puVar23 = (undefined8 *)(lVar29 + (ulong)(iVar32 + uVar31) * 0x14);
            uVar34 = puVar19[1];
            uVar16 = *puVar19;
            *(undefined4 *)(puVar23 + 2) = *(undefined4 *)(puVar19 + 2);
            puVar23[1] = uVar34;
            *puVar23 = uVar16;
            puVar23 = (undefined8 *)(lVar33 + (ulong)(iVar32 + uVar31) * 0x14);
            uVar34 = puVar21[1];
            uVar16 = *puVar21;
            *(undefined4 *)(puVar23 + 2) = *(undefined4 *)(puVar21 + 2);
            puVar23[1] = uVar34;
            *puVar23 = uVar16;
            iVar17 = iVar2;
            if (iVar7 != 5) {
              iVar17 = iVar3 - iVar14;
            }
          } while (-iVar24 != iVar32);
          uVar31 = uVar31 + iVar32;
        }
      } while (uVar18 < uVar26);
    }
  }
LAB_109709b48:
  uVar10 = uVar27 - 1;
  if (uVar10 == 0) goto LAB_109709b50;
  goto LAB_109709844;
}



/* Entry: 109709bf0; end: 109709bff;  */

void FUN_109709bf0(long param_1,long param_2)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  uint uVar11;
  long lVar12;
  undefined1 *puVar13;
  byte *pbVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  char *pcVar19;
  
  lVar12 = *(long *)(param_1 + 0x88);
  iVar3 = *(int *)(param_1 + 4);
  *(byte *)(param_2 + 0xb8) = *(byte *)(param_2 + 0xb8) | 0x80;
  uVar11 = *(uint *)(param_2 + 0x60);
  lVar18 = *(long *)(param_2 + 0x70);
  if (*(int *)(param_2 + 0xb0) != 0) {
    uVar15 = 0;
    do {
      uVar16 = (ulong)*(uint *)(param_2 + 0x88 + uVar15 * 4);
      lVar5 = *(long *)(param_2 + 0x10);
      (**(code **)(lVar5 + 0x28))(lVar5,uVar16,*(undefined8 *)(lVar5 + 0x68));
      func_0x000109730cd8(uVar16,lVar5);
      if ((int)uVar16 != 7) {
        uVar15 = (ulong)*(ushort *)(&UNK_10dfe6dba + (uVar16 & 0xffffffff) * 4);
        goto LAB_1097090dc;
      }
      uVar15 = uVar15 + 1;
    } while (uVar15 < *(uint *)(param_2 + 0xb0));
  }
  uVar15 = 0;
LAB_1097090dc:
  if (uVar11 == 0) {
    uVar17 = 0xffffffff;
  }
  else {
    uVar16 = 0;
    pcVar2 = (char *)(lVar18 + 0x13);
    uVar17 = 0xffffffff;
    pcVar19 = pcVar2;
    do {
      uVar6 = (ulong)*(uint *)(pcVar19 + -0x13);
      func_0x000109730cd8(uVar6,*(ushort *)(pcVar19 + -3) & 0x1f);
      uVar4 = (uint)uVar6;
      if (uVar4 == 7) {
        *pcVar19 = '\a';
      }
      else {
        pcVar1 = &UNK_10dfe6db8 + (uVar6 & 0xffffffff) * 4 + uVar15 * 0x18;
        if (*pcVar1 == '\a' || (int)uVar17 == -1) {
          if ((int)uVar17 == -1) {
            if ((1 < uVar4) && ((*(byte *)(param_2 + 0x18) >> 6 & 1) != 0)) {
              uVar10 = 2;
              uVar17 = 0;
              uVar8 = 0;
              uVar9 = 1;
              goto LAB_10970918c;
            }
          }
          else if (1 < uVar4 || uVar15 - 2 < 4) {
            func_0x000109730c80(param_2,uVar17,(int)uVar16 + 1);
          }
        }
        else {
          pcVar2[(uVar17 & 0xffffffff) * 0x14] = *pcVar1;
          uVar10 = 3;
          if ((*(uint *)(param_2 + 0x18) & 0x80) != 0) {
            uVar10 = 4;
          }
          uVar8 = 1;
          uVar9 = 0;
LAB_10970918c:
          FUN_109710ea8(param_2,uVar10,uVar17,(int)uVar16 + 1,uVar8,uVar9);
        }
        *pcVar19 = pcVar1[1];
        uVar15 = (ulong)*(ushort *)(pcVar1 + 2);
        uVar17 = uVar16;
      }
      uVar16 = uVar16 + 1;
      pcVar19 = pcVar19 + 0x14;
    } while (uVar11 != uVar16);
  }
  if (*(int *)(param_2 + 0xb4) != 0) {
    lVar5 = 0x27;
    do {
      uVar16 = (ulong)*(uint *)(param_2 + lVar5 * 4);
      lVar7 = *(long *)(param_2 + 0x10);
      (**(code **)(lVar7 + 0x28))(lVar7,uVar16,*(undefined8 *)(lVar7 + 0x68));
      func_0x000109730cd8(uVar16,lVar7);
      if ((int)uVar16 != 7) {
        if ((&UNK_10dfe6db8)[(uVar16 & 0xffffffff) * 4 + uVar15 * 0x18] == '\a' || (int)uVar17 == -1
           ) {
          if (uVar15 - 2 < 4) {
            func_0x000109730c80(param_2,uVar17,*(undefined4 *)(param_2 + 0x60));
          }
        }
        else {
          *(undefined *)(lVar18 + (uVar17 & 0xffffffff) * 0x14 + 0x13) =
               (&UNK_10dfe6db8)[(uVar16 & 0xffffffff) * 4 + uVar15 * 0x18];
          uVar10 = 3;
          if ((*(uint *)(param_2 + 0x18) & 0x80) != 0) {
            uVar10 = 4;
          }
          FUN_109710ea8(param_2,uVar10,uVar17,*(undefined4 *)(param_2 + 0x60),1,0);
        }
        break;
      }
      uVar16 = lVar5 - 0x26;
      lVar5 = lVar5 + 1;
    } while (uVar16 < *(uint *)(param_2 + 0xb4));
  }
  uVar11 = *(uint *)(param_2 + 0x60);
  lVar18 = *(long *)(param_2 + 0x70);
  if ((iVar3 == 0x4d6f6e67) && (1 < uVar11)) {
    puVar13 = (undefined1 *)(lVar18 + 0x13);
    lVar18 = (ulong)uVar11 - 1;
    do {
      if (*(int *)(puVar13 + 1) - 0x180bU < 5 && *(int *)(puVar13 + 1) - 0x180bU != 3) {
        puVar13[0x14] = *puVar13;
      }
      puVar13 = puVar13 + 0x14;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
    uVar11 = *(uint *)(param_2 + 0x60);
    lVar18 = *(long *)(param_2 + 0x70);
  }
  if (uVar11 != 0) {
    uVar15 = (ulong)uVar11;
    pbVar14 = (byte *)(lVar18 + 0x13);
    do {
      *(uint *)(pbVar14 + -0xf) =
           *(uint *)(pbVar14 + -0xf) | *(uint *)(lVar12 + (ulong)*pbVar14 * 4);
      pbVar14 = pbVar14 + 0x14;
      uVar15 = uVar15 - 1;
    } while (uVar15 != 0);
  }
  return;
}



/* Entry: 109709c00; end: 109709e87;  */

void FUN_109709c00(long param_1,long param_2,ulong param_3,ulong param_4)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  bool bVar5;
  bool bVar6;
  undefined4 *puVar7;
  uint uVar8;
  ulong uVar9;
  int *piVar10;
  ushort uVar11;
  ulong uVar12;
  uint uVar13;
  ushort *puVar14;
  long lVar15;
  int iVar16;
  long lVar18;
  long lVar19;
  uint uVar20;
  ulong uVar21;
  uint uVar22;
  undefined1 auStack_2f0 [640];
  long lStack_70;
  ulong uVar17;
  
  uVar8 = (uint)param_4;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar15 = *(long *)(param_2 + 0x70);
  uVar22 = 0xdc;
  uVar21 = param_3;
  do {
    uVar9 = param_3;
    if ((uint)param_3 < uVar8) {
      uVar9 = param_3 & 0xffffffff;
      puVar14 = (ushort *)(lVar15 + 0x10 + (param_3 & 0xffffffff) * 0x14);
      while( true ) {
        bVar5 = false;
        bVar6 = true;
        if ((1 << (ulong)(*puVar14 & 0x1f) & 0x1c00U) != 0) {
          uVar13 = (uint)(*puVar14 >> 8);
          bVar6 = uVar13 <= uVar22;
          bVar5 = uVar22 == uVar13;
        }
        if (!bVar6 || bVar5) break;
        uVar9 = uVar9 + 1;
        puVar14 = puVar14 + 10;
        if ((param_4 & 0xffffffff) == uVar9) goto LAB_109709e4c;
      }
    }
    uVar13 = (uint)uVar9;
    if (uVar13 == uVar8) break;
    lVar18 = lVar15 + (uVar9 & 0xffffffff) * 0x14;
    uVar11 = *(ushort *)(lVar18 + 0x10);
    param_3 = uVar9;
    if ((1 << (ulong)(uVar11 & 0x1f) & 0x1c00U) == 0 || uVar11 >> 8 <= uVar22) {
      uVar17 = uVar9;
      if (uVar13 < uVar8) {
        uVar9 = uVar9 & 0xffffffff;
        while (piVar10 = (int *)(lVar15 + uVar9 * 0x14), uVar11 = *(ushort *)(piVar10 + 4),
              uVar17 = uVar9, (1 << (ulong)(uVar11 & 0x1f) & 0x1c00U) != 0 && uVar22 == uVar11 >> 8)
        {
          iVar16 = *piVar10;
          if (iVar16 != 0x654) {
            uVar12 = 0xffffffffffffffff;
            piVar10 = (int *)&UNK_10dfe7400;
            do {
              if (uVar12 == 0xc) goto LAB_109709d3c;
              iVar3 = *piVar10;
              uVar12 = uVar12 + 1;
              piVar10 = piVar10 + 1;
            } while (iVar16 != iVar3);
            if (0xc < uVar12) break;
          }
          uVar9 = uVar9 + 1;
          uVar17 = param_4;
          if (uVar9 == (param_4 & 0xffffffff)) break;
        }
      }
LAB_109709d3c:
      iVar16 = (int)uVar17;
      if (iVar16 - uVar13 != 0) {
        uVar20 = (uint)uVar21;
        if (1 < iVar16 - uVar20) {
          FUN_1096f65e4(param_2,uVar21,uVar17);
        }
        lVar19 = (ulong)(iVar16 - uVar13) * 0x14;
        _memcpy(auStack_2f0,lVar18,lVar19);
        uVar1 = iVar16 + (uVar20 - uVar13);
        uVar9 = (ulong)uVar1;
        param_1 = lVar15 + (uVar21 & 0xffffffff) * 0x14;
        _memmove(lVar15 + uVar9 * 0x14,param_1,(ulong)(uVar13 - uVar20) * 0x14);
        _memcpy(param_1,auStack_2f0,lVar19);
        param_3 = uVar17;
        if (uVar20 < uVar1) {
          uVar11 = 0x1900;
          if (uVar22 != 0xdc) {
            uVar11 = 0x1a00;
          }
          lVar18 = uVar9 - (uVar21 & 0xffffffff);
          puVar14 = (ushort *)(lVar15 + 0x10 + (uVar21 & 0xffffffff) * 0x14);
          do {
            if ((1 << (ulong)(*puVar14 & 0x1f) & 0x1c00U) != 0) {
              *puVar14 = *puVar14 & 0xff | uVar11;
            }
            puVar14 = puVar14 + 10;
            lVar18 = lVar18 + -1;
            uVar21 = uVar9;
          } while (lVar18 != 0);
        }
      }
    }
    bVar5 = uVar22 < 0xdd;
    uVar22 = uVar22 + 10;
  } while (bVar5);
LAB_109709e4c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  lVar15 = 4;
  do {
    uVar4 = *(undefined4 *)(&UNK_10dfe7434 + lVar15);
    puVar7 = (undefined4 *)(param_1 + 0x78);
    FUN_109703a44();
    uVar2 = *(undefined4 *)(param_1 + 0x7c);
    *puVar7 = uVar4;
    puVar7[1] = uVar2;
    *(undefined8 *)(puVar7 + 2) = 1;
    puVar7[4] = 0;
    puVar7[5] = *(undefined4 *)(param_1 + 0x70);
    puVar7[6] = *(undefined4 *)(param_1 + 0x74);
    lVar15 = lVar15 + 4;
  } while (lVar15 != 0x10);
  return;
}



/* Entry: 109709e88; end: 109709eff;  */

void FUN_109709e88(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  long lVar4;
  
  lVar4 = 4;
  do {
    uVar2 = *(undefined4 *)(&UNK_10dfe7434 + lVar4);
    puVar3 = (undefined4 *)(param_1 + 0x78);
    FUN_109703a44();
    uVar1 = *(undefined4 *)(param_1 + 0x7c);
    *puVar3 = uVar2;
    puVar3[1] = uVar1;
    *(undefined8 *)(puVar3 + 2) = 1;
    puVar3[4] = 0;
    puVar3[5] = *(undefined4 *)(param_1 + 0x70);
    puVar3[6] = *(undefined4 *)(param_1 + 0x74);
    lVar4 = lVar4 + 4;
  } while (lVar4 != 0x10);
  return;
}



/* Entry: 109709f00; end: 109709fff;  */

void FUN_109709f00(long param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(param_1 + 0x78);
  FUN_109703a44();
  uVar1 = *(undefined4 *)(param_1 + 0x7c);
  *puVar2 = 0x63616c74;
  puVar2[1] = uVar1;
  *(undefined8 *)(puVar2 + 2) = 0x100000000;
  puVar2[4] = 0;
  puVar2[5] = *(undefined4 *)(param_1 + 0x70);
  puVar2[6] = *(undefined4 *)(param_1 + 0x74);
  return;
}



/* Entry: 10970a000; end: 10970a003;  */

void FUN_10970a000(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)();
  return;
}



/* Entry: 10970a004; end: 10970a76b;  */

void FUN_10970a004(undefined8 param_1,ulong *param_2,ulong param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulong *puVar7;
  ulong *puVar8;
  undefined8 uVar9;
  int iVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  byte *pbVar15;
  uint uVar16;
  ulong *puVar17;
  int iVar18;
  ulong *puVar19;
  int iVar20;
  ulong *puVar21;
  int iVar22;
  int iStack_84;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(byte *)(param_2 + 0x17) = (byte)param_2[0x17] | 0x80;
  *(undefined2 *)((long)param_2 + 0x5a) = 1;
  *(undefined4 *)((long)param_2 + 100) = 0;
  param_2[0xf] = param_2[0xe];
  uVar2 = (uint)param_2[0xc];
  *(undefined4 *)((long)param_2 + 0x5c) = 0;
  puVar8 = param_2;
  if (uVar2 != 0) {
    uVar11 = 0;
    puVar17 = (ulong *)0x0;
    puVar19 = (ulong *)0x0;
    do {
      if ((char)param_2[0xb] != '\x01') break;
      uVar13 = param_2[0xe];
      uVar4 = *(uint *)(uVar13 + uVar11 * 0x14);
      puVar21 = (ulong *)(ulong)uVar4;
      uVar12 = (uint)puVar19;
      if (uVar4 >> 1 == 0x1817) {
        uVar16 = (uint)puVar17;
        if ((uVar12 < uVar16 || uVar12 - uVar16 == 0) || (uVar12 != *(uint *)((long)param_2 + 100)))
        {
          if (((byte)param_2[3] >> 4 & 1) == 0) {
            uStack_80 = (ulong)uStack_80._4_4_ << 0x20;
            lVar14 = *(long *)(*(long *)(param_3 + 0x90) + 0x10);
            if (lVar14 == 0) {
              uVar9 = 0;
            }
            else {
              uVar9 = *(undefined8 *)(lVar14 + 0x10);
            }
            puVar8 = *(ulong **)(param_3 + 0x98);
            uVar11 = param_3;
            (**(code **)(*(long *)(param_3 + 0x90) + 0x30))(param_3,puVar8,0x25cc,&uStack_80,uVar9);
            if ((int)uVar11 != 0) {
              uVar11 = param_3;
              FUN_1097348b4(param_3,puVar21);
              uVar12 = uVar4;
              uVar16 = 0x25cc;
              if ((int)uVar11 == 0) {
                uVar12 = 0x25cc;
                uVar16 = uVar4;
              }
              uStack_80 = CONCAT44(uVar12,uVar16);
              puVar8 = (ulong *)0x1;
              FUN_109730ba4(param_2,1,2,&uStack_80);
              goto LAB_10970a284;
            }
          }
          FUN_109704924(param_2);
        }
        else {
          puVar8 = (ulong *)0x3;
          FUN_109710ea8(param_2,3,puVar17,uVar11,1,1);
          puVar7 = param_2;
          FUN_109704924();
          if ((int)puVar7 == 0) break;
          uVar11 = param_3;
          FUN_1097348b4();
          puVar8 = puVar21;
          if ((uVar11 & 1) == 0) {
            func_0x0001096f67a8(param_2,puVar17,uVar12 + 1);
            uVar11 = param_2[0xf];
            puVar8 = (ulong *)(uVar11 + (long)puVar19 * 0x14);
            uStack_78 = puVar8[1];
            uStack_80 = *puVar8;
            uStack_70 = (undefined4)puVar8[2];
            puVar19 = (ulong *)(uVar11 + (long)puVar17 * 0x14);
            puVar8 = puVar19;
            _memmove(uVar11 + (ulong)(uVar16 + 1) * 0x14,puVar19,(ulong)(uVar12 - uVar16) * 0x14);
            puVar19[1] = uStack_78;
            *puVar19 = uStack_80;
            *(undefined4 *)(puVar19 + 2) = uStack_70;
          }
        }
LAB_10970a284:
        puVar17 = (ulong *)(ulong)*(uint *)((long)param_2 + 100);
        puVar19 = puVar17;
      }
      else {
        uVar3 = *(uint *)((long)param_2 + 100);
        puVar17 = (ulong *)(ulong)uVar3;
        uVar16 = uVar4 - 0x1100;
        if ((uVar16 >= 0x60 && 0x1b < uVar4 - 0xa960) && (uVar16 < 0x60 || uVar4 - 0xa960 != 0x1c))
        {
          uVar16 = uVar4 - 0xac00;
          if (uVar16 >> 2 < 0xae9) {
            uStack_80 = (ulong)uStack_80._4_4_ << 0x20;
            lVar14 = *(long *)(*(long *)(param_3 + 0x90) + 0x10);
            if (lVar14 == 0) {
              uVar9 = 0;
            }
            else {
              uVar9 = *(undefined8 *)(lVar14 + 0x10);
            }
            puVar8 = *(ulong **)(param_3 + 0x98);
            uVar11 = param_3;
            (**(code **)(*(long *)(param_3 + 0x90) + 0x30))(param_3,puVar8,puVar21,&uStack_80,uVar9)
            ;
            uVar5 = (uVar16 & 0xffff) / 0x24c;
            uVar16 = uVar16 + uVar5 * -0x24c;
            uVar6 = (uVar16 >> 2 & 0x3fff) / 7;
            uVar16 = uVar16 + uVar6 * -0x1c;
            iVar10 = (int)uVar11;
            if ((uVar16 & 0xffff) == 0) {
              uVar1 = *(int *)((long)param_2 + 0x5c) + 1;
              if ((uVar1 < uVar2) &&
                 (iVar18 = *(int *)(param_2[0xe] + (ulong)uVar1 * 0x14), iVar18 - 0x11a8U < 0x1b)) {
                iStack_84 = uVar4 + iVar18 + -0x11a7;
                uStack_80 = uStack_80 & 0xffffffff00000000;
                lVar14 = *(long *)(*(long *)(param_3 + 0x90) + 0x10);
                if (lVar14 == 0) {
                  uVar9 = 0;
                }
                else {
                  uVar9 = *(undefined8 *)(lVar14 + 0x10);
                }
                uVar11 = param_3;
                (**(code **)(*(long *)(param_3 + 0x90) + 0x30))
                          (param_3,*(undefined8 *)(param_3 + 0x98),iStack_84,&uStack_80,uVar9);
                if ((int)uVar11 != 0) {
                  puVar8 = (ulong *)0x2;
                  FUN_109730ba4(param_2,2,1,&iStack_84);
                  puVar19 = (ulong *)(ulong)(uVar3 + 1);
                  goto LAB_10970a71c;
                }
                puVar8 = (ulong *)0x3;
                FUN_109710ea8(param_2,3,*(int *)((long)param_2 + 0x5c),
                              *(int *)((long)param_2 + 0x5c) + 2,1,0);
              }
              if ((iVar10 == 0) ||
                 ((uVar4 = *(int *)((long)param_2 + 0x5c) + 1, uVar4 < uVar2 &&
                  ((iVar18 = *(int *)(param_2[0xe] + (ulong)uVar4 * 0x14), iVar18 - 0x11a8U < 0x58
                   || (iVar18 - 0xd7cbU < 0x31)))))) {
LAB_10970a540:
                iVar18 = uVar6 + 0x1161;
                uStack_80 = CONCAT44(iVar18,uVar5) | 0x1100;
                uStack_78 = CONCAT44(uStack_78._4_4_,uVar16 + 0x11a7) & 0xffffffff0000ffff;
                iStack_84 = 0;
                puVar8 = *(ulong **)(param_3 + 0x98);
                uVar11 = param_3;
                (**(code **)(*(long *)(param_3 + 0x90) + 0x30))();
                if ((int)uVar11 != 0) {
                  iStack_84 = 0;
                  lVar14 = *(long *)(*(long *)(param_3 + 0x90) + 0x10);
                  if (lVar14 == 0) {
                    uVar9 = 0;
                  }
                  else {
                    uVar9 = *(undefined8 *)(lVar14 + 0x10);
                  }
                  puVar8 = *(ulong **)(param_3 + 0x98);
                  uVar11 = param_3;
                  (**(code **)(*(long *)(param_3 + 0x90) + 0x30))
                            (param_3,puVar8,iVar18,&iStack_84,uVar9);
                  if ((int)uVar11 != 0) {
                    if ((uVar16 & 0xffff) == 0) {
                      iVar18 = 2;
                      puVar8 = (ulong *)0x1;
                      FUN_109730ba4(param_2,1,2,&uStack_80);
                      if (iVar10 != 0) {
                        FUN_109704924(param_2);
                        iVar18 = 3;
                      }
                    }
                    else {
                      iStack_84 = 0;
                      lVar14 = *(long *)(*(long *)(param_3 + 0x90) + 0x10);
                      if (lVar14 == 0) {
                        uVar9 = 0;
                      }
                      else {
                        uVar9 = *(undefined8 *)(lVar14 + 0x10);
                      }
                      puVar8 = *(ulong **)(param_3 + 0x98);
                      uVar11 = param_3;
                      (**(code **)(*(long *)(param_3 + 0x90) + 0x30))
                                (param_3,puVar8,uVar16 + 0x11a7 & 0xffff,&iStack_84,uVar9);
                      if ((int)uVar11 == 0) goto LAB_10970a704;
                      iVar18 = 3;
                      puVar8 = (ulong *)0x1;
                      FUN_109730ba4(param_2,1,3,&uStack_80);
                    }
                    if ((param_2[0xb] & 1) != 0) {
                      uVar11 = param_2[0xf];
                      puVar19 = (ulong *)(ulong)(iVar18 + uVar3);
                      *(undefined1 *)(uVar11 + (long)puVar17 * 0x14 + 0x13) = 1;
                      *(undefined1 *)(uVar11 + (ulong)(uVar3 + 1) * 0x14 + 0x13) = 2;
                      if (uVar3 + 2 < iVar18 + uVar3) {
                        *(undefined1 *)(uVar11 + (ulong)(uVar3 + 2) * 0x14 + 0x13) = 3;
                      }
                      goto LAB_10970a488;
                    }
                    break;
                  }
                }
                if ((uVar16 & 0xffff) == 0) {
                  iVar18 = *(int *)((long)param_2 + 0x5c);
                  if ((iVar18 + 1U < uVar2) &&
                     ((iVar22 = *(int *)(param_2[0xe] + (ulong)(iVar18 + 1U) * 0x14),
                      iVar22 - 0x11a8U < 0x58 || (iVar22 - 0xd7cbU < 0x31)))) {
                    puVar8 = (ulong *)0x3;
                    FUN_109710ea8(param_2,3,iVar18,iVar18 + 2,1,0);
                  }
                }
              }
            }
            else if (iVar10 == 0) goto LAB_10970a540;
LAB_10970a704:
            if (iVar10 != 0) {
              uVar12 = uVar3 + 1;
            }
            puVar19 = (ulong *)(ulong)uVar12;
          }
        }
        else {
          iVar10 = (int)uVar11;
          if ((iVar10 + 1U < uVar2) &&
             (iVar18 = *(int *)(uVar13 + (ulong)(iVar10 + 1U) * 0x14),
             iVar18 - 0x1160U < 0x48 || iVar18 - 0xd7b0U < 0x17)) {
            if (iVar10 + 2U < uVar2) {
              iVar20 = *(int *)(uVar13 + (ulong)(iVar10 + 2U) * 0x14);
              iVar22 = iVar20 + -0x11a7;
              if (0x57 < iVar20 - 0x11a8U && 0x30 < iVar20 - 0xd7cbU) {
                iVar22 = 0;
                iVar20 = 0;
              }
            }
            else {
              iVar22 = 0;
              iVar20 = 0;
            }
            uVar12 = 2;
            if (iVar20 != 0) {
              uVar12 = 3;
            }
            puVar8 = (ulong *)(ulong)uVar12;
            puVar19 = (ulong *)0x3;
            FUN_109710ea8(param_2,3,uVar11,uVar12 + iVar10,1,0);
            if (((uVar16 < 0x13) && (iVar18 - 0x1161U < 0x15)) &&
               ((iVar20 == 0 || (iVar20 - 0x11a8U < 0x1b)))) {
              iStack_84 = iVar18 * 0x1c + uVar4 * 0x24c + iVar22 + -0x28469c;
              uStack_80 = uStack_80 & 0xffffffff00000000;
              puVar19 = *(ulong **)(param_3 + 0x98);
              uVar11 = param_3;
              (**(code **)(*(long *)(param_3 + 0x90) + 0x30))();
              if ((int)uVar11 != 0) {
                FUN_109730ba4(param_2,puVar8,1,&iStack_84);
                puVar19 = (ulong *)(ulong)(uVar3 + 1);
                goto LAB_10970a71c;
              }
            }
            *(undefined1 *)(param_2[0xe] + (ulong)*(uint *)((long)param_2 + 0x5c) * 0x14 + 0x13) = 1
            ;
            FUN_109704924(param_2);
            iVar10 = 2;
            *(undefined1 *)(param_2[0xe] + (ulong)*(uint *)((long)param_2 + 0x5c) * 0x14 + 0x13) = 2
            ;
            FUN_109704924(param_2);
            puVar8 = puVar19;
            if (iVar20 != 0) {
              iVar10 = 3;
              *(undefined1 *)(param_2[0xe] + (ulong)*(uint *)((long)param_2 + 0x5c) * 0x14 + 0x13) =
                   3;
              FUN_109704924(param_2);
              puVar8 = puVar19;
            }
            if ((char)param_2[0xb] == '\x01') {
              puVar19 = (ulong *)(ulong)(iVar10 + uVar3);
LAB_10970a488:
              if (*(int *)((long)param_2 + 0x1c) == 0) {
                puVar8 = puVar17;
                func_0x0001096f67a8(param_2,puVar17,puVar19);
              }
              goto LAB_10970a71c;
            }
            break;
          }
        }
        FUN_109704924(param_2);
      }
LAB_10970a71c:
      uVar11 = (ulong)*(uint *)((long)param_2 + 0x5c);
    } while (*(uint *)((long)param_2 + 0x5c) < uVar2);
  }
  FUN_1096f6314();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  uVar11 = param_2[0x11];
  if ((uVar11 != 0) && (iVar10 = (int)puVar8[0xc], iVar10 != 0)) {
    pbVar15 = (byte *)(puVar8[0xe] + 0x13);
    do {
      *(uint *)(pbVar15 + -0xf) =
           *(uint *)(pbVar15 + -0xf) | *(uint *)(uVar11 + (ulong)*pbVar15 * 4);
      pbVar15 = pbVar15 + 0x14;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
  *(byte *)(puVar8 + 0x17) = (byte)puVar8[0x17] & 0x7f;
  return;
}



/* Entry: 10970a76c; end: 10970a7b3;  */

void FUN_10970a76c(long param_1,long param_2)

{
  long lVar1;
  int iVar2;
  byte *pbVar3;
  
  lVar1 = *(long *)(param_1 + 0x88);
  if ((lVar1 != 0) && (iVar2 = *(int *)(param_2 + 0x60), iVar2 != 0)) {
    pbVar3 = (byte *)(*(long *)(param_2 + 0x70) + 0x13);
    do {
      *(uint *)(pbVar3 + -0xf) = *(uint *)(pbVar3 + -0xf) | *(uint *)(lVar1 + (ulong)*pbVar3 * 4);
      pbVar3 = pbVar3 + 0x14;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  *(byte *)(param_2 + 0xb8) = *(byte *)(param_2 + 0xb8) & 0x7f;
  return;
}



/* Entry: 10970a7b4; end: 10970a7f3;  */

bool FUN_10970a7b4(long param_1,int param_2,int param_3,undefined4 *param_4)

{
  bool bVar1;
  long lVar2;
  
  bVar1 = false;
  lVar2 = *(long *)(param_1 + 0x18);
  *param_4 = 0;
  if ((param_2 != 0) && (param_3 != 0)) {
    (**(code **)(lVar2 + 0x40))(lVar2);
    bVar1 = (int)lVar2 != 0;
  }
  return bVar1;
}



/* Entry: 10970a7f4; end: 10970a8ff;  */

void FUN_10970a7f4(undefined8 param_1,long param_2,int param_3,uint param_4)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  if (param_3 + 2U < param_4) {
    iVar4 = 0;
    lVar5 = *(long *)(param_2 + 0x70);
    puVar7 = (undefined8 *)(lVar5 + (ulong)(param_3 + 2U) * 0x14);
    do {
      uVar6 = (uint)*(ushort *)(lVar5 + (ulong)(uint)(param_3 + iVar4) * 0x14 + 0x10);
      puVar8 = (undefined8 *)(lVar5 + (ulong)(param_3 + iVar4 + 1) * 0x14);
      if ((((uVar6 & 0xfe00) == 0x1400 && (1 << (ulong)(uVar6 & 0x1f) & 0x1c00U) != 0) &&
          (1 << (ulong)(*(ushort *)(puVar8 + 2) & 0x1f) & 0x1c00U) != 0) &&
          (*(ushort *)(puVar8 + 2) & 0xfe00) == 0x1600) {
        uVar1 = 0;
        if ((1 << (ulong)(*(ushort *)(puVar7 + 2) & 0x1f) & 0x1c00U) != 0) {
          uVar1 = *(ushort *)(puVar7 + 2) >> 8;
        }
        if (uVar1 == 0xdc || uVar1 == 0x19) {
          FUN_1096f65e4(param_2,param_3 + iVar4 + 1,param_3 + iVar4 + 3);
          uVar2 = *(undefined4 *)(puVar8 + 2);
          uVar10 = puVar8[1];
          uVar9 = *puVar8;
          uVar3 = *(undefined4 *)(puVar7 + 2);
          uVar11 = *puVar7;
          puVar8[1] = puVar7[1];
          *puVar8 = uVar11;
          *(undefined4 *)(puVar8 + 2) = uVar3;
          puVar7[1] = uVar10;
          *puVar7 = uVar9;
          *(undefined4 *)(puVar7 + 2) = uVar2;
          return;
        }
      }
      iVar4 = iVar4 + 1;
      puVar7 = (undefined8 *)((long)puVar7 + 0x14);
    } while ((param_4 - param_3) + -2 != iVar4);
  }
  return;
}



/* Entry: 10970a900; end: 10970aaeb;  */

undefined2 FUN_10970a900(ulong param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = (uint)(param_1 >> 0xc) & 0xfffff;
  uVar1 = (uint)param_1;
  if (uVar3 < 10) {
    if ((param_1 >> 0xc & 0xfffff) == 0) {
      if (uVar1 == 0xa0) {
        return 0x40a;
      }
      uVar3 = uVar1 - 0x28;
      if (0x17 < uVar3) {
        if (uVar1 - 0xb0 < 0x28) {
          uVar3 = uVar1 - 0x98;
        }
        else {
          if (0x47f < uVar1 - 0x900) {
            return 0xe00;
          }
          uVar3 = uVar1 - 0x8c0;
        }
      }
      goto LAB_10970aac0;
    }
    if (uVar3 == 1) {
      if (uVar1 - 0x1000 < 0xa0) {
        uVar3 = uVar1 - 0xb40;
        goto LAB_10970aac0;
      }
      if (uVar1 - 0x1780 < 0x70) {
        iVar2 = -0x1220;
      }
      else {
        if (0x2f < uVar1 - 0x1cd0) {
          return 0xe00;
        }
        iVar2 = -0x1700;
      }
    }
    else {
      if (uVar3 != 2) {
        return 0xe00;
      }
      if (uVar1 == 0x25cc) {
        return 0x40b;
      }
      if (uVar1 - 0x2008 < 0x20) {
        iVar2 = -0x1a08;
      }
      else if (uVar1 - 0x2070 < 0x18) {
        iVar2 = -0x1a50;
      }
      else {
        if (uVar1 >> 3 != 0x4bf) {
          return 0xe00;
        }
        iVar2 = -0x1fc0;
      }
    }
  }
  else if (uVar3 == 10) {
    uVar3 = uVar1 & 0xffffffe0;
    if (uVar3 == 0xaa60) {
      iVar2 = -0xa3e0;
    }
    else if (uVar3 == 0xa9e0) {
      iVar2 = -0xa380;
    }
    else {
      if (uVar3 != 0xa8e0) {
        return 0xe00;
      }
      iVar2 = -0xa2a0;
    }
  }
  else {
    if (uVar3 != 0xf) {
      if (uVar3 != 0x11) {
        return 0xe00;
      }
      if ((uVar1 & 0xfffffff8) == 0x11338) {
        uVar3 = uVar1 - 0x10c80;
      }
      else if ((uVar1 & 0xfffffff8) == 0x11300) {
        uVar3 = uVar1 - 0x10c50;
      }
      else {
        if (0x17 < uVar1 - 0x116d0) {
          return 0xe00;
        }
        uVar3 = uVar1 - 0x11010;
      }
      goto LAB_10970aac0;
    }
    if (uVar1 >> 4 != 0xfe0) {
      return 0xe00;
    }
    iVar2 = -0xf760;
  }
  uVar3 = uVar1 + iVar2;
LAB_10970aac0:
  return *(undefined2 *)(&UNK_10dfe0e30 + (ulong)uVar3 * 2);
}



/* Entry: 10970aaec; end: 10970ac5b;  */

void FUN_10970aaec(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  long lVar5;
  
  piVar3 = (int *)(param_1 + 0x88);
  FUN_109703e04();
  iVar1 = *(int *)(param_1 + 0x70);
  *piVar3 = iVar1;
  *(code **)(piVar3 + 2) = FUN_10973493c;
  *(int *)(param_1 + 0x70) = iVar1 + 1;
  puVar4 = (undefined4 *)(param_1 + 0x78);
  FUN_109703a44();
  uVar2 = *(undefined4 *)(param_1 + 0x7c);
  *puVar4 = 0x6c6f636c;
  puVar4[1] = uVar2;
  *(undefined8 *)(puVar4 + 2) = 0x4100000001;
  puVar4[4] = 1;
  puVar4[5] = *(undefined4 *)(param_1 + 0x70);
  puVar4[6] = *(undefined4 *)(param_1 + 0x74);
  puVar4 = (undefined4 *)(param_1 + 0x78);
  FUN_109703a44();
  uVar2 = *(undefined4 *)(param_1 + 0x7c);
  *puVar4 = 0x63636d70;
  puVar4[1] = uVar2;
  *(undefined8 *)(puVar4 + 2) = 0x4100000001;
  puVar4[4] = 1;
  puVar4[5] = *(undefined4 *)(param_1 + 0x70);
  puVar4[6] = *(undefined4 *)(param_1 + 0x74);
  piVar3 = (int *)(param_1 + 0x88);
  FUN_109703e04();
  iVar1 = *(int *)(param_1 + 0x70);
  *piVar3 = iVar1;
  *(code **)(piVar3 + 2) = FUN_109734f4c;
  *(int *)(param_1 + 0x70) = iVar1 + 1;
  puVar4 = (undefined4 *)&UNK_10dfe7448;
  lVar5 = 0xb;
  do {
    FUN_1097039e0(param_1 + 0x28,puVar4[-1],*puVar4,1);
    piVar3 = (int *)(param_1 + 0x88);
    FUN_109703e04();
    iVar1 = *(int *)(param_1 + 0x70);
    *piVar3 = iVar1;
    piVar3[2] = 0;
    piVar3[3] = 0;
    *(int *)(param_1 + 0x70) = iVar1 + 1;
    puVar4 = puVar4 + 2;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  piVar3 = (int *)(param_1 + 0x88);
  FUN_109703e04();
  iVar1 = *(int *)(param_1 + 0x70);
  *piVar3 = iVar1;
  piVar3[2] = 0x9735298;
  piVar3[3] = 1;
  *(int *)(param_1 + 0x70) = iVar1 + 1;
  puVar4 = (undefined4 *)&UNK_10dfe74a0;
  lVar5 = 6;
  do {
    FUN_1097039e0(param_1 + 0x28,puVar4[-1],*puVar4,1);
    puVar4 = puVar4 + 2;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  return;
}



/* Entry: 10970ac5c; end: 10970acd3;  */

void FUN_10970ac5c(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  
  puVar3 = (undefined4 *)(param_1 + 0x78);
  FUN_109703a44();
  uVar1 = *(undefined4 *)(param_1 + 0x7c);
  *puVar3 = 0x6c696761;
  puVar3[1] = uVar1;
  *(undefined8 *)(puVar3 + 2) = 0x100000000;
  puVar3[4] = 0;
  puVar3[5] = *(undefined4 *)(param_1 + 0x70);
  puVar3[6] = *(undefined4 *)(param_1 + 0x74);
  piVar4 = (int *)(param_1 + 0x88);
  FUN_109703e04();
  iVar2 = *(int *)(param_1 + 0x70);
  *piVar4 = iVar2;
  *(code **)(piVar4 + 2) = FUN_10970bac0;
  *(int *)(param_1 + 0x70) = iVar2 + 1;
  return;
}



/* Entry: 10970acd4; end: 10970b06f;  */

undefined8 * FUN_10970acd4(long param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  undefined8 *puVar6;
  ulong uVar7;
  int *piVar8;
  int *piVar9;
  long lVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  undefined4 uVar14;
  
  puVar6 = (undefined8 *)0x1;
  _calloc(1,0xd0);
  if (puVar6 != (undefined8 *)0x0) {
    piVar9 = (int *)&UNK_10dfe7f60;
    *puVar6 = &UNK_10dfe7f60;
    piVar8 = (int *)&UNK_10dfe7f78;
    lVar13 = 9;
    do {
      if (*(int *)(param_1 + 4) == *piVar8) {
        *puVar6 = piVar8;
        piVar9 = piVar8;
        break;
      }
      piVar8 = piVar8 + 6;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
    if ((char)piVar9[1] == '\x01') {
      bVar5 = *(char *)(param_1 + 0x28) != '2';
    }
    else {
      bVar5 = false;
    }
    *(bool *)(puVar6 + 1) = bVar5;
    if (uRam0000000113735dc8 == 0) {
      FUN_1096f7d44();
    }
    *(byte *)((long)puVar6 + 9) = (byte)(uRam0000000113735dc8 >> 2) & 1;
    *(undefined4 *)((long)puVar6 + 0xc) = 0xffffffff;
    if (bVar5) {
      bVar5 = false;
    }
    else {
      bVar5 = *(int *)(param_1 + 4) != 0x4d6c796d;
    }
    *(bool *)(puVar6 + 4) = bVar5;
    iVar1 = *(int *)(param_1 + 0x3c);
    lVar13 = *(long *)(param_1 + 0x40);
    iVar11 = iVar1 + -1;
    if (0 < iVar1) {
      iVar12 = 0;
      do {
        uVar3 = (uint)(iVar11 + iVar12) >> 1;
        uVar2 = *(uint *)(lVar13 + (ulong)uVar3 * 0x24);
        if (uVar2 < 0x72706867) {
          if (uVar2 == 0x72706866) {
            uVar7 = (ulong)*(uint *)(lVar13 + (ulong)uVar3 * 0x24 + 0xc);
            goto LAB_10970ae04;
          }
          iVar12 = uVar3 + 1;
        }
        else {
          iVar11 = uVar3 - 1;
        }
      } while (iVar12 <= iVar11);
    }
    uVar7 = 0xffffffff;
LAB_10970ae04:
    lVar10 = param_1 + 0x28;
    FUN_1097370d8();
    puVar6[2] = lVar10;
    puVar6[3] = uVar7;
    *(bool *)(puVar6 + 7) = bVar5;
    iVar11 = iVar1 + -1;
    if (0 < iVar1) {
      iVar12 = 0;
      do {
        uVar3 = (uint)(iVar11 + iVar12) >> 1;
        uVar2 = *(uint *)(lVar13 + (ulong)uVar3 * 0x24);
        if (uVar2 < 0x70726567) {
          if (uVar2 == 0x70726566) {
            uVar7 = (ulong)*(uint *)(lVar13 + (ulong)uVar3 * 0x24 + 0xc);
            goto LAB_10970ae70;
          }
          iVar12 = uVar3 + 1;
        }
        else {
          iVar11 = uVar3 - 1;
        }
      } while (iVar12 <= iVar11);
    }
    uVar7 = 0xffffffff;
LAB_10970ae70:
    lVar10 = param_1 + 0x28;
    FUN_1097370d8();
    puVar6[5] = lVar10;
    puVar6[6] = uVar7;
    *(bool *)(puVar6 + 10) = bVar5;
    iVar11 = iVar1 + -1;
    if (0 < iVar1) {
      iVar12 = 0;
      do {
        uVar3 = (uint)(iVar11 + iVar12) >> 1;
        uVar2 = *(uint *)(lVar13 + (ulong)uVar3 * 0x24);
        if (uVar2 < 0x626c7767) {
          if (uVar2 == 0x626c7766) {
            uVar7 = (ulong)*(uint *)(lVar13 + (ulong)uVar3 * 0x24 + 0xc);
            goto LAB_10970aedc;
          }
          iVar12 = uVar3 + 1;
        }
        else {
          iVar11 = uVar3 - 1;
        }
      } while (iVar12 <= iVar11);
    }
    uVar7 = 0xffffffff;
LAB_10970aedc:
    lVar10 = param_1 + 0x28;
    FUN_1097370d8();
    puVar6[8] = lVar10;
    puVar6[9] = uVar7;
    *(bool *)(puVar6 + 0xd) = bVar5;
    iVar11 = iVar1 + -1;
    if (0 < iVar1) {
      iVar12 = 0;
      do {
        uVar3 = (uint)(iVar11 + iVar12) >> 1;
        uVar2 = *(uint *)(lVar13 + (ulong)uVar3 * 0x24);
        if (uVar2 < 0x70737467) {
          if (uVar2 == 0x70737466) {
            uVar7 = (ulong)*(uint *)(lVar13 + (ulong)uVar3 * 0x24 + 0xc);
            goto LAB_10970af48;
          }
          iVar12 = uVar3 + 1;
        }
        else {
          iVar11 = uVar3 - 1;
        }
      } while (iVar12 <= iVar11);
    }
    uVar7 = 0xffffffff;
LAB_10970af48:
    lVar10 = param_1 + 0x28;
    FUN_1097370d8();
    puVar6[0xb] = lVar10;
    puVar6[0xc] = uVar7;
    *(bool *)(puVar6 + 0x10) = bVar5;
    if (0 < iVar1) {
      iVar11 = 0;
      iVar12 = iVar1 + -1;
      do {
        uVar3 = (uint)(iVar12 + iVar11) >> 1;
        uVar2 = *(uint *)(lVar13 + (ulong)uVar3 * 0x24);
        if (uVar2 < 0x76617476) {
          if (uVar2 == 0x76617475) {
            uVar7 = (ulong)*(uint *)(lVar13 + (ulong)uVar3 * 0x24 + 0xc);
            goto LAB_10970afb8;
          }
          iVar11 = uVar3 + 1;
        }
        else {
          iVar12 = uVar3 - 1;
        }
      } while (iVar11 <= iVar12);
    }
    uVar7 = 0xffffffff;
LAB_10970afb8:
    param_1 = param_1 + 0x28;
    FUN_1097370d8();
    lVar10 = 0;
    puVar6[0xe] = param_1;
    puVar6[0xf] = uVar7;
    do {
      if ((((&UNK_10dfe7448)[lVar10 * 8] & 1) == 0) && (0 < iVar1)) {
        iVar11 = 0;
        uVar2 = *(uint *)(&UNK_10dfe7444 + lVar10 * 8);
        iVar12 = iVar1 + -1;
        do {
          uVar4 = (uint)(iVar12 + iVar11) >> 1;
          uVar3 = *(uint *)(lVar13 + (ulong)uVar4 * 0x24);
          if (uVar2 <= uVar3 && uVar3 != uVar2) {
            iVar12 = uVar4 - 1;
          }
          else {
            if (uVar2 <= uVar3) {
              uVar14 = *(undefined4 *)(lVar13 + (ulong)uVar4 * 0x24 + 0x1c);
              goto LAB_10970b02c;
            }
            iVar11 = uVar4 + 1;
          }
        } while (iVar11 <= iVar12);
      }
      uVar14 = 0;
LAB_10970b02c:
      *(undefined4 *)((long)puVar6 + lVar10 * 4 + 0x88) = uVar14;
      lVar10 = lVar10 + 1;
    } while (lVar10 != 0x11);
  }
  return puVar6;
}



/* Entry: 10970b070; end: 10970b077;  */

void FUN_10970b070(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)();
  return;
}



/* Entry: 10970b078; end: 10970b0cb;  */

bool FUN_10970b078(long param_1,int param_2,int *param_3,undefined4 *param_4)

{
  bool bVar1;
  long lVar2;
  
  bVar1 = false;
  if (((1 < param_2 - 0x9dcU) && (param_2 != 0x931)) && (param_2 != 0xb94)) {
    lVar2 = *(long *)(param_1 + 0x18);
    *param_3 = param_2;
    *param_4 = 0;
    (**(code **)(lVar2 + 0x48))();
    bVar1 = (int)lVar2 != 0;
  }
  return bVar1;
}



/* Entry: 10970b0cc; end: 10970b197;  */

bool FUN_10970b0cc(long param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x18);
  (**(code **)(lVar2 + 0x28))(lVar2,param_2,*(undefined8 *)(lVar2 + 0x68));
  if ((uint)lVar2 < 0x20) {
    lVar2 = *(long *)(param_1 + 0x18);
    (**(code **)(lVar2 + 0x28))(lVar2,param_2,*(undefined8 *)(lVar2 + 0x68));
    if ((1 << (ulong)((uint)lVar2 & 0x1f) & 0x1c00U) != 0) {
      return false;
    }
  }
  if (((int)param_2 == 0x9af) && ((int)param_3 == 0x9bc)) {
    *param_4 = 0x9df;
    bVar1 = true;
  }
  else {
    bVar1 = false;
    lVar2 = *(long *)(param_1 + 0x18);
    *param_4 = 0;
    if (((int)param_2 != 0) && ((int)param_3 != 0)) {
      (**(code **)(lVar2 + 0x40))(lVar2,param_2,param_3,param_4,*(undefined8 *)(lVar2 + 0x80));
      bVar1 = (int)lVar2 != 0;
    }
  }
  return bVar1;
}



/* Entry: 10970b198; end: 10970b1e3;  */

void FUN_10970b198(undefined8 param_1,long param_2)

{
  undefined2 uVar1;
  ulong uVar2;
  long lVar3;
  
  *(byte *)(param_2 + 0xb8) = *(byte *)(param_2 + 0xb8) | 0xc0;
  uVar2 = (ulong)*(uint *)(param_2 + 0x60);
  if (*(uint *)(param_2 + 0x60) != 0) {
    lVar3 = *(long *)(param_2 + 0x70) + 0x13;
    do {
      uVar1 = (undefined2)*(undefined4 *)(lVar3 + -0x13);
      FUN_10970a900();
      *(undefined2 *)(lVar3 + -1) = uVar1;
      lVar3 = lVar3 + 0x14;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return;
}



/* Entry: 10970b1e4; end: 10970b337;  */

void FUN_10970b1e4(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  long lVar5;
  
  piVar3 = (int *)(param_1 + 0x88);
  FUN_109703e04();
  iVar1 = *(int *)(param_1 + 0x70);
  *piVar3 = iVar1;
  *(code **)(piVar3 + 2) = FUN_109737150;
  *(int *)(param_1 + 0x70) = iVar1 + 1;
  piVar3 = (int *)(param_1 + 0x88);
  FUN_109703e04();
  iVar1 = *(int *)(param_1 + 0x70);
  *piVar3 = iVar1;
  *(code **)(piVar3 + 2) = FUN_1097375d4;
  *(int *)(param_1 + 0x70) = iVar1 + 1;
  puVar4 = (undefined4 *)(param_1 + 0x78);
  FUN_109703a44();
  uVar2 = *(undefined4 *)(param_1 + 0x7c);
  *puVar4 = 0x6c6f636c;
  puVar4[1] = uVar2;
  *(undefined8 *)(puVar4 + 2) = 0x4100000001;
  puVar4[4] = 1;
  puVar4[5] = *(undefined4 *)(param_1 + 0x70);
  puVar4[6] = *(undefined4 *)(param_1 + 0x74);
  puVar4 = (undefined4 *)(param_1 + 0x78);
  FUN_109703a44();
  uVar2 = *(undefined4 *)(param_1 + 0x7c);
  *puVar4 = 0x63636d70;
  puVar4[1] = uVar2;
  *(undefined8 *)(puVar4 + 2) = 0x4100000001;
  puVar4[4] = 1;
  puVar4[5] = *(undefined4 *)(param_1 + 0x70);
  puVar4[6] = *(undefined4 *)(param_1 + 0x74);
  puVar4 = (undefined4 *)&UNK_10dfe8054;
  lVar5 = 5;
  do {
    FUN_1097039e0(param_1 + 0x28,puVar4[-1],*puVar4,1);
    puVar4 = puVar4 + 2;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  piVar3 = (int *)(param_1 + 0x88);
  FUN_109703e04();
  iVar1 = *(int *)(param_1 + 0x70);
  *piVar3 = iVar1;
  *(code **)(piVar3 + 2) = FUN_10970bac0;
  *(int *)(param_1 + 0x70) = iVar1 + 1;
  puVar4 = (undefined4 *)&UNK_10dfe807c;
  lVar5 = 4;
  do {
    FUN_1097039e0(param_1 + 0x28,puVar4[-1],*puVar4,1);
    puVar4 = puVar4 + 2;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  return;
}



/* Entry: 10970b338; end: 10970b4c7;  */

void FUN_10970b338(long param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(param_1 + 0x78);
  FUN_109703a44();
  uVar1 = *(undefined4 *)(param_1 + 0x7c);
  *puVar2 = 0x636c6967;
  puVar2[1] = uVar1;
  *(undefined8 *)(puVar2 + 2) = 0x100000001;
  puVar2[4] = 1;
  puVar2[5] = *(undefined4 *)(param_1 + 0x70);
  puVar2[6] = *(undefined4 *)(param_1 + 0x74);
  if (uRam0000000113735dc8 == 0) {
    FUN_1096f7d44();
  }
  if ((uRam0000000113735dc8 >> 2 & 1) != 0) {
    puVar2 = (undefined4 *)(param_1 + 0x78);
    FUN_109703a44();
    uVar1 = *(undefined4 *)(param_1 + 0x7c);
    *puVar2 = 0x6b65726e;
    puVar2[1] = uVar1;
    *(undefined8 *)(puVar2 + 2) = 0x100000000;
    puVar2[4] = 0;
    puVar2[5] = *(undefined4 *)(param_1 + 0x70);
    puVar2[6] = *(undefined4 *)(param_1 + 0x74);
  }
  puVar2 = (undefined4 *)(param_1 + 0x78);
  FUN_109703a44();
  uVar1 = *(undefined4 *)(param_1 + 0x7c);
  *puVar2 = 0x6c696761;
  puVar2[1] = uVar1;
  *(undefined8 *)(puVar2 + 2) = 0x100000000;
  puVar2[4] = 0;
  puVar2[5] = *(undefined4 *)(param_1 + 0x70);
  puVar2[6] = *(undefined4 *)(param_1 + 0x74);
  return;
}



/* Entry: 10970b4c8; end: 10970b4cb;  */

void FUN_10970b4c8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)();
  return;
}



/* Entry: 10970b4cc; end: 10970b553;  */

bool FUN_10970b4cc(long param_1,int param_2,int *param_3,int *param_4)

{
  long lVar1;
  int iVar2;
  
  if (param_2 < 0x17c0) {
    iVar2 = 0x17be;
    if (param_2 == 0x17be) goto LAB_10970b510;
    iVar2 = 0x17bf;
  }
  else {
    iVar2 = 0x17c0;
    if ((param_2 == 0x17c0) || (iVar2 = 0x17c4, param_2 == 0x17c4)) goto LAB_10970b510;
    iVar2 = 0x17c5;
  }
  if (param_2 != iVar2) {
    lVar1 = *(long *)(param_1 + 0x18);
    *param_3 = param_2;
    *param_4 = 0;
    (**(code **)(lVar1 + 0x48))();
    return (int)lVar1 != 0;
  }
LAB_10970b510:
  *param_3 = 0x17c1;
  *param_4 = iVar2;
  return true;
}



/* Entry: 10970b554; end: 10970b5ff;  */

bool FUN_10970b554(long param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x18);
  (**(code **)(lVar2 + 0x28))(lVar2,param_2,*(undefined8 *)(lVar2 + 0x68));
  if ((uint)lVar2 < 0x20) {
    lVar2 = *(long *)(param_1 + 0x18);
    (**(code **)(lVar2 + 0x28))(lVar2,param_2,*(undefined8 *)(lVar2 + 0x68));
    if ((1 << (ulong)((uint)lVar2 & 0x1f) & 0x1c00U) != 0) {
      return false;
    }
  }
  bVar1 = false;
  lVar2 = *(long *)(param_1 + 0x18);
  *param_4 = 0;
  if (((int)param_2 != 0) && ((int)param_3 != 0)) {
    (**(code **)(lVar2 + 0x40))(lVar2,param_2,param_3,param_4,*(undefined8 *)(lVar2 + 0x80));
    bVar1 = (int)lVar2 != 0;
  }
  return bVar1;
}



/* Entry: 10970b600; end: 10970b647;  */

void FUN_10970b600(undefined8 param_1,long param_2)

{
  undefined1 uVar1;
  ulong uVar2;
  undefined4 *puVar3;
  
  *(byte *)(param_2 + 0xb8) = *(byte *)(param_2 + 0xb8) | 0x40;
  uVar2 = (ulong)*(uint *)(param_2 + 0x60);
  if (*(uint *)(param_2 + 0x60) != 0) {
    puVar3 = *(undefined4 **)(param_2 + 0x70);
    do {
      uVar1 = (undefined1)*puVar3;
      FUN_10970a900();
      *(undefined1 *)((long)puVar3 + 0x12) = uVar1;
      puVar3 = puVar3 + 5;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return;
}



/* Entry: 10970b648; end: 10970b80b;  */

void FUN_10970b648(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 *puVar5;
  long lVar6;
  
  piVar4 = (int *)(param_1 + 0x88);
  FUN_109703e04();
  iVar1 = *(int *)(param_1 + 0x70);
  *piVar4 = iVar1;
  *(code **)(piVar4 + 2) = FUN_109737944;
  *(int *)(param_1 + 0x70) = iVar1 + 1;
  puVar5 = (undefined4 *)(param_1 + 0x78);
  FUN_109703a44();
  uVar2 = *(undefined4 *)(param_1 + 0x7c);
  *puVar5 = 0x6c6f636c;
  puVar5[1] = uVar2;
  *(undefined8 *)(puVar5 + 2) = 0x4100000001;
  puVar5[4] = 1;
  puVar5[5] = *(undefined4 *)(param_1 + 0x70);
  puVar5[6] = *(undefined4 *)(param_1 + 0x74);
  puVar5 = (undefined4 *)(param_1 + 0x78);
  FUN_109703a44();
  uVar2 = *(undefined4 *)(param_1 + 0x7c);
  *puVar5 = 0x63636d70;
  puVar5[1] = uVar2;
  *(undefined8 *)(puVar5 + 2) = 0x4100000001;
  puVar5[4] = 1;
  puVar5[5] = *(undefined4 *)(param_1 + 0x70);
  puVar5[6] = *(undefined4 *)(param_1 + 0x74);
  piVar4 = (int *)(param_1 + 0x88);
  FUN_109703e04();
  lVar6 = 0;
  iVar1 = *(int *)(param_1 + 0x70);
  *piVar4 = iVar1;
  *(code **)(piVar4 + 2) = FUN_109737d40;
  *(int *)(param_1 + 0x70) = iVar1 + 1;
  do {
    uVar3 = *(undefined4 *)(&UNK_10dfe85e8 + lVar6);
    puVar5 = (undefined4 *)(param_1 + 0x78);
    FUN_109703a44();
    uVar2 = *(undefined4 *)(param_1 + 0x7c);
    *puVar5 = uVar3;
    puVar5[1] = uVar2;
    *(undefined8 *)(puVar5 + 2) = 0x4900000001;
    puVar5[4] = 1;
    puVar5[5] = *(undefined4 *)(param_1 + 0x70);
    puVar5[6] = *(undefined4 *)(param_1 + 0x74);
    piVar4 = (int *)(param_1 + 0x88);
    FUN_109703e04();
    iVar1 = *(int *)(param_1 + 0x70);
    *piVar4 = iVar1;
    piVar4[2] = 0;
    piVar4[3] = 0;
    *(int *)(param_1 + 0x70) = iVar1 + 1;
    lVar6 = lVar6 + 4;
  } while (lVar6 != 0x10);
  piVar4 = (int *)(param_1 + 0x88);
  FUN_109703e04();
  lVar6 = 0;
  iVar1 = *(int *)(param_1 + 0x70);
  *piVar4 = iVar1;
  *(code **)(piVar4 + 2) = FUN_10970bac0;
  *(int *)(param_1 + 0x70) = iVar1 + 1;
  do {
    uVar3 = *(undefined4 *)(&UNK_10dfe85f8 + lVar6);
    puVar5 = (undefined4 *)(param_1 + 0x78);
    FUN_109703a44();
    uVar2 = *(undefined4 *)(param_1 + 0x7c);
    *puVar5 = uVar3;
    puVar5[1] = uVar2;
    *(undefined8 *)(puVar5 + 2) = 0x900000001;
    puVar5[4] = 1;
    puVar5[5] = *(undefined4 *)(param_1 + 0x70);
    puVar5[6] = *(undefined4 *)(param_1 + 0x74);
    lVar6 = lVar6 + 4;
  } while (lVar6 != 0x10);
  return;
}



/* Entry: 10970b80c; end: 10970b853;  */

void FUN_10970b80c(undefined8 param_1,long param_2)

{
  undefined1 uVar1;
  ulong uVar2;
  undefined4 *puVar3;
  
  *(byte *)(param_2 + 0xb8) = *(byte *)(param_2 + 0xb8) | 0xc0;
  uVar2 = (ulong)*(uint *)(param_2 + 0x60);
  if (*(uint *)(param_2 + 0x60) != 0) {
    puVar3 = *(undefined4 **)(param_2 + 0x70);
    do {
      uVar1 = (undefined1)*puVar3;
      FUN_10970a900();
      *(undefined1 *)((long)puVar3 + 0x12) = uVar1;
      puVar3 = puVar3 + 5;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return;
}



/* Entry: 10970b854; end: 10970ba63;  */

bool FUN_10970b854(long param_1,long param_2,uint param_3,undefined1 param_4,uint param_5,
                  int param_6)

{
  int iVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  uint uVar9;
  undefined4 uStack_78;
  undefined8 uStack_74;
  int iStack_6c;
  undefined2 uStack_68;
  undefined1 uStack_66;
  undefined1 uStack_65;
  undefined4 uStack_64;
  
  if ((*(byte *)(param_2 + 0x18) >> 4 & 1) == 0) {
    if ((*(byte *)(param_2 + 0xc0) >> 6 & 1) == 0) {
      if (*(long *)(param_2 + 0xd0) != 0) {
        FUN_1096f53f4(param_2,param_1,&UNK_10f57eb24);
      }
    }
    else if ((*(long *)(param_2 + 0xd0) == 0) ||
            (lVar7 = param_2, FUN_1096f53f4(param_2,param_1,&UNK_10f57eb6a), (int)lVar7 != 0)) {
      uStack_64 = 0;
      lVar7 = *(long *)(*(long *)(param_1 + 0x90) + 0x10);
      if (lVar7 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined8 *)(lVar7 + 0x10);
      }
      lVar7 = param_1;
      (**(code **)(*(long *)(param_1 + 0x90) + 0x30))
                (param_1,*(undefined8 *)(param_1 + 0x98),0x25cc,&uStack_64,uVar5);
      uVar3 = uStack_64;
      iVar4 = (int)lVar7;
      if (iVar4 == 0) {
        return false;
      }
      iVar1 = 0;
      if (param_6 != -1) {
        iVar1 = param_6;
      }
      *(undefined2 *)(param_2 + 0x5a) = 1;
      *(undefined4 *)(param_2 + 100) = 0;
      *(undefined8 *)(param_2 + 0x78) = *(undefined8 *)(param_2 + 0x70);
      *(undefined4 *)(param_2 + 0x5c) = 0;
      uVar8 = (ulong)*(uint *)(param_2 + 0x60);
      if (*(uint *)(param_2 + 0x60) != 0) {
        uVar6 = 0;
        uVar9 = 0;
        do {
          if (*(char *)(param_2 + 0x58) != '\x01') break;
          lVar7 = *(long *)(param_2 + 0x70) + uVar6 * 0x14;
          bVar2 = *(byte *)(lVar7 + 0xf);
          if (uVar9 == bVar2 || (bVar2 & 0xf) != param_3) {
            FUN_109704924(param_2);
          }
          else {
            uStack_78 = uVar3;
            uStack_68 = 0;
            uStack_65 = (undefined1)iVar1;
            uStack_74 = *(undefined8 *)(lVar7 + 4);
            iStack_6c = (uint)bVar2 << 0x18;
            uStack_66 = param_4;
            if (param_5 != 0xffffffff) {
              while ((((uVar6 < uVar8 && (*(char *)(param_2 + 0x58) == '\x01')) &&
                      (lVar7 = *(long *)(param_2 + 0x70) + uVar6 * 0x14,
                      (uint)bVar2 == (uint)*(byte *)(lVar7 + 0xf))) &&
                     (param_5 == *(byte *)(lVar7 + 0x12)))) {
                FUN_109704924(param_2);
                uVar6 = (ulong)*(uint *)(param_2 + 0x5c);
                uVar8 = (ulong)*(uint *)(param_2 + 0x60);
              }
            }
            FUN_10970ba64(param_2,&uStack_78);
            uVar9 = (uint)bVar2;
          }
          uVar6 = (ulong)*(uint *)(param_2 + 0x5c);
          uVar8 = (ulong)*(uint *)(param_2 + 0x60);
        } while (uVar6 < uVar8);
      }
      FUN_1096f6314(param_2);
      if (*(long *)(param_2 + 0xd0) == 0) {
        return iVar4 != 0;
      }
      FUN_1096f53f4(param_2,param_1,&UNK_10f57eb89);
      return iVar4 != 0;
    }
  }
  return false;
}



/* Entry: 10970ba64; end: 10970babf;  */

void FUN_10970ba64(long param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  iVar1 = (int)param_1;
  FUN_1096f5fd4(iVar1,0,1);
  if (iVar1 != 0) {
    puVar2 = (undefined8 *)(*(long *)(param_1 + 0x78) + (ulong)*(uint *)(param_1 + 100) * 0x14);
    uVar4 = param_2[1];
    uVar3 = *param_2;
    *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(param_2 + 2);
    puVar2[1] = uVar4;
    *puVar2 = uVar3;
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
  }
  return;
}



/* Entry: 10970bac0; end: 10970bad3;  */

undefined8 FUN_10970bac0(undefined8 param_1,undefined8 param_2,long param_3)

{
  *(byte *)(param_3 + 0xb8) = *(byte *)(param_3 + 0xb8) & 0xf7;
  return 0;
}



/* Entry: 10970bad4; end: 10970bcf3;  */

void FUN_10970bad4(undefined8 param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  int iVar8;
  undefined8 *puVar9;
  int iVar10;
  ulong uVar11;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  
  *(undefined2 *)(param_2 + 0x5a) = 1;
  *(undefined4 *)(param_2 + 100) = 0;
  *(undefined8 *)(param_2 + 0x78) = *(undefined8 *)(param_2 + 0x70);
  uVar1 = *(uint *)(param_2 + 0x60);
  *(undefined4 *)(param_2 + 0x5c) = 0;
  if (uVar1 != 0) {
    uVar6 = 0;
    do {
      uVar2 = *(uint *)(*(long *)(param_2 + 0x70) + uVar6 * 0x14);
      if ((uVar2 & 0xffffff7f) == 0xe33) {
        uStack_60._0_4_ = uVar2 + 0x1a;
        FUN_109730ba4(param_2,0,1,&uStack_60);
        uVar4 = 0;
        if (*(int *)(param_2 + 100) != 0) {
          uVar4 = *(int *)(param_2 + 100) - 1;
        }
        lVar7 = *(long *)(param_2 + 0x78) + (ulong)uVar4 * 0x14;
        *(ushort *)(lVar7 + 0x10) = *(ushort *)(lVar7 + 0x10) | 0x80;
        uStack_60 = CONCAT44(uStack_60._4_4_,uVar2 - 1);
        lVar7 = param_2;
        FUN_109730ba4(param_2,1,1,&uStack_60);
        if ((int)lVar7 == 0) break;
        uVar2 = *(uint *)(param_2 + 100);
        uVar4 = uVar2 - 2;
        uVar6 = (ulong)uVar4;
        lVar7 = *(long *)(param_2 + 0x78) + uVar6 * 0x14;
        *(ushort *)(lVar7 + 0x10) = *(ushort *)(lVar7 + 0x10) & 0xe0 | 0xc;
        if (uVar4 != 0) {
          iVar5 = 0;
          lVar7 = uVar6 * 0x14;
          iVar8 = 3;
          iVar10 = 2;
          do {
            uVar3 = *(uint *)(*(long *)(param_2 + 0x78) + -0x14 + lVar7);
            if ((uVar3 & 0xffffff7c) != 0xe34 && (uVar3 & 0xffffff7f) - 0xe4f < 0xfffffff8) {
              if ((int)uVar3 < 0xeb1) {
                if ((uVar3 != 0xe31) && (uVar3 != 0xe3b)) {
LAB_10970bc4c:
                  if (uVar2 - iVar5 < uVar2) {
                    uVar11 = (ulong)(uVar2 - iVar10);
                    goto LAB_10970bc6c;
                  }
                  if (*(int *)(param_2 + 0x1c) == 0) {
                    func_0x0001096f67a8(param_2,uVar2 - iVar8);
                  }
                  goto LAB_10970bb40;
                }
              }
              else if ((uVar3 != 0xebb) && (uVar3 != 0xeb1)) goto LAB_10970bc4c;
            }
            iVar8 = iVar8 + 1;
            iVar10 = iVar10 + 1;
            iVar5 = iVar5 + 1;
            lVar7 = lVar7 + -0x14;
          } while (lVar7 != 0);
          if (2 < uVar2) {
            uVar11 = 0;
LAB_10970bc6c:
            func_0x0001096f67a8(param_2,uVar11);
            puVar9 = (undefined8 *)(*(long *)(param_2 + 0x78) + uVar6 * 0x14);
            uStack_58 = puVar9[1];
            uStack_60 = *puVar9;
            uStack_50 = *(undefined4 *)(puVar9 + 2);
            lVar7 = *(long *)(param_2 + 0x78) + uVar11 * 0x14;
            _memmove(lVar7 + 0x14,lVar7,(ulong)(uVar4 - (int)uVar11) * 0x14);
            puVar9 = (undefined8 *)(*(long *)(param_2 + 0x78) + uVar11 * 0x14);
            *(undefined4 *)(puVar9 + 2) = uStack_50;
            puVar9[1] = uStack_58;
            *puVar9 = uStack_60;
          }
        }
      }
      else {
        lVar7 = param_2;
        FUN_109704924();
        if ((int)lVar7 == 0) break;
      }
LAB_10970bb40:
      uVar6 = (ulong)*(uint *)(param_2 + 0x5c);
    } while (uVar6 < uVar1);
  }
  if ((*(char *)(param_2 + 0x58) == '\x01') &&
     (lVar7 = param_2,
     func_0x0001096f638c(param_2,*(int *)(param_2 + 0x60) - *(int *)(param_2 + 0x5c)),
     (int)lVar7 != 0)) {
    if (*(long *)(param_2 + 0x78) != *(long *)(param_2 + 0x70)) {
      *(long *)(param_2 + 0x80) = *(long *)(param_2 + 0x70);
      *(long *)(param_2 + 0x70) = *(long *)(param_2 + 0x78);
    }
    *(undefined4 *)(param_2 + 0x60) = *(undefined4 *)(param_2 + 100);
  }
  *(undefined1 *)(param_2 + 0x5a) = 0;
  *(undefined4 *)(param_2 + 100) = 0;
  *(undefined8 *)(param_2 + 0x78) = *(undefined8 *)(param_2 + 0x70);
  *(undefined4 *)(param_2 + 0x5c) = 0;
  return;
}



/* Entry: 10970bcf4; end: 10970c053;  */

void FUN_10970bcf4(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 *puVar5;
  long lVar6;
  
  piVar4 = (int *)(param_1 + 0x88);
  FUN_109703e04();
  iVar1 = *(int *)(param_1 + 0x70);
  *piVar4 = iVar1;
  *(code **)(piVar4 + 2) = FUN_10973812c;
  *(int *)(param_1 + 0x70) = iVar1 + 1;
  puVar5 = (undefined4 *)(param_1 + 0x78);
  FUN_109703a44();
  uVar2 = *(undefined4 *)(param_1 + 0x7c);
  *puVar5 = 0x6c6f636c;
  puVar5[1] = uVar2;
  *(undefined8 *)(puVar5 + 2) = 0x4100000001;
  puVar5[4] = 1;
  puVar5[5] = *(undefined4 *)(param_1 + 0x70);
  puVar5[6] = *(undefined4 *)(param_1 + 0x74);
  puVar5 = (undefined4 *)(param_1 + 0x78);
  FUN_109703a44();
  uVar2 = *(undefined4 *)(param_1 + 0x7c);
  *puVar5 = 0x63636d70;
  puVar5[1] = uVar2;
  *(undefined8 *)(puVar5 + 2) = 0x4100000001;
  puVar5[4] = 1;
  puVar5[5] = *(undefined4 *)(param_1 + 0x70);
  puVar5[6] = *(undefined4 *)(param_1 + 0x74);
  puVar5 = (undefined4 *)(param_1 + 0x78);
  FUN_109703a44();
  uVar2 = *(undefined4 *)(param_1 + 0x7c);
  *puVar5 = 0x6e756b74;
  puVar5[1] = uVar2;
  *(undefined8 *)(puVar5 + 2) = 0x4100000001;
  puVar5[4] = 1;
  puVar5[5] = *(undefined4 *)(param_1 + 0x70);
  puVar5[6] = *(undefined4 *)(param_1 + 0x74);
  puVar5 = (undefined4 *)(param_1 + 0x78);
  FUN_109703a44();
  uVar2 = *(undefined4 *)(param_1 + 0x7c);
  *puVar5 = 0x616b686e;
  puVar5[1] = uVar2;
  *(undefined8 *)(puVar5 + 2) = 0x4900000001;
  puVar5[4] = 1;
  puVar5[5] = *(undefined4 *)(param_1 + 0x70);
  puVar5[6] = *(undefined4 *)(param_1 + 0x74);
  piVar4 = (int *)(param_1 + 0x88);
  FUN_109703e04();
  iVar1 = *(int *)(param_1 + 0x70);
  *piVar4 = iVar1;
  *(code **)(piVar4 + 2) = FUN_1097395e4;
  *(int *)(param_1 + 0x70) = iVar1 + 1;
  puVar5 = (undefined4 *)(param_1 + 0x78);
  FUN_109703a44();
  uVar2 = *(undefined4 *)(param_1 + 0x7c);
  *puVar5 = 0x72706866;
  puVar5[1] = uVar2;
  *(undefined8 *)(puVar5 + 2) = 0x4800000001;
  puVar5[4] = 0;
  puVar5[5] = *(undefined4 *)(param_1 + 0x70);
  puVar5[6] = *(undefined4 *)(param_1 + 0x74);
  piVar4 = (int *)(param_1 + 0x88);
  FUN_109703e04();
  iVar1 = *(int *)(param_1 + 0x70);
  *piVar4 = iVar1;
  piVar4[2] = 0x9739610;
  piVar4[3] = 1;
  *(int *)(param_1 + 0x70) = iVar1 + 1;
  piVar4 = (int *)(param_1 + 0x88);
  FUN_109703e04();
  iVar1 = *(int *)(param_1 + 0x70);
  *piVar4 = iVar1;
  *(code **)(piVar4 + 2) = FUN_1097395e4;
  *(int *)(param_1 + 0x70) = iVar1 + 1;
  puVar5 = (undefined4 *)(param_1 + 0x78);
  FUN_109703a44();
  uVar2 = *(undefined4 *)(param_1 + 0x7c);
  *puVar5 = 0x70726566;
  puVar5[1] = uVar2;
  *(undefined8 *)(puVar5 + 2) = 0x4900000001;
  puVar5[4] = 1;
  puVar5[5] = *(undefined4 *)(param_1 + 0x70);
  puVar5[6] = *(undefined4 *)(param_1 + 0x74);
  piVar4 = (int *)(param_1 + 0x88);
  FUN_109703e04();
  lVar6 = 0;
  iVar1 = *(int *)(param_1 + 0x70);
  *piVar4 = iVar1;
  piVar4[2] = 0x9739708;
  piVar4[3] = 1;
  *(int *)(param_1 + 0x70) = iVar1 + 1;
  do {
    uVar3 = *(undefined4 *)(&UNK_10dfe8fd4 + lVar6);
    puVar5 = (undefined4 *)(param_1 + 0x78);
    FUN_109703a44();
    uVar2 = *(undefined4 *)(param_1 + 0x7c);
    *puVar5 = uVar3;
    puVar5[1] = uVar2;
    *(undefined8 *)(puVar5 + 2) = 0x4900000001;
    puVar5[4] = 1;
    puVar5[5] = *(undefined4 *)(param_1 + 0x70);
    puVar5[6] = *(undefined4 *)(param_1 + 0x74);
    lVar6 = lVar6 + 4;
  } while (lVar6 != 0x1c);
  piVar4 = (int *)(param_1 + 0x88);
  FUN_109703e04();
  iVar1 = *(int *)(param_1 + 0x70);
  *piVar4 = iVar1;
  *(code **)(piVar4 + 2) = FUN_1097397e8;
  *(int *)(param_1 + 0x70) = iVar1 + 1;
  piVar4 = (int *)(param_1 + 0x88);
  FUN_109703e04();
  lVar6 = 0;
  iVar1 = *(int *)(param_1 + 0x70);
  *piVar4 = iVar1;
  *(code **)(piVar4 + 2) = FUN_10970bac0;
  *(int *)(param_1 + 0x70) = iVar1 + 1;
  do {
    uVar3 = *(undefined4 *)(&UNK_10dfe8ff0 + lVar6);
    puVar5 = (undefined4 *)(param_1 + 0x78);
    FUN_109703a44();
    uVar2 = *(undefined4 *)(param_1 + 0x7c);
    *puVar5 = uVar3;
    puVar5[1] = uVar2;
    *(undefined8 *)(puVar5 + 2) = 1;
    puVar5[4] = 0;
    puVar5[5] = *(undefined4 *)(param_1 + 0x70);
    puVar5[6] = *(undefined4 *)(param_1 + 0x74);
    lVar6 = lVar6 + 4;
  } while (lVar6 != 0x10);
  piVar4 = (int *)(param_1 + 0x88);
  FUN_109703e04();
  lVar6 = 0;
  iVar1 = *(int *)(param_1 + 0x70);
  *piVar4 = iVar1;
  piVar4[2] = 0;
  piVar4[3] = 0;
  *(int *)(param_1 + 0x70) = iVar1 + 1;
  do {
    uVar3 = *(undefined4 *)(&UNK_10dfe9000 + lVar6);
    puVar5 = (undefined4 *)(param_1 + 0x78);
    FUN_109703a44();
    uVar2 = *(undefined4 *)(param_1 + 0x7c);
    *puVar5 = uVar3;
    puVar5[1] = uVar2;
    *(undefined8 *)(puVar5 + 2) = 0x900000001;
    puVar5[4] = 1;
    puVar5[5] = *(undefined4 *)(param_1 + 0x70);
    puVar5[6] = *(undefined4 *)(param_1 + 0x74);
    lVar6 = lVar6 + 4;
  } while (lVar6 != 0x14);
  return;
}



/* Entry: 10970c054; end: 10970c23f;  */

undefined4 * FUN_10970c054(long param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  
  puVar3 = (undefined4 *)0x1;
  _calloc(1,0x10);
  if (puVar3 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  iVar5 = *(int *)(param_1 + 0x3c) + -1;
  if (0 < *(int *)(param_1 + 0x3c)) {
    iVar6 = 0;
    do {
      uVar2 = (uint)(iVar5 + iVar6) >> 1;
      uVar1 = *(uint *)(*(long *)(param_1 + 0x40) + (ulong)uVar2 * 0x24);
      if (uVar1 < 0x72706867) {
        if (uVar1 == 0x72706866) {
          uVar4 = *(undefined4 *)(*(long *)(param_1 + 0x40) + (ulong)uVar2 * 0x24 + 0x1c);
          goto LAB_10970c0dc;
        }
        iVar6 = uVar2 + 1;
      }
      else {
        iVar5 = uVar2 - 1;
      }
    } while (iVar6 <= iVar5);
  }
  uVar4 = 0;
LAB_10970c0dc:
  *puVar3 = uVar4;
  iVar5 = *(int *)(param_1 + 4);
  if (iVar5 < 0x4e6b6f6f) {
    if (iVar5 < 0x4d616e64) {
      if ((iVar5 == 0x41646c6d) || (iVar5 == 0x41726162)) goto LAB_10970c1e4;
      iVar6 = 0x43687273;
    }
    else {
      if ((iVar5 == 0x4d616e64) || (iVar5 == 0x4d616e69)) goto LAB_10970c1e4;
      iVar6 = 0x4d6f6e67;
    }
  }
  else if (iVar5 < 0x50686c70) {
    if ((iVar5 == 0x4e6b6f6f) || (iVar5 == 0x4f756772)) goto LAB_10970c1e4;
    iVar6 = 0x50686167;
  }
  else if (iVar5 < 0x536f6764) {
    if (iVar5 == 0x50686c70) goto LAB_10970c1e4;
    iVar6 = 0x526f6867;
  }
  else {
    if (iVar5 == 0x53797263) goto LAB_10970c1e4;
    iVar6 = 0x536f6764;
  }
  if (iVar5 != iVar6) {
    return puVar3;
  }
LAB_10970c1e4:
  func_0x000109708e08();
  *(long *)(puVar3 + 2) = param_1;
  if (param_1 == 0) {
    _free(puVar3);
    puVar3 = (undefined4 *)0x0;
  }
  return puVar3;
}



/* Entry: 10970c240; end: 10970c243;  */

void FUN_10970c240(void)

{
  return;
}



/* Entry: 10970c244; end: 10970c2ef;  */

bool FUN_10970c244(long param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x18);
  (**(code **)(lVar2 + 0x28))(lVar2,param_2,*(undefined8 *)(lVar2 + 0x68));
  if ((uint)lVar2 < 0x20) {
    lVar2 = *(long *)(param_1 + 0x18);
    (**(code **)(lVar2 + 0x28))(lVar2,param_2,*(undefined8 *)(lVar2 + 0x68));
    if ((1 << (ulong)((uint)lVar2 & 0x1f) & 0x1c00U) != 0) {
      return false;
    }
  }
  bVar1 = false;
  lVar2 = *(long *)(param_1 + 0x18);
  *param_4 = 0;
  if (((int)param_2 != 0) && ((int)param_3 != 0)) {
    (**(code **)(lVar2 + 0x40))(lVar2,param_2,param_3,param_4,*(undefined8 *)(lVar2 + 0x80));
    bVar1 = (int)lVar2 != 0;
  }
  return bVar1;
}



/* Entry: 10970c2f0; end: 10970c3d7;  */

void FUN_10970c2f0(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  uint *puVar4;
  undefined1 uVar5;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x88) + 8);
  if (lVar2 != 0) {
    FUN_109709038(lVar2,param_2,*(undefined4 *)(param_1 + 4));
  }
  *(byte *)(param_2 + 0xb8) = *(byte *)(param_2 + 0xb8) | 0x40;
  uVar3 = (ulong)*(uint *)(param_2 + 0x60);
  if (*(uint *)(param_2 + 0x60) != 0) {
    puVar4 = *(uint **)(param_2 + 0x70);
    do {
      uVar1 = *puVar4;
      if (uVar1 >> 0xc < 0xe1) {
        uVar5 = (&UNK_10dfea712)
                [(ulong)((uVar1 & 1) + 0xcc1) +
                 (ulong)(byte)(&UNK_10dfea712)
                              [(ulong)((uVar1 >> 1 & 7) + 0x3a9) +
                               (ulong)*(ushort *)
                                       (&UNK_10dfeb55c +
                                       (ulong)(uVar1 >> 4 & 1 |
                                              (uint)(byte)(&UNK_10dfea883)
                                                          [(ulong)(byte)(&UNK_10dfea783)
                                                                        [(ulong)(((byte)(&
                                                  UNK_10dfea712)[uVar1 >> 0xd] >>
                                                  (ulong)(uVar1 >> 10 & 4) & 0xf) << 4) |
                                                  (ulong)(uVar1 >> 8) & 0xf] << 3 |
                                                  (ulong)(uVar1 >> 5) & 7] << 1) * 2) * 8] * 2];
      }
      else {
        uVar5 = 0;
      }
      *(undefined1 *)((long)puVar4 + 0x12) = uVar5;
      puVar4 = puVar4 + 5;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}



/* Entry: 10970c3d8; end: 10970c56f;  */

void FUN_10970c3d8(long param_1,int *param_2,uint *param_3,long param_4,code *param_5)

{
  char *pcVar1;
  uint uVar2;
  bool bVar4;
  byte bVar5;
  ulong uVar6;
  byte bVar7;
  char cVar8;
  ulong uVar9;
  uint uStack_44;
  uint uVar3;
  
  if (((param_1 != 0) && (*param_2 != 0)) && (_strstr(param_1,param_4), param_1 != 0)) {
    _strlen();
    pcVar1 = (char *)(param_1 + param_4);
    if (*pcVar1 == '-') {
      uVar6 = 0;
      do {
        bVar5 = pcVar1[uVar6 + 1];
        cVar8 = bVar5 - 0x30;
        if ((byte)(bVar5 - 0x30) < 10 || (byte)(bVar5 + 0x9f) < 6) {
          if (9 < (byte)(bVar5 - 0x30)) {
            bVar7 = bVar5 + 0x20;
            if (0x19 < (byte)(bVar5 + 0xbf)) {
              bVar7 = bVar5;
            }
            goto LAB_10970c494;
          }
        }
        else {
          if (5 < (byte)(bVar5 + 0xbf)) {
            return;
          }
          bVar7 = bVar5 | 0x20;
LAB_10970c494:
          cVar8 = bVar7 + 0xa9;
        }
        uVar9 = uVar6 >> 1 & 0x7fffffff;
        if ((uVar6 & 1) == 0) {
          cVar8 = cVar8 << 4;
        }
        else {
          cVar8 = *(char *)((long)&uStack_44 + uVar9) + cVar8;
        }
        *(char *)((long)&uStack_44 + uVar9) = cVar8;
        uVar6 = uVar6 + 1;
      } while (uVar6 != 8);
    }
    else {
      uVar6 = 0;
      do {
        bVar5 = pcVar1[uVar6];
        uVar2 = (bVar5 & 0xffffffdf) - 0x41;
        bVar4 = bVar5 - 0x30 < 10;
        if ((!bVar4 && 0x18 < uVar2) && (bVar4 || uVar2 != 0x19)) {
          if (uVar6 == 0) {
            return;
          }
          if (uVar6 < 4) {
            _memset((long)&uStack_44 + uVar6,0x20,4 - uVar6);
          }
          break;
        }
        (*param_5)();
        *(byte *)((long)&uStack_44 + uVar6) = bVar5;
        uVar6 = uVar6 + 1;
      } while (uVar6 != 4);
    }
    uVar2 = (uStack_44 & 0xff00ff00) >> 8 | (uStack_44 & 0xff00ff) << 8;
    uVar3 = uVar2 >> 0x10 | uVar2 << 0x10;
    uVar2 = uVar3 ^ 0x20202020;
    if ((uVar3 & 0xdfdfdfdf) != 0x44464c54) {
      uVar2 = uVar3;
    }
    *param_3 = uVar2;
    *param_2 = 1;
  }
  return;
}



/* Entry: 10970c570; end: 10970c587;  */

uint FUN_10970c570(uint param_1)

{
  uint uVar1;
  
  uVar1 = param_1 - 0x20;
  if (0x19 < param_1 - 0x61) {
    uVar1 = param_1;
  }
  return uVar1 & 0xff;
}



/* Entry: 10970c588; end: 10970c703;  */

void FUN_10970c588(long param_1,code *param_2,undefined8 param_3,code *UNRECOVERED_JUMPTABLE)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  
  if (*(int *)(param_1 + 4) == 0) {
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010970c5e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_3);
      return;
    }
  }
  else {
    if (param_2 == (code *)0x0) {
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
        param_3 = 0;
      }
      else {
        (*UNRECOVERED_JUMPTABLE)(param_3);
        param_3 = 0;
        UNRECOVERED_JUMPTABLE = (code *)0x0;
      }
    }
    if ((*(undefined8 **)(param_1 + 0x88) != (undefined8 *)0x0) &&
       (pcVar3 = (code *)**(undefined8 **)(param_1 + 0x88), pcVar3 != (code *)0x0)) {
      if (*(undefined8 **)(param_1 + 0x80) == (undefined8 *)0x0) {
        uVar1 = 0;
      }
      else {
        uVar1 = **(undefined8 **)(param_1 + 0x80);
      }
      (*pcVar3)(uVar1);
    }
    lVar2 = param_1;
    func_0x00010970c674(param_1,param_3,UNRECOVERED_JUMPTABLE);
    if ((int)lVar2 != 0) {
      pcVar3 = FUN_10970c704;
      if (param_2 != (code *)0x0) {
        pcVar3 = param_2;
      }
      *(code **)(param_1 + 0x10) = pcVar3;
      if (*(undefined8 **)(param_1 + 0x80) != (undefined8 *)0x0) {
        **(undefined8 **)(param_1 + 0x80) = param_3;
      }
      if (*(undefined8 **)(param_1 + 0x88) != (undefined8 *)0x0) {
        **(undefined8 **)(param_1 + 0x88) = UNRECOVERED_JUMPTABLE;
      }
    }
  }
  return;
}



/* Entry: 10970c704; end: 10970c707;  */

void FUN_10970c704(void)

{
  return;
}



/* Entry: 10970c708; end: 10970c7f3;  */

void FUN_10970c708(long param_1,code *param_2,undefined8 param_3,code *UNRECOVERED_JUMPTABLE)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  
  if (*(int *)(param_1 + 4) == 0) {
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010970c764. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_3);
      return;
    }
  }
  else {
    if (param_2 == (code *)0x0) {
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
        param_3 = 0;
      }
      else {
        (*UNRECOVERED_JUMPTABLE)(param_3);
        param_3 = 0;
        UNRECOVERED_JUMPTABLE = (code *)0x0;
      }
    }
    if ((*(long *)(param_1 + 0x88) != 0) &&
       (pcVar3 = *(code **)(*(long *)(param_1 + 0x88) + 8), pcVar3 != (code *)0x0)) {
      if (*(long *)(param_1 + 0x80) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x80) + 8);
      }
      (*pcVar3)(uVar1);
    }
    lVar2 = param_1;
    func_0x00010970c674(param_1,param_3,UNRECOVERED_JUMPTABLE);
    if ((int)lVar2 != 0) {
      pcVar3 = FUN_10970c7f4;
      if (param_2 != (code *)0x0) {
        pcVar3 = param_2;
      }
      *(code **)(param_1 + 0x18) = pcVar3;
      if (*(long *)(param_1 + 0x80) != 0) {
        *(undefined8 *)(*(long *)(param_1 + 0x80) + 8) = param_3;
      }
      if (*(long *)(param_1 + 0x88) != 0) {
        *(code **)(*(long *)(param_1 + 0x88) + 8) = UNRECOVERED_JUMPTABLE;
      }
    }
  }
  return;
}



/* Entry: 10970c7f4; end: 10970c7f7;  */

void FUN_10970c7f4(void)

{
  return;
}



/* Entry: 10970c7f8; end: 10970c8e3;  */

void FUN_10970c7f8(long param_1,code *param_2,undefined8 param_3,code *UNRECOVERED_JUMPTABLE)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  
  if (*(int *)(param_1 + 4) == 0) {
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010970c854. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_3);
      return;
    }
  }
  else {
    if (param_2 == (code *)0x0) {
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
        param_3 = 0;
      }
      else {
        (*UNRECOVERED_JUMPTABLE)(param_3);
        param_3 = 0;
        UNRECOVERED_JUMPTABLE = (code *)0x0;
      }
    }
    if ((*(long *)(param_1 + 0x88) != 0) &&
       (pcVar3 = *(code **)(*(long *)(param_1 + 0x88) + 0x10), pcVar3 != (code *)0x0)) {
      if (*(long *)(param_1 + 0x80) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x80) + 0x10);
      }
      (*pcVar3)(uVar1);
    }
    lVar2 = param_1;
    func_0x00010970c674(param_1,param_3,UNRECOVERED_JUMPTABLE);
    if ((int)lVar2 != 0) {
      pcVar3 = FUN_10970c8e4;
      if (param_2 != (code *)0x0) {
        pcVar3 = param_2;
      }
      *(code **)(param_1 + 0x20) = pcVar3;
      if (*(long *)(param_1 + 0x80) != 0) {
        *(undefined8 *)(*(long *)(param_1 + 0x80) + 0x10) = param_3;
      }
      if (*(long *)(param_1 + 0x88) != 0) {
        *(code **)(*(long *)(param_1 + 0x88) + 0x10) = UNRECOVERED_JUMPTABLE;
      }
    }
  }
  return;
}



/* Entry: 10970c8e4; end: 10970c8eb;  */

undefined8 FUN_10970c8e4(void)

{
  return 0;
}



/* Entry: 10970c8ec; end: 10970c9d7;  */

void FUN_10970c8ec(long param_1,code *param_2,undefined8 param_3,code *UNRECOVERED_JUMPTABLE)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  
  if (*(int *)(param_1 + 4) == 0) {
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010970c948. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_3);
      return;
    }
  }
  else {
    if (param_2 == (code *)0x0) {
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
        param_3 = 0;
      }
      else {
        (*UNRECOVERED_JUMPTABLE)(param_3);
        param_3 = 0;
        UNRECOVERED_JUMPTABLE = (code *)0x0;
      }
    }
    if ((*(long *)(param_1 + 0x88) != 0) &&
       (pcVar3 = *(code **)(*(long *)(param_1 + 0x88) + 0x18), pcVar3 != (code *)0x0)) {
      if (*(long *)(param_1 + 0x80) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x80) + 0x18);
      }
      (*pcVar3)(uVar1);
    }
    lVar2 = param_1;
    func_0x00010970c674(param_1,param_3,UNRECOVERED_JUMPTABLE);
    if ((int)lVar2 != 0) {
      pcVar3 = FUN_10970c9d8;
      if (param_2 != (code *)0x0) {
        pcVar3 = param_2;
      }
      *(code **)(param_1 + 0x28) = pcVar3;
      if (*(long *)(param_1 + 0x80) != 0) {
        *(undefined8 *)(*(long *)(param_1 + 0x80) + 0x18) = param_3;
      }
      if (*(long *)(param_1 + 0x88) != 0) {
        *(code **)(*(long *)(param_1 + 0x88) + 0x18) = UNRECOVERED_JUMPTABLE;
      }
    }
  }
  return;
}



/* Entry: 10970c9d8; end: 10970c9db;  */

void FUN_10970c9d8(void)

{
  return;
}



/* Entry: 10970c9dc; end: 10970cac7;  */

void FUN_10970c9dc(long param_1,code *param_2,undefined8 param_3,code *UNRECOVERED_JUMPTABLE)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  
  if (*(int *)(param_1 + 4) == 0) {
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010970ca38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_3);
      return;
    }
  }
  else {
    if (param_2 == (code *)0x0) {
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
        param_3 = 0;
      }
      else {
        (*UNRECOVERED_JUMPTABLE)(param_3);
        param_3 = 0;
        UNRECOVERED_JUMPTABLE = (code *)0x0;
      }
    }
    if ((*(long *)(param_1 + 0x88) != 0) &&
       (pcVar3 = *(code **)(*(long *)(param_1 + 0x88) + 0x20), pcVar3 != (code *)0x0)) {
      if (*(long *)(param_1 + 0x80) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x80) + 0x20);
      }
      (*pcVar3)(uVar1);
    }
    lVar2 = param_1;
    func_0x00010970c674(param_1,param_3,UNRECOVERED_JUMPTABLE);
    if ((int)lVar2 != 0) {
      pcVar3 = FUN_10970cac8;
      if (param_2 != (code *)0x0) {
        pcVar3 = param_2;
      }
      *(code **)(param_1 + 0x30) = pcVar3;
      if (*(long *)(param_1 + 0x80) != 0) {
        *(undefined8 *)(*(long *)(param_1 + 0x80) + 0x20) = param_3;
      }
      if (*(long *)(param_1 + 0x88) != 0) {
        *(code **)(*(long *)(param_1 + 0x88) + 0x20) = UNRECOVERED_JUMPTABLE;
      }
    }
  }
  return;
}



/* Entry: 10970cac8; end: 10970cacb;  */

void FUN_10970cac8(void)

{
  return;
}



/* Entry: 10970cacc; end: 10970cbb7;  */

void FUN_10970cacc(long param_1,code *param_2,undefined8 param_3,code *UNRECOVERED_JUMPTABLE)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  
  if (*(int *)(param_1 + 4) == 0) {
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010970cb28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_3);
      return;
    }
  }
  else {
    if (param_2 == (code *)0x0) {
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
        param_3 = 0;
      }
      else {
        (*UNRECOVERED_JUMPTABLE)(param_3);
        param_3 = 0;
        UNRECOVERED_JUMPTABLE = (code *)0x0;
      }
    }
    if ((*(long *)(param_1 + 0x88) != 0) &&
       (pcVar3 = *(code **)(*(long *)(param_1 + 0x88) + 0x28), pcVar3 != (code *)0x0)) {
      if (*(long *)(param_1 + 0x80) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x80) + 0x28);
      }
      (*pcVar3)(uVar1);
    }
    lVar2 = param_1;
    func_0x00010970c674(param_1,param_3,UNRECOVERED_JUMPTABLE);
    if ((int)lVar2 != 0) {
      pcVar3 = FUN_10970cbb8;
      if (param_2 != (code *)0x0) {
        pcVar3 = param_2;
      }
      *(code **)(param_1 + 0x38) = pcVar3;
      if (*(long *)(param_1 + 0x80) != 0) {
        *(undefined8 *)(*(long *)(param_1 + 0x80) + 0x28) = param_3;
      }
      if (*(long *)(param_1 + 0x88) != 0) {
        *(code **)(*(long *)(param_1 + 0x88) + 0x28) = UNRECOVERED_JUMPTABLE;
      }
    }
  }
  return;
}



/* Entry: 10970cbb8; end: 10970cbbb;  */

void FUN_10970cbb8(void)

{
  return;
}



/* Entry: 10970cbbc; end: 10970cca7;  */

void FUN_10970cbbc(long param_1,code *param_2,undefined8 param_3,code *UNRECOVERED_JUMPTABLE)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  
  if (*(int *)(param_1 + 4) == 0) {
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010970cc18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_3);
      return;
    }
  }
  else {
    if (param_2 == (code *)0x0) {
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
        param_3 = 0;
      }
      else {
        (*UNRECOVERED_JUMPTABLE)(param_3);
        param_3 = 0;
        UNRECOVERED_JUMPTABLE = (code *)0x0;
      }
    }
    if ((*(long *)(param_1 + 0x88) != 0) &&
       (pcVar3 = *(code **)(*(long *)(param_1 + 0x88) + 0x30), pcVar3 != (code *)0x0)) {
      if (*(long *)(param_1 + 0x80) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x80) + 0x30);
      }
      (*pcVar3)(uVar1);
    }
    lVar2 = param_1;
    func_0x00010970c674(param_1,param_3,UNRECOVERED_JUMPTABLE);
    if ((int)lVar2 != 0) {
      pcVar3 = FUN_10970cca8;
      if (param_2 != (code *)0x0) {
        pcVar3 = param_2;
      }
      *(code **)(param_1 + 0x40) = pcVar3;
      if (*(long *)(param_1 + 0x80) != 0) {
        *(undefined8 *)(*(long *)(param_1 + 0x80) + 0x30) = param_3;
      }
      if (*(long *)(param_1 + 0x88) != 0) {
        *(code **)(*(long *)(param_1 + 0x88) + 0x30) = UNRECOVERED_JUMPTABLE;
      }
    }
  }
  return;
}



/* Entry: 10970cca8; end: 10970ccab;  */

void FUN_10970cca8(void)

{
  return;
}



/* Entry: 10970ccac; end: 10970cd97;  */

void FUN_10970ccac(long param_1,code *param_2,undefined8 param_3,code *UNRECOVERED_JUMPTABLE)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  
  if (*(int *)(param_1 + 4) == 0) {
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010970cd08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_3);
      return;
    }
  }
  else {
    if (param_2 == (code *)0x0) {
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
        param_3 = 0;
      }
      else {
        (*UNRECOVERED_JUMPTABLE)(param_3);
        param_3 = 0;
        UNRECOVERED_JUMPTABLE = (code *)0x0;
      }
    }
    if ((*(long *)(param_1 + 0x88) != 0) &&
       (pcVar3 = *(code **)(*(long *)(param_1 + 0x88) + 0x38), pcVar3 != (code *)0x0)) {
      if (*(long *)(param_1 + 0x80) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x80) + 0x38);
      }
      (*pcVar3)(uVar1);
    }
    lVar2 = param_1;
    func_0x00010970c674(param_1,param_3,UNRECOVERED_JUMPTABLE);
    if ((int)lVar2 != 0) {
      pcVar3 = FUN_10970cd98;
      if (param_2 != (code *)0x0) {
        pcVar3 = param_2;
      }
      *(code **)(param_1 + 0x48) = pcVar3;
      if (*(long *)(param_1 + 0x80) != 0) {
        *(undefined8 *)(*(long *)(param_1 + 0x80) + 0x38) = param_3;
      }
      if (*(long *)(param_1 + 0x88) != 0) {
        *(code **)(*(long *)(param_1 + 0x88) + 0x38) = UNRECOVERED_JUMPTABLE;
      }
    }
  }
  return;
}



/* Entry: 10970cd98; end: 10970cd9f;  */

undefined8 FUN_10970cd98(void)

{
  return 0;
}



/* Entry: 10970cda0; end: 10970ce8b;  */

void FUN_10970cda0(long param_1,code *param_2,undefined8 param_3,code *UNRECOVERED_JUMPTABLE)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  
  if (*(int *)(param_1 + 4) == 0) {
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010970cdfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_3);
      return;
    }
  }
  else {
    if (param_2 == (code *)0x0) {
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
        param_3 = 0;
      }
      else {
        (*UNRECOVERED_JUMPTABLE)(param_3);
        param_3 = 0;
        UNRECOVERED_JUMPTABLE = (code *)0x0;
      }
    }
    if ((*(long *)(param_1 + 0x88) != 0) &&
       (pcVar3 = *(code **)(*(long *)(param_1 + 0x88) + 0x40), pcVar3 != (code *)0x0)) {
      if (*(long *)(param_1 + 0x80) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x80) + 0x40);
      }
      (*pcVar3)(uVar1);
    }
    lVar2 = param_1;
    func_0x00010970c674(param_1,param_3,UNRECOVERED_JUMPTABLE);
    if ((int)lVar2 != 0) {
      pcVar3 = FUN_10970ce8c;
      if (param_2 != (code *)0x0) {
        pcVar3 = param_2;
      }
      *(code **)(param_1 + 0x50) = pcVar3;
      if (*(long *)(param_1 + 0x80) != 0) {
        *(undefined8 *)(*(long *)(param_1 + 0x80) + 0x40) = param_3;
      }
      if (*(long *)(param_1 + 0x88) != 0) {
        *(code **)(*(long *)(param_1 + 0x88) + 0x40) = UNRECOVERED_JUMPTABLE;
      }
    }
  }
  return;
}



/* Entry: 10970ce8c; end: 10970ce8f;  */

void FUN_10970ce8c(void)

{
  return;
}



/* Entry: 10970ce90; end: 10970cf7b;  */

void FUN_10970ce90(long param_1,code *param_2,undefined8 param_3,code *UNRECOVERED_JUMPTABLE)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  
  if (*(int *)(param_1 + 4) == 0) {
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010970ceec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_3);
      return;
    }
  }
  else {
    if (param_2 == (code *)0x0) {
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
        param_3 = 0;
      }
      else {
        (*UNRECOVERED_JUMPTABLE)(param_3);
        param_3 = 0;
        UNRECOVERED_JUMPTABLE = (code *)0x0;
      }
    }
    if ((*(long *)(param_1 + 0x88) != 0) &&
       (pcVar3 = *(code **)(*(long *)(param_1 + 0x88) + 0x48), pcVar3 != (code *)0x0)) {
      if (*(long *)(param_1 + 0x80) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x80) + 0x48);
      }
      (*pcVar3)(uVar1);
    }
    lVar2 = param_1;
    func_0x00010970c674(param_1,param_3,UNRECOVERED_JUMPTABLE);
    if ((int)lVar2 != 0) {
      pcVar3 = FUN_10970cf7c;
      if (param_2 != (code *)0x0) {
        pcVar3 = param_2;
      }
      *(code **)(param_1 + 0x58) = pcVar3;
      if (*(long *)(param_1 + 0x80) != 0) {
        *(undefined8 *)(*(long *)(param_1 + 0x80) + 0x48) = param_3;
      }
      if (*(long *)(param_1 + 0x88) != 0) {
        *(code **)(*(long *)(param_1 + 0x88) + 0x48) = UNRECOVERED_JUMPTABLE;
      }
    }
  }
  return;
}



/* Entry: 10970cf7c; end: 10970cf7f;  */

void FUN_10970cf7c(void)

{
  return;
}



/* Entry: 10970cf80; end: 10970d06b;  */

void FUN_10970cf80(long param_1,code *param_2,undefined8 param_3,code *UNRECOVERED_JUMPTABLE)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  
  if (*(int *)(param_1 + 4) == 0) {
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010970cfdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_3);
      return;
    }
  }
  else {
    if (param_2 == (code *)0x0) {
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
        param_3 = 0;
      }
      else {
        (*UNRECOVERED_JUMPTABLE)(param_3);
        param_3 = 0;
        UNRECOVERED_JUMPTABLE = (code *)0x0;
      }
    }
    if ((*(long *)(param_1 + 0x88) != 0) &&
       (pcVar3 = *(code **)(*(long *)(param_1 + 0x88) + 0x50), pcVar3 != (code *)0x0)) {
      if (*(long *)(param_1 + 0x80) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x80) + 0x50);
      }
      (*pcVar3)(uVar1);
    }
    lVar2 = param_1;
    func_0x00010970c674(param_1,param_3,UNRECOVERED_JUMPTABLE);
    if ((int)lVar2 != 0) {
      pcVar3 = FUN_10970d06c;
      if (param_2 != (code *)0x0) {
        pcVar3 = param_2;
      }
      *(code **)(param_1 + 0x60) = pcVar3;
      if (*(long *)(param_1 + 0x80) != 0) {
        *(undefined8 *)(*(long *)(param_1 + 0x80) + 0x50) = param_3;
      }
      if (*(long *)(param_1 + 0x88) != 0) {
        *(code **)(*(long *)(param_1 + 0x88) + 0x50) = UNRECOVERED_JUMPTABLE;
      }
    }
  }
  return;
}



/* Entry: 10970d06c; end: 10970d06f;  */

void FUN_10970d06c(void)

{
  return;
}



/* Entry: 10970d070; end: 10970d15b;  */

void FUN_10970d070(long param_1,code *param_2,undefined8 param_3,code *UNRECOVERED_JUMPTABLE)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  
  if (*(int *)(param_1 + 4) == 0) {
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010970d0cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_3);
      return;
    }
  }
  else {
    if (param_2 == (code *)0x0) {
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
        param_3 = 0;
      }
      else {
        (*UNRECOVERED_JUMPTABLE)(param_3);
        param_3 = 0;
        UNRECOVERED_JUMPTABLE = (code *)0x0;
      }
    }
    if ((*(long *)(param_1 + 0x88) != 0) &&
       (pcVar3 = *(code **)(*(long *)(param_1 + 0x88) + 0x58), pcVar3 != (code *)0x0)) {
      if (*(long *)(param_1 + 0x80) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x80) + 0x58);
      }
      (*pcVar3)(uVar1);
    }
    lVar2 = param_1;
    func_0x00010970c674(param_1,param_3,UNRECOVERED_JUMPTABLE);
    if ((int)lVar2 != 0) {
      pcVar3 = FUN_10970d15c;
      if (param_2 != (code *)0x0) {
        pcVar3 = param_2;
      }
      *(code **)(param_1 + 0x68) = pcVar3;
      if (*(long *)(param_1 + 0x80) != 0) {
        *(undefined8 *)(*(long *)(param_1 + 0x80) + 0x58) = param_3;
      }
      if (*(long *)(param_1 + 0x88) != 0) {
        *(code **)(*(long *)(param_1 + 0x88) + 0x58) = UNRECOVERED_JUMPTABLE;
      }
    }
  }
  return;
}



/* Entry: 10970d15c; end: 10970d15f;  */

void FUN_10970d15c(void)

{
  return;
}



/* Entry: 10970d160; end: 10970d24b;  */

void FUN_10970d160(long param_1,code *param_2,undefined8 param_3,code *UNRECOVERED_JUMPTABLE)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  
  if (*(int *)(param_1 + 4) == 0) {
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010970d1bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_3);
      return;
    }
  }
  else {
    if (param_2 == (code *)0x0) {
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
        param_3 = 0;
      }
      else {
        (*UNRECOVERED_JUMPTABLE)(param_3);
        param_3 = 0;
        UNRECOVERED_JUMPTABLE = (code *)0x0;
      }
    }
    if ((*(long *)(param_1 + 0x88) != 0) &&
       (pcVar3 = *(code **)(*(long *)(param_1 + 0x88) + 0x60), pcVar3 != (code *)0x0)) {
      if (*(long *)(param_1 + 0x80) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x80) + 0x60);
      }
      (*pcVar3)(uVar1);
    }
    lVar2 = param_1;
    func_0x00010970c674(param_1,param_3,UNRECOVERED_JUMPTABLE);
    if ((int)lVar2 != 0) {
      pcVar3 = FUN_10970d24c;
      if (param_2 != (code *)0x0) {
        pcVar3 = param_2;
      }
      *(code **)(param_1 + 0x70) = pcVar3;
      if (*(long *)(param_1 + 0x80) != 0) {
        *(undefined8 *)(*(long *)(param_1 + 0x80) + 0x60) = param_3;
      }
      if (*(long *)(param_1 + 0x88) != 0) {
        *(code **)(*(long *)(param_1 + 0x88) + 0x60) = UNRECOVERED_JUMPTABLE;
      }
    }
  }
  return;
}



/* Entry: 10970d24c; end: 10970d24f;  */

void FUN_10970d24c(void)

{
  return;
}



/* Entry: 10970d250; end: 10970d33b;  */

void FUN_10970d250(long param_1,code *param_2,undefined8 param_3,code *UNRECOVERED_JUMPTABLE)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  
  if (*(int *)(param_1 + 4) == 0) {
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010970d2ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_3);
      return;
    }
  }
  else {
    if (param_2 == (code *)0x0) {
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
        param_3 = 0;
      }
      else {
        (*UNRECOVERED_JUMPTABLE)(param_3);
        param_3 = 0;
        UNRECOVERED_JUMPTABLE = (code *)0x0;
      }
    }
    if ((*(long *)(param_1 + 0x88) != 0) &&
       (pcVar3 = *(code **)(*(long *)(param_1 + 0x88) + 0x68), pcVar3 != (code *)0x0)) {
      if (*(long *)(param_1 + 0x80) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x80) + 0x68);
      }
      (*pcVar3)(uVar1);
    }
    lVar2 = param_1;
    func_0x00010970c674(param_1,param_3,UNRECOVERED_JUMPTABLE);
    if ((int)lVar2 != 0) {
      pcVar3 = FUN_10970d33c;
      if (param_2 != (code *)0x0) {
        pcVar3 = param_2;
      }
      *(code **)(param_1 + 0x78) = pcVar3;
      if (*(long *)(param_1 + 0x80) != 0) {
        *(undefined8 *)(*(long *)(param_1 + 0x80) + 0x68) = param_3;
      }
      if (*(long *)(param_1 + 0x88) != 0) {
        *(code **)(*(long *)(param_1 + 0x88) + 0x68) = UNRECOVERED_JUMPTABLE;
      }
    }
  }
  return;
}



/* Entry: 10970d33c; end: 10970d343;  */

undefined8 FUN_10970d33c(void)

{
  return 0;
}



/* Entry: 10970d344; end: 10970d5d3;  */

void FUN_10970d344(int *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    do {
      iVar1 = *param_1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar3) {
        *param_1 = iVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar1 + -1 == 0) {
      *param_1 = -0xdead;
      lVar6 = *(long *)(param_1 + 2);
      if (lVar6 != 0) {
        FUN_109711500(lVar6 + 0x40,lVar6);
        _pthread_mutex_destroy(lVar6);
        _free(lVar6);
        param_1[2] = 0;
        param_1[3] = 0;
      }
      puVar4 = *(undefined8 **)(param_1 + 0x22);
      if (puVar4 != (undefined8 *)0x0) {
        if ((code *)*puVar4 != (code *)0x0) {
          if (*(undefined8 **)(param_1 + 0x20) == (undefined8 *)0x0) {
            uVar5 = 0;
          }
          else {
            uVar5 = **(undefined8 **)(param_1 + 0x20);
          }
          (*(code *)*puVar4)(uVar5);
          puVar4 = *(undefined8 **)(param_1 + 0x22);
        }
        if ((code *)puVar4[1] != (code *)0x0) {
          if (*(long *)(param_1 + 0x20) == 0) {
            uVar5 = 0;
          }
          else {
            uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
          }
          (*(code *)puVar4[1])(uVar5);
          puVar4 = *(undefined8 **)(param_1 + 0x22);
        }
        if ((code *)puVar4[2] != (code *)0x0) {
          if (*(long *)(param_1 + 0x20) == 0) {
            uVar5 = 0;
          }
          else {
            uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
          }
          (*(code *)puVar4[2])(uVar5);
          puVar4 = *(undefined8 **)(param_1 + 0x22);
        }
        if ((code *)puVar4[3] != (code *)0x0) {
          if (*(long *)(param_1 + 0x20) == 0) {
            uVar5 = 0;
          }
          else {
            uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
          }
          (*(code *)puVar4[3])(uVar5);
          puVar4 = *(undefined8 **)(param_1 + 0x22);
        }
        if ((code *)puVar4[4] != (code *)0x0) {
          if (*(long *)(param_1 + 0x20) == 0) {
            uVar5 = 0;
          }
          else {
            uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
          }
          (*(code *)puVar4[4])(uVar5);
          puVar4 = *(undefined8 **)(param_1 + 0x22);
        }
        if ((code *)puVar4[5] != (code *)0x0) {
          if (*(long *)(param_1 + 0x20) == 0) {
            uVar5 = 0;
          }
          else {
            uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
          }
          (*(code *)puVar4[5])(uVar5);
          puVar4 = *(undefined8 **)(param_1 + 0x22);
        }
        if ((code *)puVar4[6] != (code *)0x0) {
          if (*(long *)(param_1 + 0x20) == 0) {
            uVar5 = 0;
          }
          else {
            uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
          }
          (*(code *)puVar4[6])(uVar5);
          puVar4 = *(undefined8 **)(param_1 + 0x22);
        }
        if ((code *)puVar4[7] != (code *)0x0) {
          if (*(long *)(param_1 + 0x20) == 0) {
            uVar5 = 0;
          }
          else {
            uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38);
          }
          (*(code *)puVar4[7])(uVar5);
          puVar4 = *(undefined8 **)(param_1 + 0x22);
        }
        if ((code *)puVar4[8] != (code *)0x0) {
          if (*(long *)(param_1 + 0x20) == 0) {
            uVar5 = 0;
          }
          else {
            uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x40);
          }
          (*(code *)puVar4[8])(uVar5);
          puVar4 = *(undefined8 **)(param_1 + 0x22);
        }
        if ((code *)puVar4[9] != (code *)0x0) {
          if (*(long *)(param_1 + 0x20) == 0) {
            uVar5 = 0;
          }
          else {
            uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48);
          }
          (*(code *)puVar4[9])(uVar5);
          puVar4 = *(undefined8 **)(param_1 + 0x22);
        }
        if ((code *)puVar4[10] != (code *)0x0) {
          if (*(long *)(param_1 + 0x20) == 0) {
            uVar5 = 0;
          }
          else {
            uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x50);
          }
          (*(code *)puVar4[10])(uVar5);
          puVar4 = *(undefined8 **)(param_1 + 0x22);
        }
        if ((code *)puVar4[0xb] != (code *)0x0) {
          if (*(long *)(param_1 + 0x20) == 0) {
            uVar5 = 0;
          }
          else {
            uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x58);
          }
          (*(code *)puVar4[0xb])(uVar5);
          puVar4 = *(undefined8 **)(param_1 + 0x22);
        }
        if ((code *)puVar4[0xc] != (code *)0x0) {
          if (*(long *)(param_1 + 0x20) == 0) {
            uVar5 = 0;
          }
          else {
            uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x60);
          }
          (*(code *)puVar4[0xc])(uVar5);
          puVar4 = *(undefined8 **)(param_1 + 0x22);
        }
        if ((code *)puVar4[0xd] != (code *)0x0) {
          if (*(long *)(param_1 + 0x20) == 0) {
            uVar5 = 0;
          }
          else {
            uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x68);
          }
          (*(code *)puVar4[0xd])(uVar5);
          puVar4 = *(undefined8 **)(param_1 + 0x22);
        }
      }
      _free(puVar4);
      _free(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_11034c310)(param_1);
      return;
    }
  }
  return;
}



/* Entry: 10970d5d4; end: 10970d5eb;  */

void FUN_10970d5d4(long param_1)

{
  FUN_10974f5d4(param_1 + 0x10);
  return;
}



/* Entry: 10970d5ec; end: 10970d847;  */

undefined8
FUN_10970d5ec(undefined8 *param_1,int param_2,long param_3,undefined8 *param_4,undefined8 param_5,
             uint param_6,undefined8 param_7,undefined8 param_8,undefined8 *param_9)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  if ((param_2 == 0) || (param_6 == 0)) {
    uVar8 = 0;
    uVar10 = *param_4;
    uVar12 = param_4[3];
    uVar11 = param_4[2];
    param_1[1] = param_4[1];
    *param_1 = uVar10;
    param_1[3] = uVar12;
    param_1[2] = uVar11;
    *(uint *)(param_1 + 5) = param_6;
    uVar10 = 0;
    if (param_2 == 0) {
      uVar10 = param_5;
    }
    param_1[4] = uVar10;
  }
  else {
    uVar9 = (ulong)param_6;
    uVar8 = uVar9;
    _calloc(uVar9,0x10);
    if (uVar8 == 0) goto LAB_10970d714;
    uVar10 = *param_4;
    uVar12 = param_4[3];
    uVar11 = param_4[2];
    param_1[1] = param_4[1];
    *param_1 = uVar10;
    param_1[3] = uVar12;
    param_1[2] = uVar11;
    *(uint *)(param_1 + 5) = param_6;
    param_1[4] = uVar8;
    _memcpy(uVar8,param_5,uVar9 << 4);
    iVar5 = *(int *)(uVar8 + 8);
    iVar6 = *(int *)(uVar8 + 0xc);
    do {
      if (iVar5 != 0) {
        iVar5 = 1;
        *(undefined4 *)(uVar8 + 8) = 1;
      }
      if (iVar6 != -1) {
        iVar6 = 2;
        *(undefined4 *)(uVar8 + 0xc) = 2;
      }
      param_6 = param_6 - 1;
    } while (param_6 != 0);
  }
  param_1[7] = 0;
  param_1[8] = 0;
  FUN_109701168(param_3,0x47535542,param_7,param_8,(long)param_1 + 0x2c);
  FUN_109701168(param_3,0x47504f53,param_7,param_8,param_1 + 6);
  if (param_9 == (undefined8 *)0x0) {
    puVar4 = puRam0000000113735de0;
    if (puRam0000000113735de0 == (undefined *)0x0) {
      do {
        puVar4 = puRam0000000113735de0;
        FUN_10974f730();
        if (puVar4 == (undefined *)0x0) {
          if (puRam0000000113735de0 == (undefined *)0x0) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(0x113735de0,0x10);
            if (bVar3) {
              puRam0000000113735de0 = &UNK_110b0b380;
              cVar2 = ExclusiveMonitorsStatus();
            }
            puVar4 = &UNK_110b0b380;
            if (cVar2 == '\0') break;
          }
          else {
            ClearExclusiveLocal();
          }
        }
        else {
          if (puRam0000000113735de0 == (undefined *)0x0) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(0x113735de0,0x10);
            if (bVar3) {
              cVar2 = ExclusiveMonitorsStatus();
              puRam0000000113735de0 = puVar4;
            }
            if (cVar2 == '\0') break;
          }
          else {
            ClearExclusiveLocal();
          }
          _free();
        }
        puVar4 = puRam0000000113735de0;
      } while (puRam0000000113735de0 == (undefined *)0x0);
    }
    if (*(code **)(puVar4 + 0x10) == FUN_109704d68) {
      plVar1 = (long *)(param_3 + 0x58);
      do {
        while( true ) {
          if (*plVar1 != 0) goto LAB_10970d81c;
          if (*(long *)(param_3 + 0x50) == 0) goto LAB_10970d714;
          if (*plVar1 == 0) break;
          ClearExclusiveLocal();
        }
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
LAB_10970d81c:
      param_1[7] = FUN_109704d68;
      param_1[8] = &UNK_10f57eb21;
      return 1;
    }
  }
  else {
    pcVar7 = (char *)*param_9;
    if (pcVar7 != (char *)0x0) {
      plVar1 = (long *)(param_3 + 0x58);
      do {
        if (((*pcVar7 == 'o') && (pcVar7[1] == 't')) && (pcVar7[2] == '\0')) {
          while( true ) {
            if (*plVar1 != 0) goto LAB_10970d81c;
            if (*(long *)(param_3 + 0x50) == 0) break;
            if (*plVar1 == 0) {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar3) {
                *plVar1 = 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
              if (cVar2 == '\0') goto LAB_10970d81c;
            }
            else {
              ClearExclusiveLocal();
            }
          }
        }
        param_9 = param_9 + 1;
        pcVar7 = (char *)*param_9;
      } while (pcVar7 != (char *)0x0);
    }
  }
LAB_10970d714:
  _free(uVar8);
  return 0;
}



/* Entry: 10970d848; end: 10970fc5b;  */

/* WARNING: Type propagation algorithm not settling */

ushort ** FUN_10970d848(ushort **param_1,code *param_2,ushort **param_3,ushort **param_4,
                       ushort **param_5,undefined8 param_6)

{
  long lVar1;
  ushort uVar2;
  ushort uVar3;
  byte bVar4;
  char cVar5;
  undefined1 uVar6;
  bool bVar7;
  bool bVar8;
  ushort **ppuVar9;
  uint *puVar10;
  uint *puVar11;
  long *plVar12;
  undefined8 *puVar13;
  ushort **ppuVar14;
  uint uVar15;
  ushort **ppuVar16;
  ushort **ppuVar17;
  ushort **ppuVar18;
  ulong uVar19;
  uint uVar20;
  ulong uVar21;
  ushort *puVar22;
  undefined *puVar23;
  uint *puVar24;
  ulong uVar25;
  byte bVar26;
  ushort uVar27;
  ushort *puVar28;
  ulong uVar29;
  ushort *puVar30;
  bool bVar31;
  ushort uVar32;
  int iVar33;
  int *piVar34;
  byte bVar35;
  ushort uVar36;
  int *piVar37;
  int iVar38;
  uint uVar39;
  int *piVar40;
  int iVar41;
  int iVar42;
  int iVar43;
  ushort **ppuVar44;
  ulong uVar45;
  code *pcVar46;
  ulong uVar47;
  ushort *puVar48;
  ushort **unaff_x22;
  long lVar49;
  long *plVar50;
  uint uVar51;
  uint uVar52;
  ushort **ppuVar53;
  ushort **ppuVar54;
  ushort **ppuVar55;
  ulong uVar56;
  uint uVar57;
  undefined8 uVar58;
  int iVar59;
  undefined8 uVar60;
  undefined8 uVar61;
  ushort **ppuStack_340;
  undefined8 uStack_330;
  ushort *puStack_328;
  ushort *puStack_320;
  ushort *puStack_318;
  long lStack_310;
  uint uStack_308;
  long lStack_304;
  ushort *puStack_2f8;
  ushort *apuStack_2e0 [2];
  uint auStack_2d0 [2];
  undefined8 uStack_2c8;
  ushort **appuStack_2c0 [2];
  long lStack_2b0;
  uint *puStack_1f8;
  uint *puStack_1e8;
  ushort **ppuStack_1c0;
  ushort *puStack_1b8;
  ushort *puStack_1b0;
  ushort *puStack_1a8;
  ushort *puStack_1a0;
  ushort *apuStack_198 [5];
  byte bStack_170;
  uint auStack_16c [2];
  undefined1 auStack_164 [12];
  uint auStack_158 [4];
  uint uStack_148;
  uint uStack_144;
  int *piStack_140;
  uint uStack_138;
  uint uStack_134;
  long lStack_130;
  uint auStack_128 [4];
  byte bStack_118;
  undefined **ppuStack_110;
  uint uStack_104;
  uint uStack_100;
  int iStack_fc;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_e0 [2];
  undefined8 auStack_de [2];
  undefined2 auStack_ce [3];
  long alStack_c8 [7];
  undefined8 uStack_90;
  uint auStack_88 [2];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar9 = param_1;
  ppuVar16 = (ushort **)param_2;
  ppuVar18 = param_3;
  ppuVar54 = param_4;
  ppuVar17 = param_5;
  if (*(int *)param_2 == 0) {
LAB_10970fbcc:
    param_5 = unaff_x22;
    ppuVar55 = (ushort **)&UNK_10dfe4888;
    ppuVar14 = ppuVar9;
  }
  else {
    ppuVar9 = (ushort **)0x1;
    ppuVar16 = (ushort **)0x108;
    _calloc();
    ppuVar55 = (ushort **)&UNK_10dfe4888;
    ppuVar14 = ppuVar9;
    if (ppuVar9 != (ushort **)0x0) {
      *(int *)ppuVar9 = 1;
      *(int *)((long)ppuVar9 + 4) = 1;
      ppuVar9[1] = (ushort *)0x0;
      if (param_1 == (ushort **)0x0) {
        param_1 = (ushort **)&DAT_1132dfe18;
      }
      if (*(int *)((long)param_1 + 4) != 0) {
        *(int *)((long)param_1 + 4) = 0;
      }
      ppuVar9[2] = (ushort *)param_1;
      ppuVar54 = ppuVar9 + 3;
      ppuVar16 = (ushort **)0x1;
      ppuVar18 = param_1;
      FUN_10970d5ec(ppuVar54,1,param_1,param_2,param_3,param_4,param_5,param_6);
      if ((int)ppuVar54 != 0) {
        ppuVar14 = ppuVar9 + 0x11;
        ppuVar9[0x12] = (ushort *)0x0;
        *ppuVar14 = (ushort *)0x0;
        ppuVar9[0x1a] = (ushort *)0x0;
        ppuVar9[0x19] = (ushort *)0x0;
        ppuVar9[0x1c] = (ushort *)0x0;
        ppuVar9[0x1b] = (ushort *)0x0;
        ppuVar9[0x16] = (ushort *)0x0;
        ppuVar9[0x15] = (ushort *)0x0;
        ppuVar9[0x18] = (ushort *)0x0;
        ppuVar9[0x17] = (ushort *)0x0;
        ppuVar9[0x14] = (ushort *)0x0;
        ppuVar9[0x13] = (ushort *)0x0;
        puStack_1b0 = ppuVar9[4];
        puStack_1b8 = ppuVar9[3];
        puStack_1a0 = ppuVar9[6];
        puStack_1a8 = ppuVar9[5];
        ppuStack_1c0 = param_1;
        FUN_109701454(apuStack_198,param_1,ppuVar9 + 3);
        ppuVar18 = param_1 + 0x27;
        FUN_10973a5bc();
        ppuVar16 = ppuVar55;
        if ((ushort **)*ppuVar18 != (ushort **)0x0) {
          ppuVar16 = (ushort **)*ppuVar18;
        }
        ppuVar18 = ppuVar55;
        if (7 < *(uint *)(ppuVar16 + 3)) {
          ppuVar18 = (ushort **)ppuVar16[2];
        }
        if (*(code *)((long)ppuVar18 + 1) == (code)0x0 && *(code *)ppuVar18 == (code)0x0) {
          ppuVar18 = param_1 + 0x28;
          FUN_10973c4f0();
          ppuVar16 = ppuVar55;
          if ((ushort **)*ppuVar18 != (ushort **)0x0) {
            ppuVar16 = (ushort **)*ppuVar18;
          }
          if (7 < *(uint *)(ppuVar16 + 3)) {
            ppuVar55 = (ushort **)ppuVar16[2];
          }
          bVar7 = false;
          if (*(code *)((long)ppuVar55 + 1) != (code)0x0 || *(code *)ppuVar55 != (code)0x0)
          goto LAB_10970d9cc;
        }
        else {
LAB_10970d9cc:
          if (((ulong)ppuVar9[3] & 0xfffffffe) == 4) {
            bVar7 = true;
          }
          else {
            FUN_109701338();
            bVar7 = (int)param_1 == 0;
          }
        }
        uVar15 = *(uint *)((long)ppuVar9 + 0x1c);
        if ((int)uVar15 < 0x4d617263) {
          if ((int)uVar15 < 0x47756b68) {
            if ((int)uVar15 < 0x43687273) {
              if ((int)uVar15 < 0x42686b73) {
                if ((int)uVar15 < 0x42616c69) {
                  if ((uVar15 != 0x41646c6d) && (uVar15 != 0x41686f6d)) {
                    ppuStack_110 = (undefined **)&UNK_10dfe0d50;
                    if (uVar15 == 0x41726162) goto LAB_10970fb1c;
                    goto LAB_10970e2c0;
                  }
                }
                else if ((uVar15 != 0x42616c69) && (uVar15 != 0x4261746b)) {
                  uVar20 = 0x42656e67;
                  goto LAB_10970e224;
                }
              }
              else if ((int)uVar15 < 0x42756864) {
                if ((uVar15 != 0x42686b73) && (uVar15 != 0x42726168)) {
                  uVar20 = 0x42756769;
                  goto LAB_10970e290;
                }
              }
              else if ((uVar15 != 0x42756864) && (uVar15 != 0x43616b6d)) {
                uVar20 = 0x4368616d;
                goto LAB_10970e290;
              }
            }
            else if ((int)uVar15 < 0x45677970) {
              if ((int)uVar15 < 0x4469616b) {
                if ((uVar15 != 0x43687273) && (uVar15 != 0x43706d6e)) {
                  uVar20 = 0x44657661;
                  goto LAB_10970e224;
                }
              }
              else if ((uVar15 != 0x4469616b) && (uVar15 != 0x446f6772)) {
                uVar20 = 0x4475706c;
                goto LAB_10970e290;
              }
            }
            else if ((int)uVar15 < 0x476f6e67) {
              if ((uVar15 != 0x45677970) && (uVar15 != 0x456c796d)) {
                uVar20 = 0x47617261;
                goto LAB_10970e290;
              }
            }
            else if ((int)uVar15 < 0x4772616e) {
              if (uVar15 != 0x476f6e67) {
                uVar20 = 0x476f6e6d;
                goto LAB_10970e290;
              }
            }
            else if (uVar15 != 0x4772616e) {
              uVar20 = 0x47756a72;
              goto LAB_10970e224;
            }
            goto LAB_10970e29c;
          }
          if (0x4b686f69 < (int)uVar15) {
            if ((int)uVar15 < 0x4c616f6f) {
              if ((int)uVar15 < 0x4b726169) {
                if ((uVar15 != 0x4b686f6a) && (uVar15 != 0x4b697473)) {
                  uVar20 = 0x4b6e6461;
                  goto LAB_10970e224;
                }
              }
              else if ((uVar15 != 0x4b726169) && (uVar15 != 0x4b746869)) {
                uVar20 = 0x4c616e61;
                goto LAB_10970e290;
              }
            }
            else if ((int)uVar15 < 0x4d61686a) {
              if (uVar15 == 0x4c616f6f) {
LAB_10970fb10:
                ppuStack_110 = (undefined **)&UNK_110b0b260;
                goto LAB_10970e2c0;
              }
              if (uVar15 != 0x4c657063) {
                uVar20 = 0x4c696d62;
                goto LAB_10970e290;
              }
            }
            else if ((int)uVar15 < 0x4d616e64) {
              if (uVar15 != 0x4d61686a) {
                uVar20 = 0x6b61;
LAB_10970e28c:
                uVar20 = uVar20 | 0x4d610000;
                goto LAB_10970e290;
              }
            }
            else if (uVar15 != 0x4d616e64) {
              uVar20 = 0x6e69;
              goto LAB_10970e28c;
            }
            goto LAB_10970e29c;
          }
          if (0x486d6e6f < (int)uVar15) {
            if ((int)uVar15 < 0x4b617769) {
              if ((uVar15 != 0x486d6e70) && (uVar15 != 0x4a617661)) {
                uVar20 = 0x4b616c69;
                goto LAB_10970e290;
              }
            }
            else if ((uVar15 != 0x4b617769) && (uVar15 != 0x4b686172)) {
              ppuStack_110 = (undefined **)&UNK_10dfe0d50;
              if (uVar15 == 0x4b686d72) {
                ppuStack_110 = &PTR_FUN_110b0b1a0;
              }
              goto LAB_10970e2c0;
            }
            goto LAB_10970e29c;
          }
          if ((int)uVar15 < 0x48616e6f) {
            if (uVar15 == 0x47756b68) goto LAB_10970e29c;
            if (uVar15 == 0x47757275) goto LAB_10970e230;
            ppuStack_110 = (undefined **)&UNK_10dfe0d50;
            if (uVar15 == 0x48616e67) {
              ppuStack_110 = &PTR_FUN_110b0b080;
            }
          }
          else {
            if (uVar15 == 0x48616e6f) goto LAB_10970e29c;
            if (uVar15 != 0x48656272) {
              uVar20 = 0x486d6e67;
              goto LAB_10970e290;
            }
            ppuStack_110 = (undefined **)&UNK_110b0b0e0;
          }
        }
        else {
          if ((int)uVar15 < 0x536f6764) {
            if ((int)uVar15 < 0x4f6e616f) {
              if ((int)uVar15 < 0x4d756c74) {
                if ((int)uVar15 < 0x4d6f6469) {
                  if ((uVar15 != 0x4d617263) && (uVar15 != 0x4d656466)) {
                    uVar20 = 0x4d6c796d;
                    goto LAB_10970e224;
                  }
                }
                else if ((uVar15 != 0x4d6f6469) && (uVar15 != 0x4d6f6e67)) {
                  uVar20 = 0x4d746569;
                  goto LAB_10970e290;
                }
              }
              else if ((int)uVar15 < 0x4e616e64) {
                if (uVar15 != 0x4d756c74) {
                  if (uVar15 == 0x4d796d72) {
                    ppuStack_110 = (undefined **)&UNK_10dfe0d50;
                    if (((auStack_16c[0] != 0x44464c54) && (auStack_16c[0] != 0x6c61746e)) &&
                       (auStack_16c[0] != 0x6d796d72)) {
                      ppuStack_110 = &PTR_FUN_110b0b200;
                    }
                    goto LAB_10970e2c0;
                  }
                  uVar20 = 0x4e61676d;
                  goto LAB_10970e290;
                }
              }
              else if ((uVar15 != 0x4e616e64) && (uVar15 != 0x4e657761)) {
                uVar20 = 0x4e6b6f6f;
                goto LAB_10970e290;
              }
            }
            else if ((int)uVar15 < 0x526a6e67) {
              if ((int)uVar15 < 0x50686167) {
                if (uVar15 != 0x4f6e616f) {
                  if (uVar15 != 0x4f727961) {
                    uVar20 = 0x4f756772;
                    goto LAB_10970e290;
                  }
LAB_10970e230:
                  ppuStack_110 = (undefined **)&UNK_10dfe0d50;
                  if ((auStack_16c[0] != 0x44464c54) &&
                     (ppuStack_110 = (undefined **)&UNK_10dfe0d50, auStack_16c[0] != 0x6c61746e)) {
                    ppuStack_110 = &PTR_FUN_110b0b2c0;
                    if ((auStack_16c[0] & 0xff) != 0x33) {
                      ppuStack_110 = &PTR_FUN_110b0b140;
                    }
                  }
                  goto LAB_10970e2c0;
                }
              }
              else if ((uVar15 != 0x50686167) && (uVar15 != 0x50686c70)) {
                uVar20 = 0x506c7264;
                goto LAB_10970e290;
              }
            }
            else if ((int)uVar15 < 0x53687264) {
              if ((uVar15 != 0x526a6e67) && (uVar15 != 0x526f6867)) {
                uVar20 = 0x53617572;
                goto LAB_10970e290;
              }
            }
            else if ((int)uVar15 < 0x53696e64) {
              if (uVar15 != 0x53687264) {
                uVar20 = 0x6464;
LAB_10970e204:
                uVar20 = uVar20 | 0x53690000;
                goto LAB_10970e290;
              }
            }
            else if (uVar15 != 0x53696e64) {
              uVar20 = 0x6e68;
              goto LAB_10970e204;
            }
          }
          else if ((int)uVar15 < 0x54666e67) {
            if ((int)uVar15 < 0x53797263) {
              if ((int)uVar15 < 0x53756e64) {
                if ((uVar15 != 0x536f6764) && (uVar15 != 0x536f676f)) {
                  uVar20 = 0x536f796f;
LAB_10970e290:
                  ppuStack_110 = (undefined **)&UNK_10dfe0d50;
                  if (uVar15 != uVar20) goto LAB_10970e2c0;
                }
              }
              else if ((uVar15 != 0x53756e64) && (uVar15 != 0x53756e75)) {
                uVar20 = 0x53796c6f;
                goto LAB_10970e290;
              }
            }
            else if ((int)uVar15 < 0x54616c65) {
              if (uVar15 == 0x53797263) {
LAB_10970fb1c:
                ppuStack_110 = &PTR_FUN_110b0b020;
                if (auStack_16c[0] == 0x44464c54 && uVar15 != 0x41726162 ||
                    ((ulong)ppuVar9[3] & 0xfffffffe) != 4) {
                  ppuStack_110 = (undefined **)&UNK_10dfe0d50;
                }
                goto LAB_10970e2c0;
              }
              if (uVar15 != 0x54616762) {
                uVar20 = 0x54616b72;
                goto LAB_10970e290;
              }
            }
            else if ((int)uVar15 < 0x54617674) {
              if (uVar15 != 0x54616c65) {
                uVar20 = 0x54616d6c;
LAB_10970e224:
                ppuStack_110 = (undefined **)&UNK_10dfe0d50;
                if (uVar15 != uVar20) goto LAB_10970e2c0;
                goto LAB_10970e230;
              }
            }
            else if (uVar15 != 0x54617674) {
              uVar20 = 0x54656c75;
              goto LAB_10970e224;
            }
          }
          else if ((int)uVar15 < 0x546f6472) {
            if ((int)uVar15 < 0x54696274) {
              if ((uVar15 != 0x54666e67) && (uVar15 != 0x54676c67)) {
                ppuStack_110 = (undefined **)&UNK_10dfe0d50;
                if (uVar15 == 0x54686169) goto LAB_10970fb10;
                goto LAB_10970e2c0;
              }
            }
            else if ((uVar15 != 0x54696274) && (uVar15 != 0x54697268)) {
              uVar20 = 0x546e7361;
              goto LAB_10970e290;
            }
          }
          else if ((int)uVar15 < 0x56697468) {
            if ((uVar15 != 0x546f6472) && (uVar15 != 0x546f746f)) {
              uVar20 = 0x54757467;
              goto LAB_10970e290;
            }
          }
          else if ((int)uVar15 < 0x59657a69) {
            if (uVar15 != 0x56697468) {
              uVar20 = 0x5763686f;
              goto LAB_10970e290;
            }
          }
          else if (uVar15 != 0x59657a69) {
            uVar20 = 0x5a616e62;
            goto LAB_10970e290;
          }
LAB_10970e29c:
          ppuStack_110 = (undefined **)&UNK_10dfe0d50;
          if (auStack_16c[0] != 0x44464c54 && auStack_16c[0] != 0x6c61746e) {
            ppuStack_110 = &PTR_FUN_110b0b2c0;
          }
        }
LAB_10970e2c0:
        bVar35 = 0;
        if (*(int *)(ppuStack_110 + 0xb) != 0) {
          bVar35 = 2;
        }
        bStack_118 = bStack_118 & 0xf8 | bVar7 | bVar35 | *(char *)((long)ppuStack_110 + 0x5c) << 2;
        bVar35 = bVar7 ^ 1;
        if (ppuStack_110 == (undefined **)&UNK_10dfe0d50) {
          bVar35 = 1;
        }
        if (bVar35 == 0) {
          ppuStack_110 = (undefined **)&UNK_10dfe0db0;
        }
        puVar48 = ppuVar9[7];
        uVar15 = *(uint *)(ppuVar9 + 8);
        uVar45 = (ulong)uVar15;
        bStack_170 = 1;
        puVar10 = auStack_158 + 4;
        FUN_109703a44();
        *puVar10 = 0x7276726e;
        puVar10[1] = uStack_144;
        puVar10[2] = 1;
        puVar10[3] = 1;
        puVar10[4] = 1;
        puVar10[5] = auStack_158[2];
        puVar10[6] = auStack_158[3];
        puVar10 = &uStack_138;
        puVar11 = puVar10;
        FUN_109703e04();
        *puVar11 = auStack_158[2];
        puVar11[2] = 0;
        puVar11[3] = 0;
        auStack_158[2] = auStack_158[2] + 1;
        if ((uint)puStack_1b8 == 4) {
          uVar51 = 0x6c747261;
          uVar20 = 0x6c74726d;
          uVar57 = 1;
        }
        else {
          if ((uint)puStack_1b8 != 5) goto LAB_10970e3f8;
          uVar57 = 0;
          uVar20 = 0x72746c6d;
          uVar51 = 0x72746c61;
        }
        puVar11 = auStack_158 + 4;
        FUN_109703a44();
        *puVar11 = uVar51;
        puVar11[1] = uStack_144;
        puVar11[2] = 1;
        puVar11[3] = 1;
        puVar11[4] = 1;
        puVar11[5] = auStack_158[2];
        puVar11[6] = auStack_158[3];
        puVar11 = auStack_158 + 4;
        FUN_109703a44();
        *puVar11 = uVar20;
        puVar11[1] = uStack_144;
        puVar11[2] = 1;
        puVar11[3] = uVar57;
        puVar11[4] = uVar57;
        puVar11[5] = auStack_158[2];
        puVar11[6] = auStack_158[3];
LAB_10970e3f8:
        puVar11 = auStack_158 + 4;
        FUN_109703a44();
        *puVar11 = 0x66726163;
        puVar11[1] = uStack_144;
        puVar11[2] = 1;
        puVar11[3] = 0;
        puVar11[4] = 0;
        puVar11[5] = auStack_158[2];
        puVar11[6] = auStack_158[3];
        puVar11 = auStack_158 + 4;
        FUN_109703a44();
        *puVar11 = 0x6e756d72;
        puVar11[1] = uStack_144;
        puVar11[2] = 1;
        puVar11[3] = 0;
        puVar11[4] = 0;
        puVar11[5] = auStack_158[2];
        puVar11[6] = auStack_158[3];
        puVar11 = auStack_158 + 4;
        FUN_109703a44();
        *puVar11 = 0x646e6f6d;
        puVar11[1] = uStack_144;
        puVar11[2] = 1;
        puVar11[3] = 0;
        puVar11[4] = 0;
        puVar11[5] = auStack_158[2];
        puVar11[6] = auStack_158[3];
        puVar11 = auStack_158 + 4;
        FUN_109703a44();
        *puVar11 = 0x72616e64;
        puVar11[1] = uStack_144;
        puVar11[2] = 0xff;
        puVar11[3] = 0x21;
        puVar11[4] = 0xff;
        puVar11[5] = auStack_158[2];
        puVar11[6] = auStack_158[3];
        puVar11 = auStack_158 + 4;
        FUN_109703a44();
        *puVar11 = 0x7472616b;
        puVar11[1] = uStack_144;
        puVar11[2] = 1;
        puVar11[3] = 3;
        puVar11[4] = 1;
        puVar11[5] = auStack_158[2];
        puVar11[6] = auStack_158[3];
        puVar11 = auStack_158 + 4;
        FUN_109703a44();
        *puVar11 = 0x48617266;
        puVar11[1] = uStack_144;
        puVar11[2] = 1;
        puVar11[3] = 1;
        puVar11[4] = 1;
        puVar11[5] = auStack_158[2];
        puVar11[6] = auStack_158[3];
        puVar11 = auStack_158 + 4;
        FUN_109703a44();
        *puVar11 = 0x48415246;
        puVar11[1] = uStack_144;
        puVar11[2] = 1;
        puVar11[3] = 1;
        puVar11[4] = 1;
        puVar11[5] = auStack_158[2];
        puVar11[6] = auStack_158[3];
        if ((code *)*ppuStack_110 != (code *)0x0) {
          bStack_170 = 0;
          (*(code *)*ppuStack_110)(&ppuStack_1c0);
        }
        ppuVar55 = ppuVar9 + 0xc;
        puVar11 = auStack_158 + 4;
        FUN_109703a44();
        *puVar11 = 0x42757a7a;
        puVar11[1] = uStack_144;
        puVar11[2] = 1;
        puVar11[3] = 1;
        puVar11[4] = 1;
        puVar11[5] = auStack_158[2];
        puVar11[6] = auStack_158[3];
        puVar11 = auStack_158 + 4;
        FUN_109703a44();
        *puVar11 = 0x42555a5a;
        puVar11[1] = uStack_144;
        puVar11[2] = 1;
        puVar11[3] = 1;
        puVar11[4] = 1;
        puVar11[5] = auStack_158[2];
        puVar11[6] = auStack_158[3];
        puVar11 = (uint *)&UNK_10dfe6d4c;
        lVar49 = 7;
        do {
          ppuVar18 = (ushort **)(ulong)*puVar11;
          param_2 = (code *)0x1;
          FUN_1097039e0(apuStack_198,puVar11[-1],ppuVar18,1);
          puVar11 = puVar11 + 2;
          lVar49 = lVar49 + -1;
        } while (lVar49 != 0);
        if (((uint)puStack_1b8 & 0xfffffffe) == 4) {
          puVar11 = (uint *)&UNK_10dfe6d84;
          lVar49 = 7;
          do {
            ppuVar18 = (ushort **)(ulong)*puVar11;
            param_2 = (code *)0x1;
            FUN_1097039e0(apuStack_198,puVar11[-1],ppuVar18,1);
            puVar11 = puVar11 + 2;
            lVar49 = lVar49 + -1;
          } while (lVar49 != 0);
        }
        else {
          puVar11 = auStack_158 + 4;
          FUN_109703a44();
          *puVar11 = 0x76657274;
          puVar11[1] = uStack_144;
          puVar11[2] = 1;
          puVar11[3] = 0x11;
          puVar11[4] = 1;
          puVar11[5] = auStack_158[2];
          puVar11[6] = auStack_158[3];
        }
        if (uVar15 != 0) {
          bStack_170 = 0;
          puVar48 = puVar48 + 4;
          do {
            if (*(int *)puVar48 == 0) {
              ppuVar18 = (ushort **)(ulong)(*(int *)(puVar48 + 2) == -1);
            }
            else {
              ppuVar18 = (ushort **)0x0;
            }
            param_2 = (code *)(ulong)*(uint *)(puVar48 + -2);
            FUN_1097039e0(apuStack_198,*(int *)(puVar48 + -4),ppuVar18,param_2);
            puVar48 = puVar48 + 8;
            uVar45 = uVar45 - 1;
          } while (uVar45 != 0);
        }
        if ((code *)ppuStack_110[1] != (code *)0x0) {
          (*(code *)ppuStack_110[1])(&ppuStack_1c0);
        }
        lVar49 = 0;
        ppuVar9[0xd] = puStack_1b0;
        *ppuVar55 = puStack_1b8;
        ppuVar9[0xf] = puStack_1a0;
        ppuVar9[0xe] = puStack_1a8;
        ppuVar9[0x10] = (ushort *)ppuStack_110;
        puVar24 = &uStack_100;
        *(int *)((long)ppuVar9 + 0x94) = -0x80000000;
        uStack_90 = 0;
        puVar11 = auStack_88;
        bVar7 = true;
        do {
          bVar8 = bVar7;
          *(uint *)((long)ppuVar14 + lVar49 * 4) = auStack_16c[lVar49];
          *(undefined1 *)((long)ppuVar9 + lVar49 + 0x90) = auStack_164[lVar49];
          uVar15 = auStack_158[lVar49];
          puVar48 = apuStack_198[0];
          FUN_109700ce0(apuStack_198[0],*(undefined4 *)(&UNK_10dfe0d44 + lVar49 * 4));
          puVar30 = puVar48;
          func_0x000109700e58();
          if (uVar15 == 0xffff) {
            puVar23 = (undefined *)((long)puVar30 + 1);
            puVar28 = puVar30;
          }
          else {
            if (uVar15 < ((uint)(puVar30[1] >> 8) | (puVar30[1] & 0xff00ff) << 8)) {
              puVar22 = puVar30 + (ulong)uVar15 * 3 + 2;
            }
            else {
              puVar22 = (ushort *)&UNK_10dfe4888;
            }
            puVar28 = puVar22 + 2;
            puVar23 = (undefined *)((long)puVar22 + 5);
          }
          uVar15 = (uint)CONCAT11((char)*puVar28,*puVar23);
          puVar23 = &UNK_10dfe4b0a;
          if (uVar15 != 0) {
            puVar23 = (undefined *)((long)puVar30 + (ulong)uVar15);
          }
          *puVar24 = (uint)(*(ushort *)(puVar23 + 2) >> 8) |
                     (*(ushort *)(puVar23 + 2) & 0xff00ff) << 8;
          func_0x000109700de4();
          *puVar11 = (uint)puVar48;
          puVar24 = &uStack_104;
          lVar49 = 1;
          puVar11 = auStack_88 + 1;
          bVar7 = false;
        } while (bVar8);
        uVar45 = (ulong)uStack_144;
        if (uStack_144 != 0) {
          if ((bStack_170 & 1) == 0) {
            param_2 = FUN_109703ed4;
            ppuVar18 = (ushort **)0x1c;
            _qsort(piStack_140,uVar45,0x1c,FUN_109703ed4);
            uVar45 = (ulong)uStack_144;
          }
          uVar15 = (uint)uVar45;
          if (uVar15 < 2) {
            uVar20 = 1;
          }
          else {
            uVar21 = 0;
            lVar49 = uVar45 - 1;
            piVar34 = piStack_140;
            do {
              piVar37 = piVar34 + 7;
              piVar40 = piStack_140 + uVar21 * 7;
              if (*piVar37 == *piVar40) {
                uVar15 = piVar40[3];
                if ((*(byte *)(piVar34 + 10) & 1) == 0) {
                  if ((uVar15 & 1) != 0) {
                    uVar15 = uVar15 & 0xfffffffe;
                    piVar40[3] = uVar15;
                  }
                  uVar20 = piVar40[2];
                  if ((uint)piVar40[2] <= (uint)piVar34[9]) {
                    uVar20 = piVar34[9];
                  }
                  piVar40[2] = uVar20;
                }
                else {
                  uVar15 = uVar15 | 1;
                  piVar40[3] = uVar15;
                  piVar40[2] = piVar34[9];
                  piVar40[4] = piVar34[0xb];
                }
                piVar40[3] = piVar34[10] & 2U | uVar15;
                uVar58 = NEON_umin(*(undefined8 *)(piVar40 + 5),*(undefined8 *)(piVar34 + 0xc),4);
                *(undefined8 *)(piVar40 + 5) = uVar58;
              }
              else {
                uVar21 = (ulong)((int)uVar21 + 1);
                uVar60 = *(undefined8 *)(piVar34 + 9);
                uVar58 = *(undefined8 *)piVar37;
                uVar61 = *(undefined8 *)(piVar34 + 10);
                piVar40 = piStack_140 + uVar21 * 7;
                *(undefined8 *)(piVar40 + 5) = *(undefined8 *)(piVar34 + 0xc);
                *(undefined8 *)(piVar40 + 3) = uVar61;
                *(undefined8 *)(piVar40 + 2) = uVar60;
                *(undefined8 *)piVar40 = uVar58;
              }
              lVar49 = lVar49 + -1;
              piVar34 = piVar37;
            } while (lVar49 != 0);
            uVar20 = (int)uVar21 + 1;
            uVar15 = uStack_144;
          }
          uVar20 = uVar20 & ((int)uVar20 >> 0x1f ^ 0xffffffffU);
          if (uVar20 < uVar15) {
            ppuVar18 = (ushort **)0x1;
            uStack_144 = uVar20;
            FUN_10974dc90(auStack_158 + 4,uVar20,1);
          }
        }
        lVar49 = 0;
        do {
          *(undefined4 *)((long)&uStack_f0 + lVar49) = 1;
          *(undefined4 *)((long)&uStack_f0 + lVar49 + 4) = 1;
          *(undefined8 *)((long)&uStack_e8 + lVar49) = 0;
          auStack_e0[lVar49] = 1;
          *(undefined8 *)((long)alStack_c8 + lVar49) = 0;
          *(undefined8 *)((long)auStack_de + lVar49 + 8) = 0;
          *(undefined8 *)(auStack_e0 + lVar49 + 2) = 0;
          lVar1 = lVar49 + 0x30;
          *(undefined2 *)((long)auStack_ce + lVar49) = 0;
          lVar49 = lVar1;
        } while (lVar1 != 0x60);
        lVar49 = 0;
        plVar50 = &uStack_f0;
        bVar7 = true;
LAB_10970ea00:
        uVar15 = auStack_158[lVar49];
        puVar48 = apuStack_198[0];
        FUN_109700ce0(apuStack_198[0],*(undefined4 *)(&UNK_10dfe0d44 + lVar49 * 4));
        puVar30 = puVar48;
        func_0x000109700e58();
        if (uVar15 == 0xffff) {
          puVar23 = (undefined *)((long)puVar30 + 1);
          puVar28 = puVar30;
        }
        else {
          if (uVar15 < ((uint)(puVar30[1] >> 8) | (puVar30[1] & 0xff00ff) << 8)) {
            puVar22 = puVar30 + (ulong)uVar15 * 3 + 2;
          }
          else {
            puVar22 = (ushort *)&UNK_10dfe4888;
          }
          puVar28 = puVar22 + 2;
          puVar23 = (undefined *)((long)puVar22 + 5);
        }
        uVar15 = (uint)CONCAT11((char)*puVar28,*puVar23);
        puVar23 = &UNK_10dfe4b0a;
        if (uVar15 != 0) {
          puVar23 = (undefined *)((long)puVar30 + (ulong)uVar15);
        }
        uVar36 = *(ushort *)(puVar23 + 4);
        uVar15 = (uint)(uVar36 >> 8) | (uVar36 & 0xff00ff) << 8;
        ppuVar54 = (ushort **)(ulong)uVar15;
        ppuVar16 = ppuVar54;
        FUN_109700f08(plVar50);
joined_r0x00010970eab0:
        do {
          if (uVar15 == 0) goto LAB_10970ec08;
          iStack_fc = 1;
          uStack_f8._0_4_ = 0;
          uVar15 = (int)ppuVar54 - 1;
          ppuVar54 = (ushort **)(ulong)uVar15;
          ppuVar18 = (ushort **)&iStack_fc;
          param_2 = (code *)&uStack_f8;
          ppuVar16 = ppuVar54;
          func_0x00010972a1f8(puVar23 + 4,ppuVar54,ppuVar18,param_2);
          uVar20 = (uint)uStack_f8;
          if (iStack_fc == 0) goto LAB_10970ec08;
          ppuVar16 = (ushort **)(ulong)(uint)uStack_f8;
          puVar30 = puVar48;
          func_0x000109700de4();
          if ((char)plVar50[2] == '\x01') {
            if (*(uint *)((long)plVar50 + 0x1c) <=
                *(uint *)(plVar50 + 3) + (*(uint *)(plVar50 + 3) >> 1)) {
              ppuVar16 = (ushort **)0x0;
              plVar12 = plVar50;
              FUN_109700f08();
              if ((int)plVar12 == 0) goto joined_r0x00010970eab0;
            }
            iVar59 = (int)puVar30;
            uVar51 = iVar59 * 0x1e3779b1 & 0x3fffffff;
            uVar57 = *(uint *)(plVar50 + 4);
            uVar52 = 0;
            if (uVar57 != 0) {
              uVar52 = uVar51 / uVar57;
            }
            uVar51 = uVar51 - uVar52 * uVar57;
            lVar49 = plVar50[5];
            piVar34 = (int *)(lVar49 + (ulong)uVar51 * 0xc);
            uVar57 = piVar34[1];
            if ((uVar57 >> 1 & 1) == 0) {
              uVar52 = 0;
            }
            else {
              uVar52 = 0;
              uVar39 = 0xffffffff;
              do {
                if (*piVar34 == iVar59) break;
                if ((uVar57 & 1) == 0 && uVar39 == 0xffffffff) {
                  uVar39 = uVar51;
                }
                uVar52 = uVar52 + 1;
                uVar51 = *(uint *)((long)plVar50 + 0x1c) & uVar52 + uVar51;
                piVar34 = (int *)(lVar49 + (ulong)uVar51 * 0xc);
                uVar57 = piVar34[1];
              } while ((uVar57 >> 1 & 1) != 0);
              if (uVar39 != 0xffffffff) {
                uVar51 = uVar39;
              }
              piVar34 = (int *)(lVar49 + (ulong)uVar51 * 0xc);
              if ((*(byte *)(piVar34 + 1) >> 1 & 1) != 0) {
                *(int *)(plVar50 + 3) = (int)plVar50[3] + -1;
                *(uint *)((long)plVar50 + 0x14) = *(int *)((long)plVar50 + 0x14) - (piVar34[1] & 1U)
                ;
              }
            }
            *piVar34 = iVar59;
            piVar34[1] = iVar59 * 0x78dde6c4 | 3;
            piVar34[2] = uVar20;
            iVar59 = (int)((ulong)*(undefined8 *)((long)plVar50 + 0x14) >> 0x20) + 1;
            *(ulong *)((long)plVar50 + 0x14) =
                 CONCAT44(iVar59,(int)*(undefined8 *)((long)plVar50 + 0x14) + 1);
            if ((*(ushort *)((long)plVar50 + 0x12) < uVar52) &&
               (*(uint *)((long)plVar50 + 0x1c) < (uint)(iVar59 * 8))) {
              ppuVar16 = (ushort **)(ulong)(*(uint *)((long)plVar50 + 0x1c) - 8);
              FUN_109700f08(plVar50);
            }
          }
        } while( true );
      }
      goto LAB_10970fbc4;
    }
  }
  goto LAB_10970faa0;
LAB_10970ec08:
  lVar49 = 1;
  uVar6 = !bVar7;
  plVar50 = alStack_c8 + 1;
  bVar7 = false;
  if ((bool)uVar6) goto LAB_10970ec28;
  goto LAB_10970ea00;
LAB_10970ed14:
  *(undefined4 *)((long)&uStack_f8 + lVar49 * 4) = *(undefined4 *)(puVar13 + 1);
  bVar7 = true;
  bVar8 = lVar49 != 0;
  lVar49 = 1;
  if (bVar8) goto LAB_10970ee38;
  goto LAB_10970ecb8;
LAB_10970ec28:
  uVar45 = (ulong)uStack_144;
  if (uStack_144 != 0) {
    uVar21 = 0;
    uVar15 = 4;
    do {
      if (uVar21 < uStack_144) {
        puVar11 = (uint *)(piStack_140 + uVar21 * 7);
        uVar20 = puVar11[2];
        uVar51 = puVar11[3];
        if (((uVar51 & 1) == 0) || (uVar20 != 1)) {
          uVar57 = 0x20 - (int)LZCOUNT(uVar20);
          if (7 < uVar57) {
            uVar57 = 8;
          }
          if (uVar20 == 0) goto LAB_10970efb4;
        }
        else {
          uVar57 = 0;
        }
        uVar57 = uVar57 + uVar15;
        if (uVar57 < 0x1f) {
          bVar7 = false;
          uVar20 = *puVar11;
          lVar49 = 0;
LAB_10970ecb8:
          do {
            if (auStack_88[lVar49] == uVar20) {
              auStack_88[lVar49 + -2] = puVar11[lVar49 + 5];
            }
            puVar13 = &uStack_f0 + lVar49 * 6;
            if ((alStack_c8[lVar49 * 6] != 0) &&
               (ppuVar16 = (ushort **)(ulong)uVar20,
               ppuVar18 = (ushort **)(ulong)(uVar20 * -0x61c8864f),
               FUN_109739e3c(puVar13,(ushort **)(ulong)uVar20,
                             (ushort **)(ulong)(uVar20 * -0x61c8864f)), puVar13 != (undefined8 *)0x0
               )) goto LAB_10970ed14;
            *(undefined4 *)((long)&uStack_f8 + lVar49 * 4) = 0xffff;
            bVar8 = lVar49 == 0;
            lVar49 = 1;
          } while (bVar8);
          if (bVar7) {
            bVar35 = 0;
            goto LAB_10970ee6c;
          }
          if ((uVar51 >> 4 & 1) == 0) goto LAB_10970ee58;
          lVar49 = 0;
          bVar7 = false;
          puVar24 = (uint *)&uStack_f8;
          bVar8 = true;
          do {
            bVar31 = bVar8;
            ppuVar54 = (ushort **)(ulong)*(uint *)(&UNK_10dfe0d44 + lVar49 * 4);
            uVar20 = *puVar11;
            puVar48 = apuStack_198[0];
            FUN_109700ce0();
            puVar30 = (ushort *)&UNK_10dfe4888;
            if ((ushort)(*puVar48 >> 8 | *puVar48 << 8) == 1) {
              uVar51 = (uint)(puVar48[3] >> 8) | (puVar48[3] & 0xff00ff) << 8;
              puVar30 = (ushort *)&UNK_10dfe4888;
              if (uVar51 != 0) {
                puVar30 = (ushort *)((long)puVar48 + (ulong)uVar51);
              }
            }
            uVar51 = (uint)(*puVar30 >> 8) | (*puVar30 & 0xff00ff) << 8;
            if (uVar51 == 0) {
LAB_10970ee14:
              ppuVar16 = ppuVar54;
              bVar8 = false;
              uVar52 = 0xffff;
            }
            else {
              ppuVar16 = (ushort **)0x0;
              puVar30 = puVar48;
              func_0x000109700de4();
              if ((uint)puVar30 == uVar20) {
                uVar52 = 0;
                bVar8 = true;
              }
              else {
                ppuVar54 = ppuVar16;
                ppuVar17 = (ushort **)0x1;
                do {
                  ppuVar16 = ppuVar17;
                  uVar52 = (uint)ppuVar16;
                  if (uVar51 == uVar52) goto LAB_10970ee14;
                  puVar30 = puVar48;
                  func_0x000109700de4();
                  ppuVar54 = ppuVar16;
                  ppuVar17 = (ushort **)(ulong)(uVar52 + 1);
                } while ((uint)puVar30 != uVar20);
                bVar8 = uVar52 < uVar51;
              }
            }
            *puVar24 = uVar52;
            bVar7 = (bool)(bVar7 | bVar8);
            lVar49 = 1;
            puVar24 = (uint *)((ulong)&uStack_f8 | 4);
            bVar8 = false;
          } while (bVar31);
          if (!bVar7) {
            uVar51 = puVar11[3];
LAB_10970ee58:
            if ((uVar51 >> 1 & 1) != 0) {
              bVar35 = 1;
              goto LAB_10970ee6c;
            }
            goto LAB_10970efb4;
          }
LAB_10970ee38:
          bVar35 = 0;
LAB_10970ee6c:
          uVar20 = *(uint *)(ppuVar9 + 0x13);
          ppuVar54 = (ushort **)(ulong)uVar20;
          if ((int)uVar20 < 0) {
LAB_10970f030:
            bVar26 = 0;
            puVar24 = (uint *)0x11382ab30;
            uRam000000011382ab50 = 0;
            uRam000000011382ab38 = 0;
            uRam000000011382ab30 = 0;
            uRam000000011382ab48 = 0;
            uRam000000011382ab40 = 0;
          }
          else {
            uVar51 = *(int *)((long)ppuVar9 + 0x9c) + 1;
            uVar52 = uVar51 & ((int)uVar51 >> 0x1f ^ 0xffffffffU);
            ppuVar17 = ppuVar16;
            if ((int)uVar20 < (int)uVar51) {
              do {
                uVar51 = (uint)ppuVar54 + ((uint)ppuVar54 >> 1) + 8;
                ppuVar17 = (ushort **)(ulong)uVar51;
                ppuVar54 = ppuVar17;
              } while (uVar51 < uVar52);
              if (0x71c71c7 < uVar51) {
LAB_10970f028:
                *(uint *)(ppuVar9 + 0x13) = ~uVar20;
                goto LAB_10970f030;
              }
              puVar48 = ppuVar9[0x14];
              func_0x00010974de44();
              if (puVar48 == (ushort *)0x0) {
                uVar20 = *(uint *)(ppuVar9 + 0x13);
                ppuVar16 = ppuVar17;
                if (uVar20 < uVar51) goto LAB_10970f028;
              }
              else {
                ppuVar9[0x14] = puVar48;
                *(uint *)(ppuVar9 + 0x13) = uVar51;
              }
            }
            uVar20 = *(uint *)((long)ppuVar9 + 0x9c);
            if ((uVar20 < uVar52) &&
               (uVar51 = (uVar52 - uVar20) * 0x24, ppuVar17 = (ushort **)(ulong)uVar51, uVar51 != 0)
               ) {
              _bzero(ppuVar9[0x14] + (ulong)uVar20 * 0x12);
            }
            *(uint *)((long)ppuVar9 + 0x9c) = uVar52;
            puVar24 = (uint *)(ppuVar9[0x14] + (ulong)(uVar52 - 1) * 0x12);
            bVar26 = (byte)puVar24[8] & 0xfd;
            ppuVar16 = ppuVar17;
          }
          *puVar24 = *puVar11;
          *(ulong *)(puVar24 + 1) = CONCAT44(uStack_f8._4_4_,(uint)uStack_f8);
          puVar24[3] = puVar11[5];
          puVar24[4] = puVar11[6];
          bVar26 = ((byte)puVar11[3] >> 1 & 2 | bVar26) ^ 2;
          *(byte *)(puVar24 + 8) = bVar26;
          bVar4 = (bVar26 & 0xf8 | bVar26 & 3 | ((byte)puVar11[3] >> 3 & 1) << 2) ^ 4;
          *(byte *)(puVar24 + 8) = bVar4;
          bVar26 = bVar4 & 7 | ((byte)puVar11[3] >> 5 & 1) << 3;
          *(byte *)(puVar24 + 8) = bVar4 & 0xf0 | bVar26;
          bVar26 = bVar4 & 0xe0 | bVar26 | ((byte)puVar11[3] >> 6 & 1) << 4;
          *(byte *)(puVar24 + 8) = bVar26;
          if (((puVar11[3] & 1) == 0) || (puVar11[2] != 1)) {
            uVar20 = (1 << (ulong)(uVar57 & 0x1f)) + (-1 << (ulong)(uVar15 & 0x1f));
            *(uint *)((long)ppuVar9 + 0x94) =
                 puVar11[4] << (ulong)(uVar15 & 0x1f) & uVar20 | *(uint *)((long)ppuVar9 + 0x94);
            bVar26 = (byte)puVar24[8];
          }
          else {
            uVar20 = 0x80000000;
            uVar57 = uVar15;
            uVar15 = 0x1f;
          }
          puVar24[5] = uVar15;
          puVar24[6] = uVar20;
          puVar24[7] = 1 << (ulong)(uVar15 & 0x1f) & uVar20;
          *(byte *)(puVar24 + 8) = bVar26 & 0xfe | bVar35;
          uVar15 = uVar57;
        }
      }
      else {
        uRam000000011382ab30 = 0;
        uRam000000011382ab38 = 0;
        uRam000000011382ab48 = uRam000000011382ab48 & 0xffffffff00000000;
        uRam000000011382ab40 = 0;
      }
LAB_10970efb4:
      uVar21 = uVar21 + 1;
    } while (uVar21 != uVar45);
  }
  if (((bStack_170 & 1) != 0) &&
     (ppuVar16 = (ushort **)(ulong)*(uint *)((long)ppuVar9 + 0x9c),
     *(uint *)((long)ppuVar9 + 0x9c) != 0)) {
    param_2 = (code *)0x109703f0c;
    ppuVar18 = (ushort **)0x24;
    _qsort(ppuVar9[0x14],ppuVar16,0x24,0x109703f0c);
  }
  FUN_109703e04();
  *puVar10 = auStack_158[2];
  puVar10[2] = 0;
  puVar10[3] = 0;
  auStack_158[2] = auStack_158[2] + 1;
  puVar10 = auStack_128;
  FUN_109703e04();
  ppuVar54 = (ushort **)0x0;
  *puVar10 = auStack_158[3];
  puVar10[2] = 0;
  puVar10[3] = 0;
  puStack_1e8 = &uStack_100;
  puStack_1f8 = (uint *)&uStack_90;
  auStack_158[3] = auStack_158[3] + 1;
  bVar7 = true;
  do {
    bVar8 = bVar7;
    if (auStack_158[(long)((long)ppuVar54 + 2)] != 0) {
      uVar15 = 0;
      uVar45 = 0;
      ppuVar17 = ppuVar9 + (long)ppuVar54 * 2 + 0x15;
      ppuVar53 = ppuVar9 + (long)ppuVar54 * 2 + 0x19;
      uVar21 = 0;
      do {
        param_2 = (code *)(ulong)*puStack_1e8;
        if ((*puStack_1e8 != 0xffff) && (*puStack_1f8 == uVar15)) {
          param_3 = (ushort **)(ulong)*(uint *)((long)ppuVar9 + (long)((long)ppuVar54 + 0x11) * 4);
          ppuVar16 = ppuVar14;
          ppuVar18 = ppuVar54;
          FUN_109703ad4(apuStack_198,ppuVar14,ppuVar54,param_2,param_3,0x80000000,1,1);
        }
        if (*(uint *)((long)ppuVar9 + 0x9c) != 0) {
          puVar48 = ppuVar9[0x14] + 0x10;
          lVar49 = (ulong)*(uint *)((long)ppuVar9 + 0x9c) * 0x24;
          puVar10 = (uint *)(ppuVar9[0x14] + (long)ppuVar54 * 2 + 6);
          do {
            if (*puVar10 == uVar15) {
              param_2 = (code *)(ulong)puVar10[-2];
              param_3 = (ushort **)
                        (ulong)*(uint *)((long)ppuVar9 + (long)((long)ppuVar54 + 0x11) * 4);
              ppuVar16 = ppuVar14;
              ppuVar18 = ppuVar54;
              FUN_109703ad4(apuStack_198,ppuVar14,ppuVar54,param_2,param_3,
                            *(undefined4 *)(puVar48 + -4),(byte)*puVar48 >> 1 & 1,
                            (byte)*puVar48 >> 2 & 1);
            }
            puVar48 = puVar48 + 0x12;
            lVar49 = lVar49 + -0x24;
            puVar10 = puVar10 + 9;
          } while (lVar49 != 0);
        }
        uVar57 = (uint)uVar21;
        uVar20 = uVar57 + 1;
        uVar47 = (ulong)uVar20;
        uVar51 = *(uint *)((long)ppuVar17 + 4);
        uVar29 = (ulong)uVar51;
        if (uVar20 < uVar51) {
          if (uVar57 <= uVar51 && uVar51 - uVar57 != 0) {
            ppuVar18 = (ushort **)0xc;
            param_2 = FUN_10974de6c;
            _qsort(ppuVar17[1] + uVar21 * 6,uVar51 - uVar57,0xc,FUN_10974de6c);
            uVar29 = (ulong)*(uint *)((long)ppuVar17 + 4);
          }
          if (uVar20 < (uint)uVar29) {
            lVar49 = uVar47 * 0xc;
            do {
              puVar30 = ppuVar17[1];
              puVar48 = (ushort *)((long)puVar30 + lVar49);
              puVar22 = puVar30 + uVar21 * 6;
              if (*puVar48 == *puVar22) {
                *(uint *)(puVar22 + 2) = *(uint *)(puVar22 + 2) | *(uint *)(puVar48 + 2);
                *(byte *)(puVar30 + uVar21 * 6 + 1) =
                     (byte)puVar30[uVar21 * 6 + 1] & ((byte)puVar48[1] | 0xfe);
                puVar48 = ppuVar17[1];
                *(byte *)(puVar48 + uVar21 * 6 + 1) =
                     (byte)puVar48[uVar21 * 6 + 1] & (*(byte *)((long)puVar48 + lVar49 + 2) | 0xfd);
              }
              else {
                uVar21 = (ulong)((int)uVar21 + 1);
                uVar58 = *(undefined8 *)puVar48;
                *(undefined4 *)(puVar30 + uVar21 * 6 + 4) = *(undefined4 *)(puVar48 + 4);
                *(undefined8 *)(puVar30 + uVar21 * 6) = uVar58;
              }
              uVar47 = uVar47 + 1;
              uVar29 = (ulong)*(uint *)((long)ppuVar17 + 4);
              lVar49 = lVar49 + 0xc;
            } while (uVar47 < uVar29);
            uVar20 = (int)uVar21 + 1;
          }
          uVar20 = uVar20 & ((int)uVar20 >> 0x1f ^ 0xffffffffU);
          ppuVar16 = (ushort **)(ulong)uVar20;
          if (uVar20 < (uint)uVar29) {
            *(uint *)((long)ppuVar17 + 4) = uVar20;
            ppuVar18 = (ushort **)0x1;
            func_0x00010974dd58(ppuVar17,ppuVar16,1);
            uVar29 = (ulong)*(uint *)((long)ppuVar17 + 4);
          }
        }
        if ((uVar45 < (&uStack_134)[(long)ppuVar54 * 4]) &&
           (*(uint *)((&lStack_130)[(long)ppuVar54 * 2] + uVar45 * 0x10) == uVar15)) {
          uVar20 = *(uint *)ppuVar53;
          if ((int)uVar20 < 0) {
LAB_10970f42c:
            puVar48 = (ushort *)0x11382ab30;
            uRam000000011382ab30 = 0;
            uRam000000011382ab38 = 0;
          }
          else {
            uVar51 = *(uint *)((long)ppuVar53 + 4) + 1;
            uVar52 = uVar51 & ((int)uVar51 >> 0x1f ^ 0xffffffffU);
            uVar57 = uVar20;
            if ((int)uVar20 < (int)uVar51) {
              do {
                uVar57 = uVar57 + (uVar57 >> 1) + 8;
              } while (uVar57 < uVar52);
              if (uVar57 >> 0x1c != 0) {
LAB_10970f424:
                *(uint *)ppuVar53 = ~uVar20;
                goto LAB_10970f42c;
              }
              puVar48 = ppuVar53[1];
              ppuVar16 = (ushort **)(ulong)(uVar57 * 0x10);
              _realloc();
              if (puVar48 == (ushort *)0x0) {
                uVar20 = *(uint *)ppuVar53;
                if (uVar20 < uVar57) goto LAB_10970f424;
              }
              else {
                ppuVar53[1] = puVar48;
                *(uint *)ppuVar53 = uVar57;
              }
            }
            uVar20 = *(uint *)((long)ppuVar53 + 4);
            if ((uVar20 < uVar52) &&
               (uVar51 = (uVar52 - uVar20) * 0x10, ppuVar16 = (ushort **)(ulong)uVar51, uVar51 != 0)
               ) {
              _bzero(ppuVar53[1] + (ulong)uVar20 * 8);
            }
            *(uint *)((long)ppuVar53 + 4) = uVar52;
            puVar48 = ppuVar53[1] + (ulong)(uVar52 - 1) * 8;
          }
          *(int *)puVar48 = (int)uVar29;
          if (uVar45 < (&uStack_134)[(long)ppuVar54 * 4]) {
            uVar58 = *(undefined8 *)((&lStack_130)[(long)ppuVar54 * 2] + uVar45 * 0x10 + 8);
          }
          else {
            uVar58 = 0;
            uRam000000011382ab30 = 0;
            uRam000000011382ab38 = 0;
          }
          *(undefined8 *)(puVar48 + 4) = uVar58;
          uVar45 = uVar45 + 1;
        }
        uVar15 = uVar15 + 1;
        uVar21 = uVar29;
      } while (uVar15 < auStack_158[(long)((long)ppuVar54 + 2)]);
    }
    puStack_1e8 = &uStack_104;
    ppuVar54 = (ushort **)0x1;
    puStack_1f8 = (uint *)((ulong)&uStack_90 | 4);
    bVar7 = false;
  } while (bVar8);
  lVar49 = 0x30;
  do {
    FUN_10972c54c((long)&uStack_f0 + lVar49);
    lVar49 = lVar49 + -0x30;
  } while (lVar49 != -0x30);
  iVar59 = *(int *)((long)ppuVar9 + 0x9c);
  puVar48 = ppuVar9[0x14];
  if (iVar59 < 1) {
    uVar36 = *(ushort *)((long)ppuVar9 + 0x104) & 0xfffd;
    *(ushort *)((long)ppuVar9 + 0x104) = uVar36;
    ppuVar9[0x1e] = (ushort *)0x0;
    ppuVar9[0x1f] = (ushort *)0x0;
    uVar32 = 0;
  }
  else {
    iVar38 = 0;
    iVar33 = iVar59 + -1;
    iVar43 = iVar33;
    do {
      uVar15 = (uint)(iVar43 + iVar38) >> 1;
      if (*(uint *)(puVar48 + (ulong)uVar15 * 0x12) < 0x66726164) {
        if (*(uint *)(puVar48 + (ulong)uVar15 * 0x12) == 0x66726163) {
          iVar38 = *(int *)(puVar48 + (ulong)uVar15 * 0x12 + 0xe);
          goto LAB_10970f51c;
        }
        iVar38 = uVar15 + 1;
      }
      else {
        iVar43 = uVar15 - 1;
      }
    } while (iVar38 <= iVar43);
    iVar38 = 0;
LAB_10970f51c:
    iVar43 = 0;
    *(int *)(ppuVar9 + 0x1e) = iVar38;
    iVar41 = iVar33;
    do {
      uVar15 = (uint)(iVar41 + iVar43) >> 1;
      if (*(uint *)(puVar48 + (ulong)uVar15 * 0x12) < 0x6e756d73) {
        if (*(uint *)(puVar48 + (ulong)uVar15 * 0x12) == 0x6e756d72) {
          iVar43 = *(int *)(puVar48 + (ulong)uVar15 * 0x12 + 0xe);
          goto LAB_10970f570;
        }
        iVar43 = uVar15 + 1;
      }
      else {
        iVar41 = uVar15 - 1;
      }
    } while (iVar43 <= iVar41);
    iVar43 = 0;
LAB_10970f570:
    iVar41 = 0;
    *(int *)((long)ppuVar9 + 0xf4) = iVar43;
    iVar42 = iVar33;
    do {
      uVar15 = (uint)(iVar42 + iVar41) >> 1;
      if (*(uint *)(puVar48 + (ulong)uVar15 * 0x12) < 0x646e6f6e) {
        if (*(uint *)(puVar48 + (ulong)uVar15 * 0x12) == 0x646e6f6d) {
          iVar41 = *(int *)(puVar48 + (ulong)uVar15 * 0x12 + 0xe);
          goto LAB_10970f5c4;
        }
        iVar41 = uVar15 + 1;
      }
      else {
        iVar42 = uVar15 - 1;
      }
    } while (iVar41 <= iVar42);
    iVar41 = 0;
LAB_10970f5c4:
    *(int *)(ppuVar9 + 0x1f) = iVar41;
    if (iVar38 == 0) {
      if (iVar43 == 0) {
        uVar36 = 0;
      }
      else {
        uVar36 = 0;
        if (iVar41 != 0) {
          uVar36 = 2;
        }
      }
    }
    else {
      uVar36 = 2;
    }
    iVar38 = 0;
    uVar36 = *(ushort *)((long)ppuVar9 + 0x104) & 0xfffd | uVar36;
    *(ushort *)((long)ppuVar9 + 0x104) = uVar36;
    iVar43 = iVar33;
    do {
      uVar15 = (uint)(iVar43 + iVar38) >> 1;
      if (*(uint *)(puVar48 + (ulong)uVar15 * 0x12) < 0x72746c6e) {
        if (*(uint *)(puVar48 + (ulong)uVar15 * 0x12) == 0x72746c6d) {
          iVar38 = *(int *)(puVar48 + (ulong)uVar15 * 0x12 + 0xe);
          goto LAB_10970f660;
        }
        iVar38 = uVar15 + 1;
      }
      else {
        iVar43 = uVar15 - 1;
      }
    } while (iVar38 <= iVar43);
    iVar38 = 0;
LAB_10970f660:
    iVar43 = 0;
    *(int *)((long)ppuVar9 + 0xfc) = iVar38;
    do {
      uVar15 = (uint)(iVar33 + iVar43) >> 1;
      if (*(uint *)(puVar48 + (ulong)uVar15 * 0x12) < 0x76657275) {
        if (*(uint *)(puVar48 + (ulong)uVar15 * 0x12) == 0x76657274) {
          uVar32 = 0;
          if (*(int *)(puVar48 + (ulong)uVar15 * 0x12 + 0xe) != 0) {
            uVar32 = 4;
          }
          goto LAB_10970f6bc;
        }
        iVar43 = uVar15 + 1;
      }
      else {
        iVar33 = uVar15 - 1;
      }
    } while (iVar43 <= iVar33);
    uVar32 = 0;
  }
LAB_10970f6bc:
  pcVar46 = (code *)((long)ppuVar9 + 0x104);
  *(ushort *)pcVar46 = uVar32 | uVar36 & 0xfffb;
  uVar15 = 0x6b65726e;
  if (((uint)puStack_1b8 & 0xfffffffe) != 4) {
    uVar15 = 0x766b726e;
  }
  if (iVar59 < 1) {
    uVar15 = 0;
    *(int *)(ppuVar9 + 0x20) = 0;
    *(ushort *)((long)ppuVar9 + 0x104) = uVar32 | uVar36 & 0xfffa;
  }
  else {
    iVar38 = 0;
    iVar59 = iVar59 + -1;
    iVar33 = iVar59;
    do {
      uVar20 = (uint)(iVar33 + iVar38) >> 1;
      if (*(uint *)(puVar48 + (ulong)uVar20 * 0x12) < 0x7472616c) {
        if (*(uint *)(puVar48 + (ulong)uVar20 * 0x12) == 0x7472616b) {
          iVar38 = *(int *)(puVar48 + (ulong)uVar20 * 0x12 + 0xc);
          goto LAB_10970f758;
        }
        iVar38 = uVar20 + 1;
      }
      else {
        iVar33 = uVar20 - 1;
      }
    } while (iVar38 <= iVar33);
    iVar38 = 0;
LAB_10970f758:
    iVar33 = 0;
    *(int *)(ppuVar9 + 0x20) = iVar38;
    uVar32 = uVar32 | uVar36 & 0xfffa;
    if (iVar38 != 0) {
      uVar32 = uVar32 + 1;
    }
    *(ushort *)((long)ppuVar9 + 0x104) = uVar32;
    do {
      uVar51 = (uint)(iVar59 + iVar33) >> 1;
      uVar20 = *(uint *)(puVar48 + (ulong)uVar51 * 0x12);
      if (uVar15 <= uVar20 && uVar20 != uVar15) {
        iVar59 = uVar51 - 1;
      }
      else {
        if (uVar15 <= uVar20) {
          uVar15 = (uint)(*(int *)(puVar48 + (ulong)uVar51 * 0x12 + 4) != 0xffff);
          goto LAB_10970f7c4;
        }
        iVar33 = uVar51 + 1;
      }
    } while (iVar33 <= iVar59);
    uVar15 = 0;
  }
LAB_10970f7c4:
  iVar59 = *(int *)(ppuVar9[0x10] + 0x28);
  iVar38 = *(int *)((long)ppuVar9 + 0x8c);
  ppuVar54 = ppuStack_1c0 + 0x23;
  FUN_10972ad34();
  puVar48 = (ushort *)&UNK_10dfe4888;
  if (*ppuVar54 != (ushort *)0x0) {
    puVar48 = *ppuVar54;
  }
  puVar30 = (ushort *)&UNK_10dfe4888;
  if (3 < *(uint *)(puVar48 + 0xc)) {
    puVar30 = *(ushort **)(puVar48 + 8);
  }
  if ((ushort)(*puVar30 >> 8 | *puVar30 << 8) == 1) {
    uVar36 = *(ushort *)pcVar46;
    if (*(char *)((long)puVar30 + 5) == '\0' && (char)puVar30[2] == '\0') goto LAB_10970f838;
  }
  else {
    uVar36 = *(ushort *)pcVar46;
LAB_10970f838:
    uVar36 = uVar36 | 0x20;
    *(ushort *)pcVar46 = uVar36;
  }
  *(ushort *)pcVar46 = (bStack_118 & 1) << 0xb | uVar36 & 0xf7ff;
  ppuVar54 = ppuStack_1c0 + 0x29;
  func_0x000109741a18();
  puVar48 = (ushort *)&UNK_10dfe4888;
  if (*ppuVar54 != (ushort *)0x0) {
    puVar48 = *ppuVar54;
  }
  puVar30 = (ushort *)&UNK_10dfe4888;
  if (7 < *(uint *)(puVar48 + 0xc)) {
    puVar30 = *(ushort **)(puVar48 + 8);
  }
  uVar36 = *puVar30;
  bVar35 = *(byte *)((long)puVar30 + 1);
  if ((bStack_118 & 1) == 0) {
    ppuVar54 = ppuStack_1c0;
    FUN_109701338();
    bVar7 = (int)ppuVar54 == 0;
  }
  else {
    bVar7 = true;
  }
  bVar35 = bVar35 | (byte)uVar36;
  param_5 = (ushort **)(ulong)bVar35;
  if (iVar59 == 0 || iVar59 == iVar38) {
    ppuVar54 = ppuStack_1c0 + 0x25;
    func_0x00010972ef1c();
    puVar48 = (ushort *)&UNK_10dfe4888;
    if (*ppuVar54 != (ushort *)0x0) {
      puVar48 = *ppuVar54;
    }
    puVar30 = (ushort *)&UNK_10dfe4888;
    if (3 < *(uint *)(puVar48 + 0xc)) {
      puVar30 = *(ushort **)(puVar48 + 8);
    }
    if ((*(char *)((long)puVar30 + 1) == '\0' && (char)*puVar30 == '\0') &&
        ((char)puVar30[1] == '\0' && *(char *)((long)puVar30 + 3) == '\0')) {
      bVar7 = true;
    }
    if ((bVar35 != 0) && (bVar7)) goto LAB_10970f920;
    uVar20 = (uint)*(ushort *)pcVar46;
    if ((*(char *)((long)puVar30 + 1) != '\0' || (char)*puVar30 != '\0') ||
        ((char)puVar30[1] != '\0' || *(char *)((long)puVar30 + 3) != '\0')) {
      uVar20 = *(ushort *)pcVar46 | 0x100;
    }
    if ((uVar20 >> 10 & 1) == 0) goto LAB_10970f92c;
  }
  else if (bVar35 == 0) {
    uVar20 = (uint)*(ushort *)pcVar46;
    if ((*(ushort *)pcVar46 >> 10 & 1) == 0) {
LAB_10970f92c:
      uVar15 = uVar15 & (uVar20 & 0x100) >> 8;
      if (bVar35 == 0) {
        uVar15 = 1;
      }
      if (uVar15 == 0) {
        uVar20 = uVar20 | 0x400;
      }
    }
  }
  else {
LAB_10970f920:
    uVar20 = *(ushort *)pcVar46 | 0x400;
  }
  uVar36 = ((ushort)(uVar20 >> 1) ^ 0xffff) & 0x200;
  if ((uVar20 & 0x100) != 0) {
    uVar36 = 0;
  }
  uVar32 = (ushort)bStack_118 << 3 & ((ushort)(uVar20 >> 6) ^ 0xffff) & 0x10;
  *(ushort *)((long)ppuVar9 + 0x104) = uVar32 | (ushort)uVar20 & 0xfdef | uVar36;
  iVar59 = *(int *)((long)ppuVar9 + 0x9c) + -1;
  if (0 < *(int *)((long)ppuVar9 + 0x9c)) {
    iVar38 = 0;
    do {
      uVar51 = (uint)(iVar59 + iVar38) >> 1;
      uVar15 = *(uint *)(ppuVar9[0x14] + (ulong)uVar51 * 0x12);
      if (uVar15 < 0x6d61726c) {
        if (uVar15 == 0x6d61726b) {
          if (*(int *)(ppuVar9[0x14] + (ulong)uVar51 * 0x12 + 0xe) != 0) {
            uVar27 = 8;
            goto LAB_10970f9d0;
          }
          break;
        }
        iVar38 = uVar51 + 1;
      }
      else {
        iVar59 = uVar51 - 1;
      }
    } while (iVar38 <= iVar59);
  }
  uVar27 = 0;
LAB_10970f9d0:
  uVar15 = (uVar20 >> 3 ^ 0xffffffff) & 0x80;
  if ((uVar20 & 0x100) != 0) {
    uVar15 = 0;
  }
  uVar2 = (ushort)uVar15;
  uVar3 = 0;
  if (uVar15 != 0) {
    uVar3 = (bStack_118 & 4) << 4;
  }
  if ((uVar20 & 0x800) != 0) {
    uVar2 = 0;
  }
  uVar27 = uVar3 | uVar2 | uVar32 | (ushort)uVar20 & 0xfd27 | uVar36 | uVar27;
  *(ushort *)pcVar46 = uVar27;
  if ((uVar20 & 1) == 0) {
    uVar36 = 0;
  }
  else {
    ppuVar54 = ppuStack_1c0 + 0x2b;
    FUN_109743fc4();
    puVar48 = (ushort *)&UNK_10dfe4888;
    if (0xb < *(uint *)(ppuVar54 + 3)) {
      puVar48 = ppuVar54[2];
    }
    uVar36 = 0;
    if ((*(char *)((long)puVar48 + 1) != '\0' || (char)*puVar48 != '\0') ||
        ((char)puVar48[1] != '\0' || *(char *)((long)puVar48 + 3) != '\0')) {
      uVar36 = 0x1000;
    }
    uVar27 = *(ushort *)pcVar46;
  }
  *(ushort *)((long)ppuVar9 + 0x104) = uVar27 & 0xefff | uVar36;
  ppuVar54 = (ushort **)param_2;
  ppuVar17 = param_3;
  if (*(code **)(ppuVar9[0x10] + 8) != (code *)0x0) {
    (**(code **)(ppuVar9[0x10] + 8))();
    ppuVar9[0x1d] = (ushort *)ppuVar55;
    ppuVar54 = (ushort **)param_2;
    ppuVar17 = param_3;
    if (ppuVar55 == (ushort **)0x0) {
      FUN_109704cc8(ppuVar14);
      FUN_109703914(apuStack_198);
      _free(ppuVar9[7]);
LAB_10970fbc4:
      _free();
      ppuVar54 = (ushort **)param_2;
      ppuVar17 = param_3;
      unaff_x22 = param_5;
      goto LAB_10970fbcc;
    }
  }
  ppuVar14 = apuStack_198;
  FUN_109703914();
  ppuVar55 = ppuVar9;
LAB_10970faa0:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return ppuVar55;
  }
  ___stack_chk_fail();
  lVar49 = 0x30;
  do {
    FUN_10972c54c((long)&uStack_f0 + lVar49);
    lVar49 = lVar49 + -0x30;
  } while (lVar49 != -0x30);
  FUN_109703914(apuStack_198);
  __Unwind_Resume(ppuVar14);
  ppuVar9 = ppuVar14;
  func_0x000104bd46a0();
  lStack_2b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar15 = *(uint *)(ppuVar16 + 0xc);
  if (uVar15 == 0) {
    ppuVar55 = (ushort **)0x1;
    ppuVar16 = ppuVar14;
    goto LAB_10971071c;
  }
  *(undefined2 *)(ppuVar16 + 0x17) = 0;
  *(code *)((long)ppuVar16 + 0x59) = (code)0x0;
  *(int *)(ppuVar16 + 0x18) = 0;
  if (uVar15 >> 0x1a == 0) {
    uVar20 = uVar15 << 6;
    if (uVar20 < 0x4001) {
      uVar20 = 0x4000;
    }
    *(uint *)((long)ppuVar16 + 0xc4) = uVar20;
    if (uVar15 >> 0x16 == 0) {
      uVar15 = uVar15 << 10;
      if (uVar15 < 0x4001) {
        uVar15 = 0x4000;
      }
      *(uint *)(ppuVar16 + 0x19) = uVar15;
    }
  }
  if (((byte)*(code *)(ppuVar16 + 3) >> 5 & 1) == 0) {
    ppuStack_340 = (ushort **)0x0;
  }
  else {
    ppuStack_340 = ppuVar9;
    func_0x0001096f6e38();
    func_0x0001096f7704();
  }
  ppuVar55 = (ushort **)ppuVar9[4];
  puVar48 = ppuVar9[0x10];
  iVar59 = *(int *)(ppuVar9 + 0xf);
  ppuVar14 = ppuVar55 + 0x34;
  param_5 = (ushort **)*ppuVar14;
  iVar38 = *(int *)ppuVar55;
  while (0 < iVar38) {
    puVar13 = &uStack_330;
    FUN_10970d5ec(puVar13,0,ppuVar55,ppuVar16 + 7,ppuVar18,ppuVar54,puVar48,iVar59,ppuVar17);
    if ((int)puVar13 == 0) {
      ppuVar53 = (ushort **)&UNK_10dfe4888;
      goto LAB_10970ff2c;
    }
    if (param_5 != (ushort **)0x0) {
      ppuVar44 = param_5;
      do {
        ppuVar53 = (ushort **)*ppuVar44;
        if (((((*(int *)(ppuVar53 + 3) == (int)uStack_330) &&
              (*(int *)((long)ppuVar53 + 0x1c) == uStack_330._4_4_)) && (ppuVar53[4] == puStack_328)
             ) && ((ppuVar53[5] == puStack_320 && (ppuVar53[6] == puStack_318)))) &&
           (*(uint *)(ppuVar53 + 8) == uStack_308)) {
          if (uStack_308 != 0) {
            puVar30 = ppuVar53[7] + 4;
            piVar34 = (int *)(lStack_310 + 8);
            uVar45 = (ulong)uStack_308;
            do {
              if ((*(int *)(puVar30 + -4) != piVar34[-2]) || (*(int *)(puVar30 + -2) != piVar34[-1])
                 ) goto LAB_10970fe74;
              if (*(int *)puVar30 == 0) {
                bVar7 = *(int *)(puVar30 + 2) == -1;
              }
              else {
                bVar7 = false;
              }
              if (*piVar34 == 0) {
                bVar8 = piVar34[1] == -1;
              }
              else {
                bVar8 = false;
              }
              if (bVar7 != bVar8) goto LAB_10970fe74;
              puVar30 = puVar30 + 8;
              piVar34 = piVar34 + 4;
              uVar45 = uVar45 - 1;
            } while (uVar45 != 0);
          }
          if ((*(long *)((long)ppuVar53 + 0x44) == lStack_304) && (ppuVar53[10] == puStack_2f8)) {
            if (*(int *)ppuVar53 != 0) {
              do {
                cVar5 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(ppuVar53,0x10);
                if (bVar7) {
                  *(int *)ppuVar53 = *(int *)ppuVar53 + 1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
            }
            goto LAB_10970ff2c;
          }
        }
LAB_10970fe74:
        ppuVar44 = (ushort **)ppuVar44[1];
      } while (ppuVar44 != (ushort **)0x0);
    }
    ppuVar53 = ppuVar55;
    FUN_10970d848(ppuVar55,ppuVar16 + 7,ppuVar18,ppuVar54,puVar48,iVar59,ppuVar17);
    puVar30 = (ushort *)0x1;
    _calloc(1,0x10);
    if (puVar30 == (ushort *)0x0) goto LAB_10970ff2c;
    *(ushort ***)puVar30 = ppuVar53;
    *(ushort ***)(puVar30 + 4) = param_5;
    if ((ushort **)*ppuVar14 == param_5) {
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(ppuVar14,0x10);
      if (bVar7) {
        *ppuVar14 = puVar30;
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 == '\0') {
        if ((ppuVar53 != (ushort **)0x0) && (*(int *)ppuVar53 != 0)) {
          do {
            cVar5 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(ppuVar53,0x10);
            if (bVar7) {
              *(int *)ppuVar53 = *(int *)ppuVar53 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        goto LAB_10970ff2c;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    FUN_1096f8ed0(ppuVar53);
    _free(puVar30);
    param_5 = (ushort **)ppuVar55[0x34];
    iVar38 = *(int *)ppuVar55;
  }
  FUN_10970d848(ppuVar55,ppuVar16 + 7,ppuVar18,ppuVar54,puVar48,iVar59,ppuVar17);
  ppuVar53 = ppuVar55;
LAB_10970ff2c:
  if (*(int *)(ppuVar16 + 0xc) == 0) {
LAB_10970ffa8:
    if (*(int *)(ppuVar16 + 6) == 1) {
      *(int *)(ppuVar16 + 6) = 2;
    }
    bVar7 = false;
    ppuVar55 = (ushort **)0x1;
  }
  else {
    if ((0 < *(int *)ppuVar53) && ((code *)ppuVar53[10] == FUN_109704d68)) {
      ppuVar14 = ppuVar9 + 0x16;
      do {
        while( true ) {
          if (*ppuVar14 != (ushort *)0x0) goto LAB_10970ff90;
          if (ppuVar9[0x15] == (ushort *)0x0) goto LAB_10970ff54;
          if (*ppuVar14 == (ushort *)0x0) break;
          ClearExclusiveLocal();
        }
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(ppuVar14,0x10);
        if (bVar7) {
          *ppuVar14 = (ushort *)0x1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
LAB_10970ff90:
      FUN_109704d68(ppuVar53,ppuVar9,ppuVar16,ppuVar18,ppuVar54);
      goto LAB_10970ffa8;
    }
LAB_10970ff54:
    ppuVar55 = (ushort **)0x0;
    bVar7 = true;
  }
  if (*(int *)(ppuVar16 + 0x19) < 1) {
    *(code *)((long)ppuVar16 + 0x59) = (code)0x1;
  }
  FUN_1096f8ed0();
  if (ppuStack_340 == (ushort **)0x0) goto LAB_10971070c;
  if (bVar7) goto LAB_109710018;
  if (((*(code *)(ppuVar16 + 0xb) != (code)0x1) ||
      (((byte)*(code *)((long)ppuVar16 + 0x59) & 1) != 0)) ||
     (*(code *)(ppuStack_340 + 0xb) != (code)0x1)) goto LAB_109710700;
  uVar15 = *(uint *)((long)ppuVar16 + 0x1c);
  if (uVar15 < 2) {
    if (*(uint *)(ppuVar16 + 0xc) < 2) {
      bVar7 = true;
    }
    else {
      lVar49 = (ulong)*(uint *)(ppuVar16 + 0xc) - 1;
      puVar10 = (uint *)(ppuVar16[0xe] + 0xe);
      uVar20 = *(uint *)(ppuVar16[0xe] + 4);
      do {
        uVar51 = *puVar10;
        bVar8 = (((ulong)ppuVar16[7] & 0xfffffffd) != 4) != uVar20 < uVar51;
        bVar7 = uVar20 == uVar51 || bVar8;
        if (uVar20 != uVar51 && !bVar8) {
          ppuVar53 = ppuVar16;
          FUN_1096f5e24(ppuVar16,ppuVar9,&UNK_10f57ebb9);
          uVar15 = *(uint *)((long)ppuVar16 + 0x1c);
          break;
        }
        lVar49 = lVar49 + -1;
        puVar10 = puVar10 + 5;
        uVar20 = uVar51;
      } while (lVar49 != 0);
      if (1 < uVar15) goto LAB_1097100a8;
    }
    func_0x0001096f6e38();
    param_5 = ppuVar53;
    FUN_1096f6068();
    if (*(int *)((long)ppuVar53 + 4) != 0) {
      *(uint *)(ppuVar53 + 3) = *(uint *)(ppuVar53 + 3) & 0xffffffdf;
    }
    func_0x0001096f6e38();
    FUN_1096f6068();
    if (*(int *)((long)param_5 + 4) != 0) {
      *(uint *)(param_5 + 3) = *(uint *)(param_5 + 3) & 0xffffffdf;
    }
    uVar15 = *(uint *)(ppuVar16 + 0xc);
    if (1 < uVar15 + 1) {
      puVar30 = ppuVar16[0xe];
      uVar57 = *(uint *)(ppuStack_340 + 0xc);
      puVar48 = ppuStack_340[0xe];
      uVar20 = *(uint *)(ppuVar16 + 7) & 0xfffffffd;
      uVar51 = uVar57;
      if (uVar20 == 4) {
        uVar51 = 0;
      }
      uVar47 = (ulong)uVar51;
      uVar21 = 1;
      uVar45 = uVar47;
      do {
        if ((uVar15 <= uVar21) ||
           ((*(int *)(puVar30 + uVar21 * 10 + 4) != *(int *)(puVar30 + uVar21 * 10 + -6) &&
            ((puVar30[(ulong)((int)uVar21 - (uint)(uVar20 != 4)) * 10 + 2] & 1) == 0)))) {
          if (uVar21 == uVar15) {
            uVar51 = (uint)uVar45;
            if (uVar20 == 4) {
              uVar51 = uVar57;
            }
            uVar52 = 0;
            if (uVar20 == 4) {
              uVar52 = (uint)uVar47;
            }
            uVar47 = (ulong)uVar52;
            uVar29 = (ulong)uVar51;
          }
          else {
            uVar29 = uVar45;
            if (uVar20 == 4) {
              if ((uint)uVar45 < uVar57) {
                puVar10 = (uint *)(puVar48 + uVar45 * 10 + 4);
                do {
                  uVar29 = uVar45;
                  if (*(uint *)(puVar30 + uVar21 * 10 + 4) <= *puVar10) break;
                  uVar45 = uVar45 + 1;
                  puVar10 = puVar10 + 5;
                  uVar29 = (ulong)uVar57;
                } while (uVar57 != uVar45);
              }
            }
            else {
              lVar49 = uVar47 * 0x14;
              uVar47 = (ulong)((uint)uVar47 + 1);
              do {
                if (lVar49 == 0) {
                  uVar47 = 0;
                  break;
                }
                lVar1 = lVar49 + -0xc;
                uVar47 = (ulong)((int)uVar47 - 1);
                lVar49 = lVar49 + -0x14;
              } while (*(uint *)(puVar30 + uVar21 * 10 + -6) <= *(uint *)((long)puVar48 + lVar1));
            }
          }
          if (*(int *)((long)ppuVar53 + 4) != 0) {
            *(int *)(ppuVar53 + 6) = 0;
            ppuVar53[8] = (ushort *)0x0;
            ppuVar53[7] = (ushort *)0x0;
            ppuVar53[10] = (ushort *)0x0;
            ppuVar53[9] = (ushort *)0x0;
            *(code *)(ppuVar53 + 0xb) = (code)0x1;
            *(undefined8 *)((long)ppuVar53 + 0x59) = 0;
            ppuVar53[0xc] = (ushort *)0x0;
            ppuVar53[0xf] = ppuVar53[0xe];
            ppuVar53[0x12] = (ushort *)0x0;
            ppuVar53[0x11] = (ushort *)0x0;
            ppuVar53[0x14] = (ushort *)0x0;
            ppuVar53[0x13] = (ushort *)0x0;
            ppuVar53[0x16] = (ushort *)0x0;
            ppuVar53[0x15] = (ushort *)0x0;
            *(undefined2 *)(ppuVar53 + 0x17) = 0;
            *(undefined8 *)((long)ppuVar53 + 0xbc) = 1;
          }
          if (*(int *)((long)ppuVar53 + 4) != 0) {
            uVar51 = *(uint *)(ppuVar53 + 3);
            if ((uint)uVar47 != 0) {
              uVar51 = *(uint *)(ppuVar53 + 3) & 0xfffffffe;
            }
            uVar52 = uVar51 & 0xfffffffd;
            if (uVar57 <= (uint)uVar29) {
              uVar52 = uVar51;
            }
            *(uint *)(ppuVar53 + 3) = uVar52;
          }
          func_0x0001096f7704(ppuVar53,ppuStack_340,uVar47,uVar29);
          ppuVar14 = ppuVar9;
          FUN_10970fc5c(ppuVar9,ppuVar53,ppuVar18,ppuVar54,ppuVar17);
          if ((((int)ppuVar14 == 0) || (((ulong)ppuVar53[0xb] & 1) != 0)) ||
             (((byte)*(code *)((long)ppuVar53 + 0x59) & 1) != 0)) {
            bVar35 = 1;
            goto LAB_1097103d0;
          }
          func_0x0001096f7704(param_5,ppuVar53,0,0xffffffff);
          uVar51 = (uint)uVar47;
          if (uVar20 == 4) {
            uVar51 = (uint)uVar29;
          }
          uVar47 = (ulong)uVar51;
          uVar45 = uVar47;
        }
        uVar21 = uVar21 + 1;
      } while (uVar21 != uVar15 + 1);
    }
    if (*(code *)(param_5 + 0xb) == (code)0x1) {
      ppuVar14 = param_5;
      FUN_1096f7b98(param_5,ppuVar16);
      if (((ulong)ppuVar14 & 0xffffffbf) == 0) {
        bVar35 = 1;
      }
      else {
        FUN_1096f5e24(ppuVar16,ppuVar9,&UNK_10f57ebe9);
        if (*(int *)((long)ppuVar16 + 4) != 0) {
          *(int *)(ppuVar16 + 0xc) = 0;
          *(int *)(ppuVar16 + 6) = 0;
          ppuVar16[0x16] = (ushort *)0x0;
        }
        func_0x0001096f7704(ppuVar16,param_5,0,0xffffffff);
        bVar35 = 0;
      }
    }
    else {
      bVar35 = 1;
    }
LAB_1097103d0:
    func_0x0001096f6e98(param_5);
    func_0x0001096f6e98();
  }
  else {
    bVar7 = true;
LAB_1097100a8:
    bVar35 = 1;
  }
  bVar7 = (bool)(bVar7 & bVar35);
  if (((byte)*(code *)(ppuVar16 + 3) >> 6 & 1) != 0) {
    if (*(uint *)((long)ppuVar16 + 0x1c) < 2) {
      func_0x0001096f6e38();
      param_5 = ppuVar53;
      FUN_1096f6068();
      appuStack_2c0[0] = ppuVar53;
      func_0x0001096f6e38();
      ppuVar14 = param_5;
      FUN_1096f6068();
      if (*(int *)((long)ppuVar53 + 4) != 0) {
        *(uint *)(ppuVar53 + 3) = *(uint *)(ppuVar53 + 3) & 0xffffffdf;
      }
      if (*(int *)((long)param_5 + 4) != 0) {
        *(uint *)(param_5 + 3) = *(uint *)(param_5 + 3) & 0xffffffdf;
      }
      appuStack_2c0[1] = param_5;
      func_0x0001096f6e38();
      FUN_1096f6068();
      if (*(int *)((long)ppuVar14 + 4) != 0) {
        *(uint *)(ppuVar14 + 3) = *(uint *)(ppuVar14 + 3) & 0xffffffdf;
      }
      puStack_328 = ppuVar16[8];
      uStack_330 = ppuVar16[7];
      puStack_318 = ppuVar16[10];
      puStack_320 = ppuVar16[9];
      if (*(int *)((long)ppuVar53 + 4) != 0) {
        ppuVar53[8] = puStack_328;
        ppuVar53[7] = uStack_330;
        ppuVar53[10] = puStack_318;
        ppuVar53[9] = puStack_320;
      }
      if (*(int *)((long)param_5 + 4) != 0) {
        param_5[8] = puStack_328;
        param_5[7] = uStack_330;
        param_5[10] = puStack_318;
        param_5[9] = puStack_320;
      }
      if (*(int *)((long)ppuVar14 + 4) != 0) {
        ppuVar14[8] = puStack_328;
        ppuVar14[7] = uStack_330;
        ppuVar14[10] = puStack_318;
        ppuVar14[9] = puStack_320;
      }
      uVar15 = *(uint *)(ppuVar16 + 0xc);
      uVar21 = (ulong)uVar15;
      puVar48 = ppuVar16[0xe];
      uVar20 = *(uint *)(ppuStack_340 + 0xc);
      uVar45 = (ulong)uVar20;
      puVar30 = ppuStack_340[0xe];
      uVar51 = *(uint *)(ppuVar16 + 7) & 0xfffffffd;
      if ((*(uint *)(ppuVar16 + 7) & 0xfffffffd) != 4) {
        FUN_1096f7004(ppuVar16,0,uVar21);
      }
      uVar15 = uVar15 + 1;
      if (1 < uVar15) {
        lVar49 = 0;
        uVar25 = 0;
        uVar47 = 1;
        uVar29 = 0;
        do {
          if ((uVar21 <= uVar47) ||
             ((uVar19 = uVar29,
              *(int *)(puVar48 + uVar47 * 10 + 4) != *(int *)(puVar48 + uVar47 * 10 + -6) &&
              (((byte)puVar48[uVar47 * 10 + 2] >> 1 & 1) == 0)))) {
            uVar19 = uVar45;
            if ((uVar47 != uVar21) && (uVar19 = uVar25, (uint)uVar25 < uVar20)) {
              uVar56 = uVar25 & 0xffffffff;
              puVar10 = (uint *)(puVar30 + (uVar25 & 0xffffffff) * 10 + 4);
              do {
                uVar19 = uVar56;
                if (*(uint *)(puVar48 + uVar47 * 10 + 4) <= *puVar10) break;
                uVar56 = uVar56 + 1;
                puVar10 = puVar10 + 5;
                uVar19 = uVar45;
              } while (uVar45 != uVar56);
            }
            func_0x0001096f7704(appuStack_2c0[lVar49],ppuStack_340,uVar29,uVar19);
            lVar49 = 1 - lVar49;
            uVar25 = uVar19;
          }
          uVar47 = uVar47 + 1;
          uVar29 = uVar19;
        } while (uVar47 != uVar15);
      }
      ppuVar55 = ppuVar9;
      FUN_10970fc5c(ppuVar9,ppuVar53,ppuVar18,ppuVar54,ppuVar17);
      if ((int)ppuVar55 == 0) {
        bVar35 = 1;
      }
      else if ((((*(code *)(ppuVar53 + 0xb) == (code)0x1) &&
                (((byte)*(code *)((long)ppuVar53 + 0x59) & 1) == 0)) &&
               (ppuVar55 = ppuVar9, FUN_10970fc5c(ppuVar9,param_5,ppuVar18,ppuVar54,ppuVar17),
               (int)ppuVar55 != 0)) &&
              ((*(code *)(param_5 + 0xb) == (code)0x1 &&
               (((byte)*(code *)((long)param_5 + 0x59) & 1) == 0)))) {
        if (uVar51 != 4) {
          FUN_1096f7004(ppuVar53,0,*(int *)(ppuVar53 + 0xc));
          FUN_1096f7004(param_5,0,*(int *)(param_5 + 0xc));
        }
        uStack_2c8 = 0;
        uVar15 = *(uint *)(ppuVar53 + 0xc);
        uVar20 = *(uint *)(param_5 + 0xc);
        auStack_2d0[0] = uVar15;
        auStack_2d0[1] = uVar20;
        apuStack_2e0[0] = ppuVar53[0xe];
        apuStack_2e0[1] = param_5[0xe];
        if (uVar15 != 0 || uVar20 != 0) {
          uVar45 = 0;
          do {
            uVar52 = *(uint *)((long)&uStack_2c8 + uVar45 * 4);
            uVar39 = auStack_2d0[uVar45];
            uVar57 = uVar52 + 1;
            uVar21 = (ulong)uVar57;
            if (uVar57 < uVar39) {
              puVar48 = apuStack_2e0[uVar45] + (ulong)uVar57 * 10 + 4;
              uVar47 = (ulong)uVar52;
              uVar29 = (ulong)uVar57;
              do {
                if ((*(int *)puVar48 !=
                     *(int *)(apuStack_2e0[uVar45] + (uVar47 & 0xffffffff) * 10 + 4)) &&
                   (uVar21 = uVar29, ((byte)puVar48[-2] >> 1 & 1) == 0)) break;
                uVar25 = uVar29 + 1;
                puVar48 = puVar48 + 10;
                uVar47 = uVar29;
                uVar21 = (ulong)uVar39;
                uVar29 = uVar25;
              } while (uVar39 != (uint)uVar25);
            }
            func_0x0001096f7704(ppuVar14,appuStack_2c0[uVar45],(ulong)uVar52,uVar21);
            *(int *)((long)&uStack_2c8 + uVar45 * 4) = (int)uVar21;
            uVar45 = uVar45 ^ 1;
          } while ((uint)uStack_2c8 < uVar15 || uStack_2c8._4_4_ < uVar20);
        }
        if (uVar51 != 4) {
          FUN_1096f7004(ppuVar16,0,*(int *)(ppuVar16 + 0xc));
          FUN_1096f7004(ppuVar14,0,*(int *)(ppuVar14 + 0xc));
        }
        if ((*(code *)(ppuVar14 + 0xb) == (code)0x1) &&
           (ppuVar18 = ppuVar14, FUN_1096f7b98(ppuVar14,ppuVar16),
           ((ulong)ppuVar18 & 0xffffffbf) != 0)) {
          FUN_1096f5e24(ppuVar16,ppuVar9,&UNK_10f57ec1b);
          if (*(int *)((long)ppuVar16 + 4) != 0) {
            *(int *)(ppuVar16 + 0xc) = 0;
            *(int *)(ppuVar16 + 6) = 0;
            ppuVar16[0x16] = (ushort *)0x0;
          }
          func_0x0001096f7704(ppuVar16,ppuVar14,0,0xffffffff);
          bVar35 = 0;
        }
        else {
          bVar35 = 1;
        }
      }
      else {
        bVar35 = 1;
      }
      func_0x0001096f6e98(ppuVar14);
      func_0x0001096f6e98(ppuVar53);
      func_0x0001096f6e98(param_5);
    }
    else {
      bVar35 = 1;
    }
    bVar7 = (bool)(bVar7 & bVar35);
  }
  if (bVar7) {
LAB_109710700:
    ppuVar55 = (ushort **)0x1;
    goto LAB_109710704;
  }
  iVar59 = *(int *)(ppuStack_340 + 0xc);
  uVar20 = iVar59 * 10 + 0x10;
  uVar15 = uVar20 & ((int)uVar20 >> 0x1f ^ 0xffffffffU);
  if ((int)uVar20 < 1) {
    param_5 = (ushort **)0x0;
  }
  else {
    uVar51 = 0;
    do {
      uVar51 = uVar51 + (uVar51 >> 1) + 8;
    } while (uVar51 < uVar15);
    param_5 = (ushort **)0x0;
    FUN_109744e6c();
    if (param_5 == (ushort **)0x0) goto LAB_109710458;
    _bzero(param_5,uVar15);
  }
  FUN_1096f5cdc(ppuStack_340,iVar59,param_5,uVar15,&uStack_330);
  FUN_1096f5e24(ppuVar16,ppuVar9,&UNK_10f57ea26);
  if (0 < (int)uVar20) goto LAB_109710458;
LAB_109710018:
  while( true ) {
    ppuVar55 = (ushort **)0x0;
LAB_109710704:
    func_0x0001096f6e98(ppuStack_340);
LAB_10971070c:
    *(undefined8 *)((long)ppuVar16 + 0xc4) = 0x1fffffff3fffffff;
    *(undefined2 *)(ppuVar16 + 0x17) = 0;
LAB_10971071c:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2b0) break;
    ___stack_chk_fail();
LAB_109710458:
    _free(param_5);
  }
  return ppuVar55;
}



/* Entry: 10970fc5c; end: 10971096f;  */

undefined8
FUN_10970fc5c(long param_1,int *param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  long *plVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  char cVar7;
  byte bVar8;
  bool bVar9;
  bool bVar10;
  int *piVar11;
  undefined8 *puVar12;
  int *piVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  uint uVar17;
  long lVar18;
  ulong uVar19;
  uint *puVar20;
  long lVar21;
  long lVar22;
  uint uVar23;
  long lVar24;
  int *piVar25;
  int *piVar26;
  int *unaff_x19;
  int *unaff_x22;
  ulong uVar27;
  int *piVar28;
  undefined8 uVar29;
  ulong uVar30;
  int *piVar31;
  ulong uVar32;
  ulong uVar33;
  long lStack_110;
  undefined8 uStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  uint uStack_d8;
  long lStack_d4;
  long lStack_c8;
  long alStack_b0 [2];
  uint auStack_a0 [2];
  undefined8 uStack_98;
  int *apiStack_90 [2];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar17 = param_2[0x18];
  if (uVar17 == 0) {
    uVar29 = 1;
    param_2 = unaff_x19;
    goto LAB_10971071c;
  }
  *(undefined2 *)(param_2 + 0x2e) = 0;
  *(undefined1 *)((long)param_2 + 0x59) = 0;
  param_2[0x30] = 0;
  if (uVar17 >> 0x1a == 0) {
    uVar23 = uVar17 << 6;
    if (uVar23 < 0x4001) {
      uVar23 = 0x4000;
    }
    param_2[0x31] = uVar23;
    if (uVar17 >> 0x16 == 0) {
      uVar17 = uVar17 << 10;
      if (uVar17 < 0x4001) {
        uVar17 = 0x4000;
      }
      param_2[0x32] = uVar17;
    }
  }
  if ((*(byte *)(param_2 + 6) >> 5 & 1) == 0) {
    lStack_110 = 0;
  }
  else {
    lStack_110 = param_1;
    func_0x0001096f6e38();
    func_0x0001096f7704();
  }
  piVar31 = *(int **)(param_1 + 0x20);
  uVar29 = *(undefined8 *)(param_1 + 0x80);
  uVar2 = *(undefined4 *)(param_1 + 0x78);
  piVar13 = piVar31 + 0x68;
  unaff_x22 = *(int **)piVar13;
  iVar3 = *piVar31;
  while (0 < iVar3) {
    puVar12 = &uStack_100;
    FUN_10970d5ec(puVar12,0,piVar31,param_2 + 0xe,param_3,param_4,uVar29,uVar2,param_5);
    if ((int)puVar12 == 0) {
      piVar28 = (int *)&UNK_10dfe4888;
      goto LAB_10970ff2c;
    }
    if (unaff_x22 != (int *)0x0) {
      piVar25 = unaff_x22;
      do {
        piVar28 = *(int **)piVar25;
        if (((((piVar28[6] == (int)uStack_100) && (piVar28[7] == uStack_100._4_4_)) &&
             (*(long *)(piVar28 + 8) == lStack_f8)) &&
            ((*(long *)(piVar28 + 10) == lStack_f0 && (*(long *)(piVar28 + 0xc) == lStack_e8)))) &&
           (piVar28[0x10] == uStack_d8)) {
          if (uStack_d8 != 0) {
            piVar26 = (int *)(*(long *)(piVar28 + 0xe) + 8);
            piVar11 = (int *)(lStack_e0 + 8);
            uVar27 = (ulong)uStack_d8;
            do {
              if ((piVar26[-2] != piVar11[-2]) || (piVar26[-1] != piVar11[-1])) goto LAB_10970fe74;
              if (*piVar26 == 0) {
                bVar9 = piVar26[1] == -1;
              }
              else {
                bVar9 = false;
              }
              if (*piVar11 == 0) {
                bVar10 = piVar11[1] == -1;
              }
              else {
                bVar10 = false;
              }
              if (bVar9 != bVar10) goto LAB_10970fe74;
              piVar26 = piVar26 + 4;
              piVar11 = piVar11 + 4;
              uVar27 = uVar27 - 1;
            } while (uVar27 != 0);
          }
          if ((*(long *)(piVar28 + 0x11) == lStack_d4) && (*(long *)(piVar28 + 0x14) == lStack_c8))
          {
            if (*piVar28 != 0) {
              do {
                cVar7 = '\x01';
                bVar9 = (bool)ExclusiveMonitorPass(piVar28,0x10);
                if (bVar9) {
                  *piVar28 = *piVar28 + 1;
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
            }
            goto LAB_10970ff2c;
          }
        }
LAB_10970fe74:
        piVar25 = *(int **)(piVar25 + 2);
      } while (piVar25 != (int *)0x0);
    }
    piVar28 = piVar31;
    FUN_10970d848(piVar31,param_2 + 0xe,param_3,param_4,uVar29,uVar2,param_5);
    puVar12 = (undefined8 *)0x1;
    _calloc(1,0x10);
    if (puVar12 == (undefined8 *)0x0) goto LAB_10970ff2c;
    *puVar12 = piVar28;
    puVar12[1] = unaff_x22;
    if (*(int **)piVar13 == unaff_x22) {
      cVar7 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(piVar13,0x10);
      if (bVar9) {
        *(undefined8 **)piVar13 = puVar12;
        cVar7 = ExclusiveMonitorsStatus();
      }
      if (cVar7 == '\0') {
        if ((piVar28 != (int *)0x0) && (*piVar28 != 0)) {
          do {
            cVar7 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(piVar28,0x10);
            if (bVar9) {
              *piVar28 = *piVar28 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
        }
        goto LAB_10970ff2c;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    FUN_1096f8ed0(piVar28);
    _free(puVar12);
    unaff_x22 = *(int **)(piVar31 + 0x68);
    iVar3 = *piVar31;
  }
  FUN_10970d848(piVar31,param_2 + 0xe,param_3,param_4,uVar29,uVar2,param_5);
  piVar28 = piVar31;
LAB_10970ff2c:
  if (param_2[0x18] == 0) {
LAB_10970ffa8:
    if (param_2[0xc] == 1) {
      param_2[0xc] = 2;
    }
    bVar9 = false;
    uVar29 = 1;
  }
  else {
    if ((0 < *piVar28) && (*(code **)(piVar28 + 0x14) == FUN_109704d68)) {
      plVar1 = (long *)(param_1 + 0xb0);
      do {
        while( true ) {
          if (*plVar1 != 0) goto LAB_10970ff90;
          if (*(long *)(param_1 + 0xa8) == 0) goto LAB_10970ff54;
          if (*plVar1 == 0) break;
          ClearExclusiveLocal();
        }
        cVar7 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar9) {
          *plVar1 = 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
LAB_10970ff90:
      FUN_109704d68(piVar28,param_1,param_2,param_3,param_4);
      goto LAB_10970ffa8;
    }
LAB_10970ff54:
    uVar29 = 0;
    bVar9 = true;
  }
  if (param_2[0x32] < 1) {
    *(undefined1 *)((long)param_2 + 0x59) = 1;
  }
  FUN_1096f8ed0();
  if (lStack_110 == 0) goto LAB_10971070c;
  if (bVar9) goto LAB_109710018;
  if ((((char)param_2[0x16] != '\x01') || ((*(byte *)((long)param_2 + 0x59) & 1) != 0)) ||
     (*(char *)(lStack_110 + 0x58) != '\x01')) goto LAB_109710700;
  uVar17 = param_2[7];
  if (uVar17 < 2) {
    if ((uint)param_2[0x18] < 2) {
      bVar9 = true;
    }
    else {
      lVar22 = (ulong)(uint)param_2[0x18] - 1;
      puVar20 = (uint *)(*(long *)(param_2 + 0x1c) + 0x1c);
      uVar23 = *(uint *)(*(long *)(param_2 + 0x1c) + 8);
      do {
        uVar14 = *puVar20;
        bVar10 = ((param_2[0xe] & 0xfffffffdU) != 4) != uVar23 < uVar14;
        bVar9 = uVar23 == uVar14 || bVar10;
        if (uVar23 != uVar14 && !bVar10) {
          piVar28 = param_2;
          FUN_1096f5e24(param_2,param_1,&UNK_10f57ebb9);
          uVar17 = param_2[7];
          break;
        }
        lVar22 = lVar22 + -1;
        puVar20 = puVar20 + 5;
        uVar23 = uVar14;
      } while (lVar22 != 0);
      if (1 < uVar17) goto LAB_1097100a8;
    }
    func_0x0001096f6e38();
    unaff_x22 = piVar28;
    FUN_1096f6068();
    if (piVar28[1] != 0) {
      piVar28[6] = piVar28[6] & 0xffffffdf;
    }
    func_0x0001096f6e38();
    FUN_1096f6068();
    if (unaff_x22[1] != 0) {
      unaff_x22[6] = unaff_x22[6] & 0xffffffdf;
    }
    uVar17 = param_2[0x18];
    if (1 < uVar17 + 1) {
      lVar24 = *(long *)(param_2 + 0x1c);
      uVar4 = *(uint *)(lStack_110 + 0x60);
      lVar22 = *(long *)(lStack_110 + 0x70);
      uVar23 = param_2[0xe] & 0xfffffffd;
      uVar14 = uVar4;
      if (uVar23 == 4) {
        uVar14 = 0;
      }
      uVar32 = (ulong)uVar14;
      uVar30 = 1;
      uVar27 = uVar32;
      do {
        if ((uVar17 <= uVar30) ||
           ((lVar18 = lVar24 + uVar30 * 0x14, *(int *)(lVar18 + 8) != *(int *)(lVar18 + -0xc) &&
            ((*(byte *)(lVar24 + (ulong)((int)uVar30 - (uint)(uVar23 != 4)) * 0x14 + 4) & 1) == 0)))
           ) {
          if (uVar30 == uVar17) {
            uVar14 = (uint)uVar27;
            if (uVar23 == 4) {
              uVar14 = uVar4;
            }
            uVar5 = 0;
            if (uVar23 == 4) {
              uVar5 = (uint)uVar32;
            }
            uVar32 = (ulong)uVar5;
            uVar15 = (ulong)uVar14;
          }
          else {
            uVar15 = uVar27;
            if (uVar23 == 4) {
              if ((uint)uVar27 < uVar4) {
                puVar20 = (uint *)(lVar22 + 8 + uVar27 * 0x14);
                do {
                  uVar15 = uVar27;
                  if (*(uint *)(lVar24 + uVar30 * 0x14 + 8) <= *puVar20) break;
                  uVar27 = uVar27 + 1;
                  puVar20 = puVar20 + 5;
                  uVar15 = (ulong)uVar4;
                } while (uVar4 != uVar27);
              }
            }
            else {
              lVar18 = uVar32 * 0x14;
              uVar32 = (ulong)((uint)uVar32 + 1);
              do {
                if (lVar18 == 0) {
                  uVar32 = 0;
                  break;
                }
                puVar20 = (uint *)(lVar22 + -0xc + lVar18);
                uVar32 = (ulong)((int)uVar32 - 1);
                lVar18 = lVar18 + -0x14;
              } while (*(uint *)(lVar24 + uVar30 * 0x14 + -0xc) <= *puVar20);
            }
          }
          if (piVar28[1] != 0) {
            piVar28[0xc] = 0;
            piVar28[0x10] = 0;
            piVar28[0x11] = 0;
            piVar28[0xe] = 0;
            piVar28[0xf] = 0;
            piVar28[0x14] = 0;
            piVar28[0x15] = 0;
            piVar28[0x12] = 0;
            piVar28[0x13] = 0;
            *(undefined1 *)(piVar28 + 0x16) = 1;
            *(undefined8 *)((long)piVar28 + 0x59) = 0;
            piVar28[0x18] = 0;
            piVar28[0x19] = 0;
            *(undefined8 *)(piVar28 + 0x1e) = *(undefined8 *)(piVar28 + 0x1c);
            piVar28[0x24] = 0;
            piVar28[0x25] = 0;
            piVar28[0x22] = 0;
            piVar28[0x23] = 0;
            piVar28[0x28] = 0;
            piVar28[0x29] = 0;
            piVar28[0x26] = 0;
            piVar28[0x27] = 0;
            piVar28[0x2c] = 0;
            piVar28[0x2d] = 0;
            piVar28[0x2a] = 0;
            piVar28[0x2b] = 0;
            *(undefined2 *)(piVar28 + 0x2e) = 0;
            piVar28[0x2f] = 1;
            piVar28[0x30] = 0;
          }
          if (piVar28[1] != 0) {
            uVar14 = piVar28[6];
            if ((uint)uVar32 != 0) {
              uVar14 = piVar28[6] & 0xfffffffe;
            }
            uVar5 = uVar14 & 0xfffffffd;
            if (uVar4 <= (uint)uVar15) {
              uVar5 = uVar14;
            }
            piVar28[6] = uVar5;
          }
          func_0x0001096f7704(piVar28,lStack_110,uVar32,uVar15);
          lVar18 = param_1;
          FUN_10970fc5c(param_1,piVar28,param_3,param_4,param_5);
          if ((((int)lVar18 == 0) || ((*(byte *)(piVar28 + 0x16) & 1) != 0)) ||
             ((*(byte *)((long)piVar28 + 0x59) & 1) != 0)) {
            bVar8 = 1;
            goto LAB_1097103d0;
          }
          func_0x0001096f7704(unaff_x22,piVar28,0,0xffffffff);
          uVar14 = (uint)uVar32;
          if (uVar23 == 4) {
            uVar14 = (uint)uVar15;
          }
          uVar32 = (ulong)uVar14;
          uVar27 = uVar32;
        }
        uVar30 = uVar30 + 1;
      } while (uVar30 != uVar17 + 1);
    }
    if ((char)unaff_x22[0x16] == '\x01') {
      piVar13 = unaff_x22;
      FUN_1096f7b98(unaff_x22,param_2);
      if (((ulong)piVar13 & 0xffffffbf) == 0) {
        bVar8 = 1;
      }
      else {
        FUN_1096f5e24(param_2,param_1,&UNK_10f57ebe9);
        if (param_2[1] != 0) {
          param_2[0x18] = 0;
          param_2[0xc] = 0;
          param_2[0x2c] = 0;
          param_2[0x2d] = 0;
        }
        func_0x0001096f7704(param_2,unaff_x22,0,0xffffffff);
        bVar8 = 0;
      }
    }
    else {
      bVar8 = 1;
    }
LAB_1097103d0:
    func_0x0001096f6e98(unaff_x22);
    func_0x0001096f6e98();
  }
  else {
    bVar9 = true;
LAB_1097100a8:
    bVar8 = 1;
  }
  bVar9 = (bool)(bVar9 & bVar8);
  if ((*(byte *)(param_2 + 6) >> 6 & 1) != 0) {
    if ((uint)param_2[7] < 2) {
      func_0x0001096f6e38();
      unaff_x22 = piVar28;
      FUN_1096f6068();
      apiStack_90[0] = piVar28;
      func_0x0001096f6e38();
      piVar13 = unaff_x22;
      FUN_1096f6068();
      if (piVar28[1] != 0) {
        piVar28[6] = piVar28[6] & 0xffffffdf;
      }
      if (unaff_x22[1] != 0) {
        unaff_x22[6] = unaff_x22[6] & 0xffffffdf;
      }
      apiStack_90[1] = unaff_x22;
      func_0x0001096f6e38();
      FUN_1096f6068();
      if (piVar13[1] != 0) {
        piVar13[6] = piVar13[6] & 0xffffffdf;
      }
      lStack_f8 = *(long *)(param_2 + 0x10);
      uStack_100 = *(undefined8 *)(param_2 + 0xe);
      lStack_e8 = *(long *)(param_2 + 0x14);
      lStack_f0 = *(long *)(param_2 + 0x12);
      if (piVar28[1] != 0) {
        *(long *)(piVar28 + 0x10) = lStack_f8;
        *(undefined8 *)(piVar28 + 0xe) = uStack_100;
        *(long *)(piVar28 + 0x14) = lStack_e8;
        *(long *)(piVar28 + 0x12) = lStack_f0;
      }
      if (unaff_x22[1] != 0) {
        *(long *)(unaff_x22 + 0x10) = lStack_f8;
        *(undefined8 *)(unaff_x22 + 0xe) = uStack_100;
        *(long *)(unaff_x22 + 0x14) = lStack_e8;
        *(long *)(unaff_x22 + 0x12) = lStack_f0;
      }
      if (piVar13[1] != 0) {
        *(long *)(piVar13 + 0x10) = lStack_f8;
        *(undefined8 *)(piVar13 + 0xe) = uStack_100;
        *(long *)(piVar13 + 0x14) = lStack_e8;
        *(long *)(piVar13 + 0x12) = lStack_f0;
      }
      uVar17 = param_2[0x18];
      uVar30 = (ulong)uVar17;
      lVar22 = *(long *)(param_2 + 0x1c);
      uVar23 = *(uint *)(lStack_110 + 0x60);
      uVar27 = (ulong)uVar23;
      lVar24 = *(long *)(lStack_110 + 0x70);
      uVar14 = param_2[0xe] & 0xfffffffd;
      if ((param_2[0xe] & 0xfffffffdU) != 4) {
        FUN_1096f7004(param_2,0,uVar30);
      }
      uVar17 = uVar17 + 1;
      if (1 < uVar17) {
        lVar18 = 0;
        uVar19 = 0;
        uVar32 = 1;
        uVar15 = 0;
        do {
          if ((uVar30 <= uVar32) ||
             ((lVar21 = lVar22 + uVar32 * 0x14, uVar16 = uVar15,
              *(int *)(lVar21 + 8) != *(int *)(lVar21 + -0xc) &&
              ((*(byte *)(lVar21 + 4) >> 1 & 1) == 0)))) {
            uVar16 = uVar27;
            if ((uVar32 != uVar30) && (uVar16 = uVar19, (uint)uVar19 < uVar23)) {
              uVar33 = uVar19 & 0xffffffff;
              puVar20 = (uint *)(lVar24 + 8 + (uVar19 & 0xffffffff) * 0x14);
              do {
                uVar16 = uVar33;
                if (*(uint *)(lVar22 + uVar32 * 0x14 + 8) <= *puVar20) break;
                uVar33 = uVar33 + 1;
                puVar20 = puVar20 + 5;
                uVar16 = uVar27;
              } while (uVar27 != uVar33);
            }
            func_0x0001096f7704(apiStack_90[lVar18],lStack_110,uVar15,uVar16);
            lVar18 = 1 - lVar18;
            uVar19 = uVar16;
          }
          uVar32 = uVar32 + 1;
          uVar15 = uVar16;
        } while (uVar32 != uVar17);
      }
      lVar22 = param_1;
      FUN_10970fc5c(param_1,piVar28,param_3,param_4,param_5);
      if ((int)lVar22 == 0) {
        bVar8 = 1;
      }
      else if (((((char)piVar28[0x16] == '\x01') && ((*(byte *)((long)piVar28 + 0x59) & 1) == 0)) &&
               (lVar22 = param_1, FUN_10970fc5c(param_1,unaff_x22,param_3,param_4,param_5),
               (int)lVar22 != 0)) &&
              (((char)unaff_x22[0x16] == '\x01' && ((*(byte *)((long)unaff_x22 + 0x59) & 1) == 0))))
      {
        if (uVar14 != 4) {
          FUN_1096f7004(piVar28,0,piVar28[0x18]);
          FUN_1096f7004(unaff_x22,0,unaff_x22[0x18]);
        }
        uStack_98 = 0;
        uVar17 = piVar28[0x18];
        uVar23 = unaff_x22[0x18];
        auStack_a0[0] = uVar17;
        auStack_a0[1] = uVar23;
        alStack_b0[0] = *(long *)(piVar28 + 0x1c);
        alStack_b0[1] = *(undefined8 *)(unaff_x22 + 0x1c);
        if (uVar17 != 0 || uVar23 != 0) {
          uVar27 = 0;
          do {
            uVar5 = *(uint *)((long)&uStack_98 + uVar27 * 4);
            uVar6 = auStack_a0[uVar27];
            uVar4 = uVar5 + 1;
            uVar30 = (ulong)uVar4;
            if (uVar4 < uVar6) {
              piVar31 = (int *)(alStack_b0[uVar27] + (ulong)uVar4 * 0x14 + 8);
              uVar32 = (ulong)uVar5;
              uVar15 = (ulong)uVar4;
              do {
                if ((*piVar31 != *(int *)(alStack_b0[uVar27] + (uVar32 & 0xffffffff) * 0x14 + 8)) &&
                   (uVar30 = uVar15, (*(byte *)(piVar31 + -1) >> 1 & 1) == 0)) break;
                uVar19 = uVar15 + 1;
                piVar31 = piVar31 + 5;
                uVar32 = uVar15;
                uVar30 = (ulong)uVar6;
                uVar15 = uVar19;
              } while (uVar6 != (uint)uVar19);
            }
            func_0x0001096f7704(piVar13,apiStack_90[uVar27],(ulong)uVar5,uVar30);
            *(int *)((long)&uStack_98 + uVar27 * 4) = (int)uVar30;
            uVar27 = uVar27 ^ 1;
          } while ((uint)uStack_98 < uVar17 || uStack_98._4_4_ < uVar23);
        }
        if (uVar14 != 4) {
          FUN_1096f7004(param_2,0,param_2[0x18]);
          FUN_1096f7004(piVar13,0,piVar13[0x18]);
        }
        if (((char)piVar13[0x16] == '\x01') &&
           (piVar31 = piVar13, FUN_1096f7b98(piVar13,param_2), ((ulong)piVar31 & 0xffffffbf) != 0))
        {
          FUN_1096f5e24(param_2,param_1,&UNK_10f57ec1b);
          if (param_2[1] != 0) {
            param_2[0x18] = 0;
            param_2[0xc] = 0;
            param_2[0x2c] = 0;
            param_2[0x2d] = 0;
          }
          func_0x0001096f7704(param_2,piVar13,0,0xffffffff);
          bVar8 = 0;
        }
        else {
          bVar8 = 1;
        }
      }
      else {
        bVar8 = 1;
      }
      func_0x0001096f6e98(piVar13);
      func_0x0001096f6e98(piVar28);
      func_0x0001096f6e98(unaff_x22);
    }
    else {
      bVar8 = 1;
    }
    bVar9 = (bool)(bVar9 & bVar8);
  }
  if (bVar9) {
LAB_109710700:
    uVar29 = 1;
    goto LAB_109710704;
  }
  iVar3 = *(int *)(lStack_110 + 0x60);
  uVar23 = iVar3 * 10 + 0x10;
  uVar17 = uVar23 & ((int)uVar23 >> 0x1f ^ 0xffffffffU);
  if ((int)uVar23 < 1) {
    unaff_x22 = (int *)0x0;
  }
  else {
    uVar14 = 0;
    do {
      uVar14 = uVar14 + (uVar14 >> 1) + 8;
    } while (uVar14 < uVar17);
    unaff_x22 = (int *)0x0;
    FUN_109744e6c();
    if (unaff_x22 == (int *)0x0) goto LAB_109710458;
    _bzero(unaff_x22,uVar17);
  }
  FUN_1096f5cdc(lStack_110,iVar3,unaff_x22,uVar17,&uStack_100);
  FUN_1096f5e24(param_2,param_1,&UNK_10f57ea26);
  if (0 < (int)uVar23) goto LAB_109710458;
LAB_109710018:
  while( true ) {
    uVar29 = 0;
LAB_109710704:
    func_0x0001096f6e98(lStack_110);
LAB_10971070c:
    param_2[0x31] = 0x3fffffff;
    param_2[0x32] = 0x1fffffff;
    *(undefined2 *)(param_2 + 0x2e) = 0;
LAB_10971071c:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) break;
    ___stack_chk_fail();
LAB_109710458:
    _free(unaff_x22);
  }
  return uVar29;
}



/* Entry: 109710970; end: 109710977;  */

undefined8 FUN_109710970(long param_1,int *param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  char cVar7;
  byte bVar8;
  bool bVar9;
  bool bVar10;
  int *piVar11;
  undefined8 *puVar12;
  int *piVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  uint uVar17;
  long lVar18;
  ulong uVar19;
  uint *puVar20;
  long lVar21;
  long lVar22;
  uint uVar23;
  long lVar24;
  int *piVar25;
  int *piVar26;
  int *unaff_x19;
  ulong uVar27;
  int *unaff_x22;
  int *piVar28;
  undefined8 uVar29;
  ulong uVar30;
  int *piVar31;
  ulong uVar32;
  ulong uVar33;
  long lStack_110;
  undefined8 uStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  uint uStack_d8;
  long lStack_d4;
  long lStack_c8;
  long alStack_b0 [2];
  uint auStack_a0 [2];
  undefined8 uStack_98;
  int *apiStack_90 [2];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar17 = param_2[0x18];
  if (uVar17 == 0) {
    uVar29 = 1;
    param_2 = unaff_x19;
    goto LAB_10971071c;
  }
  *(undefined2 *)(param_2 + 0x2e) = 0;
  *(undefined1 *)((long)param_2 + 0x59) = 0;
  param_2[0x30] = 0;
  if (uVar17 >> 0x1a == 0) {
    uVar23 = uVar17 << 6;
    if (uVar23 < 0x4001) {
      uVar23 = 0x4000;
    }
    param_2[0x31] = uVar23;
    if (uVar17 >> 0x16 == 0) {
      uVar17 = uVar17 << 10;
      if (uVar17 < 0x4001) {
        uVar17 = 0x4000;
      }
      param_2[0x32] = uVar17;
    }
  }
  if ((*(byte *)(param_2 + 6) >> 5 & 1) == 0) {
    lStack_110 = 0;
  }
  else {
    lStack_110 = param_1;
    func_0x0001096f6e38();
    func_0x0001096f7704();
  }
  piVar31 = *(int **)(param_1 + 0x20);
  uVar29 = *(undefined8 *)(param_1 + 0x80);
  uVar2 = *(undefined4 *)(param_1 + 0x78);
  piVar13 = piVar31 + 0x68;
  unaff_x22 = *(int **)piVar13;
  iVar3 = *piVar31;
  while (0 < iVar3) {
    puVar12 = &uStack_100;
    FUN_10970d5ec(puVar12,0,piVar31,param_2 + 0xe,param_3,param_4,uVar29,uVar2,0);
    if ((int)puVar12 == 0) {
      piVar28 = (int *)&UNK_10dfe4888;
      goto LAB_10970ff2c;
    }
    if (unaff_x22 != (int *)0x0) {
      piVar25 = unaff_x22;
      do {
        piVar28 = *(int **)piVar25;
        if (((((piVar28[6] == (int)uStack_100) && (piVar28[7] == uStack_100._4_4_)) &&
             (*(long *)(piVar28 + 8) == lStack_f8)) &&
            ((*(long *)(piVar28 + 10) == lStack_f0 && (*(long *)(piVar28 + 0xc) == lStack_e8)))) &&
           (piVar28[0x10] == uStack_d8)) {
          if (uStack_d8 != 0) {
            piVar26 = (int *)(*(long *)(piVar28 + 0xe) + 8);
            piVar11 = (int *)(lStack_e0 + 8);
            uVar27 = (ulong)uStack_d8;
            do {
              if ((piVar26[-2] != piVar11[-2]) || (piVar26[-1] != piVar11[-1])) goto LAB_10970fe74;
              if (*piVar26 == 0) {
                bVar9 = piVar26[1] == -1;
              }
              else {
                bVar9 = false;
              }
              if (*piVar11 == 0) {
                bVar10 = piVar11[1] == -1;
              }
              else {
                bVar10 = false;
              }
              if (bVar9 != bVar10) goto LAB_10970fe74;
              piVar26 = piVar26 + 4;
              piVar11 = piVar11 + 4;
              uVar27 = uVar27 - 1;
            } while (uVar27 != 0);
          }
          if ((*(long *)(piVar28 + 0x11) == lStack_d4) && (*(long *)(piVar28 + 0x14) == lStack_c8))
          {
            if (*piVar28 != 0) {
              do {
                cVar7 = '\x01';
                bVar9 = (bool)ExclusiveMonitorPass(piVar28,0x10);
                if (bVar9) {
                  *piVar28 = *piVar28 + 1;
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
            }
            goto LAB_10970ff2c;
          }
        }
LAB_10970fe74:
        piVar25 = *(int **)(piVar25 + 2);
      } while (piVar25 != (int *)0x0);
    }
    piVar28 = piVar31;
    FUN_10970d848(piVar31,param_2 + 0xe,param_3,param_4,uVar29,uVar2,0);
    puVar12 = (undefined8 *)0x1;
    _calloc(1,0x10);
    if (puVar12 == (undefined8 *)0x0) goto LAB_10970ff2c;
    *puVar12 = piVar28;
    puVar12[1] = unaff_x22;
    if (*(int **)piVar13 == unaff_x22) {
      cVar7 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(piVar13,0x10);
      if (bVar9) {
        *(undefined8 **)piVar13 = puVar12;
        cVar7 = ExclusiveMonitorsStatus();
      }
      if (cVar7 == '\0') {
        if ((piVar28 != (int *)0x0) && (*piVar28 != 0)) {
          do {
            cVar7 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(piVar28,0x10);
            if (bVar9) {
              *piVar28 = *piVar28 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
        }
        goto LAB_10970ff2c;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    FUN_1096f8ed0(piVar28);
    _free(puVar12);
    unaff_x22 = *(int **)(piVar31 + 0x68);
    iVar3 = *piVar31;
  }
  FUN_10970d848(piVar31,param_2 + 0xe,param_3,param_4,uVar29,uVar2,0);
  piVar28 = piVar31;
LAB_10970ff2c:
  if (param_2[0x18] == 0) {
LAB_10970ffa8:
    if (param_2[0xc] == 1) {
      param_2[0xc] = 2;
    }
    bVar9 = false;
    uVar29 = 1;
  }
  else {
    if ((0 < *piVar28) && (*(code **)(piVar28 + 0x14) == FUN_109704d68)) {
      plVar1 = (long *)(param_1 + 0xb0);
      do {
        while( true ) {
          if (*plVar1 != 0) goto LAB_10970ff90;
          if (*(long *)(param_1 + 0xa8) == 0) goto LAB_10970ff54;
          if (*plVar1 == 0) break;
          ClearExclusiveLocal();
        }
        cVar7 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar9) {
          *plVar1 = 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
LAB_10970ff90:
      FUN_109704d68(piVar28,param_1,param_2,param_3,param_4);
      goto LAB_10970ffa8;
    }
LAB_10970ff54:
    uVar29 = 0;
    bVar9 = true;
  }
  if (param_2[0x32] < 1) {
    *(undefined1 *)((long)param_2 + 0x59) = 1;
  }
  FUN_1096f8ed0();
  if (lStack_110 == 0) goto LAB_10971070c;
  if (bVar9) goto LAB_109710018;
  if ((((char)param_2[0x16] != '\x01') || ((*(byte *)((long)param_2 + 0x59) & 1) != 0)) ||
     (*(char *)(lStack_110 + 0x58) != '\x01')) goto LAB_109710700;
  uVar17 = param_2[7];
  if (uVar17 < 2) {
    if ((uint)param_2[0x18] < 2) {
      bVar9 = true;
    }
    else {
      lVar22 = (ulong)(uint)param_2[0x18] - 1;
      puVar20 = (uint *)(*(long *)(param_2 + 0x1c) + 0x1c);
      uVar23 = *(uint *)(*(long *)(param_2 + 0x1c) + 8);
      do {
        uVar14 = *puVar20;
        bVar10 = ((param_2[0xe] & 0xfffffffdU) != 4) != uVar23 < uVar14;
        bVar9 = uVar23 == uVar14 || bVar10;
        if (uVar23 != uVar14 && !bVar10) {
          piVar28 = param_2;
          FUN_1096f5e24(param_2,param_1,&UNK_10f57ebb9);
          uVar17 = param_2[7];
          break;
        }
        lVar22 = lVar22 + -1;
        puVar20 = puVar20 + 5;
        uVar23 = uVar14;
      } while (lVar22 != 0);
      if (1 < uVar17) goto LAB_1097100a8;
    }
    func_0x0001096f6e38();
    unaff_x22 = piVar28;
    FUN_1096f6068();
    if (piVar28[1] != 0) {
      piVar28[6] = piVar28[6] & 0xffffffdf;
    }
    func_0x0001096f6e38();
    FUN_1096f6068();
    if (unaff_x22[1] != 0) {
      unaff_x22[6] = unaff_x22[6] & 0xffffffdf;
    }
    uVar17 = param_2[0x18];
    if (1 < uVar17 + 1) {
      lVar24 = *(long *)(param_2 + 0x1c);
      uVar4 = *(uint *)(lStack_110 + 0x60);
      lVar22 = *(long *)(lStack_110 + 0x70);
      uVar23 = param_2[0xe] & 0xfffffffd;
      uVar14 = uVar4;
      if (uVar23 == 4) {
        uVar14 = 0;
      }
      uVar32 = (ulong)uVar14;
      uVar30 = 1;
      uVar27 = uVar32;
      do {
        if ((uVar17 <= uVar30) ||
           ((lVar18 = lVar24 + uVar30 * 0x14, *(int *)(lVar18 + 8) != *(int *)(lVar18 + -0xc) &&
            ((*(byte *)(lVar24 + (ulong)((int)uVar30 - (uint)(uVar23 != 4)) * 0x14 + 4) & 1) == 0)))
           ) {
          if (uVar30 == uVar17) {
            uVar14 = (uint)uVar27;
            if (uVar23 == 4) {
              uVar14 = uVar4;
            }
            uVar5 = 0;
            if (uVar23 == 4) {
              uVar5 = (uint)uVar32;
            }
            uVar32 = (ulong)uVar5;
            uVar15 = (ulong)uVar14;
          }
          else {
            uVar15 = uVar27;
            if (uVar23 == 4) {
              if ((uint)uVar27 < uVar4) {
                puVar20 = (uint *)(lVar22 + 8 + uVar27 * 0x14);
                do {
                  uVar15 = uVar27;
                  if (*(uint *)(lVar24 + uVar30 * 0x14 + 8) <= *puVar20) break;
                  uVar27 = uVar27 + 1;
                  puVar20 = puVar20 + 5;
                  uVar15 = (ulong)uVar4;
                } while (uVar4 != uVar27);
              }
            }
            else {
              lVar18 = uVar32 * 0x14;
              uVar32 = (ulong)((uint)uVar32 + 1);
              do {
                if (lVar18 == 0) {
                  uVar32 = 0;
                  break;
                }
                puVar20 = (uint *)(lVar22 + -0xc + lVar18);
                uVar32 = (ulong)((int)uVar32 - 1);
                lVar18 = lVar18 + -0x14;
              } while (*(uint *)(lVar24 + uVar30 * 0x14 + -0xc) <= *puVar20);
            }
          }
          if (piVar28[1] != 0) {
            piVar28[0xc] = 0;
            piVar28[0x10] = 0;
            piVar28[0x11] = 0;
            piVar28[0xe] = 0;
            piVar28[0xf] = 0;
            piVar28[0x14] = 0;
            piVar28[0x15] = 0;
            piVar28[0x12] = 0;
            piVar28[0x13] = 0;
            *(undefined1 *)(piVar28 + 0x16) = 1;
            *(undefined8 *)((long)piVar28 + 0x59) = 0;
            piVar28[0x18] = 0;
            piVar28[0x19] = 0;
            *(undefined8 *)(piVar28 + 0x1e) = *(undefined8 *)(piVar28 + 0x1c);
            piVar28[0x24] = 0;
            piVar28[0x25] = 0;
            piVar28[0x22] = 0;
            piVar28[0x23] = 0;
            piVar28[0x28] = 0;
            piVar28[0x29] = 0;
            piVar28[0x26] = 0;
            piVar28[0x27] = 0;
            piVar28[0x2c] = 0;
            piVar28[0x2d] = 0;
            piVar28[0x2a] = 0;
            piVar28[0x2b] = 0;
            *(undefined2 *)(piVar28 + 0x2e) = 0;
            piVar28[0x2f] = 1;
            piVar28[0x30] = 0;
          }
          if (piVar28[1] != 0) {
            uVar14 = piVar28[6];
            if ((uint)uVar32 != 0) {
              uVar14 = piVar28[6] & 0xfffffffe;
            }
            uVar5 = uVar14 & 0xfffffffd;
            if (uVar4 <= (uint)uVar15) {
              uVar5 = uVar14;
            }
            piVar28[6] = uVar5;
          }
          func_0x0001096f7704(piVar28,lStack_110,uVar32,uVar15);
          lVar18 = param_1;
          FUN_10970fc5c(param_1,piVar28,param_3,param_4,0);
          if ((((int)lVar18 == 0) || ((*(byte *)(piVar28 + 0x16) & 1) != 0)) ||
             ((*(byte *)((long)piVar28 + 0x59) & 1) != 0)) {
            bVar8 = 1;
            goto LAB_1097103d0;
          }
          func_0x0001096f7704(unaff_x22,piVar28,0,0xffffffff);
          uVar14 = (uint)uVar32;
          if (uVar23 == 4) {
            uVar14 = (uint)uVar15;
          }
          uVar32 = (ulong)uVar14;
          uVar27 = uVar32;
        }
        uVar30 = uVar30 + 1;
      } while (uVar30 != uVar17 + 1);
    }
    if ((char)unaff_x22[0x16] == '\x01') {
      piVar13 = unaff_x22;
      FUN_1096f7b98(unaff_x22,param_2);
      if (((ulong)piVar13 & 0xffffffbf) == 0) {
        bVar8 = 1;
      }
      else {
        FUN_1096f5e24(param_2,param_1,&UNK_10f57ebe9);
        if (param_2[1] != 0) {
          param_2[0x18] = 0;
          param_2[0xc] = 0;
          param_2[0x2c] = 0;
          param_2[0x2d] = 0;
        }
        func_0x0001096f7704(param_2,unaff_x22,0,0xffffffff);
        bVar8 = 0;
      }
    }
    else {
      bVar8 = 1;
    }
LAB_1097103d0:
    func_0x0001096f6e98(unaff_x22);
    func_0x0001096f6e98();
  }
  else {
    bVar9 = true;
LAB_1097100a8:
    bVar8 = 1;
  }
  bVar9 = (bool)(bVar9 & bVar8);
  if ((*(byte *)(param_2 + 6) >> 6 & 1) != 0) {
    if ((uint)param_2[7] < 2) {
      func_0x0001096f6e38();
      unaff_x22 = piVar28;
      FUN_1096f6068();
      apiStack_90[0] = piVar28;
      func_0x0001096f6e38();
      piVar13 = unaff_x22;
      FUN_1096f6068();
      if (piVar28[1] != 0) {
        piVar28[6] = piVar28[6] & 0xffffffdf;
      }
      if (unaff_x22[1] != 0) {
        unaff_x22[6] = unaff_x22[6] & 0xffffffdf;
      }
      apiStack_90[1] = unaff_x22;
      func_0x0001096f6e38();
      FUN_1096f6068();
      if (piVar13[1] != 0) {
        piVar13[6] = piVar13[6] & 0xffffffdf;
      }
      lStack_f8 = *(long *)(param_2 + 0x10);
      uStack_100 = *(undefined8 *)(param_2 + 0xe);
      lStack_e8 = *(long *)(param_2 + 0x14);
      lStack_f0 = *(long *)(param_2 + 0x12);
      if (piVar28[1] != 0) {
        *(long *)(piVar28 + 0x10) = lStack_f8;
        *(undefined8 *)(piVar28 + 0xe) = uStack_100;
        *(long *)(piVar28 + 0x14) = lStack_e8;
        *(long *)(piVar28 + 0x12) = lStack_f0;
      }
      if (unaff_x22[1] != 0) {
        *(long *)(unaff_x22 + 0x10) = lStack_f8;
        *(undefined8 *)(unaff_x22 + 0xe) = uStack_100;
        *(long *)(unaff_x22 + 0x14) = lStack_e8;
        *(long *)(unaff_x22 + 0x12) = lStack_f0;
      }
      if (piVar13[1] != 0) {
        *(long *)(piVar13 + 0x10) = lStack_f8;
        *(undefined8 *)(piVar13 + 0xe) = uStack_100;
        *(long *)(piVar13 + 0x14) = lStack_e8;
        *(long *)(piVar13 + 0x12) = lStack_f0;
      }
      uVar17 = param_2[0x18];
      uVar30 = (ulong)uVar17;
      lVar22 = *(long *)(param_2 + 0x1c);
      uVar23 = *(uint *)(lStack_110 + 0x60);
      uVar27 = (ulong)uVar23;
      lVar24 = *(long *)(lStack_110 + 0x70);
      uVar14 = param_2[0xe] & 0xfffffffd;
      if ((param_2[0xe] & 0xfffffffdU) != 4) {
        FUN_1096f7004(param_2,0,uVar30);
      }
      uVar17 = uVar17 + 1;
      if (1 < uVar17) {
        lVar18 = 0;
        uVar19 = 0;
        uVar32 = 1;
        uVar15 = 0;
        do {
          if ((uVar30 <= uVar32) ||
             ((lVar21 = lVar22 + uVar32 * 0x14, uVar16 = uVar15,
              *(int *)(lVar21 + 8) != *(int *)(lVar21 + -0xc) &&
              ((*(byte *)(lVar21 + 4) >> 1 & 1) == 0)))) {
            uVar16 = uVar27;
            if ((uVar32 != uVar30) && (uVar16 = uVar19, (uint)uVar19 < uVar23)) {
              uVar33 = uVar19 & 0xffffffff;
              puVar20 = (uint *)(lVar24 + 8 + (uVar19 & 0xffffffff) * 0x14);
              do {
                uVar16 = uVar33;
                if (*(uint *)(lVar22 + uVar32 * 0x14 + 8) <= *puVar20) break;
                uVar33 = uVar33 + 1;
                puVar20 = puVar20 + 5;
                uVar16 = uVar27;
              } while (uVar27 != uVar33);
            }
            func_0x0001096f7704(apiStack_90[lVar18],lStack_110,uVar15,uVar16);
            lVar18 = 1 - lVar18;
            uVar19 = uVar16;
          }
          uVar32 = uVar32 + 1;
          uVar15 = uVar16;
        } while (uVar32 != uVar17);
      }
      lVar22 = param_1;
      FUN_10970fc5c(param_1,piVar28,param_3,param_4,0);
      if ((int)lVar22 == 0) {
        bVar8 = 1;
      }
      else if (((((char)piVar28[0x16] == '\x01') && ((*(byte *)((long)piVar28 + 0x59) & 1) == 0)) &&
               (lVar22 = param_1, FUN_10970fc5c(param_1,unaff_x22,param_3,param_4,0),
               (int)lVar22 != 0)) &&
              (((char)unaff_x22[0x16] == '\x01' && ((*(byte *)((long)unaff_x22 + 0x59) & 1) == 0))))
      {
        if (uVar14 != 4) {
          FUN_1096f7004(piVar28,0,piVar28[0x18]);
          FUN_1096f7004(unaff_x22,0,unaff_x22[0x18]);
        }
        uStack_98 = 0;
        uVar17 = piVar28[0x18];
        uVar23 = unaff_x22[0x18];
        auStack_a0[0] = uVar17;
        auStack_a0[1] = uVar23;
        alStack_b0[0] = *(long *)(piVar28 + 0x1c);
        alStack_b0[1] = *(undefined8 *)(unaff_x22 + 0x1c);
        if (uVar17 != 0 || uVar23 != 0) {
          uVar27 = 0;
          do {
            uVar5 = *(uint *)((long)&uStack_98 + uVar27 * 4);
            uVar6 = auStack_a0[uVar27];
            uVar4 = uVar5 + 1;
            uVar30 = (ulong)uVar4;
            if (uVar4 < uVar6) {
              piVar31 = (int *)(alStack_b0[uVar27] + (ulong)uVar4 * 0x14 + 8);
              uVar32 = (ulong)uVar5;
              uVar15 = (ulong)uVar4;
              do {
                if ((*piVar31 != *(int *)(alStack_b0[uVar27] + (uVar32 & 0xffffffff) * 0x14 + 8)) &&
                   (uVar30 = uVar15, (*(byte *)(piVar31 + -1) >> 1 & 1) == 0)) break;
                uVar19 = uVar15 + 1;
                piVar31 = piVar31 + 5;
                uVar32 = uVar15;
                uVar30 = (ulong)uVar6;
                uVar15 = uVar19;
              } while (uVar6 != (uint)uVar19);
            }
            func_0x0001096f7704(piVar13,apiStack_90[uVar27],(ulong)uVar5,uVar30);
            *(int *)((long)&uStack_98 + uVar27 * 4) = (int)uVar30;
            uVar27 = uVar27 ^ 1;
          } while ((uint)uStack_98 < uVar17 || uStack_98._4_4_ < uVar23);
        }
        if (uVar14 != 4) {
          FUN_1096f7004(param_2,0,param_2[0x18]);
          FUN_1096f7004(piVar13,0,piVar13[0x18]);
        }
        if (((char)piVar13[0x16] == '\x01') &&
           (piVar31 = piVar13, FUN_1096f7b98(piVar13,param_2), ((ulong)piVar31 & 0xffffffbf) != 0))
        {
          FUN_1096f5e24(param_2,param_1,&UNK_10f57ec1b);
          if (param_2[1] != 0) {
            param_2[0x18] = 0;
            param_2[0xc] = 0;
            param_2[0x2c] = 0;
            param_2[0x2d] = 0;
          }
          func_0x0001096f7704(param_2,piVar13,0,0xffffffff);
          bVar8 = 0;
        }
        else {
          bVar8 = 1;
        }
      }
      else {
        bVar8 = 1;
      }
      func_0x0001096f6e98(piVar13);
      func_0x0001096f6e98(piVar28);
      func_0x0001096f6e98(unaff_x22);
    }
    else {
      bVar8 = 1;
    }
    bVar9 = (bool)(bVar9 & bVar8);
  }
  if (bVar9) {
LAB_109710700:
    uVar29 = 1;
    goto LAB_109710704;
  }
  iVar3 = *(int *)(lStack_110 + 0x60);
  uVar23 = iVar3 * 10 + 0x10;
  uVar17 = uVar23 & ((int)uVar23 >> 0x1f ^ 0xffffffffU);
  if ((int)uVar23 < 1) {
    unaff_x22 = (int *)0x0;
  }
  else {
    uVar14 = 0;
    do {
      uVar14 = uVar14 + (uVar14 >> 1) + 8;
    } while (uVar14 < uVar17);
    unaff_x22 = (int *)0x0;
    FUN_109744e6c();
    if (unaff_x22 == (int *)0x0) goto LAB_109710458;
    _bzero(unaff_x22,uVar17);
  }
  FUN_1096f5cdc(lStack_110,iVar3,unaff_x22,uVar17,&uStack_100);
  FUN_1096f5e24(param_2,param_1,&UNK_10f57ea26);
  if (0 < (int)uVar23) goto LAB_109710458;
LAB_109710018:
  while( true ) {
    uVar29 = 0;
LAB_109710704:
    func_0x0001096f6e98(lStack_110);
LAB_10971070c:
    param_2[0x31] = 0x3fffffff;
    param_2[0x32] = 0x1fffffff;
    *(undefined2 *)(param_2 + 0x2e) = 0;
LAB_10971071c:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) break;
    ___stack_chk_fail();
LAB_109710458:
    _free(unaff_x22);
  }
  return uVar29;
}



/* Entry: 109710978; end: 109710a1b;  */

void FUN_109710978(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = param_1 + 0x70;
  FUN_10971e4f0();
  puVar1 = &UNK_10dfe4888;
  if (5 < *(uint *)(lVar2 + 0x18)) {
    puVar1 = *(undefined **)(lVar2 + 0x10);
  }
  *(uint *)(param_1 + 0x18) =
       (uint)(*(ushort *)(puVar1 + 4) >> 8) | (*(ushort *)(puVar1 + 4) & 0xff00ff) << 8;
  return;
}



/* Entry: 109710a1c; end: 109710b2b;  */

ulong FUN_109710a1c(ulong param_1,long param_2,undefined8 param_3,int param_4)

{
  ulong uVar1;
  float fVar2;
  long alStack_98 [2];
  float *pfStack_88;
  undefined1 uStack_80;
  undefined8 uStack_7c;
  undefined8 uStack_74;
  float afStack_68 [3];
  float fStack_5c;
  float fStack_4c;
  float fStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((uint)param_3 < *(uint *)(param_1 + 0x1c)) {
    if (*(int *)(param_2 + 0x78) != 0) {
      uStack_74 = 0xff7fffffff7fffff;
      uStack_7c = 0x7f7fffff7f7fffff;
      alStack_98[1] = 0;
      pfStack_88 = afStack_68;
      uStack_80 = 0;
      uVar1 = param_1;
      alStack_98[0] = param_2;
      FUN_10971f824(param_1,param_2,param_3,alStack_98);
      if ((uVar1 & 1) != 0) {
        if (param_4 != 0) {
          fStack_5c = fStack_4c;
          afStack_68[0] = fStack_40;
        }
        fVar2 = (float)(int)((fStack_5c - afStack_68[0]) + 0.5);
        if (fVar2 < 0.0) {
          fVar2 = 0.0;
        }
        fVar2 = (float)NEON_fminnm(fVar2,0x4f000000);
        uVar1 = (ulong)(uint)(int)fVar2;
        goto LAB_109710af4;
      }
    }
    if (param_4 == 0) {
      uVar1 = *(ulong *)(param_1 + 8);
      func_0x00010971e860(uVar1,param_3);
    }
    else {
      uVar1 = *(ulong *)(param_1 + 0x10);
      FUN_10971f318(uVar1,param_3);
    }
  }
  else {
    uVar1 = 0;
  }
LAB_109710af4:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return uVar1;
  }
  ___stack_chk_fail();
  return 0;
}



/* Entry: 109710b2c; end: 109710c0b;  */

undefined8 FUN_109710b2c(void)

{
  return 0;
}



/* Entry: 109710c0c; end: 109710c47;  */

long FUN_109710c0c(long param_1)

{
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_1096f5a5c();
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  return param_1;
}



/* Entry: 109710c48; end: 109710c83;  */

void FUN_109710c48(int *param_1)

{
  if (*param_1 != 0) {
    FUN_109710c84(param_1,0);
    _free(*(undefined8 *)(param_1 + 2));
  }
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}



/* Entry: 109710c84; end: 109710ceb;  */

void FUN_109710c84(long param_1,uint param_2)

{
  uint uVar1;
  int *piVar2;
  bool bVar3;
  int *piVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 4);
  if (uVar1 != param_2) {
    iVar5 = param_2 - uVar1;
    piVar2 = (int *)(*(long *)(param_1 + 8) + (ulong)uVar1 * 0x10);
    do {
      piVar4 = piVar2 + -4;
      if (*piVar4 != 0) {
        piVar2[-3] = 0;
        _free(*(undefined8 *)(piVar2 + -2));
      }
      piVar4[0] = 0;
      piVar4[1] = 0;
      piVar2[-2] = 0;
      piVar2[-1] = 0;
      bVar3 = iVar5 != -1;
      iVar5 = iVar5 + 1;
      piVar2 = piVar4;
    } while (bVar3);
  }
  *(uint *)(param_1 + 4) = param_2;
  return;
}



/* Entry: 109710cec; end: 109710ea7;  */

uint FUN_109710cec(float param_1,ushort *param_2,long param_3)

{
  long lVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  ulong uVar7;
  uint uVar8;
  uint *puVar9;
  float fVar10;
  float fVar11;
  
  uVar5 = (uint)(*param_2 >> 8) | (*param_2 & 0xff00ff) << 8;
  uVar7 = (ulong)uVar5;
  if (uVar5 != 0) {
    pbVar6 = (byte *)((long)param_2 + 0xf);
    do {
      uVar5 = (*(uint *)(pbVar6 + -7) & 0xff00ff00) >> 8 | (*(uint *)(pbVar6 + -7) & 0xff00ff) << 8;
      if ((float)(int)(uVar5 >> 0x10 | uVar5 << 0x10) / 65536.0 == 0.0) {
        uVar5 = (uint)(param_2[1] >> 8) | (param_2[1] & 0xff00ff) << 8;
        if (uVar5 == 0) {
          return 0;
        }
        if (uVar5 == 1) {
          pbVar6 = (byte *)(param_3 + (ulong)pbVar6[-1] * 0x100 + (ulong)*pbVar6);
          return (int)(short)((ushort)*pbVar6 << 8) | (uint)pbVar6[1];
        }
        lVar1 = param_3 + (ulong)*(byte *)((long)param_2 + 5) * 0x10000 +
                (ulong)(byte)param_2[2] * 0x1000000 + (ulong)(byte)param_2[3] * 0x100 +
                (ulong)*(byte *)((long)param_2 + 7);
        uVar8 = uVar5 - 1;
        if (uVar8 == 0) goto LAB_109710de8;
        uVar7 = 0;
        puVar9 = (uint *)(param_3 +
                         (ulong)(byte)param_2[2] * 0x1000000 +
                         (ulong)*(byte *)((long)param_2 + 5) * 0x10000 +
                         (ulong)(byte)param_2[3] * 0x100 + (ulong)*(byte *)((long)param_2 + 7));
        goto LAB_109710db4;
      }
      pbVar6 = pbVar6 + 8;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  return 0;
LAB_109710db4:
  puVar2 = puVar9;
  if (uVar5 <= uVar7) {
    puVar2 = (uint *)&UNK_10dfe4888;
  }
  uVar3 = (*puVar2 & 0xff00ff00) >> 8 | (*puVar2 & 0xff00ff) << 8;
  if (param_1 <= (float)(int)(uVar3 >> 0x10 | uVar3 << 0x10) / 65536.0) {
    uVar8 = (uint)uVar7;
    goto LAB_109710de8;
  }
  uVar7 = uVar7 + 1;
  puVar9 = puVar9 + 1;
  if (uVar8 == uVar7) {
LAB_109710de8:
    uVar3 = 0;
    if (uVar8 != 0) {
      uVar3 = uVar8 - 1;
    }
    puVar9 = (uint *)(lVar1 + (ulong)uVar3 * 4);
    if (uVar5 <= uVar3) {
      puVar9 = (uint *)&UNK_10dfe4888;
    }
    uVar8 = (*puVar9 & 0xff00ff00) >> 8 | (*puVar9 & 0xff00ff) << 8;
    fVar10 = (float)(int)(uVar8 >> 0x10 | uVar8 << 0x10) / 65536.0;
    uVar8 = uVar3 + 1;
    puVar9 = (uint *)(lVar1 + (ulong)uVar8 * 4);
    if (uVar5 <= uVar8) {
      puVar9 = (uint *)&UNK_10dfe4888;
    }
    uVar4 = (*puVar9 & 0xff00ff00) >> 8 | (*puVar9 & 0xff00ff) << 8;
    fVar11 = (float)(int)(uVar4 >> 0x10 | uVar4 << 0x10) / 65536.0;
    if (fVar10 == fVar11) {
      fVar10 = 0.0;
    }
    else {
      fVar10 = (param_1 - fVar10) / (fVar11 - fVar10);
    }
    lVar1 = param_3 + (ulong)pbVar6[-1] * 0x100 + (ulong)*pbVar6;
    puVar9 = (uint *)(lVar1 + (ulong)uVar8 * 2);
    if (uVar5 <= uVar8) {
      puVar9 = (uint *)&UNK_10dfe4888;
    }
    puVar2 = (uint *)(lVar1 + (ulong)uVar3 * 2);
    if (uVar5 <= uVar3) {
      puVar2 = (uint *)&UNK_10dfe4888;
    }
    return (int)((1.0 - fVar10) * (float)(int)(short)((ushort)*puVar2 >> 8 | (ushort)*puVar2 << 8) +
                 (float)(int)(short)((ushort)*puVar9 >> 8 | (ushort)*puVar9 << 8) * fVar10 + 0.5);
  }
  goto LAB_109710db4;
}



/* Entry: 109710ea8; end: 109711153;  */

void FUN_109710ea8(long param_1,uint param_2,uint param_3,uint param_4,uint param_5,int param_6)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  uint *puVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  
  uVar1 = *(uint *)(param_1 + 0x60);
  if (param_4 <= *(uint *)(param_1 + 0x60)) {
    uVar1 = param_4;
  }
  uVar8 = (ulong)uVar1;
  if (((param_5 != 0) && (param_6 == 0)) && (uVar1 - param_3 < 2)) {
    return;
  }
  *(uint *)(param_1 + 0xc0) = *(uint *)(param_1 + 0xc0) | 0x20;
  if ((param_6 == 0) || ((*(byte *)(param_1 + 0x5a) & 1) == 0)) {
    if ((param_5 & 1) == 0) {
      if (uVar1 <= param_3) {
        return;
      }
      lVar7 = uVar8 - param_3;
      puVar5 = (uint *)(*(long *)(param_1 + 0x70) + (ulong)param_3 * 0x14 + 4);
      do {
        *puVar5 = *puVar5 | param_2;
        lVar7 = lVar7 + -1;
        puVar5 = puVar5 + 5;
      } while (lVar7 != 0);
      return;
    }
    lVar7 = *(long *)(param_1 + 0x70);
    if (uVar1 != param_3) {
      if (*(int *)(param_1 + 0x1c) != 2) {
        uVar10 = *(uint *)(lVar7 + (ulong)param_3 * 0x14 + 8);
        uVar9 = *(uint *)(lVar7 + (ulong)(uVar1 - 1) * 0x14 + 8);
        if (uVar9 <= uVar10) {
          uVar10 = uVar9;
        }
        goto LAB_109711140;
      }
      if (param_3 < uVar1) {
        lVar3 = uVar8 - param_3;
        uVar10 = 0xffffffff;
        puVar5 = (uint *)(lVar7 + (ulong)param_3 * 0x14 + 8);
        do {
          if (*puVar5 <= uVar10) {
            uVar10 = *puVar5;
          }
          lVar3 = lVar3 + -1;
          puVar5 = puVar5 + 5;
        } while (lVar3 != 0);
        goto LAB_109711140;
      }
    }
    uVar10 = 0xffffffff;
    goto LAB_109711140;
  }
  if ((param_5 & 1) == 0) {
    if (param_3 < *(uint *)(param_1 + 100)) {
      lVar7 = (ulong)*(uint *)(param_1 + 100) - (ulong)param_3;
      puVar5 = (uint *)(*(long *)(param_1 + 0x78) + (ulong)param_3 * 0x14 + 4);
      do {
        *puVar5 = *puVar5 | param_2;
        lVar7 = lVar7 + -1;
        puVar5 = puVar5 + 5;
      } while (lVar7 != 0);
    }
    uVar10 = *(uint *)(param_1 + 0x5c);
    if (uVar1 <= uVar10) {
      return;
    }
    lVar7 = uVar8 - uVar10;
    puVar5 = (uint *)(*(long *)(param_1 + 0x70) + (ulong)uVar10 * 0x14 + 4);
    do {
      *puVar5 = *puVar5 | param_2;
      lVar7 = lVar7 + -1;
      puVar5 = puVar5 + 5;
    } while (lVar7 != 0);
    return;
  }
  uVar10 = *(uint *)(param_1 + 0x5c);
  if (uVar10 == uVar1) {
LAB_1097110a4:
    uVar9 = 0xffffffff;
  }
  else {
    lVar7 = *(long *)(param_1 + 0x70);
    if (*(int *)(param_1 + 0x1c) == 2) {
      if (uVar1 <= uVar10) goto LAB_1097110a4;
      lVar3 = uVar8 - uVar10;
      uVar9 = 0xffffffff;
      puVar5 = (uint *)(lVar7 + (ulong)uVar10 * 0x14 + 8);
      do {
        if (*puVar5 <= uVar9) {
          uVar9 = *puVar5;
        }
        lVar3 = lVar3 + -1;
        puVar5 = puVar5 + 5;
      } while (lVar3 != 0);
    }
    else {
      uVar9 = *(uint *)(lVar7 + (ulong)uVar10 * 0x14 + 8);
      uVar10 = *(uint *)(lVar7 + (ulong)(uVar1 - 1) * 0x14 + 8);
      if (uVar10 <= uVar9) {
        uVar9 = uVar10;
      }
    }
  }
  lVar7 = *(long *)(param_1 + 0x78);
  uVar2 = *(uint *)(param_1 + 100);
  uVar10 = uVar9;
  if (uVar2 != param_3) {
    if (*(int *)(param_1 + 0x1c) == 2) {
      if (param_3 < uVar2) {
        lVar3 = (ulong)uVar2 - (ulong)param_3;
        puVar5 = (uint *)(lVar7 + (ulong)param_3 * 0x14 + 8);
        do {
          if (*puVar5 <= uVar10) {
            uVar10 = *puVar5;
          }
          lVar3 = lVar3 + -1;
          puVar5 = puVar5 + 5;
        } while (lVar3 != 0);
      }
    }
    else {
      uVar10 = *(uint *)(lVar7 + (ulong)param_3 * 0x14 + 8);
      uVar2 = *(uint *)(lVar7 + (ulong)(uVar2 - 1) * 0x14 + 8);
      if (uVar2 <= uVar10) {
        uVar10 = uVar2;
      }
      if (uVar9 <= uVar10) {
        uVar10 = uVar9;
      }
    }
  }
  FUN_109711154(param_1);
  lVar7 = *(long *)(param_1 + 0x70);
  param_3 = *(uint *)(param_1 + 0x5c);
LAB_109711140:
  if (uVar1 != param_3) {
    uVar4 = (ulong)param_3;
    if (*(int *)(param_1 + 0x1c) != 2) {
      uVar9 = *(uint *)(lVar7 + (ulong)(uVar1 - 1) * 0x14 + 8);
      uVar2 = *(uint *)(lVar7 + uVar4 * 0x14 + 8);
      if (uVar2 == uVar10 || uVar9 == uVar10) {
        if (uVar2 != uVar10) {
          iVar6 = uVar1 - param_3;
          if (uVar1 < param_3 || iVar6 == 0) {
            return;
          }
          puVar5 = (uint *)(lVar7 + uVar4 * 0x14 + 4);
          do {
            if (puVar5[1] == uVar9) {
              return;
            }
            *(uint *)(param_1 + 0xc0) = *(uint *)(param_1 + 0xc0) | 0x20;
            *puVar5 = *puVar5 | param_2;
            iVar6 = iVar6 + -1;
            puVar5 = puVar5 + 5;
          } while (iVar6 != 0);
          return;
        }
        if (uVar1 <= param_3) {
          return;
        }
        puVar5 = (uint *)(lVar7 + uVar8 * 0x14 + -0x10);
        do {
          if (puVar5[1] == uVar10) {
            return;
          }
          uVar8 = uVar8 - 1;
          *(uint *)(param_1 + 0xc0) = *(uint *)(param_1 + 0xc0) | 0x20;
          *puVar5 = *puVar5 | param_2;
          puVar5 = puVar5 + -5;
        } while (uVar4 < uVar8);
        return;
      }
    }
    if (param_3 < uVar1) {
      lVar3 = uVar8 - uVar4;
      puVar5 = (uint *)(lVar7 + uVar4 * 0x14 + 4);
      do {
        if (puVar5[1] != uVar10) {
          *(uint *)(param_1 + 0xc0) = *(uint *)(param_1 + 0xc0) | 0x20;
          *puVar5 = *puVar5 | param_2;
        }
        puVar5 = puVar5 + 5;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
  }
  return;
}


