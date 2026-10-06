/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10ac08c50; end: 10ac08c9f;  */

void FUN_10ac08c50(long *param_1,long *param_2)

{
  long lVar1;
  
  if (*param_1 != 0) {
    param_1[1] = *param_1;
    __ZdlPv();
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  lVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = lVar1;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return;
}



/* Entry: 10ac08ca0; end: 10ac08cfb;  */

long * FUN_10ac08ca0(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    FUN_10ac08cfc(plVar1 + 2);
    __ZdlPv(plVar1);
    plVar1 = (long *)lVar2;
  }
  lVar2 = *param_1;
  *param_1 = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10ac08cfc; end: 10ac08f3f;  */

void FUN_10ac08cfc(long param_1)

{
  FUN_10abffbec(param_1 + 0x18);
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
    return;
  }
  return;
}



/* Entry: 10ac08f40; end: 10ac08fa3;  */

long FUN_10ac08f40(long param_1,long param_2)

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
      (**(code **)(*(long *)*plVar1 + 0x18))((long *)*plVar1,param_1);
      return param_1;
    }
    *(long *)(param_1 + 0x18) = lVar2;
  }
  *plVar1 = 0;
  return param_1;
}



/* Entry: 10ac08fa4; end: 10ac08fa7;  */

void FUN_10ac08fa4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10ac08fa8; end: 10ac08fbb;  */

void FUN_10ac08fa8(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac08fbc; end: 10ac08fbf;  */

void FUN_10ac08fbc(void)

{
  return;
}



/* Entry: 10ac08fc0; end: 10ac08ff7;  */

undefined8 FUN_10ac08fc0(undefined8 param_1,undefined8 param_2)

{
  FUN_10a042ab0(param_2,&PTR_DAT_110c557f0);
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10ac08ff8; end: 10ac08ffb;  */

void FUN_10ac08ff8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac08ffc; end: 10ac09077;  */

void FUN_10ac08ffc(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    param_1[1] = lVar1;
    _free(*(undefined8 *)(lVar1 + -8));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10ac09078; end: 10ac090e7;  */

void FUN_10ac09078(long param_1)

{
  long lVar1;
  long lVar2;
  long lStack_38;
  
  lVar2 = *(long *)(param_1 + 0xe0);
  if (lVar2 != 0) {
    lVar1 = param_1 + lVar2 * 0x20 + 200;
    do {
      lVar2 = lVar2 + -1;
      func_0x00010a05248c(lVar1 + 0x10);
      func_0x00010a061678(lVar1);
      lVar1 = lVar1 + -0x20;
    } while (lVar2 != 0);
  }
  lStack_38 = param_1 + 200;
  FUN_10a1901f0(&lStack_38);
  __ZdlPv(param_1);
  return;
}



/* Entry: 10ac090e8; end: 10ac091a7;  */

void FUN_10ac090e8(long param_1)

{
  long *plVar1;
  long lVar2;
  long lStack_28;
  
  if (*(long *)(param_1 + 0x58) != 0) {
    *(long *)(param_1 + 0x60) = *(long *)(param_1 + 0x58);
    __ZdlPv();
  }
  plVar1 = *(long **)(param_1 + 0x50);
  if (plVar1 == (long *)(param_1 + 0x38)) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_10ac09138;
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
LAB_10ac09138:
  lStack_28 = param_1 + 8;
  FUN_10abd5254(&lStack_28);
  __ZdlPv(param_1);
  return;
}



/* Entry: 10ac091a8; end: 10ac09cc7;  */

/* WARNING: Possible PIC construction at 0x00010ac09a3c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010ac09a40) */

void FUN_10ac091a8(ulong *param_1,ulong *param_2,ulong *param_3,ulong param_4,ulong *param_5,
                  long param_6)

{
  code *pcVar1;
  undefined1 *puVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong *puVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long unaff_x19;
  ulong *puVar12;
  ulong *puVar13;
  long unaff_x20;
  ulong uVar14;
  ulong uVar15;
  ulong *unaff_x21;
  ulong uVar16;
  ulong uVar17;
  ulong *unaff_x22;
  long lVar18;
  ulong *puVar19;
  ulong *puVar20;
  ulong *unaff_x23;
  long lVar21;
  long lVar22;
  long unaff_x24;
  long unaff_x25;
  ulong *unaff_x26;
  long unaff_x27;
  long unaff_x28;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  if (1 < param_4) {
    if (param_4 == 2) {
      uVar14 = param_2[-1];
      lVar21 = *(long *)param_3[1];
      uVar9 = (((long *)param_3[1])[1] - lVar21 >> 3) * 0xf83e0f83e0f83e1;
      if ((uVar9 < uVar14 || uVar9 - uVar14 == 0) ||
         (uVar16 = *param_1, uVar9 < uVar16 || uVar9 - uVar16 == 0)) {
LAB_10ac094bc:
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10ac094c0);
        (*pcVar1)();
      }
      uVar9 = *param_3;
      FUN_10abf6d70(uVar9,lVar21 + uVar14 * 0x108,lVar21 + uVar16 * 0x108);
      if ((int)uVar9 != 0) {
        *param_1 = uVar14;
        param_2[-1] = uVar16;
      }
    }
    else if ((long)param_4 < 0x81) {
      if ((param_1 != param_2) && (param_1 + 1 != param_2)) {
        lVar21 = 0;
        uVar9 = *param_3;
        lVar10 = *(long *)param_3[1];
        uVar14 = (((long *)param_3[1])[1] - lVar10 >> 3) * 0xf83e0f83e0f83e1;
        puVar19 = param_1 + 1;
        puVar7 = param_1;
        do {
          puVar13 = puVar19;
          uVar16 = *puVar13;
          if ((uVar14 < uVar16 || uVar14 - uVar16 == 0) ||
             (uVar15 = *puVar7, uVar14 < uVar15 || uVar14 - uVar15 == 0)) goto LAB_10ac094bc;
          lVar18 = lVar10 + uVar16 * 0x108;
          uVar17 = uVar9;
          FUN_10abf6d70(uVar9,lVar18,lVar10 + uVar15 * 0x108);
          lVar11 = lVar21;
          if ((int)uVar17 != 0) {
            do {
              lVar22 = lVar11;
              *(ulong *)((long)param_1 + lVar22 + 8) = uVar15;
              puVar19 = param_1;
              if (lVar22 == 0) goto LAB_10ac09330;
              uVar15 = *(ulong *)((long)param_1 + lVar22 + -8);
              if (uVar14 < uVar15 || uVar14 - uVar15 == 0) goto LAB_10ac094bc;
              uVar17 = uVar9;
              FUN_10abf6d70(uVar9,lVar18,lVar10 + uVar15 * 0x108);
              lVar11 = lVar22 + -8;
            } while ((uVar17 & 1) != 0);
            puVar19 = (ulong *)((long)param_1 + lVar22);
LAB_10ac09330:
            *puVar19 = uVar16;
          }
          lVar21 = lVar21 + 8;
          puVar19 = puVar13 + 1;
          puVar7 = puVar13;
        } while (puVar13 + 1 != param_2);
      }
    }
    else {
      uVar9 = param_4 >> 1;
      puVar19 = param_1 + uVar9;
      lVar21 = param_4 - (param_4 >> 1);
      if (param_6 < (long)param_4) {
        FUN_10ac091a8();
        FUN_10ac091a8(puVar19,param_2,param_3,lVar21,param_5,param_6);
        puVar2 = (undefined1 *)register0x00000008;
SUB_10ac09798:
        *(long *)(puVar2 + -0x60) = unaff_x28;
        *(long *)(puVar2 + -0x58) = unaff_x27;
        *(ulong **)(puVar2 + -0x50) = unaff_x26;
        *(long *)(puVar2 + -0x48) = unaff_x25;
        *(long *)(puVar2 + -0x40) = unaff_x24;
        *(ulong **)(puVar2 + -0x38) = unaff_x23;
        *(ulong **)(puVar2 + -0x30) = unaff_x22;
        *(ulong **)(puVar2 + -0x28) = unaff_x21;
        *(long *)(puVar2 + -0x20) = unaff_x20;
        *(long *)(puVar2 + -0x18) = unaff_x19;
        *(undefined1 **)(puVar2 + -0x10) = unaff_x29;
        *(undefined8 *)(puVar2 + -8) = unaff_x30;
        unaff_x29 = puVar2 + -0x10;
        *(ulong **)(puVar2 + -0x90) = param_3;
        *(long *)(puVar2 + -0x88) = param_6;
        *(ulong **)(puVar2 + -0x70) = puVar19;
        *(ulong **)(puVar2 + -0x68) = param_1;
        *(long *)(puVar2 + -0x80) = lVar21;
        while( true ) {
          if (lVar21 == 0) {
            return;
          }
          if (((long)uVar9 <= *(long *)(puVar2 + -0x88)) ||
             (*(long *)(puVar2 + -0x80) <= *(long *)(puVar2 + -0x88))) break;
          if (uVar9 == 0) {
            return;
          }
          uVar14 = **(ulong **)(puVar2 + -0x70);
          plVar8 = (long *)(*(ulong **)(puVar2 + -0x90))[1];
          lVar10 = *plVar8;
          uVar16 = (plVar8[1] - lVar10 >> 3) * 0xf83e0f83e0f83e1;
          if (uVar16 < uVar14 || uVar16 - uVar14 == 0) goto LAB_10ac09c44;
          unaff_x28 = 0;
          uVar15 = **(ulong **)(puVar2 + -0x90);
          unaff_x25 = -uVar9;
          while( true ) {
            uVar9 = *(ulong *)(*(long *)(puVar2 + -0x68) + unaff_x28);
            if (uVar16 < uVar9 || uVar16 - uVar9 == 0) goto LAB_10ac09c44;
            uVar17 = uVar15;
            FUN_10abf6d70(uVar15,lVar10 + uVar14 * 0x108,lVar10 + uVar9 * 0x108);
            if ((uVar17 & 1) != 0) break;
            unaff_x28 = unaff_x28 + 8;
            bVar3 = unaff_x25 == -1;
            unaff_x25 = unaff_x25 + 1;
            if (bVar3) {
              return;
            }
          }
          unaff_x20 = *(long *)(puVar2 + -0x68);
          *(long *)(puVar2 + -0xa8) = unaff_x20 + unaff_x28;
          *(ulong **)(puVar2 + -0xa0) = param_5;
          *(ulong **)(puVar2 + -0x98) = param_2;
          if (-unaff_x25 < *(long *)(puVar2 + -0x80)) {
            lVar21 = *(long *)(puVar2 + -0x80) / 2;
            puVar19 = *(ulong **)(puVar2 + -0x70);
            unaff_x26 = puVar19 + lVar21;
            lVar11 = (long)puVar19 + (-unaff_x28 - unaff_x20);
            if (lVar11 != 0) {
              *(long *)(puVar2 + -0xb0) = lVar21;
              uVar9 = *unaff_x26;
              if (uVar16 < uVar9 || uVar16 - uVar9 == 0) goto LAB_10ac09c44;
              *(ulong *)(puVar2 + -0x78) = lVar10 + uVar9 * 0x108;
              uVar9 = lVar11 >> 3;
              puVar19 = *(ulong **)(puVar2 + -0xa8);
              do {
                uVar17 = uVar9 >> 1;
                uVar14 = puVar19[uVar17];
                if (uVar16 < uVar14 || uVar16 - uVar14 == 0) goto LAB_10ac09c44;
                uVar4 = uVar15;
                FUN_10abf6d70(uVar15,*(undefined8 *)(puVar2 + -0x78),lVar10 + uVar14 * 0x108);
                uVar14 = uVar9 + ~uVar17;
                uVar9 = uVar17;
                if ((int)uVar4 == 0) {
                  uVar9 = uVar14;
                  puVar19 = puVar19 + uVar17 + 1;
                }
              } while (uVar9 != 0);
              unaff_x20 = *(long *)(puVar2 + -0x68);
              lVar21 = *(long *)(puVar2 + -0xb0);
            }
            uVar9 = (long)puVar19 + (-unaff_x28 - unaff_x20) >> 3;
            puVar7 = *(ulong **)(puVar2 + -0x70);
          }
          else {
            if (unaff_x25 == -1) {
              *(ulong *)(unaff_x20 + unaff_x28) = uVar14;
              **(ulong **)(puVar2 + -0x70) = uVar9;
              return;
            }
            uVar9 = -unaff_x25 / 2;
            lVar11 = unaff_x20 + uVar9 * 8;
            puVar7 = *(ulong **)(puVar2 + -0x70);
            unaff_x26 = puVar7;
            if (puVar7 != param_2) {
              *(long *)(puVar2 + -0xb8) = lVar11;
              *(ulong *)(puVar2 + -0xb0) = uVar9;
              uVar9 = *(long *)(puVar2 + -0x98) - (long)puVar7 >> 3;
              lVar21 = *(long *)(lVar11 + unaff_x28);
              *(long *)(puVar2 + -0x78) = lVar21;
              do {
                uVar17 = uVar9 >> 1;
                uVar14 = puVar7[uVar17];
                if ((uVar16 < uVar14 || uVar16 - uVar14 == 0) ||
                   (uVar16 < *(ulong *)(puVar2 + -0x78) || uVar16 - *(ulong *)(puVar2 + -0x78) == 0)
                   ) goto LAB_10ac09c44;
                uVar4 = uVar15;
                FUN_10abf6d70(uVar15,lVar10 + uVar14 * 0x108,lVar10 + lVar21 * 0x108);
                unaff_x26 = puVar7 + uVar17 + 1;
                uVar9 = uVar9 + ~uVar17;
                if ((int)uVar4 == 0) {
                  unaff_x26 = puVar7;
                  uVar9 = uVar17;
                }
                puVar7 = unaff_x26;
              } while (uVar9 != 0);
              puVar7 = *(ulong **)(puVar2 + -0x70);
              unaff_x20 = *(long *)(puVar2 + -0x68);
              lVar11 = *(long *)(puVar2 + -0xb8);
              uVar9 = *(ulong *)(puVar2 + -0xb0);
            }
            lVar21 = (long)unaff_x26 - (long)puVar7 >> 3;
            puVar19 = (ulong *)(lVar11 + unaff_x28);
          }
          unaff_x19 = -uVar9 - unaff_x25;
          unaff_x24 = *(long *)(puVar2 + -0x80);
          unaff_x27 = unaff_x24 - lVar21;
          param_2 = puVar19;
          FUN_10ac051a0(puVar19,puVar7,unaff_x26);
          if ((long)(uVar9 + lVar21) < (long)((unaff_x24 - (uVar9 + lVar21)) - unaff_x25))
          goto code_r0x00010ac09a20;
          param_5 = *(ulong **)(puVar2 + -0xa0);
          func_0x00010ac09798(param_2,unaff_x26,*(undefined8 *)(puVar2 + -0x98),
                              *(undefined8 *)(puVar2 + -0x90),unaff_x19,unaff_x27,param_5,
                              *(undefined8 *)(puVar2 + -0x88));
          *(ulong **)(puVar2 + -0x98) = param_2;
          *(long *)(puVar2 + -0x80) = lVar21;
          *(ulong **)(puVar2 + -0x70) = puVar19;
          *(undefined8 *)(puVar2 + -0x68) = *(undefined8 *)(puVar2 + -0xa8);
          param_2 = *(ulong **)(puVar2 + -0x98);
        }
        if (*(long *)(puVar2 + -0x80) < (long)uVar9) {
          if (*(ulong **)(puVar2 + -0x70) == param_2) {
            return;
          }
          lVar21 = 0;
          lVar10 = *(long *)(puVar2 + -0x70);
          do {
            *(undefined8 *)((long)param_5 + lVar21) = *(undefined8 *)(lVar10 + lVar21);
            lVar21 = lVar21 + 8;
          } while ((ulong *)(lVar10 + lVar21) != param_2);
          plVar8 = (long *)(*(undefined8 **)(puVar2 + -0x90))[1];
          *(undefined8 *)(puVar2 + -0x78) = **(undefined8 **)(puVar2 + -0x90);
          puVar19 = (ulong *)((long)param_5 + lVar21);
          while( true ) {
            if (*(long *)(puVar2 + -0x70) == *(long *)(puVar2 + -0x68)) {
              if (puVar19 != param_5) {
                lVar21 = -8;
                do {
                  puVar19 = puVar19 + -1;
                  *(ulong *)((long)param_2 + lVar21) = *puVar19;
                  lVar21 = lVar21 + -8;
                } while (puVar19 != param_5);
              }
              return;
            }
            uVar14 = puVar19[-1];
            lVar21 = *plVar8;
            uVar9 = (plVar8[1] - lVar21 >> 3) * 0xf83e0f83e0f83e1;
            if (uVar9 < uVar14 || uVar9 - uVar14 == 0) break;
            puVar13 = *(ulong **)(puVar2 + -0x70);
            puVar7 = puVar13 + -1;
            uVar16 = *puVar7;
            if (uVar9 < uVar16 || uVar9 - uVar16 == 0) break;
            uVar5 = *(undefined8 *)(puVar2 + -0x78);
            FUN_10abf6d70(uVar5,lVar21 + uVar14 * 0x108,lVar21 + uVar16 * 0x108);
            bVar3 = (int)uVar5 == 0;
            if (bVar3) {
              puVar7 = puVar13;
              uVar16 = uVar14;
            }
            *(ulong **)(puVar2 + -0x70) = puVar7;
            if (bVar3) {
              puVar19 = puVar19 + -1;
            }
            param_2 = param_2 + -1;
            *param_2 = uVar16;
            if (puVar19 == param_5) {
              return;
            }
          }
        }
        else {
          if (*(long *)(puVar2 + -0x70) == *(long *)(puVar2 + -0x68)) {
            return;
          }
          lVar21 = -(long)param_5;
          puVar19 = *(ulong **)(puVar2 + -0x70);
          puVar7 = *(ulong **)(puVar2 + -0x68);
          puVar13 = param_5;
          do {
            puVar12 = puVar7 + 1;
            puVar20 = puVar13 + 1;
            *puVar13 = *puVar7;
            lVar21 = lVar21 + -8;
            puVar7 = puVar12;
            puVar13 = puVar20;
          } while (puVar12 != puVar19);
          uVar5 = **(undefined8 **)(puVar2 + -0x90);
          plVar8 = (long *)(*(undefined8 **)(puVar2 + -0x90))[1];
          while( true ) {
            if (*(ulong **)(puVar2 + -0x70) == param_2) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)PTR__memmove_11034c660)
                        (*(undefined8 *)(puVar2 + -0x68),param_5,-((long)param_5 + lVar21));
              return;
            }
            uVar9 = **(ulong **)(puVar2 + -0x70);
            lVar10 = *plVar8;
            uVar14 = (plVar8[1] - lVar10 >> 3) * 0xf83e0f83e0f83e1;
            if ((uVar14 < uVar9 || uVar14 - uVar9 == 0) ||
               (uVar16 = *param_5, uVar14 < uVar16 || uVar14 - uVar16 == 0)) break;
            uVar6 = uVar5;
            FUN_10abf6d70(uVar5,lVar10 + uVar9 * 0x108,lVar10 + uVar16 * 0x108);
            bVar3 = (int)uVar6 == 0;
            if (bVar3) {
              uVar9 = uVar16;
            }
            lVar10 = 8;
            if (bVar3) {
              lVar10 = 0;
            }
            lVar18 = *(long *)(puVar2 + -0x70);
            lVar11 = 0;
            if (bVar3) {
              lVar11 = 8;
            }
            param_5 = (ulong *)((long)param_5 + lVar11);
            puVar19 = *(ulong **)(puVar2 + -0x68);
            *puVar19 = uVar9;
            *(long *)(puVar2 + -0x70) = lVar18 + lVar10;
            *(ulong **)(puVar2 + -0x68) = puVar19 + 1;
            if (puVar20 == param_5) {
              return;
            }
          }
        }
LAB_10ac09c44:
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10ac09c48);
        (*pcVar1)();
      }
      func_0x00010ac094c0(param_1,puVar19,param_3,uVar9);
      puVar7 = param_5 + uVar9;
      func_0x00010ac094c0(puVar19,param_2,param_3,lVar21,puVar7);
      uVar9 = *param_3;
      plVar8 = (long *)param_3[1];
      puVar19 = param_5 + param_4;
      puVar13 = puVar7;
      do {
        if (puVar13 == puVar19) {
          for (; param_5 != puVar7; param_5 = param_5 + 1) {
            *param_1 = *param_5;
            param_1 = param_1 + 1;
          }
          return;
        }
        uVar14 = *puVar13;
        lVar21 = *plVar8;
        uVar16 = (plVar8[1] - lVar21 >> 3) * 0xf83e0f83e0f83e1;
        if ((uVar16 < uVar14 || uVar16 - uVar14 == 0) ||
           (uVar15 = *param_5, uVar16 < uVar15 || uVar16 - uVar15 == 0)) goto LAB_10ac094bc;
        uVar16 = uVar9;
        FUN_10abf6d70(uVar9,lVar21 + uVar14 * 0x108,lVar21 + uVar15 * 0x108);
        bVar3 = (int)uVar16 == 0;
        if (bVar3) {
          uVar14 = uVar15;
        }
        lVar21 = 0;
        if (bVar3) {
          lVar21 = 8;
        }
        param_5 = (ulong *)((long)param_5 + lVar21);
        lVar21 = 8;
        if (bVar3) {
          lVar21 = 0;
        }
        puVar13 = (ulong *)((long)puVar13 + lVar21);
        puVar12 = param_1 + 1;
        *param_1 = uVar14;
        param_1 = puVar12;
      } while (param_5 != puVar7);
      for (; puVar13 != puVar19; puVar13 = puVar13 + 1) {
        *puVar12 = *puVar13;
        puVar12 = puVar12 + 1;
      }
    }
  }
  return;
code_r0x00010ac09a20:
  param_1 = (ulong *)(unaff_x20 + unaff_x28);
  param_3 = *(ulong **)(puVar2 + -0x90);
  param_6 = *(long *)(puVar2 + -0x88);
  param_5 = *(ulong **)(puVar2 + -0xa0);
  unaff_x30 = 0x10ac09a40;
  puVar2 = puVar2 + -0xc0;
  unaff_x21 = param_5;
  unaff_x22 = puVar19;
  unaff_x23 = param_2;
  goto SUB_10ac09798;
}



/* Entry: 10ac09cc8; end: 10ac09d3f;  */

void FUN_10ac09cc8(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *param_1;
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(param_1 + lVar1 * 5 + 1,*param_2,param_2[1]);
    lVar2 = *param_1;
  }
  else {
    lVar3 = param_2[1];
    lVar2 = *param_2;
    param_1[lVar1 * 5 + 3] = param_2[2];
    param_1[lVar1 * 5 + 2] = lVar3;
    param_1[lVar1 * 5 + 1] = lVar2;
    lVar2 = lVar1;
  }
  param_1[lVar1 * 5 + 4] = param_2[3];
  *(char *)(param_1 + lVar1 * 5 + 5) = (char)param_2[4];
  *param_1 = lVar2 + 1;
  return;
}



/* Entry: 10ac09d40; end: 10ac09d97;  */

void FUN_10ac09d40(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if ((*(int *)(param_1 + 0x18) == 0) && (*(int *)(param_1 + 0x1c) == 0)) {
    *(undefined8 *)(lVar1 + 0xb04) = 0;
  }
  else {
    *(undefined8 *)(lVar1 + 0xb04) = *(undefined8 *)(param_1 + 0x18);
  }
  *(undefined8 *)(lVar1 + 0xafc) = 0x7fffffff7fffffff;
  return;
}



/* Entry: 10ac09d98; end: 10ac09def;  */

long FUN_10ac09d98(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10ac09df0; end: 10ac09e57;  */

void FUN_10ac09df0(undefined8 *param_1)

{
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar1;
  
  if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
    lVar1 = **(long **)*param_1;
    func_0x00010ae06f08(1,8,&UNK_10f69b737,&UNK_10f69b783,0x1b4,&UNK_10f69b7fc,in_x6,in_x7,
                        *(undefined4 *)(lVar1 + 0xcc),*(undefined4 *)(lVar1 + 0xd0),
                        *(undefined4 *)(lVar1 + 0xd4));
  }
  return;
}



/* Entry: 10ac09e58; end: 10ac0aec7;  */

void FUN_10ac09e58(undefined8 **param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long unaff_x19;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 **ppuStack_d8;
  undefined8 **ppuStack_d0;
  undefined8 **ppuStack_c8;
  undefined1 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  
  puVar1 = puRam0000000113835998;
  uVar6 = 0x2aaaaaaaaaaaaaa;
  if (puRam0000000113835990 < puRam0000000113835998) {
    *puRam0000000113835990 = 0xd8000000b4;
    puRam0000000113835990[2] = 0x10;
    puRam0000000113835990[1] = 0;
    *(undefined4 *)(puRam0000000113835990 + 3) = 0;
    puRam0000000113835990[5] = 0;
    puRam0000000113835990[4] = 0;
    puRam0000000113835990[7] = 0;
    puRam0000000113835990[6] = 0;
    puRam0000000113835990[9] = 0;
    puRam0000000113835990[8] = 0;
    puRam0000000113835990[0xb] = 0;
    puRam0000000113835990[10] = 0;
    puVar7 = puRam0000000113835990 + 0xc;
  }
  else {
    lVar5 = (long)puRam0000000113835990 - (long)puRam0000000113835988;
    uVar4 = (lVar5 >> 5) * -0x5555555555555555 + 1;
    if (0x2aaaaaaaaaaaaaa < uVar4) goto LAB_10ac0aec4;
    lVar2 = (long)puRam0000000113835998 - (long)puRam0000000113835988 >> 5;
    uVar3 = lVar2 * 0x5555555555555556;
    if (uVar3 < uVar4 || uVar3 - uVar4 == 0) {
      uVar3 = uVar4;
    }
    if (0x155555555555554 < (ulong)(lVar2 * -0x5555555555555555)) {
      uVar3 = uVar6;
    }
    unaff_x19 = 0x113835988;
    uStack_58 = 0x113835988;
    lVar2 = unaff_x19;
    FUN_10a187714();
    puVar1 = (undefined8 *)(lVar2 + lVar5);
    *puVar1 = 0xd8000000b4;
    puVar1[2] = 0x10;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 3) = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    puVar7 = puVar1 + 0xc;
    puVar1 = (undefined8 *)
             ((long)puVar1 + ((long)puRam0000000113835988 - (long)puRam0000000113835990));
    param_2 = puRam0000000113835988;
    param_4 = puVar1;
    FUN_10ac0aec8(0x113835988);
    puStack_68 = puRam0000000113835988;
    puStack_60 = puRam0000000113835998;
    puStack_78 = puRam0000000113835988;
    puStack_70 = puRam0000000113835988;
    param_1 = &puStack_78;
    puRam0000000113835988 = puVar1;
    puVar1 = puRam0000000113835990;
    puRam0000000113835990 = puVar7;
    puRam0000000113835998 = (undefined8 *)(lVar2 + uVar3 * 0x60);
    FUN_10ac0afc0();
    param_3 = puRam0000000113835990;
    puVar1 = puRam0000000113835998;
  }
  if (puVar7 < puVar1) {
    *puVar7 = 0xd80000003a;
    puVar7[2] = 0x10;
    puVar7[1] = 0x10;
    *(undefined4 *)(puVar7 + 3) = 0;
    puVar7[5] = 0;
    puVar7[4] = 0;
    puVar7[7] = 0;
    puVar7[6] = 0;
    puVar7[9] = 0;
    puVar7[8] = 0;
    puVar7[0xb] = 0;
    puVar7[10] = 0;
    puVar7 = puVar7 + 0xc;
  }
  else {
    lVar5 = (long)puVar7 - (long)puRam0000000113835988;
    uVar4 = (lVar5 >> 5) * -0x5555555555555555 + 1;
    puRam0000000113835990 = puVar7;
    if (0x2aaaaaaaaaaaaaa < uVar4) goto LAB_10ac0aec4;
    lVar2 = (long)puVar1 - (long)puRam0000000113835988 >> 5;
    uVar3 = lVar2 * 0x5555555555555556;
    if (uVar3 < uVar4 || uVar3 - uVar4 == 0) {
      uVar3 = uVar4;
    }
    if (0x155555555555554 < (ulong)(lVar2 * -0x5555555555555555)) {
      uVar3 = uVar6;
    }
    unaff_x19 = 0x113835988;
    uStack_58 = 0x113835988;
    lVar2 = unaff_x19;
    FUN_10a187714();
    puVar1 = (undefined8 *)(lVar2 + lVar5);
    *puVar1 = 0xd80000003a;
    puVar1[2] = 0x10;
    puVar1[1] = 0x10;
    *(undefined4 *)(puVar1 + 3) = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    puVar7 = puVar1 + 0xc;
    puVar1 = (undefined8 *)
             ((long)puVar1 + ((long)puRam0000000113835988 - (long)puRam0000000113835990));
    param_2 = puRam0000000113835988;
    param_4 = puVar1;
    FUN_10ac0aec8(0x113835988);
    puStack_68 = puRam0000000113835988;
    puStack_60 = puRam0000000113835998;
    puStack_78 = puRam0000000113835988;
    puStack_70 = puRam0000000113835988;
    param_1 = &puStack_78;
    puRam0000000113835988 = puVar1;
    puVar1 = puRam0000000113835990;
    puRam0000000113835990 = puVar7;
    puRam0000000113835998 = (undefined8 *)(lVar2 + uVar3 * 0x60);
    FUN_10ac0afc0();
    param_3 = puRam0000000113835990;
    puVar1 = puRam0000000113835998;
  }
  if (puVar7 < puVar1) {
    *puVar7 = 0xd800000039;
    puVar7[2] = 0x10;
    puVar7[1] = 0x20;
    *(undefined4 *)(puVar7 + 3) = 0;
    puVar7[5] = 0;
    puVar7[4] = 0;
    puVar7[7] = 0;
    puVar7[6] = 0;
    puVar7[9] = 0;
    puVar7[8] = 0;
    puVar7[0xb] = 0;
    puVar7[10] = 0;
    puVar7 = puVar7 + 0xc;
  }
  else {
    lVar5 = (long)puVar7 - (long)puRam0000000113835988;
    uVar4 = (lVar5 >> 5) * -0x5555555555555555 + 1;
    puRam0000000113835990 = puVar7;
    if (0x2aaaaaaaaaaaaaa < uVar4) goto LAB_10ac0aec4;
    lVar2 = (long)puVar1 - (long)puRam0000000113835988 >> 5;
    uVar3 = lVar2 * 0x5555555555555556;
    if (uVar3 < uVar4 || uVar3 - uVar4 == 0) {
      uVar3 = uVar4;
    }
    if (0x155555555555554 < (ulong)(lVar2 * -0x5555555555555555)) {
      uVar3 = uVar6;
    }
    unaff_x19 = 0x113835988;
    uStack_58 = 0x113835988;
    lVar2 = unaff_x19;
    FUN_10a187714();
    puVar1 = (undefined8 *)(lVar2 + lVar5);
    *puVar1 = 0xd800000039;
    puVar1[2] = 0x10;
    puVar1[1] = 0x20;
    *(undefined4 *)(puVar1 + 3) = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    puVar7 = puVar1 + 0xc;
    puVar1 = (undefined8 *)
             ((long)puVar1 + ((long)puRam0000000113835988 - (long)puRam0000000113835990));
    param_2 = puRam0000000113835988;
    param_4 = puVar1;
    FUN_10ac0aec8(0x113835988);
    puStack_68 = puRam0000000113835988;
    puStack_60 = puRam0000000113835998;
    puStack_78 = puRam0000000113835988;
    puStack_70 = puRam0000000113835988;
    param_1 = &puStack_78;
    puRam0000000113835988 = puVar1;
    puVar1 = puRam0000000113835990;
    puRam0000000113835990 = puVar7;
    puRam0000000113835998 = (undefined8 *)(lVar2 + uVar3 * 0x60);
    FUN_10ac0afc0();
    param_3 = puRam0000000113835990;
    puVar1 = puRam0000000113835998;
  }
  if (puVar7 < puVar1) {
    *puVar7 = 0xd80000003f;
    puVar7[2] = 0x10;
    puVar7[1] = 0x30;
    *(undefined4 *)(puVar7 + 3) = 0;
    puVar7[5] = 0;
    puVar7[4] = 0;
    puVar7[7] = 0;
    puVar7[6] = 0;
    puVar7[9] = 0;
    puVar7[8] = 0;
    puVar7[0xb] = 0;
    puVar7[10] = 0;
    puVar7 = puVar7 + 0xc;
  }
  else {
    lVar5 = (long)puVar7 - (long)puRam0000000113835988;
    uVar4 = (lVar5 >> 5) * -0x5555555555555555 + 1;
    puRam0000000113835990 = puVar7;
    if (0x2aaaaaaaaaaaaaa < uVar4) goto LAB_10ac0aec4;
    lVar2 = (long)puVar1 - (long)puRam0000000113835988 >> 5;
    uVar3 = lVar2 * 0x5555555555555556;
    if (uVar3 < uVar4 || uVar3 - uVar4 == 0) {
      uVar3 = uVar4;
    }
    if (0x155555555555554 < (ulong)(lVar2 * -0x5555555555555555)) {
      uVar3 = uVar6;
    }
    unaff_x19 = 0x113835988;
    uStack_58 = 0x113835988;
    lVar2 = unaff_x19;
    FUN_10a187714();
    puVar1 = (undefined8 *)(lVar2 + lVar5);
    *puVar1 = 0xd80000003f;
    puVar1[2] = 0x10;
    puVar1[1] = 0x30;
    *(undefined4 *)(puVar1 + 3) = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    puVar7 = puVar1 + 0xc;
    puVar1 = (undefined8 *)
             ((long)puVar1 + ((long)puRam0000000113835988 - (long)puRam0000000113835990));
    param_2 = puRam0000000113835988;
    param_4 = puVar1;
    FUN_10ac0aec8(0x113835988);
    puStack_68 = puRam0000000113835988;
    puStack_60 = puRam0000000113835998;
    puStack_78 = puRam0000000113835988;
    puStack_70 = puRam0000000113835988;
    param_1 = &puStack_78;
    puRam0000000113835988 = puVar1;
    puVar1 = puRam0000000113835990;
    puRam0000000113835990 = puVar7;
    puRam0000000113835998 = (undefined8 *)(lVar2 + uVar3 * 0x60);
    FUN_10ac0afc0();
    param_3 = puRam0000000113835990;
    puVar1 = puRam0000000113835998;
  }
  if (puVar7 < puVar1) {
    *puVar7 = 0xd80000003c;
    puVar7[2] = 0xc;
    puVar7[1] = 0x3e0;
    *(undefined4 *)(puVar7 + 3) = 0;
    puVar7[5] = 0;
    puVar7[4] = 0;
    puVar7[7] = 0;
    puVar7[6] = 0;
    puVar7[9] = 0;
    puVar7[8] = 0;
    puVar7[0xb] = 0;
    puVar7[10] = 0;
    puVar7 = puVar7 + 0xc;
  }
  else {
    lVar5 = (long)puVar7 - (long)puRam0000000113835988;
    uVar4 = (lVar5 >> 5) * -0x5555555555555555 + 1;
    puRam0000000113835990 = puVar7;
    if (0x2aaaaaaaaaaaaaa < uVar4) goto LAB_10ac0aec4;
    lVar2 = (long)puVar1 - (long)puRam0000000113835988 >> 5;
    uVar3 = lVar2 * 0x5555555555555556;
    if (uVar3 < uVar4 || uVar3 - uVar4 == 0) {
      uVar3 = uVar4;
    }
    if (0x155555555555554 < (ulong)(lVar2 * -0x5555555555555555)) {
      uVar3 = uVar6;
    }
    unaff_x19 = 0x113835988;
    uStack_58 = 0x113835988;
    lVar2 = unaff_x19;
    FUN_10a187714();
    puVar1 = (undefined8 *)(lVar2 + lVar5);
    *puVar1 = 0xd80000003c;
    puVar1[2] = 0xc;
    puVar1[1] = 0x3e0;
    *(undefined4 *)(puVar1 + 3) = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    puVar7 = puVar1 + 0xc;
    puVar1 = (undefined8 *)
             ((long)puVar1 + ((long)puRam0000000113835988 - (long)puRam0000000113835990));
    param_2 = puRam0000000113835988;
    param_4 = puVar1;
    FUN_10ac0aec8(0x113835988);
    puStack_68 = puRam0000000113835988;
    puStack_60 = puRam0000000113835998;
    puStack_78 = puRam0000000113835988;
    puStack_70 = puRam0000000113835988;
    param_1 = &puStack_78;
    puRam0000000113835988 = puVar1;
    puVar1 = puRam0000000113835990;
    puRam0000000113835990 = puVar7;
    puRam0000000113835998 = (undefined8 *)(lVar2 + uVar3 * 0x60);
    FUN_10ac0afc0();
    param_3 = puRam0000000113835990;
    puVar1 = puRam0000000113835998;
  }
  if (puVar7 < puVar1) {
    *puVar7 = 0xd80000003d;
    puVar7[2] = 4;
    puVar7[1] = 0x3ec;
    *(undefined4 *)(puVar7 + 3) = 0;
    puVar7[5] = 0;
    puVar7[4] = 0;
    puVar7[7] = 0;
    puVar7[6] = 0;
    puVar7[9] = 0;
    puVar7[8] = 0;
    puVar7[0xb] = 0;
    puVar7[10] = 0;
    puVar7 = puVar7 + 0xc;
  }
  else {
    lVar5 = (long)puVar7 - (long)puRam0000000113835988;
    uVar4 = (lVar5 >> 5) * -0x5555555555555555 + 1;
    puRam0000000113835990 = puVar7;
    if (0x2aaaaaaaaaaaaaa < uVar4) goto LAB_10ac0aec4;
    lVar2 = (long)puVar1 - (long)puRam0000000113835988 >> 5;
    uVar3 = lVar2 * 0x5555555555555556;
    if (uVar3 < uVar4 || uVar3 - uVar4 == 0) {
      uVar3 = uVar4;
    }
    if (0x155555555555554 < (ulong)(lVar2 * -0x5555555555555555)) {
      uVar3 = uVar6;
    }
    unaff_x19 = 0x113835988;
    uStack_58 = 0x113835988;
    lVar2 = unaff_x19;
    FUN_10a187714();
    puVar1 = (undefined8 *)(lVar2 + lVar5);
    *puVar1 = 0xd80000003d;
    puVar1[2] = 4;
    puVar1[1] = 0x3ec;
    *(undefined4 *)(puVar1 + 3) = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    puVar7 = puVar1 + 0xc;
    puVar1 = (undefined8 *)
             ((long)puVar1 + ((long)puRam0000000113835988 - (long)puRam0000000113835990));
    param_2 = puRam0000000113835988;
    param_4 = puVar1;
    FUN_10ac0aec8(0x113835988);
    puStack_68 = puRam0000000113835988;
    puStack_60 = puRam0000000113835998;
    puStack_78 = puRam0000000113835988;
    puStack_70 = puRam0000000113835988;
    param_1 = &puStack_78;
    puRam0000000113835988 = puVar1;
    puVar1 = puRam0000000113835990;
    puRam0000000113835990 = puVar7;
    puRam0000000113835998 = (undefined8 *)(lVar2 + uVar3 * 0x60);
    FUN_10ac0afc0();
    param_3 = puRam0000000113835990;
    puVar1 = puRam0000000113835998;
  }
  if (puVar7 < puVar1) {
    *puVar7 = 0xd80000003e;
    puVar7[2] = 8;
    puVar7[1] = 0x3f0;
    *(undefined4 *)(puVar7 + 3) = 0;
    puVar7[5] = 0;
    puVar7[4] = 0;
    puVar7[7] = 0;
    puVar7[6] = 0;
    puVar7[9] = 0;
    puVar7[8] = 0;
    puVar7[0xb] = 0;
    puVar7[10] = 0;
    puVar7 = puVar7 + 0xc;
  }
  else {
    lVar5 = (long)puVar7 - (long)puRam0000000113835988;
    uVar4 = (lVar5 >> 5) * -0x5555555555555555 + 1;
    puRam0000000113835990 = puVar7;
    if (0x2aaaaaaaaaaaaaa < uVar4) goto LAB_10ac0aec4;
    lVar2 = (long)puVar1 - (long)puRam0000000113835988 >> 5;
    uVar3 = lVar2 * 0x5555555555555556;
    if (uVar3 < uVar4 || uVar3 - uVar4 == 0) {
      uVar3 = uVar4;
    }
    if (0x155555555555554 < (ulong)(lVar2 * -0x5555555555555555)) {
      uVar3 = uVar6;
    }
    unaff_x19 = 0x113835988;
    uStack_58 = 0x113835988;
    lVar2 = unaff_x19;
    FUN_10a187714();
    puVar1 = (undefined8 *)(lVar2 + lVar5);
    *puVar1 = 0xd80000003e;
    puVar1[2] = 8;
    puVar1[1] = 0x3f0;
    *(undefined4 *)(puVar1 + 3) = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    puVar7 = puVar1 + 0xc;
    puVar1 = (undefined8 *)
             ((long)puVar1 + ((long)puRam0000000113835988 - (long)puRam0000000113835990));
    param_2 = puRam0000000113835988;
    param_4 = puVar1;
    FUN_10ac0aec8(0x113835988);
    puStack_68 = puRam0000000113835988;
    puStack_60 = puRam0000000113835998;
    puStack_78 = puRam0000000113835988;
    puStack_70 = puRam0000000113835988;
    param_1 = &puStack_78;
    puRam0000000113835988 = puVar1;
    puVar1 = puRam0000000113835990;
    puRam0000000113835990 = puVar7;
    puRam0000000113835998 = (undefined8 *)(lVar2 + uVar3 * 0x60);
    FUN_10ac0afc0();
    param_3 = puRam0000000113835990;
    puVar1 = puRam0000000113835998;
  }
  if (puVar7 < puVar1) {
    *puVar7 = 0xd80000001d;
    puVar7[2] = 0x10;
    puVar7[1] = 0x3c0;
    *(undefined4 *)(puVar7 + 3) = 1;
    puVar7[4] = 2;
    puVar7[6] = 0;
    puVar7[5] = 0;
    puVar7[8] = 0;
    puVar7[7] = 0;
    puVar7[10] = 0;
    puVar7[9] = 0;
    puVar7[0xb] = 0;
    puVar7 = puVar7 + 0xc;
  }
  else {
    lVar5 = (long)puVar7 - (long)puRam0000000113835988;
    uVar4 = (lVar5 >> 5) * -0x5555555555555555 + 1;
    puRam0000000113835990 = puVar7;
    if (0x2aaaaaaaaaaaaaa < uVar4) goto LAB_10ac0aec4;
    lVar2 = (long)puVar1 - (long)puRam0000000113835988 >> 5;
    uVar3 = lVar2 * 0x5555555555555556;
    if (uVar3 < uVar4 || uVar3 - uVar4 == 0) {
      uVar3 = uVar4;
    }
    if (0x155555555555554 < (ulong)(lVar2 * -0x5555555555555555)) {
      uVar3 = uVar6;
    }
    unaff_x19 = 0x113835988;
    uStack_58 = 0x113835988;
    lVar2 = unaff_x19;
    FUN_10a187714();
    param_3 = puRam0000000113835990;
    param_2 = puRam0000000113835988;
    puVar1 = (undefined8 *)(lVar2 + lVar5);
    *puVar1 = 0xd80000001d;
    puVar1[2] = 0x10;
    puVar1[1] = 0x3c0;
    *(undefined4 *)(puVar1 + 3) = 1;
    puVar1[4] = 2;
    puVar1[6] = 0;
    puVar1[5] = 0;
    puVar1[8] = 0;
    puVar1[7] = 0;
    puVar1[10] = 0;
    puVar1[9] = 0;
    puVar1[0xb] = 0;
    puVar7 = puVar1 + 0xc;
    puVar1 = (undefined8 *)((long)puVar1 + ((long)param_2 - (long)param_3));
    param_4 = puVar1;
    FUN_10ac0aec8(0x113835988);
    puStack_68 = puRam0000000113835988;
    puStack_60 = puRam0000000113835998;
    puStack_78 = puRam0000000113835988;
    puStack_70 = puRam0000000113835988;
    param_1 = &puStack_78;
    puRam0000000113835988 = puVar1;
    puRam0000000113835990 = puVar7;
    puRam0000000113835998 = (undefined8 *)(lVar2 + uVar3 * 0x60);
    FUN_10ac0afc0();
    puVar1 = puRam0000000113835998;
  }
  if (puVar7 < puVar1) {
    *puVar7 = 0x1300000008;
    puVar7[2] = 0x40;
    puVar7[1] = 0x240;
    *(undefined4 *)(puVar7 + 3) = 2;
    puVar7[5] = 0;
    puVar7[4] = 0;
    puVar7[7] = 0;
    puVar7[6] = 0;
    puVar7[9] = 0;
    puVar7[8] = 0;
    puVar7[0xb] = 0;
    puVar7[10] = 0;
    puVar7 = puVar7 + 0xc;
  }
  else {
    lVar5 = (long)puVar7 - (long)puRam0000000113835988;
    uVar4 = (lVar5 >> 5) * -0x5555555555555555 + 1;
    puRam0000000113835990 = puVar7;
    if (0x2aaaaaaaaaaaaaa < uVar4) goto LAB_10ac0aec4;
    lVar2 = (long)puVar1 - (long)puRam0000000113835988 >> 5;
    uVar3 = lVar2 * 0x5555555555555556;
    if (uVar3 < uVar4 || uVar3 - uVar4 == 0) {
      uVar3 = uVar4;
    }
    if (0x155555555555554 < (ulong)(lVar2 * -0x5555555555555555)) {
      uVar3 = uVar6;
    }
    unaff_x19 = 0x113835988;
    uStack_58 = 0x113835988;
    lVar2 = unaff_x19;
    FUN_10a187714();
    puVar1 = (undefined8 *)(lVar2 + lVar5);
    *puVar1 = 0x1300000008;
    puVar1[2] = 0x40;
    puVar1[1] = 0x240;
    *(undefined4 *)(puVar1 + 3) = 2;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    puVar7 = puVar1 + 0xc;
    puVar1 = (undefined8 *)
             ((long)puVar1 + ((long)puRam0000000113835988 - (long)puRam0000000113835990));
    param_2 = puRam0000000113835988;
    param_4 = puVar1;
    FUN_10ac0aec8(0x113835988);
    puStack_68 = puRam0000000113835988;
    puStack_60 = puRam0000000113835998;
    puStack_78 = puRam0000000113835988;
    puStack_70 = puRam0000000113835988;
    param_1 = &puStack_78;
    puRam0000000113835988 = puVar1;
    puVar1 = puRam0000000113835990;
    puRam0000000113835990 = puVar7;
    puRam0000000113835998 = (undefined8 *)(lVar2 + uVar3 * 0x60);
    FUN_10ac0afc0();
    param_3 = puRam0000000113835990;
    puVar1 = puRam0000000113835998;
  }
  if (puVar7 < puVar1) {
    *puVar7 = 0x1400000009;
    puVar7[2] = 0x40;
    puVar7[1] = 0x2c0;
    *(undefined4 *)(puVar7 + 3) = 2;
    puVar7[5] = 0;
    puVar7[4] = 0;
    puVar7[7] = 0;
    puVar7[6] = 0;
    puVar7[9] = 0;
    puVar7[8] = 0;
    puVar7[0xb] = 0;
    puVar7[10] = 0;
    puVar7 = puVar7 + 0xc;
  }
  else {
    lVar5 = (long)puVar7 - (long)puRam0000000113835988;
    uVar4 = (lVar5 >> 5) * -0x5555555555555555 + 1;
    puRam0000000113835990 = puVar7;
    if (0x2aaaaaaaaaaaaaa < uVar4) goto LAB_10ac0aec4;
    lVar2 = (long)puVar1 - (long)puRam0000000113835988 >> 5;
    uVar3 = lVar2 * 0x5555555555555556;
    if (uVar3 < uVar4 || uVar3 - uVar4 == 0) {
      uVar3 = uVar4;
    }
    if (0x155555555555554 < (ulong)(lVar2 * -0x5555555555555555)) {
      uVar3 = uVar6;
    }
    unaff_x19 = 0x113835988;
    uStack_58 = 0x113835988;
    lVar2 = unaff_x19;
    FUN_10a187714();
    puVar1 = (undefined8 *)(lVar2 + lVar5);
    *puVar1 = 0x1400000009;
    puVar1[2] = 0x40;
    puVar1[1] = 0x2c0;
    *(undefined4 *)(puVar1 + 3) = 2;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    puVar7 = puVar1 + 0xc;
    puVar1 = (undefined8 *)
             ((long)puVar1 + ((long)puRam0000000113835988 - (long)puRam0000000113835990));
    param_2 = puRam0000000113835988;
    param_4 = puVar1;
    FUN_10ac0aec8(0x113835988);
    puStack_68 = puRam0000000113835988;
    puStack_60 = puRam0000000113835998;
    puStack_78 = puRam0000000113835988;
    puStack_70 = puRam0000000113835988;
    param_1 = &puStack_78;
    puRam0000000113835988 = puVar1;
    puVar1 = puRam0000000113835990;
    puRam0000000113835990 = puVar7;
    puRam0000000113835998 = (undefined8 *)(lVar2 + uVar3 * 0x60);
    FUN_10ac0afc0();
    param_3 = puRam0000000113835990;
    puVar1 = puRam0000000113835998;
  }
  if (puVar7 < puVar1) {
    *puVar7 = 0x1100000006;
    puVar7[2] = 0x40;
    puVar7[1] = 0x140;
    *(undefined4 *)(puVar7 + 3) = 2;
    puVar7[5] = 0;
    puVar7[4] = 0;
    puVar7[7] = 0;
    puVar7[6] = 0;
    puVar7[9] = 0;
    puVar7[8] = 0;
    puVar7[0xb] = 0;
    puVar7[10] = 0;
    puVar7 = puVar7 + 0xc;
    puRam0000000113835990 = param_3;
  }
  else {
    lVar5 = (long)puVar7 - (long)puRam0000000113835988;
    uVar4 = (lVar5 >> 5) * -0x5555555555555555 + 1;
    puRam0000000113835990 = puVar7;
    if (0x2aaaaaaaaaaaaaa < uVar4) goto LAB_10ac0aec4;
    lVar2 = (long)puVar1 - (long)puRam0000000113835988 >> 5;
    uVar3 = lVar2 * 0x5555555555555556;
    if (uVar3 < uVar4 || uVar3 - uVar4 == 0) {
      uVar3 = uVar4;
    }
    if (0x155555555555554 < (ulong)(lVar2 * -0x5555555555555555)) {
      uVar3 = uVar6;
    }
    unaff_x19 = 0x113835988;
    uStack_58 = 0x113835988;
    lVar2 = unaff_x19;
    FUN_10a187714();
    puVar1 = (undefined8 *)(lVar2 + lVar5);
    *puVar1 = 0x1100000006;
    puVar1[2] = 0x40;
    puVar1[1] = 0x140;
    *(undefined4 *)(puVar1 + 3) = 2;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    puVar7 = puVar1 + 0xc;
    puVar1 = (undefined8 *)
             ((long)puVar1 + ((long)puRam0000000113835988 - (long)puRam0000000113835990));
    param_2 = puRam0000000113835988;
    param_4 = puVar1;
    FUN_10ac0aec8(0x113835988);
    puStack_68 = puRam0000000113835988;
    puStack_60 = puRam0000000113835998;
    puStack_78 = puRam0000000113835988;
    puStack_70 = puRam0000000113835988;
    param_1 = &puStack_78;
    puRam0000000113835988 = puVar1;
    puVar1 = puRam0000000113835990;
    puRam0000000113835990 = puVar7;
    puRam0000000113835998 = (undefined8 *)(lVar2 + uVar3 * 0x60);
    FUN_10ac0afc0();
    puVar1 = puRam0000000113835998;
  }
  if (puVar7 < puVar1) {
    *puVar7 = 0x1200000007;
    puVar7[2] = 0x40;
    puVar7[1] = 0x1c0;
    *(undefined4 *)(puVar7 + 3) = 2;
    puVar7[5] = 0;
    puVar7[4] = 0;
    puVar7[7] = 0;
    puVar7[6] = 0;
    puVar7[9] = 0;
    puVar7[8] = 0;
    puVar7[0xb] = 0;
    puVar7[10] = 0;
    puVar7 = puVar7 + 0xc;
  }
  else {
    lVar5 = (long)puVar7 - (long)puRam0000000113835988;
    uVar4 = (lVar5 >> 5) * -0x5555555555555555 + 1;
    param_3 = puRam0000000113835990;
    puRam0000000113835990 = puVar7;
    if (0x2aaaaaaaaaaaaaa < uVar4) goto LAB_10ac0aec4;
    lVar2 = (long)puVar1 - (long)puRam0000000113835988 >> 5;
    uVar3 = lVar2 * 0x5555555555555556;
    if (uVar3 < uVar4 || uVar3 - uVar4 == 0) {
      uVar3 = uVar4;
    }
    if (0x155555555555554 < (ulong)(lVar2 * -0x5555555555555555)) {
      uVar3 = uVar6;
    }
    unaff_x19 = 0x113835988;
    uStack_58 = 0x113835988;
    lVar2 = unaff_x19;
    FUN_10a187714();
    puVar1 = (undefined8 *)(lVar2 + lVar5);
    *puVar1 = 0x1200000007;
    puVar1[2] = 0x40;
    puVar1[1] = 0x1c0;
    *(undefined4 *)(puVar1 + 3) = 2;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    puVar7 = puVar1 + 0xc;
    puVar1 = (undefined8 *)
             ((long)puVar1 + ((long)puRam0000000113835988 - (long)puRam0000000113835990));
    param_2 = puRam0000000113835988;
    param_4 = puVar1;
    FUN_10ac0aec8(0x113835988);
    puStack_68 = puRam0000000113835988;
    puStack_60 = puRam0000000113835998;
    puStack_78 = puRam0000000113835988;
    puStack_70 = puRam0000000113835988;
    param_1 = &puStack_78;
    puRam0000000113835988 = puVar1;
    puVar1 = puRam0000000113835990;
    puRam0000000113835990 = puVar7;
    puRam0000000113835998 = (undefined8 *)(lVar2 + uVar3 * 0x60);
    FUN_10ac0afc0();
    puVar1 = puRam0000000113835998;
  }
  if (puVar7 < puVar1) {
    *puVar7 = 0xd00000002;
    puVar7[2] = 0x40;
    puVar7[1] = 0x40;
    *(undefined4 *)(puVar7 + 3) = 2;
    puVar7[5] = 0;
    puVar7[4] = 0;
    puVar7[7] = 0;
    puVar7[6] = 0;
    puVar7[9] = 0;
    puVar7[8] = 0;
    puVar7[0xb] = 0;
    puVar7[10] = 0;
    puVar7 = puVar7 + 0xc;
  }
  else {
    lVar5 = (long)puVar7 - (long)puRam0000000113835988;
    uVar4 = (lVar5 >> 5) * -0x5555555555555555 + 1;
    param_3 = puRam0000000113835990;
    puRam0000000113835990 = puVar7;
    if (0x2aaaaaaaaaaaaaa < uVar4) goto LAB_10ac0aec4;
    lVar2 = (long)puVar1 - (long)puRam0000000113835988 >> 5;
    uVar3 = lVar2 * 0x5555555555555556;
    if (uVar3 < uVar4 || uVar3 - uVar4 == 0) {
      uVar3 = uVar4;
    }
    if (0x155555555555554 < (ulong)(lVar2 * -0x5555555555555555)) {
      uVar3 = uVar6;
    }
    unaff_x19 = 0x113835988;
    uStack_58 = 0x113835988;
    lVar2 = unaff_x19;
    FUN_10a187714();
    puVar1 = (undefined8 *)(lVar2 + lVar5);
    *puVar1 = 0xd00000002;
    puVar1[2] = 0x40;
    puVar1[1] = 0x40;
    *(undefined4 *)(puVar1 + 3) = 2;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    puVar7 = puVar1 + 0xc;
    puVar1 = (undefined8 *)
             ((long)puVar1 + ((long)puRam0000000113835988 - (long)puRam0000000113835990));
    param_2 = puRam0000000113835988;
    param_4 = puVar1;
    FUN_10ac0aec8(0x113835988);
    puStack_68 = puRam0000000113835988;
    puStack_60 = puRam0000000113835998;
    puStack_78 = puRam0000000113835988;
    puStack_70 = puRam0000000113835988;
    param_1 = &puStack_78;
    puRam0000000113835988 = puVar1;
    puVar1 = puRam0000000113835990;
    puRam0000000113835990 = puVar7;
    puRam0000000113835998 = (undefined8 *)(lVar2 + uVar3 * 0x60);
    FUN_10ac0afc0();
    puVar1 = puRam0000000113835998;
  }
  if (puVar7 < puVar1) {
    *puVar7 = 0xe00000003;
    puVar7[2] = 0x40;
    puVar7[1] = 0xc0;
    *(undefined4 *)(puVar7 + 3) = 2;
    puVar7[5] = 0;
    puVar7[4] = 0;
    puVar7[7] = 0;
    puVar7[6] = 0;
    puVar7[9] = 0;
    puVar7[8] = 0;
    puVar7[0xb] = 0;
    puVar7[10] = 0;
    puVar7 = puVar7 + 0xc;
  }
  else {
    lVar5 = (long)puVar7 - (long)puRam0000000113835988;
    uVar4 = (lVar5 >> 5) * -0x5555555555555555 + 1;
    param_3 = puRam0000000113835990;
    puRam0000000113835990 = puVar7;
    if (0x2aaaaaaaaaaaaaa < uVar4) goto LAB_10ac0aec4;
    lVar2 = (long)puVar1 - (long)puRam0000000113835988 >> 5;
    uVar3 = lVar2 * 0x5555555555555556;
    if (uVar3 < uVar4 || uVar3 - uVar4 == 0) {
      uVar3 = uVar4;
    }
    if (0x155555555555554 < (ulong)(lVar2 * -0x5555555555555555)) {
      uVar3 = uVar6;
    }
    unaff_x19 = 0x113835988;
    uStack_58 = 0x113835988;
    lVar2 = unaff_x19;
    FUN_10a187714();
    puVar1 = (undefined8 *)(lVar2 + lVar5);
    *puVar1 = 0xe00000003;
    puVar1[2] = 0x40;
    puVar1[1] = 0xc0;
    *(undefined4 *)(puVar1 + 3) = 2;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    puVar7 = puVar1 + 0xc;
    puVar1 = (undefined8 *)
             ((long)puVar1 + ((long)puRam0000000113835988 - (long)puRam0000000113835990));
    param_2 = puRam0000000113835988;
    param_4 = puVar1;
    FUN_10ac0aec8(0x113835988);
    puStack_68 = puRam0000000113835988;
    puStack_60 = puRam0000000113835998;
    puStack_78 = puRam0000000113835988;
    puStack_70 = puRam0000000113835988;
    param_1 = &puStack_78;
    puRam0000000113835988 = puVar1;
    puVar1 = puRam0000000113835990;
    puRam0000000113835990 = puVar7;
    puRam0000000113835998 = (undefined8 *)(lVar2 + uVar3 * 0x60);
    FUN_10ac0afc0();
    puVar1 = puRam0000000113835998;
  }
  if (puVar7 < puVar1) {
    *puVar7 = 0x1b0000001a;
    puVar7[2] = 0x40;
    puVar7[1] = 0x340;
    *(undefined4 *)(puVar7 + 3) = 2;
    puVar7[5] = 0;
    puVar7[4] = 0;
    puVar7[7] = 0;
    puVar7[6] = 0;
    puVar7[9] = 0;
    puVar7[8] = 0;
    puVar7[0xb] = 0;
    puVar7[10] = 0;
    puVar7 = puVar7 + 0xc;
  }
  else {
    lVar5 = (long)puVar7 - (long)puRam0000000113835988;
    uVar4 = (lVar5 >> 5) * -0x5555555555555555 + 1;
    param_3 = puRam0000000113835990;
    puRam0000000113835990 = puVar7;
    if (0x2aaaaaaaaaaaaaa < uVar4) {
LAB_10ac0aec4:
      FUN_10a187700();
      pcStack_88 = FUN_10ac0aec8;
      ppuStack_d0 = &puStack_b8;
      ppuStack_c8 = &puStack_b0;
      puStack_b0 = param_4;
      puVar1 = param_2;
      ppuStack_d8 = param_1;
      puStack_b8 = param_4;
      lStack_a0 = lVar5;
      lStack_98 = unaff_x19;
      puStack_90 = &stack0xfffffffffffffff0;
      if (param_2 == param_3) {
        uStack_c0 = 1;
      }
      else {
        do {
          uVar9 = puVar1[1];
          uVar8 = *puVar1;
          uVar10 = puVar1[2];
          uVar12 = puVar1[5];
          uVar11 = puVar1[4];
          puStack_b0[3] = puVar1[3];
          puStack_b0[2] = uVar10;
          puStack_b0[5] = uVar12;
          puStack_b0[4] = uVar11;
          puStack_b0[1] = uVar9;
          *puStack_b0 = uVar8;
          puStack_b0[7] = 0;
          puStack_b0[8] = 0;
          puStack_b0[6] = 0;
          uVar8 = puVar1[6];
          puStack_b0[7] = puVar1[7];
          puStack_b0[6] = uVar8;
          puStack_b0[8] = puVar1[8];
          puVar1[6] = 0;
          puVar1[7] = 0;
          puVar1[8] = 0;
          puStack_b0[9] = 0;
          puStack_b0[10] = 0;
          puStack_b0[0xb] = 0;
          uVar8 = puVar1[9];
          puStack_b0[10] = puVar1[10];
          puStack_b0[9] = uVar8;
          puStack_b0[0xb] = puVar1[0xb];
          puVar1[9] = 0;
          puVar1[10] = 0;
          puVar1[0xb] = 0;
          puVar1 = puVar1 + 0xc;
          puStack_b0 = puStack_b0 + 0xc;
        } while (puVar1 != param_3);
        uStack_c0 = 1;
        do {
          puStack_a8 = param_2 + 9;
          FUN_10a187808(&puStack_a8);
          puStack_a8 = param_2 + 6;
          func_0x00010a187500(&puStack_a8);
          param_2 = param_2 + 0xc;
        } while (param_2 != param_3);
      }
      FUN_10a187758(&ppuStack_d8);
      return;
    }
    lVar2 = (long)puVar1 - (long)puRam0000000113835988 >> 5;
    uVar3 = lVar2 * 0x5555555555555556;
    if (uVar3 < uVar4 || uVar3 - uVar4 == 0) {
      uVar3 = uVar4;
    }
    if (0x155555555555554 < (ulong)(lVar2 * -0x5555555555555555)) {
      uVar3 = uVar6;
    }
    lVar2 = 0x113835988;
    uStack_58 = 0x113835988;
    FUN_10a187714();
    puVar1 = (undefined8 *)(lVar2 + lVar5);
    *puVar1 = 0x1b0000001a;
    puVar1[2] = 0x40;
    puVar1[1] = 0x340;
    *(undefined4 *)(puVar1 + 3) = 2;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    puVar7 = puVar1 + 0xc;
    puVar1 = (undefined8 *)
             ((long)puVar1 + ((long)puRam0000000113835988 - (long)puRam0000000113835990));
    FUN_10ac0aec8(0x113835988,puRam0000000113835988,puRam0000000113835990,puVar1);
    puStack_68 = puRam0000000113835988;
    puStack_60 = puRam0000000113835998;
    puStack_78 = puRam0000000113835988;
    puStack_70 = puRam0000000113835988;
    puRam0000000113835988 = puVar1;
    puRam0000000113835990 = puVar7;
    puRam0000000113835998 = (undefined8 *)(lVar2 + uVar3 * 0x60);
    FUN_10ac0afc0(&puStack_78);
  }
  puRam0000000113835990 = puVar7;
  return;
}



/* Entry: 10ac0aec8; end: 10ac0afbf;  */

void FUN_10ac0aec8(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_58;
  undefined8 **ppuStack_50;
  undefined8 **ppuStack_48;
  undefined1 uStack_40;
  undefined8 *puStack_38;
  undefined8 *puStack_30;
  undefined8 *puStack_28;
  
  ppuStack_50 = &puStack_38;
  ppuStack_48 = &puStack_30;
  puStack_30 = param_4;
  puVar1 = param_2;
  uStack_58 = param_1;
  puStack_38 = param_4;
  if (param_2 == param_3) {
    uStack_40 = 1;
  }
  else {
    do {
      uVar3 = puVar1[1];
      uVar2 = *puVar1;
      uVar4 = puVar1[2];
      uVar6 = puVar1[5];
      uVar5 = puVar1[4];
      puStack_30[3] = puVar1[3];
      puStack_30[2] = uVar4;
      puStack_30[5] = uVar6;
      puStack_30[4] = uVar5;
      puStack_30[1] = uVar3;
      *puStack_30 = uVar2;
      puStack_30[7] = 0;
      puStack_30[8] = 0;
      puStack_30[6] = 0;
      uVar2 = puVar1[6];
      puStack_30[7] = puVar1[7];
      puStack_30[6] = uVar2;
      puStack_30[8] = puVar1[8];
      puVar1[6] = 0;
      puVar1[7] = 0;
      puVar1[8] = 0;
      puStack_30[9] = 0;
      puStack_30[10] = 0;
      puStack_30[0xb] = 0;
      uVar2 = puVar1[9];
      puStack_30[10] = puVar1[10];
      puStack_30[9] = uVar2;
      puStack_30[0xb] = puVar1[0xb];
      puVar1[9] = 0;
      puVar1[10] = 0;
      puVar1[0xb] = 0;
      puVar1 = puVar1 + 0xc;
      puStack_30 = puStack_30 + 0xc;
    } while (puVar1 != param_3);
    uStack_40 = 1;
    do {
      puStack_28 = param_2 + 9;
      FUN_10a187808(&puStack_28);
      puStack_28 = param_2 + 6;
      func_0x00010a187500(&puStack_28);
      param_2 = param_2 + 0xc;
    } while (param_2 != param_3);
  }
  FUN_10a187758(&uStack_58);
  return;
}



/* Entry: 10ac0afc0; end: 10ac0b037;  */

long * FUN_10ac0afc0(long *param_1)

{
  long lVar1;
  long lVar2;
  long lStack_38;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x60;
    lStack_38 = lVar2 + -0x18;
    FUN_10a187808(&lStack_38);
    lStack_38 = lVar2 + -0x30;
    func_0x00010a187500(&lStack_38);
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10ac0b038; end: 10ac0c817;  */

/* WARNING: Removing unreachable block (ram,0x00010ac0fa44) */
/* WARNING: Type propagation algorithm not settling */

long *******
FUN_10ac0b038(long *******param_1,long *******param_2,long *******param_3,long *******param_4)

{
  undefined8 *puVar1;
  long *plVar2;
  long ******pppppplVar3;
  long ******pppppplVar4;
  code *pcVar5;
  long *******ppppppplVar6;
  long *******ppppppplVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long ******pppppplVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  long *******unaff_x23;
  long *******ppppppplVar15;
  long *******unaff_x25;
  long *******unaff_x26;
  long *****ppppplVar16;
  long ******pppppplVar17;
  long *****ppppplVar18;
  long *******ppppppplStack_238;
  long ******pppppplStack_230;
  long ******pppppplStack_228;
  long ******pppppplStack_220;
  long *******ppppppplStack_218;
  long *******ppppppplStack_210;
  long ******pppppplStack_208;
  long ******pppppplStack_200;
  undefined1 uStack_1f8;
  long ******pppppplStack_1f0;
  long ******pppppplStack_1e8;
  long *******ppppppplStack_1e0;
  long *******ppppppplStack_1d8;
  long *******ppppppplStack_1d0;
  long *******ppppppplStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  long lStack_1b0;
  long *******ppppppplStack_1a8;
  undefined1 ***pppuStack_1a0;
  code *pcStack_198;
  long ******pppppplStack_188;
  long ******pppppplStack_180;
  long *******ppppppplStack_178;
  long *******ppppppplStack_170;
  long *******ppppppplStack_168;
  long *******ppppppplStack_160;
  undefined8 uStack_158;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  long *******ppppppplStack_f8;
  long *******ppppppplStack_f0;
  long *******ppppppplStack_e8;
  long *******ppppppplStack_e0;
  undefined8 uStack_d8;
  undefined1 *puStack_90;
  undefined8 uStack_88;
  long *******ppppppplStack_78;
  long *******ppppppplStack_70;
  long *******ppppppplStack_68;
  long *******ppppppplStack_60;
  undefined8 uStack_58;
  
  ppppppplVar15 = ppppppplRam00000001138359c8;
  uVar14 = 0x2aaaaaaaaaaaaaa;
  if (ppppppplRam00000001138359c0 < ppppppplRam00000001138359c8) {
    *ppppppplRam00000001138359c0 = (long ******)0xf00000004;
    ppppppplRam00000001138359c0[2] = (long ******)0x40;
    ppppppplRam00000001138359c0[1] = (long ******)0x0;
    *(undefined4 *)(ppppppplRam00000001138359c0 + 3) = 2;
    ppppppplRam00000001138359c0[5] = (long ******)0x0;
    ppppppplRam00000001138359c0[4] = (long ******)0x0;
    ppppppplRam00000001138359c0[7] = (long ******)0x0;
    ppppppplRam00000001138359c0[6] = (long ******)0x0;
    ppppppplRam00000001138359c0[9] = (long ******)0x0;
    ppppppplRam00000001138359c0[8] = (long ******)0x0;
    ppppppplRam00000001138359c0[0xb] = (long ******)0x0;
    ppppppplRam00000001138359c0[10] = (long ******)0x0;
    ppppppplVar6 = ppppppplRam00000001138359c0 + 0xc;
    ppppppplRam00000001138359c0 = param_3;
LAB_10ac0b180:
    unaff_x23 = (long *******)0x113835000;
    if (ppppppplVar6 < ppppppplVar15) {
      *ppppppplVar6 = (long ******)0x1000000005;
      ppppppplVar6[2] = (long ******)0x40;
      ppppppplVar6[1] = (long ******)0x80;
      *(undefined4 *)(ppppppplVar6 + 3) = 2;
      ppppppplVar6[5] = (long ******)0x0;
      ppppppplVar6[4] = (long ******)0x0;
      ppppppplVar6[7] = (long ******)0x0;
      ppppppplVar6[6] = (long ******)0x0;
      ppppppplVar6[9] = (long ******)0x0;
      ppppppplVar6[8] = (long ******)0x0;
      ppppppplVar6[0xb] = (long ******)0x0;
      ppppppplVar6[10] = (long ******)0x0;
      ppppppplVar6 = ppppppplVar6 + 0xc;
    }
    else {
      lVar13 = (long)ppppppplVar6 - (long)ppppppplRam00000001138359b8;
      uVar12 = (lVar13 >> 5) * -0x5555555555555555 + 1;
      param_3 = ppppppplRam00000001138359c0;
      ppppppplRam00000001138359c0 = ppppppplVar6;
      if (0x2aaaaaaaaaaaaaa < uVar12) goto LAB_10ac0b5f0;
      lVar8 = (long)ppppppplVar15 - (long)ppppppplRam00000001138359b8 >> 5;
      uVar10 = lVar8 * 0x5555555555555556;
      if (uVar10 < uVar12 || uVar10 - uVar12 == 0) {
        uVar10 = uVar12;
      }
      if (0x155555555555554 < (ulong)(lVar8 * -0x5555555555555555)) {
        uVar10 = uVar14;
      }
      lVar8 = 0x1138359b8;
      uStack_58 = 0x1138359b8;
      FUN_10a187714();
      puVar1 = (undefined8 *)(lVar8 + lVar13);
      unaff_x25 = (long *******)(lVar8 + uVar10 * 0x60);
      *puVar1 = 0x1000000005;
      puVar1[2] = 0x40;
      puVar1[1] = 0x80;
      *(undefined4 *)(puVar1 + 3) = 2;
      puVar1[5] = 0;
      puVar1[4] = 0;
      puVar1[7] = 0;
      puVar1[6] = 0;
      puVar1[9] = 0;
      puVar1[8] = 0;
      puVar1[0xb] = 0;
      puVar1[10] = 0;
      ppppppplVar6 = (long *******)(puVar1 + 0xc);
      ppppppplVar15 =
           (long *******)
           ((long)puVar1 + ((long)ppppppplRam00000001138359b8 - (long)ppppppplRam00000001138359c0));
      param_2 = ppppppplRam00000001138359b8;
      param_4 = ppppppplVar15;
      FUN_10ac0aec8(0x1138359b8);
      ppppppplStack_68 = ppppppplRam00000001138359b8;
      ppppppplStack_60 = ppppppplRam00000001138359c8;
      ppppppplStack_78 = ppppppplRam00000001138359b8;
      ppppppplStack_70 = ppppppplRam00000001138359b8;
      param_1 = (long *******)&ppppppplStack_78;
      ppppppplRam00000001138359b8 = ppppppplVar15;
      ppppppplVar15 = ppppppplRam00000001138359c0;
      ppppppplRam00000001138359c0 = ppppppplVar6;
      ppppppplRam00000001138359c8 = unaff_x25;
      FUN_10ac0afc0();
      ppppppplVar15 = ppppppplRam00000001138359c8;
    }
    if (ppppppplVar6 < ppppppplVar15) {
      *ppppppplVar6 = (long ******)0xb00000000;
      ppppppplVar6[2] = (long ******)0x40;
      ppppppplVar6[1] = (long ******)0x100;
      *(undefined4 *)(ppppppplVar6 + 3) = 2;
      ppppppplVar6[5] = (long ******)0x0;
      ppppppplVar6[4] = (long ******)0x0;
      ppppppplVar6[7] = (long ******)0x0;
      ppppppplVar6[6] = (long ******)0x0;
      ppppppplVar6[9] = (long ******)0x0;
      ppppppplVar6[8] = (long ******)0x0;
      ppppppplVar6[0xb] = (long ******)0x0;
      ppppppplVar6[10] = (long ******)0x0;
      ppppppplVar6 = ppppppplVar6 + 0xc;
    }
    else {
      lVar13 = (long)ppppppplVar6 - (long)ppppppplRam00000001138359b8;
      uVar12 = (lVar13 >> 5) * -0x5555555555555555 + 1;
      param_3 = ppppppplRam00000001138359c0;
      ppppppplRam00000001138359c0 = ppppppplVar6;
      if (0x2aaaaaaaaaaaaaa < uVar12) goto LAB_10ac0b5f0;
      lVar8 = (long)ppppppplVar15 - (long)ppppppplRam00000001138359b8 >> 5;
      uVar10 = lVar8 * 0x5555555555555556;
      if (uVar10 < uVar12 || uVar10 - uVar12 == 0) {
        uVar10 = uVar12;
      }
      if (0x155555555555554 < (ulong)(lVar8 * -0x5555555555555555)) {
        uVar10 = uVar14;
      }
      lVar8 = 0x1138359b8;
      uStack_58 = 0x1138359b8;
      FUN_10a187714();
      puVar1 = (undefined8 *)(lVar8 + lVar13);
      unaff_x25 = (long *******)(lVar8 + uVar10 * 0x60);
      *puVar1 = 0xb00000000;
      puVar1[2] = 0x40;
      puVar1[1] = 0x100;
      *(undefined4 *)(puVar1 + 3) = 2;
      puVar1[5] = 0;
      puVar1[4] = 0;
      puVar1[7] = 0;
      puVar1[6] = 0;
      puVar1[9] = 0;
      puVar1[8] = 0;
      puVar1[0xb] = 0;
      puVar1[10] = 0;
      ppppppplVar6 = (long *******)(puVar1 + 0xc);
      ppppppplVar15 =
           (long *******)
           ((long)puVar1 + ((long)ppppppplRam00000001138359b8 - (long)ppppppplRam00000001138359c0));
      param_2 = ppppppplRam00000001138359b8;
      param_4 = ppppppplVar15;
      FUN_10ac0aec8(0x1138359b8);
      ppppppplStack_68 = ppppppplRam00000001138359b8;
      ppppppplStack_60 = ppppppplRam00000001138359c8;
      ppppppplStack_78 = ppppppplRam00000001138359b8;
      ppppppplStack_70 = ppppppplRam00000001138359b8;
      param_1 = (long *******)&ppppppplStack_78;
      ppppppplRam00000001138359b8 = ppppppplVar15;
      ppppppplVar15 = ppppppplRam00000001138359c0;
      ppppppplRam00000001138359c0 = ppppppplVar6;
      ppppppplRam00000001138359c8 = unaff_x25;
      FUN_10ac0afc0();
      ppppppplVar15 = ppppppplRam00000001138359c8;
    }
    if (ppppppplVar6 < ppppppplVar15) {
      *ppppppplVar6 = (long ******)0xc00000001;
      ppppppplVar6[2] = (long ******)0x40;
      ppppppplVar6[1] = (long ******)0x180;
      *(undefined4 *)(ppppppplVar6 + 3) = 2;
      ppppppplVar6[5] = (long ******)0x0;
      ppppppplVar6[4] = (long ******)0x0;
      ppppppplVar6[7] = (long ******)0x0;
      ppppppplVar6[6] = (long ******)0x0;
      ppppppplVar6[9] = (long ******)0x0;
      ppppppplVar6[8] = (long ******)0x0;
      ppppppplVar6[0xb] = (long ******)0x0;
      ppppppplVar6[10] = (long ******)0x0;
      ppppppplVar6 = ppppppplVar6 + 0xc;
    }
    else {
      lVar13 = (long)ppppppplVar6 - (long)ppppppplRam00000001138359b8;
      uVar12 = (lVar13 >> 5) * -0x5555555555555555 + 1;
      param_3 = ppppppplRam00000001138359c0;
      ppppppplRam00000001138359c0 = ppppppplVar6;
      if (0x2aaaaaaaaaaaaaa < uVar12) goto LAB_10ac0b5f0;
      lVar8 = (long)ppppppplVar15 - (long)ppppppplRam00000001138359b8 >> 5;
      uVar10 = lVar8 * 0x5555555555555556;
      if (uVar10 < uVar12 || uVar10 - uVar12 == 0) {
        uVar10 = uVar12;
      }
      if (0x155555555555554 < (ulong)(lVar8 * -0x5555555555555555)) {
        uVar10 = uVar14;
      }
      lVar8 = 0x1138359b8;
      uStack_58 = 0x1138359b8;
      FUN_10a187714();
      puVar1 = (undefined8 *)(lVar8 + lVar13);
      unaff_x25 = (long *******)(lVar8 + uVar10 * 0x60);
      *puVar1 = 0xc00000001;
      puVar1[2] = 0x40;
      puVar1[1] = 0x180;
      *(undefined4 *)(puVar1 + 3) = 2;
      puVar1[5] = 0;
      puVar1[4] = 0;
      puVar1[7] = 0;
      puVar1[6] = 0;
      puVar1[9] = 0;
      puVar1[8] = 0;
      puVar1[0xb] = 0;
      puVar1[10] = 0;
      ppppppplVar6 = (long *******)(puVar1 + 0xc);
      ppppppplVar15 =
           (long *******)
           ((long)puVar1 + ((long)ppppppplRam00000001138359b8 - (long)ppppppplRam00000001138359c0));
      param_2 = ppppppplRam00000001138359b8;
      param_4 = ppppppplVar15;
      FUN_10ac0aec8(0x1138359b8);
      ppppppplStack_68 = ppppppplRam00000001138359b8;
      ppppppplStack_60 = ppppppplRam00000001138359c8;
      ppppppplStack_78 = ppppppplRam00000001138359b8;
      ppppppplStack_70 = ppppppplRam00000001138359b8;
      param_1 = (long *******)&ppppppplStack_78;
      ppppppplRam00000001138359b8 = ppppppplVar15;
      ppppppplVar15 = ppppppplRam00000001138359c0;
      ppppppplRam00000001138359c0 = ppppppplVar6;
      ppppppplRam00000001138359c8 = unaff_x25;
      FUN_10ac0afc0();
      ppppppplVar15 = ppppppplRam00000001138359c8;
    }
    if (ppppppplVar6 < ppppppplVar15) {
      *ppppppplVar6 = (long ******)0x150000000a;
      ppppppplVar6[2] = (long ******)0x30;
      ppppppplVar6[1] = (long ******)0x200;
      *(undefined4 *)(ppppppplVar6 + 3) = 2;
      ppppppplVar6[5] = (long ******)0x0;
      ppppppplVar6[4] = (long ******)0x0;
      ppppppplVar6[7] = (long ******)0x0;
      ppppppplVar6[6] = (long ******)0x0;
      ppppppplVar6[9] = (long ******)0x0;
      ppppppplVar6[8] = (long ******)0x0;
      ppppppplVar6[0xb] = (long ******)0x0;
      ppppppplVar6[10] = (long ******)0x0;
      ppppppplRam00000001138359c0 = ppppppplVar6 + 0xc;
      return param_1;
    }
    lVar13 = (long)ppppppplVar6 - (long)ppppppplRam00000001138359b8;
    uVar12 = (lVar13 >> 5) * -0x5555555555555555 + 1;
    param_3 = ppppppplRam00000001138359c0;
    ppppppplRam00000001138359c0 = ppppppplVar6;
    if (uVar12 < 0x2aaaaaaaaaaaaab) {
      lVar8 = (long)ppppppplVar15 - (long)ppppppplRam00000001138359b8 >> 5;
      uVar10 = lVar8 * 0x5555555555555556;
      if (uVar10 < uVar12 || uVar10 - uVar12 == 0) {
        uVar10 = uVar12;
      }
      if (0x155555555555554 < (ulong)(lVar8 * -0x5555555555555555)) {
        uVar10 = uVar14;
      }
      lVar8 = 0x1138359b8;
      uStack_58 = 0x1138359b8;
      FUN_10a187714();
      puVar1 = (undefined8 *)(lVar8 + lVar13);
      *puVar1 = 0x150000000a;
      puVar1[2] = 0x30;
      puVar1[1] = 0x200;
      *(undefined4 *)(puVar1 + 3) = 2;
      puVar1[5] = 0;
      puVar1[4] = 0;
      puVar1[7] = 0;
      puVar1[6] = 0;
      puVar1[9] = 0;
      puVar1[8] = 0;
      puVar1[0xb] = 0;
      puVar1[10] = 0;
      lVar13 = (long)puVar1 +
               ((long)ppppppplRam00000001138359b8 - (long)ppppppplRam00000001138359c0);
      FUN_10ac0aec8(0x1138359b8,ppppppplRam00000001138359b8,ppppppplRam00000001138359c0,lVar13);
      ppppppplStack_68 = ppppppplRam00000001138359b8;
      ppppppplStack_60 = ppppppplRam00000001138359c8;
      ppppppplStack_78 = ppppppplRam00000001138359b8;
      ppppppplStack_70 = ppppppplRam00000001138359b8;
      ppppppplVar15 = (long *******)&ppppppplStack_78;
      ppppppplRam00000001138359b8 = (long *******)lVar13;
      ppppppplRam00000001138359c0 = (long *******)(puVar1 + 0xc);
      ppppppplRam00000001138359c8 = (long *******)(lVar8 + uVar10 * 0x60);
      FUN_10ac0afc0(ppppppplVar15);
      ppppppplRam00000001138359c0 = (long *******)(puVar1 + 0xc);
      return ppppppplVar15;
    }
  }
  else {
    lVar13 = (long)ppppppplRam00000001138359c0 - (long)ppppppplRam00000001138359b8;
    uVar12 = (lVar13 >> 5) * -0x5555555555555555 + 1;
    if (uVar12 < 0x2aaaaaaaaaaaaab) {
      lVar8 = (long)ppppppplRam00000001138359c8 - (long)ppppppplRam00000001138359b8 >> 5;
      uVar10 = lVar8 * 0x5555555555555556;
      if (uVar10 < uVar12 || uVar10 - uVar12 == 0) {
        uVar10 = uVar12;
      }
      if (0x155555555555554 < (ulong)(lVar8 * -0x5555555555555555)) {
        uVar10 = uVar14;
      }
      lVar8 = 0x1138359b8;
      uStack_58 = 0x1138359b8;
      FUN_10a187714();
      puVar1 = (undefined8 *)(lVar8 + lVar13);
      *puVar1 = 0xf00000004;
      puVar1[2] = 0x40;
      puVar1[1] = 0;
      *(undefined4 *)(puVar1 + 3) = 2;
      puVar1[5] = 0;
      puVar1[4] = 0;
      puVar1[7] = 0;
      puVar1[6] = 0;
      puVar1[9] = 0;
      puVar1[8] = 0;
      puVar1[0xb] = 0;
      puVar1[10] = 0;
      ppppppplVar6 = (long *******)(puVar1 + 0xc);
      ppppppplVar15 =
           (long *******)
           ((long)puVar1 + ((long)ppppppplRam00000001138359b8 - (long)ppppppplRam00000001138359c0));
      param_2 = ppppppplRam00000001138359b8;
      param_4 = ppppppplVar15;
      FUN_10ac0aec8(0x1138359b8);
      ppppppplStack_68 = ppppppplRam00000001138359b8;
      ppppppplStack_60 = ppppppplRam00000001138359c8;
      ppppppplStack_78 = ppppppplRam00000001138359b8;
      ppppppplStack_70 = ppppppplRam00000001138359b8;
      param_1 = (long *******)&ppppppplStack_78;
      ppppppplRam00000001138359b8 = ppppppplVar15;
      ppppppplVar15 = ppppppplRam00000001138359c0;
      ppppppplRam00000001138359c0 = ppppppplVar6;
      ppppppplRam00000001138359c8 = (long *******)(lVar8 + uVar10 * 0x60);
      FUN_10ac0afc0();
      ppppppplVar15 = ppppppplRam00000001138359c8;
      goto LAB_10ac0b180;
    }
  }
LAB_10ac0b5f0:
  FUN_10a187700();
  ppppppplVar15 = ppppppplRam00000001138359f8;
  uStack_88 = 0x10ac0b5f4;
  uVar14 = 0x2aaaaaaaaaaaaaa;
  puStack_90 = &stack0xfffffffffffffff0;
  if (ppppppplRam00000001138359f0 < ppppppplRam00000001138359f8) {
    *ppppppplRam00000001138359f0 = (long ******)0xd800000016;
    ppppppplRam00000001138359f0[2] = (long ******)0x40;
    ppppppplRam00000001138359f0[1] = (long ******)0x0;
    *(undefined4 *)(ppppppplRam00000001138359f0 + 3) = 0;
    ppppppplRam00000001138359f0[5] = (long ******)0x0;
    ppppppplRam00000001138359f0[4] = (long ******)0x0;
    ppppppplRam00000001138359f0[7] = (long ******)0x0;
    ppppppplRam00000001138359f0[6] = (long ******)0x0;
    ppppppplRam00000001138359f0[9] = (long ******)0x0;
    ppppppplRam00000001138359f0[8] = (long ******)0x0;
    ppppppplRam00000001138359f0[0xb] = (long ******)0x0;
    ppppppplRam00000001138359f0[10] = (long ******)0x0;
    ppppppplVar6 = ppppppplRam00000001138359f0 + 0xc;
LAB_10ac0b734:
    unaff_x23 = (long *******)0x113835000;
    if (ppppppplVar6 < ppppppplVar15) {
      *ppppppplVar6 = (long ******)0xd800000017;
      ppppppplVar6[2] = (long ******)0x40;
      ppppppplVar6[1] = (long ******)0x40;
      *(undefined4 *)(ppppppplVar6 + 3) = 0;
      ppppppplVar6[5] = (long ******)0x0;
      ppppppplVar6[4] = (long ******)0x0;
      ppppppplVar6[7] = (long ******)0x0;
      ppppppplVar6[6] = (long ******)0x0;
      ppppppplVar6[9] = (long ******)0x0;
      ppppppplVar6[8] = (long ******)0x0;
      ppppppplVar6[0xb] = (long ******)0x0;
      ppppppplVar6[10] = (long ******)0x0;
      ppppppplVar6 = ppppppplVar6 + 0xc;
    }
    else {
      lVar13 = (long)ppppppplVar6 - (long)ppppppplRam00000001138359e8;
      uVar12 = (lVar13 >> 5) * -0x5555555555555555 + 1;
      ppppppplRam00000001138359f0 = ppppppplVar6;
      if (0x2aaaaaaaaaaaaaa < uVar12) goto LAB_10ac0c814;
      lVar8 = (long)ppppppplVar15 - (long)ppppppplRam00000001138359e8 >> 5;
      uVar10 = lVar8 * 0x5555555555555556;
      if (uVar10 < uVar12 || uVar10 - uVar12 == 0) {
        uVar10 = uVar12;
      }
      if (0x155555555555554 < (ulong)(lVar8 * -0x5555555555555555)) {
        uVar10 = uVar14;
      }
      lVar8 = 0x1138359e8;
      uStack_d8 = 0x1138359e8;
      FUN_10a187714();
      puVar1 = (undefined8 *)(lVar8 + lVar13);
      unaff_x25 = (long *******)(lVar8 + uVar10 * 0x60);
      *puVar1 = 0xd800000017;
      puVar1[2] = 0x40;
      puVar1[1] = 0x40;
      *(undefined4 *)(puVar1 + 3) = 0;
      puVar1[5] = 0;
      puVar1[4] = 0;
      puVar1[7] = 0;
      puVar1[6] = 0;
      puVar1[9] = 0;
      puVar1[8] = 0;
      puVar1[0xb] = 0;
      puVar1[10] = 0;
      ppppppplVar6 = (long *******)(puVar1 + 0xc);
      ppppppplVar15 =
           (long *******)
           ((long)puVar1 + ((long)ppppppplRam00000001138359e8 - (long)ppppppplRam00000001138359f0));
      param_2 = ppppppplRam00000001138359e8;
      param_4 = ppppppplVar15;
      FUN_10ac0aec8(0x1138359e8);
      ppppppplStack_e8 = ppppppplRam00000001138359e8;
      ppppppplStack_e0 = ppppppplRam00000001138359f8;
      ppppppplStack_f8 = ppppppplRam00000001138359e8;
      ppppppplStack_f0 = ppppppplRam00000001138359e8;
      param_1 = (long *******)&ppppppplStack_f8;
      ppppppplRam00000001138359e8 = ppppppplVar15;
      ppppppplVar15 = ppppppplRam00000001138359f0;
      ppppppplRam00000001138359f0 = ppppppplVar6;
      ppppppplRam00000001138359f8 = unaff_x25;
      FUN_10ac0afc0();
      param_3 = ppppppplRam00000001138359f0;
      ppppppplVar15 = ppppppplRam00000001138359f8;
    }
    if (ppppppplVar6 < ppppppplVar15) {
      *ppppppplVar6 = (long ******)0xd800000018;
      ppppppplVar6[2] = (long ******)0x30;
      ppppppplVar6[1] = (long ******)0x80;
      *(undefined4 *)(ppppppplVar6 + 3) = 0;
      ppppppplVar6[5] = (long ******)0x0;
      ppppppplVar6[4] = (long ******)0x0;
      ppppppplVar6[7] = (long ******)0x0;
      ppppppplVar6[6] = (long ******)0x0;
      ppppppplVar6[9] = (long ******)0x0;
      ppppppplVar6[8] = (long ******)0x0;
      ppppppplVar6[0xb] = (long ******)0x0;
      ppppppplVar6[10] = (long ******)0x0;
      ppppppplVar6 = ppppppplVar6 + 0xc;
    }
    else {
      lVar13 = (long)ppppppplVar6 - (long)ppppppplRam00000001138359e8;
      uVar12 = (lVar13 >> 5) * -0x5555555555555555 + 1;
      ppppppplRam00000001138359f0 = ppppppplVar6;
      if (0x2aaaaaaaaaaaaaa < uVar12) goto LAB_10ac0c814;
      lVar8 = (long)ppppppplVar15 - (long)ppppppplRam00000001138359e8 >> 5;
      uVar10 = lVar8 * 0x5555555555555556;
      if (uVar10 < uVar12 || uVar10 - uVar12 == 0) {
        uVar10 = uVar12;
      }
      if (0x155555555555554 < (ulong)(lVar8 * -0x5555555555555555)) {
        uVar10 = uVar14;
      }
      lVar8 = 0x1138359e8;
      uStack_d8 = 0x1138359e8;
      FUN_10a187714();
      puVar1 = (undefined8 *)(lVar8 + lVar13);
      unaff_x25 = (long *******)(lVar8 + uVar10 * 0x60);
      *puVar1 = 0xd800000018;
      puVar1[2] = 0x30;
      puVar1[1] = 0x80;
      *(undefined4 *)(puVar1 + 3) = 0;
      puVar1[5] = 0;
      puVar1[4] = 0;
      puVar1[7] = 0;
      puVar1[6] = 0;
      puVar1[9] = 0;
      puVar1[8] = 0;
      puVar1[0xb] = 0;
      puVar1[10] = 0;
      ppppppplVar6 = (long *******)(puVar1 + 0xc);
      ppppppplVar15 =
           (long *******)
           ((long)puVar1 + ((long)ppppppplRam00000001138359e8 - (long)ppppppplRam00000001138359f0));
      param_2 = ppppppplRam00000001138359e8;
      param_4 = ppppppplVar15;
      FUN_10ac0aec8(0x1138359e8);
      ppppppplStack_e8 = ppppppplRam00000001138359e8;
      ppppppplStack_e0 = ppppppplRam00000001138359f8;
      ppppppplStack_f8 = ppppppplRam00000001138359e8;
      ppppppplStack_f0 = ppppppplRam00000001138359e8;
      param_1 = (long *******)&ppppppplStack_f8;
      ppppppplRam00000001138359e8 = ppppppplVar15;
      ppppppplVar15 = ppppppplRam00000001138359f0;
      ppppppplRam00000001138359f0 = ppppppplVar6;
      ppppppplRam00000001138359f8 = unaff_x25;
      FUN_10ac0afc0();
      param_3 = ppppppplRam00000001138359f0;
      ppppppplVar15 = ppppppplRam00000001138359f8;
    }
    if (ppppppplVar6 < ppppppplVar15) {
      *ppppppplVar6 = (long ******)0xd800000019;
      ppppppplVar6[2] = (long ******)0x30;
      ppppppplVar6[1] = (long ******)0xb0;
      *(undefined4 *)(ppppppplVar6 + 3) = 0;
      ppppppplVar6[5] = (long ******)0x0;
      ppppppplVar6[4] = (long ******)0x0;
      ppppppplVar6[7] = (long ******)0x0;
      ppppppplVar6[6] = (long ******)0x0;
      ppppppplVar6[9] = (long ******)0x0;
      ppppppplVar6[8] = (long ******)0x0;
      ppppppplVar6[0xb] = (long ******)0x0;
      ppppppplVar6[10] = (long ******)0x0;
      ppppppplVar6 = ppppppplVar6 + 0xc;
    }
    else {
      lVar13 = (long)ppppppplVar6 - (long)ppppppplRam00000001138359e8;
      uVar12 = (lVar13 >> 5) * -0x5555555555555555 + 1;
      ppppppplRam00000001138359f0 = ppppppplVar6;
      if (0x2aaaaaaaaaaaaaa < uVar12) goto LAB_10ac0c814;
      lVar8 = (long)ppppppplVar15 - (long)ppppppplRam00000001138359e8 >> 5;
      uVar10 = lVar8 * 0x5555555555555556;
      if (uVar10 < uVar12 || uVar10 - uVar12 == 0) {
        uVar10 = uVar12;
      }
      if (0x155555555555554 < (ulong)(lVar8 * -0x5555555555555555)) {
        uVar10 = uVar14;
      }
      lVar8 = 0x1138359e8;
      uStack_d8 = 0x1138359e8;
      FUN_10a187714();
      puVar1 = (undefined8 *)(lVar8 + lVar13);
      unaff_x25 = (long *******)(lVar8 + uVar10 * 0x60);
      *puVar1 = 0xd800000019;
      puVar1[2] = 0x30;
      puVar1[1] = 0xb0;
      *(undefined4 *)(puVar1 + 3) = 0;
      puVar1[5] = 0;
      puVar1[4] = 0;
      puVar1[7] = 0;
      puVar1[6] = 0;
      puVar1[9] = 0;
      puVar1[8] = 0;
      puVar1[0xb] = 0;
      puVar1[10] = 0;
      ppppppplVar6 = (long *******)(puVar1 + 0xc);
      ppppppplVar15 =
           (long *******)
           ((long)puVar1 + ((long)ppppppplRam00000001138359e8 - (long)ppppppplRam00000001138359f0));
      param_2 = ppppppplRam00000001138359e8;
      param_4 = ppppppplVar15;
      FUN_10ac0aec8(0x1138359e8);
      ppppppplStack_e8 = ppppppplRam00000001138359e8;
      ppppppplStack_e0 = ppppppplRam00000001138359f8;
      ppppppplStack_f8 = ppppppplRam00000001138359e8;
      ppppppplStack_f0 = ppppppplRam00000001138359e8;
      param_1 = (long *******)&ppppppplStack_f8;
      ppppppplRam00000001138359e8 = ppppppplVar15;
      ppppppplVar15 = ppppppplRam00000001138359f0;
      ppppppplRam00000001138359f0 = ppppppplVar6;
      ppppppplRam00000001138359f8 = unaff_x25;
      FUN_10ac0afc0();
      param_3 = ppppppplRam00000001138359f0;
      ppppppplVar15 = ppppppplRam00000001138359f8;
    }
    if (ppppppplVar6 < ppppppplVar15) {
      *ppppppplVar6 = (long ******)0xd8000000ba;
      ppppppplVar6[2] = (long ******)0x40;
      ppppppplVar6[1] = (long ******)0xe0;
      *(undefined4 *)(ppppppplVar6 + 3) = 0;
      ppppppplVar6[5] = (long ******)0x0;
      ppppppplVar6[4] = (long ******)0x0;
      ppppppplVar6[7] = (long ******)0x0;
      ppppppplVar6[6] = (long ******)0x0;
      ppppppplVar6[9] = (long ******)0x0;
      ppppppplVar6[8] = (long ******)0x0;
      ppppppplVar6[0xb] = (long ******)0x0;
      ppppppplVar6[10] = (long ******)0x0;
      ppppppplVar6 = ppppppplVar6 + 0xc;
    }
    else {
      lVar13 = (long)ppppppplVar6 - (long)ppppppplRam00000001138359e8;
      uVar12 = (lVar13 >> 5) * -0x5555555555555555 + 1;
      ppppppplRam00000001138359f0 = ppppppplVar6;
      if (0x2aaaaaaaaaaaaaa < uVar12) goto LAB_10ac0c814;
      lVar8 = (long)ppppppplVar15 - (long)ppppppplRam00000001138359e8 >> 5;
      uVar10 = lVar8 * 0x5555555555555556;
      if (uVar10 < uVar12 || uVar10 - uVar12 == 0) {
        uVar10 = uVar12;
      }
      if (0x155555555555554 < (ulong)(lVar8 * -0x5555555555555555)) {
        uVar10 = uVar14;
      }
      lVar8 = 0x1138359e8;
      uStack_d8 = 0x1138359e8;
      FUN_10a187714();
      puVar1 = (undefined8 *)(lVar8 + lVar13);
      unaff_x25 = (long *******)(lVar8 + uVar10 * 0x60);
      *puVar1 = 0xd8000000ba;
      puVar1[2] = 0x40;
      puVar1[1] = 0xe0;
      *(undefined4 *)(puVar1 + 3) = 0;
      puVar1[5] = 0;
      puVar1[4] = 0;
      puVar1[7] = 0;
      puVar1[6] = 0;
      puVar1[9] = 0;
      puVar1[8] = 0;
      puVar1[0xb] = 0;
      puVar1[10] = 0;
      ppppppplVar6 = (long *******)(puVar1 + 0xc);
      ppppppplVar15 =
           (long *******)
           ((long)puVar1 + ((long)ppppppplRam00000001138359e8 - (long)ppppppplRam00000001138359f0));
      param_2 = ppppppplRam00000001138359e8;
      param_4 = ppppppplVar15;
      FUN_10ac0aec8(0x1138359e8);
      ppppppplStack_e8 = ppppppplRam00000001138359e8;
      ppppppplStack_e0 = ppppppplRam00000001138359f8;
      ppppppplStack_f8 = ppppppplRam00000001138359e8;
      ppppppplStack_f0 = ppppppplRam00000001138359e8;
      param_1 = (long *******)&ppppppplStack_f8;
      ppppppplRam00000001138359e8 = ppppppplVar15;
      ppppppplVar15 = ppppppplRam00000001138359f0;
      ppppppplRam00000001138359f0 = ppppppplVar6;
      ppppppplRam00000001138359f8 = unaff_x25;
      FUN_10ac0afc0();
      param_3 = ppppppplRam00000001138359f0;
      ppppppplVar15 = ppppppplRam00000001138359f8;
    }
    if (ppppppplVar6 < ppppppplVar15) {
      *ppppppplVar6 = (long ******)0xd8000000b8;
      ppppppplVar6[2] = (long ******)0x10;
      ppppppplVar6[1] = (long ******)0x120;
      *(undefined4 *)(ppppppplVar6 + 3) = 0;
      ppppppplVar6[5] = (long ******)0x0;
      ppppppplVar6[4] = (long ******)0x0;
      ppppppplVar6[7] = (long ******)0x0;
      ppppppplVar6[6] = (long ******)0x0;
      ppppppplVar6[9] = (long ******)0x0;
      ppppppplVar6[8] = (long ******)0x0;
      ppppppplVar6[0xb] = (long ******)0x0;
      ppppppplVar6[10] = (long ******)0x0;
      ppppppplVar6 = ppppppplVar6 + 0xc;
    }
    else {
      lVar13 = (long)ppppppplVar6 - (long)ppppppplRam00000001138359e8;
      uVar12 = (lVar13 >> 5) * -0x5555555555555555 + 1;
      ppppppplRam00000001138359f0 = ppppppplVar6;
      if (0x2aaaaaaaaaaaaaa < uVar12) goto LAB_10ac0c814;
      lVar8 = (long)ppppppplVar15 - (long)ppppppplRam00000001138359e8 >> 5;
      uVar10 = lVar8 * 0x5555555555555556;
      if (uVar10 < uVar12 || uVar10 - uVar12 == 0) {
        uVar10 = uVar12;
      }
      if (0x155555555555554 < (ulong)(lVar8 * -0x5555555555555555)) {
        uVar10 = uVar14;
      }
      lVar8 = 0x1138359e8;
      uStack_d8 = 0x1138359e8;
      FUN_10a187714();
      puVar1 = (undefined8 *)(lVar8 + lVar13);
      unaff_x25 = (long *******)(lVar8 + uVar10 * 0x60);
      *puVar1 = 0xd8000000b8;
      puVar1[2] = 0x10;
      puVar1[1] = 0x120;
      *(undefined4 *)(puVar1 + 3) = 0;
      puVar1[5] = 0;
      puVar1[4] = 0;
      puVar1[7] = 0;
      puVar1[6] = 0;
      puVar1[9] = 0;
      puVar1[8] = 0;
      puVar1[0xb] = 0;
      puVar1[10] = 0;
      ppppppplVar6 = (long *******)(puVar1 + 0xc);
      ppppppplVar15 =
           (long *******)
           ((long)puVar1 + ((long)ppppppplRam00000001138359e8 - (long)ppppppplRam00000001138359f0));
      param_2 = ppppppplRam00000001138359e8;
      param_4 = ppppppplVar15;
      FUN_10ac0aec8(0x1138359e8);
      ppppppplStack_e8 = ppppppplRam00000001138359e8;
      ppppppplStack_e0 = ppppppplRam00000001138359f8;
      ppppppplStack_f8 = ppppppplRam00000001138359e8;
      ppppppplStack_f0 = ppppppplRam00000001138359e8;
      param_1 = (long *******)&ppppppplStack_f8;
      ppppppplRam00000001138359e8 = ppppppplVar15;
      ppppppplVar15 = ppppppplRam00000001138359f0;
      ppppppplRam00000001138359f0 = ppppppplVar6;
      ppppppplRam00000001138359f8 = unaff_x25;
      FUN_10ac0afc0();
      param_3 = ppppppplRam00000001138359f0;
      ppppppplVar15 = ppppppplRam00000001138359f8;
    }
    if (ppppppplVar6 < ppppppplVar15) {
      *ppppppplVar6 = (long ******)0xd8000000b5;
      ppppppplVar6[2] = (long ******)0x10;
      ppppppplVar6[1] = (long ******)0x130;
      *(undefined4 *)(ppppppplVar6 + 3) = 0;
      ppppppplVar6[5] = (long ******)0x0;
      ppppppplVar6[4] = (long ******)0x0;
      ppppppplVar6[7] = (long ******)0x0;
      ppppppplVar6[6] = (long ******)0x0;
      ppppppplVar6[9] = (long ******)0x0;
      ppppppplVar6[8] = (long ******)0x0;
      ppppppplVar6[0xb] = (long ******)0x0;
      ppppppplVar6[10] = (long ******)0x0;
      ppppppplVar6 = ppppppplVar6 + 0xc;
    }
    else {
      lVar13 = (long)ppppppplVar6 - (long)ppppppplRam00000001138359e8;
      uVar12 = (lVar13 >> 5) * -0x5555555555555555 + 1;
      ppppppplRam00000001138359f0 = ppppppplVar6;
      if (0x2aaaaaaaaaaaaaa < uVar12) goto LAB_10ac0c814;
      lVar8 = (long)ppppppplVar15 - (long)ppppppplRam00000001138359e8 >> 5;
      uVar10 = lVar8 * 0x5555555555555556;
      if (uVar10 < uVar12 || uVar10 - uVar12 == 0) {
        uVar10 = uVar12;
      }
      if (0x155555555555554 < (ulong)(lVar8 * -0x5555555555555555)) {
        uVar10 = uVar14;
      }
      lVar8 = 0x1138359e8;
      uStack_d8 = 0x1138359e8;
      FUN_10a187714();
      puVar1 = (undefined8 *)(lVar8 + lVar13);
      unaff_x25 = (long *******)(lVar8 + uVar10 * 0x60);
      *puVar1 = 0xd8000000b5;
      puVar1[2] = 0x10;
      puVar1[1] = 0x130;
      *(undefined4 *)(puVar1 + 3) = 0;
      puVar1[5] = 0;
      puVar1[4] = 0;
      puVar1[7] = 0;
      puVar1[6] = 0;
      puVar1[9] = 0;
      puVar1[8] = 0;
      puVar1[0xb] = 0;
      puVar1[10] = 0;
      ppppppplVar6 = (long *******)(puVar1 + 0xc);
      ppppppplVar15 =
           (long *******)
           ((long)puVar1 + ((long)ppppppplRam00000001138359e8 - (long)ppppppplRam00000001138359f0));
      param_2 = ppppppplRam00000001138359e8;
      param_4 = ppppppplVar15;
      FUN_10ac0aec8(0x1138359e8);
      ppppppplStack_e8 = ppppppplRam00000001138359e8;
      ppppppplStack_e0 = ppppppplRam00000001138359f8;
      ppppppplStack_f8 = ppppppplRam00000001138359e8;
      ppppppplStack_f0 = ppppppplRam00000001138359e8;
      param_1 = (long *******)&ppppppplStack_f8;
      ppppppplRam00000001138359e8 = ppppppplVar15;
      ppppppplVar15 = ppppppplRam00000001138359f0;
      ppppppplRam00000001138359f0 = ppppppplVar6;
      ppppppplRam00000001138359f8 = unaff_x25;
      FUN_10ac0afc0();
      param_3 = ppppppplRam00000001138359f0;
      ppppppplVar15 = ppppppplRam00000001138359f8;
    }
    if (ppppppplVar6 < ppppppplVar15) {
      *ppppppplVar6 = (long ******)0xd8000000b6;
      ppppppplVar6[2] = (long ******)0x10;
      ppppppplVar6[1] = (long ******)0x140;
      *(undefined4 *)(ppppppplVar6 + 3) = 0;
      ppppppplVar6[5] = (long ******)0x0;
      ppppppplVar6[4] = (long ******)0x0;
      ppppppplVar6[7] = (long ******)0x0;
      ppppppplVar6[6] = (long ******)0x0;
      ppppppplVar6[9] = (long ******)0x0;
      ppppppplVar6[8] = (long ******)0x0;
      ppppppplVar6[0xb] = (long ******)0x0;
      ppppppplVar6[10] = (long ******)0x0;
      ppppppplVar6 = ppppppplVar6 + 0xc;
    }
    else {
      lVar13 = (long)ppppppplVar6 - (long)ppppppplRam00000001138359e8;
      uVar12 = (lVar13 >> 5) * -0x5555555555555555 + 1;
      ppppppplRam00000001138359f0 = ppppppplVar6;
      if (0x2aaaaaaaaaaaaaa < uVar12) goto LAB_10ac0c814;
      lVar8 = (long)ppppppplVar15 - (long)ppppppplRam00000001138359e8 >> 5;
      uVar10 = lVar8 * 0x5555555555555556;
      if (uVar10 < uVar12 || uVar10 - uVar12 == 0) {
        uVar10 = uVar12;
      }
      if (0x155555555555554 < (ulong)(lVar8 * -0x5555555555555555)) {
        uVar10 = uVar14;
      }
      lVar8 = 0x1138359e8;
      uStack_d8 = 0x1138359e8;
      FUN_10a187714();
      puVar1 = (undefined8 *)(lVar8 + lVar13);
      unaff_x25 = (long *******)(lVar8 + uVar10 * 0x60);
      *puVar1 = 0xd8000000b6;
      puVar1[2] = 0x10;
      puVar1[1] = 0x140;
      *(undefined4 *)(puVar1 + 3) = 0;
      puVar1[5] = 0;
      puVar1[4] = 0;
      puVar1[7] = 0;
      puVar1[6] = 0;
      puVar1[9] = 0;
      puVar1[8] = 0;
      puVar1[0xb] = 0;
      puVar1[10] = 0;
      ppppppplVar6 = (long *******)(puVar1 + 0xc);
      ppppppplVar15 =
           (long *******)
           ((long)puVar1 + ((long)ppppppplRam00000001138359e8 - (long)ppppppplRam00000001138359f0));
      param_2 = ppppppplRam00000001138359e8;
      param_4 = ppppppplVar15;
      FUN_10ac0aec8(0x1138359e8);
      ppppppplStack_e8 = ppppppplRam00000001138359e8;
      ppppppplStack_e0 = ppppppplRam00000001138359f8;
      ppppppplStack_f8 = ppppppplRam00000001138359e8;
      ppppppplStack_f0 = ppppppplRam00000001138359e8;
      param_1 = (long *******)&ppppppplStack_f8;
      ppppppplRam00000001138359e8 = ppppppplVar15;
      ppppppplVar15 = ppppppplRam00000001138359f0;
      ppppppplRam00000001138359f0 = ppppppplVar6;
      ppppppplRam00000001138359f8 = unaff_x25;
      FUN_10ac0afc0();
      param_3 = ppppppplRam00000001138359f0;
      ppppppplVar15 = ppppppplRam00000001138359f8;
    }
    if (ppppppplVar6 < ppppppplVar15) {
      *ppppppplVar6 = (long ******)0xd8000000b7;
      ppppppplVar6[2] = (long ******)0x10;
      ppppppplVar6[1] = (long ******)0x150;
      *(undefined4 *)(ppppppplVar6 + 3) = 0;
      ppppppplVar6[5] = (long ******)0x0;
      ppppppplVar6[4] = (long ******)0x0;
      ppppppplVar6[7] = (long ******)0x0;
      ppppppplVar6[6] = (long ******)0x0;
      ppppppplVar6[9] = (long ******)0x0;
      ppppppplVar6[8] = (long ******)0x0;
      ppppppplVar6[0xb] = (long ******)0x0;
      ppppppplVar6[10] = (long ******)0x0;
      ppppppplVar6 = ppppppplVar6 + 0xc;
    }
    else {
      lVar13 = (long)ppppppplVar6 - (long)ppppppplRam00000001138359e8;
      uVar12 = (lVar13 >> 5) * -0x5555555555555555 + 1;
      ppppppplRam00000001138359f0 = ppppppplVar6;
      if (0x2aaaaaaaaaaaaaa < uVar12) goto LAB_10ac0c814;
      lVar8 = (long)ppppppplVar15 - (long)ppppppplRam00000001138359e8 >> 5;
      uVar10 = lVar8 * 0x5555555555555556;
      if (uVar10 < uVar12 || uVar10 - uVar12 == 0) {
        uVar10 = uVar12;
      }
      if (0x155555555555554 < (ulong)(lVar8 * -0x5555555555555555)) {
        uVar10 = uVar14;
      }
      lVar8 = 0x1138359e8;
      uStack_d8 = 0x1138359e8;
      FUN_10a187714();
      puVar1 = (undefined8 *)(lVar8 + lVar13);
      unaff_x25 = (long *******)(lVar8 + uVar10 * 0x60);
      *puVar1 = 0xd8000000b7;
      puVar1[2] = 0x10;
      puVar1[1] = 0x150;
      *(undefined4 *)(puVar1 + 3) = 0;
      puVar1[5] = 0;
      puVar1[4] = 0;
      puVar1[7] = 0;
      puVar1[6] = 0;
      puVar1[9] = 0;
      puVar1[8] = 0;
      puVar1[0xb] = 0;
      puVar1[10] = 0;
      ppppppplVar6 = (long *******)(puVar1 + 0xc);
      ppppppplVar15 =
           (long *******)
           ((long)puVar1 + ((long)ppppppplRam00000001138359e8 - (long)ppppppplRam00000001138359f0));
      param_2 = ppppppplRam00000001138359e8;
      param_4 = ppppppplVar15;
      FUN_10ac0aec8(0x1138359e8);
      ppppppplStack_e8 = ppppppplRam00000001138359e8;
      ppppppplStack_e0 = ppppppplRam00000001138359f8;
      ppppppplStack_f8 = ppppppplRam00000001138359e8;
      ppppppplStack_f0 = ppppppplRam00000001138359e8;
      param_1 = (long *******)&ppppppplStack_f8;
      ppppppplRam00000001138359e8 = ppppppplVar15;
      ppppppplVar15 = ppppppplRam00000001138359f0;
      ppppppplRam00000001138359f0 = ppppppplVar6;
      ppppppplRam00000001138359f8 = unaff_x25;
      FUN_10ac0afc0();
      param_3 = ppppppplRam00000001138359f0;
      ppppppplVar15 = ppppppplRam00000001138359f8;
    }
    if (ppppppplVar6 < ppppppplVar15) {
      *ppppppplVar6 = (long ******)0xd800000095;
      ppppppplVar6[2] = (long ******)0x10;
      ppppppplVar6[1] = (long ******)0x160;
      *(undefined4 *)(ppppppplVar6 + 3) = 0;
      ppppppplVar6[5] = (long ******)0x0;
      ppppppplVar6[4] = (long ******)0x0;
      ppppppplVar6[7] = (long ******)0x0;
      ppppppplVar6[6] = (long ******)0x0;
      ppppppplVar6[9] = (long ******)0x0;
      ppppppplVar6[8] = (long ******)0x0;
      ppppppplVar6[0xb] = (long ******)0x0;
      ppppppplVar6[10] = (long ******)0x0;
      ppppppplVar6 = ppppppplVar6 + 0xc;
    }
    else {
      lVar13 = (long)ppppppplVar6 - (long)ppppppplRam00000001138359e8;
      uVar12 = (lVar13 >> 5) * -0x5555555555555555 + 1;
      ppppppplRam00000001138359f0 = ppppppplVar6;
      if (0x2aaaaaaaaaaaaaa < uVar12) goto LAB_10ac0c814;
      lVar8 = (long)ppppppplVar15 - (long)ppppppplRam00000001138359e8 >> 5;
      uVar10 = lVar8 * 0x5555555555555556;
      if (uVar10 < uVar12 || uVar10 - uVar12 == 0) {
        uVar10 = uVar12;
      }
      if (0x155555555555554 < (ulong)(lVar8 * -0x5555555555555555)) {
        uVar10 = uVar14;
      }
      lVar8 = 0x1138359e8;
      uStack_d8 = 0x1138359e8;
      FUN_10a187714();
      puVar1 = (undefined8 *)(lVar8 + lVar13);
      unaff_x25 = (long *******)(lVar8 + uVar10 * 0x60);
      *puVar1 = 0xd800000095;
      puVar1[2] = 0x10;
      puVar1[1] = 0x160;
      *(undefined4 *)(puVar1 + 3) = 0;
      puVar1[5] = 0;
      puVar1[4] = 0;
      puVar1[7] = 0;
      puVar1[6] = 0;
      puVar1[9] = 0;
      puVar1[8] = 0;
      puVar1[0xb] = 0;
      puVar1[10] = 0;
      ppppppplVar6 = (long *******)(puVar1 + 0xc);
      ppppppplVar15 =
           (long *******)
           ((long)puVar1 + ((long)ppppppplRam00000001138359e8 - (long)ppppppplRam00000001138359f0));
      param_2 = ppppppplRam00000001138359e8;
      param_4 = ppppppplVar15;
      FUN_10ac0aec8(0x1138359e8);
      ppppppplStack_e8 = ppppppplRam00000001138359e8;
      ppppppplStack_e0 = ppppppplRam00000001138359f8;
      ppppppplStack_f8 = ppppppplRam00000001138359e8;
      ppppppplStack_f0 = ppppppplRam00000001138359e8;
      param_1 = (long *******)&ppppppplStack_f8;
      ppppppplRam00000001138359e8 = ppppppplVar15;
      ppppppplVar15 = ppppppplRam00000001138359f0;
      ppppppplRam00000001138359f0 = ppppppplVar6;
      ppppppplRam00000001138359f8 = unaff_x25;
      FUN_10ac0afc0();
      param_3 = ppppppplRam00000001138359f0;
      ppppppplVar15 = ppppppplRam00000001138359f8;
    }
    if (ppppppplVar6 < ppppppplVar15) {
      *ppppppplVar6 = (long ******)0xd80000009c;
      ppppppplVar6[2] = (long ******)0xc;
      ppppppplVar6[1] = (long ******)0x170;
      *(undefined4 *)(ppppppplVar6 + 3) = 0;
      ppppppplVar6[5] = (long ******)0x0;
      ppppppplVar6[4] = (long ******)0x0;
      ppppppplVar6[7] = (long ******)0x0;
      ppppppplVar6[6] = (long ******)0x0;
      ppppppplVar6[9] = (long ******)0x0;
      ppppppplVar6[8] = (long ******)0x0;
      ppppppplVar6[0xb] = (long ******)0x0;
      ppppppplVar6[10] = (long ******)0x0;
      ppppppplVar6 = ppppppplVar6 + 0xc;
    }
    else {
      lVar13 = (long)ppppppplVar6 - (long)ppppppplRam00000001138359e8;
      uVar12 = (lVar13 >> 5) * -0x5555555555555555 + 1;
      ppppppplRam00000001138359f0 = ppppppplVar6;
      if (0x2aaaaaaaaaaaaaa < uVar12) goto LAB_10ac0c814;
      lVar8 = (long)ppppppplVar15 - (long)ppppppplRam00000001138359e8 >> 5;
      uVar10 = lVar8 * 0x5555555555555556;
      if (uVar10 < uVar12 || uVar10 - uVar12 == 0) {
        uVar10 = uVar12;
      }
      if (0x155555555555554 < (ulong)(lVar8 * -0x5555555555555555)) {
        uVar10 = uVar14;
      }
      lVar8 = 0x1138359e8;
      uStack_d8 = 0x1138359e8;
      FUN_10a187714();
      puVar1 = (undefined8 *)(lVar8 + lVar13);
      unaff_x25 = (long *******)(lVar8 + uVar10 * 0x60);
      *puVar1 = 0xd80000009c;
      puVar1[2] = 0xc;
      puVar1[1] = 0x170;
      *(undefined4 *)(puVar1 + 3) = 0;
      puVar1[5] = 0;
      puVar1[4] = 0;
      puVar1[7] = 0;
      puVar1[6] = 0;
      puVar1[9] = 0;
      puVar1[8] = 0;
      puVar1[0xb] = 0;
      puVar1[10] = 0;
      ppppppplVar6 = (long *******)(puVar1 + 0xc);
      ppppppplVar15 =
           (long *******)
           ((long)puVar1 + ((long)ppppppplRam00000001138359e8 - (long)ppppppplRam00000001138359f0));
      param_2 = ppppppplRam00000001138359e8;
      param_4 = ppppppplVar15;
      FUN_10ac0aec8(0x1138359e8);
      ppppppplStack_e8 = ppppppplRam00000001138359e8;
      ppppppplStack_e0 = ppppppplRam00000001138359f8;
      ppppppplStack_f8 = ppppppplRam00000001138359e8;
      ppppppplStack_f0 = ppppppplRam00000001138359e8;
      param_1 = (long *******)&ppppppplStack_f8;
      ppppppplRam00000001138359e8 = ppppppplVar15;
      ppppppplVar15 = ppppppplRam00000001138359f0;
      ppppppplRam00000001138359f0 = ppppppplVar6;
      ppppppplRam00000001138359f8 = unaff_x25;
      FUN_10ac0afc0();
      param_3 = ppppppplRam00000001138359f0;
      ppppppplVar15 = ppppppplRam00000001138359f8;
    }
    if (ppppppplVar6 < ppppppplVar15) {
      *ppppppplVar6 = (long ******)0xd80000009d;
      ppppppplVar6[2] = (long ******)0xc;
      ppppppplVar6[1] = (long ******)0x17c;
      *(undefined4 *)(ppppppplVar6 + 3) = 0;
      ppppppplVar6[5] = (long ******)0x0;
      ppppppplVar6[4] = (long ******)0x0;
      ppppppplVar6[7] = (long ******)0x0;
      ppppppplVar6[6] = (long ******)0x0;
      ppppppplVar6[9] = (long ******)0x0;
      ppppppplVar6[8] = (long ******)0x0;
      ppppppplVar6[0xb] = (long ******)0x0;
      ppppppplVar6[10] = (long ******)0x0;
      ppppppplVar6 = ppppppplVar6 + 0xc;
    }
    else {
      lVar13 = (long)ppppppplVar6 - (long)ppppppplRam00000001138359e8;
      uVar12 = (lVar13 >> 5) * -0x5555555555555555 + 1;
      ppppppplRam00000001138359f0 = ppppppplVar6;
      if (0x2aaaaaaaaaaaaaa < uVar12) goto LAB_10ac0c814;
      lVar8 = (long)ppppppplVar15 - (long)ppppppplRam00000001138359e8 >> 5;
      uVar10 = lVar8 * 0x5555555555555556;
      if (uVar10 < uVar12 || uVar10 - uVar12 == 0) {
        uVar10 = uVar12;
      }
      if (0x155555555555554 < (ulong)(lVar8 * -0x5555555555555555)) {
        uVar10 = uVar14;
      }
      lVar8 = 0x1138359e8;
      uStack_d8 = 0x1138359e8;
      FUN_10a187714();
      puVar1 = (undefined8 *)(lVar8 + lVar13);
      unaff_x25 = (long *******)(lVar8 + uVar10 * 0x60);
      *puVar1 = 0xd80000009d;
      puVar1[2] = 0xc;
      puVar1[1] = 0x17c;
      *(undefined4 *)(puVar1 + 3) = 0;
      puVar1[5] = 0;
      puVar1[4] = 0;
      puVar1[7] = 0;
      puVar1[6] = 0;
      puVar1[9] = 0;
      puVar1[8] = 0;
      puVar1[0xb] = 0;
      puVar1[10] = 0;
      ppppppplVar6 = (long *******)(puVar1 + 0xc);
      ppppppplVar15 =
           (long *******)
           ((long)puVar1 + ((long)ppppppplRam00000001138359e8 - (long)ppppppplRam00000001138359f0));
      param_2 = ppppppplRam00000001138359e8;
      param_4 = ppppppplVar15;
      FUN_10ac0aec8(0x1138359e8);
      ppppppplStack_e8 = ppppppplRam00000001138359e8;
      ppppppplStack_e0 = ppppppplRam00000001138359f8;
      ppppppplStack_f8 = ppppppplRam00000001138359e8;
      ppppppplStack_f0 = ppppppplRam00000001138359e8;
      param_1 = (long *******)&ppppppplStack_f8;
      ppppppplRam00000001138359e8 = ppppppplVar15;
      ppppppplVar15 = ppppppplRam00000001138359f0;
      ppppppplRam00000001138359f0 = ppppppplVar6;
      ppppppplRam00000001138359f8 = unaff_x25;
      FUN_10ac0afc0();
      param_3 = ppppppplRam00000001138359f0;
      ppppppplVar15 = ppppppplRam00000001138359f8;
    }
    if (ppppppplVar6 < ppppppplVar15) {
      *ppppppplVar6 = (long ******)0xd80000009e;
      ppppppplVar6[2] = (long ******)0xc;
      ppppppplVar6[1] = (long ******)0x188;
      *(undefined4 *)(ppppppplVar6 + 3) = 0;
      ppppppplVar6[5] = (long ******)0x0;
      ppppppplVar6[4] = (long ******)0x0;
      ppppppplVar6[7] = (long ******)0x0;
      ppppppplVar6[6] = (long ******)0x0;
      ppppppplVar6[9] = (long ******)0x0;
      ppppppplVar6[8] = (long ******)0x0;
      ppppppplVar6[0xb] = (long ******)0x0;
      ppppppplVar6[10] = (long ******)0x0;
      ppppppplVar6 = ppppppplVar6 + 0xc;
      ppppppplRam00000001138359f0 = param_3;
    }
    else {
      lVar13 = (long)ppppppplVar6 - (long)ppppppplRam00000001138359e8;
      uVar12 = (lVar13 >> 5) * -0x5555555555555555 + 1;
      ppppppplRam00000001138359f0 = ppppppplVar6;
      if (0x2aaaaaaaaaaaaaa < uVar12) goto LAB_10ac0c814;
      lVar8 = (long)ppppppplVar15 - (long)ppppppplRam00000001138359e8 >> 5;
      uVar10 = lVar8 * 0x5555555555555556;
      if (uVar10 < uVar12 || uVar10 - uVar12 == 0) {
        uVar10 = uVar12;
      }
      if (0x155555555555554 < (ulong)(lVar8 * -0x5555555555555555)) {
        uVar10 = uVar14;
      }
      lVar8 = 0x1138359e8;
      uStack_d8 = 0x1138359e8;
      FUN_10a187714();
      puVar1 = (undefined8 *)(lVar8 + lVar13);
      unaff_x25 = (long *******)(lVar8 + uVar10 * 0x60);
      *puVar1 = 0xd80000009e;
      puVar1[2] = 0xc;
      puVar1[1] = 0x188;
      *(undefined4 *)(puVar1 + 3) = 0;
      puVar1[5] = 0;
      puVar1[4] = 0;
      puVar1[7] = 0;
      puVar1[6] = 0;
      puVar1[9] = 0;
      puVar1[8] = 0;
      puVar1[0xb] = 0;
      puVar1[10] = 0;
      ppppppplVar6 = (long *******)(puVar1 + 0xc);
      ppppppplVar15 =
           (long *******)
           ((long)puVar1 + ((long)ppppppplRam00000001138359e8 - (long)ppppppplRam00000001138359f0));
      param_2 = ppppppplRam00000001138359e8;
      param_4 = ppppppplVar15;
      FUN_10ac0aec8(0x1138359e8);
      ppppppplStack_e8 = ppppppplRam00000001138359e8;
      ppppppplStack_e0 = ppppppplRam00000001138359f8;
      ppppppplStack_f8 = ppppppplRam00000001138359e8;
      ppppppplStack_f0 = ppppppplRam00000001138359e8;
      param_1 = (long *******)&ppppppplStack_f8;
      ppppppplRam00000001138359e8 = ppppppplVar15;
      ppppppplVar15 = ppppppplRam00000001138359f0;
      ppppppplRam00000001138359f0 = ppppppplVar6;
      ppppppplRam00000001138359f8 = unaff_x25;
      FUN_10ac0afc0();
      ppppppplVar15 = ppppppplRam00000001138359f8;
    }
    if (ppppppplVar6 < ppppppplVar15) {
      *ppppppplVar6 = (long ******)0xd80000009f;
      ppppppplVar6[2] = (long ******)0xc;
      ppppppplVar6[1] = (long ******)0x194;
      *(undefined4 *)(ppppppplVar6 + 3) = 0;
      ppppppplVar6[5] = (long ******)0x0;
      ppppppplVar6[4] = (long ******)0x0;
      ppppppplVar6[7] = (long ******)0x0;
      ppppppplVar6[6] = (long ******)0x0;
      ppppppplVar6[9] = (long ******)0x0;
      ppppppplVar6[8] = (long ******)0x0;
      ppppppplVar6[0xb] = (long ******)0x0;
      ppppppplVar6[10] = (long ******)0x0;
      ppppppplVar6 = ppppppplVar6 + 0xc;
    }
    else {
      lVar13 = (long)ppppppplVar6 - (long)ppppppplRam00000001138359e8;
      uVar12 = (lVar13 >> 5) * -0x5555555555555555 + 1;
      param_3 = ppppppplRam00000001138359f0;
      ppppppplRam00000001138359f0 = ppppppplVar6;
      if (0x2aaaaaaaaaaaaaa < uVar12) goto LAB_10ac0c814;
      lVar8 = (long)ppppppplVar15 - (long)ppppppplRam00000001138359e8 >> 5;
      uVar10 = lVar8 * 0x5555555555555556;
      if (uVar10 < uVar12 || uVar10 - uVar12 == 0) {
        uVar10 = uVar12;
      }
      if (0x155555555555554 < (ulong)(lVar8 * -0x5555555555555555)) {
        uVar10 = uVar14;
      }
      lVar8 = 0x1138359e8;
      uStack_d8 = 0x1138359e8;
      FUN_10a187714();
      puVar1 = (undefined8 *)(lVar8 + lVar13);
      unaff_x25 = (long *******)(lVar8 + uVar10 * 0x60);
      *puVar1 = 0xd80000009f;
      puVar1[2] = 0xc;
      puVar1[1] = 0x194;
      *(undefined4 *)(puVar1 + 3) = 0;
      puVar1[5] = 0;
      puVar1[4] = 0;
      puVar1[7] = 0;
      puVar1[6] = 0;
      puVar1[9] = 0;
      puVar1[8] = 0;
      puVar1[0xb] = 0;
      puVar1[10] = 0;
      ppppppplVar6 = (long *******)(puVar1 + 0xc);
      ppppppplVar15 =
           (long *******)
           ((long)puVar1 + ((long)ppppppplRam00000001138359e8 - (long)ppppppplRam00000001138359f0));
      param_2 = ppppppplRam00000001138359e8;
      param_4 = ppppppplVar15;
      FUN_10ac0aec8(0x1138359e8);
      ppppppplStack_e8 = ppppppplRam00000001138359e8;
      ppppppplStack_e0 = ppppppplRam00000001138359f8;
      ppppppplStack_f8 = ppppppplRam00000001138359e8;
      ppppppplStack_f0 = ppppppplRam00000001138359e8;
      param_1 = (long *******)&ppppppplStack_f8;
      ppppppplRam00000001138359e8 = ppppppplVar15;
      ppppppplVar15 = ppppppplRam00000001138359f0;
      ppppppplRam00000001138359f0 = ppppppplVar6;
      ppppppplRam00000001138359f8 = unaff_x25;
      FUN_10ac0afc0();
      ppppppplVar15 = ppppppplRam00000001138359f8;
    }
    if (ppppppplVar6 < ppppppplVar15) {
      *ppppppplVar6 = (long ******)0xd8000000b9;
      ppppppplVar6[2] = (long ******)0x4;
      ppppppplVar6[1] = (long ******)0x1a0;
      *(undefined4 *)(ppppppplVar6 + 3) = 0;
      ppppppplVar6[5] = (long ******)0x0;
      ppppppplVar6[4] = (long ******)0x0;
      ppppppplVar6[7] = (long ******)0x0;
      ppppppplVar6[6] = (long ******)0x0;
      ppppppplVar6[9] = (long ******)0x0;
      ppppppplVar6[8] = (long ******)0x0;
      ppppppplVar6[0xb] = (long ******)0x0;
      ppppppplVar6[10] = (long ******)0x0;
      ppppppplVar6 = ppppppplVar6 + 0xc;
    }
    else {
      lVar13 = (long)ppppppplVar6 - (long)ppppppplRam00000001138359e8;
      uVar12 = (lVar13 >> 5) * -0x5555555555555555 + 1;
      param_3 = ppppppplRam00000001138359f0;
      ppppppplRam00000001138359f0 = ppppppplVar6;
      if (0x2aaaaaaaaaaaaaa < uVar12) goto LAB_10ac0c814;
      lVar8 = (long)ppppppplVar15 - (long)ppppppplRam00000001138359e8 >> 5;
      uVar10 = lVar8 * 0x5555555555555556;
      if (uVar10 < uVar12 || uVar10 - uVar12 == 0) {
        uVar10 = uVar12;
      }
      if (0x155555555555554 < (ulong)(lVar8 * -0x5555555555555555)) {
        uVar10 = uVar14;
      }
      lVar8 = 0x1138359e8;
      uStack_d8 = 0x1138359e8;
      FUN_10a187714();
      puVar1 = (undefined8 *)(lVar8 + lVar13);
      unaff_x25 = (long *******)(lVar8 + uVar10 * 0x60);
      *puVar1 = 0xd8000000b9;
      puVar1[2] = 4;
      puVar1[1] = 0x1a0;
      *(undefined4 *)(puVar1 + 3) = 0;
      puVar1[5] = 0;
      puVar1[4] = 0;
      puVar1[7] = 0;
      puVar1[6] = 0;
      puVar1[9] = 0;
      puVar1[8] = 0;
      puVar1[0xb] = 0;
      puVar1[10] = 0;
      ppppppplVar6 = (long *******)(puVar1 + 0xc);
      ppppppplVar15 =
           (long *******)
           ((long)puVar1 + ((long)ppppppplRam00000001138359e8 - (long)ppppppplRam00000001138359f0));
      param_2 = ppppppplRam00000001138359e8;
      param_4 = ppppppplVar15;
      FUN_10ac0aec8(0x1138359e8);
      ppppppplStack_e8 = ppppppplRam00000001138359e8;
      ppppppplStack_e0 = ppppppplRam00000001138359f8;
      ppppppplStack_f8 = ppppppplRam00000001138359e8;
      ppppppplStack_f0 = ppppppplRam00000001138359e8;
      param_1 = (long *******)&ppppppplStack_f8;
      ppppppplRam00000001138359e8 = ppppppplVar15;
      ppppppplVar15 = ppppppplRam00000001138359f0;
      ppppppplRam00000001138359f0 = ppppppplVar6;
      ppppppplRam00000001138359f8 = unaff_x25;
      FUN_10ac0afc0();
      ppppppplVar15 = ppppppplRam00000001138359f8;
    }
    if (ppppppplVar6 < ppppppplVar15) {
      *ppppppplVar6 = (long ******)0xd800000097;
      ppppppplVar6[2] = (long ******)0x4;
      ppppppplVar6[1] = (long ******)0x1a4;
      *(undefined4 *)(ppppppplVar6 + 3) = 0;
      ppppppplVar6[5] = (long ******)0x0;
      ppppppplVar6[4] = (long ******)0x0;
      ppppppplVar6[7] = (long ******)0x0;
      ppppppplVar6[6] = (long ******)0x0;
      ppppppplVar6[9] = (long ******)0x0;
      ppppppplVar6[8] = (long ******)0x0;
      ppppppplVar6[0xb] = (long ******)0x0;
      ppppppplVar6[10] = (long ******)0x0;
      ppppppplVar6 = ppppppplVar6 + 0xc;
    }
    else {
      lVar13 = (long)ppppppplVar6 - (long)ppppppplRam00000001138359e8;
      uVar12 = (lVar13 >> 5) * -0x5555555555555555 + 1;
      param_3 = ppppppplRam00000001138359f0;
      ppppppplRam00000001138359f0 = ppppppplVar6;
      if (0x2aaaaaaaaaaaaaa < uVar12) goto LAB_10ac0c814;
      lVar8 = (long)ppppppplVar15 - (long)ppppppplRam00000001138359e8 >> 5;
      uVar10 = lVar8 * 0x5555555555555556;
      if (uVar10 < uVar12 || uVar10 - uVar12 == 0) {
        uVar10 = uVar12;
      }
      if (0x155555555555554 < (ulong)(lVar8 * -0x5555555555555555)) {
        uVar10 = uVar14;
      }
      lVar8 = 0x1138359e8;
      uStack_d8 = 0x1138359e8;
      FUN_10a187714();
      puVar1 = (undefined8 *)(lVar8 + lVar13);
      unaff_x25 = (long *******)(lVar8 + uVar10 * 0x60);
      *puVar1 = 0xd800000097;
      puVar1[2] = 4;
      puVar1[1] = 0x1a4;
      *(undefined4 *)(puVar1 + 3) = 0;
      puVar1[5] = 0;
      puVar1[4] = 0;
      puVar1[7] = 0;
      puVar1[6] = 0;
      puVar1[9] = 0;
      puVar1[8] = 0;
      puVar1[0xb] = 0;
      puVar1[10] = 0;
      ppppppplVar6 = (long *******)(puVar1 + 0xc);
      ppppppplVar15 =
           (long *******)
           ((long)puVar1 + ((long)ppppppplRam00000001138359e8 - (long)ppppppplRam00000001138359f0));
      param_2 = ppppppplRam00000001138359e8;
      param_4 = ppppppplVar15;
      FUN_10ac0aec8(0x1138359e8);
      ppppppplStack_e8 = ppppppplRam00000001138359e8;
      ppppppplStack_e0 = ppppppplRam00000001138359f8;
      ppppppplStack_f8 = ppppppplRam00000001138359e8;
      ppppppplStack_f0 = ppppppplRam00000001138359e8;
      param_1 = (long *******)&ppppppplStack_f8;
      ppppppplRam00000001138359e8 = ppppppplVar15;
      ppppppplVar15 = ppppppplRam00000001138359f0;
      ppppppplRam00000001138359f0 = ppppppplVar6;
      ppppppplRam00000001138359f8 = unaff_x25;
      FUN_10ac0afc0();
      ppppppplVar15 = ppppppplRam00000001138359f8;
    }
    if (ppppppplVar6 < ppppppplVar15) {
      *ppppppplVar6 = (long ******)0xd800000098;
      ppppppplVar6[2] = (long ******)0x4;
      ppppppplVar6[1] = (long ******)0x1a8;
      *(undefined4 *)(ppppppplVar6 + 3) = 0;
      ppppppplVar6[5] = (long ******)0x0;
      ppppppplVar6[4] = (long ******)0x0;
      ppppppplVar6[7] = (long ******)0x0;
      ppppppplVar6[6] = (long ******)0x0;
      ppppppplVar6[9] = (long ******)0x0;
      ppppppplVar6[8] = (long ******)0x0;
      ppppppplVar6[0xb] = (long ******)0x0;
      ppppppplVar6[10] = (long ******)0x0;
      ppppppplRam00000001138359f0 = ppppppplVar6 + 0xc;
      return param_1;
    }
    lVar13 = (long)ppppppplVar6 - (long)ppppppplRam00000001138359e8;
    uVar12 = (lVar13 >> 5) * -0x5555555555555555 + 1;
    param_3 = ppppppplRam00000001138359f0;
    ppppppplRam00000001138359f0 = ppppppplVar6;
    if (uVar12 < 0x2aaaaaaaaaaaaab) {
      lVar8 = (long)ppppppplVar15 - (long)ppppppplRam00000001138359e8 >> 5;
      uVar10 = lVar8 * 0x5555555555555556;
      if (uVar10 < uVar12 || uVar10 - uVar12 == 0) {
        uVar10 = uVar12;
      }
      if (0x155555555555554 < (ulong)(lVar8 * -0x5555555555555555)) {
        uVar10 = uVar14;
      }
      lVar8 = 0x1138359e8;
      uStack_d8 = 0x1138359e8;
      FUN_10a187714();
      puVar1 = (undefined8 *)(lVar8 + lVar13);
      *puVar1 = 0xd800000098;
      puVar1[2] = 4;
      puVar1[1] = 0x1a8;
      *(undefined4 *)(puVar1 + 3) = 0;
      puVar1[5] = 0;
      puVar1[4] = 0;
      puVar1[7] = 0;
      puVar1[6] = 0;
      puVar1[9] = 0;
      puVar1[8] = 0;
      puVar1[0xb] = 0;
      puVar1[10] = 0;
      lVar13 = (long)puVar1 +
               ((long)ppppppplRam00000001138359e8 - (long)ppppppplRam00000001138359f0);
      FUN_10ac0aec8(0x1138359e8,ppppppplRam00000001138359e8,ppppppplRam00000001138359f0,lVar13);
      ppppppplStack_e8 = ppppppplRam00000001138359e8;
      ppppppplStack_e0 = ppppppplRam00000001138359f8;
      ppppppplStack_f8 = ppppppplRam00000001138359e8;
      ppppppplStack_f0 = ppppppplRam00000001138359e8;
      ppppppplVar15 = (long *******)&ppppppplStack_f8;
      ppppppplRam00000001138359e8 = (long *******)lVar13;
      ppppppplRam00000001138359f0 = (long *******)(puVar1 + 0xc);
      ppppppplRam00000001138359f8 = (long *******)(lVar8 + uVar10 * 0x60);
      FUN_10ac0afc0(ppppppplVar15);
      ppppppplRam00000001138359f0 = (long *******)(puVar1 + 0xc);
      return ppppppplVar15;
    }
  }
  else {
    lVar13 = (long)ppppppplRam00000001138359f0 - (long)ppppppplRam00000001138359e8;
    uVar12 = (lVar13 >> 5) * -0x5555555555555555 + 1;
    if (uVar12 < 0x2aaaaaaaaaaaaab) {
      lVar8 = (long)ppppppplRam00000001138359f8 - (long)ppppppplRam00000001138359e8 >> 5;
      uVar10 = lVar8 * 0x5555555555555556;
      if (uVar10 < uVar12 || uVar10 - uVar12 == 0) {
        uVar10 = uVar12;
      }
      if (0x155555555555554 < (ulong)(lVar8 * -0x5555555555555555)) {
        uVar10 = uVar14;
      }
      lVar8 = 0x1138359e8;
      uStack_d8 = 0x1138359e8;
      FUN_10a187714();
      puVar1 = (undefined8 *)(lVar8 + lVar13);
      *puVar1 = 0xd800000016;
      puVar1[2] = 0x40;
      puVar1[1] = 0;
      *(undefined4 *)(puVar1 + 3) = 0;
      puVar1[5] = 0;
      puVar1[4] = 0;
      puVar1[7] = 0;
      puVar1[6] = 0;
      puVar1[9] = 0;
      puVar1[8] = 0;
      puVar1[0xb] = 0;
      puVar1[10] = 0;
      ppppppplVar6 = (long *******)(puVar1 + 0xc);
      ppppppplVar15 =
           (long *******)
           ((long)puVar1 + ((long)ppppppplRam00000001138359e8 - (long)ppppppplRam00000001138359f0));
      param_2 = ppppppplRam00000001138359e8;
      param_4 = ppppppplVar15;
      FUN_10ac0aec8(0x1138359e8);
      ppppppplStack_e8 = ppppppplRam00000001138359e8;
      ppppppplStack_e0 = ppppppplRam00000001138359f8;
      ppppppplStack_f8 = ppppppplRam00000001138359e8;
      ppppppplStack_f0 = ppppppplRam00000001138359e8;
      param_1 = (long *******)&ppppppplStack_f8;
      ppppppplRam00000001138359e8 = ppppppplVar15;
      ppppppplVar15 = ppppppplRam00000001138359f0;
      ppppppplRam00000001138359f0 = ppppppplVar6;
      ppppppplRam00000001138359f8 = (long *******)(lVar8 + uVar10 * 0x60);
      FUN_10ac0afc0();
      param_3 = ppppppplRam00000001138359f0;
      ppppppplVar15 = ppppppplRam00000001138359f8;
      goto LAB_10ac0b734;
    }
  }
LAB_10ac0c814:
  FUN_10a187700();
  pcStack_108 = FUN_10ac0c818;
  uVar14 = 0x2aaaaaaaaaaaaaa;
  ppppppplVar15 = (long *******)0x113835a20;
  lVar13 = 0x113835a18;
  ppuStack_110 = &puStack_90;
  if (ppppppplRam0000000113835a20 < ppppppplRam0000000113835a28) {
    *ppppppplRam0000000113835a20 = (long ******)0xd80000001f;
    ppppppplRam0000000113835a20[2] = (long ******)0x40;
    ppppppplRam0000000113835a20[1] = (long ******)0x0;
    *(undefined4 *)(ppppppplRam0000000113835a20 + 3) = 3;
    ppppppplRam0000000113835a20[5] = (long ******)0x1800;
    ppppppplRam0000000113835a20[4] = (long ******)0x0;
    ppppppplRam0000000113835a20[7] = (long ******)0x0;
    ppppppplRam0000000113835a20[6] = (long ******)0x0;
    ppppppplRam0000000113835a20[9] = (long ******)0x0;
    ppppppplRam0000000113835a20[8] = (long ******)0x0;
    ppppppplRam0000000113835a20[0xb] = (long ******)0x0;
    ppppppplRam0000000113835a20[10] = (long ******)0x0;
    unaff_x23 = ppppppplRam0000000113835a20 + 0xc;
  }
  else {
    lVar8 = (long)ppppppplRam0000000113835a20 - (long)ppppppplRam0000000113835a18;
    uVar12 = (lVar8 >> 5) * -0x5555555555555555 + 1;
    if (0x2aaaaaaaaaaaaaa < uVar12) goto LAB_10ac0f7dc;
    lVar9 = (long)ppppppplRam0000000113835a28 - (long)ppppppplRam0000000113835a18 >> 5;
    uVar10 = lVar9 * 0x5555555555555556;
    if (uVar10 < uVar12 || uVar10 - uVar12 == 0) {
      uVar10 = uVar12;
    }
    if (0x155555555555554 < (ulong)(lVar9 * -0x5555555555555555)) {
      uVar10 = uVar14;
    }
    uStack_158 = 0x113835a18;
    lVar9 = lVar13;
    FUN_10a187714();
    param_3 = ppppppplRam0000000113835a20;
    ppppppplVar7 = ppppppplRam0000000113835a18;
    puVar1 = (undefined8 *)(lVar9 + lVar8);
    unaff_x25 = (long *******)(lVar9 + uVar10 * 0x60);
    *puVar1 = 0xd80000001f;
    puVar1[2] = 0x40;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 3) = 3;
    puVar1[5] = 0x1800;
    puVar1[4] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    unaff_x23 = (long *******)(puVar1 + 0xc);
    ppppppplVar6 = (long *******)((long)puVar1 + ((long)ppppppplVar7 - (long)param_3));
    param_4 = ppppppplVar6;
    FUN_10ac0aec8(0x113835a18,ppppppplVar7);
    ppppppplStack_168 = ppppppplRam0000000113835a18;
    ppppppplStack_160 = ppppppplRam0000000113835a28;
    ppppppplStack_178 = ppppppplRam0000000113835a18;
    ppppppplStack_170 = ppppppplRam0000000113835a18;
    ppppppplRam0000000113835a18 = ppppppplVar6;
    ppppppplRam0000000113835a20 = unaff_x23;
    ppppppplRam0000000113835a28 = unaff_x25;
    FUN_10ac0afc0(&ppppppplStack_178);
  }
  ppppppplRam0000000113835a20 = unaff_x23;
  if (ppppppplRam0000000113835a18 == unaff_x23) {
LAB_10ac0f7d8:
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10ac0f7dc);
    (*pcVar5)();
  }
  func_0x000107c2b07c(&ppppppplStack_178,&UNK_10f63ff47);
  pppppplStack_188 = (long ******)0x4;
  pppppplStack_180 = (long ******)0x4;
  pppppplVar11 = unaff_x23[-5];
  if (pppppplVar11 < unaff_x23[-4]) {
    pppppplVar11[2] = (long *****)ppppppplStack_168;
    pppppplVar11[1] = (long *****)ppppppplStack_170;
    *pppppplVar11 = (long *****)ppppppplStack_178;
    ppppppplStack_170 = (long *******)0x0;
    ppppppplStack_168 = (long *******)0x0;
    ppppppplStack_178 = (long *******)0x0;
    pppppplVar11[3] = (long *****)ppppppplStack_160;
    pppppplVar11[5] = (long *****)0x4;
    pppppplVar11[4] = (long *****)0x4;
    ppppppplVar6 = (long *******)(pppppplVar11 + 6);
  }
  else {
    ppppppplVar6 = unaff_x23 + -6;
    param_3 = &pppppplStack_180;
    param_4 = &pppppplStack_188;
    FUN_10ac0f848(ppppppplVar6,&ppppppplStack_178);
  }
  unaff_x23[-5] = (long ******)ppppppplVar6;
  if ((long)ppppppplStack_168 < 0) {
    __ZdlPv(ppppppplStack_178);
  }
  ppppppplVar6 = ppppppplRam0000000113835a20;
  if (ppppppplRam0000000113835a18 == ppppppplRam0000000113835a20) goto LAB_10ac0f7d8;
  func_0x000107c2b07c(&ppppppplStack_178,&UNK_10f63ff70);
  pppppplStack_188 = (long ******)0x1;
  pppppplStack_180 = (long ******)0x0;
  pppppplVar11 = ppppppplVar6[-5];
  if (pppppplVar11 < ppppppplVar6[-4]) {
    pppppplVar11[2] = (long *****)ppppppplStack_168;
    pppppplVar11[1] = (long *****)ppppppplStack_170;
    *pppppplVar11 = (long *****)ppppppplStack_178;
    ppppppplStack_170 = (long *******)0x0;
    ppppppplStack_168 = (long *******)0x0;
    ppppppplStack_178 = (long *******)0x0;
    pppppplVar11[3] = (long *****)ppppppplStack_160;
    pppppplVar11[5] = (long *****)0x1;
    pppppplVar11[4] = (long *****)0x0;
    ppppppplVar7 = (long *******)(pppppplVar11 + 6);
  }
  else {
    ppppppplVar7 = ppppppplVar6 + -6;
    param_3 = &pppppplStack_180;
    param_4 = &pppppplStack_188;
    FUN_10ac0f848(ppppppplVar7,&ppppppplStack_178);
  }
  ppppppplVar6[-5] = (long ******)ppppppplVar7;
  if ((long)ppppppplStack_168 < 0) {
    __ZdlPv(ppppppplStack_178);
  }
  ppppppplVar6 = ppppppplRam0000000113835a20;
  if (ppppppplRam0000000113835a18 == ppppppplRam0000000113835a20) goto LAB_10ac0f7d8;
  func_0x000107c2b07c(&ppppppplStack_178,&UNK_10f63ff57);
  pppppplStack_180 = (long ******)0x8;
  pppppplStack_188 = (long ******)0x4;
  pppppplVar11 = ppppppplVar6[-5];
  if (pppppplVar11 < ppppppplVar6[-4]) {
    pppppplVar11[2] = (long *****)ppppppplStack_168;
    pppppplVar11[1] = (long *****)ppppppplStack_170;
    *pppppplVar11 = (long *****)ppppppplStack_178;
    ppppppplStack_170 = (long *******)0x0;
    ppppppplStack_168 = (long *******)0x0;
    ppppppplStack_178 = (long *******)0x0;
    pppppplVar11[3] = (long *****)ppppppplStack_160;
    pppppplVar11[5] = (long *****)0x4;
    pppppplVar11[4] = (long *****)0x8;
    ppppppplVar7 = (long *******)(pppppplVar11 + 6);
  }
  else {
    ppppppplVar7 = ppppppplVar6 + -6;
    param_3 = &pppppplStack_180;
    param_4 = &pppppplStack_188;
    FUN_10ac0f848(ppppppplVar7,&ppppppplStack_178);
  }
  ppppppplVar6[-5] = (long ******)ppppppplVar7;
  if ((long)ppppppplStack_168 < 0) {
    __ZdlPv(ppppppplStack_178);
  }
  ppppppplVar6 = ppppppplRam0000000113835a20;
  if (ppppppplRam0000000113835a18 == ppppppplRam0000000113835a20) goto LAB_10ac0f7d8;
  func_0x000107c2b07c(&ppppppplStack_178,&UNK_10f63ffa6);
  pppppplStack_180 = (long ******)0xc;
  pppppplStack_188 = (long ******)0x4;
  pppppplVar11 = ppppppplVar6[-5];
  if (pppppplVar11 < ppppppplVar6[-4]) {
    pppppplVar11[2] = (long *****)ppppppplStack_168;
    pppppplVar11[1] = (long *****)ppppppplStack_170;
    *pppppplVar11 = (long *****)ppppppplStack_178;
    ppppppplStack_170 = (long *******)0x0;
    ppppppplStack_168 = (long *******)0x0;
    ppppppplStack_178 = (long *******)0x0;
    pppppplVar11[3] = (long *****)ppppppplStack_160;
    pppppplVar11[5] = (long *****)0x4;
    pppppplVar11[4] = (long *****)0xc;
    ppppppplVar7 = (long *******)(pppppplVar11 + 6);
  }
  else {
    ppppppplVar7 = ppppppplVar6 + -6;
    param_3 = &pppppplStack_180;
    param_4 = &pppppplStack_188;
    FUN_10ac0f848(ppppppplVar7,&ppppppplStack_178);
  }
  ppppppplVar6[-5] = (long ******)ppppppplVar7;
  if ((long)ppppppplStack_168 < 0) {
    __ZdlPv(ppppppplStack_178);
  }
  ppppppplVar6 = ppppppplRam0000000113835a20;
  if (ppppppplRam0000000113835a18 == ppppppplRam0000000113835a20) goto LAB_10ac0f7d8;
  func_0x000107c2b07c(&ppppppplStack_178,&UNK_10f63ffb1);
  pppppplStack_180 = (long ******)0x10;
  pppppplStack_188 = (long ******)0x4;
  pppppplVar11 = ppppppplVar6[-5];
  if (pppppplVar11 < ppppppplVar6[-4]) {
    pppppplVar11[2] = (long *****)ppppppplStack_168;
    pppppplVar11[1] = (long *****)ppppppplStack_170;
    *pppppplVar11 = (long *****)ppppppplStack_178;
    ppppppplStack_170 = (long *******)0x0;
    ppppppplStack_168 = (long *******)0x0;
    ppppppplStack_178 = (long *******)0x0;
    pppppplVar11[3] = (long *****)ppppppplStack_160;
    pppppplVar11[5] = (long *****)0x4;
    pppppplVar11[4] = (long *****)0x10;
    ppppppplVar7 = (long *******)(pppppplVar11 + 6);
  }
  else {
    ppppppplVar7 = ppppppplVar6 + -6;
    param_3 = &pppppplStack_180;
    param_4 = &pppppplStack_188;
    FUN_10ac0f848(ppppppplVar7,&ppppppplStack_178);
  }
  ppppppplVar6[-5] = (long ******)ppppppplVar7;
  if ((long)ppppppplStack_168 < 0) {
    __ZdlPv(ppppppplStack_178);
  }
  ppppppplVar6 = ppppppplRam0000000113835a20;
  if (ppppppplRam0000000113835a18 == ppppppplRam0000000113835a20) goto LAB_10ac0f7d8;
  func_0x000107c2b07c(&ppppppplStack_178,"direction");
  pppppplStack_180 = (long ******)0x14;
  pppppplStack_188 = (long ******)0xc;
  pppppplVar11 = ppppppplVar6[-5];
  if (pppppplVar11 < ppppppplVar6[-4]) {
    pppppplVar11[2] = (long *****)ppppppplStack_168;
    pppppplVar11[1] = (long *****)ppppppplStack_170;
    *pppppplVar11 = (long *****)ppppppplStack_178;
    ppppppplStack_170 = (long *******)0x0;
    ppppppplStack_168 = (long *******)0x0;
    ppppppplStack_178 = (long *******)0x0;
    pppppplVar11[3] = (long *****)ppppppplStack_160;
    pppppplVar11[5] = (long *****)0xc;
    pppppplVar11[4] = (long *****)0x14;
    ppppppplVar7 = (long *******)(pppppplVar11 + 6);
  }
  else {
    ppppppplVar7 = ppppppplVar6 + -6;
    param_3 = &pppppplStack_180;
    param_4 = &pppppplStack_188;
    FUN_10ac0f848(ppppppplVar7,&ppppppplStack_178);
  }
  ppppppplVar6[-5] = (long ******)ppppppplVar7;
  if ((long)ppppppplStack_168 < 0) {
    __ZdlPv(ppppppplStack_178);
  }
  ppppppplVar6 = ppppppplRam0000000113835a20;
  if (ppppppplRam0000000113835a18 == ppppppplRam0000000113835a20) goto LAB_10ac0f7d8;
  func_0x000107c2b07c(&ppppppplStack_178,&DAT_10f68f20c);
  pppppplStack_180 = (long ******)0x20;
  pppppplStack_188 = (long ******)0xc;
  pppppplVar11 = ppppppplVar6[-5];
  if (pppppplVar11 < ppppppplVar6[-4]) {
    pppppplVar11[2] = (long *****)ppppppplStack_168;
    pppppplVar11[1] = (long *****)ppppppplStack_170;
    *pppppplVar11 = (long *****)ppppppplStack_178;
    ppppppplStack_170 = (long *******)0x0;
    ppppppplStack_168 = (long *******)0x0;
    ppppppplStack_178 = (long *******)0x0;
    pppppplVar11[3] = (long *****)ppppppplStack_160;
    pppppplVar11[5] = (long *****)0xc;
    pppppplVar11[4] = (long *****)0x20;
    ppppppplVar7 = (long *******)(pppppplVar11 + 6);
  }
  else {
    ppppppplVar7 = ppppppplVar6 + -6;
    param_3 = &pppppplStack_180;
    param_4 = &pppppplStack_188;
    FUN_10ac0f848(ppppppplVar7,&ppppppplStack_178);
  }
  ppppppplVar6[-5] = (long ******)ppppppplVar7;
  if ((long)ppppppplStack_168 < 0) {
    __ZdlPv(ppppppplStack_178);
  }
  ppppppplVar6 = ppppppplRam0000000113835a20;
  if (ppppppplRam0000000113835a18 == ppppppplRam0000000113835a20) goto LAB_10ac0f7d8;
  func_0x000107c2b07c(&ppppppplStack_178,&DAT_10f68f0f0);
  pppppplStack_180 = (long ******)0x2c;
  pppppplStack_188 = (long ******)0x10;
  pppppplVar11 = ppppppplVar6[-5];
  if (pppppplVar11 < ppppppplVar6[-4]) {
    pppppplVar11[2] = (long *****)ppppppplStack_168;
    pppppplVar11[1] = (long *****)ppppppplStack_170;
    *pppppplVar11 = (long *****)ppppppplStack_178;
    ppppppplStack_170 = (long *******)0x0;
    ppppppplStack_168 = (long *******)0x0;
    ppppppplStack_178 = (long *******)0x0;
    pppppplVar11[3] = (long *****)ppppppplStack_160;
    pppppplVar11[5] = (long *****)0x10;
    pppppplVar11[4] = (long *****)0x2c;
    ppppppplVar7 = (long *******)(pppppplVar11 + 6);
  }
  else {
    ppppppplVar7 = ppppppplVar6 + -6;
    param_3 = &pppppplStack_180;
    param_4 = &pppppplStack_188;
    FUN_10ac0f848(ppppppplVar7,&ppppppplStack_178);
  }
  ppppppplVar6[-5] = (long ******)ppppppplVar7;
  if ((long)ppppppplStack_168 < 0) {
    __ZdlPv(ppppppplStack_178);
  }
  ppppppplVar6 = ppppppplRam0000000113835a20;
  if (ppppppplRam0000000113835a18 == ppppppplRam0000000113835a20) goto LAB_10ac0f7d8;
  param_2 = (long *******)&UNK_10f63ffbd;
  func_0x000107c2b07c(&ppppppplStack_178);
  pppppplStack_180 = (long ******)0x3c;
  pppppplStack_188 = (long ******)0x4;
  pppppplVar11 = ppppppplVar6[-5];
  if (pppppplVar11 < ppppppplVar6[-4]) {
    pppppplVar11[2] = (long *****)ppppppplStack_168;
    pppppplVar11[1] = (long *****)ppppppplStack_170;
    *pppppplVar11 = (long *****)ppppppplStack_178;
    ppppppplStack_170 = (long *******)0x0;
    ppppppplStack_168 = (long *******)0x0;
    ppppppplStack_178 = (long *******)0x0;
    pppppplVar11[3] = (long *****)ppppppplStack_160;
    pppppplVar11[5] = (long *****)0x4;
    pppppplVar11[4] = (long *****)0x3c;
    param_1 = (long *******)(pppppplVar11 + 6);
  }
  else {
    param_1 = ppppppplVar6 + -6;
    param_2 = (long *******)&ppppppplStack_178;
    param_3 = &pppppplStack_180;
    param_4 = &pppppplStack_188;
    FUN_10ac0f848();
  }
  ppppppplVar6[-5] = (long ******)param_1;
  if ((long)ppppppplStack_168 < 0) {
    param_1 = ppppppplStack_178;
    __ZdlPv();
  }
  if (ppppppplRam0000000113835a20 < ppppppplRam0000000113835a28) {
    *ppppppplRam0000000113835a20 = (long ******)0xd800000021;
    ppppppplRam0000000113835a20[2] = (long ******)0x20;
    ppppppplRam0000000113835a20[1] = (long ******)0x200;
    *(undefined4 *)(ppppppplRam0000000113835a20 + 3) = 3;
    ppppppplRam0000000113835a20[5] = (long ******)0x1810;
    ppppppplRam0000000113835a20[4] = (long ******)0x0;
    ppppppplRam0000000113835a20[7] = (long ******)0x0;
    ppppppplRam0000000113835a20[6] = (long ******)0x0;
    ppppppplRam0000000113835a20[9] = (long ******)0x0;
    ppppppplRam0000000113835a20[8] = (long ******)0x0;
    ppppppplRam0000000113835a20[0xb] = (long ******)0x0;
    ppppppplRam0000000113835a20[10] = (long ******)0x0;
    unaff_x23 = ppppppplRam0000000113835a20 + 0xc;
  }
  else {
    lVar8 = (long)ppppppplRam0000000113835a20 - (long)ppppppplRam0000000113835a18;
    uVar12 = (lVar8 >> 5) * -0x5555555555555555 + 1;
    if (0x2aaaaaaaaaaaaaa < uVar12) goto LAB_10ac0f7dc;
    lVar9 = (long)ppppppplRam0000000113835a28 - (long)ppppppplRam0000000113835a18 >> 5;
    uVar10 = lVar9 * 0x5555555555555556;
    if (uVar10 < uVar12 || uVar10 - uVar12 == 0) {
      uVar10 = uVar12;
    }
    if (0x155555555555554 < (ulong)(lVar9 * -0x5555555555555555)) {
      uVar10 = uVar14;
    }
    uStack_158 = 0x113835a18;
    lVar9 = lVar13;
    FUN_10a187714();
    param_3 = ppppppplRam0000000113835a20;
    ppppppplVar7 = ppppppplRam0000000113835a18;
    puVar1 = (undefined8 *)(lVar9 + lVar8);
    unaff_x25 = (long *******)(lVar9 + uVar10 * 0x60);
    *puVar1 = 0xd800000021;
    puVar1[2] = 0x20;
    puVar1[1] = 0x200;
    *(undefined4 *)(puVar1 + 3) = 3;
    puVar1[5] = 0x1810;
    puVar1[4] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    unaff_x23 = (long *******)(puVar1 + 0xc);
    ppppppplVar6 = (long *******)((long)puVar1 + ((long)ppppppplVar7 - (long)param_3));
    param_4 = ppppppplVar6;
    FUN_10ac0aec8(0x113835a18,ppppppplVar7);
    ppppppplStack_168 = ppppppplRam0000000113835a18;
    ppppppplStack_160 = ppppppplRam0000000113835a28;
    ppppppplStack_178 = ppppppplRam0000000113835a18;
    ppppppplStack_170 = ppppppplRam0000000113835a18;
    ppppppplRam0000000113835a18 = ppppppplVar6;
    ppppppplRam0000000113835a20 = unaff_x23;
    ppppppplRam0000000113835a28 = unaff_x25;
    FUN_10ac0afc0(&ppppppplStack_178);
  }
  ppppppplRam0000000113835a20 = unaff_x23;
  if (ppppppplRam0000000113835a18 == unaff_x23) goto LAB_10ac0f7d8;
  func_0x000107c2b07c(&ppppppplStack_178,"direction");
  pppppplStack_188 = (long ******)0xc;
  pppppplStack_180 = (long ******)0x0;
  pppppplVar11 = unaff_x23[-5];
  if (pppppplVar11 < unaff_x23[-4]) {
    pppppplVar11[2] = (long *****)ppppppplStack_168;
    pppppplVar11[1] = (long *****)ppppppplStack_170;
    *pppppplVar11 = (long *****)ppppppplStack_178;
    ppppppplStack_170 = (long *******)0x0;
    ppppppplStack_168 = (long *******)0x0;
    ppppppplStack_178 = (long *******)0x0;
    pppppplVar11[3] = (long *****)ppppppplStack_160;
    pppppplVar11[5] = (long *****)0xc;
    pppppplVar11[4] = (long *****)0x0;
    ppppppplVar6 = (long *******)(pppppplVar11 + 6);
  }
  else {
    ppppppplVar6 = unaff_x23 + -6;
    param_3 = &pppppplStack_180;
    param_4 = &pppppplStack_188;
    FUN_10ac0f848(ppppppplVar6,&ppppppplStack_178);
  }
  unaff_x23[-5] = (long ******)ppppppplVar6;
  if ((long)ppppppplStack_168 < 0) {
    __ZdlPv(ppppppplStack_178);
  }
  ppppppplVar6 = ppppppplRam0000000113835a20;
  if (ppppppplRam0000000113835a18 == ppppppplRam0000000113835a20) goto LAB_10ac0f7d8;
  func_0x000107c2b07c(&ppppppplStack_178,&DAT_10f68f0f0);
  pppppplStack_180 = (long ******)0xc;
  pppppplStack_188 = (long ******)0x10;
  pppppplVar11 = ppppppplVar6[-5];
  if (pppppplVar11 < ppppppplVar6[-4]) {
    pppppplVar11[2] = (long *****)ppppppplStack_168;
    pppppplVar11[1] = (long *****)ppppppplStack_170;
    *pppppplVar11 = (long *****)ppppppplStack_178;
    ppppppplStack_170 = (long *******)0x0;
    ppppppplStack_168 = (long *******)0x0;
    ppppppplStack_178 = (long *******)0x0;
    pppppplVar11[3] = (long *****)ppppppplStack_160;
    pppppplVar11[5] = (long *****)0x10;
    pppppplVar11[4] = (long *****)0xc;
    ppppppplVar7 = (long *******)(pppppplVar11 + 6);
  }
  else {
    ppppppplVar7 = ppppppplVar6 + -6;
    param_3 = &pppppplStack_180;
    param_4 = &pppppplStack_188;
    FUN_10ac0f848(ppppppplVar7,&ppppppplStack_178);
  }
  ppppppplVar6[-5] = (long ******)ppppppplVar7;
  if ((long)ppppppplStack_168 < 0) {
    __ZdlPv(ppppppplStack_178);
  }
  ppppppplVar6 = ppppppplRam0000000113835a20;
  if (ppppppplRam0000000113835a18 == ppppppplRam0000000113835a20) goto LAB_10ac0f7d8;
  param_2 = (long *******)&UNK_10f63ffbd;
  func_0x000107c2b07c(&ppppppplStack_178);
  pppppplStack_180 = (long ******)0x1c;
  pppppplStack_188 = (long ******)0x4;
  pppppplVar11 = ppppppplVar6[-5];
  if (pppppplVar11 < ppppppplVar6[-4]) {
    pppppplVar11[2] = (long *****)ppppppplStack_168;
    pppppplVar11[1] = (long *****)ppppppplStack_170;
    *pppppplVar11 = (long *****)ppppppplStack_178;
    ppppppplStack_170 = (long *******)0x0;
    ppppppplStack_168 = (long *******)0x0;
    ppppppplStack_178 = (long *******)0x0;
    pppppplVar11[3] = (long *****)ppppppplStack_160;
    pppppplVar11[5] = (long *****)0x4;
    pppppplVar11[4] = (long *****)0x1c;
    param_1 = (long *******)(pppppplVar11 + 6);
  }
  else {
    param_1 = ppppppplVar6 + -6;
    param_2 = (long *******)&ppppppplStack_178;
    param_3 = &pppppplStack_180;
    param_4 = &pppppplStack_188;
    FUN_10ac0f848();
  }
  ppppppplVar6[-5] = (long ******)param_1;
  if ((long)ppppppplStack_168 < 0) {
    param_1 = ppppppplStack_178;
    __ZdlPv();
  }
  ppppppplVar6 = ppppppplRam0000000113835a28;
  if (ppppppplRam0000000113835a20 < ppppppplRam0000000113835a28) {
    *ppppppplRam0000000113835a20 = (long ******)0xd80000002e;
    ppppppplRam0000000113835a20[2] = (long ******)0xc;
    ppppppplRam0000000113835a20[1] = (long ******)0x57c;
    *(undefined4 *)(ppppppplRam0000000113835a20 + 3) = 0;
    ppppppplRam0000000113835a20[5] = (long ******)0x0;
    ppppppplRam0000000113835a20[4] = (long ******)0x0;
    ppppppplRam0000000113835a20[7] = (long ******)0x0;
    ppppppplRam0000000113835a20[6] = (long ******)0x0;
    ppppppplRam0000000113835a20[9] = (long ******)0x0;
    ppppppplRam0000000113835a20[8] = (long ******)0x0;
    ppppppplRam0000000113835a20[0xb] = (long ******)0x0;
    ppppppplRam0000000113835a20[10] = (long ******)0x0;
    unaff_x25 = ppppppplRam0000000113835a20 + 0xc;
  }
  else {
    lVar8 = (long)ppppppplRam0000000113835a20 - (long)ppppppplRam0000000113835a18;
    uVar12 = (lVar8 >> 5) * -0x5555555555555555 + 1;
    if (0x2aaaaaaaaaaaaaa < uVar12) goto LAB_10ac0f7dc;
    lVar9 = (long)ppppppplRam0000000113835a28 - (long)ppppppplRam0000000113835a18 >> 5;
    uVar10 = lVar9 * 0x5555555555555556;
    if (uVar10 < uVar12 || uVar10 - uVar12 == 0) {
      uVar10 = uVar12;
    }
    if (0x155555555555554 < (ulong)(lVar9 * -0x5555555555555555)) {
      uVar10 = uVar14;
    }
    uStack_158 = 0x113835a18;
    lVar9 = lVar13;
    FUN_10a187714();
    puVar1 = (undefined8 *)(lVar9 + lVar8);
    *puVar1 = 0xd80000002e;
    puVar1[2] = 0xc;
    puVar1[1] = 0x57c;
    *(undefined4 *)(puVar1 + 3) = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    unaff_x25 = (long *******)(puVar1 + 0xc);
    ppppppplVar6 = (long *******)
                   ((long)puVar1 +
                   ((long)ppppppplRam0000000113835a18 - (long)ppppppplRam0000000113835a20));
    param_2 = ppppppplRam0000000113835a18;
    param_4 = ppppppplVar6;
    FUN_10ac0aec8(0x113835a18);
    ppppppplStack_168 = ppppppplRam0000000113835a18;
    ppppppplStack_160 = ppppppplRam0000000113835a28;
    ppppppplStack_178 = ppppppplRam0000000113835a18;
    ppppppplStack_170 = ppppppplRam0000000113835a18;
    param_1 = (long *******)&ppppppplStack_178;
    ppppppplRam0000000113835a18 = ppppppplVar6;
    ppppppplVar6 = ppppppplRam0000000113835a20;
    ppppppplRam0000000113835a20 = unaff_x25;
    ppppppplRam0000000113835a28 = (long *******)(lVar9 + uVar10 * 0x60);
    FUN_10ac0afc0();
    param_3 = ppppppplRam0000000113835a20;
    ppppppplVar6 = ppppppplRam0000000113835a28;
  }
  unaff_x23 = (long *******)0x113835000;
  if (unaff_x25 < ppppppplVar6) {
    *unaff_x25 = (long ******)0xd80000002f;
    unaff_x25[2] = (long ******)0x8;
    unaff_x25[1] = (long ******)0x588;
    *(undefined4 *)(unaff_x25 + 3) = 0;
    unaff_x25[5] = (long ******)0x0;
    unaff_x25[4] = (long ******)0x0;
    unaff_x25[7] = (long ******)0x0;
    unaff_x25[6] = (long ******)0x0;
    unaff_x25[9] = (long ******)0x0;
    unaff_x25[8] = (long ******)0x0;
    unaff_x25[0xb] = (long ******)0x0;
    unaff_x25[10] = (long ******)0x0;
    unaff_x25 = unaff_x25 + 0xc;
  }
  else {
    lVar8 = (long)unaff_x25 - (long)ppppppplRam0000000113835a18;
    uVar12 = (lVar8 >> 5) * -0x5555555555555555 + 1;
    ppppppplRam0000000113835a20 = unaff_x25;
    if (0x2aaaaaaaaaaaaaa < uVar12) goto LAB_10ac0f7dc;
    lVar9 = (long)ppppppplVar6 - (long)ppppppplRam0000000113835a18 >> 5;
    uVar10 = lVar9 * 0x5555555555555556;
    if (uVar10 < uVar12 || uVar10 - uVar12 == 0) {
      uVar10 = uVar12;
    }
    if (0x155555555555554 < (ulong)(lVar9 * -0x5555555555555555)) {
      uVar10 = uVar14;
    }
    uStack_158 = 0x113835a18;
    lVar9 = lVar13;
    FUN_10a187714();
    puVar1 = (undefined8 *)(lVar9 + lVar8);
    unaff_x26 = (long *******)(lVar9 + uVar10 * 0x60);
    *puVar1 = 0xd80000002f;
    puVar1[2] = 8;
    puVar1[1] = 0x588;
    *(undefined4 *)(puVar1 + 3) = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    unaff_x25 = (long *******)(puVar1 + 0xc);
    ppppppplVar6 = (long *******)
                   ((long)puVar1 +
                   ((long)ppppppplRam0000000113835a18 - (long)ppppppplRam0000000113835a20));
    param_2 = ppppppplRam0000000113835a18;
    param_4 = ppppppplVar6;
    FUN_10ac0aec8(0x113835a18);
    ppppppplStack_168 = ppppppplRam0000000113835a18;
    ppppppplStack_160 = ppppppplRam0000000113835a28;
    ppppppplStack_178 = ppppppplRam0000000113835a18;
    ppppppplStack_170 = ppppppplRam0000000113835a18;
    param_1 = (long *******)&ppppppplStack_178;
    ppppppplRam0000000113835a18 = ppppppplVar6;
    ppppppplVar6 = ppppppplRam0000000113835a20;
    ppppppplRam0000000113835a20 = unaff_x25;
    ppppppplRam0000000113835a28 = unaff_x26;
    FUN_10ac0afc0();
    param_3 = ppppppplRam0000000113835a20;
    ppppppplVar6 = ppppppplRam0000000113835a28;
  }
  if (unaff_x25 < ppppppplVar6) {
    *unaff_x25 = (long ******)0xd800000030;
    unaff_x25[2] = (long ******)0x4;
    unaff_x25[1] = (long ******)0x590;
    *(undefined4 *)(unaff_x25 + 3) = 0;
    unaff_x25[5] = (long ******)0x0;
    unaff_x25[4] = (long ******)0x0;
    unaff_x25[7] = (long ******)0x0;
    unaff_x25[6] = (long ******)0x0;
    unaff_x25[9] = (long ******)0x0;
    unaff_x25[8] = (long ******)0x0;
    unaff_x25[0xb] = (long ******)0x0;
    unaff_x25[10] = (long ******)0x0;
    unaff_x25 = unaff_x25 + 0xc;
  }
  else {
    lVar8 = (long)unaff_x25 - (long)ppppppplRam0000000113835a18;
    uVar12 = (lVar8 >> 5) * -0x5555555555555555 + 1;
    ppppppplRam0000000113835a20 = unaff_x25;
    if (0x2aaaaaaaaaaaaaa < uVar12) goto LAB_10ac0f7dc;
    lVar9 = (long)ppppppplVar6 - (long)ppppppplRam0000000113835a18 >> 5;
    uVar10 = lVar9 * 0x5555555555555556;
    if (uVar10 < uVar12 || uVar10 - uVar12 == 0) {
      uVar10 = uVar12;
    }
    if (0x155555555555554 < (ulong)(lVar9 * -0x5555555555555555)) {
      uVar10 = uVar14;
    }
    uStack_158 = 0x113835a18;
    lVar9 = lVar13;
    FUN_10a187714();
    puVar1 = (undefined8 *)(lVar9 + lVar8);
    unaff_x26 = (long *******)(lVar9 + uVar10 * 0x60);
    *puVar1 = 0xd800000030;
    puVar1[2] = 4;
    puVar1[1] = 0x590;
    *(undefined4 *)(puVar1 + 3) = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    unaff_x25 = (long *******)(puVar1 + 0xc);
    ppppppplVar6 = (long *******)
                   ((long)puVar1 +
                   ((long)ppppppplRam0000000113835a18 - (long)ppppppplRam0000000113835a20));
    param_2 = ppppppplRam0000000113835a18;
    param_4 = ppppppplVar6;
    FUN_10ac0aec8(0x113835a18);
    ppppppplStack_168 = ppppppplRam0000000113835a18;
    ppppppplStack_160 = ppppppplRam0000000113835a28;
    ppppppplStack_178 = ppppppplRam0000000113835a18;
    ppppppplStack_170 = ppppppplRam0000000113835a18;
    param_1 = (long *******)&ppppppplStack_178;
    ppppppplRam0000000113835a18 = ppppppplVar6;
    ppppppplVar6 = ppppppplRam0000000113835a20;
    ppppppplRam0000000113835a20 = unaff_x25;
    ppppppplRam0000000113835a28 = unaff_x26;
    FUN_10ac0afc0();
    param_3 = ppppppplRam0000000113835a20;
    ppppppplVar6 = ppppppplRam0000000113835a28;
  }
  if (unaff_x25 < ppppppplVar6) {
    *unaff_x25 = (long ******)0xd800000023;
    unaff_x25[2] = (long ******)0x24;
    unaff_x25[1] = (long ******)0x300;
    *(undefined4 *)(unaff_x25 + 3) = 3;
    unaff_x25[5] = (long ******)0x1820;
    unaff_x25[4] = (long ******)0x0;
    unaff_x25[7] = (long ******)0x0;
    unaff_x25[6] = (long ******)0x0;
    unaff_x25[9] = (long ******)0x0;
    unaff_x25[8] = (long ******)0x0;
    unaff_x25[0xb] = (long ******)0x0;
    unaff_x25[10] = (long ******)0x0;
    unaff_x25 = unaff_x25 + 0xc;
  }
  else {
    lVar8 = (long)unaff_x25 - (long)ppppppplRam0000000113835a18;
    uVar12 = (lVar8 >> 5) * -0x5555555555555555 + 1;
    ppppppplRam0000000113835a20 = unaff_x25;
    if (0x2aaaaaaaaaaaaaa < uVar12) goto LAB_10ac0f7dc;
    lVar9 = (long)ppppppplVar6 - (long)ppppppplRam0000000113835a18 >> 5;
    uVar10 = lVar9 * 0x5555555555555556;
    if (uVar10 < uVar12 || uVar10 - uVar12 == 0) {
      uVar10 = uVar12;
    }
    if (0x155555555555554 < (ulong)(lVar9 * -0x5555555555555555)) {
      uVar10 = uVar14;
    }
    uStack_158 = 0x113835a18;
    lVar9 = lVar13;
    FUN_10a187714();
    param_3 = ppppppplRam0000000113835a20;
    ppppppplVar7 = ppppppplRam0000000113835a18;
    puVar1 = (undefined8 *)(lVar9 + lVar8);
    unaff_x26 = (long *******)(lVar9 + uVar10 * 0x60);
    *puVar1 = 0xd800000023;
    puVar1[2] = 0x24;
    puVar1[1] = 0x300;
    *(undefined4 *)(puVar1 + 3) = 3;
    puVar1[5] = 0x1820;
    puVar1[4] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    unaff_x25 = (long *******)(puVar1 + 0xc);
    ppppppplVar6 = (long *******)((long)puVar1 + ((long)ppppppplVar7 - (long)param_3));
    param_4 = ppppppplVar6;
    FUN_10ac0aec8(0x113835a18,ppppppplVar7);
    ppppppplStack_168 = ppppppplRam0000000113835a18;
    ppppppplStack_160 = ppppppplRam0000000113835a28;
    ppppppplStack_178 = ppppppplRam0000000113835a18;
    ppppppplStack_170 = ppppppplRam0000000113835a18;
    ppppppplRam0000000113835a18 = ppppppplVar6;
    ppppppplRam0000000113835a20 = unaff_x25;
    ppppppplRam0000000113835a28 = unaff_x26;
    FUN_10ac0afc0(&ppppppplStack_178);
  }
  ppppppplRam0000000113835a20 = unaff_x25;
  if (ppppppplRam0000000113835a18 == unaff_x25) goto LAB_10ac0f7d8;
  func_0x000107c2b07c(&ppppppplStack_178,&DAT_10f2ca5ec);
  pppppplStack_180 = (long ******)0x1c;
  pppppplStack_188 = (long ******)0x4;
  pppppplVar11 = unaff_x25[-5];
  if (pppppplVar11 < unaff_x25[-4]) {
    pppppplVar11[2] = (long *****)ppppppplStack_168;
    pppppplVar11[1] = (long *****)ppppppplStack_170;
    *pppppplVar11 = (long *****)ppppppplStack_178;
    ppppppplStack_170 = (long *******)0x0;
    ppppppplStack_168 = (long *******)0x0;
    ppppppplStack_178 = (long *******)0x0;
    pppppplVar11[3] = (long *****)ppppppplStack_160;
    pppppplVar11[5] = (long *****)0x4;
    pppppplVar11[4] = (long *****)0x1c;
    ppppppplVar6 = (long *******)(pppppplVar11 + 6);
  }
  else {
    ppppppplVar6 = unaff_x25 + -6;
    param_3 = &pppppplStack_180;
    param_4 = &pppppplStack_188;
    FUN_10ac0f848(ppppppplVar6,&ppppppplStack_178);
  }
  unaff_x25[-5] = (long ******)ppppppplVar6;
  if ((long)ppppppplStack_168 < 0) {
    __ZdlPv(ppppppplStack_178);
  }
  ppppppplVar6 = ppppppplRam0000000113835a20;
  if (ppppppplRam0000000113835a18 == ppppppplRam0000000113835a20) goto LAB_10ac0f7d8;
  func_0x000107c2b07c(&ppppppplStack_178,&DAT_10f2c46ae);
  pppppplStack_180 = (long ******)0x10;
  pppppplStack_188 = (long ******)0xc;
  pppppplVar11 = ppppppplVar6[-5];
  if (pppppplVar11 < ppppppplVar6[-4]) {
    pppppplVar11[2] = (long *****)ppppppplStack_168;
    pppppplVar11[1] = (long *****)ppppppplStack_170;
    *pppppplVar11 = (long *****)ppppppplStack_178;
    ppppppplStack_170 = (long *******)0x0;
    ppppppplStack_168 = (long *******)0x0;
    ppppppplStack_178 = (long *******)0x0;
    pppppplVar11[3] = (long *****)ppppppplStack_160;
    pppppplVar11[5] = (long *****)0xc;
    pppppplVar11[4] = (long *****)0x10;
    ppppppplVar7 = (long *******)(pppppplVar11 + 6);
  }
  else {
    ppppppplVar7 = ppppppplVar6 + -6;
    param_3 = &pppppplStack_180;
    param_4 = &pppppplStack_188;
    FUN_10ac0f848(ppppppplVar7,&ppppppplStack_178);
  }
  ppppppplVar6[-5] = (long ******)ppppppplVar7;
  if ((long)ppppppplStack_168 < 0) {
    __ZdlPv(ppppppplStack_178);
  }
  ppppppplVar6 = ppppppplRam0000000113835a20;
  if (ppppppplRam0000000113835a18 == ppppppplRam0000000113835a20) goto LAB_10ac0f7d8;
  func_0x000107c2b07c(&ppppppplStack_178,&DAT_10f68f0f0);
  pppppplStack_188 = (long ******)0xc;
  pppppplStack_180 = (long ******)0x0;
  pppppplVar11 = ppppppplVar6[-5];
  if (pppppplVar11 < ppppppplVar6[-4]) {
    pppppplVar11[2] = (long *****)ppppppplStack_168;
    pppppplVar11[1] = (long *****)ppppppplStack_170;
    *pppppplVar11 = (long *****)ppppppplStack_178;
    ppppppplStack_170 = (long *******)0x0;
    ppppppplStack_168 = (long *******)0x0;
    ppppppplStack_178 = (long *******)0x0;
    pppppplVar11[3] = (long *****)ppppppplStack_160;
    pppppplVar11[5] = (long *****)0xc;
    pppppplVar11[4] = (long *****)0x0;
    ppppppplVar7 = (long *******)(pppppplVar11 + 6);
  }
  else {
    ppppppplVar7 = ppppppplVar6 + -6;
    param_3 = &pppppplStack_180;
    param_4 = &pppppplStack_188;
    FUN_10ac0f848(ppppppplVar7,&ppppppplStack_178);
  }
  ppppppplVar6[-5] = (long ******)ppppppplVar7;
  if ((long)ppppppplStack_168 < 0) {
    __ZdlPv(ppppppplStack_178);
  }
  ppppppplVar6 = ppppppplRam0000000113835a20;
  if (ppppppplRam0000000113835a18 == ppppppplRam0000000113835a20) goto LAB_10ac0f7d8;
  func_0x000107c2b07c(&ppppppplStack_178,&DAT_10f4154b4);
  pppppplStack_180 = (long ******)0xc;
  pppppplStack_188 = (long ******)0x4;
  pppppplVar11 = ppppppplVar6[-5];
  if (pppppplVar11 < ppppppplVar6[-4]) {
    pppppplVar11[2] = (long *****)ppppppplStack_168;
    pppppplVar11[1] = (long *****)ppppppplStack_170;
    *pppppplVar11 = (long *****)ppppppplStack_178;
    ppppppplStack_170 = (long *******)0x0;
    ppppppplStack_168 = (long *******)0x0;
    ppppppplStack_178 = (long *******)0x0;
    pppppplVar11[3] = (long *****)ppppppplStack_160;
    pppppplVar11[5] = (long *****)0x4;
    pppppplVar11[4] = (long *****)0xc;
    ppppppplVar7 = (long *******)(pppppplVar11 + 6);
  }
  else {
    ppppppplVar7 = ppppppplVar6 + -6;
    param_3 = &pppppplStack_180;
    param_4 = &pppppplStack_188;
    FUN_10ac0f848(ppppppplVar7,&ppppppplStack_178);
  }
  ppppppplVar6[-5] = (long ******)ppppppplVar7;
  if ((long)ppppppplStack_168 < 0) {
    __ZdlPv(ppppppplStack_178);
  }
  ppppppplVar6 = ppppppplRam0000000113835a20;
  if (ppppppplRam0000000113835a18 == ppppppplRam0000000113835a20) goto LAB_10ac0f7d8;
  param_2 = (long *******)&DAT_10f68f0d4;
  func_0x000107c2b07c(&ppppppplStack_178);
  pppppplStack_180 = (long ******)0x20;
  pppppplStack_188 = (long ******)0x4;
  pppppplVar11 = ppppppplVar6[-5];
  if (pppppplVar11 < ppppppplVar6[-4]) {
    pppppplVar11[2] = (long *****)ppppppplStack_168;
    pppppplVar11[1] = (long *****)ppppppplStack_170;
    *pppppplVar11 = (long *****)ppppppplStack_178;
    ppppppplStack_170 = (long *******)0x0;
    ppppppplStack_168 = (long *******)0x0;
    ppppppplStack_178 = (long *******)0x0;
    pppppplVar11[3] = (long *****)ppppppplStack_160;
    pppppplVar11[5] = (long *****)0x4;
    pppppplVar11[4] = (long *****)0x20;
    param_1 = (long *******)(pppppplVar11 + 6);
  }
  else {
    param_1 = ppppppplVar6 + -6;
    param_2 = (long *******)&ppppppplStack_178;
    param_3 = &pppppplStack_180;
    param_4 = &pppppplStack_188;
    FUN_10ac0f848();
  }
  ppppppplVar6[-5] = (long ******)param_1;
  if ((long)ppppppplStack_168 < 0) {
    param_1 = ppppppplStack_178;
    __ZdlPv();
  }
  ppppppplVar6 = ppppppplRam0000000113835a28;
  if (ppppppplRam0000000113835a20 < ppppppplRam0000000113835a28) {
    *ppppppplRam0000000113835a20 = (long ******)0xd8000000bb;
    ppppppplRam0000000113835a20[2] = (long ******)0xc;
    ppppppplRam0000000113835a20[1] = (long ******)0x570;
    *(undefined4 *)(ppppppplRam0000000113835a20 + 3) = 0;
    ppppppplRam0000000113835a20[5] = (long ******)0x0;
    ppppppplRam0000000113835a20[4] = (long ******)0x0;
    ppppppplRam0000000113835a20[7] = (long ******)0x0;
    ppppppplRam0000000113835a20[6] = (long ******)0x0;
    ppppppplRam0000000113835a20[9] = (long ******)0x0;
    ppppppplRam0000000113835a20[8] = (long ******)0x0;
    ppppppplRam0000000113835a20[0xb] = (long ******)0x0;
    ppppppplRam0000000113835a20[10] = (long ******)0x0;
    unaff_x25 = ppppppplRam0000000113835a20 + 0xc;
  }
  else {
    lVar8 = (long)ppppppplRam0000000113835a20 - (long)ppppppplRam0000000113835a18;
    uVar12 = (lVar8 >> 5) * -0x5555555555555555 + 1;
    if (0x2aaaaaaaaaaaaaa < uVar12) goto LAB_10ac0f7dc;
    lVar9 = (long)ppppppplRam0000000113835a28 - (long)ppppppplRam0000000113835a18 >> 5;
    uVar10 = lVar9 * 0x5555555555555556;
    if (uVar10 < uVar12 || uVar10 - uVar12 == 0) {
      uVar10 = uVar12;
    }
    if (0x155555555555554 < (ulong)(lVar9 * -0x5555555555555555)) {
      uVar10 = uVar14;
    }
    uStack_158 = 0x113835a18;
    lVar9 = lVar13;
    FUN_10a187714();
    puVar1 = (undefined8 *)(lVar9 + lVar8);
    unaff_x26 = (long *******)(lVar9 + uVar10 * 0x60);
    *puVar1 = 0xd8000000bb;
    puVar1[2] = 0xc;
    puVar1[1] = 0x570;
    *(undefined4 *)(puVar1 + 3) = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    unaff_x25 = (long *******)(puVar1 + 0xc);
    ppppppplVar15 =
         (long *******)
         ((long)puVar1 + ((long)ppppppplRam0000000113835a18 - (long)ppppppplRam0000000113835a20));
    param_2 = ppppppplRam0000000113835a18;
    param_4 = ppppppplVar15;
    FUN_10ac0aec8(0x113835a18);
    ppppppplStack_168 = ppppppplRam0000000113835a18;
    ppppppplStack_160 = ppppppplRam0000000113835a28;
    ppppppplStack_178 = ppppppplRam0000000113835a18;
    ppppppplStack_170 = ppppppplRam0000000113835a18;
    param_1 = (long *******)&ppppppplStack_178;
    ppppppplRam0000000113835a18 = ppppppplVar15;
    ppppppplVar15 = ppppppplRam0000000113835a20;
    ppppppplRam0000000113835a20 = unaff_x25;
    ppppppplRam0000000113835a28 = unaff_x26;
    FUN_10ac0afc0();
    param_3 = ppppppplRam0000000113835a20;
    ppppppplVar6 = ppppppplRam0000000113835a28;
  }
  ppppppplVar15 = (long *******)0x113835a20;
  if (unaff_x25 < ppppppplVar6) {
    *unaff_x25 = (long ******)0xd8000000bc;
    unaff_x25[2] = (long ******)0x1c;
    unaff_x25[1] = (long ******)0x420;
    *(undefined4 *)(unaff_x25 + 3) = 3;
    unaff_x25[5] = (long ******)0x1828;
    unaff_x25[4] = (long ******)0x0;
    unaff_x25[7] = (long ******)0x0;
    unaff_x25[6] = (long ******)0x0;
    unaff_x25[9] = (long ******)0x0;
    unaff_x25[8] = (long ******)0x0;
    unaff_x25[0xb] = (long ******)0x0;
    unaff_x25[10] = (long ******)0x0;
    unaff_x25 = unaff_x25 + 0xc;
  }
  else {
    lVar8 = (long)unaff_x25 - (long)ppppppplRam0000000113835a18;
    uVar12 = (lVar8 >> 5) * -0x5555555555555555 + 1;
    ppppppplRam0000000113835a20 = unaff_x25;
    if (0x2aaaaaaaaaaaaaa < uVar12) goto LAB_10ac0f7dc;
    lVar9 = (long)ppppppplVar6 - (long)ppppppplRam0000000113835a18 >> 5;
    uVar10 = lVar9 * 0x5555555555555556;
    if (uVar10 < uVar12 || uVar10 - uVar12 == 0) {
      uVar10 = uVar12;
    }
    if (0x155555555555554 < (ulong)(lVar9 * -0x5555555555555555)) {
      uVar10 = uVar14;
    }
    uStack_158 = 0x113835a18;
    lVar9 = lVar13;
    FUN_10a187714();
    param_3 = ppppppplRam0000000113835a20;
    ppppppplVar7 = ppppppplRam0000000113835a18;
    puVar1 = (undefined8 *)(lVar9 + lVar8);
    unaff_x26 = (long *******)(lVar9 + uVar10 * 0x60);
    *puVar1 = 0xd8000000bc;
    puVar1[2] = 0x1c;
    puVar1[1] = 0x420;
    *(undefined4 *)(puVar1 + 3) = 3;
    puVar1[5] = 0x1828;
    puVar1[4] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    unaff_x25 = (long *******)(puVar1 + 0xc);
    ppppppplVar6 = (long *******)((long)puVar1 + ((long)ppppppplVar7 - (long)param_3));
    param_4 = ppppppplVar6;
    FUN_10ac0aec8(0x113835a18,ppppppplVar7);
    ppppppplStack_168 = ppppppplRam0000000113835a18;
    ppppppplStack_160 = ppppppplRam0000000113835a28;
    ppppppplStack_178 = ppppppplRam0000000113835a18;
    ppppppplStack_170 = ppppppplRam0000000113835a18;
    ppppppplRam0000000113835a18 = ppppppplVar6;
    ppppppplRam0000000113835a20 = unaff_x25;
    ppppppplRam0000000113835a28 = unaff_x26;
    FUN_10ac0afc0(&ppppppplStack_178);
  }
  ppppppplRam0000000113835a20 = unaff_x25;
  if (ppppppplRam0000000113835a18 == unaff_x25) goto LAB_10ac0f7d8;
  func_0x000107c2b07c(&ppppppplStack_178,&DAT_10f68f0f0);
  pppppplStack_188 = (long ******)0xc;
  pppppplStack_180 = (long ******)0x0;
  pppppplVar11 = unaff_x25[-5];
  if (pppppplVar11 < unaff_x25[-4]) {
    pppppplVar11[2] = (long *****)ppppppplStack_168;
    pppppplVar11[1] = (long *****)ppppppplStack_170;
    *pppppplVar11 = (long *****)ppppppplStack_178;
    ppppppplStack_170 = (long *******)0x0;
    ppppppplStack_168 = (long *******)0x0;
    ppppppplStack_178 = (long *******)0x0;
    pppppplVar11[3] = (long *****)ppppppplStack_160;
    pppppplVar11[5] = (long *****)0xc;
    pppppplVar11[4] = (long *****)0x0;
    ppppppplVar6 = (long *******)(pppppplVar11 + 6);
  }
  else {
    ppppppplVar6 = unaff_x25 + -6;
    param_3 = &pppppplStack_180;
    param_4 = &pppppplStack_188;
    FUN_10ac0f848(ppppppplVar6,&ppppppplStack_178);
  }
  unaff_x25[-5] = (long ******)ppppppplVar6;
  if ((long)ppppppplStack_168 < 0) {
    __ZdlPv(ppppppplStack_178);
  }
  ppppppplVar6 = ppppppplRam0000000113835a20;
  if (ppppppplRam0000000113835a18 == ppppppplRam0000000113835a20) goto LAB_10ac0f7d8;
  func_0x000107c2b07c(&ppppppplStack_178,&UNK_10f640002);
  pppppplStack_180 = (long ******)0xc;
  pppppplStack_188 = (long ******)0x4;
  pppppplVar11 = ppppppplVar6[-5];
  if (pppppplVar11 < ppppppplVar6[-4]) {
    pppppplVar11[2] = (long *****)ppppppplStack_168;
    pppppplVar11[1] = (long *****)ppppppplStack_170;
    *pppppplVar11 = (long *****)ppppppplStack_178;
    ppppppplStack_170 = (long *******)0x0;
    ppppppplStack_168 = (long *******)0x0;
    ppppppplStack_178 = (long *******)0x0;
    pppppplVar11[3] = (long *****)ppppppplStack_160;
    pppppplVar11[5] = (long *****)0x4;
    pppppplVar11[4] = (long *****)0xc;
    ppppppplVar7 = (long *******)(pppppplVar11 + 6);
  }
  else {
    ppppppplVar7 = ppppppplVar6 + -6;
    param_3 = &pppppplStack_180;
    param_4 = &pppppplStack_188;
    FUN_10ac0f848(ppppppplVar7,&ppppppplStack_178);
  }
  ppppppplVar6[-5] = (long ******)ppppppplVar7;
  if ((long)ppppppplStack_168 < 0) {
    __ZdlPv(ppppppplStack_178);
  }
  ppppppplVar6 = ppppppplRam0000000113835a20;
  if (ppppppplRam0000000113835a18 == ppppppplRam0000000113835a20) goto LAB_10ac0f7d8;
  param_2 = (long *******)&UNK_10f5a3e3a;
  func_0x000107c2b07c(&ppppppplStack_178);
  pppppplStack_180 = (long ******)0x10;
  pppppplStack_188 = (long ******)0xc;
  pppppplVar11 = ppppppplVar6[-5];
  if (pppppplVar11 < ppppppplVar6[-4]) {
    pppppplVar11[2] = (long *****)ppppppplStack_168;
    pppppplVar11[1] = (long *****)ppppppplStack_170;
    *pppppplVar11 = (long *****)ppppppplStack_178;
    ppppppplStack_170 = (long *******)0x0;
    ppppppplStack_168 = (long *******)0x0;
    ppppppplStack_178 = (long *******)0x0;
    pppppplVar11[3] = (long *****)ppppppplStack_160;
    pppppplVar11[5] = (long *****)0xc;
    pppppplVar11[4] = (long *****)0x10;
    param_1 = (long *******)(pppppplVar11 + 6);
  }
  else {
    param_1 = ppppppplVar6 + -6;
    param_2 = (long *******)&ppppppplStack_178;
    param_3 = &pppppplStack_180;
    param_4 = &pppppplStack_188;
    FUN_10ac0f848();
  }
  ppppppplVar6[-5] = (long ******)param_1;
  if ((long)ppppppplStack_168 < 0) {
    param_1 = ppppppplStack_178;
    __ZdlPv();
  }
  ppppppplVar6 = ppppppplRam0000000113835a28;
  if (ppppppplRam0000000113835a20 < ppppppplRam0000000113835a28) {
    *ppppppplRam0000000113835a20 = (long ******)0xd8000000bd;
    ppppppplRam0000000113835a20[2] = (long ******)0x24;
    ppppppplRam0000000113835a20[1] = (long ******)0x1568;
    *(undefined4 *)(ppppppplRam0000000113835a20 + 3) = 0;
    ppppppplRam0000000113835a20[5] = (long ******)0x0;
    ppppppplRam0000000113835a20[4] = (long ******)0x0;
    ppppppplRam0000000113835a20[7] = (long ******)0x0;
    ppppppplRam0000000113835a20[6] = (long ******)0x0;
    ppppppplRam0000000113835a20[9] = (long ******)0x0;
    ppppppplRam0000000113835a20[8] = (long ******)0x0;
    ppppppplRam0000000113835a20[0xb] = (long ******)0x0;
    ppppppplRam0000000113835a20[10] = (long ******)0x0;
    ppppppplVar15 = ppppppplRam0000000113835a20 + 0xc;
  }
  else {
    lVar8 = (long)ppppppplRam0000000113835a20 - (long)ppppppplRam0000000113835a18;
    uVar12 = (lVar8 >> 5) * -0x5555555555555555 + 1;
    if (0x2aaaaaaaaaaaaaa < uVar12) goto LAB_10ac0f7dc;
    lVar9 = (long)ppppppplRam0000000113835a28 - (long)ppppppplRam0000000113835a18 >> 5;
    uVar10 = lVar9 * 0x5555555555555556;
    if (uVar10 < uVar12 || uVar10 - uVar12 == 0) {
      uVar10 = uVar12;
    }
    if (0x155555555555554 < (ulong)(lVar9 * -0x5555555555555555)) {
      uVar10 = uVar14;
    }
    uStack_158 = 0x113835a18;
    lVar9 = lVar13;
    FUN_10a187714();
    puVar1 = (undefined8 *)(lVar9 + lVar8);
    unaff_x25 = (long *******)(lVar9 + uVar10 * 0x60);
    *puVar1 = 0xd8000000bd;
    puVar1[2] = 0x24;
    puVar1[1] = 0x1568;
    *(undefined4 *)(puVar1 + 3) = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    ppppppplVar15 = (long *******)(puVar1 + 0xc);
    ppppppplVar6 = (long *******)
                   ((long)puVar1 +
                   ((long)ppppppplRam0000000113835a18 - (long)ppppppplRam0000000113835a20));
    param_2 = ppppppplRam0000000113835a18;
    param_4 = ppppppplVar6;
    FUN_10ac0aec8(0x113835a18);
    ppppppplStack_168 = ppppppplRam0000000113835a18;
    ppppppplStack_160 = ppppppplRam0000000113835a28;
    ppppppplStack_178 = ppppppplRam0000000113835a18;
    ppppppplStack_170 = ppppppplRam0000000113835a18;
    param_1 = (long *******)&ppppppplStack_178;
    ppppppplRam0000000113835a18 = ppppppplVar6;
    ppppppplVar6 = ppppppplRam0000000113835a20;
    ppppppplRam0000000113835a20 = ppppppplVar15;
    ppppppplRam0000000113835a28 = unaff_x25;
    FUN_10ac0afc0();
    param_3 = ppppppplRam0000000113835a20;
    ppppppplVar6 = ppppppplRam0000000113835a28;
  }
  if (ppppppplVar15 < ppppppplVar6) {
    *ppppppplVar15 = (long ******)0xd8000000be;
    ppppppplVar15[2] = (long ******)0x10;
    ppppppplVar15[1] = (long ******)0x158c;
    *(undefined4 *)(ppppppplVar15 + 3) = 0;
    ppppppplVar15[5] = (long ******)0x0;
    ppppppplVar15[4] = (long ******)0x0;
    ppppppplVar15[7] = (long ******)0x0;
    ppppppplVar15[6] = (long ******)0x0;
    ppppppplVar15[9] = (long ******)0x0;
    ppppppplVar15[8] = (long ******)0x0;
    ppppppplVar15[0xb] = (long ******)0x0;
    ppppppplVar15[10] = (long ******)0x0;
    ppppppplVar15 = ppppppplVar15 + 0xc;
  }
  else {
    lVar8 = (long)ppppppplVar15 - (long)ppppppplRam0000000113835a18;
    uVar12 = (lVar8 >> 5) * -0x5555555555555555 + 1;
    ppppppplRam0000000113835a20 = ppppppplVar15;
    if (0x2aaaaaaaaaaaaaa < uVar12) goto LAB_10ac0f7dc;
    lVar9 = (long)ppppppplVar6 - (long)ppppppplRam0000000113835a18 >> 5;
    uVar10 = lVar9 * 0x5555555555555556;
    if (uVar10 < uVar12 || uVar10 - uVar12 == 0) {
      uVar10 = uVar12;
    }
    if (0x155555555555554 < (ulong)(lVar9 * -0x5555555555555555)) {
      uVar10 = uVar14;
    }
    uStack_158 = 0x113835a18;
    lVar9 = lVar13;
    FUN_10a187714();
    puVar1 = (undefined8 *)(lVar9 + lVar8);
    unaff_x25 = (long *******)(lVar9 + uVar10 * 0x60);
    *puVar1 = 0xd8000000be;
    puVar1[2] = 0x10;
    puVar1[1] = 0x158c;
    *(undefined4 *)(puVar1 + 3) = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    ppppppplVar15 = (long *******)(puVar1 + 0xc);
    ppppppplVar6 = (long *******)
                   ((long)puVar1 +
                   ((long)ppppppplRam0000000113835a18 - (long)ppppppplRam0000000113835a20));
    param_2 = ppppppplRam0000000113835a18;
    param_4 = ppppppplVar6;
    FUN_10ac0aec8(0x113835a18);
    ppppppplStack_168 = ppppppplRam0000000113835a18;
    ppppppplStack_160 = ppppppplRam0000000113835a28;
    ppppppplStack_178 = ppppppplRam0000000113835a18;
    ppppppplStack_170 = ppppppplRam0000000113835a18;
    param_1 = (long *******)&ppppppplStack_178;
    ppppppplRam0000000113835a18 = ppppppplVar6;
    ppppppplVar6 = ppppppplRam0000000113835a20;
    ppppppplRam0000000113835a20 = ppppppplVar15;
    ppppppplRam0000000113835a28 = unaff_x25;
    FUN_10ac0afc0();
    param_3 = ppppppplRam0000000113835a20;
    ppppppplVar6 = ppppppplRam0000000113835a28;
  }
  if (ppppppplVar15 < ppppppplVar6) {
    *ppppppplVar15 = (long ******)0xd8000000bf;
    ppppppplVar15[2] = (long ******)0x10;
    ppppppplVar15[1] = (long ******)0x15a4;
    *(undefined4 *)(ppppppplVar15 + 3) = 0;
    ppppppplVar15[5] = (long ******)0x0;
    ppppppplVar15[4] = (long ******)0x0;
    ppppppplVar15[7] = (long ******)0x0;
    ppppppplVar15[6] = (long ******)0x0;
    ppppppplVar15[9] = (long ******)0x0;
    ppppppplVar15[8] = (long ******)0x0;
    ppppppplVar15[0xb] = (long ******)0x0;
    ppppppplVar15[10] = (long ******)0x0;
    ppppppplVar15 = ppppppplVar15 + 0xc;
  }
  else {
    lVar8 = (long)ppppppplVar15 - (long)ppppppplRam0000000113835a18;
    uVar12 = (lVar8 >> 5) * -0x5555555555555555 + 1;
    ppppppplRam0000000113835a20 = ppppppplVar15;
    if (0x2aaaaaaaaaaaaaa < uVar12) goto LAB_10ac0f7dc;
    lVar9 = (long)ppppppplVar6 - (long)ppppppplRam0000000113835a18 >> 5;
    uVar10 = lVar9 * 0x5555555555555556;
    if (uVar10 < uVar12 || uVar10 - uVar12 == 0) {
      uVar10 = uVar12;
    }
    if (0x155555555555554 < (ulong)(lVar9 * -0x5555555555555555)) {
      uVar10 = uVar14;
    }
    uStack_158 = 0x113835a18;
    lVar9 = lVar13;
    FUN_10a187714();
    puVar1 = (undefined8 *)(lVar9 + lVar8);
    unaff_x25 = (long *******)(lVar9 + uVar10 * 0x60);
    *puVar1 = 0xd8000000bf;
    puVar1[2] = 0x10;
    puVar1[1] = 0x15a4;
    *(undefined4 *)(puVar1 + 3) = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    ppppppplVar15 = (long *******)(puVar1 + 0xc);
    ppppppplVar6 = (long *******)
                   ((long)puVar1 +
                   ((long)ppppppplRam0000000113835a18 - (long)ppppppplRam0000000113835a20));
    param_2 = ppppppplRam0000000113835a18;
    param_4 = ppppppplVar6;
    FUN_10ac0aec8(0x113835a18);
    ppppppplStack_168 = ppppppplRam0000000113835a18;
    ppppppplStack_160 = ppppppplRam0000000113835a28;
    ppppppplStack_178 = ppppppplRam0000000113835a18;
    ppppppplStack_170 = ppppppplRam0000000113835a18;
    param_1 = (long *******)&ppppppplStack_178;
    ppppppplRam0000000113835a18 = ppppppplVar6;
    ppppppplVar6 = ppppppplRam0000000113835a20;
    ppppppplRam0000000113835a20 = ppppppplVar15;
    ppppppplRam0000000113835a28 = unaff_x25;
    FUN_10ac0afc0();
    param_3 = ppppppplRam0000000113835a20;
    ppppppplVar6 = ppppppplRam0000000113835a28;
  }
  if (ppppppplVar15 < ppppppplVar6) {
    *ppppppplVar15 = (long ******)0xd8000000c0;
    ppppppplVar15[2] = (long ******)0x10;
    ppppppplVar15[1] = (long ******)0x15b4;
    *(undefined4 *)(ppppppplVar15 + 3) = 0;
    ppppppplVar15[5] = (long ******)0x0;
    ppppppplVar15[4] = (long ******)0x0;
    ppppppplVar15[7] = (long ******)0x0;
    ppppppplVar15[6] = (long ******)0x0;
    ppppppplVar15[9] = (long ******)0x0;
    ppppppplVar15[8] = (long ******)0x0;
    ppppppplVar15[0xb] = (long ******)0x0;
    ppppppplVar15[10] = (long ******)0x0;
    ppppppplVar15 = ppppppplVar15 + 0xc;
  }
  else {
    lVar8 = (long)ppppppplVar15 - (long)ppppppplRam0000000113835a18;
    uVar12 = (lVar8 >> 5) * -0x5555555555555555 + 1;
    ppppppplRam0000000113835a20 = ppppppplVar15;
    if (0x2aaaaaaaaaaaaaa < uVar12) goto LAB_10ac0f7dc;
    lVar9 = (long)ppppppplVar6 - (long)ppppppplRam0000000113835a18 >> 5;
    uVar10 = lVar9 * 0x5555555555555556;
    if (uVar10 < uVar12 || uVar10 - uVar12 == 0) {
      uVar10 = uVar12;
    }
    if (0x155555555555554 < (ulong)(lVar9 * -0x5555555555555555)) {
      uVar10 = uVar14;
    }
    uStack_158 = 0x113835a18;
    lVar9 = lVar13;
    FUN_10a187714();
    puVar1 = (undefined8 *)(lVar9 + lVar8);
    unaff_x25 = (long *******)(lVar9 + uVar10 * 0x60);
    *puVar1 = 0xd8000000c0;
    puVar1[2] = 0x10;
    puVar1[1] = 0x15b4;
    *(undefined4 *)(puVar1 + 3) = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    ppppppplVar15 = (long *******)(puVar1 + 0xc);
    ppppppplVar6 = (long *******)
                   ((long)puVar1 +
                   ((long)ppppppplRam0000000113835a18 - (long)ppppppplRam0000000113835a20));
    param_2 = ppppppplRam0000000113835a18;
    param_4 = ppppppplVar6;
    FUN_10ac0aec8(0x113835a18);
    ppppppplStack_168 = ppppppplRam0000000113835a18;
    ppppppplStack_160 = ppppppplRam0000000113835a28;
    ppppppplStack_178 = ppppppplRam0000000113835a18;
    ppppppplStack_170 = ppppppplRam0000000113835a18;
    param_1 = (long *******)&ppppppplStack_178;
    ppppppplRam0000000113835a18 = ppppppplVar6;
    ppppppplVar6 = ppppppplRam0000000113835a20;
    ppppppplRam0000000113835a20 = ppppppplVar15;
    ppppppplRam0000000113835a28 = unaff_x25;
    FUN_10ac0afc0();
    param_3 = ppppppplRam0000000113835a20;
    ppppppplVar6 = ppppppplRam0000000113835a28;
  }
  if (ppppppplVar15 < ppppppplVar6) {
    *ppppppplVar15 = (long ******)0xd8000000c1;
    ppppppplVar15[2] = (long ******)0x10;
    ppppppplVar15[1] = (long ******)0x15c4;
    *(undefined4 *)(ppppppplVar15 + 3) = 0;
    ppppppplVar15[5] = (long ******)0x0;
    ppppppplVar15[4] = (long ******)0x0;
    ppppppplVar15[7] = (long ******)0x0;
    ppppppplVar15[6] = (long ******)0x0;
    ppppppplVar15[9] = (long ******)0x0;
    ppppppplVar15[8] = (long ******)0x0;
    ppppppplVar15[0xb] = (long ******)0x0;
    ppppppplVar15[10] = (long ******)0x0;
    ppppppplVar15 = ppppppplVar15 + 0xc;
  }
  else {
    lVar8 = (long)ppppppplVar15 - (long)ppppppplRam0000000113835a18;
    uVar12 = (lVar8 >> 5) * -0x5555555555555555 + 1;
    ppppppplRam0000000113835a20 = ppppppplVar15;
    if (0x2aaaaaaaaaaaaaa < uVar12) goto LAB_10ac0f7dc;
    lVar9 = (long)ppppppplVar6 - (long)ppppppplRam0000000113835a18 >> 5;
    uVar10 = lVar9 * 0x5555555555555556;
    if (uVar10 < uVar12 || uVar10 - uVar12 == 0) {
      uVar10 = uVar12;
    }
    if (0x155555555555554 < (ulong)(lVar9 * -0x5555555555555555)) {
      uVar10 = uVar14;
    }
    uStack_158 = 0x113835a18;
    lVar9 = lVar13;
    FUN_10a187714();
    puVar1 = (undefined8 *)(lVar9 + lVar8);
    unaff_x25 = (long *******)(lVar9 + uVar10 * 0x60);
    *puVar1 = 0xd8000000c1;
    puVar1[2] = 0x10;
    puVar1[1] = 0x15c4;
    *(undefined4 *)(puVar1 + 3) = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    ppppppplVar15 = (long *******)(puVar1 + 0xc);
    ppppppplVar6 = (long *******)
                   ((long)puVar1 +
                   ((long)ppppppplRam0000000113835a18 - (long)ppppppplRam0000000113835a20));
    param_2 = ppppppplRam0000000113835a18;
    param_4 = ppppppplVar6;
    FUN_10ac0aec8(0x113835a18);
    ppppppplStack_168 = ppppppplRam0000000113835a18;
    ppppppplStack_160 = ppppppplRam0000000113835a28;
    ppppppplStack_178 = ppppppplRam0000000113835a18;
    ppppppplStack_170 = ppppppplRam0000000113835a18;
    param_1 = (long *******)&ppppppplStack_178;
    ppppppplRam0000000113835a18 = ppppppplVar6;
    ppppppplVar6 = ppppppplRam0000000113835a20;
    ppppppplRam0000000113835a20 = ppppppplVar15;
    ppppppplRam0000000113835a28 = unaff_x25;
    FUN_10ac0afc0();
    param_3 = ppppppplRam0000000113835a20;
    ppppppplVar6 = ppppppplRam0000000113835a28;
  }
  if (ppppppplVar15 < ppppppplVar6) {
    *ppppppplVar15 = (long ******)0xd8000000c2;
    ppppppplVar15[2] = (long ******)0x8;
    ppppppplVar15[1] = (long ******)0x15e4;
    *(undefined4 *)(ppppppplVar15 + 3) = 0;
    ppppppplVar15[5] = (long ******)0x0;
    ppppppplVar15[4] = (long ******)0x0;
    ppppppplVar15[7] = (long ******)0x0;
    ppppppplVar15[6] = (long ******)0x0;
    ppppppplVar15[9] = (long ******)0x0;
    ppppppplVar15[8] = (long ******)0x0;
    ppppppplVar15[0xb] = (long ******)0x0;
    ppppppplVar15[10] = (long ******)0x0;
    ppppppplVar15 = ppppppplVar15 + 0xc;
  }
  else {
    lVar8 = (long)ppppppplVar15 - (long)ppppppplRam0000000113835a18;
    uVar12 = (lVar8 >> 5) * -0x5555555555555555 + 1;
    ppppppplRam0000000113835a20 = ppppppplVar15;
    if (0x2aaaaaaaaaaaaaa < uVar12) goto LAB_10ac0f7dc;
    lVar9 = (long)ppppppplVar6 - (long)ppppppplRam0000000113835a18 >> 5;
    uVar10 = lVar9 * 0x5555555555555556;
    if (uVar10 < uVar12 || uVar10 - uVar12 == 0) {
      uVar10 = uVar12;
    }
    if (0x155555555555554 < (ulong)(lVar9 * -0x5555555555555555)) {
      uVar10 = uVar14;
    }
    uStack_158 = 0x113835a18;
    lVar9 = lVar13;
    FUN_10a187714();
    puVar1 = (undefined8 *)(lVar9 + lVar8);
    unaff_x25 = (long *******)(lVar9 + uVar10 * 0x60);
    *puVar1 = 0xd8000000c2;
    puVar1[2] = 8;
    puVar1[1] = 0x15e4;
    *(undefined4 *)(puVar1 + 3) = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    ppppppplVar15 = (long *******)(puVar1 + 0xc);
    ppppppplVar6 = (long *******)
                   ((long)puVar1 +
                   ((long)ppppppplRam0000000113835a18 - (long)ppppppplRam0000000113835a20));
    param_2 = ppppppplRam0000000113835a18;
    param_4 = ppppppplVar6;
    FUN_10ac0aec8(0x113835a18);
    ppppppplStack_168 = ppppppplRam0000000113835a18;
    ppppppplStack_160 = ppppppplRam0000000113835a28;
    ppppppplStack_178 = ppppppplRam0000000113835a18;
    ppppppplStack_170 = ppppppplRam0000000113835a18;
    param_1 = (long *******)&ppppppplStack_178;
    ppppppplRam0000000113835a18 = ppppppplVar6;
    ppppppplVar6 = ppppppplRam0000000113835a20;
    ppppppplRam0000000113835a20 = ppppppplVar15;
    ppppppplRam0000000113835a28 = unaff_x25;
    FUN_10ac0afc0();
    param_3 = ppppppplRam0000000113835a20;
    ppppppplVar6 = ppppppplRam0000000113835a28;
  }
  if (ppppppplVar15 < ppppppplVar6) {
    *ppppppplVar15 = (long ******)0xd8000000c3;
    ppppppplVar15[2] = (long ******)0x10;
    ppppppplVar15[1] = (long ******)0x15ec;
    *(undefined4 *)(ppppppplVar15 + 3) = 0;
    ppppppplVar15[5] = (long ******)0x0;
    ppppppplVar15[4] = (long ******)0x0;
    ppppppplVar15[7] = (long ******)0x0;
    ppppppplVar15[6] = (long ******)0x0;
    ppppppplVar15[9] = (long ******)0x0;
    ppppppplVar15[8] = (long ******)0x0;
    ppppppplVar15[0xb] = (long ******)0x0;
    ppppppplVar15[10] = (long ******)0x0;
    ppppppplVar15 = ppppppplVar15 + 0xc;
  }
  else {
    lVar8 = (long)ppppppplVar15 - (long)ppppppplRam0000000113835a18;
    uVar12 = (lVar8 >> 5) * -0x5555555555555555 + 1;
    ppppppplRam0000000113835a20 = ppppppplVar15;
    if (0x2aaaaaaaaaaaaaa < uVar12) goto LAB_10ac0f7dc;
    lVar9 = (long)ppppppplVar6 - (long)ppppppplRam0000000113835a18 >> 5;
    uVar10 = lVar9 * 0x5555555555555556;
    if (uVar10 < uVar12 || uVar10 - uVar12 == 0) {
      uVar10 = uVar12;
    }
    if (0x155555555555554 < (ulong)(lVar9 * -0x5555555555555555)) {
      uVar10 = uVar14;
    }
    uStack_158 = 0x113835a18;
    lVar9 = lVar13;
    FUN_10a187714();
    puVar1 = (undefined8 *)(lVar9 + lVar8);
    unaff_x25 = (long *******)(lVar9 + uVar10 * 0x60);
    *puVar1 = 0xd8000000c3;
    puVar1[2] = 0x10;
    puVar1[1] = 0x15ec;
    *(undefined4 *)(puVar1 + 3) = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    ppppppplVar15 = (long *******)(puVar1 + 0xc);
    ppppppplVar6 = (long *******)
                   ((long)puVar1 +
                   ((long)ppppppplRam0000000113835a18 - (long)ppppppplRam0000000113835a20));
    param_2 = ppppppplRam0000000113835a18;
    param_4 = ppppppplVar6;
    FUN_10ac0aec8(0x113835a18);
    ppppppplStack_168 = ppppppplRam0000000113835a18;
    ppppppplStack_160 = ppppppplRam0000000113835a28;
    ppppppplStack_178 = ppppppplRam0000000113835a18;
    ppppppplStack_170 = ppppppplRam0000000113835a18;
    param_1 = (long *******)&ppppppplStack_178;
    ppppppplRam0000000113835a18 = ppppppplVar6;
    ppppppplVar6 = ppppppplRam0000000113835a20;
    ppppppplRam0000000113835a20 = ppppppplVar15;
    ppppppplRam0000000113835a28 = unaff_x25;
    FUN_10ac0afc0();
    param_3 = ppppppplRam0000000113835a20;
    ppppppplVar6 = ppppppplRam0000000113835a28;
  }
  if (ppppppplVar15 < ppppppplVar6) {
    *ppppppplVar15 = (long ******)0xd8000000c4;
    ppppppplVar15[2] = (long ******)0x10;
    ppppppplVar15[1] = (long ******)0x15fc;
    *(undefined4 *)(ppppppplVar15 + 3) = 0;
    ppppppplVar15[5] = (long ******)0x0;
    ppppppplVar15[4] = (long ******)0x0;
    ppppppplVar15[7] = (long ******)0x0;
    ppppppplVar15[6] = (long ******)0x0;
    ppppppplVar15[9] = (long ******)0x0;
    ppppppplVar15[8] = (long ******)0x0;
    ppppppplVar15[0xb] = (long ******)0x0;
    ppppppplVar15[10] = (long ******)0x0;
    ppppppplVar15 = ppppppplVar15 + 0xc;
  }
  else {
    lVar8 = (long)ppppppplVar15 - (long)ppppppplRam0000000113835a18;
    uVar12 = (lVar8 >> 5) * -0x5555555555555555 + 1;
    ppppppplRam0000000113835a20 = ppppppplVar15;
    if (0x2aaaaaaaaaaaaaa < uVar12) goto LAB_10ac0f7dc;
    lVar9 = (long)ppppppplVar6 - (long)ppppppplRam0000000113835a18 >> 5;
    uVar10 = lVar9 * 0x5555555555555556;
    if (uVar10 < uVar12 || uVar10 - uVar12 == 0) {
      uVar10 = uVar12;
    }
    if (0x155555555555554 < (ulong)(lVar9 * -0x5555555555555555)) {
      uVar10 = uVar14;
    }
    uStack_158 = 0x113835a18;
    lVar9 = lVar13;
    FUN_10a187714();
    puVar1 = (undefined8 *)(lVar9 + lVar8);
    unaff_x25 = (long *******)(lVar9 + uVar10 * 0x60);
    *puVar1 = 0xd8000000c4;
    puVar1[2] = 0x10;
    puVar1[1] = 0x15fc;
    *(undefined4 *)(puVar1 + 3) = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    ppppppplVar15 = (long *******)(puVar1 + 0xc);
    ppppppplVar6 = (long *******)
                   ((long)puVar1 +
                   ((long)ppppppplRam0000000113835a18 - (long)ppppppplRam0000000113835a20));
    param_2 = ppppppplRam0000000113835a18;
    param_4 = ppppppplVar6;
    FUN_10ac0aec8(0x113835a18);
    ppppppplStack_168 = ppppppplRam0000000113835a18;
    ppppppplStack_160 = ppppppplRam0000000113835a28;
    ppppppplStack_178 = ppppppplRam0000000113835a18;
    ppppppplStack_170 = ppppppplRam0000000113835a18;
    param_1 = (long *******)&ppppppplStack_178;
    ppppppplRam0000000113835a18 = ppppppplVar6;
    ppppppplVar6 = ppppppplRam0000000113835a20;
    ppppppplRam0000000113835a20 = ppppppplVar15;
    ppppppplRam0000000113835a28 = unaff_x25;
    FUN_10ac0afc0();
    param_3 = ppppppplRam0000000113835a20;
    ppppppplVar6 = ppppppplRam0000000113835a28;
  }
  if (ppppppplVar15 < ppppppplVar6) {
    *ppppppplVar15 = (long ******)0xd8000000c5;
    ppppppplVar15[2] = (long ******)0x10;
    ppppppplVar15[1] = (long ******)0x15d4;
    *(undefined4 *)(ppppppplVar15 + 3) = 0;
    ppppppplVar15[5] = (long ******)0x0;
    ppppppplVar15[4] = (long ******)0x0;
    ppppppplVar15[7] = (long ******)0x0;
    ppppppplVar15[6] = (long ******)0x0;
    ppppppplVar15[9] = (long ******)0x0;
    ppppppplVar15[8] = (long ******)0x0;
    ppppppplVar15[0xb] = (long ******)0x0;
    ppppppplVar15[10] = (long ******)0x0;
    ppppppplVar15 = ppppppplVar15 + 0xc;
  }
  else {
    lVar8 = (long)ppppppplVar15 - (long)ppppppplRam0000000113835a18;
    uVar12 = (lVar8 >> 5) * -0x5555555555555555 + 1;
    ppppppplRam0000000113835a20 = ppppppplVar15;
    if (0x2aaaaaaaaaaaaaa < uVar12) goto LAB_10ac0f7dc;
    lVar9 = (long)ppppppplVar6 - (long)ppppppplRam0000000113835a18 >> 5;
    uVar10 = lVar9 * 0x5555555555555556;
    if (uVar10 < uVar12 || uVar10 - uVar12 == 0) {
      uVar10 = uVar12;
    }
    if (0x155555555555554 < (ulong)(lVar9 * -0x5555555555555555)) {
      uVar10 = uVar14;
    }
    uStack_158 = 0x113835a18;
    lVar9 = lVar13;
    FUN_10a187714();
    puVar1 = (undefined8 *)(lVar9 + lVar8);
    unaff_x25 = (long *******)(lVar9 + uVar10 * 0x60);
    *puVar1 = 0xd8000000c5;
    puVar1[2] = 0x10;
    puVar1[1] = 0x15d4;
    *(undefined4 *)(puVar1 + 3) = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    ppppppplVar15 = (long *******)(puVar1 + 0xc);
    ppppppplVar6 = (long *******)
                   ((long)puVar1 +
                   ((long)ppppppplRam0000000113835a18 - (long)ppppppplRam0000000113835a20));
    param_2 = ppppppplRam0000000113835a18;
    param_4 = ppppppplVar6;
    FUN_10ac0aec8(0x113835a18);
    ppppppplStack_168 = ppppppplRam0000000113835a18;
    ppppppplStack_160 = ppppppplRam0000000113835a28;
    ppppppplStack_178 = ppppppplRam0000000113835a18;
    ppppppplStack_170 = ppppppplRam0000000113835a18;
    param_1 = (long *******)&ppppppplStack_178;
    ppppppplRam0000000113835a18 = ppppppplVar6;
    ppppppplVar6 = ppppppplRam0000000113835a20;
    ppppppplRam0000000113835a20 = ppppppplVar15;
    ppppppplRam0000000113835a28 = unaff_x25;
    FUN_10ac0afc0();
    param_3 = ppppppplRam0000000113835a20;
    ppppppplVar6 = ppppppplRam0000000113835a28;
  }
  if (ppppppplVar15 < ppppppplVar6) {
    *ppppppplVar15 = (long ******)0xd8000000c6;
    ppppppplVar15[2] = (long ******)0x24;
    ppppppplVar15[1] = (long ******)0x1660;
    *(undefined4 *)(ppppppplVar15 + 3) = 0;
    ppppppplVar15[5] = (long ******)0x0;
    ppppppplVar15[4] = (long ******)0x0;
    ppppppplVar15[7] = (long ******)0x0;
    ppppppplVar15[6] = (long ******)0x0;
    ppppppplVar15[9] = (long ******)0x0;
    ppppppplVar15[8] = (long ******)0x0;
    ppppppplVar15[0xb] = (long ******)0x0;
    ppppppplVar15[10] = (long ******)0x0;
    ppppppplVar15 = ppppppplVar15 + 0xc;
  }
  else {
    lVar8 = (long)ppppppplVar15 - (long)ppppppplRam0000000113835a18;
    uVar12 = (lVar8 >> 5) * -0x5555555555555555 + 1;
    ppppppplRam0000000113835a20 = ppppppplVar15;
    if (0x2aaaaaaaaaaaaaa < uVar12) goto LAB_10ac0f7dc;
    lVar9 = (long)ppppppplVar6 - (long)ppppppplRam0000000113835a18 >> 5;
    uVar10 = lVar9 * 0x5555555555555556;
    if (uVar10 < uVar12 || uVar10 - uVar12 == 0) {
      uVar10 = uVar12;
    }
    if (0x155555555555554 < (ulong)(lVar9 * -0x5555555555555555)) {
      uVar10 = uVar14;
    }
    uStack_158 = 0x113835a18;
    lVar9 = lVar13;
    FUN_10a187714();
    puVar1 = (undefined8 *)(lVar9 + lVar8);
    unaff_x25 = (long *******)(lVar9 + uVar10 * 0x60);
    *puVar1 = 0xd8000000c6;
    puVar1[2] = 0x24;
    puVar1[1] = 0x1660;
    *(undefined4 *)(puVar1 + 3) = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    ppppppplVar15 = (long *******)(puVar1 + 0xc);
    ppppppplVar6 = (long *******)
                   ((long)puVar1 +
                   ((long)ppppppplRam0000000113835a18 - (long)ppppppplRam0000000113835a20));
    param_2 = ppppppplRam0000000113835a18;
    param_4 = ppppppplVar6;
    FUN_10ac0aec8(0x113835a18);
    ppppppplStack_168 = ppppppplRam0000000113835a18;
    ppppppplStack_160 = ppppppplRam0000000113835a28;
    ppppppplStack_178 = ppppppplRam0000000113835a18;
    ppppppplStack_170 = ppppppplRam0000000113835a18;
    param_1 = (long *******)&ppppppplStack_178;
    ppppppplRam0000000113835a18 = ppppppplVar6;
    ppppppplVar6 = ppppppplRam0000000113835a20;
    ppppppplRam0000000113835a20 = ppppppplVar15;
    ppppppplRam0000000113835a28 = unaff_x25;
    FUN_10ac0afc0();
    param_3 = ppppppplRam0000000113835a20;
    ppppppplVar6 = ppppppplRam0000000113835a28;
  }
  if (ppppppplVar15 < ppppppplVar6) {
    *ppppppplVar15 = (long ******)0xd8000000c7;
    ppppppplVar15[2] = (long ******)0x10;
    ppppppplVar15[1] = (long ******)0x1684;
    *(undefined4 *)(ppppppplVar15 + 3) = 0;
    ppppppplVar15[5] = (long ******)0x0;
    ppppppplVar15[4] = (long ******)0x0;
    ppppppplVar15[7] = (long ******)0x0;
    ppppppplVar15[6] = (long ******)0x0;
    ppppppplVar15[9] = (long ******)0x0;
    ppppppplVar15[8] = (long ******)0x0;
    ppppppplVar15[0xb] = (long ******)0x0;
    ppppppplVar15[10] = (long ******)0x0;
    ppppppplVar15 = ppppppplVar15 + 0xc;
  }
  else {
    lVar8 = (long)ppppppplVar15 - (long)ppppppplRam0000000113835a18;
    uVar12 = (lVar8 >> 5) * -0x5555555555555555 + 1;
    ppppppplRam0000000113835a20 = ppppppplVar15;
    if (0x2aaaaaaaaaaaaaa < uVar12) goto LAB_10ac0f7dc;
    lVar9 = (long)ppppppplVar6 - (long)ppppppplRam0000000113835a18 >> 5;
    uVar10 = lVar9 * 0x5555555555555556;
    if (uVar10 < uVar12 || uVar10 - uVar12 == 0) {
      uVar10 = uVar12;
    }
    if (0x155555555555554 < (ulong)(lVar9 * -0x5555555555555555)) {
      uVar10 = uVar14;
    }
    uStack_158 = 0x113835a18;
    lVar9 = lVar13;
    FUN_10a187714();
    puVar1 = (undefined8 *)(lVar9 + lVar8);
    unaff_x25 = (long *******)(lVar9 + uVar10 * 0x60);
    *puVar1 = 0xd8000000c7;
    puVar1[2] = 0x10;
    puVar1[1] = 0x1684;
    *(undefined4 *)(puVar1 + 3) = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    ppppppplVar15 = (long *******)(puVar1 + 0xc);
    ppppppplVar6 = (long *******)
                   ((long)puVar1 +
                   ((long)ppppppplRam0000000113835a18 - (long)ppppppplRam0000000113835a20));
    param_2 = ppppppplRam0000000113835a18;
    param_4 = ppppppplVar6;
    FUN_10ac0aec8(0x113835a18);
    ppppppplStack_168 = ppppppplRam0000000113835a18;
    ppppppplStack_160 = ppppppplRam0000000113835a28;
    ppppppplStack_178 = ppppppplRam0000000113835a18;
    ppppppplStack_170 = ppppppplRam0000000113835a18;
    param_1 = (long *******)&ppppppplStack_178;
    ppppppplRam0000000113835a18 = ppppppplVar6;
    ppppppplVar6 = ppppppplRam0000000113835a20;
    ppppppplRam0000000113835a20 = ppppppplVar15;
    ppppppplRam0000000113835a28 = unaff_x25;
    FUN_10ac0afc0();
    param_3 = ppppppplRam0000000113835a20;
    ppppppplVar6 = ppppppplRam0000000113835a28;
  }
  if (ppppppplVar15 < ppppppplVar6) {
    *ppppppplVar15 = (long ******)0xd8000000c8;
    ppppppplVar15[2] = (long ******)0x10;
    ppppppplVar15[1] = (long ******)0x169c;
    *(undefined4 *)(ppppppplVar15 + 3) = 0;
    ppppppplVar15[5] = (long ******)0x0;
    ppppppplVar15[4] = (long ******)0x0;
    ppppppplVar15[7] = (long ******)0x0;
    ppppppplVar15[6] = (long ******)0x0;
    ppppppplVar15[9] = (long ******)0x0;
    ppppppplVar15[8] = (long ******)0x0;
    ppppppplVar15[0xb] = (long ******)0x0;
    ppppppplVar15[10] = (long ******)0x0;
    ppppppplVar15 = ppppppplVar15 + 0xc;
  }
  else {
    lVar8 = (long)ppppppplVar15 - (long)ppppppplRam0000000113835a18;
    uVar12 = (lVar8 >> 5) * -0x5555555555555555 + 1;
    ppppppplRam0000000113835a20 = ppppppplVar15;
    if (0x2aaaaaaaaaaaaaa < uVar12) goto LAB_10ac0f7dc;
    lVar9 = (long)ppppppplVar6 - (long)ppppppplRam0000000113835a18 >> 5;
    uVar10 = lVar9 * 0x5555555555555556;
    if (uVar10 < uVar12 || uVar10 - uVar12 == 0) {
      uVar10 = uVar12;
    }
    if (0x155555555555554 < (ulong)(lVar9 * -0x5555555555555555)) {
      uVar10 = uVar14;
    }
    uStack_158 = 0x113835a18;
    lVar9 = lVar13;
    FUN_10a187714();
    puVar1 = (undefined8 *)(lVar9 + lVar8);
    unaff_x25 = (long *******)(lVar9 + uVar10 * 0x60);
    *puVar1 = 0xd8000000c8;
    puVar1[2] = 0x10;
    puVar1[1] = 0x169c;
    *(undefined4 *)(puVar1 + 3) = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    ppppppplVar15 = (long *******)(puVar1 + 0xc);
    ppppppplVar6 = (long *******)
                   ((long)puVar1 +
                   ((long)ppppppplRam0000000113835a18 - (long)ppppppplRam0000000113835a20));
    param_2 = ppppppplRam0000000113835a18;
    param_4 = ppppppplVar6;
    FUN_10ac0aec8(0x113835a18);
    ppppppplStack_168 = ppppppplRam0000000113835a18;
    ppppppplStack_160 = ppppppplRam0000000113835a28;
    ppppppplStack_178 = ppppppplRam0000000113835a18;
    ppppppplStack_170 = ppppppplRam0000000113835a18;
    param_1 = (long *******)&ppppppplStack_178;
    ppppppplRam0000000113835a18 = ppppppplVar6;
    ppppppplVar6 = ppppppplRam0000000113835a20;
    ppppppplRam0000000113835a20 = ppppppplVar15;
    ppppppplRam0000000113835a28 = unaff_x25;
    FUN_10ac0afc0();
    param_3 = ppppppplRam0000000113835a20;
    ppppppplVar6 = ppppppplRam0000000113835a28;
  }
  if (ppppppplVar15 < ppppppplVar6) {
    *ppppppplVar15 = (long ******)0xd8000000c9;
    ppppppplVar15[2] = (long ******)0x10;
    ppppppplVar15[1] = (long ******)0x16ac;
    *(undefined4 *)(ppppppplVar15 + 3) = 0;
    ppppppplVar15[5] = (long ******)0x0;
    ppppppplVar15[4] = (long ******)0x0;
    ppppppplVar15[7] = (long ******)0x0;
    ppppppplVar15[6] = (long ******)0x0;
    ppppppplVar15[9] = (long ******)0x0;
    ppppppplVar15[8] = (long ******)0x0;
    ppppppplVar15[0xb] = (long ******)0x0;
    ppppppplVar15[10] = (long ******)0x0;
    ppppppplVar15 = ppppppplVar15 + 0xc;
  }
  else {
    lVar8 = (long)ppppppplVar15 - (long)ppppppplRam0000000113835a18;
    uVar12 = (lVar8 >> 5) * -0x5555555555555555 + 1;
    ppppppplRam0000000113835a20 = ppppppplVar15;
    if (0x2aaaaaaaaaaaaaa < uVar12) goto LAB_10ac0f7dc;
    lVar9 = (long)ppppppplVar6 - (long)ppppppplRam0000000113835a18 >> 5;
    uVar10 = lVar9 * 0x5555555555555556;
    if (uVar10 < uVar12 || uVar10 - uVar12 == 0) {
      uVar10 = uVar12;
    }
    if (0x155555555555554 < (ulong)(lVar9 * -0x5555555555555555)) {
      uVar10 = uVar14;
    }
    uStack_158 = 0x113835a18;
    lVar9 = lVar13;
    FUN_10a187714();
    puVar1 = (undefined8 *)(lVar9 + lVar8);
    unaff_x25 = (long *******)(lVar9 + uVar10 * 0x60);
    *puVar1 = 0xd8000000c9;
    puVar1[2] = 0x10;
    puVar1[1] = 0x16ac;
    *(undefined4 *)(puVar1 + 3) = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    ppppppplVar15 = (long *******)(puVar1 + 0xc);
    ppppppplVar6 = (long *******)
                   ((long)puVar1 +
                   ((long)ppppppplRam0000000113835a18 - (long)ppppppplRam0000000113835a20));
    param_2 = ppppppplRam0000000113835a18;
    param_4 = ppppppplVar6;
    FUN_10ac0aec8(0x113835a18);
    ppppppplStack_168 = ppppppplRam0000000113835a18;
    ppppppplStack_160 = ppppppplRam0000000113835a28;
    ppppppplStack_178 = ppppppplRam0000000113835a18;
    ppppppplStack_170 = ppppppplRam0000000113835a18;
    param_1 = (long *******)&ppppppplStack_178;
    ppppppplRam0000000113835a18 = ppppppplVar6;
    ppppppplVar6 = ppppppplRam0000000113835a20;
    ppppppplRam0000000113835a20 = ppppppplVar15;
    ppppppplRam0000000113835a28 = unaff_x25;
    FUN_10ac0afc0();
    param_3 = ppppppplRam0000000113835a20;
    ppppppplVar6 = ppppppplRam0000000113835a28;
  }
  if (ppppppplVar15 < ppppppplVar6) {
    *ppppppplVar15 = (long ******)0xd8000000ca;
    ppppppplVar15[2] = (long ******)0x10;
    ppppppplVar15[1] = (long ******)0x16bc;
    *(undefined4 *)(ppppppplVar15 + 3) = 0;
    ppppppplVar15[5] = (long ******)0x0;
    ppppppplVar15[4] = (long ******)0x0;
    ppppppplVar15[7] = (long ******)0x0;
    ppppppplVar15[6] = (long ******)0x0;
    ppppppplVar15[9] = (long ******)0x0;
    ppppppplVar15[8] = (long ******)0x0;
    ppppppplVar15[0xb] = (long ******)0x0;
    ppppppplVar15[10] = (long ******)0x0;
    ppppppplVar15 = ppppppplVar15 + 0xc;
  }
  else {
    lVar8 = (long)ppppppplVar15 - (long)ppppppplRam0000000113835a18;
    uVar12 = (lVar8 >> 5) * -0x5555555555555555 + 1;
    ppppppplRam0000000113835a20 = ppppppplVar15;
    if (0x2aaaaaaaaaaaaaa < uVar12) goto LAB_10ac0f7dc;
    lVar9 = (long)ppppppplVar6 - (long)ppppppplRam0000000113835a18 >> 5;
    uVar10 = lVar9 * 0x5555555555555556;
    if (uVar10 < uVar12 || uVar10 - uVar12 == 0) {
      uVar10 = uVar12;
    }
    if (0x155555555555554 < (ulong)(lVar9 * -0x5555555555555555)) {
      uVar10 = uVar14;
    }
    uStack_158 = 0x113835a18;
    lVar9 = lVar13;
    FUN_10a187714();
    puVar1 = (undefined8 *)(lVar9 + lVar8);
    unaff_x25 = (long *******)(lVar9 + uVar10 * 0x60);
    *puVar1 = 0xd8000000ca;
    puVar1[2] = 0x10;
    puVar1[1] = 0x16bc;
    *(undefined4 *)(puVar1 + 3) = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    ppppppplVar15 = (long *******)(puVar1 + 0xc);
    ppppppplVar6 = (long *******)
                   ((long)puVar1 +
                   ((long)ppppppplRam0000000113835a18 - (long)ppppppplRam0000000113835a20));
    param_2 = ppppppplRam0000000113835a18;
    param_4 = ppppppplVar6;
    FUN_10ac0aec8(0x113835a18);
    ppppppplStack_168 = ppppppplRam0000000113835a18;
    ppppppplStack_160 = ppppppplRam0000000113835a28;
    ppppppplStack_178 = ppppppplRam0000000113835a18;
    ppppppplStack_170 = ppppppplRam0000000113835a18;
    param_1 = (long *******)&ppppppplStack_178;
    ppppppplRam0000000113835a18 = ppppppplVar6;
    ppppppplVar6 = ppppppplRam0000000113835a20;
    ppppppplRam0000000113835a20 = ppppppplVar15;
    ppppppplRam0000000113835a28 = unaff_x25;
    FUN_10ac0afc0();
    param_3 = ppppppplRam0000000113835a20;
    ppppppplVar6 = ppppppplRam0000000113835a28;
  }
  if (ppppppplVar15 < ppppppplVar6) {
    *ppppppplVar15 = (long ******)0xd8000000cb;
    ppppppplVar15[2] = (long ******)0x8;
    ppppppplVar15[1] = (long ******)0x16dc;
    *(undefined4 *)(ppppppplVar15 + 3) = 0;
    ppppppplVar15[5] = (long ******)0x0;
    ppppppplVar15[4] = (long ******)0x0;
    ppppppplVar15[7] = (long ******)0x0;
    ppppppplVar15[6] = (long ******)0x0;
    ppppppplVar15[9] = (long ******)0x0;
    ppppppplVar15[8] = (long ******)0x0;
    ppppppplVar15[0xb] = (long ******)0x0;
    ppppppplVar15[10] = (long ******)0x0;
    ppppppplVar15 = ppppppplVar15 + 0xc;
  }
  else {
    lVar8 = (long)ppppppplVar15 - (long)ppppppplRam0000000113835a18;
    uVar12 = (lVar8 >> 5) * -0x5555555555555555 + 1;
    ppppppplRam0000000113835a20 = ppppppplVar15;
    if (0x2aaaaaaaaaaaaaa < uVar12) goto LAB_10ac0f7dc;
    lVar9 = (long)ppppppplVar6 - (long)ppppppplRam0000000113835a18 >> 5;
    uVar10 = lVar9 * 0x5555555555555556;
    if (uVar10 < uVar12 || uVar10 - uVar12 == 0) {
      uVar10 = uVar12;
    }
    if (0x155555555555554 < (ulong)(lVar9 * -0x5555555555555555)) {
      uVar10 = uVar14;
    }
    uStack_158 = 0x113835a18;
    lVar9 = lVar13;
    FUN_10a187714();
    puVar1 = (undefined8 *)(lVar9 + lVar8);
    unaff_x25 = (long *******)(lVar9 + uVar10 * 0x60);
    *puVar1 = 0xd8000000cb;
    puVar1[2] = 8;
    puVar1[1] = 0x16dc;
    *(undefined4 *)(puVar1 + 3) = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    ppppppplVar15 = (long *******)(puVar1 + 0xc);
    ppppppplVar6 = (long *******)
                   ((long)puVar1 +
                   ((long)ppppppplRam0000000113835a18 - (long)ppppppplRam0000000113835a20));
    param_2 = ppppppplRam0000000113835a18;
    param_4 = ppppppplVar6;
    FUN_10ac0aec8(0x113835a18);
    ppppppplStack_168 = ppppppplRam0000000113835a18;
    ppppppplStack_160 = ppppppplRam0000000113835a28;
    ppppppplStack_178 = ppppppplRam0000000113835a18;
    ppppppplStack_170 = ppppppplRam0000000113835a18;
    param_1 = (long *******)&ppppppplStack_178;
    ppppppplRam0000000113835a18 = ppppppplVar6;
    ppppppplVar6 = ppppppplRam0000000113835a20;
    ppppppplRam0000000113835a20 = ppppppplVar15;
    ppppppplRam0000000113835a28 = unaff_x25;
    FUN_10ac0afc0();
    param_3 = ppppppplRam0000000113835a20;
    ppppppplVar6 = ppppppplRam0000000113835a28;
  }
  if (ppppppplVar15 < ppppppplVar6) {
    *ppppppplVar15 = (long ******)0xd8000000cc;
    ppppppplVar15[2] = (long ******)0x10;
    ppppppplVar15[1] = (long ******)0x16e4;
    *(undefined4 *)(ppppppplVar15 + 3) = 0;
    ppppppplVar15[5] = (long ******)0x0;
    ppppppplVar15[4] = (long ******)0x0;
    ppppppplVar15[7] = (long ******)0x0;
    ppppppplVar15[6] = (long ******)0x0;
    ppppppplVar15[9] = (long ******)0x0;
    ppppppplVar15[8] = (long ******)0x0;
    ppppppplVar15[0xb] = (long ******)0x0;
    ppppppplVar15[10] = (long ******)0x0;
    ppppppplVar15 = ppppppplVar15 + 0xc;
  }
  else {
    lVar8 = (long)ppppppplVar15 - (long)ppppppplRam0000000113835a18;
    uVar12 = (lVar8 >> 5) * -0x5555555555555555 + 1;
    ppppppplRam0000000113835a20 = ppppppplVar15;
    if (0x2aaaaaaaaaaaaaa < uVar12) goto LAB_10ac0f7dc;
    lVar9 = (long)ppppppplVar6 - (long)ppppppplRam0000000113835a18 >> 5;
    uVar10 = lVar9 * 0x5555555555555556;
    if (uVar10 < uVar12 || uVar10 - uVar12 == 0) {
      uVar10 = uVar12;
    }
    if (0x155555555555554 < (ulong)(lVar9 * -0x5555555555555555)) {
      uVar10 = uVar14;
    }
    uStack_158 = 0x113835a18;
    lVar9 = lVar13;
    FUN_10a187714();
    puVar1 = (undefined8 *)(lVar9 + lVar8);
    unaff_x25 = (long *******)(lVar9 + uVar10 * 0x60);
    *puVar1 = 0xd8000000cc;
    puVar1[2] = 0x10;
    puVar1[1] = 0x16e4;
    *(undefined4 *)(puVar1 + 3) = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    ppppppplVar15 = (long *******)(puVar1 + 0xc);
    ppppppplVar6 = (long *******)
                   ((long)puVar1 +
                   ((long)ppppppplRam0000000113835a18 - (long)ppppppplRam0000000113835a20));
    param_2 = ppppppplRam0000000113835a18;
    param_4 = ppppppplVar6;
    FUN_10ac0aec8(0x113835a18);
    ppppppplStack_168 = ppppppplRam0000000113835a18;
    ppppppplStack_160 = ppppppplRam0000000113835a28;
    ppppppplStack_178 = ppppppplRam0000000113835a18;
    ppppppplStack_170 = ppppppplRam0000000113835a18;
    param_1 = (long *******)&ppppppplStack_178;
    ppppppplRam0000000113835a18 = ppppppplVar6;
    ppppppplVar6 = ppppppplRam0000000113835a20;
    ppppppplRam0000000113835a20 = ppppppplVar15;
    ppppppplRam0000000113835a28 = unaff_x25;
    FUN_10ac0afc0();
    param_3 = ppppppplRam0000000113835a20;
    ppppppplVar6 = ppppppplRam0000000113835a28;
  }
  if (ppppppplVar15 < ppppppplVar6) {
    *ppppppplVar15 = (long ******)0xd8000000cd;
    ppppppplVar15[2] = (long ******)0x10;
    ppppppplVar15[1] = (long ******)0x16f4;
    *(undefined4 *)(ppppppplVar15 + 3) = 0;
    ppppppplVar15[5] = (long ******)0x0;
    ppppppplVar15[4] = (long ******)0x0;
    ppppppplVar15[7] = (long ******)0x0;
    ppppppplVar15[6] = (long ******)0x0;
    ppppppplVar15[9] = (long ******)0x0;
    ppppppplVar15[8] = (long ******)0x0;
    ppppppplVar15[0xb] = (long ******)0x0;
    ppppppplVar15[10] = (long ******)0x0;
    ppppppplVar15 = ppppppplVar15 + 0xc;
  }
  else {
    lVar8 = (long)ppppppplVar15 - (long)ppppppplRam0000000113835a18;
    uVar12 = (lVar8 >> 5) * -0x5555555555555555 + 1;
    ppppppplRam0000000113835a20 = ppppppplVar15;
    if (0x2aaaaaaaaaaaaaa < uVar12) goto LAB_10ac0f7dc;
    lVar9 = (long)ppppppplVar6 - (long)ppppppplRam0000000113835a18 >> 5;
    uVar10 = lVar9 * 0x5555555555555556;
    if (uVar10 < uVar12 || uVar10 - uVar12 == 0) {
      uVar10 = uVar12;
    }
    if (0x155555555555554 < (ulong)(lVar9 * -0x5555555555555555)) {
      uVar10 = uVar14;
    }
    uStack_158 = 0x113835a18;
    lVar9 = lVar13;
    FUN_10a187714();
    puVar1 = (undefined8 *)(lVar9 + lVar8);
    unaff_x25 = (long *******)(lVar9 + uVar10 * 0x60);
    *puVar1 = 0xd8000000cd;
    puVar1[2] = 0x10;
    puVar1[1] = 0x16f4;
    *(undefined4 *)(puVar1 + 3) = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    ppppppplVar15 = (long *******)(puVar1 + 0xc);
    ppppppplVar6 = (long *******)
                   ((long)puVar1 +
                   ((long)ppppppplRam0000000113835a18 - (long)ppppppplRam0000000113835a20));
    param_2 = ppppppplRam0000000113835a18;
    param_4 = ppppppplVar6;
    FUN_10ac0aec8(0x113835a18);
    ppppppplStack_168 = ppppppplRam0000000113835a18;
    ppppppplStack_160 = ppppppplRam0000000113835a28;
    ppppppplStack_178 = ppppppplRam0000000113835a18;
    ppppppplStack_170 = ppppppplRam0000000113835a18;
    param_1 = (long *******)&ppppppplStack_178;
    ppppppplRam0000000113835a18 = ppppppplVar6;
    ppppppplVar6 = ppppppplRam0000000113835a20;
    ppppppplRam0000000113835a20 = ppppppplVar15;
    ppppppplRam0000000113835a28 = unaff_x25;
    FUN_10ac0afc0();
    param_3 = ppppppplRam0000000113835a20;
    ppppppplVar6 = ppppppplRam0000000113835a28;
  }
  if (ppppppplVar15 < ppppppplVar6) {
    *ppppppplVar15 = (long ******)0xd8000000ce;
    ppppppplVar15[2] = (long ******)0x10;
    ppppppplVar15[1] = (long ******)0x16cc;
    *(undefined4 *)(ppppppplVar15 + 3) = 0;
    ppppppplVar15[5] = (long ******)0x0;
    ppppppplVar15[4] = (long ******)0x0;
    ppppppplVar15[7] = (long ******)0x0;
    ppppppplVar15[6] = (long ******)0x0;
    ppppppplVar15[9] = (long ******)0x0;
    ppppppplVar15[8] = (long ******)0x0;
    ppppppplVar15[0xb] = (long ******)0x0;
    ppppppplVar15[10] = (long ******)0x0;
    ppppppplVar15 = ppppppplVar15 + 0xc;
  }
  else {
    lVar8 = (long)ppppppplVar15 - (long)ppppppplRam0000000113835a18;
    uVar12 = (lVar8 >> 5) * -0x5555555555555555 + 1;
    ppppppplRam0000000113835a20 = ppppppplVar15;
    if (0x2aaaaaaaaaaaaaa < uVar12) goto LAB_10ac0f7dc;
    lVar9 = (long)ppppppplVar6 - (long)ppppppplRam0000000113835a18 >> 5;
    uVar10 = lVar9 * 0x5555555555555556;
    if (uVar10 < uVar12 || uVar10 - uVar12 == 0) {
      uVar10 = uVar12;
    }
    if (0x155555555555554 < (ulong)(lVar9 * -0x5555555555555555)) {
      uVar10 = uVar14;
    }
    uStack_158 = 0x113835a18;
    lVar9 = lVar13;
    FUN_10a187714();
    puVar1 = (undefined8 *)(lVar9 + lVar8);
    unaff_x25 = (long *******)(lVar9 + uVar10 * 0x60);
    *puVar1 = 0xd8000000ce;
    puVar1[2] = 0x10;
    puVar1[1] = 0x16cc;
    *(undefined4 *)(puVar1 + 3) = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    ppppppplVar15 = (long *******)(puVar1 + 0xc);
    ppppppplVar6 = (long *******)
                   ((long)puVar1 +
                   ((long)ppppppplRam0000000113835a18 - (long)ppppppplRam0000000113835a20));
    param_2 = ppppppplRam0000000113835a18;
    param_4 = ppppppplVar6;
    FUN_10ac0aec8(0x113835a18);
    ppppppplStack_168 = ppppppplRam0000000113835a18;
    ppppppplStack_160 = ppppppplRam0000000113835a28;
    ppppppplStack_178 = ppppppplRam0000000113835a18;
    ppppppplStack_170 = ppppppplRam0000000113835a18;
    param_1 = (long *******)&ppppppplStack_178;
    ppppppplRam0000000113835a18 = ppppppplVar6;
    ppppppplVar6 = ppppppplRam0000000113835a20;
    ppppppplRam0000000113835a20 = ppppppplVar15;
    ppppppplRam0000000113835a28 = unaff_x25;
    FUN_10ac0afc0();
    param_3 = ppppppplRam0000000113835a20;
    ppppppplVar6 = ppppppplRam0000000113835a28;
  }
  if (ppppppplVar15 < ppppppplVar6) {
    *ppppppplVar15 = (long ******)0xd8000000cf;
    ppppppplVar15[2] = (long ******)0x24;
    ppppppplVar15[1] = (long ******)0x1758;
    *(undefined4 *)(ppppppplVar15 + 3) = 0;
    ppppppplVar15[5] = (long ******)0x0;
    ppppppplVar15[4] = (long ******)0x0;
    ppppppplVar15[7] = (long ******)0x0;
    ppppppplVar15[6] = (long ******)0x0;
    ppppppplVar15[9] = (long ******)0x0;
    ppppppplVar15[8] = (long ******)0x0;
    ppppppplVar15[0xb] = (long ******)0x0;
    ppppppplVar15[10] = (long ******)0x0;
    ppppppplVar15 = ppppppplVar15 + 0xc;
  }
  else {
    lVar8 = (long)ppppppplVar15 - (long)ppppppplRam0000000113835a18;
    uVar12 = (lVar8 >> 5) * -0x5555555555555555 + 1;
    ppppppplRam0000000113835a20 = ppppppplVar15;
    if (0x2aaaaaaaaaaaaaa < uVar12) goto LAB_10ac0f7dc;
    lVar9 = (long)ppppppplVar6 - (long)ppppppplRam0000000113835a18 >> 5;
    uVar10 = lVar9 * 0x5555555555555556;
    if (uVar10 < uVar12 || uVar10 - uVar12 == 0) {
      uVar10 = uVar12;
    }
    if (0x155555555555554 < (ulong)(lVar9 * -0x5555555555555555)) {
      uVar10 = uVar14;
    }
    uStack_158 = 0x113835a18;
    lVar9 = lVar13;
    FUN_10a187714();
    puVar1 = (undefined8 *)(lVar9 + lVar8);
    unaff_x25 = (long *******)(lVar9 + uVar10 * 0x60);
    *puVar1 = 0xd8000000cf;
    puVar1[2] = 0x24;
    puVar1[1] = 0x1758;
    *(undefined4 *)(puVar1 + 3) = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    ppppppplVar15 = (long *******)(puVar1 + 0xc);
    ppppppplVar6 = (long *******)
                   ((long)puVar1 +
                   ((long)ppppppplRam0000000113835a18 - (long)ppppppplRam0000000113835a20));
    param_2 = ppppppplRam0000000113835a18;
    param_4 = ppppppplVar6;
    FUN_10ac0aec8(0x113835a18);
    ppppppplStack_168 = ppppppplRam0000000113835a18;
    ppppppplStack_160 = ppppppplRam0000000113835a28;
    ppppppplStack_178 = ppppppplRam0000000113835a18;
    ppppppplStack_170 = ppppppplRam0000000113835a18;
    param_1 = (long *******)&ppppppplStack_178;
    ppppppplRam0000000113835a18 = ppppppplVar6;
    ppppppplVar6 = ppppppplRam0000000113835a20;
    ppppppplRam0000000113835a20 = ppppppplVar15;
    ppppppplRam0000000113835a28 = unaff_x25;
    FUN_10ac0afc0();
    param_3 = ppppppplRam0000000113835a20;
    ppppppplVar6 = ppppppplRam0000000113835a28;
  }
  if (ppppppplVar15 < ppppppplVar6) {
    *ppppppplVar15 = (long ******)0xd8000000d0;
    ppppppplVar15[2] = (long ******)0x10;
    ppppppplVar15[1] = (long ******)0x177c;
    *(undefined4 *)(ppppppplVar15 + 3) = 0;
    ppppppplVar15[5] = (long ******)0x0;
    ppppppplVar15[4] = (long ******)0x0;
    ppppppplVar15[7] = (long ******)0x0;
    ppppppplVar15[6] = (long ******)0x0;
    ppppppplVar15[9] = (long ******)0x0;
    ppppppplVar15[8] = (long ******)0x0;
    ppppppplVar15[0xb] = (long ******)0x0;
    ppppppplVar15[10] = (long ******)0x0;
    ppppppplVar15 = ppppppplVar15 + 0xc;
  }
  else {
    lVar8 = (long)ppppppplVar15 - (long)ppppppplRam0000000113835a18;
    uVar12 = (lVar8 >> 5) * -0x5555555555555555 + 1;
    ppppppplRam0000000113835a20 = ppppppplVar15;
    if (0x2aaaaaaaaaaaaaa < uVar12) goto LAB_10ac0f7dc;
    lVar9 = (long)ppppppplVar6 - (long)ppppppplRam0000000113835a18 >> 5;
    uVar10 = lVar9 * 0x5555555555555556;
    if (uVar10 < uVar12 || uVar10 - uVar12 == 0) {
      uVar10 = uVar12;
    }
    if (0x155555555555554 < (ulong)(lVar9 * -0x5555555555555555)) {
      uVar10 = uVar14;
    }
    uStack_158 = 0x113835a18;
    lVar9 = lVar13;
    FUN_10a187714();
    puVar1 = (undefined8 *)(lVar9 + lVar8);
    unaff_x25 = (long *******)(lVar9 + uVar10 * 0x60);
    *puVar1 = 0xd8000000d0;
    puVar1[2] = 0x10;
    puVar1[1] = 0x177c;
    *(undefined4 *)(puVar1 + 3) = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    ppppppplVar15 = (long *******)(puVar1 + 0xc);
    ppppppplVar6 = (long *******)
                   ((long)puVar1 +
                   ((long)ppppppplRam0000000113835a18 - (long)ppppppplRam0000000113835a20));
    param_2 = ppppppplRam0000000113835a18;
    param_4 = ppppppplVar6;
    FUN_10ac0aec8(0x113835a18);
    ppppppplStack_168 = ppppppplRam0000000113835a18;
    ppppppplStack_160 = ppppppplRam0000000113835a28;
    ppppppplStack_178 = ppppppplRam0000000113835a18;
    ppppppplStack_170 = ppppppplRam0000000113835a18;
    param_1 = (long *******)&ppppppplStack_178;
    ppppppplRam0000000113835a18 = ppppppplVar6;
    ppppppplVar6 = ppppppplRam0000000113835a20;
    ppppppplRam0000000113835a20 = ppppppplVar15;
    ppppppplRam0000000113835a28 = unaff_x25;
    FUN_10ac0afc0();
    param_3 = ppppppplRam0000000113835a20;
    ppppppplVar6 = ppppppplRam0000000113835a28;
  }
  if (ppppppplVar15 < ppppppplVar6) {
    *ppppppplVar15 = (long ******)0xd8000000d1;
    ppppppplVar15[2] = (long ******)0x10;
    ppppppplVar15[1] = (long ******)0x1794;
    *(undefined4 *)(ppppppplVar15 + 3) = 0;
    ppppppplVar15[5] = (long ******)0x0;
    ppppppplVar15[4] = (long ******)0x0;
    ppppppplVar15[7] = (long ******)0x0;
    ppppppplVar15[6] = (long ******)0x0;
    ppppppplVar15[9] = (long ******)0x0;
    ppppppplVar15[8] = (long ******)0x0;
    ppppppplVar15[0xb] = (long ******)0x0;
    ppppppplVar15[10] = (long ******)0x0;
    ppppppplVar15 = ppppppplVar15 + 0xc;
  }
  else {
    lVar8 = (long)ppppppplVar15 - (long)ppppppplRam0000000113835a18;
    uVar12 = (lVar8 >> 5) * -0x5555555555555555 + 1;
    ppppppplRam0000000113835a20 = ppppppplVar15;
    if (0x2aaaaaaaaaaaaaa < uVar12) goto LAB_10ac0f7dc;
    lVar9 = (long)ppppppplVar6 - (long)ppppppplRam0000000113835a18 >> 5;
    uVar10 = lVar9 * 0x5555555555555556;
    if (uVar10 < uVar12 || uVar10 - uVar12 == 0) {
      uVar10 = uVar12;
    }
    if (0x155555555555554 < (ulong)(lVar9 * -0x5555555555555555)) {
      uVar10 = uVar14;
    }
    uStack_158 = 0x113835a18;
    lVar9 = lVar13;
    FUN_10a187714();
    puVar1 = (undefined8 *)(lVar9 + lVar8);
    unaff_x25 = (long *******)(lVar9 + uVar10 * 0x60);
    *puVar1 = 0xd8000000d1;
    puVar1[2] = 0x10;
    puVar1[1] = 0x1794;
    *(undefined4 *)(puVar1 + 3) = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    ppppppplVar15 = (long *******)(puVar1 + 0xc);
    ppppppplVar6 = (long *******)
                   ((long)puVar1 +
                   ((long)ppppppplRam0000000113835a18 - (long)ppppppplRam0000000113835a20));
    param_2 = ppppppplRam0000000113835a18;
    param_4 = ppppppplVar6;
    FUN_10ac0aec8(0x113835a18);
    ppppppplStack_168 = ppppppplRam0000000113835a18;
    ppppppplStack_160 = ppppppplRam0000000113835a28;
    ppppppplStack_178 = ppppppplRam0000000113835a18;
    ppppppplStack_170 = ppppppplRam0000000113835a18;
    param_1 = (long *******)&ppppppplStack_178;
    ppppppplRam0000000113835a18 = ppppppplVar6;
    ppppppplVar6 = ppppppplRam0000000113835a20;
    ppppppplRam0000000113835a20 = ppppppplVar15;
    ppppppplRam0000000113835a28 = unaff_x25;
    FUN_10ac0afc0();
    param_3 = ppppppplRam0000000113835a20;
    ppppppplVar6 = ppppppplRam0000000113835a28;
  }
  if (ppppppplVar15 < ppppppplVar6) {
    *ppppppplVar15 = (long ******)0xd8000000d2;
    ppppppplVar15[2] = (long ******)0x10;
    ppppppplVar15[1] = (long ******)0x17a4;
    *(undefined4 *)(ppppppplVar15 + 3) = 0;
    ppppppplVar15[5] = (long ******)0x0;
    ppppppplVar15[4] = (long ******)0x0;
    ppppppplVar15[7] = (long ******)0x0;
    ppppppplVar15[6] = (long ******)0x0;
    ppppppplVar15[9] = (long ******)0x0;
    ppppppplVar15[8] = (long ******)0x0;
    ppppppplVar15[0xb] = (long ******)0x0;
    ppppppplVar15[10] = (long ******)0x0;
    ppppppplVar15 = ppppppplVar15 + 0xc;
  }
  else {
    lVar8 = (long)ppppppplVar15 - (long)ppppppplRam0000000113835a18;
    uVar12 = (lVar8 >> 5) * -0x5555555555555555 + 1;
    ppppppplRam0000000113835a20 = ppppppplVar15;
    if (0x2aaaaaaaaaaaaaa < uVar12) goto LAB_10ac0f7dc;
    lVar9 = (long)ppppppplVar6 - (long)ppppppplRam0000000113835a18 >> 5;
    uVar10 = lVar9 * 0x5555555555555556;
    if (uVar10 < uVar12 || uVar10 - uVar12 == 0) {
      uVar10 = uVar12;
    }
    if (0x155555555555554 < (ulong)(lVar9 * -0x5555555555555555)) {
      uVar10 = uVar14;
    }
    uStack_158 = 0x113835a18;
    lVar9 = lVar13;
    FUN_10a187714();
    puVar1 = (undefined8 *)(lVar9 + lVar8);
    unaff_x25 = (long *******)(lVar9 + uVar10 * 0x60);
    *puVar1 = 0xd8000000d2;
    puVar1[2] = 0x10;
    puVar1[1] = 0x17a4;
    *(undefined4 *)(puVar1 + 3) = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    ppppppplVar15 = (long *******)(puVar1 + 0xc);
    ppppppplVar6 = (long *******)
                   ((long)puVar1 +
                   ((long)ppppppplRam0000000113835a18 - (long)ppppppplRam0000000113835a20));
    param_2 = ppppppplRam0000000113835a18;
    param_4 = ppppppplVar6;
    FUN_10ac0aec8(0x113835a18);
    ppppppplStack_168 = ppppppplRam0000000113835a18;
    ppppppplStack_160 = ppppppplRam0000000113835a28;
    ppppppplStack_178 = ppppppplRam0000000113835a18;
    ppppppplStack_170 = ppppppplRam0000000113835a18;
    param_1 = (long *******)&ppppppplStack_178;
    ppppppplRam0000000113835a18 = ppppppplVar6;
    ppppppplVar6 = ppppppplRam0000000113835a20;
    ppppppplRam0000000113835a20 = ppppppplVar15;
    ppppppplRam0000000113835a28 = unaff_x25;
    FUN_10ac0afc0();
    param_3 = ppppppplRam0000000113835a20;
    ppppppplVar6 = ppppppplRam0000000113835a28;
  }
  if (ppppppplVar15 < ppppppplVar6) {
    *ppppppplVar15 = (long ******)0xd8000000d3;
    ppppppplVar15[2] = (long ******)0x10;
    ppppppplVar15[1] = (long ******)0x17b4;
    *(undefined4 *)(ppppppplVar15 + 3) = 0;
    ppppppplVar15[5] = (long ******)0x0;
    ppppppplVar15[4] = (long ******)0x0;
    ppppppplVar15[7] = (long ******)0x0;
    ppppppplVar15[6] = (long ******)0x0;
    ppppppplVar15[9] = (long ******)0x0;
    ppppppplVar15[8] = (long ******)0x0;
    ppppppplVar15[0xb] = (long ******)0x0;
    ppppppplVar15[10] = (long ******)0x0;
    ppppppplVar15 = ppppppplVar15 + 0xc;
    ppppppplRam0000000113835a20 = param_3;
  }
  else {
    lVar8 = (long)ppppppplVar15 - (long)ppppppplRam0000000113835a18;
    uVar12 = (lVar8 >> 5) * -0x5555555555555555 + 1;
    ppppppplRam0000000113835a20 = ppppppplVar15;
    if (0x2aaaaaaaaaaaaaa < uVar12) goto LAB_10ac0f7dc;
    lVar9 = (long)ppppppplVar6 - (long)ppppppplRam0000000113835a18 >> 5;
    uVar10 = lVar9 * 0x5555555555555556;
    if (uVar10 < uVar12 || uVar10 - uVar12 == 0) {
      uVar10 = uVar12;
    }
    if (0x155555555555554 < (ulong)(lVar9 * -0x5555555555555555)) {
      uVar10 = uVar14;
    }
    uStack_158 = 0x113835a18;
    lVar9 = lVar13;
    FUN_10a187714();
    puVar1 = (undefined8 *)(lVar9 + lVar8);
    unaff_x25 = (long *******)(lVar9 + uVar10 * 0x60);
    *puVar1 = 0xd8000000d3;
    puVar1[2] = 0x10;
    puVar1[1] = 0x17b4;
    *(undefined4 *)(puVar1 + 3) = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    ppppppplVar15 = (long *******)(puVar1 + 0xc);
    ppppppplVar6 = (long *******)
                   ((long)puVar1 +
                   ((long)ppppppplRam0000000113835a18 - (long)ppppppplRam0000000113835a20));
    param_2 = ppppppplRam0000000113835a18;
    param_4 = ppppppplVar6;
    FUN_10ac0aec8(0x113835a18);
    ppppppplStack_168 = ppppppplRam0000000113835a18;
    ppppppplStack_160 = ppppppplRam0000000113835a28;
    ppppppplStack_178 = ppppppplRam0000000113835a18;
    ppppppplStack_170 = ppppppplRam0000000113835a18;
    param_1 = (long *******)&ppppppplStack_178;
    ppppppplRam0000000113835a18 = ppppppplVar6;
    ppppppplVar6 = ppppppplRam0000000113835a20;
    ppppppplRam0000000113835a20 = ppppppplVar15;
    ppppppplRam0000000113835a28 = unaff_x25;
    FUN_10ac0afc0();
    ppppppplVar6 = ppppppplRam0000000113835a28;
  }
  if (ppppppplVar15 < ppppppplVar6) {
    *ppppppplVar15 = (long ******)0xd8000000d4;
    ppppppplVar15[2] = (long ******)0x8;
    ppppppplVar15[1] = (long ******)0x17d4;
    *(undefined4 *)(ppppppplVar15 + 3) = 0;
    ppppppplVar15[5] = (long ******)0x0;
    ppppppplVar15[4] = (long ******)0x0;
    ppppppplVar15[7] = (long ******)0x0;
    ppppppplVar15[6] = (long ******)0x0;
    ppppppplVar15[9] = (long ******)0x0;
    ppppppplVar15[8] = (long ******)0x0;
    ppppppplVar15[0xb] = (long ******)0x0;
    ppppppplVar15[10] = (long ******)0x0;
    ppppppplVar15 = ppppppplVar15 + 0xc;
  }
  else {
    lVar8 = (long)ppppppplVar15 - (long)ppppppplRam0000000113835a18;
    uVar12 = (lVar8 >> 5) * -0x5555555555555555 + 1;
    param_3 = ppppppplRam0000000113835a20;
    ppppppplRam0000000113835a20 = ppppppplVar15;
    if (0x2aaaaaaaaaaaaaa < uVar12) goto LAB_10ac0f7dc;
    lVar9 = (long)ppppppplVar6 - (long)ppppppplRam0000000113835a18 >> 5;
    uVar10 = lVar9 * 0x5555555555555556;
    if (uVar10 < uVar12 || uVar10 - uVar12 == 0) {
      uVar10 = uVar12;
    }
    if (0x155555555555554 < (ulong)(lVar9 * -0x5555555555555555)) {
      uVar10 = uVar14;
    }
    uStack_158 = 0x113835a18;
    lVar9 = lVar13;
    FUN_10a187714();
    puVar1 = (undefined8 *)(lVar9 + lVar8);
    unaff_x25 = (long *******)(lVar9 + uVar10 * 0x60);
    *puVar1 = 0xd8000000d4;
    puVar1[2] = 8;
    puVar1[1] = 0x17d4;
    *(undefined4 *)(puVar1 + 3) = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    ppppppplVar15 = (long *******)(puVar1 + 0xc);
    ppppppplVar6 = (long *******)
                   ((long)puVar1 +
                   ((long)ppppppplRam0000000113835a18 - (long)ppppppplRam0000000113835a20));
    param_2 = ppppppplRam0000000113835a18;
    param_4 = ppppppplVar6;
    FUN_10ac0aec8(0x113835a18);
    ppppppplStack_168 = ppppppplRam0000000113835a18;
    ppppppplStack_160 = ppppppplRam0000000113835a28;
    ppppppplStack_178 = ppppppplRam0000000113835a18;
    ppppppplStack_170 = ppppppplRam0000000113835a18;
    param_1 = (long *******)&ppppppplStack_178;
    ppppppplRam0000000113835a18 = ppppppplVar6;
    ppppppplVar6 = ppppppplRam0000000113835a20;
    ppppppplRam0000000113835a20 = ppppppplVar15;
    ppppppplRam0000000113835a28 = unaff_x25;
    FUN_10ac0afc0();
    ppppppplVar6 = ppppppplRam0000000113835a28;
  }
  if (ppppppplVar15 < ppppppplVar6) {
    *ppppppplVar15 = (long ******)0xd8000000d5;
    ppppppplVar15[2] = (long ******)0x10;
    ppppppplVar15[1] = (long ******)0x17dc;
    *(undefined4 *)(ppppppplVar15 + 3) = 0;
    ppppppplVar15[5] = (long ******)0x0;
    ppppppplVar15[4] = (long ******)0x0;
    ppppppplVar15[7] = (long ******)0x0;
    ppppppplVar15[6] = (long ******)0x0;
    ppppppplVar15[9] = (long ******)0x0;
    ppppppplVar15[8] = (long ******)0x0;
    ppppppplVar15[0xb] = (long ******)0x0;
    ppppppplVar15[10] = (long ******)0x0;
    ppppppplVar15 = ppppppplVar15 + 0xc;
  }
  else {
    lVar8 = (long)ppppppplVar15 - (long)ppppppplRam0000000113835a18;
    uVar12 = (lVar8 >> 5) * -0x5555555555555555 + 1;
    param_3 = ppppppplRam0000000113835a20;
    ppppppplRam0000000113835a20 = ppppppplVar15;
    if (0x2aaaaaaaaaaaaaa < uVar12) goto LAB_10ac0f7dc;
    lVar9 = (long)ppppppplVar6 - (long)ppppppplRam0000000113835a18 >> 5;
    uVar10 = lVar9 * 0x5555555555555556;
    if (uVar10 < uVar12 || uVar10 - uVar12 == 0) {
      uVar10 = uVar12;
    }
    if (0x155555555555554 < (ulong)(lVar9 * -0x5555555555555555)) {
      uVar10 = uVar14;
    }
    uStack_158 = 0x113835a18;
    lVar9 = lVar13;
    FUN_10a187714();
    puVar1 = (undefined8 *)(lVar9 + lVar8);
    unaff_x25 = (long *******)(lVar9 + uVar10 * 0x60);
    *puVar1 = 0xd8000000d5;
    puVar1[2] = 0x10;
    puVar1[1] = 0x17dc;
    *(undefined4 *)(puVar1 + 3) = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    ppppppplVar15 = (long *******)(puVar1 + 0xc);
    ppppppplVar6 = (long *******)
                   ((long)puVar1 +
                   ((long)ppppppplRam0000000113835a18 - (long)ppppppplRam0000000113835a20));
    param_2 = ppppppplRam0000000113835a18;
    param_4 = ppppppplVar6;
    FUN_10ac0aec8(0x113835a18);
    ppppppplStack_168 = ppppppplRam0000000113835a18;
    ppppppplStack_160 = ppppppplRam0000000113835a28;
    ppppppplStack_178 = ppppppplRam0000000113835a18;
    ppppppplStack_170 = ppppppplRam0000000113835a18;
    param_1 = (long *******)&ppppppplStack_178;
    ppppppplRam0000000113835a18 = ppppppplVar6;
    ppppppplVar6 = ppppppplRam0000000113835a20;
    ppppppplRam0000000113835a20 = ppppppplVar15;
    ppppppplRam0000000113835a28 = unaff_x25;
    FUN_10ac0afc0();
    ppppppplVar6 = ppppppplRam0000000113835a28;
  }
  if (ppppppplVar15 < ppppppplVar6) {
    *ppppppplVar15 = (long ******)0xd8000000d6;
    ppppppplVar15[2] = (long ******)0x10;
    ppppppplVar15[1] = (long ******)0x17ec;
    *(undefined4 *)(ppppppplVar15 + 3) = 0;
    ppppppplVar15[5] = (long ******)0x0;
    ppppppplVar15[4] = (long ******)0x0;
    ppppppplVar15[7] = (long ******)0x0;
    ppppppplVar15[6] = (long ******)0x0;
    ppppppplVar15[9] = (long ******)0x0;
    ppppppplVar15[8] = (long ******)0x0;
    ppppppplVar15[0xb] = (long ******)0x0;
    ppppppplVar15[10] = (long ******)0x0;
    ppppppplVar15 = ppppppplVar15 + 0xc;
  }
  else {
    lVar8 = (long)ppppppplVar15 - (long)ppppppplRam0000000113835a18;
    uVar12 = (lVar8 >> 5) * -0x5555555555555555 + 1;
    param_3 = ppppppplRam0000000113835a20;
    ppppppplRam0000000113835a20 = ppppppplVar15;
    if (0x2aaaaaaaaaaaaaa < uVar12) goto LAB_10ac0f7dc;
    lVar9 = (long)ppppppplVar6 - (long)ppppppplRam0000000113835a18 >> 5;
    uVar10 = lVar9 * 0x5555555555555556;
    if (uVar10 < uVar12 || uVar10 - uVar12 == 0) {
      uVar10 = uVar12;
    }
    if (0x155555555555554 < (ulong)(lVar9 * -0x5555555555555555)) {
      uVar10 = uVar14;
    }
    uStack_158 = 0x113835a18;
    lVar9 = lVar13;
    FUN_10a187714();
    puVar1 = (undefined8 *)(lVar9 + lVar8);
    unaff_x25 = (long *******)(lVar9 + uVar10 * 0x60);
    *puVar1 = 0xd8000000d6;
    puVar1[2] = 0x10;
    puVar1[1] = 0x17ec;
    *(undefined4 *)(puVar1 + 3) = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    ppppppplVar15 = (long *******)(puVar1 + 0xc);
    ppppppplVar6 = (long *******)
                   ((long)puVar1 +
                   ((long)ppppppplRam0000000113835a18 - (long)ppppppplRam0000000113835a20));
    param_2 = ppppppplRam0000000113835a18;
    param_4 = ppppppplVar6;
    FUN_10ac0aec8(0x113835a18);
    ppppppplStack_168 = ppppppplRam0000000113835a18;
    ppppppplStack_160 = ppppppplRam0000000113835a28;
    ppppppplStack_178 = ppppppplRam0000000113835a18;
    ppppppplStack_170 = ppppppplRam0000000113835a18;
    param_1 = (long *******)&ppppppplStack_178;
    ppppppplRam0000000113835a18 = ppppppplVar6;
    ppppppplVar6 = ppppppplRam0000000113835a20;
    ppppppplRam0000000113835a20 = ppppppplVar15;
    ppppppplRam0000000113835a28 = unaff_x25;
    FUN_10ac0afc0();
    ppppppplVar6 = ppppppplRam0000000113835a28;
  }
  if (ppppppplVar15 < ppppppplVar6) {
    *ppppppplVar15 = (long ******)0xd8000000d7;
    ppppppplVar15[2] = (long ******)0x10;
    ppppppplVar15[1] = (long ******)0x17c4;
    *(undefined4 *)(ppppppplVar15 + 3) = 0;
    ppppppplVar15[5] = (long ******)0x0;
    ppppppplVar15[4] = (long ******)0x0;
    ppppppplVar15[7] = (long ******)0x0;
    ppppppplVar15[6] = (long ******)0x0;
    ppppppplVar15[9] = (long ******)0x0;
    ppppppplVar15[8] = (long ******)0x0;
    ppppppplVar15[0xb] = (long ******)0x0;
    ppppppplVar15[10] = (long ******)0x0;
    ppppppplVar15 = ppppppplVar15 + 0xc;
  }
  else {
    lVar8 = (long)ppppppplVar15 - (long)ppppppplRam0000000113835a18;
    uVar12 = (lVar8 >> 5) * -0x5555555555555555 + 1;
    param_3 = ppppppplRam0000000113835a20;
    ppppppplRam0000000113835a20 = ppppppplVar15;
    if (0x2aaaaaaaaaaaaaa < uVar12) {
LAB_10ac0f7dc:
      FUN_10a187700();
      if ((long)ppppppplStack_168 < 0) {
        __ZdlPv(ppppppplStack_178);
      }
      ppppppplVar6 = param_1;
      __Unwind_Resume();
      uStack_1c0 = 0x155555555555555;
      uStack_1b8 = 0x2aaaaaaaaaaaaaa;
      pcStack_198 = FUN_10ac0f848;
      lVar13 = (long)ppppppplVar6[1] - (long)*ppppppplVar6;
      uVar14 = (lVar13 >> 4) * -0x5555555555555555 + 1;
      ppppppplStack_1e0 = unaff_x26;
      ppppppplStack_1d8 = unaff_x25;
      ppppppplStack_1d0 = ppppppplVar15;
      ppppppplStack_1c8 = unaff_x23;
      lStack_1b0 = lVar8;
      ppppppplStack_1a8 = param_1;
      pppuStack_1a0 = &ppuStack_110;
      if (uVar14 < 0x555555555555556) {
        lVar8 = (long)ppppppplVar6[2] - (long)*ppppppplVar6 >> 4;
        uVar12 = lVar8 * 0x5555555555555556;
        if (uVar12 < uVar14 || uVar12 - uVar14 == 0) {
          uVar12 = uVar14;
        }
        if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar8 * -0x5555555555555555)) {
          uVar12 = 0x555555555555555;
        }
        ppppppplStack_218 = ppppppplVar6;
        if (uVar12 == 0) {
          ppppppplVar15 = (long *******)0x0;
          uVar12 = 0;
        }
        else {
          ppppppplVar15 = ppppppplVar6;
          FUN_10a187444();
        }
        plVar2 = (long *)((long)ppppppplVar15 + lVar13);
        pppppplVar17 = param_2[1];
        pppppplVar11 = *param_2;
        plVar2[2] = (long)param_2[2];
        plVar2[1] = (long)pppppplVar17;
        *plVar2 = (long)pppppplVar11;
        param_2[1] = (long ******)0x0;
        param_2[2] = (long ******)0x0;
        *param_2 = (long ******)0x0;
        pppppplVar11 = *param_3;
        plVar2[3] = (long)param_2[3];
        plVar2[4] = (long)pppppplVar11;
        plVar2[5] = (long)*param_4;
        pppppplVar17 = *ppppppplVar6;
        pppppplVar4 = ppppppplVar6[1];
        pppppplStack_208 = (long ******)&pppppplStack_1f0;
        pppppplStack_200 = (long ******)&pppppplStack_1e8;
        pppppplVar3 = (long ******)((long)plVar2 + ((long)pppppplVar17 - (long)pppppplVar4));
        pppppplStack_1e8 = pppppplVar3;
        pppppplVar11 = pppppplVar17;
        ppppppplStack_238 = ppppppplVar15;
        pppppplStack_230 = (long ******)plVar2;
        ppppppplStack_210 = ppppppplVar6;
        pppppplStack_1f0 = pppppplVar3;
        if ((long)pppppplVar17 - (long)pppppplVar4 == 0) {
          uStack_1f8 = 1;
        }
        else {
          do {
            ppppplVar18 = pppppplVar11[1];
            ppppplVar16 = *pppppplVar11;
            pppppplStack_1e8[2] = pppppplVar11[2];
            pppppplStack_1e8[1] = ppppplVar18;
            *pppppplStack_1e8 = ppppplVar16;
            pppppplVar11[1] = (long *****)0x0;
            pppppplVar11[2] = (long *****)0x0;
            *pppppplVar11 = (long *****)0x0;
            pppppplStack_1e8[3] = pppppplVar11[3];
            ppppplVar16 = pppppplVar11[4];
            pppppplStack_1e8[5] = pppppplVar11[5];
            pppppplStack_1e8[4] = ppppplVar16;
            pppppplVar11 = pppppplVar11 + 6;
            pppppplStack_1e8 = pppppplStack_1e8 + 6;
          } while (pppppplVar11 != pppppplVar4);
          uStack_1f8 = 1;
          do {
            if (*(char *)((long)pppppplVar17 + 0x17) < '\0') {
              __ZdlPv(*pppppplVar17);
            }
            pppppplVar17 = pppppplVar17 + 6;
          } while (pppppplVar17 != pppppplVar4);
        }
        FUN_10a187488(&ppppppplStack_210);
        ppppppplStack_238 = (long *******)*ppppppplVar6;
        *ppppppplVar6 = pppppplVar3;
        ppppppplVar6[1] = (long ******)(plVar2 + 6);
        pppppplStack_220 = ppppppplVar6[2];
        ppppppplVar6[2] = (long ******)(ppppppplVar15 + uVar12 * 6);
        pppppplStack_230 = (long ******)ppppppplStack_238;
        pppppplStack_228 = (long ******)ppppppplStack_238;
        FUN_10ac0fa18(&ppppppplStack_238);
        return (long *******)(plVar2 + 6);
      }
      FUN_10a187430();
      pppppplVar11 = ppppppplVar6[2];
      while (pppppplVar11 != ppppppplVar6[1]) {
        pppppplVar11 = pppppplVar11 + -6;
        ppppppplVar6[2] = pppppplVar11;
      }
      if (*ppppppplVar6 != (long ******)0x0) {
        __ZdlPv();
      }
      return ppppppplVar6;
    }
    lVar9 = (long)ppppppplVar6 - (long)ppppppplRam0000000113835a18 >> 5;
    uVar10 = lVar9 * 0x5555555555555556;
    if (uVar10 < uVar12 || uVar10 - uVar12 == 0) {
      uVar10 = uVar12;
    }
    if (0x155555555555554 < (ulong)(lVar9 * -0x5555555555555555)) {
      uVar10 = uVar14;
    }
    uStack_158 = 0x113835a18;
    FUN_10a187714();
    puVar1 = (undefined8 *)(lVar13 + lVar8);
    *puVar1 = 0xd8000000d7;
    puVar1[2] = 0x10;
    puVar1[1] = 0x17c4;
    *(undefined4 *)(puVar1 + 3) = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    ppppppplVar15 = (long *******)(puVar1 + 0xc);
    ppppppplVar6 = (long *******)
                   ((long)puVar1 +
                   ((long)ppppppplRam0000000113835a18 - (long)ppppppplRam0000000113835a20));
    FUN_10ac0aec8(0x113835a18,ppppppplRam0000000113835a18,ppppppplRam0000000113835a20,ppppppplVar6);
    ppppppplStack_168 = ppppppplRam0000000113835a18;
    ppppppplStack_160 = ppppppplRam0000000113835a28;
    ppppppplStack_178 = ppppppplRam0000000113835a18;
    ppppppplStack_170 = ppppppplRam0000000113835a18;
    param_1 = (long *******)&ppppppplStack_178;
    ppppppplRam0000000113835a18 = ppppppplVar6;
    ppppppplRam0000000113835a20 = ppppppplVar15;
    ppppppplRam0000000113835a28 = (long *******)(lVar13 + uVar10 * 0x60);
    FUN_10ac0afc0(param_1);
  }
  ppppppplRam0000000113835a20 = ppppppplVar15;
  return param_1;
}



/* Entry: 10ac0c818; end: 10ac0f847;  */

/* WARNING: Removing unreachable block (ram,0x00010ac0fa44) */

long ***** FUN_10ac0c818(long *****param_1,long *****param_2,long *****param_3,long *****param_4)

{
  undefined8 *puVar1;
  long *plVar2;
  long ****pppplVar3;
  long ****pppplVar4;
  code *pcVar5;
  long *****ppppplVar6;
  long *****ppppplVar7;
  long lVar8;
  ulong uVar9;
  long ****pppplVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long *****unaff_x23;
  long *****ppppplVar14;
  long *****unaff_x25;
  long lVar15;
  long *****unaff_x26;
  long ***ppplVar16;
  long ****pppplVar17;
  long ***ppplVar18;
  long ****pppplStack_138;
  long ***ppplStack_130;
  long ***ppplStack_128;
  long ***ppplStack_120;
  long ****pppplStack_118;
  long ****pppplStack_110;
  long ***ppplStack_108;
  long ***ppplStack_100;
  undefined1 uStack_f8;
  long ***ppplStack_f0;
  long ***ppplStack_e8;
  long ****pppplStack_e0;
  long ****pppplStack_d8;
  long ****pppplStack_d0;
  long ****pppplStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  long ****pppplStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  long ***ppplStack_88;
  long ***ppplStack_80;
  long ****pppplStack_78;
  long ****pppplStack_70;
  long ****pppplStack_68;
  long ****pppplStack_60;
  undefined8 uStack_58;
  
  uVar13 = 0x2aaaaaaaaaaaaaa;
  ppppplVar14 = (long *****)0x113835a20;
  lVar15 = 0x113835a18;
  if (ppppplRam0000000113835a20 < ppppplRam0000000113835a28) {
    *ppppplRam0000000113835a20 = (long ****)0xd80000001f;
    ppppplRam0000000113835a20[2] = (long ****)0x40;
    ppppplRam0000000113835a20[1] = (long ****)0x0;
    *(undefined4 *)(ppppplRam0000000113835a20 + 3) = 3;
    ppppplRam0000000113835a20[5] = (long ****)0x1800;
    ppppplRam0000000113835a20[4] = (long ****)0x0;
    ppppplRam0000000113835a20[7] = (long ****)0x0;
    ppppplRam0000000113835a20[6] = (long ****)0x0;
    ppppplRam0000000113835a20[9] = (long ****)0x0;
    ppppplRam0000000113835a20[8] = (long ****)0x0;
    ppppplRam0000000113835a20[0xb] = (long ****)0x0;
    ppppplRam0000000113835a20[10] = (long ****)0x0;
    unaff_x23 = ppppplRam0000000113835a20 + 0xc;
  }
  else {
    lVar12 = (long)ppppplRam0000000113835a20 - (long)ppppplRam0000000113835a18;
    uVar11 = (lVar12 >> 5) * -0x5555555555555555 + 1;
    if (0x2aaaaaaaaaaaaaa < uVar11) goto LAB_10ac0f7dc;
    lVar8 = (long)ppppplRam0000000113835a28 - (long)ppppplRam0000000113835a18 >> 5;
    uVar9 = lVar8 * 0x5555555555555556;
    if (uVar9 < uVar11 || uVar9 - uVar11 == 0) {
      uVar9 = uVar11;
    }
    if (0x155555555555554 < (ulong)(lVar8 * -0x5555555555555555)) {
      uVar9 = uVar13;
    }
    uStack_58 = 0x113835a18;
    lVar8 = lVar15;
    FUN_10a187714();
    param_3 = ppppplRam0000000113835a20;
    ppppplVar7 = ppppplRam0000000113835a18;
    puVar1 = (undefined8 *)(lVar8 + lVar12);
    unaff_x25 = (long *****)(lVar8 + uVar9 * 0x60);
    *puVar1 = 0xd80000001f;
    puVar1[2] = 0x40;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 3) = 3;
    puVar1[5] = 0x1800;
    puVar1[4] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    unaff_x23 = (long *****)(puVar1 + 0xc);
    ppppplVar6 = (long *****)((long)puVar1 + ((long)ppppplVar7 - (long)param_3));
    param_4 = ppppplVar6;
    FUN_10ac0aec8(0x113835a18,ppppplVar7);
    pppplStack_68 = (long ****)ppppplRam0000000113835a18;
    pppplStack_60 = (long ****)ppppplRam0000000113835a28;
    pppplStack_78 = (long ****)ppppplRam0000000113835a18;
    pppplStack_70 = (long ****)ppppplRam0000000113835a18;
    ppppplRam0000000113835a18 = ppppplVar6;
    ppppplRam0000000113835a20 = unaff_x23;
    ppppplRam0000000113835a28 = unaff_x25;
    FUN_10ac0afc0(&pppplStack_78);
  }
  ppppplRam0000000113835a20 = unaff_x23;
  if (ppppplRam0000000113835a18 == unaff_x23) {
LAB_10ac0f7d8:
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10ac0f7dc);
    (*pcVar5)();
  }
  func_0x000107c2b07c(&pppplStack_78,&UNK_10f63ff47);
  ppplStack_88 = (long ***)0x4;
  ppplStack_80 = (long ***)0x4;
  pppplVar10 = unaff_x23[-5];
  if (pppplVar10 < unaff_x23[-4]) {
    pppplVar10[2] = (long ***)pppplStack_68;
    pppplVar10[1] = (long ***)pppplStack_70;
    *pppplVar10 = (long ***)pppplStack_78;
    pppplStack_70 = (long ****)0x0;
    pppplStack_68 = (long ****)0x0;
    pppplStack_78 = (long ****)0x0;
    pppplVar10[3] = (long ***)pppplStack_60;
    pppplVar10[5] = (long ***)0x4;
    pppplVar10[4] = (long ***)0x4;
    ppppplVar6 = (long *****)(pppplVar10 + 6);
  }
  else {
    ppppplVar6 = unaff_x23 + -6;
    param_3 = (long *****)&ppplStack_80;
    param_4 = (long *****)&ppplStack_88;
    FUN_10ac0f848(ppppplVar6,&pppplStack_78);
  }
  unaff_x23[-5] = (long ****)ppppplVar6;
  if ((long)pppplStack_68 < 0) {
    __ZdlPv(pppplStack_78);
  }
  ppppplVar6 = ppppplRam0000000113835a20;
  if (ppppplRam0000000113835a18 == ppppplRam0000000113835a20) goto LAB_10ac0f7d8;
  func_0x000107c2b07c(&pppplStack_78,&UNK_10f63ff70);
  ppplStack_88 = (long ***)0x1;
  ppplStack_80 = (long ***)0x0;
  pppplVar10 = ppppplVar6[-5];
  if (pppplVar10 < ppppplVar6[-4]) {
    pppplVar10[2] = (long ***)pppplStack_68;
    pppplVar10[1] = (long ***)pppplStack_70;
    *pppplVar10 = (long ***)pppplStack_78;
    pppplStack_70 = (long ****)0x0;
    pppplStack_68 = (long ****)0x0;
    pppplStack_78 = (long ****)0x0;
    pppplVar10[3] = (long ***)pppplStack_60;
    pppplVar10[5] = (long ***)0x1;
    pppplVar10[4] = (long ***)0x0;
    ppppplVar7 = (long *****)(pppplVar10 + 6);
  }
  else {
    ppppplVar7 = ppppplVar6 + -6;
    param_3 = (long *****)&ppplStack_80;
    param_4 = (long *****)&ppplStack_88;
    FUN_10ac0f848(ppppplVar7,&pppplStack_78);
  }
  ppppplVar6[-5] = (long ****)ppppplVar7;
  if ((long)pppplStack_68 < 0) {
    __ZdlPv(pppplStack_78);
  }
  ppppplVar6 = ppppplRam0000000113835a20;
  if (ppppplRam0000000113835a18 == ppppplRam0000000113835a20) goto LAB_10ac0f7d8;
  func_0x000107c2b07c(&pppplStack_78,&UNK_10f63ff57);
  ppplStack_80 = (long ***)0x8;
  ppplStack_88 = (long ***)0x4;
  pppplVar10 = ppppplVar6[-5];
  if (pppplVar10 < ppppplVar6[-4]) {
    pppplVar10[2] = (long ***)pppplStack_68;
    pppplVar10[1] = (long ***)pppplStack_70;
    *pppplVar10 = (long ***)pppplStack_78;
    pppplStack_70 = (long ****)0x0;
    pppplStack_68 = (long ****)0x0;
    pppplStack_78 = (long ****)0x0;
    pppplVar10[3] = (long ***)pppplStack_60;
    pppplVar10[5] = (long ***)0x4;
    pppplVar10[4] = (long ***)0x8;
    ppppplVar7 = (long *****)(pppplVar10 + 6);
  }
  else {
    ppppplVar7 = ppppplVar6 + -6;
    param_3 = (long *****)&ppplStack_80;
    param_4 = (long *****)&ppplStack_88;
    FUN_10ac0f848(ppppplVar7,&pppplStack_78);
  }
  ppppplVar6[-5] = (long ****)ppppplVar7;
  if ((long)pppplStack_68 < 0) {
    __ZdlPv(pppplStack_78);
  }
  ppppplVar6 = ppppplRam0000000113835a20;
  if (ppppplRam0000000113835a18 == ppppplRam0000000113835a20) goto LAB_10ac0f7d8;
  func_0x000107c2b07c(&pppplStack_78,&UNK_10f63ffa6);
  ppplStack_80 = (long ***)0xc;
  ppplStack_88 = (long ***)0x4;
  pppplVar10 = ppppplVar6[-5];
  if (pppplVar10 < ppppplVar6[-4]) {
    pppplVar10[2] = (long ***)pppplStack_68;
    pppplVar10[1] = (long ***)pppplStack_70;
    *pppplVar10 = (long ***)pppplStack_78;
    pppplStack_70 = (long ****)0x0;
    pppplStack_68 = (long ****)0x0;
    pppplStack_78 = (long ****)0x0;
    pppplVar10[3] = (long ***)pppplStack_60;
    pppplVar10[5] = (long ***)0x4;
    pppplVar10[4] = (long ***)0xc;
    ppppplVar7 = (long *****)(pppplVar10 + 6);
  }
  else {
    ppppplVar7 = ppppplVar6 + -6;
    param_3 = (long *****)&ppplStack_80;
    param_4 = (long *****)&ppplStack_88;
    FUN_10ac0f848(ppppplVar7,&pppplStack_78);
  }
  ppppplVar6[-5] = (long ****)ppppplVar7;
  if ((long)pppplStack_68 < 0) {
    __ZdlPv(pppplStack_78);
  }
  ppppplVar6 = ppppplRam0000000113835a20;
  if (ppppplRam0000000113835a18 == ppppplRam0000000113835a20) goto LAB_10ac0f7d8;
  func_0x000107c2b07c(&pppplStack_78,&UNK_10f63ffb1);
  ppplStack_80 = (long ***)0x10;
  ppplStack_88 = (long ***)0x4;
  pppplVar10 = ppppplVar6[-5];
  if (pppplVar10 < ppppplVar6[-4]) {
    pppplVar10[2] = (long ***)pppplStack_68;
    pppplVar10[1] = (long ***)pppplStack_70;
    *pppplVar10 = (long ***)pppplStack_78;
    pppplStack_70 = (long ****)0x0;
    pppplStack_68 = (long ****)0x0;
    pppplStack_78 = (long ****)0x0;
    pppplVar10[3] = (long ***)pppplStack_60;
    pppplVar10[5] = (long ***)0x4;
    pppplVar10[4] = (long ***)0x10;
    ppppplVar7 = (long *****)(pppplVar10 + 6);
  }
  else {
    ppppplVar7 = ppppplVar6 + -6;
    param_3 = (long *****)&ppplStack_80;
    param_4 = (long *****)&ppplStack_88;
    FUN_10ac0f848(ppppplVar7,&pppplStack_78);
  }
  ppppplVar6[-5] = (long ****)ppppplVar7;
  if ((long)pppplStack_68 < 0) {
    __ZdlPv(pppplStack_78);
  }
  ppppplVar6 = ppppplRam0000000113835a20;
  if (ppppplRam0000000113835a18 == ppppplRam0000000113835a20) goto LAB_10ac0f7d8;
  func_0x000107c2b07c(&pppplStack_78,"direction");
  ppplStack_80 = (long ***)0x14;
  ppplStack_88 = (long ***)0xc;
  pppplVar10 = ppppplVar6[-5];
  if (pppplVar10 < ppppplVar6[-4]) {
    pppplVar10[2] = (long ***)pppplStack_68;
    pppplVar10[1] = (long ***)pppplStack_70;
    *pppplVar10 = (long ***)pppplStack_78;
    pppplStack_70 = (long ****)0x0;
    pppplStack_68 = (long ****)0x0;
    pppplStack_78 = (long ****)0x0;
    pppplVar10[3] = (long ***)pppplStack_60;
    pppplVar10[5] = (long ***)0xc;
    pppplVar10[4] = (long ***)0x14;
    ppppplVar7 = (long *****)(pppplVar10 + 6);
  }
  else {
    ppppplVar7 = ppppplVar6 + -6;
    param_3 = (long *****)&ppplStack_80;
    param_4 = (long *****)&ppplStack_88;
    FUN_10ac0f848(ppppplVar7,&pppplStack_78);
  }
  ppppplVar6[-5] = (long ****)ppppplVar7;
  if ((long)pppplStack_68 < 0) {
    __ZdlPv(pppplStack_78);
  }
  ppppplVar6 = ppppplRam0000000113835a20;
  if (ppppplRam0000000113835a18 == ppppplRam0000000113835a20) goto LAB_10ac0f7d8;
  func_0x000107c2b07c(&pppplStack_78,&DAT_10f68f20c);
  ppplStack_80 = (long ***)0x20;
  ppplStack_88 = (long ***)0xc;
  pppplVar10 = ppppplVar6[-5];
  if (pppplVar10 < ppppplVar6[-4]) {
    pppplVar10[2] = (long ***)pppplStack_68;
    pppplVar10[1] = (long ***)pppplStack_70;
    *pppplVar10 = (long ***)pppplStack_78;
    pppplStack_70 = (long ****)0x0;
    pppplStack_68 = (long ****)0x0;
    pppplStack_78 = (long ****)0x0;
    pppplVar10[3] = (long ***)pppplStack_60;
    pppplVar10[5] = (long ***)0xc;
    pppplVar10[4] = (long ***)0x20;
    ppppplVar7 = (long *****)(pppplVar10 + 6);
  }
  else {
    ppppplVar7 = ppppplVar6 + -6;
    param_3 = (long *****)&ppplStack_80;
    param_4 = (long *****)&ppplStack_88;
    FUN_10ac0f848(ppppplVar7,&pppplStack_78);
  }
  ppppplVar6[-5] = (long ****)ppppplVar7;
  if ((long)pppplStack_68 < 0) {
    __ZdlPv(pppplStack_78);
  }
  ppppplVar6 = ppppplRam0000000113835a20;
  if (ppppplRam0000000113835a18 == ppppplRam0000000113835a20) goto LAB_10ac0f7d8;
  func_0x000107c2b07c(&pppplStack_78,&DAT_10f68f0f0);
  ppplStack_80 = (long ***)0x2c;
  ppplStack_88 = (long ***)0x10;
  pppplVar10 = ppppplVar6[-5];
  if (pppplVar10 < ppppplVar6[-4]) {
    pppplVar10[2] = (long ***)pppplStack_68;
    pppplVar10[1] = (long ***)pppplStack_70;
    *pppplVar10 = (long ***)pppplStack_78;
    pppplStack_70 = (long ****)0x0;
    pppplStack_68 = (long ****)0x0;
    pppplStack_78 = (long ****)0x0;
    pppplVar10[3] = (long ***)pppplStack_60;
    pppplVar10[5] = (long ***)0x10;
    pppplVar10[4] = (long ***)0x2c;
    ppppplVar7 = (long *****)(pppplVar10 + 6);
  }
  else {
    ppppplVar7 = ppppplVar6 + -6;
    param_3 = (long *****)&ppplStack_80;
    param_4 = (long *****)&ppplStack_88;
    FUN_10ac0f848(ppppplVar7,&pppplStack_78);
  }
  ppppplVar6[-5] = (long ****)ppppplVar7;
  if ((long)pppplStack_68 < 0) {
    __ZdlPv(pppplStack_78);
  }
  ppppplVar6 = ppppplRam0000000113835a20;
  if (ppppplRam0000000113835a18 == ppppplRam0000000113835a20) goto LAB_10ac0f7d8;
  param_2 = (long *****)&UNK_10f63ffbd;
  func_0x000107c2b07c(&pppplStack_78);
  ppplStack_80 = (long ***)0x3c;
  ppplStack_88 = (long ***)0x4;
  pppplVar10 = ppppplVar6[-5];
  if (pppplVar10 < ppppplVar6[-4]) {
    pppplVar10[2] = (long ***)pppplStack_68;
    pppplVar10[1] = (long ***)pppplStack_70;
    *pppplVar10 = (long ***)pppplStack_78;
    pppplStack_70 = (long ****)0x0;
    pppplStack_68 = (long ****)0x0;
    pppplStack_78 = (long ****)0x0;
    pppplVar10[3] = (long ***)pppplStack_60;
    pppplVar10[5] = (long ***)0x4;
    pppplVar10[4] = (long ***)0x3c;
    param_1 = (long *****)(pppplVar10 + 6);
  }
  else {
    param_1 = ppppplVar6 + -6;
    param_2 = &pppplStack_78;
    param_3 = (long *****)&ppplStack_80;
    param_4 = (long *****)&ppplStack_88;
    FUN_10ac0f848();
  }
  ppppplVar6[-5] = (long ****)param_1;
  if ((long)pppplStack_68 < 0) {
    param_1 = (long *****)pppplStack_78;
    __ZdlPv();
  }
  if (ppppplRam0000000113835a20 < ppppplRam0000000113835a28) {
    *ppppplRam0000000113835a20 = (long ****)0xd800000021;
    ppppplRam0000000113835a20[2] = (long ****)0x20;
    ppppplRam0000000113835a20[1] = (long ****)0x200;
    *(undefined4 *)(ppppplRam0000000113835a20 + 3) = 3;
    ppppplRam0000000113835a20[5] = (long ****)0x1810;
    ppppplRam0000000113835a20[4] = (long ****)0x0;
    ppppplRam0000000113835a20[7] = (long ****)0x0;
    ppppplRam0000000113835a20[6] = (long ****)0x0;
    ppppplRam0000000113835a20[9] = (long ****)0x0;
    ppppplRam0000000113835a20[8] = (long ****)0x0;
    ppppplRam0000000113835a20[0xb] = (long ****)0x0;
    ppppplRam0000000113835a20[10] = (long ****)0x0;
    unaff_x23 = ppppplRam0000000113835a20 + 0xc;
  }
  else {
    lVar12 = (long)ppppplRam0000000113835a20 - (long)ppppplRam0000000113835a18;
    uVar11 = (lVar12 >> 5) * -0x5555555555555555 + 1;
    if (0x2aaaaaaaaaaaaaa < uVar11) goto LAB_10ac0f7dc;
    lVar8 = (long)ppppplRam0000000113835a28 - (long)ppppplRam0000000113835a18 >> 5;
    uVar9 = lVar8 * 0x5555555555555556;
    if (uVar9 < uVar11 || uVar9 - uVar11 == 0) {
      uVar9 = uVar11;
    }
    if (0x155555555555554 < (ulong)(lVar8 * -0x5555555555555555)) {
      uVar9 = uVar13;
    }
    uStack_58 = 0x113835a18;
    lVar8 = lVar15;
    FUN_10a187714();
    param_3 = ppppplRam0000000113835a20;
    ppppplVar7 = ppppplRam0000000113835a18;
    puVar1 = (undefined8 *)(lVar8 + lVar12);
    unaff_x25 = (long *****)(lVar8 + uVar9 * 0x60);
    *puVar1 = 0xd800000021;
    puVar1[2] = 0x20;
    puVar1[1] = 0x200;
    *(undefined4 *)(puVar1 + 3) = 3;
    puVar1[5] = 0x1810;
    puVar1[4] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    unaff_x23 = (long *****)(puVar1 + 0xc);
    ppppplVar6 = (long *****)((long)puVar1 + ((long)ppppplVar7 - (long)param_3));
    param_4 = ppppplVar6;
    FUN_10ac0aec8(0x113835a18,ppppplVar7);
    pppplStack_68 = (long ****)ppppplRam0000000113835a18;
    pppplStack_60 = (long ****)ppppplRam0000000113835a28;
    pppplStack_78 = (long ****)ppppplRam0000000113835a18;
    pppplStack_70 = (long ****)ppppplRam0000000113835a18;
    ppppplRam0000000113835a18 = ppppplVar6;
    ppppplRam0000000113835a20 = unaff_x23;
    ppppplRam0000000113835a28 = unaff_x25;
    FUN_10ac0afc0(&pppplStack_78);
  }
  ppppplRam0000000113835a20 = unaff_x23;
  if (ppppplRam0000000113835a18 == unaff_x23) goto LAB_10ac0f7d8;
  func_0x000107c2b07c(&pppplStack_78,"direction");
  ppplStack_88 = (long ***)0xc;
  ppplStack_80 = (long ***)0x0;
  pppplVar10 = unaff_x23[-5];
  if (pppplVar10 < unaff_x23[-4]) {
    pppplVar10[2] = (long ***)pppplStack_68;
    pppplVar10[1] = (long ***)pppplStack_70;
    *pppplVar10 = (long ***)pppplStack_78;
    pppplStack_70 = (long ****)0x0;
    pppplStack_68 = (long ****)0x0;
    pppplStack_78 = (long ****)0x0;
    pppplVar10[3] = (long ***)pppplStack_60;
    pppplVar10[5] = (long ***)0xc;
    pppplVar10[4] = (long ***)0x0;
    ppppplVar6 = (long *****)(pppplVar10 + 6);
  }
  else {
    ppppplVar6 = unaff_x23 + -6;
    param_3 = (long *****)&ppplStack_80;
    param_4 = (long *****)&ppplStack_88;
    FUN_10ac0f848(ppppplVar6,&pppplStack_78);
  }
  unaff_x23[-5] = (long ****)ppppplVar6;
  if ((long)pppplStack_68 < 0) {
    __ZdlPv(pppplStack_78);
  }
  ppppplVar6 = ppppplRam0000000113835a20;
  if (ppppplRam0000000113835a18 == ppppplRam0000000113835a20) goto LAB_10ac0f7d8;
  func_0x000107c2b07c(&pppplStack_78,&DAT_10f68f0f0);
  ppplStack_80 = (long ***)0xc;
  ppplStack_88 = (long ***)0x10;
  pppplVar10 = ppppplVar6[-5];
  if (pppplVar10 < ppppplVar6[-4]) {
    pppplVar10[2] = (long ***)pppplStack_68;
    pppplVar10[1] = (long ***)pppplStack_70;
    *pppplVar10 = (long ***)pppplStack_78;
    pppplStack_70 = (long ****)0x0;
    pppplStack_68 = (long ****)0x0;
    pppplStack_78 = (long ****)0x0;
    pppplVar10[3] = (long ***)pppplStack_60;
    pppplVar10[5] = (long ***)0x10;
    pppplVar10[4] = (long ***)0xc;
    ppppplVar7 = (long *****)(pppplVar10 + 6);
  }
  else {
    ppppplVar7 = ppppplVar6 + -6;
    param_3 = (long *****)&ppplStack_80;
    param_4 = (long *****)&ppplStack_88;
    FUN_10ac0f848(ppppplVar7,&pppplStack_78);
  }
  ppppplVar6[-5] = (long ****)ppppplVar7;
  if ((long)pppplStack_68 < 0) {
    __ZdlPv(pppplStack_78);
  }
  ppppplVar6 = ppppplRam0000000113835a20;
  if (ppppplRam0000000113835a18 == ppppplRam0000000113835a20) goto LAB_10ac0f7d8;
  param_2 = (long *****)&UNK_10f63ffbd;
  func_0x000107c2b07c(&pppplStack_78);
  ppplStack_80 = (long ***)0x1c;
  ppplStack_88 = (long ***)0x4;
  pppplVar10 = ppppplVar6[-5];
  if (pppplVar10 < ppppplVar6[-4]) {
    pppplVar10[2] = (long ***)pppplStack_68;
    pppplVar10[1] = (long ***)pppplStack_70;
    *pppplVar10 = (long ***)pppplStack_78;
    pppplStack_70 = (long ****)0x0;
    pppplStack_68 = (long ****)0x0;
    pppplStack_78 = (long ****)0x0;
    pppplVar10[3] = (long ***)pppplStack_60;
    pppplVar10[5] = (long ***)0x4;
    pppplVar10[4] = (long ***)0x1c;
    param_1 = (long *****)(pppplVar10 + 6);
  }
  else {
    param_1 = ppppplVar6 + -6;
    param_2 = &pppplStack_78;
    param_3 = (long *****)&ppplStack_80;
    param_4 = (long *****)&ppplStack_88;
    FUN_10ac0f848();
  }
  ppppplVar6[-5] = (long ****)param_1;
  if ((long)pppplStack_68 < 0) {
    param_1 = (long *****)pppplStack_78;
    __ZdlPv();
  }
  ppppplVar6 = ppppplRam0000000113835a28;
  if (ppppplRam0000000113835a20 < ppppplRam0000000113835a28) {
    *ppppplRam0000000113835a20 = (long ****)0xd80000002e;
    ppppplRam0000000113835a20[2] = (long ****)0xc;
    ppppplRam0000000113835a20[1] = (long ****)0x57c;
    *(undefined4 *)(ppppplRam0000000113835a20 + 3) = 0;
    ppppplRam0000000113835a20[5] = (long ****)0x0;
    ppppplRam0000000113835a20[4] = (long ****)0x0;
    ppppplRam0000000113835a20[7] = (long ****)0x0;
    ppppplRam0000000113835a20[6] = (long ****)0x0;
    ppppplRam0000000113835a20[9] = (long ****)0x0;
    ppppplRam0000000113835a20[8] = (long ****)0x0;
    ppppplRam0000000113835a20[0xb] = (long ****)0x0;
    ppppplRam0000000113835a20[10] = (long ****)0x0;
    unaff_x25 = ppppplRam0000000113835a20 + 0xc;
  }
  else {
    lVar12 = (long)ppppplRam0000000113835a20 - (long)ppppplRam0000000113835a18;
    uVar11 = (lVar12 >> 5) * -0x5555555555555555 + 1;
    if (0x2aaaaaaaaaaaaaa < uVar11) goto LAB_10ac0f7dc;
    lVar8 = (long)ppppplRam0000000113835a28 - (long)ppppplRam0000000113835a18 >> 5;
    uVar9 = lVar8 * 0x5555555555555556;
    if (uVar9 < uVar11 || uVar9 - uVar11 == 0) {
      uVar9 = uVar11;
    }
    if (0x155555555555554 < (ulong)(lVar8 * -0x5555555555555555)) {
      uVar9 = uVar13;
    }
    uStack_58 = 0x113835a18;
    lVar8 = lVar15;
    FUN_10a187714();
    puVar1 = (undefined8 *)(lVar8 + lVar12);
    *puVar1 = 0xd80000002e;
    puVar1[2] = 0xc;
    puVar1[1] = 0x57c;
    *(undefined4 *)(puVar1 + 3) = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    unaff_x25 = (long *****)(puVar1 + 0xc);
    ppppplVar6 = (long *****)
                 ((long)puVar1 + ((long)ppppplRam0000000113835a18 - (long)ppppplRam0000000113835a20)
                 );
    param_2 = ppppplRam0000000113835a18;
    param_4 = ppppplVar6;
    FUN_10ac0aec8(0x113835a18);
    pppplStack_68 = (long ****)ppppplRam0000000113835a18;
    pppplStack_60 = (long ****)ppppplRam0000000113835a28;
    pppplStack_78 = (long ****)ppppplRam0000000113835a18;
    pppplStack_70 = (long ****)ppppplRam0000000113835a18;
    param_1 = &pppplStack_78;
    ppppplRam0000000113835a18 = ppppplVar6;
    ppppplVar6 = ppppplRam0000000113835a20;
    ppppplRam0000000113835a20 = unaff_x25;
    ppppplRam0000000113835a28 = (long *****)(lVar8 + uVar9 * 0x60);
    FUN_10ac0afc0();
    param_3 = ppppplRam0000000113835a20;
    ppppplVar6 = ppppplRam0000000113835a28;
  }
  unaff_x23 = (long *****)0x113835000;
  if (unaff_x25 < ppppplVar6) {
    *unaff_x25 = (long ****)0xd80000002f;
    unaff_x25[2] = (long ****)0x8;
    unaff_x25[1] = (long ****)0x588;
    *(undefined4 *)(unaff_x25 + 3) = 0;
    unaff_x25[5] = (long ****)0x0;
    unaff_x25[4] = (long ****)0x0;
    unaff_x25[7] = (long ****)0x0;
    unaff_x25[6] = (long ****)0x0;
    unaff_x25[9] = (long ****)0x0;
    unaff_x25[8] = (long ****)0x0;
    unaff_x25[0xb] = (long ****)0x0;
    unaff_x25[10] = (long ****)0x0;
    unaff_x25 = unaff_x25 + 0xc;
  }
  else {
    lVar12 = (long)unaff_x25 - (long)ppppplRam0000000113835a18;
    uVar11 = (lVar12 >> 5) * -0x5555555555555555 + 1;
    ppppplRam0000000113835a20 = unaff_x25;
    if (0x2aaaaaaaaaaaaaa < uVar11) goto LAB_10ac0f7dc;
    lVar8 = (long)ppppplVar6 - (long)ppppplRam0000000113835a18 >> 5;
    uVar9 = lVar8 * 0x5555555555555556;
    if (uVar9 < uVar11 || uVar9 - uVar11 == 0) {
      uVar9 = uVar11;
    }
    if (0x155555555555554 < (ulong)(lVar8 * -0x5555555555555555)) {
      uVar9 = uVar13;
    }
    uStack_58 = 0x113835a18;
    lVar8 = lVar15;
    FUN_10a187714();
    puVar1 = (undefined8 *)(lVar8 + lVar12);
    unaff_x26 = (long *****)(lVar8 + uVar9 * 0x60);
    *puVar1 = 0xd80000002f;
    puVar1[2] = 8;
    puVar1[1] = 0x588;
    *(undefined4 *)(puVar1 + 3) = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    unaff_x25 = (long *****)(puVar1 + 0xc);
    ppppplVar6 = (long *****)
                 ((long)puVar1 + ((long)ppppplRam0000000113835a18 - (long)ppppplRam0000000113835a20)
                 );
    param_2 = ppppplRam0000000113835a18;
    param_4 = ppppplVar6;
    FUN_10ac0aec8(0x113835a18);
    pppplStack_68 = (long ****)ppppplRam0000000113835a18;
    pppplStack_60 = (long ****)ppppplRam0000000113835a28;
    pppplStack_78 = (long ****)ppppplRam0000000113835a18;
    pppplStack_70 = (long ****)ppppplRam0000000113835a18;
    param_1 = &pppplStack_78;
    ppppplRam0000000113835a18 = ppppplVar6;
    ppppplVar6 = ppppplRam0000000113835a20;
    ppppplRam0000000113835a20 = unaff_x25;
    ppppplRam0000000113835a28 = unaff_x26;
    FUN_10ac0afc0();
    param_3 = ppppplRam0000000113835a20;
    ppppplVar6 = ppppplRam0000000113835a28;
  }
  if (unaff_x25 < ppppplVar6) {
    *unaff_x25 = (long ****)0xd800000030;
    unaff_x25[2] = (long ****)0x4;
    unaff_x25[1] = (long ****)0x590;
    *(undefined4 *)(unaff_x25 + 3) = 0;
    unaff_x25[5] = (long ****)0x0;
    unaff_x25[4] = (long ****)0x0;
    unaff_x25[7] = (long ****)0x0;
    unaff_x25[6] = (long ****)0x0;
    unaff_x25[9] = (long ****)0x0;
    unaff_x25[8] = (long ****)0x0;
    unaff_x25[0xb] = (long ****)0x0;
    unaff_x25[10] = (long ****)0x0;
    unaff_x25 = unaff_x25 + 0xc;
  }
  else {
    lVar12 = (long)unaff_x25 - (long)ppppplRam0000000113835a18;
    uVar11 = (lVar12 >> 5) * -0x5555555555555555 + 1;
    ppppplRam0000000113835a20 = unaff_x25;
    if (0x2aaaaaaaaaaaaaa < uVar11) goto LAB_10ac0f7dc;
    lVar8 = (long)ppppplVar6 - (long)ppppplRam0000000113835a18 >> 5;
    uVar9 = lVar8 * 0x5555555555555556;
    if (uVar9 < uVar11 || uVar9 - uVar11 == 0) {
      uVar9 = uVar11;
    }
    if (0x155555555555554 < (ulong)(lVar8 * -0x5555555555555555)) {
      uVar9 = uVar13;
    }
    uStack_58 = 0x113835a18;
    lVar8 = lVar15;
    FUN_10a187714();
    puVar1 = (undefined8 *)(lVar8 + lVar12);
    unaff_x26 = (long *****)(lVar8 + uVar9 * 0x60);
    *puVar1 = 0xd800000030;
    puVar1[2] = 4;
    puVar1[1] = 0x590;
    *(undefined4 *)(puVar1 + 3) = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    unaff_x25 = (long *****)(puVar1 + 0xc);
    ppppplVar6 = (long *****)
                 ((long)puVar1 + ((long)ppppplRam0000000113835a18 - (long)ppppplRam0000000113835a20)
                 );
    param_2 = ppppplRam0000000113835a18;
    param_4 = ppppplVar6;
    FUN_10ac0aec8(0x113835a18);
    pppplStack_68 = (long ****)ppppplRam0000000113835a18;
    pppplStack_60 = (long ****)ppppplRam0000000113835a28;
    pppplStack_78 = (long ****)ppppplRam0000000113835a18;
    pppplStack_70 = (long ****)ppppplRam0000000113835a18;
    param_1 = &pppplStack_78;
    ppppplRam0000000113835a18 = ppppplVar6;
    ppppplVar6 = ppppplRam0000000113835a20;
    ppppplRam0000000113835a20 = unaff_x25;
    ppppplRam0000000113835a28 = unaff_x26;
    FUN_10ac0afc0();
    param_3 = ppppplRam0000000113835a20;
    ppppplVar6 = ppppplRam0000000113835a28;
  }
  if (unaff_x25 < ppppplVar6) {
    *unaff_x25 = (long ****)0xd800000023;
    unaff_x25[2] = (long ****)0x24;
    unaff_x25[1] = (long ****)0x300;
    *(undefined4 *)(unaff_x25 + 3) = 3;
    unaff_x25[5] = (long ****)0x1820;
    unaff_x25[4] = (long ****)0x0;
    unaff_x25[7] = (long ****)0x0;
    unaff_x25[6] = (long ****)0x0;
    unaff_x25[9] = (long ****)0x0;
    unaff_x25[8] = (long ****)0x0;
    unaff_x25[0xb] = (long ****)0x0;
    unaff_x25[10] = (long ****)0x0;
    unaff_x25 = unaff_x25 + 0xc;
  }
  else {
    lVar12 = (long)unaff_x25 - (long)ppppplRam0000000113835a18;
    uVar11 = (lVar12 >> 5) * -0x5555555555555555 + 1;
    ppppplRam0000000113835a20 = unaff_x25;
    if (0x2aaaaaaaaaaaaaa < uVar11) goto LAB_10ac0f7dc;
    lVar8 = (long)ppppplVar6 - (long)ppppplRam0000000113835a18 >> 5;
    uVar9 = lVar8 * 0x5555555555555556;
    if (uVar9 < uVar11 || uVar9 - uVar11 == 0) {
      uVar9 = uVar11;
    }
    if (0x155555555555554 < (ulong)(lVar8 * -0x5555555555555555)) {
      uVar9 = uVar13;
    }
    uStack_58 = 0x113835a18;
    lVar8 = lVar15;
    FUN_10a187714();
    param_3 = ppppplRam0000000113835a20;
    ppppplVar7 = ppppplRam0000000113835a18;
    puVar1 = (undefined8 *)(lVar8 + lVar12);
    unaff_x26 = (long *****)(lVar8 + uVar9 * 0x60);
    *puVar1 = 0xd800000023;
    puVar1[2] = 0x24;
    puVar1[1] = 0x300;
    *(undefined4 *)(puVar1 + 3) = 3;
    puVar1[5] = 0x1820;
    puVar1[4] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    unaff_x25 = (long *****)(puVar1 + 0xc);
    ppppplVar6 = (long *****)((long)puVar1 + ((long)ppppplVar7 - (long)param_3));
    param_4 = ppppplVar6;
    FUN_10ac0aec8(0x113835a18,ppppplVar7);
    pppplStack_68 = (long ****)ppppplRam0000000113835a18;
    pppplStack_60 = (long ****)ppppplRam0000000113835a28;
    pppplStack_78 = (long ****)ppppplRam0000000113835a18;
    pppplStack_70 = (long ****)ppppplRam0000000113835a18;
    ppppplRam0000000113835a18 = ppppplVar6;
    ppppplRam0000000113835a20 = unaff_x25;
    ppppplRam0000000113835a28 = unaff_x26;
    FUN_10ac0afc0(&pppplStack_78);
  }
  ppppplRam0000000113835a20 = unaff_x25;
  if (ppppplRam0000000113835a18 == unaff_x25) goto LAB_10ac0f7d8;
  func_0x000107c2b07c(&pppplStack_78,&DAT_10f2ca5ec);
  ppplStack_80 = (long ***)0x1c;
  ppplStack_88 = (long ***)0x4;
  pppplVar10 = unaff_x25[-5];
  if (pppplVar10 < unaff_x25[-4]) {
    pppplVar10[2] = (long ***)pppplStack_68;
    pppplVar10[1] = (long ***)pppplStack_70;
    *pppplVar10 = (long ***)pppplStack_78;
    pppplStack_70 = (long ****)0x0;
    pppplStack_68 = (long ****)0x0;
    pppplStack_78 = (long ****)0x0;
    pppplVar10[3] = (long ***)pppplStack_60;
    pppplVar10[5] = (long ***)0x4;
    pppplVar10[4] = (long ***)0x1c;
    ppppplVar6 = (long *****)(pppplVar10 + 6);
  }
  else {
    ppppplVar6 = unaff_x25 + -6;
    param_3 = (long *****)&ppplStack_80;
    param_4 = (long *****)&ppplStack_88;
    FUN_10ac0f848(ppppplVar6,&pppplStack_78);
  }
  unaff_x25[-5] = (long ****)ppppplVar6;
  if ((long)pppplStack_68 < 0) {
    __ZdlPv(pppplStack_78);
  }
  ppppplVar6 = ppppplRam0000000113835a20;
  if (ppppplRam0000000113835a18 == ppppplRam0000000113835a20) goto LAB_10ac0f7d8;
  func_0x000107c2b07c(&pppplStack_78,&DAT_10f2c46ae);
  ppplStack_80 = (long ***)0x10;
  ppplStack_88 = (long ***)0xc;
  pppplVar10 = ppppplVar6[-5];
  if (pppplVar10 < ppppplVar6[-4]) {
    pppplVar10[2] = (long ***)pppplStack_68;
    pppplVar10[1] = (long ***)pppplStack_70;
    *pppplVar10 = (long ***)pppplStack_78;
    pppplStack_70 = (long ****)0x0;
    pppplStack_68 = (long ****)0x0;
    pppplStack_78 = (long ****)0x0;
    pppplVar10[3] = (long ***)pppplStack_60;
    pppplVar10[5] = (long ***)0xc;
    pppplVar10[4] = (long ***)0x10;
    ppppplVar7 = (long *****)(pppplVar10 + 6);
  }
  else {
    ppppplVar7 = ppppplVar6 + -6;
    param_3 = (long *****)&ppplStack_80;
    param_4 = (long *****)&ppplStack_88;
    FUN_10ac0f848(ppppplVar7,&pppplStack_78);
  }
  ppppplVar6[-5] = (long ****)ppppplVar7;
  if ((long)pppplStack_68 < 0) {
    __ZdlPv(pppplStack_78);
  }
  ppppplVar6 = ppppplRam0000000113835a20;
  if (ppppplRam0000000113835a18 == ppppplRam0000000113835a20) goto LAB_10ac0f7d8;
  func_0x000107c2b07c(&pppplStack_78,&DAT_10f68f0f0);
  ppplStack_88 = (long ***)0xc;
  ppplStack_80 = (long ***)0x0;
  pppplVar10 = ppppplVar6[-5];
  if (pppplVar10 < ppppplVar6[-4]) {
    pppplVar10[2] = (long ***)pppplStack_68;
    pppplVar10[1] = (long ***)pppplStack_70;
    *pppplVar10 = (long ***)pppplStack_78;
    pppplStack_70 = (long ****)0x0;
    pppplStack_68 = (long ****)0x0;
    pppplStack_78 = (long ****)0x0;
    pppplVar10[3] = (long ***)pppplStack_60;
    pppplVar10[5] = (long ***)0xc;
    pppplVar10[4] = (long ***)0x0;
    ppppplVar7 = (long *****)(pppplVar10 + 6);
  }
  else {
    ppppplVar7 = ppppplVar6 + -6;
    param_3 = (long *****)&ppplStack_80;
    param_4 = (long *****)&ppplStack_88;
    FUN_10ac0f848(ppppplVar7,&pppplStack_78);
  }
  ppppplVar6[-5] = (long ****)ppppplVar7;
  if ((long)pppplStack_68 < 0) {
    __ZdlPv(pppplStack_78);
  }
  ppppplVar6 = ppppplRam0000000113835a20;
  if (ppppplRam0000000113835a18 == ppppplRam0000000113835a20) goto LAB_10ac0f7d8;
  func_0x000107c2b07c(&pppplStack_78,&DAT_10f4154b4);
  ppplStack_80 = (long ***)0xc;
  ppplStack_88 = (long ***)0x4;
  pppplVar10 = ppppplVar6[-5];
  if (pppplVar10 < ppppplVar6[-4]) {
    pppplVar10[2] = (long ***)pppplStack_68;
    pppplVar10[1] = (long ***)pppplStack_70;
    *pppplVar10 = (long ***)pppplStack_78;
    pppplStack_70 = (long ****)0x0;
    pppplStack_68 = (long ****)0x0;
    pppplStack_78 = (long ****)0x0;
    pppplVar10[3] = (long ***)pppplStack_60;
    pppplVar10[5] = (long ***)0x4;
    pppplVar10[4] = (long ***)0xc;
    ppppplVar7 = (long *****)(pppplVar10 + 6);
  }
  else {
    ppppplVar7 = ppppplVar6 + -6;
    param_3 = (long *****)&ppplStack_80;
    param_4 = (long *****)&ppplStack_88;
    FUN_10ac0f848(ppppplVar7,&pppplStack_78);
  }
  ppppplVar6[-5] = (long ****)ppppplVar7;
  if ((long)pppplStack_68 < 0) {
    __ZdlPv(pppplStack_78);
  }
  ppppplVar6 = ppppplRam0000000113835a20;
  if (ppppplRam0000000113835a18 == ppppplRam0000000113835a20) goto LAB_10ac0f7d8;
  param_2 = (long *****)&DAT_10f68f0d4;
  func_0x000107c2b07c(&pppplStack_78);
  ppplStack_80 = (long ***)0x20;
  ppplStack_88 = (long ***)0x4;
  pppplVar10 = ppppplVar6[-5];
  if (pppplVar10 < ppppplVar6[-4]) {
    pppplVar10[2] = (long ***)pppplStack_68;
    pppplVar10[1] = (long ***)pppplStack_70;
    *pppplVar10 = (long ***)pppplStack_78;
    pppplStack_70 = (long ****)0x0;
    pppplStack_68 = (long ****)0x0;
    pppplStack_78 = (long ****)0x0;
    pppplVar10[3] = (long ***)pppplStack_60;
    pppplVar10[5] = (long ***)0x4;
    pppplVar10[4] = (long ***)0x20;
    param_1 = (long *****)(pppplVar10 + 6);
  }
  else {
    param_1 = ppppplVar6 + -6;
    param_2 = &pppplStack_78;
    param_3 = (long *****)&ppplStack_80;
    param_4 = (long *****)&ppplStack_88;
    FUN_10ac0f848();
  }
  ppppplVar6[-5] = (long ****)param_1;
  if ((long)pppplStack_68 < 0) {
    param_1 = (long *****)pppplStack_78;
    __ZdlPv();
  }
  ppppplVar6 = ppppplRam0000000113835a28;
  if (ppppplRam0000000113835a20 < ppppplRam0000000113835a28) {
    *ppppplRam0000000113835a20 = (long ****)0xd8000000bb;
    ppppplRam0000000113835a20[2] = (long ****)0xc;
    ppppplRam0000000113835a20[1] = (long ****)0x570;
    *(undefined4 *)(ppppplRam0000000113835a20 + 3) = 0;
    ppppplRam0000000113835a20[5] = (long ****)0x0;
    ppppplRam0000000113835a20[4] = (long ****)0x0;
    ppppplRam0000000113835a20[7] = (long ****)0x0;
    ppppplRam0000000113835a20[6] = (long ****)0x0;
    ppppplRam0000000113835a20[9] = (long ****)0x0;
    ppppplRam0000000113835a20[8] = (long ****)0x0;
    ppppplRam0000000113835a20[0xb] = (long ****)0x0;
    ppppplRam0000000113835a20[10] = (long ****)0x0;
    unaff_x25 = ppppplRam0000000113835a20 + 0xc;
  }
  else {
    lVar12 = (long)ppppplRam0000000113835a20 - (long)ppppplRam0000000113835a18;
    uVar11 = (lVar12 >> 5) * -0x5555555555555555 + 1;
    if (0x2aaaaaaaaaaaaaa < uVar11) goto LAB_10ac0f7dc;
    lVar8 = (long)ppppplRam0000000113835a28 - (long)ppppplRam0000000113835a18 >> 5;
    uVar9 = lVar8 * 0x5555555555555556;
    if (uVar9 < uVar11 || uVar9 - uVar11 == 0) {
      uVar9 = uVar11;
    }
    if (0x155555555555554 < (ulong)(lVar8 * -0x5555555555555555)) {
      uVar9 = uVar13;
    }
    uStack_58 = 0x113835a18;
    lVar8 = lVar15;
    FUN_10a187714();
    puVar1 = (undefined8 *)(lVar8 + lVar12);
    unaff_x26 = (long *****)(lVar8 + uVar9 * 0x60);
    *puVar1 = 0xd8000000bb;
    puVar1[2] = 0xc;
    puVar1[1] = 0x570;
    *(undefined4 *)(puVar1 + 3) = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    unaff_x25 = (long *****)(puVar1 + 0xc);
    ppppplVar14 = (long *****)
                  ((long)puVar1 +
                  ((long)ppppplRam0000000113835a18 - (long)ppppplRam0000000113835a20));
    param_2 = ppppplRam0000000113835a18;
    param_4 = ppppplVar14;
    FUN_10ac0aec8(0x113835a18);
    pppplStack_68 = (long ****)ppppplRam0000000113835a18;
    pppplStack_60 = (long ****)ppppplRam0000000113835a28;
    pppplStack_78 = (long ****)ppppplRam0000000113835a18;
    pppplStack_70 = (long ****)ppppplRam0000000113835a18;
    param_1 = &pppplStack_78;
    ppppplRam0000000113835a18 = ppppplVar14;
    ppppplVar14 = ppppplRam0000000113835a20;
    ppppplRam0000000113835a20 = unaff_x25;
    ppppplRam0000000113835a28 = unaff_x26;
    FUN_10ac0afc0();
    param_3 = ppppplRam0000000113835a20;
    ppppplVar6 = ppppplRam0000000113835a28;
  }
  ppppplVar14 = (long *****)0x113835a20;
  if (unaff_x25 < ppppplVar6) {
    *unaff_x25 = (long ****)0xd8000000bc;
    unaff_x25[2] = (long ****)0x1c;
    unaff_x25[1] = (long ****)0x420;
    *(undefined4 *)(unaff_x25 + 3) = 3;
    unaff_x25[5] = (long ****)0x1828;
    unaff_x25[4] = (long ****)0x0;
    unaff_x25[7] = (long ****)0x0;
    unaff_x25[6] = (long ****)0x0;
    unaff_x25[9] = (long ****)0x0;
    unaff_x25[8] = (long ****)0x0;
    unaff_x25[0xb] = (long ****)0x0;
    unaff_x25[10] = (long ****)0x0;
    unaff_x25 = unaff_x25 + 0xc;
  }
  else {
    lVar12 = (long)unaff_x25 - (long)ppppplRam0000000113835a18;
    uVar11 = (lVar12 >> 5) * -0x5555555555555555 + 1;
    ppppplRam0000000113835a20 = unaff_x25;
    if (0x2aaaaaaaaaaaaaa < uVar11) goto LAB_10ac0f7dc;
    lVar8 = (long)ppppplVar6 - (long)ppppplRam0000000113835a18 >> 5;
    uVar9 = lVar8 * 0x5555555555555556;
    if (uVar9 < uVar11 || uVar9 - uVar11 == 0) {
      uVar9 = uVar11;
    }
    if (0x155555555555554 < (ulong)(lVar8 * -0x5555555555555555)) {
      uVar9 = uVar13;
    }
    uStack_58 = 0x113835a18;
    lVar8 = lVar15;
    FUN_10a187714();
    param_3 = ppppplRam0000000113835a20;
    ppppplVar7 = ppppplRam0000000113835a18;
    puVar1 = (undefined8 *)(lVar8 + lVar12);
    unaff_x26 = (long *****)(lVar8 + uVar9 * 0x60);
    *puVar1 = 0xd8000000bc;
    puVar1[2] = 0x1c;
    puVar1[1] = 0x420;
    *(undefined4 *)(puVar1 + 3) = 3;
    puVar1[5] = 0x1828;
    puVar1[4] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    unaff_x25 = (long *****)(puVar1 + 0xc);
    ppppplVar6 = (long *****)((long)puVar1 + ((long)ppppplVar7 - (long)param_3));
    param_4 = ppppplVar6;
    FUN_10ac0aec8(0x113835a18,ppppplVar7);
    pppplStack_68 = (long ****)ppppplRam0000000113835a18;
    pppplStack_60 = (long ****)ppppplRam0000000113835a28;
    pppplStack_78 = (long ****)ppppplRam0000000113835a18;
    pppplStack_70 = (long ****)ppppplRam0000000113835a18;
    ppppplRam0000000113835a18 = ppppplVar6;
    ppppplRam0000000113835a20 = unaff_x25;
    ppppplRam0000000113835a28 = unaff_x26;
    FUN_10ac0afc0(&pppplStack_78);
  }
  ppppplRam0000000113835a20 = unaff_x25;
  if (ppppplRam0000000113835a18 == unaff_x25) goto LAB_10ac0f7d8;
  func_0x000107c2b07c(&pppplStack_78,&DAT_10f68f0f0);
  ppplStack_88 = (long ***)0xc;
  ppplStack_80 = (long ***)0x0;
  pppplVar10 = unaff_x25[-5];
  if (pppplVar10 < unaff_x25[-4]) {
    pppplVar10[2] = (long ***)pppplStack_68;
    pppplVar10[1] = (long ***)pppplStack_70;
    *pppplVar10 = (long ***)pppplStack_78;
    pppplStack_70 = (long ****)0x0;
    pppplStack_68 = (long ****)0x0;
    pppplStack_78 = (long ****)0x0;
    pppplVar10[3] = (long ***)pppplStack_60;
    pppplVar10[5] = (long ***)0xc;
    pppplVar10[4] = (long ***)0x0;
    ppppplVar6 = (long *****)(pppplVar10 + 6);
  }
  else {
    ppppplVar6 = unaff_x25 + -6;
    param_3 = (long *****)&ppplStack_80;
    param_4 = (long *****)&ppplStack_88;
    FUN_10ac0f848(ppppplVar6,&pppplStack_78);
  }
  unaff_x25[-5] = (long ****)ppppplVar6;
  if ((long)pppplStack_68 < 0) {
    __ZdlPv(pppplStack_78);
  }
  ppppplVar6 = ppppplRam0000000113835a20;
  if (ppppplRam0000000113835a18 == ppppplRam0000000113835a20) goto LAB_10ac0f7d8;
  func_0x000107c2b07c(&pppplStack_78,&UNK_10f640002);
  ppplStack_80 = (long ***)0xc;
  ppplStack_88 = (long ***)0x4;
  pppplVar10 = ppppplVar6[-5];
  if (pppplVar10 < ppppplVar6[-4]) {
    pppplVar10[2] = (long ***)pppplStack_68;
    pppplVar10[1] = (long ***)pppplStack_70;
    *pppplVar10 = (long ***)pppplStack_78;
    pppplStack_70 = (long ****)0x0;
    pppplStack_68 = (long ****)0x0;
    pppplStack_78 = (long ****)0x0;
    pppplVar10[3] = (long ***)pppplStack_60;
    pppplVar10[5] = (long ***)0x4;
    pppplVar10[4] = (long ***)0xc;
    ppppplVar7 = (long *****)(pppplVar10 + 6);
  }
  else {
    ppppplVar7 = ppppplVar6 + -6;
    param_3 = (long *****)&ppplStack_80;
    param_4 = (long *****)&ppplStack_88;
    FUN_10ac0f848(ppppplVar7,&pppplStack_78);
  }
  ppppplVar6[-5] = (long ****)ppppplVar7;
  if ((long)pppplStack_68 < 0) {
    __ZdlPv(pppplStack_78);
  }
  ppppplVar6 = ppppplRam0000000113835a20;
  if (ppppplRam0000000113835a18 == ppppplRam0000000113835a20) goto LAB_10ac0f7d8;
  param_2 = (long *****)&UNK_10f5a3e3a;
  func_0x000107c2b07c(&pppplStack_78);
  ppplStack_80 = (long ***)0x10;
  ppplStack_88 = (long ***)0xc;
  pppplVar10 = ppppplVar6[-5];
  if (pppplVar10 < ppppplVar6[-4]) {
    pppplVar10[2] = (long ***)pppplStack_68;
    pppplVar10[1] = (long ***)pppplStack_70;
    *pppplVar10 = (long ***)pppplStack_78;
    pppplStack_70 = (long ****)0x0;
    pppplStack_68 = (long ****)0x0;
    pppplStack_78 = (long ****)0x0;
    pppplVar10[3] = (long ***)pppplStack_60;
    pppplVar10[5] = (long ***)0xc;
    pppplVar10[4] = (long ***)0x10;
    param_1 = (long *****)(pppplVar10 + 6);
  }
  else {
    param_1 = ppppplVar6 + -6;
    param_2 = &pppplStack_78;
    param_3 = (long *****)&ppplStack_80;
    param_4 = (long *****)&ppplStack_88;
    FUN_10ac0f848();
  }
  ppppplVar6[-5] = (long ****)param_1;
  if ((long)pppplStack_68 < 0) {
    param_1 = (long *****)pppplStack_78;
    __ZdlPv();
  }
  ppppplVar6 = ppppplRam0000000113835a28;
  if (ppppplRam0000000113835a20 < ppppplRam0000000113835a28) {
    *ppppplRam0000000113835a20 = (long ****)0xd8000000bd;
    ppppplRam0000000113835a20[2] = (long ****)0x24;
    ppppplRam0000000113835a20[1] = (long ****)0x1568;
    *(undefined4 *)(ppppplRam0000000113835a20 + 3) = 0;
    ppppplRam0000000113835a20[5] = (long ****)0x0;
    ppppplRam0000000113835a20[4] = (long ****)0x0;
    ppppplRam0000000113835a20[7] = (long ****)0x0;
    ppppplRam0000000113835a20[6] = (long ****)0x0;
    ppppplRam0000000113835a20[9] = (long ****)0x0;
    ppppplRam0000000113835a20[8] = (long ****)0x0;
    ppppplRam0000000113835a20[0xb] = (long ****)0x0;
    ppppplRam0000000113835a20[10] = (long ****)0x0;
    ppppplVar14 = ppppplRam0000000113835a20 + 0xc;
  }
  else {
    lVar12 = (long)ppppplRam0000000113835a20 - (long)ppppplRam0000000113835a18;
    uVar11 = (lVar12 >> 5) * -0x5555555555555555 + 1;
    if (0x2aaaaaaaaaaaaaa < uVar11) goto LAB_10ac0f7dc;
    lVar8 = (long)ppppplRam0000000113835a28 - (long)ppppplRam0000000113835a18 >> 5;
    uVar9 = lVar8 * 0x5555555555555556;
    if (uVar9 < uVar11 || uVar9 - uVar11 == 0) {
      uVar9 = uVar11;
    }
    if (0x155555555555554 < (ulong)(lVar8 * -0x5555555555555555)) {
      uVar9 = uVar13;
    }
    uStack_58 = 0x113835a18;
    lVar8 = lVar15;
    FUN_10a187714();
    puVar1 = (undefined8 *)(lVar8 + lVar12);
    unaff_x25 = (long *****)(lVar8 + uVar9 * 0x60);
    *puVar1 = 0xd8000000bd;
    puVar1[2] = 0x24;
    puVar1[1] = 0x1568;
    *(undefined4 *)(puVar1 + 3) = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    ppppplVar14 = (long *****)(puVar1 + 0xc);
    ppppplVar6 = (long *****)
                 ((long)puVar1 + ((long)ppppplRam0000000113835a18 - (long)ppppplRam0000000113835a20)
                 );
    param_2 = ppppplRam0000000113835a18;
    param_4 = ppppplVar6;
    FUN_10ac0aec8(0x113835a18);
    pppplStack_68 = (long ****)ppppplRam0000000113835a18;
    pppplStack_60 = (long ****)ppppplRam0000000113835a28;
    pppplStack_78 = (long ****)ppppplRam0000000113835a18;
    pppplStack_70 = (long ****)ppppplRam0000000113835a18;
    param_1 = &pppplStack_78;
    ppppplRam0000000113835a18 = ppppplVar6;
    ppppplVar6 = ppppplRam0000000113835a20;
    ppppplRam0000000113835a20 = ppppplVar14;
    ppppplRam0000000113835a28 = unaff_x25;
    FUN_10ac0afc0();
    param_3 = ppppplRam0000000113835a20;
    ppppplVar6 = ppppplRam0000000113835a28;
  }
  if (ppppplVar14 < ppppplVar6) {
    *ppppplVar14 = (long ****)0xd8000000be;
    ppppplVar14[2] = (long ****)0x10;
    ppppplVar14[1] = (long ****)0x158c;
    *(undefined4 *)(ppppplVar14 + 3) = 0;
    ppppplVar14[5] = (long ****)0x0;
    ppppplVar14[4] = (long ****)0x0;
    ppppplVar14[7] = (long ****)0x0;
    ppppplVar14[6] = (long ****)0x0;
    ppppplVar14[9] = (long ****)0x0;
    ppppplVar14[8] = (long ****)0x0;
    ppppplVar14[0xb] = (long ****)0x0;
    ppppplVar14[10] = (long ****)0x0;
    ppppplVar14 = ppppplVar14 + 0xc;
  }
  else {
    lVar12 = (long)ppppplVar14 - (long)ppppplRam0000000113835a18;
    uVar11 = (lVar12 >> 5) * -0x5555555555555555 + 1;
    ppppplRam0000000113835a20 = ppppplVar14;
    if (0x2aaaaaaaaaaaaaa < uVar11) goto LAB_10ac0f7dc;
    lVar8 = (long)ppppplVar6 - (long)ppppplRam0000000113835a18 >> 5;
    uVar9 = lVar8 * 0x5555555555555556;
    if (uVar9 < uVar11 || uVar9 - uVar11 == 0) {
      uVar9 = uVar11;
    }
    if (0x155555555555554 < (ulong)(lVar8 * -0x5555555555555555)) {
      uVar9 = uVar13;
    }
    uStack_58 = 0x113835a18;
    lVar8 = lVar15;
    FUN_10a187714();
    puVar1 = (undefined8 *)(lVar8 + lVar12);
    unaff_x25 = (long *****)(lVar8 + uVar9 * 0x60);
    *puVar1 = 0xd8000000be;
    puVar1[2] = 0x10;
    puVar1[1] = 0x158c;
    *(undefined4 *)(puVar1 + 3) = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    ppppplVar14 = (long *****)(puVar1 + 0xc);
    ppppplVar6 = (long *****)
                 ((long)puVar1 + ((long)ppppplRam0000000113835a18 - (long)ppppplRam0000000113835a20)
                 );
    param_2 = ppppplRam0000000113835a18;
    param_4 = ppppplVar6;
    FUN_10ac0aec8(0x113835a18);
    pppplStack_68 = (long ****)ppppplRam0000000113835a18;
    pppplStack_60 = (long ****)ppppplRam0000000113835a28;
    pppplStack_78 = (long ****)ppppplRam0000000113835a18;
    pppplStack_70 = (long ****)ppppplRam0000000113835a18;
    param_1 = &pppplStack_78;
    ppppplRam0000000113835a18 = ppppplVar6;
    ppppplVar6 = ppppplRam0000000113835a20;
    ppppplRam0000000113835a20 = ppppplVar14;
    ppppplRam0000000113835a28 = unaff_x25;
    FUN_10ac0afc0();
    param_3 = ppppplRam0000000113835a20;
    ppppplVar6 = ppppplRam0000000113835a28;
  }
  if (ppppplVar14 < ppppplVar6) {
    *ppppplVar14 = (long ****)0xd8000000bf;
    ppppplVar14[2] = (long ****)0x10;
    ppppplVar14[1] = (long ****)0x15a4;
    *(undefined4 *)(ppppplVar14 + 3) = 0;
    ppppplVar14[5] = (long ****)0x0;
    ppppplVar14[4] = (long ****)0x0;
    ppppplVar14[7] = (long ****)0x0;
    ppppplVar14[6] = (long ****)0x0;
    ppppplVar14[9] = (long ****)0x0;
    ppppplVar14[8] = (long ****)0x0;
    ppppplVar14[0xb] = (long ****)0x0;
    ppppplVar14[10] = (long ****)0x0;
    ppppplVar14 = ppppplVar14 + 0xc;
  }
  else {
    lVar12 = (long)ppppplVar14 - (long)ppppplRam0000000113835a18;
    uVar11 = (lVar12 >> 5) * -0x5555555555555555 + 1;
    ppppplRam0000000113835a20 = ppppplVar14;
    if (0x2aaaaaaaaaaaaaa < uVar11) goto LAB_10ac0f7dc;
    lVar8 = (long)ppppplVar6 - (long)ppppplRam0000000113835a18 >> 5;
    uVar9 = lVar8 * 0x5555555555555556;
    if (uVar9 < uVar11 || uVar9 - uVar11 == 0) {
      uVar9 = uVar11;
    }
    if (0x155555555555554 < (ulong)(lVar8 * -0x5555555555555555)) {
      uVar9 = uVar13;
    }
    uStack_58 = 0x113835a18;
    lVar8 = lVar15;
    FUN_10a187714();
    puVar1 = (undefined8 *)(lVar8 + lVar12);
    unaff_x25 = (long *****)(lVar8 + uVar9 * 0x60);
    *puVar1 = 0xd8000000bf;
    puVar1[2] = 0x10;
    puVar1[1] = 0x15a4;
    *(undefined4 *)(puVar1 + 3) = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    ppppplVar14 = (long *****)(puVar1 + 0xc);
    ppppplVar6 = (long *****)
                 ((long)puVar1 + ((long)ppppplRam0000000113835a18 - (long)ppppplRam0000000113835a20)
                 );
    param_2 = ppppplRam0000000113835a18;
    param_4 = ppppplVar6;
    FUN_10ac0aec8(0x113835a18);
    pppplStack_68 = (long ****)ppppplRam0000000113835a18;
    pppplStack_60 = (long ****)ppppplRam0000000113835a28;
    pppplStack_78 = (long ****)ppppplRam0000000113835a18;
    pppplStack_70 = (long ****)ppppplRam0000000113835a18;
    param_1 = &pppplStack_78;
    ppppplRam0000000113835a18 = ppppplVar6;
    ppppplVar6 = ppppplRam0000000113835a20;
    ppppplRam0000000113835a20 = ppppplVar14;
    ppppplRam0000000113835a28 = unaff_x25;
    FUN_10ac0afc0();
    param_3 = ppppplRam0000000113835a20;
    ppppplVar6 = ppppplRam0000000113835a28;
  }
  if (ppppplVar14 < ppppplVar6) {
    *ppppplVar14 = (long ****)0xd8000000c0;
    ppppplVar14[2] = (long ****)0x10;
    ppppplVar14[1] = (long ****)0x15b4;
    *(undefined4 *)(ppppplVar14 + 3) = 0;
    ppppplVar14[5] = (long ****)0x0;
    ppppplVar14[4] = (long ****)0x0;
    ppppplVar14[7] = (long ****)0x0;
    ppppplVar14[6] = (long ****)0x0;
    ppppplVar14[9] = (long ****)0x0;
    ppppplVar14[8] = (long ****)0x0;
    ppppplVar14[0xb] = (long ****)0x0;
    ppppplVar14[10] = (long ****)0x0;
    ppppplVar14 = ppppplVar14 + 0xc;
  }
  else {
    lVar12 = (long)ppppplVar14 - (long)ppppplRam0000000113835a18;
    uVar11 = (lVar12 >> 5) * -0x5555555555555555 + 1;
    ppppplRam0000000113835a20 = ppppplVar14;
    if (0x2aaaaaaaaaaaaaa < uVar11) goto LAB_10ac0f7dc;
    lVar8 = (long)ppppplVar6 - (long)ppppplRam0000000113835a18 >> 5;
    uVar9 = lVar8 * 0x5555555555555556;
    if (uVar9 < uVar11 || uVar9 - uVar11 == 0) {
      uVar9 = uVar11;
    }
    if (0x155555555555554 < (ulong)(lVar8 * -0x5555555555555555)) {
      uVar9 = uVar13;
    }
    uStack_58 = 0x113835a18;
    lVar8 = lVar15;
    FUN_10a187714();
    puVar1 = (undefined8 *)(lVar8 + lVar12);
    unaff_x25 = (long *****)(lVar8 + uVar9 * 0x60);
    *puVar1 = 0xd8000000c0;
    puVar1[2] = 0x10;
    puVar1[1] = 0x15b4;
    *(undefined4 *)(puVar1 + 3) = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    ppppplVar14 = (long *****)(puVar1 + 0xc);
    ppppplVar6 = (long *****)
                 ((long)puVar1 + ((long)ppppplRam0000000113835a18 - (long)ppppplRam0000000113835a20)
                 );
    param_2 = ppppplRam0000000113835a18;
    param_4 = ppppplVar6;
    FUN_10ac0aec8(0x113835a18);
    pppplStack_68 = (long ****)ppppplRam0000000113835a18;
    pppplStack_60 = (long ****)ppppplRam0000000113835a28;
    pppplStack_78 = (long ****)ppppplRam0000000113835a18;
    pppplStack_70 = (long ****)ppppplRam0000000113835a18;
    param_1 = &pppplStack_78;
    ppppplRam0000000113835a18 = ppppplVar6;
    ppppplVar6 = ppppplRam0000000113835a20;
    ppppplRam0000000113835a20 = ppppplVar14;
    ppppplRam0000000113835a28 = unaff_x25;
    FUN_10ac0afc0();
    param_3 = ppppplRam0000000113835a20;
    ppppplVar6 = ppppplRam0000000113835a28;
  }
  if (ppppplVar14 < ppppplVar6) {
    *ppppplVar14 = (long ****)0xd8000000c1;
    ppppplVar14[2] = (long ****)0x10;
    ppppplVar14[1] = (long ****)0x15c4;
    *(undefined4 *)(ppppplVar14 + 3) = 0;
    ppppplVar14[5] = (long ****)0x0;
    ppppplVar14[4] = (long ****)0x0;
    ppppplVar14[7] = (long ****)0x0;
    ppppplVar14[6] = (long ****)0x0;
    ppppplVar14[9] = (long ****)0x0;
    ppppplVar14[8] = (long ****)0x0;
    ppppplVar14[0xb] = (long ****)0x0;
    ppppplVar14[10] = (long ****)0x0;
    ppppplVar14 = ppppplVar14 + 0xc;
  }
  else {
    lVar12 = (long)ppppplVar14 - (long)ppppplRam0000000113835a18;
    uVar11 = (lVar12 >> 5) * -0x5555555555555555 + 1;
    ppppplRam0000000113835a20 = ppppplVar14;
    if (0x2aaaaaaaaaaaaaa < uVar11) goto LAB_10ac0f7dc;
    lVar8 = (long)ppppplVar6 - (long)ppppplRam0000000113835a18 >> 5;
    uVar9 = lVar8 * 0x5555555555555556;
    if (uVar9 < uVar11 || uVar9 - uVar11 == 0) {
      uVar9 = uVar11;
    }
    if (0x155555555555554 < (ulong)(lVar8 * -0x5555555555555555)) {
      uVar9 = uVar13;
    }
    uStack_58 = 0x113835a18;
    lVar8 = lVar15;
    FUN_10a187714();
    puVar1 = (undefined8 *)(lVar8 + lVar12);
    unaff_x25 = (long *****)(lVar8 + uVar9 * 0x60);
    *puVar1 = 0xd8000000c1;
    puVar1[2] = 0x10;
    puVar1[1] = 0x15c4;
    *(undefined4 *)(puVar1 + 3) = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    ppppplVar14 = (long *****)(puVar1 + 0xc);
    ppppplVar6 = (long *****)
                 ((long)puVar1 + ((long)ppppplRam0000000113835a18 - (long)ppppplRam0000000113835a20)
                 );
    param_2 = ppppplRam0000000113835a18;
    param_4 = ppppplVar6;
    FUN_10ac0aec8(0x113835a18);
    pppplStack_68 = (long ****)ppppplRam0000000113835a18;
    pppplStack_60 = (long ****)ppppplRam0000000113835a28;
    pppplStack_78 = (long ****)ppppplRam0000000113835a18;
    pppplStack_70 = (long ****)ppppplRam0000000113835a18;
    param_1 = &pppplStack_78;
    ppppplRam0000000113835a18 = ppppplVar6;
    ppppplVar6 = ppppplRam0000000113835a20;
    ppppplRam0000000113835a20 = ppppplVar14;
    ppppplRam0000000113835a28 = unaff_x25;
    FUN_10ac0afc0();
    param_3 = ppppplRam0000000113835a20;
    ppppplVar6 = ppppplRam0000000113835a28;
  }
  if (ppppplVar14 < ppppplVar6) {
    *ppppplVar14 = (long ****)0xd8000000c2;
    ppppplVar14[2] = (long ****)0x8;
    ppppplVar14[1] = (long ****)0x15e4;
    *(undefined4 *)(ppppplVar14 + 3) = 0;
    ppppplVar14[5] = (long ****)0x0;
    ppppplVar14[4] = (long ****)0x0;
    ppppplVar14[7] = (long ****)0x0;
    ppppplVar14[6] = (long ****)0x0;
    ppppplVar14[9] = (long ****)0x0;
    ppppplVar14[8] = (long ****)0x0;
    ppppplVar14[0xb] = (long ****)0x0;
    ppppplVar14[10] = (long ****)0x0;
    ppppplVar14 = ppppplVar14 + 0xc;
  }
  else {
    lVar12 = (long)ppppplVar14 - (long)ppppplRam0000000113835a18;
    uVar11 = (lVar12 >> 5) * -0x5555555555555555 + 1;
    ppppplRam0000000113835a20 = ppppplVar14;
    if (0x2aaaaaaaaaaaaaa < uVar11) goto LAB_10ac0f7dc;
    lVar8 = (long)ppppplVar6 - (long)ppppplRam0000000113835a18 >> 5;
    uVar9 = lVar8 * 0x5555555555555556;
    if (uVar9 < uVar11 || uVar9 - uVar11 == 0) {
      uVar9 = uVar11;
    }
    if (0x155555555555554 < (ulong)(lVar8 * -0x5555555555555555)) {
      uVar9 = uVar13;
    }
    uStack_58 = 0x113835a18;
    lVar8 = lVar15;
    FUN_10a187714();
    puVar1 = (undefined8 *)(lVar8 + lVar12);
    unaff_x25 = (long *****)(lVar8 + uVar9 * 0x60);
    *puVar1 = 0xd8000000c2;
    puVar1[2] = 8;
    puVar1[1] = 0x15e4;
    *(undefined4 *)(puVar1 + 3) = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    ppppplVar14 = (long *****)(puVar1 + 0xc);
    ppppplVar6 = (long *****)
                 ((long)puVar1 + ((long)ppppplRam0000000113835a18 - (long)ppppplRam0000000113835a20)
                 );
    param_2 = ppppplRam0000000113835a18;
    param_4 = ppppplVar6;
    FUN_10ac0aec8(0x113835a18);
    pppplStack_68 = (long ****)ppppplRam0000000113835a18;
    pppplStack_60 = (long ****)ppppplRam0000000113835a28;
    pppplStack_78 = (long ****)ppppplRam0000000113835a18;
    pppplStack_70 = (long ****)ppppplRam0000000113835a18;
    param_1 = &pppplStack_78;
    ppppplRam0000000113835a18 = ppppplVar6;
    ppppplVar6 = ppppplRam0000000113835a20;
    ppppplRam0000000113835a20 = ppppplVar14;
    ppppplRam0000000113835a28 = unaff_x25;
    FUN_10ac0afc0();
    param_3 = ppppplRam0000000113835a20;
    ppppplVar6 = ppppplRam0000000113835a28;
  }
  if (ppppplVar14 < ppppplVar6) {
    *ppppplVar14 = (long ****)0xd8000000c3;
    ppppplVar14[2] = (long ****)0x10;
    ppppplVar14[1] = (long ****)0x15ec;
    *(undefined4 *)(ppppplVar14 + 3) = 0;
    ppppplVar14[5] = (long ****)0x0;
    ppppplVar14[4] = (long ****)0x0;
    ppppplVar14[7] = (long ****)0x0;
    ppppplVar14[6] = (long ****)0x0;
    ppppplVar14[9] = (long ****)0x0;
    ppppplVar14[8] = (long ****)0x0;
    ppppplVar14[0xb] = (long ****)0x0;
    ppppplVar14[10] = (long ****)0x0;
    ppppplVar14 = ppppplVar14 + 0xc;
  }
  else {
    lVar12 = (long)ppppplVar14 - (long)ppppplRam0000000113835a18;
    uVar11 = (lVar12 >> 5) * -0x5555555555555555 + 1;
    ppppplRam0000000113835a20 = ppppplVar14;
    if (0x2aaaaaaaaaaaaaa < uVar11) goto LAB_10ac0f7dc;
    lVar8 = (long)ppppplVar6 - (long)ppppplRam0000000113835a18 >> 5;
    uVar9 = lVar8 * 0x5555555555555556;
    if (uVar9 < uVar11 || uVar9 - uVar11 == 0) {
      uVar9 = uVar11;
    }
    if (0x155555555555554 < (ulong)(lVar8 * -0x5555555555555555)) {
      uVar9 = uVar13;
    }
    uStack_58 = 0x113835a18;
    lVar8 = lVar15;
    FUN_10a187714();
    puVar1 = (undefined8 *)(lVar8 + lVar12);
    unaff_x25 = (long *****)(lVar8 + uVar9 * 0x60);
    *puVar1 = 0xd8000000c3;
    puVar1[2] = 0x10;
    puVar1[1] = 0x15ec;
    *(undefined4 *)(puVar1 + 3) = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    ppppplVar14 = (long *****)(puVar1 + 0xc);
    ppppplVar6 = (long *****)
                 ((long)puVar1 + ((long)ppppplRam0000000113835a18 - (long)ppppplRam0000000113835a20)
                 );
    param_2 = ppppplRam0000000113835a18;
    param_4 = ppppplVar6;
    FUN_10ac0aec8(0x113835a18);
    pppplStack_68 = (long ****)ppppplRam0000000113835a18;
    pppplStack_60 = (long ****)ppppplRam0000000113835a28;
    pppplStack_78 = (long ****)ppppplRam0000000113835a18;
    pppplStack_70 = (long ****)ppppplRam0000000113835a18;
    param_1 = &pppplStack_78;
    ppppplRam0000000113835a18 = ppppplVar6;
    ppppplVar6 = ppppplRam0000000113835a20;
    ppppplRam0000000113835a20 = ppppplVar14;
    ppppplRam0000000113835a28 = unaff_x25;
    FUN_10ac0afc0();
    param_3 = ppppplRam0000000113835a20;
    ppppplVar6 = ppppplRam0000000113835a28;
  }
  if (ppppplVar14 < ppppplVar6) {
    *ppppplVar14 = (long ****)0xd8000000c4;
    ppppplVar14[2] = (long ****)0x10;
    ppppplVar14[1] = (long ****)0x15fc;
    *(undefined4 *)(ppppplVar14 + 3) = 0;
    ppppplVar14[5] = (long ****)0x0;
    ppppplVar14[4] = (long ****)0x0;
    ppppplVar14[7] = (long ****)0x0;
    ppppplVar14[6] = (long ****)0x0;
    ppppplVar14[9] = (long ****)0x0;
    ppppplVar14[8] = (long ****)0x0;
    ppppplVar14[0xb] = (long ****)0x0;
    ppppplVar14[10] = (long ****)0x0;
    ppppplVar14 = ppppplVar14 + 0xc;
  }
  else {
    lVar12 = (long)ppppplVar14 - (long)ppppplRam0000000113835a18;
    uVar11 = (lVar12 >> 5) * -0x5555555555555555 + 1;
    ppppplRam0000000113835a20 = ppppplVar14;
    if (0x2aaaaaaaaaaaaaa < uVar11) goto LAB_10ac0f7dc;
    lVar8 = (long)ppppplVar6 - (long)ppppplRam0000000113835a18 >> 5;
    uVar9 = lVar8 * 0x5555555555555556;
    if (uVar9 < uVar11 || uVar9 - uVar11 == 0) {
      uVar9 = uVar11;
    }
    if (0x155555555555554 < (ulong)(lVar8 * -0x5555555555555555)) {
      uVar9 = uVar13;
    }
    uStack_58 = 0x113835a18;
    lVar8 = lVar15;
    FUN_10a187714();
    puVar1 = (undefined8 *)(lVar8 + lVar12);
    unaff_x25 = (long *****)(lVar8 + uVar9 * 0x60);
    *puVar1 = 0xd8000000c4;
    puVar1[2] = 0x10;
    puVar1[1] = 0x15fc;
    *(undefined4 *)(puVar1 + 3) = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    ppppplVar14 = (long *****)(puVar1 + 0xc);
    ppppplVar6 = (long *****)
                 ((long)puVar1 + ((long)ppppplRam0000000113835a18 - (long)ppppplRam0000000113835a20)
                 );
    param_2 = ppppplRam0000000113835a18;
    param_4 = ppppplVar6;
    FUN_10ac0aec8(0x113835a18);
    pppplStack_68 = (long ****)ppppplRam0000000113835a18;
    pppplStack_60 = (long ****)ppppplRam0000000113835a28;
    pppplStack_78 = (long ****)ppppplRam0000000113835a18;
    pppplStack_70 = (long ****)ppppplRam0000000113835a18;
    param_1 = &pppplStack_78;
    ppppplRam0000000113835a18 = ppppplVar6;
    ppppplVar6 = ppppplRam0000000113835a20;
    ppppplRam0000000113835a20 = ppppplVar14;
    ppppplRam0000000113835a28 = unaff_x25;
    FUN_10ac0afc0();
    param_3 = ppppplRam0000000113835a20;
    ppppplVar6 = ppppplRam0000000113835a28;
  }
  if (ppppplVar14 < ppppplVar6) {
    *ppppplVar14 = (long ****)0xd8000000c5;
    ppppplVar14[2] = (long ****)0x10;
    ppppplVar14[1] = (long ****)0x15d4;
    *(undefined4 *)(ppppplVar14 + 3) = 0;
    ppppplVar14[5] = (long ****)0x0;
    ppppplVar14[4] = (long ****)0x0;
    ppppplVar14[7] = (long ****)0x0;
    ppppplVar14[6] = (long ****)0x0;
    ppppplVar14[9] = (long ****)0x0;
    ppppplVar14[8] = (long ****)0x0;
    ppppplVar14[0xb] = (long ****)0x0;
    ppppplVar14[10] = (long ****)0x0;
    ppppplVar14 = ppppplVar14 + 0xc;
  }
  else {
    lVar12 = (long)ppppplVar14 - (long)ppppplRam0000000113835a18;
    uVar11 = (lVar12 >> 5) * -0x5555555555555555 + 1;
    ppppplRam0000000113835a20 = ppppplVar14;
    if (0x2aaaaaaaaaaaaaa < uVar11) goto LAB_10ac0f7dc;
    lVar8 = (long)ppppplVar6 - (long)ppppplRam0000000113835a18 >> 5;
    uVar9 = lVar8 * 0x5555555555555556;
    if (uVar9 < uVar11 || uVar9 - uVar11 == 0) {
      uVar9 = uVar11;
    }
    if (0x155555555555554 < (ulong)(lVar8 * -0x5555555555555555)) {
      uVar9 = uVar13;
    }
    uStack_58 = 0x113835a18;
    lVar8 = lVar15;
    FUN_10a187714();
    puVar1 = (undefined8 *)(lVar8 + lVar12);
    unaff_x25 = (long *****)(lVar8 + uVar9 * 0x60);
    *puVar1 = 0xd8000000c5;
    puVar1[2] = 0x10;
    puVar1[1] = 0x15d4;
    *(undefined4 *)(puVar1 + 3) = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    ppppplVar14 = (long *****)(puVar1 + 0xc);
    ppppplVar6 = (long *****)
                 ((long)puVar1 + ((long)ppppplRam0000000113835a18 - (long)ppppplRam0000000113835a20)
                 );
    param_2 = ppppplRam0000000113835a18;
    param_4 = ppppplVar6;
    FUN_10ac0aec8(0x113835a18);
    pppplStack_68 = (long ****)ppppplRam0000000113835a18;
    pppplStack_60 = (long ****)ppppplRam0000000113835a28;
    pppplStack_78 = (long ****)ppppplRam0000000113835a18;
    pppplStack_70 = (long ****)ppppplRam0000000113835a18;
    param_1 = &pppplStack_78;
    ppppplRam0000000113835a18 = ppppplVar6;
    ppppplVar6 = ppppplRam0000000113835a20;
    ppppplRam0000000113835a20 = ppppplVar14;
    ppppplRam0000000113835a28 = unaff_x25;
    FUN_10ac0afc0();
    param_3 = ppppplRam0000000113835a20;
    ppppplVar6 = ppppplRam0000000113835a28;
  }
  if (ppppplVar14 < ppppplVar6) {
    *ppppplVar14 = (long ****)0xd8000000c6;
    ppppplVar14[2] = (long ****)0x24;
    ppppplVar14[1] = (long ****)0x1660;
    *(undefined4 *)(ppppplVar14 + 3) = 0;
    ppppplVar14[5] = (long ****)0x0;
    ppppplVar14[4] = (long ****)0x0;
    ppppplVar14[7] = (long ****)0x0;
    ppppplVar14[6] = (long ****)0x0;
    ppppplVar14[9] = (long ****)0x0;
    ppppplVar14[8] = (long ****)0x0;
    ppppplVar14[0xb] = (long ****)0x0;
    ppppplVar14[10] = (long ****)0x0;
    ppppplVar14 = ppppplVar14 + 0xc;
  }
  else {
    lVar12 = (long)ppppplVar14 - (long)ppppplRam0000000113835a18;
    uVar11 = (lVar12 >> 5) * -0x5555555555555555 + 1;
    ppppplRam0000000113835a20 = ppppplVar14;
    if (0x2aaaaaaaaaaaaaa < uVar11) goto LAB_10ac0f7dc;
    lVar8 = (long)ppppplVar6 - (long)ppppplRam0000000113835a18 >> 5;
    uVar9 = lVar8 * 0x5555555555555556;
    if (uVar9 < uVar11 || uVar9 - uVar11 == 0) {
      uVar9 = uVar11;
    }
    if (0x155555555555554 < (ulong)(lVar8 * -0x5555555555555555)) {
      uVar9 = uVar13;
    }
    uStack_58 = 0x113835a18;
    lVar8 = lVar15;
    FUN_10a187714();
    puVar1 = (undefined8 *)(lVar8 + lVar12);
    unaff_x25 = (long *****)(lVar8 + uVar9 * 0x60);
    *puVar1 = 0xd8000000c6;
    puVar1[2] = 0x24;
    puVar1[1] = 0x1660;
    *(undefined4 *)(puVar1 + 3) = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    ppppplVar14 = (long *****)(puVar1 + 0xc);
    ppppplVar6 = (long *****)
                 ((long)puVar1 + ((long)ppppplRam0000000113835a18 - (long)ppppplRam0000000113835a20)
                 );
    param_2 = ppppplRam0000000113835a18;
    param_4 = ppppplVar6;
    FUN_10ac0aec8(0x113835a18);
    pppplStack_68 = (long ****)ppppplRam0000000113835a18;
    pppplStack_60 = (long ****)ppppplRam0000000113835a28;
    pppplStack_78 = (long ****)ppppplRam0000000113835a18;
    pppplStack_70 = (long ****)ppppplRam0000000113835a18;
    param_1 = &pppplStack_78;
    ppppplRam0000000113835a18 = ppppplVar6;
    ppppplVar6 = ppppplRam0000000113835a20;
    ppppplRam0000000113835a20 = ppppplVar14;
    ppppplRam0000000113835a28 = unaff_x25;
    FUN_10ac0afc0();
    param_3 = ppppplRam0000000113835a20;
    ppppplVar6 = ppppplRam0000000113835a28;
  }
  if (ppppplVar14 < ppppplVar6) {
    *ppppplVar14 = (long ****)0xd8000000c7;
    ppppplVar14[2] = (long ****)0x10;
    ppppplVar14[1] = (long ****)0x1684;
    *(undefined4 *)(ppppplVar14 + 3) = 0;
    ppppplVar14[5] = (long ****)0x0;
    ppppplVar14[4] = (long ****)0x0;
    ppppplVar14[7] = (long ****)0x0;
    ppppplVar14[6] = (long ****)0x0;
    ppppplVar14[9] = (long ****)0x0;
    ppppplVar14[8] = (long ****)0x0;
    ppppplVar14[0xb] = (long ****)0x0;
    ppppplVar14[10] = (long ****)0x0;
    ppppplVar14 = ppppplVar14 + 0xc;
  }
  else {
    lVar12 = (long)ppppplVar14 - (long)ppppplRam0000000113835a18;
    uVar11 = (lVar12 >> 5) * -0x5555555555555555 + 1;
    ppppplRam0000000113835a20 = ppppplVar14;
    if (0x2aaaaaaaaaaaaaa < uVar11) goto LAB_10ac0f7dc;
    lVar8 = (long)ppppplVar6 - (long)ppppplRam0000000113835a18 >> 5;
    uVar9 = lVar8 * 0x5555555555555556;
    if (uVar9 < uVar11 || uVar9 - uVar11 == 0) {
      uVar9 = uVar11;
    }
    if (0x155555555555554 < (ulong)(lVar8 * -0x5555555555555555)) {
      uVar9 = uVar13;
    }
    uStack_58 = 0x113835a18;
    lVar8 = lVar15;
    FUN_10a187714();
    puVar1 = (undefined8 *)(lVar8 + lVar12);
    unaff_x25 = (long *****)(lVar8 + uVar9 * 0x60);
    *puVar1 = 0xd8000000c7;
    puVar1[2] = 0x10;
    puVar1[1] = 0x1684;
    *(undefined4 *)(puVar1 + 3) = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    ppppplVar14 = (long *****)(puVar1 + 0xc);
    ppppplVar6 = (long *****)
                 ((long)puVar1 + ((long)ppppplRam0000000113835a18 - (long)ppppplRam0000000113835a20)
                 );
    param_2 = ppppplRam0000000113835a18;
    param_4 = ppppplVar6;
    FUN_10ac0aec8(0x113835a18);
    pppplStack_68 = (long ****)ppppplRam0000000113835a18;
    pppplStack_60 = (long ****)ppppplRam0000000113835a28;
    pppplStack_78 = (long ****)ppppplRam0000000113835a18;
    pppplStack_70 = (long ****)ppppplRam0000000113835a18;
    param_1 = &pppplStack_78;
    ppppplRam0000000113835a18 = ppppplVar6;
    ppppplVar6 = ppppplRam0000000113835a20;
    ppppplRam0000000113835a20 = ppppplVar14;
    ppppplRam0000000113835a28 = unaff_x25;
    FUN_10ac0afc0();
    param_3 = ppppplRam0000000113835a20;
    ppppplVar6 = ppppplRam0000000113835a28;
  }
  if (ppppplVar14 < ppppplVar6) {
    *ppppplVar14 = (long ****)0xd8000000c8;
    ppppplVar14[2] = (long ****)0x10;
    ppppplVar14[1] = (long ****)0x169c;
    *(undefined4 *)(ppppplVar14 + 3) = 0;
    ppppplVar14[5] = (long ****)0x0;
    ppppplVar14[4] = (long ****)0x0;
    ppppplVar14[7] = (long ****)0x0;
    ppppplVar14[6] = (long ****)0x0;
    ppppplVar14[9] = (long ****)0x0;
    ppppplVar14[8] = (long ****)0x0;
    ppppplVar14[0xb] = (long ****)0x0;
    ppppplVar14[10] = (long ****)0x0;
    ppppplVar14 = ppppplVar14 + 0xc;
  }
  else {
    lVar12 = (long)ppppplVar14 - (long)ppppplRam0000000113835a18;
    uVar11 = (lVar12 >> 5) * -0x5555555555555555 + 1;
    ppppplRam0000000113835a20 = ppppplVar14;
    if (0x2aaaaaaaaaaaaaa < uVar11) goto LAB_10ac0f7dc;
    lVar8 = (long)ppppplVar6 - (long)ppppplRam0000000113835a18 >> 5;
    uVar9 = lVar8 * 0x5555555555555556;
    if (uVar9 < uVar11 || uVar9 - uVar11 == 0) {
      uVar9 = uVar11;
    }
    if (0x155555555555554 < (ulong)(lVar8 * -0x5555555555555555)) {
      uVar9 = uVar13;
    }
    uStack_58 = 0x113835a18;
    lVar8 = lVar15;
    FUN_10a187714();
    puVar1 = (undefined8 *)(lVar8 + lVar12);
    unaff_x25 = (long *****)(lVar8 + uVar9 * 0x60);
    *puVar1 = 0xd8000000c8;
    puVar1[2] = 0x10;
    puVar1[1] = 0x169c;
    *(undefined4 *)(puVar1 + 3) = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    ppppplVar14 = (long *****)(puVar1 + 0xc);
    ppppplVar6 = (long *****)
                 ((long)puVar1 + ((long)ppppplRam0000000113835a18 - (long)ppppplRam0000000113835a20)
                 );
    param_2 = ppppplRam0000000113835a18;
    param_4 = ppppplVar6;
    FUN_10ac0aec8(0x113835a18);
    pppplStack_68 = (long ****)ppppplRam0000000113835a18;
    pppplStack_60 = (long ****)ppppplRam0000000113835a28;
    pppplStack_78 = (long ****)ppppplRam0000000113835a18;
    pppplStack_70 = (long ****)ppppplRam0000000113835a18;
    param_1 = &pppplStack_78;
    ppppplRam0000000113835a18 = ppppplVar6;
    ppppplVar6 = ppppplRam0000000113835a20;
    ppppplRam0000000113835a20 = ppppplVar14;
    ppppplRam0000000113835a28 = unaff_x25;
    FUN_10ac0afc0();
    param_3 = ppppplRam0000000113835a20;
    ppppplVar6 = ppppplRam0000000113835a28;
  }
  if (ppppplVar14 < ppppplVar6) {
    *ppppplVar14 = (long ****)0xd8000000c9;
    ppppplVar14[2] = (long ****)0x10;
    ppppplVar14[1] = (long ****)0x16ac;
    *(undefined4 *)(ppppplVar14 + 3) = 0;
    ppppplVar14[5] = (long ****)0x0;
    ppppplVar14[4] = (long ****)0x0;
    ppppplVar14[7] = (long ****)0x0;
    ppppplVar14[6] = (long ****)0x0;
    ppppplVar14[9] = (long ****)0x0;
    ppppplVar14[8] = (long ****)0x0;
    ppppplVar14[0xb] = (long ****)0x0;
    ppppplVar14[10] = (long ****)0x0;
    ppppplVar14 = ppppplVar14 + 0xc;
  }
  else {
    lVar12 = (long)ppppplVar14 - (long)ppppplRam0000000113835a18;
    uVar11 = (lVar12 >> 5) * -0x5555555555555555 + 1;
    ppppplRam0000000113835a20 = ppppplVar14;
    if (0x2aaaaaaaaaaaaaa < uVar11) goto LAB_10ac0f7dc;
    lVar8 = (long)ppppplVar6 - (long)ppppplRam0000000113835a18 >> 5;
    uVar9 = lVar8 * 0x5555555555555556;
    if (uVar9 < uVar11 || uVar9 - uVar11 == 0) {
      uVar9 = uVar11;
    }
    if (0x155555555555554 < (ulong)(lVar8 * -0x5555555555555555)) {
      uVar9 = uVar13;
    }
    uStack_58 = 0x113835a18;
    lVar8 = lVar15;
    FUN_10a187714();
    puVar1 = (undefined8 *)(lVar8 + lVar12);
    unaff_x25 = (long *****)(lVar8 + uVar9 * 0x60);
    *puVar1 = 0xd8000000c9;
    puVar1[2] = 0x10;
    puVar1[1] = 0x16ac;
    *(undefined4 *)(puVar1 + 3) = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    ppppplVar14 = (long *****)(puVar1 + 0xc);
    ppppplVar6 = (long *****)
                 ((long)puVar1 + ((long)ppppplRam0000000113835a18 - (long)ppppplRam0000000113835a20)
                 );
    param_2 = ppppplRam0000000113835a18;
    param_4 = ppppplVar6;
    FUN_10ac0aec8(0x113835a18);
    pppplStack_68 = (long ****)ppppplRam0000000113835a18;
    pppplStack_60 = (long ****)ppppplRam0000000113835a28;
    pppplStack_78 = (long ****)ppppplRam0000000113835a18;
    pppplStack_70 = (long ****)ppppplRam0000000113835a18;
    param_1 = &pppplStack_78;
    ppppplRam0000000113835a18 = ppppplVar6;
    ppppplVar6 = ppppplRam0000000113835a20;
    ppppplRam0000000113835a20 = ppppplVar14;
    ppppplRam0000000113835a28 = unaff_x25;
    FUN_10ac0afc0();
    param_3 = ppppplRam0000000113835a20;
    ppppplVar6 = ppppplRam0000000113835a28;
  }
  if (ppppplVar14 < ppppplVar6) {
    *ppppplVar14 = (long ****)0xd8000000ca;
    ppppplVar14[2] = (long ****)0x10;
    ppppplVar14[1] = (long ****)0x16bc;
    *(undefined4 *)(ppppplVar14 + 3) = 0;
    ppppplVar14[5] = (long ****)0x0;
    ppppplVar14[4] = (long ****)0x0;
    ppppplVar14[7] = (long ****)0x0;
    ppppplVar14[6] = (long ****)0x0;
    ppppplVar14[9] = (long ****)0x0;
    ppppplVar14[8] = (long ****)0x0;
    ppppplVar14[0xb] = (long ****)0x0;
    ppppplVar14[10] = (long ****)0x0;
    ppppplVar14 = ppppplVar14 + 0xc;
  }
  else {
    lVar12 = (long)ppppplVar14 - (long)ppppplRam0000000113835a18;
    uVar11 = (lVar12 >> 5) * -0x5555555555555555 + 1;
    ppppplRam0000000113835a20 = ppppplVar14;
    if (0x2aaaaaaaaaaaaaa < uVar11) goto LAB_10ac0f7dc;
    lVar8 = (long)ppppplVar6 - (long)ppppplRam0000000113835a18 >> 5;
    uVar9 = lVar8 * 0x5555555555555556;
    if (uVar9 < uVar11 || uVar9 - uVar11 == 0) {
      uVar9 = uVar11;
    }
    if (0x155555555555554 < (ulong)(lVar8 * -0x5555555555555555)) {
      uVar9 = uVar13;
    }
    uStack_58 = 0x113835a18;
    lVar8 = lVar15;
    FUN_10a187714();
    puVar1 = (undefined8 *)(lVar8 + lVar12);
    unaff_x25 = (long *****)(lVar8 + uVar9 * 0x60);
    *puVar1 = 0xd8000000ca;
    puVar1[2] = 0x10;
    puVar1[1] = 0x16bc;
    *(undefined4 *)(puVar1 + 3) = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    ppppplVar14 = (long *****)(puVar1 + 0xc);
    ppppplVar6 = (long *****)
                 ((long)puVar1 + ((long)ppppplRam0000000113835a18 - (long)ppppplRam0000000113835a20)
                 );
    param_2 = ppppplRam0000000113835a18;
    param_4 = ppppplVar6;
    FUN_10ac0aec8(0x113835a18);
    pppplStack_68 = (long ****)ppppplRam0000000113835a18;
    pppplStack_60 = (long ****)ppppplRam0000000113835a28;
    pppplStack_78 = (long ****)ppppplRam0000000113835a18;
    pppplStack_70 = (long ****)ppppplRam0000000113835a18;
    param_1 = &pppplStack_78;
    ppppplRam0000000113835a18 = ppppplVar6;
    ppppplVar6 = ppppplRam0000000113835a20;
    ppppplRam0000000113835a20 = ppppplVar14;
    ppppplRam0000000113835a28 = unaff_x25;
    FUN_10ac0afc0();
    param_3 = ppppplRam0000000113835a20;
    ppppplVar6 = ppppplRam0000000113835a28;
  }
  if (ppppplVar14 < ppppplVar6) {
    *ppppplVar14 = (long ****)0xd8000000cb;
    ppppplVar14[2] = (long ****)0x8;
    ppppplVar14[1] = (long ****)0x16dc;
    *(undefined4 *)(ppppplVar14 + 3) = 0;
    ppppplVar14[5] = (long ****)0x0;
    ppppplVar14[4] = (long ****)0x0;
    ppppplVar14[7] = (long ****)0x0;
    ppppplVar14[6] = (long ****)0x0;
    ppppplVar14[9] = (long ****)0x0;
    ppppplVar14[8] = (long ****)0x0;
    ppppplVar14[0xb] = (long ****)0x0;
    ppppplVar14[10] = (long ****)0x0;
    ppppplVar14 = ppppplVar14 + 0xc;
  }
  else {
    lVar12 = (long)ppppplVar14 - (long)ppppplRam0000000113835a18;
    uVar11 = (lVar12 >> 5) * -0x5555555555555555 + 1;
    ppppplRam0000000113835a20 = ppppplVar14;
    if (0x2aaaaaaaaaaaaaa < uVar11) goto LAB_10ac0f7dc;
    lVar8 = (long)ppppplVar6 - (long)ppppplRam0000000113835a18 >> 5;
    uVar9 = lVar8 * 0x5555555555555556;
    if (uVar9 < uVar11 || uVar9 - uVar11 == 0) {
      uVar9 = uVar11;
    }
    if (0x155555555555554 < (ulong)(lVar8 * -0x5555555555555555)) {
      uVar9 = uVar13;
    }
    uStack_58 = 0x113835a18;
    lVar8 = lVar15;
    FUN_10a187714();
    puVar1 = (undefined8 *)(lVar8 + lVar12);
    unaff_x25 = (long *****)(lVar8 + uVar9 * 0x60);
    *puVar1 = 0xd8000000cb;
    puVar1[2] = 8;
    puVar1[1] = 0x16dc;
    *(undefined4 *)(puVar1 + 3) = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    ppppplVar14 = (long *****)(puVar1 + 0xc);
    ppppplVar6 = (long *****)
                 ((long)puVar1 + ((long)ppppplRam0000000113835a18 - (long)ppppplRam0000000113835a20)
                 );
    param_2 = ppppplRam0000000113835a18;
    param_4 = ppppplVar6;
    FUN_10ac0aec8(0x113835a18);
    pppplStack_68 = (long ****)ppppplRam0000000113835a18;
    pppplStack_60 = (long ****)ppppplRam0000000113835a28;
    pppplStack_78 = (long ****)ppppplRam0000000113835a18;
    pppplStack_70 = (long ****)ppppplRam0000000113835a18;
    param_1 = &pppplStack_78;
    ppppplRam0000000113835a18 = ppppplVar6;
    ppppplVar6 = ppppplRam0000000113835a20;
    ppppplRam0000000113835a20 = ppppplVar14;
    ppppplRam0000000113835a28 = unaff_x25;
    FUN_10ac0afc0();
    param_3 = ppppplRam0000000113835a20;
    ppppplVar6 = ppppplRam0000000113835a28;
  }
  if (ppppplVar14 < ppppplVar6) {
    *ppppplVar14 = (long ****)0xd8000000cc;
    ppppplVar14[2] = (long ****)0x10;
    ppppplVar14[1] = (long ****)0x16e4;
    *(undefined4 *)(ppppplVar14 + 3) = 0;
    ppppplVar14[5] = (long ****)0x0;
    ppppplVar14[4] = (long ****)0x0;
    ppppplVar14[7] = (long ****)0x0;
    ppppplVar14[6] = (long ****)0x0;
    ppppplVar14[9] = (long ****)0x0;
    ppppplVar14[8] = (long ****)0x0;
    ppppplVar14[0xb] = (long ****)0x0;
    ppppplVar14[10] = (long ****)0x0;
    ppppplVar14 = ppppplVar14 + 0xc;
  }
  else {
    lVar12 = (long)ppppplVar14 - (long)ppppplRam0000000113835a18;
    uVar11 = (lVar12 >> 5) * -0x5555555555555555 + 1;
    ppppplRam0000000113835a20 = ppppplVar14;
    if (0x2aaaaaaaaaaaaaa < uVar11) goto LAB_10ac0f7dc;
    lVar8 = (long)ppppplVar6 - (long)ppppplRam0000000113835a18 >> 5;
    uVar9 = lVar8 * 0x5555555555555556;
    if (uVar9 < uVar11 || uVar9 - uVar11 == 0) {
      uVar9 = uVar11;
    }
    if (0x155555555555554 < (ulong)(lVar8 * -0x5555555555555555)) {
      uVar9 = uVar13;
    }
    uStack_58 = 0x113835a18;
    lVar8 = lVar15;
    FUN_10a187714();
    puVar1 = (undefined8 *)(lVar8 + lVar12);
    unaff_x25 = (long *****)(lVar8 + uVar9 * 0x60);
    *puVar1 = 0xd8000000cc;
    puVar1[2] = 0x10;
    puVar1[1] = 0x16e4;
    *(undefined4 *)(puVar1 + 3) = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    ppppplVar14 = (long *****)(puVar1 + 0xc);
    ppppplVar6 = (long *****)
                 ((long)puVar1 + ((long)ppppplRam0000000113835a18 - (long)ppppplRam0000000113835a20)
                 );
    param_2 = ppppplRam0000000113835a18;
    param_4 = ppppplVar6;
    FUN_10ac0aec8(0x113835a18);
    pppplStack_68 = (long ****)ppppplRam0000000113835a18;
    pppplStack_60 = (long ****)ppppplRam0000000113835a28;
    pppplStack_78 = (long ****)ppppplRam0000000113835a18;
    pppplStack_70 = (long ****)ppppplRam0000000113835a18;
    param_1 = &pppplStack_78;
    ppppplRam0000000113835a18 = ppppplVar6;
    ppppplVar6 = ppppplRam0000000113835a20;
    ppppplRam0000000113835a20 = ppppplVar14;
    ppppplRam0000000113835a28 = unaff_x25;
    FUN_10ac0afc0();
    param_3 = ppppplRam0000000113835a20;
    ppppplVar6 = ppppplRam0000000113835a28;
  }
  if (ppppplVar14 < ppppplVar6) {
    *ppppplVar14 = (long ****)0xd8000000cd;
    ppppplVar14[2] = (long ****)0x10;
    ppppplVar14[1] = (long ****)0x16f4;
    *(undefined4 *)(ppppplVar14 + 3) = 0;
    ppppplVar14[5] = (long ****)0x0;
    ppppplVar14[4] = (long ****)0x0;
    ppppplVar14[7] = (long ****)0x0;
    ppppplVar14[6] = (long ****)0x0;
    ppppplVar14[9] = (long ****)0x0;
    ppppplVar14[8] = (long ****)0x0;
    ppppplVar14[0xb] = (long ****)0x0;
    ppppplVar14[10] = (long ****)0x0;
    ppppplVar14 = ppppplVar14 + 0xc;
  }
  else {
    lVar12 = (long)ppppplVar14 - (long)ppppplRam0000000113835a18;
    uVar11 = (lVar12 >> 5) * -0x5555555555555555 + 1;
    ppppplRam0000000113835a20 = ppppplVar14;
    if (0x2aaaaaaaaaaaaaa < uVar11) goto LAB_10ac0f7dc;
    lVar8 = (long)ppppplVar6 - (long)ppppplRam0000000113835a18 >> 5;
    uVar9 = lVar8 * 0x5555555555555556;
    if (uVar9 < uVar11 || uVar9 - uVar11 == 0) {
      uVar9 = uVar11;
    }
    if (0x155555555555554 < (ulong)(lVar8 * -0x5555555555555555)) {
      uVar9 = uVar13;
    }
    uStack_58 = 0x113835a18;
    lVar8 = lVar15;
    FUN_10a187714();
    puVar1 = (undefined8 *)(lVar8 + lVar12);
    unaff_x25 = (long *****)(lVar8 + uVar9 * 0x60);
    *puVar1 = 0xd8000000cd;
    puVar1[2] = 0x10;
    puVar1[1] = 0x16f4;
    *(undefined4 *)(puVar1 + 3) = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    ppppplVar14 = (long *****)(puVar1 + 0xc);
    ppppplVar6 = (long *****)
                 ((long)puVar1 + ((long)ppppplRam0000000113835a18 - (long)ppppplRam0000000113835a20)
                 );
    param_2 = ppppplRam0000000113835a18;
    param_4 = ppppplVar6;
    FUN_10ac0aec8(0x113835a18);
    pppplStack_68 = (long ****)ppppplRam0000000113835a18;
    pppplStack_60 = (long ****)ppppplRam0000000113835a28;
    pppplStack_78 = (long ****)ppppplRam0000000113835a18;
    pppplStack_70 = (long ****)ppppplRam0000000113835a18;
    param_1 = &pppplStack_78;
    ppppplRam0000000113835a18 = ppppplVar6;
    ppppplVar6 = ppppplRam0000000113835a20;
    ppppplRam0000000113835a20 = ppppplVar14;
    ppppplRam0000000113835a28 = unaff_x25;
    FUN_10ac0afc0();
    param_3 = ppppplRam0000000113835a20;
    ppppplVar6 = ppppplRam0000000113835a28;
  }
  if (ppppplVar14 < ppppplVar6) {
    *ppppplVar14 = (long ****)0xd8000000ce;
    ppppplVar14[2] = (long ****)0x10;
    ppppplVar14[1] = (long ****)0x16cc;
    *(undefined4 *)(ppppplVar14 + 3) = 0;
    ppppplVar14[5] = (long ****)0x0;
    ppppplVar14[4] = (long ****)0x0;
    ppppplVar14[7] = (long ****)0x0;
    ppppplVar14[6] = (long ****)0x0;
    ppppplVar14[9] = (long ****)0x0;
    ppppplVar14[8] = (long ****)0x0;
    ppppplVar14[0xb] = (long ****)0x0;
    ppppplVar14[10] = (long ****)0x0;
    ppppplVar14 = ppppplVar14 + 0xc;
  }
  else {
    lVar12 = (long)ppppplVar14 - (long)ppppplRam0000000113835a18;
    uVar11 = (lVar12 >> 5) * -0x5555555555555555 + 1;
    ppppplRam0000000113835a20 = ppppplVar14;
    if (0x2aaaaaaaaaaaaaa < uVar11) goto LAB_10ac0f7dc;
    lVar8 = (long)ppppplVar6 - (long)ppppplRam0000000113835a18 >> 5;
    uVar9 = lVar8 * 0x5555555555555556;
    if (uVar9 < uVar11 || uVar9 - uVar11 == 0) {
      uVar9 = uVar11;
    }
    if (0x155555555555554 < (ulong)(lVar8 * -0x5555555555555555)) {
      uVar9 = uVar13;
    }
    uStack_58 = 0x113835a18;
    lVar8 = lVar15;
    FUN_10a187714();
    puVar1 = (undefined8 *)(lVar8 + lVar12);
    unaff_x25 = (long *****)(lVar8 + uVar9 * 0x60);
    *puVar1 = 0xd8000000ce;
    puVar1[2] = 0x10;
    puVar1[1] = 0x16cc;
    *(undefined4 *)(puVar1 + 3) = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    ppppplVar14 = (long *****)(puVar1 + 0xc);
    ppppplVar6 = (long *****)
                 ((long)puVar1 + ((long)ppppplRam0000000113835a18 - (long)ppppplRam0000000113835a20)
                 );
    param_2 = ppppplRam0000000113835a18;
    param_4 = ppppplVar6;
    FUN_10ac0aec8(0x113835a18);
    pppplStack_68 = (long ****)ppppplRam0000000113835a18;
    pppplStack_60 = (long ****)ppppplRam0000000113835a28;
    pppplStack_78 = (long ****)ppppplRam0000000113835a18;
    pppplStack_70 = (long ****)ppppplRam0000000113835a18;
    param_1 = &pppplStack_78;
    ppppplRam0000000113835a18 = ppppplVar6;
    ppppplVar6 = ppppplRam0000000113835a20;
    ppppplRam0000000113835a20 = ppppplVar14;
    ppppplRam0000000113835a28 = unaff_x25;
    FUN_10ac0afc0();
    param_3 = ppppplRam0000000113835a20;
    ppppplVar6 = ppppplRam0000000113835a28;
  }
  if (ppppplVar14 < ppppplVar6) {
    *ppppplVar14 = (long ****)0xd8000000cf;
    ppppplVar14[2] = (long ****)0x24;
    ppppplVar14[1] = (long ****)0x1758;
    *(undefined4 *)(ppppplVar14 + 3) = 0;
    ppppplVar14[5] = (long ****)0x0;
    ppppplVar14[4] = (long ****)0x0;
    ppppplVar14[7] = (long ****)0x0;
    ppppplVar14[6] = (long ****)0x0;
    ppppplVar14[9] = (long ****)0x0;
    ppppplVar14[8] = (long ****)0x0;
    ppppplVar14[0xb] = (long ****)0x0;
    ppppplVar14[10] = (long ****)0x0;
    ppppplVar14 = ppppplVar14 + 0xc;
  }
  else {
    lVar12 = (long)ppppplVar14 - (long)ppppplRam0000000113835a18;
    uVar11 = (lVar12 >> 5) * -0x5555555555555555 + 1;
    ppppplRam0000000113835a20 = ppppplVar14;
    if (0x2aaaaaaaaaaaaaa < uVar11) goto LAB_10ac0f7dc;
    lVar8 = (long)ppppplVar6 - (long)ppppplRam0000000113835a18 >> 5;
    uVar9 = lVar8 * 0x5555555555555556;
    if (uVar9 < uVar11 || uVar9 - uVar11 == 0) {
      uVar9 = uVar11;
    }
    if (0x155555555555554 < (ulong)(lVar8 * -0x5555555555555555)) {
      uVar9 = uVar13;
    }
    uStack_58 = 0x113835a18;
    lVar8 = lVar15;
    FUN_10a187714();
    puVar1 = (undefined8 *)(lVar8 + lVar12);
    unaff_x25 = (long *****)(lVar8 + uVar9 * 0x60);
    *puVar1 = 0xd8000000cf;
    puVar1[2] = 0x24;
    puVar1[1] = 0x1758;
    *(undefined4 *)(puVar1 + 3) = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    ppppplVar14 = (long *****)(puVar1 + 0xc);
    ppppplVar6 = (long *****)
                 ((long)puVar1 + ((long)ppppplRam0000000113835a18 - (long)ppppplRam0000000113835a20)
                 );
    param_2 = ppppplRam0000000113835a18;
    param_4 = ppppplVar6;
    FUN_10ac0aec8(0x113835a18);
    pppplStack_68 = (long ****)ppppplRam0000000113835a18;
    pppplStack_60 = (long ****)ppppplRam0000000113835a28;
    pppplStack_78 = (long ****)ppppplRam0000000113835a18;
    pppplStack_70 = (long ****)ppppplRam0000000113835a18;
    param_1 = &pppplStack_78;
    ppppplRam0000000113835a18 = ppppplVar6;
    ppppplVar6 = ppppplRam0000000113835a20;
    ppppplRam0000000113835a20 = ppppplVar14;
    ppppplRam0000000113835a28 = unaff_x25;
    FUN_10ac0afc0();
    param_3 = ppppplRam0000000113835a20;
    ppppplVar6 = ppppplRam0000000113835a28;
  }
  if (ppppplVar14 < ppppplVar6) {
    *ppppplVar14 = (long ****)0xd8000000d0;
    ppppplVar14[2] = (long ****)0x10;
    ppppplVar14[1] = (long ****)0x177c;
    *(undefined4 *)(ppppplVar14 + 3) = 0;
    ppppplVar14[5] = (long ****)0x0;
    ppppplVar14[4] = (long ****)0x0;
    ppppplVar14[7] = (long ****)0x0;
    ppppplVar14[6] = (long ****)0x0;
    ppppplVar14[9] = (long ****)0x0;
    ppppplVar14[8] = (long ****)0x0;
    ppppplVar14[0xb] = (long ****)0x0;
    ppppplVar14[10] = (long ****)0x0;
    ppppplVar14 = ppppplVar14 + 0xc;
  }
  else {
    lVar12 = (long)ppppplVar14 - (long)ppppplRam0000000113835a18;
    uVar11 = (lVar12 >> 5) * -0x5555555555555555 + 1;
    ppppplRam0000000113835a20 = ppppplVar14;
    if (0x2aaaaaaaaaaaaaa < uVar11) goto LAB_10ac0f7dc;
    lVar8 = (long)ppppplVar6 - (long)ppppplRam0000000113835a18 >> 5;
    uVar9 = lVar8 * 0x5555555555555556;
    if (uVar9 < uVar11 || uVar9 - uVar11 == 0) {
      uVar9 = uVar11;
    }
    if (0x155555555555554 < (ulong)(lVar8 * -0x5555555555555555)) {
      uVar9 = uVar13;
    }
    uStack_58 = 0x113835a18;
    lVar8 = lVar15;
    FUN_10a187714();
    puVar1 = (undefined8 *)(lVar8 + lVar12);
    unaff_x25 = (long *****)(lVar8 + uVar9 * 0x60);
    *puVar1 = 0xd8000000d0;
    puVar1[2] = 0x10;
    puVar1[1] = 0x177c;
    *(undefined4 *)(puVar1 + 3) = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    ppppplVar14 = (long *****)(puVar1 + 0xc);
    ppppplVar6 = (long *****)
                 ((long)puVar1 + ((long)ppppplRam0000000113835a18 - (long)ppppplRam0000000113835a20)
                 );
    param_2 = ppppplRam0000000113835a18;
    param_4 = ppppplVar6;
    FUN_10ac0aec8(0x113835a18);
    pppplStack_68 = (long ****)ppppplRam0000000113835a18;
    pppplStack_60 = (long ****)ppppplRam0000000113835a28;
    pppplStack_78 = (long ****)ppppplRam0000000113835a18;
    pppplStack_70 = (long ****)ppppplRam0000000113835a18;
    param_1 = &pppplStack_78;
    ppppplRam0000000113835a18 = ppppplVar6;
    ppppplVar6 = ppppplRam0000000113835a20;
    ppppplRam0000000113835a20 = ppppplVar14;
    ppppplRam0000000113835a28 = unaff_x25;
    FUN_10ac0afc0();
    param_3 = ppppplRam0000000113835a20;
    ppppplVar6 = ppppplRam0000000113835a28;
  }
  if (ppppplVar14 < ppppplVar6) {
    *ppppplVar14 = (long ****)0xd8000000d1;
    ppppplVar14[2] = (long ****)0x10;
    ppppplVar14[1] = (long ****)0x1794;
    *(undefined4 *)(ppppplVar14 + 3) = 0;
    ppppplVar14[5] = (long ****)0x0;
    ppppplVar14[4] = (long ****)0x0;
    ppppplVar14[7] = (long ****)0x0;
    ppppplVar14[6] = (long ****)0x0;
    ppppplVar14[9] = (long ****)0x0;
    ppppplVar14[8] = (long ****)0x0;
    ppppplVar14[0xb] = (long ****)0x0;
    ppppplVar14[10] = (long ****)0x0;
    ppppplVar14 = ppppplVar14 + 0xc;
  }
  else {
    lVar12 = (long)ppppplVar14 - (long)ppppplRam0000000113835a18;
    uVar11 = (lVar12 >> 5) * -0x5555555555555555 + 1;
    ppppplRam0000000113835a20 = ppppplVar14;
    if (0x2aaaaaaaaaaaaaa < uVar11) goto LAB_10ac0f7dc;
    lVar8 = (long)ppppplVar6 - (long)ppppplRam0000000113835a18 >> 5;
    uVar9 = lVar8 * 0x5555555555555556;
    if (uVar9 < uVar11 || uVar9 - uVar11 == 0) {
      uVar9 = uVar11;
    }
    if (0x155555555555554 < (ulong)(lVar8 * -0x5555555555555555)) {
      uVar9 = uVar13;
    }
    uStack_58 = 0x113835a18;
    lVar8 = lVar15;
    FUN_10a187714();
    puVar1 = (undefined8 *)(lVar8 + lVar12);
    unaff_x25 = (long *****)(lVar8 + uVar9 * 0x60);
    *puVar1 = 0xd8000000d1;
    puVar1[2] = 0x10;
    puVar1[1] = 0x1794;
    *(undefined4 *)(puVar1 + 3) = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    ppppplVar14 = (long *****)(puVar1 + 0xc);
    ppppplVar6 = (long *****)
                 ((long)puVar1 + ((long)ppppplRam0000000113835a18 - (long)ppppplRam0000000113835a20)
                 );
    param_2 = ppppplRam0000000113835a18;
    param_4 = ppppplVar6;
    FUN_10ac0aec8(0x113835a18);
    pppplStack_68 = (long ****)ppppplRam0000000113835a18;
    pppplStack_60 = (long ****)ppppplRam0000000113835a28;
    pppplStack_78 = (long ****)ppppplRam0000000113835a18;
    pppplStack_70 = (long ****)ppppplRam0000000113835a18;
    param_1 = &pppplStack_78;
    ppppplRam0000000113835a18 = ppppplVar6;
    ppppplVar6 = ppppplRam0000000113835a20;
    ppppplRam0000000113835a20 = ppppplVar14;
    ppppplRam0000000113835a28 = unaff_x25;
    FUN_10ac0afc0();
    param_3 = ppppplRam0000000113835a20;
    ppppplVar6 = ppppplRam0000000113835a28;
  }
  if (ppppplVar14 < ppppplVar6) {
    *ppppplVar14 = (long ****)0xd8000000d2;
    ppppplVar14[2] = (long ****)0x10;
    ppppplVar14[1] = (long ****)0x17a4;
    *(undefined4 *)(ppppplVar14 + 3) = 0;
    ppppplVar14[5] = (long ****)0x0;
    ppppplVar14[4] = (long ****)0x0;
    ppppplVar14[7] = (long ****)0x0;
    ppppplVar14[6] = (long ****)0x0;
    ppppplVar14[9] = (long ****)0x0;
    ppppplVar14[8] = (long ****)0x0;
    ppppplVar14[0xb] = (long ****)0x0;
    ppppplVar14[10] = (long ****)0x0;
    ppppplVar14 = ppppplVar14 + 0xc;
  }
  else {
    lVar12 = (long)ppppplVar14 - (long)ppppplRam0000000113835a18;
    uVar11 = (lVar12 >> 5) * -0x5555555555555555 + 1;
    ppppplRam0000000113835a20 = ppppplVar14;
    if (0x2aaaaaaaaaaaaaa < uVar11) goto LAB_10ac0f7dc;
    lVar8 = (long)ppppplVar6 - (long)ppppplRam0000000113835a18 >> 5;
    uVar9 = lVar8 * 0x5555555555555556;
    if (uVar9 < uVar11 || uVar9 - uVar11 == 0) {
      uVar9 = uVar11;
    }
    if (0x155555555555554 < (ulong)(lVar8 * -0x5555555555555555)) {
      uVar9 = uVar13;
    }
    uStack_58 = 0x113835a18;
    lVar8 = lVar15;
    FUN_10a187714();
    puVar1 = (undefined8 *)(lVar8 + lVar12);
    unaff_x25 = (long *****)(lVar8 + uVar9 * 0x60);
    *puVar1 = 0xd8000000d2;
    puVar1[2] = 0x10;
    puVar1[1] = 0x17a4;
    *(undefined4 *)(puVar1 + 3) = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    ppppplVar14 = (long *****)(puVar1 + 0xc);
    ppppplVar6 = (long *****)
                 ((long)puVar1 + ((long)ppppplRam0000000113835a18 - (long)ppppplRam0000000113835a20)
                 );
    param_2 = ppppplRam0000000113835a18;
    param_4 = ppppplVar6;
    FUN_10ac0aec8(0x113835a18);
    pppplStack_68 = (long ****)ppppplRam0000000113835a18;
    pppplStack_60 = (long ****)ppppplRam0000000113835a28;
    pppplStack_78 = (long ****)ppppplRam0000000113835a18;
    pppplStack_70 = (long ****)ppppplRam0000000113835a18;
    param_1 = &pppplStack_78;
    ppppplRam0000000113835a18 = ppppplVar6;
    ppppplVar6 = ppppplRam0000000113835a20;
    ppppplRam0000000113835a20 = ppppplVar14;
    ppppplRam0000000113835a28 = unaff_x25;
    FUN_10ac0afc0();
    param_3 = ppppplRam0000000113835a20;
    ppppplVar6 = ppppplRam0000000113835a28;
  }
  if (ppppplVar14 < ppppplVar6) {
    *ppppplVar14 = (long ****)0xd8000000d3;
    ppppplVar14[2] = (long ****)0x10;
    ppppplVar14[1] = (long ****)0x17b4;
    *(undefined4 *)(ppppplVar14 + 3) = 0;
    ppppplVar14[5] = (long ****)0x0;
    ppppplVar14[4] = (long ****)0x0;
    ppppplVar14[7] = (long ****)0x0;
    ppppplVar14[6] = (long ****)0x0;
    ppppplVar14[9] = (long ****)0x0;
    ppppplVar14[8] = (long ****)0x0;
    ppppplVar14[0xb] = (long ****)0x0;
    ppppplVar14[10] = (long ****)0x0;
    ppppplVar14 = ppppplVar14 + 0xc;
    ppppplRam0000000113835a20 = param_3;
  }
  else {
    lVar12 = (long)ppppplVar14 - (long)ppppplRam0000000113835a18;
    uVar11 = (lVar12 >> 5) * -0x5555555555555555 + 1;
    ppppplRam0000000113835a20 = ppppplVar14;
    if (0x2aaaaaaaaaaaaaa < uVar11) goto LAB_10ac0f7dc;
    lVar8 = (long)ppppplVar6 - (long)ppppplRam0000000113835a18 >> 5;
    uVar9 = lVar8 * 0x5555555555555556;
    if (uVar9 < uVar11 || uVar9 - uVar11 == 0) {
      uVar9 = uVar11;
    }
    if (0x155555555555554 < (ulong)(lVar8 * -0x5555555555555555)) {
      uVar9 = uVar13;
    }
    uStack_58 = 0x113835a18;
    lVar8 = lVar15;
    FUN_10a187714();
    puVar1 = (undefined8 *)(lVar8 + lVar12);
    unaff_x25 = (long *****)(lVar8 + uVar9 * 0x60);
    *puVar1 = 0xd8000000d3;
    puVar1[2] = 0x10;
    puVar1[1] = 0x17b4;
    *(undefined4 *)(puVar1 + 3) = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    ppppplVar14 = (long *****)(puVar1 + 0xc);
    ppppplVar6 = (long *****)
                 ((long)puVar1 + ((long)ppppplRam0000000113835a18 - (long)ppppplRam0000000113835a20)
                 );
    param_2 = ppppplRam0000000113835a18;
    param_4 = ppppplVar6;
    FUN_10ac0aec8(0x113835a18);
    pppplStack_68 = (long ****)ppppplRam0000000113835a18;
    pppplStack_60 = (long ****)ppppplRam0000000113835a28;
    pppplStack_78 = (long ****)ppppplRam0000000113835a18;
    pppplStack_70 = (long ****)ppppplRam0000000113835a18;
    param_1 = &pppplStack_78;
    ppppplRam0000000113835a18 = ppppplVar6;
    ppppplVar6 = ppppplRam0000000113835a20;
    ppppplRam0000000113835a20 = ppppplVar14;
    ppppplRam0000000113835a28 = unaff_x25;
    FUN_10ac0afc0();
    ppppplVar6 = ppppplRam0000000113835a28;
  }
  if (ppppplVar14 < ppppplVar6) {
    *ppppplVar14 = (long ****)0xd8000000d4;
    ppppplVar14[2] = (long ****)0x8;
    ppppplVar14[1] = (long ****)0x17d4;
    *(undefined4 *)(ppppplVar14 + 3) = 0;
    ppppplVar14[5] = (long ****)0x0;
    ppppplVar14[4] = (long ****)0x0;
    ppppplVar14[7] = (long ****)0x0;
    ppppplVar14[6] = (long ****)0x0;
    ppppplVar14[9] = (long ****)0x0;
    ppppplVar14[8] = (long ****)0x0;
    ppppplVar14[0xb] = (long ****)0x0;
    ppppplVar14[10] = (long ****)0x0;
    ppppplVar14 = ppppplVar14 + 0xc;
  }
  else {
    lVar12 = (long)ppppplVar14 - (long)ppppplRam0000000113835a18;
    uVar11 = (lVar12 >> 5) * -0x5555555555555555 + 1;
    param_3 = ppppplRam0000000113835a20;
    ppppplRam0000000113835a20 = ppppplVar14;
    if (0x2aaaaaaaaaaaaaa < uVar11) goto LAB_10ac0f7dc;
    lVar8 = (long)ppppplVar6 - (long)ppppplRam0000000113835a18 >> 5;
    uVar9 = lVar8 * 0x5555555555555556;
    if (uVar9 < uVar11 || uVar9 - uVar11 == 0) {
      uVar9 = uVar11;
    }
    if (0x155555555555554 < (ulong)(lVar8 * -0x5555555555555555)) {
      uVar9 = uVar13;
    }
    uStack_58 = 0x113835a18;
    lVar8 = lVar15;
    FUN_10a187714();
    puVar1 = (undefined8 *)(lVar8 + lVar12);
    unaff_x25 = (long *****)(lVar8 + uVar9 * 0x60);
    *puVar1 = 0xd8000000d4;
    puVar1[2] = 8;
    puVar1[1] = 0x17d4;
    *(undefined4 *)(puVar1 + 3) = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    ppppplVar14 = (long *****)(puVar1 + 0xc);
    ppppplVar6 = (long *****)
                 ((long)puVar1 + ((long)ppppplRam0000000113835a18 - (long)ppppplRam0000000113835a20)
                 );
    param_2 = ppppplRam0000000113835a18;
    param_4 = ppppplVar6;
    FUN_10ac0aec8(0x113835a18);
    pppplStack_68 = (long ****)ppppplRam0000000113835a18;
    pppplStack_60 = (long ****)ppppplRam0000000113835a28;
    pppplStack_78 = (long ****)ppppplRam0000000113835a18;
    pppplStack_70 = (long ****)ppppplRam0000000113835a18;
    param_1 = &pppplStack_78;
    ppppplRam0000000113835a18 = ppppplVar6;
    ppppplVar6 = ppppplRam0000000113835a20;
    ppppplRam0000000113835a20 = ppppplVar14;
    ppppplRam0000000113835a28 = unaff_x25;
    FUN_10ac0afc0();
    ppppplVar6 = ppppplRam0000000113835a28;
  }
  if (ppppplVar14 < ppppplVar6) {
    *ppppplVar14 = (long ****)0xd8000000d5;
    ppppplVar14[2] = (long ****)0x10;
    ppppplVar14[1] = (long ****)0x17dc;
    *(undefined4 *)(ppppplVar14 + 3) = 0;
    ppppplVar14[5] = (long ****)0x0;
    ppppplVar14[4] = (long ****)0x0;
    ppppplVar14[7] = (long ****)0x0;
    ppppplVar14[6] = (long ****)0x0;
    ppppplVar14[9] = (long ****)0x0;
    ppppplVar14[8] = (long ****)0x0;
    ppppplVar14[0xb] = (long ****)0x0;
    ppppplVar14[10] = (long ****)0x0;
    ppppplVar14 = ppppplVar14 + 0xc;
  }
  else {
    lVar12 = (long)ppppplVar14 - (long)ppppplRam0000000113835a18;
    uVar11 = (lVar12 >> 5) * -0x5555555555555555 + 1;
    param_3 = ppppplRam0000000113835a20;
    ppppplRam0000000113835a20 = ppppplVar14;
    if (0x2aaaaaaaaaaaaaa < uVar11) goto LAB_10ac0f7dc;
    lVar8 = (long)ppppplVar6 - (long)ppppplRam0000000113835a18 >> 5;
    uVar9 = lVar8 * 0x5555555555555556;
    if (uVar9 < uVar11 || uVar9 - uVar11 == 0) {
      uVar9 = uVar11;
    }
    if (0x155555555555554 < (ulong)(lVar8 * -0x5555555555555555)) {
      uVar9 = uVar13;
    }
    uStack_58 = 0x113835a18;
    lVar8 = lVar15;
    FUN_10a187714();
    puVar1 = (undefined8 *)(lVar8 + lVar12);
    unaff_x25 = (long *****)(lVar8 + uVar9 * 0x60);
    *puVar1 = 0xd8000000d5;
    puVar1[2] = 0x10;
    puVar1[1] = 0x17dc;
    *(undefined4 *)(puVar1 + 3) = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    ppppplVar14 = (long *****)(puVar1 + 0xc);
    ppppplVar6 = (long *****)
                 ((long)puVar1 + ((long)ppppplRam0000000113835a18 - (long)ppppplRam0000000113835a20)
                 );
    param_2 = ppppplRam0000000113835a18;
    param_4 = ppppplVar6;
    FUN_10ac0aec8(0x113835a18);
    pppplStack_68 = (long ****)ppppplRam0000000113835a18;
    pppplStack_60 = (long ****)ppppplRam0000000113835a28;
    pppplStack_78 = (long ****)ppppplRam0000000113835a18;
    pppplStack_70 = (long ****)ppppplRam0000000113835a18;
    param_1 = &pppplStack_78;
    ppppplRam0000000113835a18 = ppppplVar6;
    ppppplVar6 = ppppplRam0000000113835a20;
    ppppplRam0000000113835a20 = ppppplVar14;
    ppppplRam0000000113835a28 = unaff_x25;
    FUN_10ac0afc0();
    ppppplVar6 = ppppplRam0000000113835a28;
  }
  if (ppppplVar14 < ppppplVar6) {
    *ppppplVar14 = (long ****)0xd8000000d6;
    ppppplVar14[2] = (long ****)0x10;
    ppppplVar14[1] = (long ****)0x17ec;
    *(undefined4 *)(ppppplVar14 + 3) = 0;
    ppppplVar14[5] = (long ****)0x0;
    ppppplVar14[4] = (long ****)0x0;
    ppppplVar14[7] = (long ****)0x0;
    ppppplVar14[6] = (long ****)0x0;
    ppppplVar14[9] = (long ****)0x0;
    ppppplVar14[8] = (long ****)0x0;
    ppppplVar14[0xb] = (long ****)0x0;
    ppppplVar14[10] = (long ****)0x0;
    ppppplVar14 = ppppplVar14 + 0xc;
  }
  else {
    lVar12 = (long)ppppplVar14 - (long)ppppplRam0000000113835a18;
    uVar11 = (lVar12 >> 5) * -0x5555555555555555 + 1;
    param_3 = ppppplRam0000000113835a20;
    ppppplRam0000000113835a20 = ppppplVar14;
    if (0x2aaaaaaaaaaaaaa < uVar11) goto LAB_10ac0f7dc;
    lVar8 = (long)ppppplVar6 - (long)ppppplRam0000000113835a18 >> 5;
    uVar9 = lVar8 * 0x5555555555555556;
    if (uVar9 < uVar11 || uVar9 - uVar11 == 0) {
      uVar9 = uVar11;
    }
    if (0x155555555555554 < (ulong)(lVar8 * -0x5555555555555555)) {
      uVar9 = uVar13;
    }
    uStack_58 = 0x113835a18;
    lVar8 = lVar15;
    FUN_10a187714();
    puVar1 = (undefined8 *)(lVar8 + lVar12);
    unaff_x25 = (long *****)(lVar8 + uVar9 * 0x60);
    *puVar1 = 0xd8000000d6;
    puVar1[2] = 0x10;
    puVar1[1] = 0x17ec;
    *(undefined4 *)(puVar1 + 3) = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    ppppplVar14 = (long *****)(puVar1 + 0xc);
    ppppplVar6 = (long *****)
                 ((long)puVar1 + ((long)ppppplRam0000000113835a18 - (long)ppppplRam0000000113835a20)
                 );
    param_2 = ppppplRam0000000113835a18;
    param_4 = ppppplVar6;
    FUN_10ac0aec8(0x113835a18);
    pppplStack_68 = (long ****)ppppplRam0000000113835a18;
    pppplStack_60 = (long ****)ppppplRam0000000113835a28;
    pppplStack_78 = (long ****)ppppplRam0000000113835a18;
    pppplStack_70 = (long ****)ppppplRam0000000113835a18;
    param_1 = &pppplStack_78;
    ppppplRam0000000113835a18 = ppppplVar6;
    ppppplVar6 = ppppplRam0000000113835a20;
    ppppplRam0000000113835a20 = ppppplVar14;
    ppppplRam0000000113835a28 = unaff_x25;
    FUN_10ac0afc0();
    ppppplVar6 = ppppplRam0000000113835a28;
  }
  if (ppppplVar14 < ppppplVar6) {
    *ppppplVar14 = (long ****)0xd8000000d7;
    ppppplVar14[2] = (long ****)0x10;
    ppppplVar14[1] = (long ****)0x17c4;
    *(undefined4 *)(ppppplVar14 + 3) = 0;
    ppppplVar14[5] = (long ****)0x0;
    ppppplVar14[4] = (long ****)0x0;
    ppppplVar14[7] = (long ****)0x0;
    ppppplVar14[6] = (long ****)0x0;
    ppppplVar14[9] = (long ****)0x0;
    ppppplVar14[8] = (long ****)0x0;
    ppppplVar14[0xb] = (long ****)0x0;
    ppppplVar14[10] = (long ****)0x0;
    ppppplVar14 = ppppplVar14 + 0xc;
  }
  else {
    lVar12 = (long)ppppplVar14 - (long)ppppplRam0000000113835a18;
    uVar11 = (lVar12 >> 5) * -0x5555555555555555 + 1;
    param_3 = ppppplRam0000000113835a20;
    ppppplRam0000000113835a20 = ppppplVar14;
    if (0x2aaaaaaaaaaaaaa < uVar11) {
LAB_10ac0f7dc:
      FUN_10a187700();
      if ((long)pppplStack_68 < 0) {
        __ZdlPv(pppplStack_78);
      }
      ppppplVar6 = param_1;
      __Unwind_Resume();
      uStack_c0 = 0x155555555555555;
      uStack_b8 = 0x2aaaaaaaaaaaaaa;
      pcStack_98 = FUN_10ac0f848;
      lVar15 = (long)ppppplVar6[1] - (long)*ppppplVar6;
      uVar13 = (lVar15 >> 4) * -0x5555555555555555 + 1;
      pppplStack_e0 = (long ****)unaff_x26;
      pppplStack_d8 = (long ****)unaff_x25;
      pppplStack_d0 = (long ****)ppppplVar14;
      pppplStack_c8 = (long ****)unaff_x23;
      lStack_b0 = lVar12;
      pppplStack_a8 = (long ****)param_1;
      puStack_a0 = &stack0xfffffffffffffff0;
      if (0x555555555555555 < uVar13) {
        FUN_10a187430();
        pppplVar10 = ppppplVar6[2];
        while (pppplVar10 != ppppplVar6[1]) {
          pppplVar10 = pppplVar10 + -6;
          ppppplVar6[2] = pppplVar10;
        }
        if (*ppppplVar6 != (long ****)0x0) {
          __ZdlPv();
        }
        return ppppplVar6;
      }
      lVar12 = (long)ppppplVar6[2] - (long)*ppppplVar6 >> 4;
      uVar11 = lVar12 * 0x5555555555555556;
      if (uVar11 < uVar13 || uVar11 - uVar13 == 0) {
        uVar11 = uVar13;
      }
      if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar12 * -0x5555555555555555)) {
        uVar11 = 0x555555555555555;
      }
      pppplStack_118 = (long ****)ppppplVar6;
      if (uVar11 == 0) {
        ppppplVar14 = (long *****)0x0;
        uVar11 = 0;
      }
      else {
        ppppplVar14 = ppppplVar6;
        FUN_10a187444();
      }
      plVar2 = (long *)((long)ppppplVar14 + lVar15);
      pppplVar17 = param_2[1];
      pppplVar10 = *param_2;
      plVar2[2] = (long)param_2[2];
      plVar2[1] = (long)pppplVar17;
      *plVar2 = (long)pppplVar10;
      param_2[1] = (long ****)0x0;
      param_2[2] = (long ****)0x0;
      *param_2 = (long ****)0x0;
      pppplVar10 = *param_3;
      plVar2[3] = (long)param_2[3];
      plVar2[4] = (long)pppplVar10;
      plVar2[5] = (long)*param_4;
      pppplVar17 = *ppppplVar6;
      pppplVar4 = ppppplVar6[1];
      ppplStack_108 = (long ***)&ppplStack_f0;
      ppplStack_100 = (long ***)&ppplStack_e8;
      pppplVar3 = (long ****)((long)plVar2 + ((long)pppplVar17 - (long)pppplVar4));
      ppplStack_e8 = (long ***)pppplVar3;
      pppplVar10 = pppplVar17;
      pppplStack_138 = (long ****)ppppplVar14;
      ppplStack_130 = (long ***)plVar2;
      pppplStack_110 = (long ****)ppppplVar6;
      ppplStack_f0 = (long ***)pppplVar3;
      if ((long)pppplVar17 - (long)pppplVar4 == 0) {
        uStack_f8 = 1;
      }
      else {
        do {
          ppplVar18 = pppplVar10[1];
          ppplVar16 = *pppplVar10;
          ppplStack_e8[2] = (long **)pppplVar10[2];
          ppplStack_e8[1] = (long **)ppplVar18;
          *ppplStack_e8 = (long **)ppplVar16;
          pppplVar10[1] = (long ***)0x0;
          pppplVar10[2] = (long ***)0x0;
          *pppplVar10 = (long ***)0x0;
          ppplStack_e8[3] = (long **)pppplVar10[3];
          ppplVar16 = pppplVar10[4];
          ppplStack_e8[5] = (long **)pppplVar10[5];
          ppplStack_e8[4] = (long **)ppplVar16;
          pppplVar10 = pppplVar10 + 6;
          ppplStack_e8 = ppplStack_e8 + 6;
        } while (pppplVar10 != pppplVar4);
        uStack_f8 = 1;
        do {
          if (*(char *)((long)pppplVar17 + 0x17) < '\0') {
            __ZdlPv(*pppplVar17);
          }
          pppplVar17 = pppplVar17 + 6;
        } while (pppplVar17 != pppplVar4);
      }
      FUN_10a187488(&pppplStack_110);
      pppplStack_138 = *ppppplVar6;
      *ppppplVar6 = pppplVar3;
      ppppplVar6[1] = (long ****)(plVar2 + 6);
      ppplStack_120 = (long ***)ppppplVar6[2];
      ppppplVar6[2] = (long ****)(ppppplVar14 + uVar11 * 6);
      ppplStack_130 = (long ***)pppplStack_138;
      ppplStack_128 = (long ***)pppplStack_138;
      FUN_10ac0fa18(&pppplStack_138);
      return (long *****)(plVar2 + 6);
    }
    lVar8 = (long)ppppplVar6 - (long)ppppplRam0000000113835a18 >> 5;
    uVar9 = lVar8 * 0x5555555555555556;
    if (uVar9 < uVar11 || uVar9 - uVar11 == 0) {
      uVar9 = uVar11;
    }
    if (0x155555555555554 < (ulong)(lVar8 * -0x5555555555555555)) {
      uVar9 = uVar13;
    }
    uStack_58 = 0x113835a18;
    FUN_10a187714();
    puVar1 = (undefined8 *)(lVar15 + lVar12);
    *puVar1 = 0xd8000000d7;
    puVar1[2] = 0x10;
    puVar1[1] = 0x17c4;
    *(undefined4 *)(puVar1 + 3) = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    ppppplVar14 = (long *****)(puVar1 + 0xc);
    ppppplVar6 = (long *****)
                 ((long)puVar1 + ((long)ppppplRam0000000113835a18 - (long)ppppplRam0000000113835a20)
                 );
    FUN_10ac0aec8(0x113835a18,ppppplRam0000000113835a18,ppppplRam0000000113835a20,ppppplVar6);
    pppplStack_68 = (long ****)ppppplRam0000000113835a18;
    pppplStack_60 = (long ****)ppppplRam0000000113835a28;
    pppplStack_78 = (long ****)ppppplRam0000000113835a18;
    pppplStack_70 = (long ****)ppppplRam0000000113835a18;
    param_1 = &pppplStack_78;
    ppppplRam0000000113835a18 = ppppplVar6;
    ppppplRam0000000113835a20 = ppppplVar14;
    ppppplRam0000000113835a28 = (long *****)(lVar15 + uVar9 * 0x60);
    FUN_10ac0afc0(param_1);
  }
  ppppplRam0000000113835a20 = ppppplVar14;
  return param_1;
}



/* Entry: 10ac0f848; end: 10ac0fa17;  */

/* WARNING: Removing unreachable block (ram,0x00010ac0fa44) */

long * FUN_10ac0f848(long *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 uVar12;
  long *plStack_a8;
  long *plStack_a0;
  long *plStack_98;
  long lStack_90;
  long *plStack_88;
  long *plStack_80;
  undefined8 **ppuStack_78;
  undefined8 **ppuStack_70;
  undefined1 uStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  
  lVar11 = param_1[1] - *param_1;
  uVar7 = (lVar11 >> 4) * -0x5555555555555555 + 1;
  if (0x555555555555555 < uVar7) {
    FUN_10a187430();
    lVar11 = param_1[2];
    while (lVar11 != param_1[1]) {
      lVar11 = lVar11 + -0x30;
      param_1[2] = lVar11;
    }
    if (*param_1 != 0) {
      __ZdlPv();
    }
    return param_1;
  }
  lVar4 = param_1[2] - *param_1 >> 4;
  uVar8 = lVar4 * 0x5555555555555556;
  if (uVar8 < uVar7 || uVar8 - uVar7 == 0) {
    uVar8 = uVar7;
  }
  if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar4 * -0x5555555555555555)) {
    uVar8 = 0x555555555555555;
  }
  plStack_88 = param_1;
  if (uVar8 == 0) {
    plVar9 = (long *)0x0;
    uVar8 = 0;
  }
  else {
    plVar9 = param_1;
    FUN_10a187444();
  }
  puVar1 = (undefined8 *)((long)plVar9 + lVar11);
  uVar12 = param_2[1];
  uVar5 = *param_2;
  puVar1[2] = param_2[2];
  puVar1[1] = uVar12;
  *puVar1 = uVar5;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  uVar5 = *param_3;
  puVar1[3] = param_2[3];
  puVar1[4] = uVar5;
  puVar1[5] = *param_4;
  puVar10 = (undefined8 *)*param_1;
  puVar3 = (undefined8 *)param_1[1];
  ppuStack_78 = &puStack_60;
  ppuStack_70 = &puStack_58;
  puVar2 = (undefined8 *)((long)puVar1 + ((long)puVar10 - (long)puVar3));
  puStack_58 = puVar2;
  puVar6 = puVar10;
  plStack_a8 = plVar9;
  plStack_a0 = puVar1;
  plStack_80 = param_1;
  puStack_60 = puVar2;
  if ((long)puVar10 - (long)puVar3 == 0) {
    uStack_68 = 1;
  }
  else {
    do {
      uVar12 = puVar6[1];
      uVar5 = *puVar6;
      puStack_58[2] = puVar6[2];
      puStack_58[1] = uVar12;
      *puStack_58 = uVar5;
      puVar6[1] = 0;
      puVar6[2] = 0;
      *puVar6 = 0;
      puStack_58[3] = puVar6[3];
      uVar5 = puVar6[4];
      puStack_58[5] = puVar6[5];
      puStack_58[4] = uVar5;
      puVar6 = puVar6 + 6;
      puStack_58 = puStack_58 + 6;
    } while (puVar6 != puVar3);
    uStack_68 = 1;
    do {
      if (*(char *)((long)puVar10 + 0x17) < '\0') {
        __ZdlPv(*puVar10);
      }
      puVar10 = puVar10 + 6;
    } while (puVar10 != puVar3);
  }
  FUN_10a187488(&plStack_80);
  plStack_a8 = (long *)*param_1;
  *param_1 = (long)puVar2;
  param_1[1] = (long)(puVar1 + 6);
  lStack_90 = param_1[2];
  param_1[2] = (long)(plVar9 + uVar8 * 6);
  plStack_a0 = plStack_a8;
  plStack_98 = plStack_a8;
  FUN_10ac0fa18(&plStack_a8);
  return puVar1 + 6;
}



/* Entry: 10ac0fa18; end: 10ac0fa77;  */

/* WARNING: Removing unreachable block (ram,0x00010ac0fa44) */

long * FUN_10ac0fa18(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[2];
  while (lVar1 != param_1[1]) {
    lVar1 = lVar1 + -0x30;
    param_1[2] = lVar1;
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10ac0fa78; end: 10ac0fa7f;  */

void FUN_10ac0fa78(void)

{
  return;
}



/* Entry: 10ac0fa80; end: 10ac0fab3;  */

void FUN_10ac0fa80(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_110c55828;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 10ac0fab4; end: 10ac0facf;  */

void FUN_10ac0fab4(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_110c55828;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10ac0fad0; end: 10ac0fd13;  */

void FUN_10ac0fad0(long param_1,ulong *param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  
  uVar14 = *param_2;
  lVar13 = *(long *)(param_1 + 8);
  if (*(ulong *)(lVar13 + 0xb8) == uVar14) {
    FUN_10abff71c(lVar13,1);
  }
  uVar4 = *(ulong *)(lVar13 + 0xd8);
  if (uVar4 != 0) {
    uVar5 = ((ulong)(uint)((int)uVar14 << 3) + 8 ^ uVar14 >> 0x20) * -0x622015f714c7d297;
    uVar5 = (uVar14 >> 0x20 ^ uVar5 >> 0x2f ^ uVar5) * -0x622015f714c7d297;
    uVar5 = (uVar5 ^ uVar5 >> 0x2f) * -0x622015f714c7d297;
    uVar6 = uVar4 - 1;
    if ((uVar4 & uVar6) == 0) {
      uVar8 = uVar6 & uVar5;
    }
    else {
      uVar8 = uVar5;
      if (uVar4 <= uVar5) {
        uVar8 = 0;
        if (uVar4 != 0) {
          uVar8 = uVar5 / uVar4;
        }
        uVar8 = uVar5 - uVar8 * uVar4;
      }
    }
    lVar7 = *(long *)(lVar13 + 0xd0);
    puVar10 = *(undefined8 **)(lVar7 + uVar8 * 8);
    if (puVar10 != (undefined8 *)0x0) {
      for (plVar3 = (long *)*puVar10; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
        uVar11 = plVar3[1];
        if (uVar11 == uVar5) {
          if (plVar3[2] == uVar14) {
            lVar9 = *plVar3;
            if ((uVar4 & uVar6) == 0) {
              uVar5 = uVar5 & uVar6;
            }
            else if (uVar4 <= uVar5) {
              uVar14 = 0;
              if (uVar4 != 0) {
                uVar14 = uVar5 / uVar4;
              }
              uVar5 = uVar5 - uVar14 * uVar4;
            }
            plVar2 = *(long **)(lVar7 + uVar5 * 8);
            do {
              plVar12 = plVar2;
              plVar2 = (long *)*plVar12;
            } while ((long *)*plVar12 != plVar3);
            if (plVar12 == (long *)(lVar13 + 0xe0)) {
LAB_10ac0fc40:
              if (lVar9 == 0) {
LAB_10ac0fc74:
                *(undefined8 *)(lVar7 + uVar5 * 8) = 0;
                lVar9 = *plVar3;
                goto LAB_10ac0fc7c;
              }
              uVar14 = *(ulong *)(lVar9 + 8);
              if ((uVar4 & uVar6) == 0) {
                uVar8 = uVar14 & uVar6;
              }
              else {
                uVar8 = uVar14;
                if (uVar4 <= uVar14) {
                  uVar8 = 0;
                  if (uVar4 != 0) {
                    uVar8 = uVar14 / uVar4;
                  }
                  uVar8 = uVar14 - uVar8 * uVar4;
                }
              }
              if (uVar8 != uVar5) goto LAB_10ac0fc74;
            }
            else {
              uVar14 = plVar12[1];
              if ((uVar4 & uVar6) == 0) {
                uVar14 = uVar14 & uVar6;
              }
              else if (uVar4 <= uVar14) {
                uVar8 = 0;
                if (uVar4 != 0) {
                  uVar8 = uVar14 / uVar4;
                }
                uVar14 = uVar14 - uVar8 * uVar4;
              }
              if (uVar14 != uVar5) goto LAB_10ac0fc40;
LAB_10ac0fc7c:
              if (lVar9 == 0) goto LAB_10ac0fcb8;
              uVar14 = *(ulong *)(lVar9 + 8);
            }
            if ((uVar4 & uVar6) == 0) {
              uVar14 = uVar14 & uVar6;
            }
            else if (uVar4 <= uVar14) {
              uVar6 = 0;
              if (uVar4 != 0) {
                uVar6 = uVar14 / uVar4;
              }
              uVar14 = uVar14 - uVar6 * uVar4;
            }
            if (uVar14 != uVar5) {
              *(long **)(*(long *)(lVar13 + 0xd0) + uVar14 * 8) = plVar12;
              lVar9 = *plVar3;
            }
LAB_10ac0fcb8:
            *plVar12 = lVar9;
            *plVar3 = 0;
            *(long *)(lVar13 + 0xe8) = *(long *)(lVar13 + 0xe8) + -1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)PTR___ZdlPv_110352258)();
            return;
          }
        }
        else {
          if ((uVar4 & uVar6) == 0) {
            uVar11 = uVar11 & uVar6;
          }
          else if (uVar4 <= uVar11) {
            uVar1 = 0;
            if (uVar4 != 0) {
              uVar1 = uVar11 / uVar4;
            }
            uVar11 = uVar11 - uVar1 * uVar4;
          }
          if (uVar11 != uVar8) {
            return;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 10ac0fd14; end: 10ac0fd1f;  */

undefined ** FUN_10ac0fd14(void)

{
  return &PTR_DAT_110c55898;
}



/* Entry: 10ac0fd20; end: 10ac0fd67;  */

long * FUN_10ac0fd20(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    plVar1 = (long *)*plVar1;
    __ZdlPv();
  }
  lVar2 = *param_1;
  *param_1 = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10ac0fd68; end: 10ac1015f;  */

undefined1  [16] FUN_10ac0fd68(long *param_1,ulong *param_2,undefined8 param_3,undefined8 *param_4)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  long *plVar15;
  ulong uVar16;
  ulong unaff_x24;
  undefined1 auVar17 [16];
  
  uVar6 = *param_2;
  uVar9 = ((ulong)(uint)((int)uVar6 << 3) + 8 ^ uVar6 >> 0x20) * -0x622015f714c7d297;
  uVar9 = (uVar6 >> 0x20 ^ uVar9 >> 0x2f ^ uVar9) * -0x622015f714c7d297;
  uVar16 = (uVar9 ^ uVar9 >> 0x2f) * -0x622015f714c7d297;
  uVar9 = param_1[1];
  if (uVar9 != 0) {
    uVar7 = uVar9 - 1;
    if ((uVar9 & uVar7) == 0) {
      unaff_x24 = uVar16 & uVar7;
    }
    else {
      unaff_x24 = uVar16;
      if (uVar9 <= uVar16) {
        uVar11 = 0;
        if (uVar9 != 0) {
          uVar11 = uVar16 / uVar9;
        }
        unaff_x24 = uVar16 - uVar11 * uVar9;
      }
    }
    puVar10 = *(undefined8 **)(*param_1 + unaff_x24 * 8);
    if (puVar10 != (undefined8 *)0x0) {
      for (plVar15 = (long *)*puVar10; plVar15 != (long *)0x0; plVar15 = (long *)*plVar15) {
        uVar11 = plVar15[1];
        if (uVar11 == uVar16) {
          if (plVar15[2] == uVar6) {
            uVar5 = 0;
            goto LAB_10ac100e8;
          }
        }
        else {
          if ((uVar9 & uVar7) == 0) {
            uVar11 = uVar11 & uVar7;
          }
          else if (uVar9 <= uVar11) {
            uVar14 = 0;
            if (uVar9 != 0) {
              uVar14 = uVar11 / uVar9;
            }
            uVar11 = uVar11 - uVar14 * uVar9;
          }
          if (uVar11 != unaff_x24) break;
        }
      }
    }
  }
  plVar15 = (long *)0x20;
  __Znwm();
  *plVar15 = 0;
  plVar15[1] = uVar16;
  plVar15[2] = *(long *)*param_4;
  *(undefined4 *)(plVar15 + 3) = 0;
  if ((uVar9 == 0) || (*(float *)(param_1 + 4) * (float)uVar9 < (float)(param_1[3] + 1))) {
    uVar6 = 1;
    if (2 < uVar9) {
      uVar6 = (ulong)((uVar9 & uVar9 - 1) != 0);
    }
    uVar6 = uVar6 | uVar9 << 1;
    uVar7 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar6 <= uVar7) {
      uVar6 = uVar7;
    }
    if (uVar6 - 1 == 0) {
      uVar6 = 2;
    }
    else if ((uVar6 & uVar6 - 1) != 0) {
      __ZNSt3__112__next_primeEm();
      uVar9 = param_1[1];
    }
    if (uVar9 < uVar6) {
LAB_10ac0fef8:
      if (uVar6 >> 0x3d != 0) {
        func_0x000109ffded8();
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10ac1014c);
        (*pcVar2)();
      }
      lVar3 = uVar6 << 3;
      __Znwm();
      lVar4 = *param_1;
      *param_1 = lVar3;
      if (lVar4 != 0) {
        __ZdlPv();
      }
      uVar9 = 0;
      param_1[1] = uVar6;
      do {
        *(undefined8 *)(*param_1 + uVar9 * 8) = 0;
        uVar9 = uVar9 + 1;
      } while (uVar6 != uVar9);
      plVar8 = (long *)param_1[2];
      uVar9 = uVar6;
      if (plVar8 != (long *)0x0) {
        uVar7 = plVar8[1];
        uVar11 = uVar6 - 1;
        if ((uVar6 & uVar11) == 0) {
          uVar7 = uVar7 & uVar11;
        }
        else if (uVar6 <= uVar7) {
          uVar14 = 0;
          if (uVar6 != 0) {
            uVar14 = uVar7 / uVar6;
          }
          uVar7 = uVar7 - uVar14 * uVar6;
        }
        *(long **)(*param_1 + uVar7 * 8) = param_1 + 2;
        plVar12 = (long *)*plVar8;
        while (plVar12 != (long *)0x0) {
          uVar14 = plVar12[1];
          if ((uVar6 & uVar11) == 0) {
            uVar14 = uVar14 & uVar11;
          }
          else if (uVar6 <= uVar14) {
            uVar1 = 0;
            if (uVar6 != 0) {
              uVar1 = uVar14 / uVar6;
            }
            uVar14 = uVar14 - uVar1 * uVar6;
          }
          plVar13 = plVar12;
          if (uVar14 != uVar7) {
            lVar3 = *param_1;
            if (*(long *)(lVar3 + uVar14 * 8) == 0) {
              *(long **)(lVar3 + uVar14 * 8) = plVar8;
              uVar7 = uVar14;
            }
            else {
              *plVar8 = *plVar12;
              *plVar12 = **(undefined8 **)(lVar3 + uVar14 * 8);
              **(long **)(lVar3 + uVar14 * 8) = (long)plVar12;
              plVar13 = plVar8;
            }
          }
          plVar8 = plVar13;
          plVar12 = (long *)*plVar13;
        }
      }
    }
    else if (uVar6 < uVar9) {
      uVar7 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((uVar9 < 3) || ((uVar9 & uVar9 - 1) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if (1 < uVar7) {
        uVar7 = 1L << (-LZCOUNT(uVar7 - 1) & 0x3fU);
      }
      if (uVar6 <= uVar7) {
        uVar6 = uVar7;
      }
      if (uVar6 < uVar9) {
        if (uVar6 != 0) goto LAB_10ac0fef8;
        lVar3 = *param_1;
        *param_1 = 0;
        if (lVar3 != 0) {
          __ZdlPv();
        }
        param_1[1] = 0;
        uVar9 = 0;
      }
      else {
        uVar9 = param_1[1];
      }
    }
    if ((uVar9 & uVar9 - 1) == 0) {
      unaff_x24 = uVar9 - 1 & uVar16;
    }
    else {
      unaff_x24 = uVar16;
      if (uVar9 <= uVar16) {
        uVar6 = 0;
        if (uVar9 != 0) {
          uVar6 = uVar16 / uVar9;
        }
        unaff_x24 = uVar16 - uVar6 * uVar9;
      }
    }
  }
  lVar3 = *param_1;
  plVar8 = *(long **)(lVar3 + unaff_x24 * 8);
  if (plVar8 == (long *)0x0) {
    plVar8 = param_1 + 2;
    *plVar15 = *plVar8;
    *plVar8 = (long)plVar15;
    *(long **)(lVar3 + unaff_x24 * 8) = plVar8;
    if (*plVar15 == 0) goto LAB_10ac100d8;
    uVar6 = *(ulong *)(*plVar15 + 8);
    if ((uVar9 & uVar9 - 1) == 0) {
      uVar6 = uVar6 & uVar9 - 1;
    }
    else if (uVar9 <= uVar6) {
      uVar16 = 0;
      if (uVar9 != 0) {
        uVar16 = uVar6 / uVar9;
      }
      uVar6 = uVar6 - uVar16 * uVar9;
    }
    plVar8 = (long *)(*param_1 + uVar6 * 8);
  }
  else {
    *plVar15 = *plVar8;
  }
  *plVar8 = (long)plVar15;
LAB_10ac100d8:
  param_1[3] = param_1[3] + 1;
  uVar5 = 1;
LAB_10ac100e8:
  auVar17._8_8_ = uVar5;
  auVar17._0_8_ = plVar15;
  return auVar17;
}



/* Entry: 10ac10160; end: 10ac1053f;  */

void FUN_10ac10160(ulong *param_1,byte *param_2)

{
  ulong *puVar1;
  undefined8 ***pppuVar2;
  byte bVar3;
  undefined8 **ppuVar4;
  code *pcVar5;
  byte **ppbVar6;
  undefined8 ***pppuVar7;
  ulong *puVar8;
  ulong uVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  undefined8 ***pppuVar13;
  uint uVar14;
  long lVar16;
  ulong *puVar17;
  undefined8 **ppuStack_110;
  undefined8 **ppuStack_108;
  undefined8 **ppuStack_100;
  undefined8 **ppuStack_f8;
  ulong uStack_f0;
  undefined8 uStack_e8;
  byte *pbStack_e0;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  byte *pbStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 **ppuStack_98;
  undefined8 **ppuStack_90;
  ulong uStack_88;
  ulong *puStack_80;
  undefined8 **ppuStack_78;
  undefined8 **ppuStack_70;
  undefined8 ***pppuVar15;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  bVar3 = *param_2;
  uVar9 = (ulong)bVar3;
  if (bVar3 != 0) {
    if (bVar3 == 1) {
      uVar9 = *(ulong *)(*(long *)(param_2 + 8) + 0x10);
    }
    else if (bVar3 == 2) {
      uVar9 = (*(long **)(param_2 + 8))[1] - **(long **)(param_2 + 8) >> 4;
    }
    else {
      uVar9 = 1;
    }
  }
  func_0x000107c31930(param_1,uVar9);
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0x8000000000000000;
  bVar3 = *param_2;
  if (bVar3 == 0) {
    uStack_a8 = 1;
  }
  else {
    if (bVar3 == 2) {
      uStack_b0 = **(undefined8 **)(param_2 + 8);
      puStack_d8 = (undefined8 *)0x0;
      uStack_c8 = 0x8000000000000000;
      uStack_d0 = (*(undefined8 **)(param_2 + 8))[1];
      goto LAB_10ac10258;
    }
    if (bVar3 == 1) {
      puStack_d8 = *(undefined8 **)(param_2 + 8) + 1;
      uStack_b8 = **(undefined8 **)(param_2 + 8);
      uStack_c8 = 0x8000000000000000;
      uStack_d0 = 0;
      goto LAB_10ac10258;
    }
    uStack_a8 = 0;
  }
  puStack_d8 = (undefined8 *)0x0;
  uStack_d0 = 0;
  uStack_c8 = 1;
LAB_10ac10258:
  pbStack_e0 = param_2;
  pbStack_c0 = param_2;
  do {
    ppbVar6 = &pbStack_c0;
    func_0x00010937c708(ppbVar6,&pbStack_e0);
    if ((int)ppbVar6 != 0) {
      return;
    }
    func_0x00010937c560(&pbStack_c0);
    func_0x00010937c804(&ppuStack_110);
    ppuVar4 = ppuStack_100;
    pppuVar7 = (undefined8 ***)ppuStack_108;
    pppuVar2 = (undefined8 ***)ppuStack_110;
    ppuStack_90 = ppuStack_100;
    ppuStack_98 = ppuStack_108;
    ppuStack_a0 = ppuStack_110;
    ppuStack_110 = (undefined8 ***)0x0;
    ppuStack_108 = (undefined8 ***)0x0;
    ppuStack_100 = (undefined8 ***)0x0;
    if (-1 < (long)ppuVar4) {
      pppuVar7 = (undefined8 ***)((ulong)ppuVar4 >> 0x38);
      pppuVar2 = &ppuStack_a0;
    }
    pppuVar13 = (undefined8 ***)((ulong)pppuVar7 & 0xffffffff);
    pppuVar15 = pppuVar7;
    do {
      pppuVar13 = (undefined8 ***)((long)pppuVar13 + -1);
      uVar14 = (uint)pppuVar15;
      pppuVar15 = (undefined8 ***)(ulong)(uVar14 - 1);
      uVar11 = (uint)pppuVar7 & (int)(uint)pppuVar7 >> 0x1f;
      if ((int)uVar14 < 1) break;
      if (pppuVar7 <= pppuVar13) goto LAB_10ac104d4;
      uVar11 = uVar14;
    } while (*(char *)((long)pppuVar2 + (long)pppuVar13) == '/');
    ppuStack_70 = pppuVar7;
    if ((undefined8 ***)(long)(int)uVar11 <= pppuVar7) {
      ppuStack_70 = (undefined8 ***)(long)(int)uVar11;
    }
    pppuVar7 = &ppuStack_78;
    ppuStack_78 = pppuVar2;
    FUN_10a1aea04(pppuVar7,&UNK_10f64210b,0xffffffffffffffff);
    ppuVar4 = ppuStack_78;
    pppuVar7 = (undefined8 ***)((long)pppuVar7 + 1);
    uVar9 = (long)ppuStack_70 - (long)pppuVar7;
    if (ppuStack_70 < pppuVar7) {
      FUN_109ffdddc(&UNK_10f2fca6e);
      goto LAB_10ac104d4;
    }
    if (0x7ffffffffffffff7 < uVar9) {
      func_0x000109ffde50();
      goto LAB_10ac104d4;
    }
    if (uVar9 < 0x17) {
      uStack_e8 = CONCAT17((char)uVar9,(undefined7)uStack_e8);
      pppuVar15 = &ppuStack_f8;
      if ((undefined8 ***)ppuStack_70 != pppuVar7) goto LAB_10ac10384;
    }
    else {
      pppuVar2 = (undefined8 ***)0x19;
      if ((uVar9 | 7) != 0x17) {
        pppuVar2 = (undefined8 ***)((uVar9 | 7) + 1);
      }
      pppuVar15 = pppuVar2;
      __Znwm();
      uStack_e8 = (ulong)pppuVar2 | 0x8000000000000000;
      ppuStack_f8 = pppuVar15;
      uStack_f0 = uVar9;
LAB_10ac10384:
      _memmove(pppuVar15,(long)ppuVar4 + (long)pppuVar7,uVar9);
    }
    *(undefined1 *)((long)pppuVar15 + uVar9) = 0;
    if ((long)ppuStack_90 < 0) {
      __ZdlPv(ppuStack_a0);
    }
    puVar17 = (ulong *)param_1[1];
    if (puVar17 < (ulong *)param_1[2]) {
      puVar17[1] = uStack_f0;
      *puVar17 = (ulong)ppuStack_f8;
      puVar17[2] = uStack_e8;
      puVar17 = puVar17 + 3;
    }
    else {
      lVar16 = (long)puVar17 - *param_1;
      uVar9 = (lVar16 >> 3) * -0x5555555555555555 + 1;
      if (0xaaaaaaaaaaaaaaa < uVar9) {
        FUN_10a05a0c0();
LAB_10ac104d4:
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10ac104d8);
        (*pcVar5)();
      }
      lVar10 = (long)((long)param_1[2] - *param_1) >> 3;
      uVar12 = lVar10 * 0x5555555555555556;
      if (uVar12 < uVar9 || uVar12 - uVar9 == 0) {
        uVar12 = uVar9;
      }
      if (0x555555555555554 < (ulong)(lVar10 * -0x5555555555555555)) {
        uVar12 = 0xaaaaaaaaaaaaaaa;
      }
      puVar8 = param_1;
      puStack_80 = param_1;
      FUN_10a05a0d4();
      puVar1 = (ulong *)((long)puVar8 + lVar16);
      puVar1[1] = uStack_f0;
      *puVar1 = (ulong)ppuStack_f8;
      puVar1[2] = uStack_e8;
      puVar17 = puVar1 + 3;
      uVar9 = (long)puVar1 - (param_1[1] - *param_1);
      _memcpy(uVar9);
      ppuStack_a0 = (undefined8 **)*param_1;
      *param_1 = uVar9;
      param_1[1] = (ulong)puVar17;
      uStack_88 = param_1[2];
      param_1[2] = (ulong)(puVar8 + uVar12 * 3);
      ppuStack_98 = ppuStack_a0;
      ppuStack_90 = ppuStack_a0;
      func_0x000107c31938(&ppuStack_a0);
    }
    param_1[1] = (ulong)puVar17;
    if ((long)ppuStack_100 < 0) {
      __ZdlPv(ppuStack_110);
    }
    func_0x00010937c698(&pbStack_c0);
  } while( true );
}



/* Entry: 10ac10540; end: 10ac1060b;  */

undefined1  [16] FUN_10ac10540(char *param_1,ulong param_2)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  char *pcVar6;
  undefined1 auVar7 [16];
  
  if (param_2 != 0) {
    uVar3 = 0;
    uVar4 = param_2;
    pcVar6 = param_1;
    do {
      puVar2 = &UNK_10f63cb7f;
      _memchr(&UNK_10f63cb7f,(long)*pcVar6,4);
      if (puVar2 == (undefined *)0x0) goto LAB_10ac1059c;
      pcVar6 = pcVar6 + 1;
      uVar3 = uVar3 + 1;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  uVar3 = 0xffffffffffffffff;
LAB_10ac1059c:
  uVar4 = param_2;
  if (uVar3 <= param_2) {
    uVar4 = uVar3;
  }
  lVar5 = ~param_2 + uVar4;
  pcVar6 = param_1 + param_2;
  do {
    pcVar6 = pcVar6 + -1;
    if (lVar5 == -1) {
      lVar5 = 0;
      break;
    }
    puVar2 = &UNK_10f63cb7f;
    _memchr(&UNK_10f63cb7f,(long)*pcVar6,4);
    lVar5 = lVar5 + 1;
  } while (puVar2 != (undefined *)0x0);
  param_2 = param_2 - uVar4;
  lVar1 = 0;
  if (lVar5 + param_2 <= param_2) {
    lVar1 = param_2 - (lVar5 + param_2);
  }
  auVar7._8_8_ = lVar1;
  auVar7._0_8_ = param_1 + uVar4;
  return auVar7;
}



/* Entry: 10ac1060c; end: 10ac1062b;  */

undefined1  [16] FUN_10ac1060c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x24;
  auVar1._0_8_ = &UNK_10f64131a;
  return auVar1;
}



/* Entry: 10ac1062c; end: 10ac10693;  */

bool FUN_10ac1062c(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  
  if (param_3 == 0x24) {
    iVar2 = 0xf64131a;
    _memcmp(&UNK_10f64131a,param_2);
    if (iVar2 == 0) {
      return true;
    }
  }
  if ((param_3 == 0xf) &&
     (*param_2 == 0x5065727574786554 && *(long *)((long)param_2 + 7) == 0x72656469766f7250)) {
    return true;
  }
  if (param_3 == 0xc) {
    bVar1 = false;
    if (*param_2 == 0x624f747069726353) {
      bVar1 = (int)param_2[1] == 0x7463656a;
    }
  }
  else {
    if (param_3 != 8) {
      return false;
    }
    bVar1 = *param_2 == 0x72656469766f7250;
  }
  return bVar1;
}



/* Entry: 10ac10694; end: 10ac1069b;  */

bool FUN_10ac10694(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  
  if (param_3 == 0x24) {
    iVar2 = 0xf64131a;
    _memcmp(&UNK_10f64131a,param_2);
    if (iVar2 == 0) {
      return true;
    }
  }
  if ((param_3 == 0xf) &&
     (*param_2 == 0x5065727574786554 && *(long *)((long)param_2 + 7) == 0x72656469766f7250)) {
    return true;
  }
  if (param_3 == 0xc) {
    bVar1 = false;
    if (*param_2 == 0x624f747069726353) {
      bVar1 = (int)param_2[1] == 0x7463656a;
    }
  }
  else {
    if (param_3 != 8) {
      return false;
    }
    bVar1 = *param_2 == 0x72656469766f7250;
  }
  return bVar1;
}



/* Entry: 10ac1069c; end: 10ac10eab;  */

void FUN_10ac1069c(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 **appuStack_c8 [2];
  char cStack_b1;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(appuStack_c8,&UNK_10f64131a,0x24);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c5ef68;
  pppuVar2 = (undefined8 ***)&UNK_10f69b9ca;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c5ef68;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110bb3788;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac10e8c;
    FUN_10a054dac(param_1,&DAT_10f2ee801,FUN_10ac42a8c,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac10e8c;
    FUN_10a054dac(param_1,&DAT_10f684680,FUN_10ac42bf8,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac10e8c;
    FUN_10a054dac(param_1,&DAT_10f2ee806,FUN_10ac42cac,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac10e8c;
    FUN_10a054dac(param_1,"resume",FUN_10ac42d6c,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac10e8c;
    FUN_10a054dac(param_1,&UNK_10f69b9cb,FUN_10ac42e2c,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac10e8c;
    FUN_10a054dac(param_1,&UNK_10f69b9d9,FUN_10ac42f08,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac10e8c;
    FUN_10a054dac(param_1,&UNK_10f69b9e6,FUN_10ac42fd0,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac10e8c;
    FUN_10a054dac(param_1,&UNK_10f69b9f5,FUN_10ac43090,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,2,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac10e8c;
    FUN_10a054dac(param_1,&UNK_10f68c716,FUN_10ac43158,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac10e8c;
    FUN_10a054dac(param_1,&DAT_10f3becc6,FUN_10ac43224,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac10e8c;
    FUN_10a054dac(param_1,&DAT_10f385236,FUN_10ac43364,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac10e8c;
    FUN_10a054dac(param_1,"isFinished",FUN_10ac43420,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac10e8c;
    FUN_10a054dac(param_1,&UNK_10f656bd6,FUN_10ac434dc,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac10e8c;
    FUN_10a054dac(param_1,&UNK_10f64f5cc,FUN_10ac437e4,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac10e8c;
    FUN_10a054dac(param_1,&UNK_10f69ba0c,FUN_10ac43950,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac10e8c;
    FUN_10a054dac(param_1,&UNK_10f69ba22,FUN_10ac43a58,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ac10e8c;
    FUN_10a054dac(param_1,&UNK_10f69ba3d,FUN_10ac43ba0,2,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f69ba4c,FUN_10ac43d18,FUN_10ac43dd4);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f69ba57,FUN_10ac43f14,FUN_10ac43fe4);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f69ba62,FUN_10ac4409c,FUN_10ac44158);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,"duration",FUN_10ac44244,FUN_10ac4431c);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,2,0x116,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f2f2731,FUN_10ac44410,FUN_10ac4452c);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f69ba6d,FUN_10ac44b10,FUN_10ac44c14);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_98 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_a0 = *(undefined8 ***)(lVar3 + -0x68);
    uStack_78 = *(undefined8 *)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_90 = *(undefined8 *)(lVar3 + -0x58);
    uStack_68 = *(undefined8 *)(lVar3 + -0x30);
    uStack_70 = *(undefined8 *)(lVar3 + -0x38);
    uStack_58 = *(undefined8 *)(lVar3 + -0x20);
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uStack_50 = *(ulong *)(lVar3 + -0x18);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar9;
    uStack_80 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uStack_50 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f64131a,0x24);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10ac10e8c:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10ac10e90);
  (*pcVar6)();
}



/* Entry: 10ac10eac; end: 10ac10f23;  */

undefined8 FUN_10ac10eac(undefined8 param_1,undefined8 param_2)

{
  undefined8 auStack_38 [2];
  char cStack_21;
  
  func_0x000107c2b054(auStack_38,&UNK_10f69b9ca);
  FUN_10ac10f24(param_1,param_2,auStack_38);
  if (cStack_21 < '\0') {
    __ZdlPv(auStack_38[0]);
  }
  return param_1;
}



/* Entry: 10ac10f24; end: 10ac10fb3;  */

undefined8 FUN_10ac10f24(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 auStack_58 [2];
  char cStack_41;
  undefined8 uStack_40;
  char cStack_29;
  
  FUN_10a107e2c(auStack_58,param_3,*(long *)(param_2 + 0x100) + 0x220,0);
  FUN_10ac10fb4(param_1,param_2,auStack_58,0);
  if (cStack_29 < '\0') {
    __ZdlPv(uStack_40);
  }
  if (cStack_41 < '\0') {
    __ZdlPv(auStack_58[0]);
  }
  return param_1;
}



/* Entry: 10ac10fb4; end: 10ac114d3;  */

/* WARNING: Removing unreachable block (ram,0x00010ac11960) */
/* WARNING: Removing unreachable block (ram,0x00010ac11964) */
/* WARNING: Removing unreachable block (ram,0x00010ac1196c) */
/* WARNING: Removing unreachable block (ram,0x00010ac11974) */
/* WARNING: Removing unreachable block (ram,0x00010ac11978) */

undefined *** FUN_10ac10fb4(undefined ***param_1,long param_2,long param_3,undefined1 param_4)

{
  undefined ***pppuVar1;
  undefined ***pppuVar2;
  undefined ***pppuVar3;
  undefined ***pppuVar4;
  int iVar5;
  float *pfVar6;
  ushort uVar7;
  ushort uVar8;
  char cVar9;
  bool bVar10;
  undefined **ppuVar11;
  code *pcVar12;
  int iVar13;
  undefined **ppuVar14;
  undefined8 uVar15;
  undefined ***pppuVar16;
  undefined ***pppuVar17;
  undefined ***pppuVar18;
  undefined **ppuVar19;
  long *plVar20;
  long *plVar21;
  undefined ***pppuVar22;
  undefined **ppuVar23;
  undefined *puVar24;
  long lVar25;
  undefined **ppuVar26;
  undefined *puVar27;
  ulong uVar28;
  ulong uVar29;
  float *pfVar30;
  ulong uVar31;
  int iVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  long *plStack_188;
  long *plStack_180;
  undefined1 auStack_178 [8];
  long *plStack_170;
  undefined *puStack_168;
  uint uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined8 uStack_154;
  undefined8 uStack_14c;
  undefined4 uStack_144;
  undefined1 uStack_140;
  undefined8 uStack_138;
  undefined ***pppuStack_130;
  undefined8 uStack_128;
  undefined ***pppuStack_120;
  undefined ***pppuStack_118;
  undefined ***pppuStack_110;
  undefined ***pppuStack_108;
  undefined ***pppuStack_100;
  undefined ***pppuStack_f8;
  undefined ***pppuStack_f0;
  undefined ***pppuStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  long lStack_d0;
  long *plStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined **ppuStack_b0;
  undefined ***pppuStack_a8;
  undefined1 uStack_a0;
  undefined8 uStack_78;
  long *plStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  param_1[0x93] = &PTR_FUN_110c383b8;
  param_1[0x95] = (undefined **)0x0;
  param_1[0x94] = (undefined **)0x0;
  *(undefined2 *)(param_1 + 0x96) = 0x100;
  pppuVar18 = param_1;
  FUN_10a1da04c(param_1,&PTR_PTR_110c55be8,param_2);
  FUN_10aaea2c8(pppuVar18 + 0x51,param_3);
  *param_1 = &PTR_DAT_110c55910;
  param_1[2] = &PTR_FUN_110c55a68;
  param_1[5] = &PTR_FUN_110c55a98;
  param_1[0x93] = &PTR_FUN_110c55ba8;
  param_1[0x15] = &PTR_FUN_110c55af0;
  param_1[0x5b] = &PTR_FUN_110c55b10;
  param_1[0x5c] = &PTR_FUN_110c55b48;
  ppuVar14 = (undefined **)0x58;
  __Znwm();
  pppuVar18 = param_1 + 0x5d;
  ppuVar14[2] = (undefined *)0x0;
  ppuVar14[1] = (undefined *)0x0;
  *ppuVar14 = (undefined *)&PTR_DAT_110bf7fc8;
  ppuVar14[8] = (undefined *)0x0;
  ppuVar14[7] = (undefined *)0x0;
  ppuVar14[6] = (undefined *)0x0;
  ppuVar14[5] = (undefined *)0x0;
  *(undefined8 *)((long)ppuVar14 + 0x4d) = 0;
  *(undefined8 *)((long)ppuVar14 + 0x45) = 0;
  ppuVar14[4] = (undefined *)0x0;
  ppuVar14[3] = (undefined *)0x0;
  param_1[0x5d] = ppuVar14 + 3;
  param_1[0x5e] = ppuVar14;
  FUN_10a5cf1fc(pppuVar18);
  *(undefined1 *)(param_1 + 0x5f) = 0;
  *(undefined4 *)((long)param_1 + 0x31c) = 0x3f800000;
  *(undefined8 *)((long)param_1 + 0x304) = 0;
  *(undefined8 *)((long)param_1 + 0x2fc) = 0x3f800000;
  *(undefined8 *)((long)param_1 + 0x314) = 0;
  *(undefined8 *)((long)param_1 + 0x30c) = 0x3f800000;
  pppuVar22 = param_1 + 100;
  pppuVar1 = param_1 + 0x67;
  pppuVar2 = param_1 + 0x6c;
  param_1[0x6d] = (undefined **)0x0;
  param_1[0x6c] = (undefined **)0x0;
  param_1[0x65] = (undefined **)0x0;
  param_1[100] = (undefined **)0x0;
  param_1[0x67] = (undefined **)0x0;
  param_1[0x66] = (undefined **)0x0;
  param_1[0x69] = (undefined **)0x0;
  param_1[0x68] = (undefined **)0x0;
  param_1[0x6a] = (undefined **)0x0;
  param_1[0x6b] = (undefined **)pppuVar2;
  pppuVar3 = param_1 + 0x6e;
  func_0x000107c2b054(pppuVar3,"default");
  *(undefined8 *)((long)param_1 + 0x396) = 0;
  param_1[0x72] = (undefined **)0x0;
  param_1[0x71] = (undefined **)0x0;
  if ((bRam00000001137ec6a0 & 1) == 0) {
    bRam00000001137ec6a0 = 1;
  }
  *(undefined1 *)(param_1 + 0x74) = param_4;
  pppuVar4 = param_1 + 0x75;
  param_1[0x76] = (undefined **)0x0;
  *pppuVar4 = (undefined **)0x0;
  param_1[0x78] = (undefined **)0x0;
  param_1[0x77] = (undefined **)0x0;
  param_1[0x7a] = (undefined **)0x0;
  param_1[0x79] = (undefined **)0x0;
  if ((bRam00000001137ec6a2 & 1) == 0) {
    bRam00000001137ec6a2 = 1;
  }
  *(undefined1 *)(param_1 + 0x7b) = 0;
  *(undefined8 *)((long)param_1 + 0x3e4) = 0;
  *(undefined8 *)((long)param_1 + 0x3dc) = 0;
  *(undefined8 *)((long)param_1 + 0x3f4) = 0;
  *(undefined8 *)((long)param_1 + 0x3ec) = 0;
  *(undefined8 *)((long)param_1 + 0x3fc) = 0;
  *(undefined8 *)((long)param_1 + 0x404) = 0x1869f0001869f;
  *(undefined1 *)(param_1 + 0x8c) = 0;
  *(undefined8 *)((long)param_1 + 0x46c) = 0;
  *(undefined8 *)((long)param_1 + 0x464) = 0;
  *(undefined8 *)((long)param_1 + 0x47c) = 0;
  *(undefined8 *)((long)param_1 + 0x474) = 0;
  *(undefined8 *)((long)param_1 + 0x484) = 0;
  param_1[0x92] = (undefined **)0x0;
  param_1[0x83] = (undefined **)0x0;
  param_1[0x82] = (undefined **)0x0;
  param_1[0x85] = (undefined **)0x0;
  param_1[0x84] = (undefined **)0x0;
  param_1[0x87] = (undefined **)0x0;
  param_1[0x86] = (undefined **)0x0;
  param_1[0x89] = (undefined **)0x0;
  param_1[0x88] = (undefined **)0x0;
  *(undefined8 *)((long)param_1 + 0x456) = 0;
  *(undefined8 *)((long)param_1 + 0x44e) = 0;
  uVar7 = *(ushort *)((long)param_1 + 0x101);
  *(ushort *)((long)param_1 + 0x101) = uVar7 & 0xff80 | uVar7 + 1 & 0x7f;
  uStack_a0 = 1;
  pcStack_b8 = FUN_10a1d0710;
  ppuStack_b0 = &PTR_FUN_110bad6c8;
  pppuStack_a8 = param_1 + 0x15;
  func_0x00010a1ec43c(param_1 + 0x47,1);
  FUN_10a5ae998(*pppuVar18,&PTR_DAT_110bd31c8,param_2,param_1 + 0x5c);
  FUN_10ac12be8(&lStack_d0,param_2);
  FUN_10ac12adc(pppuVar1,&lStack_d0);
  if (plStack_c8 != (long *)0x0) {
    plVar20 = plStack_c8 + 1;
    do {
      lVar25 = *plVar20;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar10) {
        *plVar20 = lVar25 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (lVar25 == 0) {
      (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_c8);
    }
  }
  uStack_78 = 0;
  plStack_70 = (long *)0xffffffff41200000;
  plStack_c8 = (long *)0x0;
  uStack_c0 = 0;
  lStack_d0 = 0;
  FUN_10ac405fc(&lStack_d0,&uStack_78,&lStack_68);
  func_0x00010aa83d64(*pppuVar1 + 0x1c,&lStack_d0);
  FUN_10ac12be8(&uStack_78,param_2);
  FUN_10ac12adc(param_1 + 0x65,&uStack_78);
  plVar20 = plStack_70;
  if (plStack_70 != (long *)0x0) {
    plVar21 = plStack_70 + 1;
    do {
      lVar25 = *plVar21;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar10) {
        *plVar21 = lVar25 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (lVar25 == 0) {
      (**(code **)(*plStack_70 + 0x10))(plStack_70);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar20);
    }
  }
  if (param_2 == 0) {
    puVar27 = &UNK_10f68c7e9;
LAB_10ac113c8:
    FUN_10aa9d388(puVar27);
                    /* WARNING: Does not return */
    pcVar12 = (code *)SoftwareBreakpoint(1,0x10ac113d0);
    (*pcVar12)();
  }
  if (*(long *)(param_2 + 0x850) == 0) {
    puVar27 = &UNK_10f68c7f7;
    goto LAB_10ac113c8;
  }
  uVar15 = 0x68;
  __Znwm();
  FUN_10acdcc24();
  FUN_10aa9d34c(pppuVar22,uVar15);
  ppuVar14 = *pppuVar22;
  fVar33 = *(float *)(*pppuVar1 + 0x20);
  *(float *)((long)ppuVar14 + 0x34) = fVar33;
  ppuVar14[3] = (undefined *)(param_1 + 0x5b);
  *(undefined1 *)(ppuVar14 + 2) = 1;
  *(undefined2 *)(ppuVar14 + 4) = 0;
  if (lStack_d0 != 0) {
    plStack_c8 = (long *)lStack_d0;
    __ZdlPv();
  }
  uVar29 = *(ulong *)(param_3 + 8);
  if (-1 < (char)*(byte *)(param_3 + 0x17)) {
    uVar29 = (ulong)*(byte *)(param_3 + 0x17);
  }
  if (uVar29 != 0) {
    FUN_10ac114d4(param_1,0);
  }
  FUN_10a044790(&pcStack_b8);
  pppuVar16 = &ppuStack_b0;
  (*(code *)*ppuStack_b0)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_1;
  }
  ___stack_chk_fail();
  __ZdlPv(uVar15);
  if (lStack_d0 != 0) {
    plStack_c8 = (long *)lStack_d0;
    __ZdlPv();
  }
  FUN_10a044790(&pcStack_b8);
  (*(code *)*ppuStack_b0)(&ppuStack_b0);
  ppuVar14 = param_1[0x92];
  param_1[0x92] = (undefined **)0x0;
  if (ppuVar14 != (undefined **)0x0) {
    func_0x00010ac4574c();
  }
  FUN_10ac3f800(param_1 + 0x88);
  FUN_10ac11a54(param_1 + 0x7b);
  func_0x00010ac44dc0(param_1 + 0x78);
  FUN_10ac44e1c(pppuVar4);
  if (*(char *)((long)param_1 + 0x387) < '\0') {
    __ZdlPv(*pppuVar3);
  }
  func_0x00010951ec58(param_1 + 0x6b,*pppuVar2);
  func_0x00010ac44d24(param_1 + 0x69);
  func_0x00010ac44ccc(pppuVar1);
  func_0x00010ac44ccc(param_1 + 0x65);
  FUN_10aa9d34c(pppuVar22,0);
  func_0x00010a004e5c(pppuVar18);
  FUN_10a1e3810(param_1 + 0x51);
  ppuVar14 = &PTR_PTR_110c55be8;
  FUN_10a00dc70(param_1);
  pppuVar17 = pppuVar16;
  __Unwind_Resume();
  pcStack_d8 = FUN_10ac114d4;
  ppuVar11 = pppuVar17[0x5f];
  pppuStack_130 = pppuVar2;
  uStack_128 = uVar15;
  pppuStack_120 = param_1 + 0x5b;
  pppuStack_118 = pppuVar4;
  pppuStack_110 = pppuVar16;
  pppuStack_108 = pppuVar3;
  pppuStack_100 = pppuVar1;
  pppuStack_f8 = pppuVar22;
  pppuStack_f0 = pppuVar18;
  pppuStack_e8 = param_1;
  puStack_e0 = &stack0xfffffffffffffff0;
  FUN_10ac12d9c();
  pppuVar18 = pppuVar17;
  FUN_10ac15608(pppuVar17);
  if ((*(byte *)(pppuVar17 + 0x5f) >> 4 & 1) != 0) {
    if ((int)ppuVar14 != 0) {
      pppuVar18 = (undefined ***)pppuVar17[100];
      FUN_10acdc738(pppuVar18);
      fVar33 = fVar33 / *(float *)((long)pppuVar17[100] + 0x34);
      fVar34 = 0.0;
      if (0.0 <= fVar33) {
        fVar34 = fVar33;
      }
      fVar33 = 1.0;
      if (fVar34 <= 1.0) {
        fVar33 = fVar34;
      }
      ppuVar14 = pppuVar17[0x65];
      puVar27 = ppuVar14[0x1d];
      pfVar6 = (float *)ppuVar14[0x1e];
      lVar25 = (long)pfVar6 - (long)puVar27;
      uVar29 = lVar25 >> 3;
      if (uVar29 < 3) {
        ppuVar23 = pppuVar17[0x92];
        if (ppuVar23[6] == ppuVar23[7]) goto LAB_10ac119cc;
        fVar34 = (float)NEON_ucvtf(*(undefined4 *)(ppuVar23[7] + -4));
        iVar32 = (int)(fVar33 * fVar34);
      }
      else {
        pfVar30 = (float *)(puVar27 + 8);
        uVar28 = uVar29;
        if (pfVar30 != pfVar6) {
          uVar28 = (long)pfVar6 - (long)pfVar30 >> 3;
          do {
            uVar31 = uVar28 >> 1;
            pfVar6 = pfVar30 + uVar31 * 2 + 2;
            uVar28 = uVar28 + (uVar28 >> 1 ^ 0xffffffffffffffff);
            if (fVar33 * *(float *)(ppuVar14 + 0x20) <= pfVar30[uVar31 * 2]) {
              pfVar6 = pfVar30;
              uVar28 = uVar31;
            }
            pfVar30 = pfVar6;
          } while (uVar28 != 0);
          lVar25 = (long)pfVar6 - (long)puVar27;
          uVar28 = lVar25 >> 3;
        }
        if ((uVar29 <= uVar28 - 1) || (uVar29 <= uVar28)) {
LAB_10ac119cc:
                    /* WARNING: Does not return */
          pcVar12 = (code *)SoftwareBreakpoint(1,0x10ac119d0);
          (*pcVar12)();
        }
        fVar35 = *(float *)(puVar27 + (uVar28 - 1) * 8);
        fVar34 = *(float *)((long)(puVar27 + (uVar28 - 1) * 8) + 4);
        ppuVar23 = pppuVar17[0x92];
        uVar29 = (ulong)(int)((float)(int)fVar34 +
                             ((fVar33 * *(float *)(ppuVar14 + 0x20) - fVar35) /
                             (*(float *)(puVar27 + lVar25) - fVar35)) *
                             (float)((int)*(float *)((long)(puVar27 + lVar25) + 4) - (int)fVar34));
        if ((ulong)((long)ppuVar23[7] - (long)ppuVar23[6] >> 2) <= uVar29) goto LAB_10ac119cc;
        iVar32 = *(int *)(ppuVar23[6] + uVar29 * 4);
      }
      if (iVar32 != *(int *)ppuVar23) {
        FUN_10ac126cc(pppuVar17,pppuVar17 + 0x52);
        ppuVar23 = pppuVar17[0x92];
        ppuVar14 = ppuVar23 + 1;
        uVar8 = *(ushort *)ppuVar14;
        uVar7 = *(ushort *)((long)ppuVar23 + 10);
        ppuVar26 = ppuVar23 + 0x11;
        if (*ppuVar26 == (undefined *)0x0) {
          puStack_168 = (undefined *)((ulong)uVar8 << 0x20);
          uStack_160 = (uint)uVar7;
          uStack_154 = 0;
          uStack_15c = 1;
          uStack_158 = 4;
          uStack_14c = 0x100000001;
          uStack_144 = 0;
          uStack_140 = 0;
          uStack_138 = 0;
          ppuVar19 = pppuVar17[0x12];
          FUN_10a2421c8();
          plVar20 = (long *)ppuVar19[0x45];
          (**(code **)(*plVar20 + 0x20))(plVar20,&puStack_168);
          FUN_10a0a25e4(auStack_178,plVar20);
          ppuVar19 = pppuVar17[0x12];
          plVar21 = (long *)0x2d0;
          __Znwm();
          plVar21[1] = 0;
          plVar21[2] = 0;
          *plVar21 = (long)&PTR_FUN_110b9fcf0;
          plVar20 = plVar21 + 3;
          FUN_10a1db5e8(plVar20,ppuVar19,auStack_178);
          plStack_188 = plVar20;
          plStack_180 = plVar21;
          FUN_10a063ca4(&plStack_188,plVar21 + 0xb,plVar20);
          FUN_10a02bf24(ppuVar26,&plStack_188);
          plVar20 = plStack_180;
          if (plStack_180 != (long *)0x0) {
            plVar21 = plStack_180 + 1;
            do {
              lVar25 = *plVar21;
              cVar9 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(plVar21,0x10);
              if (bVar10) {
                *plVar21 = lVar25 + -1;
                cVar9 = ExclusiveMonitorsStatus();
              }
            } while (cVar9 != '\0');
            if (lVar25 == 0) {
              (**(code **)(*plStack_180 + 0x10))(plStack_180);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar20);
            }
          }
          plStack_188 = (long *)*ppuVar26;
          if (plStack_188 == (long *)0x0) {
            plStack_180 = (long *)0x0;
          }
          else {
            plStack_180 = (long *)ppuVar23[0x12];
            if (plStack_180 != (long *)0x0) {
              plVar20 = plStack_180 + 1;
              do {
                cVar9 = '\x01';
                bVar10 = (bool)ExclusiveMonitorPass(plVar20,0x10);
                if (bVar10) {
                  *plVar20 = *plVar20 + 1;
                  cVar9 = ExclusiveMonitorsStatus();
                }
              } while (cVar9 != '\0');
            }
          }
          FUN_10a1e3a04(pppuVar17,&plStack_188);
          plVar20 = plStack_180;
          if (plStack_180 != (long *)0x0) {
            plVar21 = plStack_180 + 1;
            do {
              lVar25 = *plVar21;
              cVar9 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(plVar21,0x10);
              if (bVar10) {
                *plVar21 = lVar25 + -1;
                cVar9 = ExclusiveMonitorsStatus();
              }
            } while (cVar9 != '\0');
            if (lVar25 == 0) {
              (**(code **)(*plStack_180 + 0x10))(plStack_180);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar20);
            }
          }
          if (plStack_170 != (long *)0x0) {
            plVar20 = plStack_170 + 1;
            do {
              lVar25 = *plVar20;
              cVar9 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(plVar20,0x10);
              if (bVar10) {
                *plVar20 = lVar25 + -1;
                cVar9 = ExclusiveMonitorsStatus();
              }
            } while (cVar9 != '\0');
            if (lVar25 == 0) {
              (**(code **)(*plStack_170 + 0x10))(plStack_170);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_170);
            }
          }
        }
        FUN_10a1b2218(ppuVar14,iVar32);
        pppuVar18 = *(undefined ****)(ppuVar23[0x11] + 0x288);
        (*(code *)(*pppuVar18)[0x14])(pppuVar18,0,0,0,uVar8,uVar7,0,ppuVar14,0);
        *(int *)ppuVar23 = iVar32;
      }
    }
    goto LAB_10ac117cc;
  }
  pppuVar18 = pppuVar17;
  func_0x00010ac17c34();
  ppuVar23 = pppuVar17[0x75];
  uVar29 = ((long)pppuVar17[0x76] - (long)ppuVar23 >> 3) * 0x4ec4ec4ec4ec4ec5;
  iVar32 = (int)uVar29;
  if (iVar32 < 2) {
    iVar32 = 1;
  }
  iVar13 = (int)pppuVar18;
  iVar5 = iVar32 + -1;
  if (iVar13 <= iVar32 + -1) {
    iVar5 = iVar13;
  }
  iVar32 = 0;
  if (-1 < iVar13) {
    iVar32 = iVar5;
  }
  if (pppuVar17[0x76] == ppuVar23) {
LAB_10ac11600:
    pppuVar22 = (undefined ***)0x1137ec6b8;
    ppuVar26 = (undefined **)0x1137ec6d0;
    if (((bRam00000001137ec6b8 & 1) == 0) &&
       (pppuVar18 = pppuVar22, ___cxa_guard_acquire(), (int)pppuVar18 != 0)) {
      ppuVar26 = (undefined **)0x1137ec6d0;
      ___cxa_atexit(FUN_10ac161cc,0x1137ec6d0,0x100000000);
      ___cxa_guard_release(0x1137ec6b8);
      pppuVar18 = pppuVar22;
    }
  }
  else {
    ppuVar26 = pppuVar17[0x78];
    if (ppuVar26 == pppuVar17[0x79]) goto LAB_10ac11600;
    if (uVar29 < (ulong)(long)iVar32 || uVar29 - (long)iVar32 == 0) goto LAB_10ac119cc;
    uVar29 = (ulong)*(uint *)((long)ppuVar23 + (long)iVar32 * 0x68 + 0x2c);
    if ((ulong)((long)pppuVar17[0x79] - (long)ppuVar26 >> 4) <= uVar29) {
      uVar29 = 0;
    }
    ppuVar26 = ppuVar26 + uVar29 * 2;
  }
  puVar27 = *ppuVar26;
  if (puVar27 != (undefined *)0x0) {
    puVar24 = ppuVar26[1];
    uStack_160 = (uint)puVar24;
    uStack_15c = (undefined4)((ulong)puVar24 >> 0x20);
    if (puVar24 != (undefined *)0x0) {
      plVar20 = (long *)(puVar24 + 8);
      do {
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar20,0x10);
        if (bVar10) {
          *plVar20 = *plVar20 + 1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
    }
    puStack_168 = puVar27;
    FUN_10a1e3a04(pppuVar17,&puStack_168);
    plVar20 = (long *)CONCAT44(uStack_15c,uStack_160);
    if (plVar20 != (long *)0x0) {
      plVar21 = plVar20 + 1;
      do {
        lVar25 = *plVar21;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar10) {
          *plVar21 = lVar25 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (lVar25 == 0) {
        (**(code **)(*plVar20 + 0x10))(plVar20);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar20);
      }
    }
    pppuVar18 = (undefined ***)*ppuVar26;
    func_0x00010ac60df8(pppuVar18,ppuVar14);
  }
LAB_10ac117cc:
  if (((ulong)ppuVar11 & 1) == 0) {
    pppuVar18 = pppuVar17 + 0x15;
    FUN_10a1c08dc(pppuVar18);
  }
  return pppuVar18;
}



/* Entry: 10ac114d4; end: 10ac11a53;  */

/* WARNING: Removing unreachable block (ram,0x00010ac11960) */
/* WARNING: Removing unreachable block (ram,0x00010ac11964) */
/* WARNING: Removing unreachable block (ram,0x00010ac1196c) */
/* WARNING: Removing unreachable block (ram,0x00010ac11974) */
/* WARNING: Removing unreachable block (ram,0x00010ac11978) */

void FUN_10ac114d4(float param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  float *pfVar2;
  byte bVar3;
  ushort uVar4;
  ushort uVar5;
  char cVar6;
  bool bVar7;
  code *pcVar8;
  int iVar9;
  ushort *puVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  int *piVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  float *pfVar19;
  ulong uVar20;
  int iVar21;
  long *plVar22;
  undefined8 uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  long *plStack_b8;
  long *plStack_b0;
  undefined1 auStack_a8 [8];
  long *plStack_a0;
  long lStack_98;
  uint uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined8 uStack_84;
  undefined8 uStack_7c;
  undefined4 uStack_74;
  undefined1 uStack_70;
  undefined8 uStack_68;
  
  bVar3 = *(byte *)(param_2 + 0x2f8);
  FUN_10ac12d9c();
  FUN_10ac15608(param_2);
  if ((*(byte *)(param_2 + 0x2f8) >> 4 & 1) != 0) {
    if ((int)param_3 != 0) {
      FUN_10acdc738(*(undefined8 *)(param_2 + 800));
      param_1 = param_1 / *(float *)(*(long *)(param_2 + 800) + 0x34);
      fVar25 = 0.0;
      if (0.0 <= param_1) {
        fVar25 = param_1;
      }
      fVar24 = 1.0;
      if (fVar25 <= 1.0) {
        fVar24 = fVar25;
      }
      lVar18 = *(long *)(param_2 + 0x328);
      lVar15 = *(long *)(lVar18 + 0xe8);
      pfVar2 = *(float **)(lVar18 + 0xf0);
      lVar13 = (long)pfVar2 - lVar15;
      uVar17 = lVar13 >> 3;
      if (uVar17 < 3) {
        piVar14 = *(int **)(param_2 + 0x490);
        if (*(long *)(piVar14 + 0xc) == *(long *)(piVar14 + 0xe)) goto LAB_10ac119cc;
        fVar25 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(piVar14 + 0xe) + -4));
        iVar21 = (int)(fVar24 * fVar25);
      }
      else {
        fVar24 = fVar24 * *(float *)(lVar18 + 0x100);
        pfVar19 = (float *)(lVar15 + 8);
        uVar16 = uVar17;
        if (pfVar19 != pfVar2) {
          uVar16 = (long)pfVar2 - (long)pfVar19 >> 3;
          do {
            uVar20 = uVar16 >> 1;
            pfVar2 = pfVar19 + uVar20 * 2 + 2;
            uVar16 = uVar16 + (uVar16 >> 1 ^ 0xffffffffffffffff);
            if (fVar24 <= pfVar19[uVar20 * 2]) {
              pfVar2 = pfVar19;
              uVar16 = uVar20;
            }
            pfVar19 = pfVar2;
          } while (uVar16 != 0);
          lVar13 = (long)pfVar2 - lVar15;
          uVar16 = lVar13 >> 3;
        }
        if ((uVar17 <= uVar16 - 1) || (uVar17 <= uVar16)) {
LAB_10ac119cc:
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x10ac119d0);
          (*pcVar8)();
        }
        pfVar2 = (float *)(lVar15 + (uVar16 - 1) * 8);
        fVar26 = *pfVar2;
        fVar25 = pfVar2[1];
        piVar14 = *(int **)(param_2 + 0x490);
        uVar17 = (ulong)(int)((float)(int)fVar25 +
                             ((fVar24 - fVar26) / (*(float *)(lVar15 + lVar13) - fVar26)) *
                             (float)((int)((float *)(lVar15 + lVar13))[1] - (int)fVar25));
        if ((ulong)(*(long *)(piVar14 + 0xe) - *(long *)(piVar14 + 0xc) >> 2) <= uVar17)
        goto LAB_10ac119cc;
        iVar21 = *(int *)(*(long *)(piVar14 + 0xc) + uVar17 * 4);
      }
      if (iVar21 != *piVar14) {
        FUN_10ac126cc(param_2,param_2 + 0x290);
        piVar14 = *(int **)(param_2 + 0x490);
        puVar10 = (ushort *)(piVar14 + 2);
        uVar5 = *puVar10;
        uVar4 = *(ushort *)((long)piVar14 + 10);
        plVar22 = (long *)(piVar14 + 0x22);
        if (*plVar22 == 0) {
          lStack_98 = (ulong)uVar5 << 0x20;
          uStack_90 = (uint)uVar4;
          uStack_84 = 0;
          uStack_8c = 1;
          uStack_88 = 4;
          uStack_7c = 0x100000001;
          uStack_74 = 0;
          uStack_70 = 0;
          uStack_68 = 0;
          lVar15 = *(long *)(param_2 + 0x90);
          FUN_10a2421c8();
          plVar11 = *(long **)(lVar15 + 0x228);
          (**(code **)(*plVar11 + 0x20))(plVar11,&lStack_98);
          FUN_10a0a25e4(auStack_a8,plVar11);
          uVar23 = *(undefined8 *)(param_2 + 0x90);
          plVar12 = (long *)0x2d0;
          __Znwm();
          plVar12[1] = 0;
          plVar12[2] = 0;
          *plVar12 = (long)&PTR_FUN_110b9fcf0;
          plVar11 = plVar12 + 3;
          FUN_10a1db5e8(plVar11,uVar23,auStack_a8);
          plStack_b8 = plVar11;
          plStack_b0 = plVar12;
          FUN_10a063ca4(&plStack_b8,plVar12 + 0xb,plVar11);
          FUN_10a02bf24(plVar22,&plStack_b8);
          plVar11 = plStack_b0;
          if (plStack_b0 != (long *)0x0) {
            plVar12 = plStack_b0 + 1;
            do {
              lVar15 = *plVar12;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar12,0x10);
              if (bVar7) {
                *plVar12 = lVar15 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (lVar15 == 0) {
              (**(code **)(*plStack_b0 + 0x10))(plStack_b0);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
            }
          }
          plStack_b8 = (long *)*plVar22;
          if (plStack_b8 == (long *)0x0) {
            plStack_b0 = (long *)0x0;
          }
          else {
            plStack_b0 = *(long **)(piVar14 + 0x24);
            if (plStack_b0 != (long *)0x0) {
              plVar22 = plStack_b0 + 1;
              do {
                cVar6 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(plVar22,0x10);
                if (bVar7) {
                  *plVar22 = *plVar22 + 1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
            }
          }
          FUN_10a1e3a04(param_2,&plStack_b8);
          plVar22 = plStack_b0;
          if (plStack_b0 != (long *)0x0) {
            plVar11 = plStack_b0 + 1;
            do {
              lVar15 = *plVar11;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar11,0x10);
              if (bVar7) {
                *plVar11 = lVar15 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (lVar15 == 0) {
              (**(code **)(*plStack_b0 + 0x10))(plStack_b0);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar22);
            }
          }
          if (plStack_a0 != (long *)0x0) {
            plVar22 = plStack_a0 + 1;
            do {
              lVar15 = *plVar22;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar22,0x10);
              if (bVar7) {
                *plVar22 = lVar15 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (lVar15 == 0) {
              (**(code **)(*plStack_a0 + 0x10))(plStack_a0);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_a0);
            }
          }
        }
        FUN_10a1b2218(puVar10,iVar21);
        (**(code **)(**(long **)(*(long *)(piVar14 + 0x22) + 0x288) + 0xa0))
                  (*(long **)(*(long *)(piVar14 + 0x22) + 0x288),0,0,0,uVar5,uVar4,0,puVar10,0);
        *piVar14 = iVar21;
      }
    }
    goto LAB_10ac117cc;
  }
  lVar15 = param_2;
  func_0x00010ac17c34();
  lVar13 = *(long *)(param_2 + 0x3a8);
  uVar17 = (*(long *)(param_2 + 0x3b0) - lVar13 >> 3) * 0x4ec4ec4ec4ec4ec5;
  iVar21 = (int)uVar17;
  if (iVar21 < 2) {
    iVar21 = 1;
  }
  iVar9 = (int)lVar15;
  iVar1 = iVar21 + -1;
  if (iVar9 <= iVar21 + -1) {
    iVar1 = iVar9;
  }
  iVar21 = 0;
  if (-1 < iVar9) {
    iVar21 = iVar1;
  }
  if (*(long *)(param_2 + 0x3b0) == lVar13) {
LAB_10ac11600:
    iVar21 = 0x137ec6b8;
    plVar22 = (long *)0x1137ec6d0;
    if (((bRam00000001137ec6b8 & 1) == 0) && (___cxa_guard_acquire(), iVar21 != 0)) {
      plVar22 = (long *)0x1137ec6d0;
      ___cxa_atexit(FUN_10ac161cc,0x1137ec6d0,0x100000000);
      ___cxa_guard_release(0x1137ec6b8);
    }
  }
  else {
    lVar15 = *(long *)(param_2 + 0x3c0);
    if (lVar15 == *(long *)(param_2 + 0x3c8)) goto LAB_10ac11600;
    if (uVar17 < (ulong)(long)iVar21 || uVar17 - (long)iVar21 == 0) goto LAB_10ac119cc;
    uVar17 = (ulong)*(uint *)(lVar13 + (long)iVar21 * 0x68 + 0x2c);
    if ((ulong)(*(long *)(param_2 + 0x3c8) - lVar15 >> 4) <= uVar17) {
      uVar17 = 0;
    }
    plVar22 = (long *)(lVar15 + uVar17 * 0x10);
  }
  lVar15 = *plVar22;
  if (lVar15 != 0) {
    lVar13 = plVar22[1];
    uStack_90 = (uint)lVar13;
    uStack_8c = (undefined4)((ulong)lVar13 >> 0x20);
    if (lVar13 != 0) {
      plVar11 = (long *)(lVar13 + 8);
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar7) {
          *plVar11 = *plVar11 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    lStack_98 = lVar15;
    FUN_10a1e3a04(param_2,&lStack_98);
    plVar11 = (long *)CONCAT44(uStack_8c,uStack_90);
    if (plVar11 != (long *)0x0) {
      plVar12 = plVar11 + 1;
      do {
        lVar15 = *plVar12;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar7) {
          *plVar12 = lVar15 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (lVar15 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
      }
    }
    func_0x00010ac60df8(*plVar22,param_3);
  }
LAB_10ac117cc:
  if ((bVar3 & 1) == 0) {
    FUN_10a1c08dc(param_2 + 0xa8);
  }
  return;
}



/* Entry: 10ac11a54; end: 10ac11a93;  */

long FUN_10ac11a54(long param_1)

{
  if (*(char *)(param_1 + 0x67) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x50));
  }
  if (*(char *)(param_1 + 0x4f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x38));
  }
  return param_1;
}



/* Entry: 10ac11a94; end: 10ac125db;  */

void FUN_10ac11a94(long *param_1,long param_2)

{
  char cVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  byte bVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  undefined8 uVar14;
  long *plVar15;
  long lVar16;
  undefined8 *puVar17;
  long lVar18;
  long *plVar19;
  long *plVar20;
  long lVar21;
  undefined8 *puVar22;
  long lVar23;
  undefined8 *puVar24;
  ulong uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uStack_80;
  long *plStack_78;
  long *plStack_70;
  long *plStack_68;
  
  uVar14 = *(undefined8 *)(param_2 + 0x90);
  puVar4 = (undefined8 *)0x4d0;
  __Znwm();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_110bc8868;
  puVar22 = puVar4 + 3;
  FUN_10ac10eac(puVar22,uVar14);
  *param_1 = (long)puVar22;
  param_1[1] = (long)puVar4;
  FUN_10a37b658(param_1,puVar4 + 0xb,puVar22);
  plVar13 = (long *)(param_2 + 0x290);
  FUN_10ac125dc(*param_1);
  lVar12 = *param_1;
  *(undefined1 *)(lVar12 + 0x3a0) = *(undefined1 *)(param_2 + 0x3a0);
  *(byte *)(lVar12 + 0x2f8) = *(byte *)(lVar12 + 0x2f8) & 0xef | *(byte *)(param_2 + 0x2f8) & 0x10;
  if ((*(byte *)(param_2 + 0x2f8) >> 4 & 1) == 0) {
    plVar19 = (long *)(lVar12 + 0x3a8);
    if (lVar12 != param_2) {
      lVar16 = *(long *)(param_2 + 0x3a8);
      plVar15 = *(long **)(param_2 + 0x3b0);
      uVar9 = (long)plVar15 - lVar16;
      lVar7 = *(long *)(lVar12 + 0x3b8);
      lVar21 = *(long *)(lVar12 + 0x3a8);
      if ((ulong)(lVar7 - lVar21) < uVar9) {
        uVar25 = ((long)uVar9 >> 3) * 0x4ec4ec4ec4ec4ec5;
        if (lVar21 != 0) {
          lVar23 = *(long *)(lVar12 + 0x3b0);
          lVar7 = lVar21;
          if (lVar23 != lVar21) {
            do {
              lVar23 = lVar23 + -0x68;
              func_0x00010ac3f7bc(lVar23);
            } while (lVar23 != lVar21);
            lVar7 = *plVar19;
          }
          *(long *)(lVar12 + 0x3b0) = lVar21;
          __ZdlPv(lVar7);
          lVar7 = 0;
          *plVar19 = 0;
          *(undefined8 *)(lVar12 + 0x3b0) = 0;
          *(undefined8 *)(lVar12 + 0x3b8) = 0;
        }
        if (uVar25 < 0x276276276276277) {
          uVar11 = (lVar7 >> 3) * -0x6276276276276276;
          if (uVar11 < uVar25 || uVar11 + ((long)uVar9 >> 3) * -0x4ec4ec4ec4ec4ec5 == 0) {
            uVar11 = uVar25;
          }
          if (0x13b13b13b13b13a < (ulong)((lVar7 >> 3) * 0x4ec4ec4ec4ec4ec5)) {
            uVar11 = 0x276276276276276;
          }
          if (uVar11 < 0x276276276276277) {
            FUN_10ac40718();
            *(ulong *)(lVar12 + 0x3a8) = uVar11;
            *(ulong *)(lVar12 + 0x3b0) = uVar11;
            *(ulong *)(lVar12 + 0x3b8) = uVar11 + (long)plVar13 * 0x68;
            FUN_10ac44fd0(lVar16,plVar15,uVar11);
            goto LAB_10ac11c9c;
          }
        }
        FUN_10ac40704();
        goto LAB_10ac12568;
      }
      uVar25 = *(long *)(lVar12 + 0x3b0) - lVar21;
      if (uVar25 < uVar9) {
        FUN_10ac450ec(lVar16,lVar16 + uVar25,lVar21);
        lVar16 = lVar16 + uVar25;
        FUN_10ac44fd0(lVar16,plVar15,*(undefined8 *)(lVar12 + 0x3b0));
LAB_10ac11c9c:
        *(long *)(lVar12 + 0x3b0) = lVar16;
        plVar13 = plVar15;
      }
      else {
        FUN_10ac450ec(lVar16,plVar15,lVar21);
        lVar7 = *(long *)(lVar12 + 0x3b0);
        while (lVar7 != lVar16) {
          lVar7 = lVar7 + -0x68;
          func_0x00010ac3f7bc(lVar7);
        }
        *(long *)(lVar12 + 0x3b0) = lVar16;
        plVar13 = plVar15;
      }
      puVar22 = *(undefined8 **)(param_2 + 0x3c0);
      puVar17 = *(undefined8 **)(param_2 + 0x3c8);
      uVar25 = (long)puVar17 - (long)puVar22;
      uVar9 = *(ulong *)(lVar12 + 0x3d0);
      puVar4 = *(undefined8 **)(lVar12 + 0x3c0);
      if (uVar9 - (long)puVar4 < uVar25) {
        puVar24 = (undefined8 *)((long)uVar25 >> 4);
        if (puVar4 != (undefined8 *)0x0) {
          puVar5 = *(undefined8 **)(lVar12 + 0x3c8);
          puVar8 = puVar4;
          if (puVar5 != puVar4) {
            do {
              puVar5 = puVar5 + -2;
              FUN_10a0522e8();
            } while (puVar5 != puVar4);
            puVar8 = *(undefined8 **)(lVar12 + 0x3c0);
          }
          *(undefined8 **)(lVar12 + 0x3c8) = puVar4;
          __ZdlPv(puVar8);
          uVar9 = 0;
          *(long *)(lVar12 + 0x3c0) = 0;
          *(undefined8 *)(lVar12 + 0x3c8) = 0;
          *(undefined8 *)(lVar12 + 0x3d0) = 0;
        }
        if ((ulong)puVar24 >> 0x3c == 0) {
          puVar4 = (undefined8 *)((long)uVar9 >> 3);
          if ((undefined8 *)((long)uVar9 >> 3) <= puVar24) {
            puVar4 = puVar24;
          }
          if (0x7fffffffffffffef < uVar9) {
            puVar4 = (undefined8 *)0xfffffffffffffff;
          }
          if ((ulong)puVar4 >> 0x3c == 0) {
            FUN_10ac40900();
            *(undefined8 **)(lVar12 + 0x3c0) = puVar4;
            *(undefined8 **)(lVar12 + 0x3c8) = puVar4;
            *(undefined8 **)(lVar12 + 0x3d0) = puVar4 + (long)plVar13 * 2;
            for (; puVar22 != puVar17; puVar22 = puVar22 + 2) {
              lVar16 = puVar22[1];
              uVar14 = *puVar22;
              puVar4[1] = puVar22[1];
              *puVar4 = uVar14;
              if (lVar16 != 0) {
                plVar15 = (long *)(lVar16 + 8);
                do {
                  cVar1 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(plVar15,0x10);
                  if (bVar3) {
                    *plVar15 = *plVar15 + 1;
                    cVar1 = ExclusiveMonitorsStatus();
                  }
                } while (cVar1 != '\0');
              }
              puVar4 = puVar4 + 2;
            }
            *(undefined8 **)(lVar12 + 0x3c8) = puVar4;
            goto LAB_10ac11e88;
          }
        }
        FUN_10ac408ec();
        goto LAB_10ac12568;
      }
      puVar24 = *(undefined8 **)(lVar12 + 0x3c8);
      if ((ulong)((long)puVar24 - (long)puVar4) < uVar25) {
        puVar8 = (undefined8 *)((long)puVar22 + ((long)puVar24 - (long)puVar4));
        if (puVar24 != puVar4) {
          do {
            puVar24 = puVar22 + 2;
            plVar13 = (long *)*puVar22;
            FUN_10ac45164(puVar4,plVar13,puVar22[1]);
            puVar4 = puVar4 + 2;
            puVar22 = puVar24;
          } while (puVar24 != puVar8);
          puVar24 = *(undefined8 **)(lVar12 + 0x3c8);
        }
        for (; puVar8 != puVar17; puVar8 = puVar8 + 2) {
          lVar16 = puVar8[1];
          uVar14 = *puVar8;
          puVar24[1] = puVar8[1];
          *puVar24 = uVar14;
          if (lVar16 != 0) {
            plVar15 = (long *)(lVar16 + 8);
            do {
              cVar1 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar15,0x10);
              if (bVar3) {
                *plVar15 = *plVar15 + 1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
          }
          puVar24 = puVar24 + 2;
        }
        *(undefined8 **)(lVar12 + 0x3c8) = puVar24;
      }
      else {
        if (puVar22 != puVar17) {
          do {
            puVar24 = puVar22 + 2;
            plVar13 = (long *)*puVar22;
            FUN_10ac45164(puVar4,plVar13,puVar22[1]);
            puVar4 = puVar4 + 2;
            puVar22 = puVar24;
          } while (puVar24 != puVar17);
          puVar24 = *(undefined8 **)(lVar12 + 0x3c8);
        }
        while (puVar24 != puVar4) {
          puVar24 = puVar24 + -2;
          FUN_10a0522e8();
        }
        *(undefined8 **)(lVar12 + 0x3c8) = puVar4;
      }
    }
LAB_10ac11e88:
    func_0x00010a1bd170(&plStack_78);
    func_0x00010ac44e84(plVar19);
  }
  else {
    uVar26 = *(undefined8 *)(param_2 + 0x460);
    uVar14 = *(undefined8 *)(param_2 + 0x458);
    uVar28 = *(undefined8 *)(param_2 + 0x470);
    uVar27 = *(undefined8 *)(param_2 + 0x468);
    uVar30 = *(undefined8 *)(param_2 + 0x480);
    uVar29 = *(undefined8 *)(param_2 + 0x478);
    *(undefined4 *)(lVar12 + 0x488) = *(undefined4 *)(param_2 + 0x488);
    *(undefined8 *)(lVar12 + 0x470) = uVar28;
    *(undefined8 *)(lVar12 + 0x468) = uVar27;
    *(undefined8 *)(lVar12 + 0x480) = uVar30;
    *(undefined8 *)(lVar12 + 0x478) = uVar29;
    *(undefined8 *)(lVar12 + 0x460) = uVar26;
    *(undefined8 *)(lVar12 + 0x458) = uVar14;
    plVar13 = (long *)(lVar12 + 0x290);
    FUN_10ac126cc(lVar12);
  }
  lVar12 = *param_1;
  if (lVar12 != param_2) {
    plVar19 = (long *)(lVar12 + 0x240);
    *(undefined4 *)(lVar12 + 0x260) = *(undefined4 *)(param_2 + 0x260);
    plVar15 = *(long **)(param_2 + 0x250);
    lVar16 = *(long *)(lVar12 + 0x248);
    if (lVar16 != 0) {
      lVar7 = 0;
      do {
        *(undefined8 *)(*plVar19 + lVar7 * 8) = 0;
        lVar7 = lVar7 + 1;
      } while (lVar16 != lVar7);
      plVar13 = *(long **)(lVar12 + 0x250);
      *(undefined8 *)(lVar12 + 600) = 0;
      *(undefined8 *)(lVar12 + 0x250) = 0;
      plVar10 = plVar13;
      if (plVar13 != (long *)0x0 && plVar15 != (long *)0x0) {
        do {
          FUN_10a350d34(plVar10 + 2,plVar15 + 2);
          plVar13 = (long *)*plVar10;
          FUN_10ac451d8(plVar19,plVar10);
          plVar15 = (long *)*plVar15;
          plVar10 = plVar13;
        } while (plVar13 != (long *)0x0 && plVar15 != (long *)0x0);
      }
      func_0x00010a042c9c(plVar19);
    }
    for (; plVar15 != (long *)0x0; plVar15 = (long *)*plVar15) {
      uVar9 = plVar15[2];
      lVar12 = plVar15[3];
      plVar13 = (long *)0x20;
      __Znwm();
      plStack_68 = (long *)0x1;
      *plVar13 = 0;
      plVar13[2] = uVar9;
      plVar13[3] = lVar12;
      if (lVar12 != 0) {
        plVar10 = (long *)(lVar12 + 8);
        do {
          cVar1 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar3) {
            *plVar10 = *plVar10 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      uVar25 = ((ulong)(uint)((int)uVar9 << 3) + 8 ^ uVar9 >> 0x20) * -0x622015f714c7d297;
      uVar9 = (uVar9 >> 0x20 ^ uVar25 >> 0x2f ^ uVar25) * -0x622015f714c7d297;
      plVar13[1] = (uVar9 ^ uVar9 >> 0x2f) * -0x622015f714c7d297;
      plStack_78 = plVar13;
      plStack_70 = plVar19;
      FUN_10ac451d8(plVar19);
    }
    lVar12 = *param_1;
  }
  if (lVar12 == param_2) goto LAB_10ac12160;
  lVar7 = *(long *)(param_2 + 0x440);
  lVar23 = *(long *)(param_2 + 0x448);
  uVar9 = lVar23 - lVar7;
  lVar21 = *(long *)(lVar12 + 0x450);
  lVar16 = *(long *)(lVar12 + 0x440);
  if (uVar9 <= (ulong)(lVar21 - lVar16)) {
    lVar21 = *(long *)(lVar12 + 0x448);
    uVar25 = lVar21 - lVar16;
    if (uVar25 < uVar9) {
      lVar18 = lVar7;
      uVar9 = uVar25;
      if (lVar21 != lVar16) {
        do {
          FUN_10ac3fdac(lVar16,lVar18);
          lVar16 = lVar16 + 0x38;
          uVar9 = uVar9 - 0x38;
          lVar18 = lVar18 + 0x38;
        } while (uVar9 != 0);
        lVar21 = *(long *)(lVar12 + 0x448);
      }
      lVar7 = lVar7 + uVar25;
      FUN_10ac3f868(lVar7,lVar23,lVar21);
LAB_10ac12110:
      *(long *)(lVar12 + 0x448) = lVar7;
    }
    else {
      if (lVar7 != lVar23) {
        do {
          FUN_10ac3fdac(lVar16,lVar7);
          lVar7 = lVar7 + 0x38;
          lVar16 = lVar16 + 0x38;
        } while (lVar7 != lVar23);
        lVar21 = *(long *)(lVar12 + 0x448);
      }
      while (lVar21 != lVar16) {
        lVar21 = lVar21 + -0x38;
        func_0x00010ac3fd74(lVar21);
      }
      *(long *)(lVar12 + 0x448) = lVar16;
    }
    lVar12 = *param_1;
LAB_10ac12160:
    *(byte *)(lVar12 + 0x2f8) = *(byte *)(lVar12 + 0x2f8) & 0xfe | *(byte *)(param_2 + 0x2f8) & 1;
    if (lVar12 != param_2) {
      plVar13 = (long *)(lVar12 + 0x358);
      plVar19 = *(long **)(param_2 + 0x358);
      if (*(long *)(lVar12 + 0x368) != 0) {
        plVar15 = *(long **)(lVar12 + 0x358);
        *(long *)(lVar12 + 0x358) = lVar12 + 0x360;
        *(undefined8 *)(*(long *)(lVar12 + 0x360) + 0x10) = 0;
        *(undefined8 *)(lVar12 + 0x368) = 0;
        *(undefined8 *)(lVar12 + 0x360) = 0;
        plVar10 = (long *)plVar15[1];
        if (plVar10 != (long *)0x0) {
          plVar15 = plVar10;
        }
        plStack_78 = plVar13;
        plStack_70 = plVar15;
        plStack_68 = plVar15;
        if (plVar15 != (long *)0x0) {
          plVar10 = plVar15;
          FUN_10ac4565c();
          plStack_70 = plVar10;
          do {
            if (plVar19 == (long *)(param_2 + 0x360)) break;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                      (plVar15 + 4,plVar19 + 4);
            if (plVar15 != plVar19) {
              FUN_10a0ea4a0(plVar15 + 7,plVar19[7],plVar19[8],plVar19[8] - plVar19[7] >> 2);
            }
            plVar15 = plStack_68;
            plVar10 = plVar13;
            FUN_10ac455e8(plVar13,&uStack_80,plStack_68 + 4);
            func_0x000109566d0c(plVar13,uStack_80,plVar10,plVar15);
            plVar15 = plStack_70;
            plStack_68 = plStack_70;
            if (plStack_70 != (long *)0x0) {
              FUN_10ac4565c();
            }
            plVar10 = (long *)plVar19[1];
            plVar20 = plVar19;
            if ((long *)plVar19[1] == (long *)0x0) {
              do {
                plVar19 = (long *)plVar20[2];
                bVar3 = (long *)*plVar19 != plVar20;
                plVar20 = plVar19;
              } while (bVar3);
            }
            else {
              do {
                plVar19 = plVar10;
                plVar10 = (long *)*plVar19;
              } while ((long *)*plVar19 != (long *)0x0);
            }
          } while (plVar15 != (long *)0x0);
        }
        FUN_10ac456b0(&plStack_78);
      }
      while (plVar19 != (long *)(param_2 + 0x360)) {
        plVar15 = (long *)0x50;
        __Znwm();
        plStack_68 = (long *)0x0;
        plStack_78 = plVar15;
        plStack_70 = plVar13;
        if (*(char *)((long)plVar19 + 0x37) < '\0') {
          func_0x000107c3192c(plVar15 + 4,plVar19[4],plVar19[5]);
        }
        else {
          lVar16 = plVar19[5];
          lVar12 = plVar19[4];
          plVar15[6] = plVar19[6];
          plVar15[5] = lVar16;
          plVar15[4] = lVar12;
        }
        plVar15[7] = 0;
        plVar15[8] = 0;
        plVar15[9] = 0;
        FUN_10a0e9a40();
        plVar10 = plVar13;
        FUN_10ac455e8(plVar13,&uStack_80,plVar15 + 4);
        func_0x000109566d0c(plVar13,uStack_80,plVar10,plVar15);
        plVar15 = (long *)plVar19[1];
        plVar10 = plVar19;
        if ((long *)plVar19[1] == (long *)0x0) {
          do {
            plVar19 = (long *)plVar10[2];
            bVar3 = (long *)*plVar19 != plVar10;
            plVar10 = plVar19;
          } while (bVar3);
        }
        else {
          do {
            plVar19 = plVar15;
            plVar15 = (long *)*plVar19;
          } while ((long *)*plVar19 != (long *)0x0);
        }
      }
      lVar12 = *param_1;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (lVar12 + 0x370,param_2 + 0x370);
    FUN_10ac1296c(&plStack_78,param_2 + 0x328);
    FUN_10ac12adc(*param_1 + 0x328,&plStack_78);
    plVar13 = plStack_70;
    if (plStack_70 != (long *)0x0) {
      plVar19 = plStack_70 + 1;
      do {
        lVar12 = *plVar19;
        cVar1 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar19,0x10);
        if (bVar3) {
          *plVar19 = lVar12 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar12 == 0) {
        (**(code **)(*plStack_70 + 0x10))(plStack_70);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
      }
    }
    FUN_10ac1296c(&plStack_78,param_2 + 0x338);
    FUN_10ac12adc(*param_1 + 0x338,&plStack_78);
    plVar13 = plStack_70;
    if (plStack_70 != (long *)0x0) {
      plVar19 = plStack_70 + 1;
      do {
        lVar12 = *plVar19;
        cVar1 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar19,0x10);
        if (bVar3) {
          *plVar19 = lVar12 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar12 == 0) {
        (**(code **)(*plStack_70 + 0x10))(plStack_70);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
      }
    }
    uVar14 = 0x68;
    __Znwm(0x68);
    FUN_10acdcc24();
    FUN_10aa9d34c(*param_1 + 800,uVar14);
    lVar16 = *(long *)(param_2 + 800);
    lVar12 = *param_1;
    lVar7 = *(long *)(lVar12 + 800);
    *(undefined4 *)(lVar7 + 0x34) = *(undefined4 *)(lVar16 + 0x34);
    *(long *)(lVar7 + 0x18) = lVar12 + 0x2d8;
    *(undefined1 *)(lVar7 + 0x10) = 1;
    *(undefined2 *)(lVar7 + 0x20) = 0;
    func_0x00010ac12b40(lVar12,*(undefined1 *)(lVar16 + 0x24));
    if (*(long *)(param_2 + 800) == 0) {
      bVar6 = *(byte *)(param_2 + 0x2f8) >> 2 & 1;
    }
    else {
      bVar6 = *(byte *)(*(long *)(param_2 + 800) + 0x23);
    }
    func_0x00010ac12b94(*param_1,bVar6 & 1);
    lVar12 = *param_1;
    bVar6 = *(byte *)(param_2 + 0x2f8);
    *(byte *)(lVar12 + 0x2f8) = *(byte *)(lVar12 + 0x2f8) & 0xfd | bVar6 & 2;
    if ((bVar6 >> 1 & 1) != 0) {
      FUN_10ac15b70(0,lVar12,0xffffffff);
      lVar12 = *param_1;
    }
    FUN_10ac114d4(lVar12,0);
    return;
  }
  uVar25 = ((long)uVar9 >> 3) * 0x6db6db6db6db6db7;
  if (lVar16 != 0) {
    lVar18 = *(long *)(lVar12 + 0x448);
    lVar21 = lVar16;
    if (lVar18 != lVar16) {
      do {
        lVar18 = lVar18 + -0x38;
        func_0x00010ac3fd74(lVar18);
      } while (lVar18 != lVar16);
      lVar21 = *(long *)(lVar12 + 0x440);
    }
    *(long *)(lVar12 + 0x448) = lVar16;
    __ZdlPv(lVar21);
    lVar21 = 0;
    *(long *)(lVar12 + 0x440) = 0;
    *(undefined8 *)(lVar12 + 0x448) = 0;
    *(undefined8 *)(lVar12 + 0x450) = 0;
  }
  if (uVar25 < 0x492492492492493) {
    uVar11 = (lVar21 >> 3) * -0x2492492492492492;
    if (uVar11 < uVar25 || uVar11 + ((long)uVar9 >> 3) * -0x6db6db6db6db6db7 == 0) {
      uVar11 = uVar25;
    }
    if (0x249249249249248 < (ulong)((lVar21 >> 3) * 0x6db6db6db6db6db7)) {
      uVar11 = 0x492492492492492;
    }
    if (uVar11 < 0x492492492492493) {
      FUN_10ac40338();
      *(ulong *)(lVar12 + 0x440) = uVar11;
      *(ulong *)(lVar12 + 0x448) = uVar11;
      *(ulong *)(lVar12 + 0x450) = uVar11 + (long)plVar13 * 0x38;
      FUN_10ac3f868(lVar7,lVar23,uVar11);
      goto LAB_10ac12110;
    }
  }
  FUN_10ac40324();
LAB_10ac12568:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10ac1256c);
  (*pcVar2)();
}



/* Entry: 10ac125dc; end: 10ac126cb;  */

void FUN_10ac125dc(long param_1,long *param_2)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  bool bVar7;
  long *plVar8;
  long lVar9;
  undefined8 auStack_48 [2];
  char cStack_31;
  undefined1 auStack_30 [8];
  long *plStack_28;
  
  if ((int)param_2[6] == *(int *)(param_1 + 0x2c0)) {
    bVar4 = *(byte *)((long)param_2 + 0x17);
    uVar2 = param_2[1];
    if (-1 < (char)bVar4) {
      uVar2 = (ulong)bVar4;
    }
    bVar5 = *(byte *)(param_1 + 0x2a7);
    uVar3 = *(ulong *)(param_1 + 0x298);
    if (-1 < (char)bVar5) {
      uVar3 = (ulong)bVar5;
    }
    if (uVar2 == uVar3) {
      plVar8 = (long *)*param_2;
      if (-1 < (char)bVar4) {
        plVar8 = param_2;
      }
      plVar1 = (long *)*(long *)(param_1 + 0x290);
      if (-1 < (char)bVar5) {
        plVar1 = (long *)(param_1 + 0x290);
      }
      _memcmp(plVar8,plVar1);
      if ((int)plVar8 == 0) {
        bVar4 = *(byte *)((long)param_2 + 0x2f);
        uVar2 = param_2[4];
        if (-1 < (char)bVar4) {
          uVar2 = (ulong)bVar4;
        }
        bVar5 = *(byte *)(param_1 + 0x2bf);
        uVar3 = *(ulong *)(param_1 + 0x2b0);
        if (-1 < (char)bVar5) {
          uVar3 = (ulong)bVar5;
        }
        if (uVar2 == uVar3) {
          plVar8 = (long *)param_2[3];
          if (-1 < (char)bVar4) {
            plVar8 = param_2 + 3;
          }
          lVar9 = *(long *)(param_1 + 0x2a8);
          if (-1 < (char)bVar5) {
            lVar9 = param_1 + 0x2a8;
          }
          _memcmp(plVar8,lVar9);
          if ((int)plVar8 == 0) {
            return;
          }
        }
      }
    }
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 0x290);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (param_1 + 0x2a8,param_2 + 3);
  *(int *)(param_1 + 0x2c0) = (int)param_2[6];
  FUN_10a08d2e0(auStack_48,param_1 + 0x290);
  FUN_10ad0279c(auStack_30,auStack_48);
  FUN_10a152118(param_1 + 0x2c8,auStack_30);
  if (plStack_28 != (long *)0x0) {
    plVar8 = plStack_28 + 1;
    do {
      lVar9 = *plVar8;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar7) {
        *plVar8 = lVar9 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_28);
    }
  }
  if (cStack_31 < '\0') {
    __ZdlPv(auStack_48[0]);
  }
  return;
}



/* Entry: 10ac126cc; end: 10ac1296b;  */

void FUN_10ac126cc(long param_1,undefined8 param_2)

{
  ulong *****pppppuVar1;
  undefined8 *****pppppuVar2;
  long lVar3;
  int iVar4;
  code *pcVar5;
  ulong ****ppppuVar6;
  undefined4 *puVar7;
  long lVar8;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined1 auStack_a8 [24];
  undefined8 ****ppppuStack_90;
  undefined8 ****ppppuStack_88;
  long lStack_80;
  ulong ****appppuStack_70 [2];
  char cStack_59;
  
  if (*(long *)(param_1 + 0x490) != 0) {
    return;
  }
  if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
    FUN_10a08d2e0(appppuStack_70,param_2);
    pppppuVar1 = (ulong *****)appppuStack_70[0];
    if (-1 < cStack_59) {
      pppppuVar1 = appppuStack_70;
    }
    func_0x00010ae06f08(1,4,&UNK_10f69bad5,&UNK_10f69bed9,0x420,&UNK_10f69bf3d,in_x6,in_x7,
                        pppppuVar1);
    if (cStack_59 < '\0') {
      __ZdlPv(appppuStack_70[0]);
    }
  }
  FUN_10ac5b0a8(appppuStack_70,param_1,param_2);
  if (((ulong *****)appppuStack_70[0] != (ulong *****)0x0) && (*(uint *)(appppuStack_70[0] + 1) < 5)
     ) {
    ppppuVar6 = (ulong ****)*appppuStack_70[0];
    (*(code *)(*ppppuVar6)[2])();
    if (((ulong)ppppuVar6 & 1) != 0) {
      FUN_10a0f1f4c(&ppppuStack_90,appppuStack_70);
      iVar4 = *(int *)(*(long *)(*(long *)(param_1 + 0x90) + 0xa20) + 0x18);
      puVar7 = (undefined4 *)0x98;
      __Znwm();
      *puVar7 = 0xffffffff;
      FUN_10a1b1eec(puVar7 + 2,ppppuStack_90,(long)ppppuStack_88 - (long)ppppuStack_90,0x134 < iVar4
                    ,1);
      lVar8 = lStack_80;
      *(undefined8 *****)(puVar7 + 0x1e) = ppppuStack_88;
      *(undefined8 *****)(puVar7 + 0x1c) = ppppuStack_90;
      ppppuStack_88 = (undefined8 *****)0x0;
      lStack_80 = 0;
      ppppuStack_90 = (undefined8 *****)0x0;
      *(undefined8 *)(puVar7 + 0x22) = 0;
      *(undefined8 *)(puVar7 + 0x24) = 0;
      *(long *)(puVar7 + 0x20) = lVar8;
      lVar8 = *(long *)(param_1 + 0x490);
      *(undefined4 **)(param_1 + 0x490) = puVar7;
      if ((lVar8 != 0) &&
         (func_0x00010ac4574c(), (undefined8 *****)ppppuStack_90 != (undefined8 *****)0x0)) {
        ppppuStack_88 = ppppuStack_90;
        __ZdlPv();
      }
      if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
        lVar8 = *(long *)(*(long *)(param_1 + 0x490) + 0x70);
        lVar3 = *(long *)(*(long *)(param_1 + 0x490) + 0x78);
        FUN_10a08d2e0(&ppppuStack_90,param_2);
        pppppuVar2 = (undefined8 *****)ppppuStack_90;
        if (-1 < lStack_80) {
          pppppuVar2 = &ppppuStack_90;
        }
        func_0x00010ae06f08(1,4,&UNK_10f69bad5,&UNK_10f69bed9,0x429,&UNK_10f69bf87,in_x6,in_x7,
                            lVar3 - lVar8,pppppuVar2);
        if (lStack_80 < 0) {
          __ZdlPv(ppppuStack_90);
        }
      }
      FUN_10a0f1ea0(appppuStack_70);
      return;
    }
  }
  FUN_10a08d2e0(auStack_a8,param_2);
  FUN_109feb280(&ppppuStack_90,&UNK_10f69bf70,auStack_a8);
  FUN_10a0029c0(&ppppuStack_90);
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10ac128d0);
  (*pcVar5)();
}



/* Entry: 10ac1296c; end: 10ac12adb;  */

void FUN_10ac1296c(long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined **ppuVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  long *plStack_50;
  long *plStack_48;
  
  ppuVar4 = &PTR___tlv_bootstrap_11340df48;
  plVar7 = param_2;
  (*(code *)PTR___tlv_bootstrap_11340df48)();
  puVar10 = *ppuVar4;
  plVar5 = (long *)0x130;
  __Znwm();
  plVar5[1] = 0;
  plVar5[2] = 0;
  *plVar5 = (long)&PTR_FUN_110c5d490;
  plVar1 = plVar5 + 3;
  plVar6 = plVar5;
  func_0x00010a0fda30();
  FUN_10aa7093c(plVar1,puVar10,plVar6,plVar7);
  plVar5[0x23] = 0;
  plVar5[0x22] = 0;
  plVar5[0x25] = 0;
  plVar5[0x24] = 0;
  plVar5[0x21] = 0;
  plVar5[0x20] = 0;
  plVar5[3] = (long)&PTR_DAT_110c429f0;
  plVar5[5] = (long)&PTR_FUN_110c42aa0;
  plVar5[10] = (long)&PTR_DAT_110c42af8;
  plVar5[0x1f] = (long)&PTR_SUB_110c42b18;
  plStack_50 = plVar1;
  plStack_48 = plVar5;
  FUN_10ac40554(plVar5,plVar5 + 8,plVar1);
  FUN_10ac40380(param_1,&plStack_50);
  plVar1 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar6 = plStack_48 + 1;
    do {
      lVar8 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  lVar8 = *param_2;
  lVar9 = *param_1;
  if (*(long *)(lVar8 + 0xe8) != *(long *)(lVar8 + 0xf0)) {
    func_0x00010aa83d64(lVar9 + 0xe0);
    lVar8 = *param_2;
  }
  *(undefined4 *)(lVar9 + 0x100) = *(undefined4 *)(lVar8 + 0x100);
  return;
}



/* Entry: 10ac12adc; end: 10ac12be7;  */

undefined8 * FUN_10ac12adc(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar7 = param_2[1];
  uVar6 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  plVar5 = (long *)param_1[1];
  param_1[1] = uVar7;
  *param_1 = uVar6;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10ac12be8; end: 10ac12d0f;  */

void FUN_10ac12be8(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long *plStack_40;
  long *plStack_38;
  
  plVar4 = (long *)0x130;
  uVar6 = param_2;
  __Znwm();
  plVar4[1] = 0;
  plVar4[2] = 0;
  *plVar4 = (long)&PTR_FUN_110c5d490;
  plVar1 = plVar4 + 3;
  plVar5 = plVar4;
  func_0x00010a0fda30();
  FUN_10aa7093c(plVar1,param_2,plVar5,uVar6);
  plVar4[0x23] = 0;
  plVar4[0x22] = 0;
  plVar4[0x25] = 0;
  plVar4[0x24] = 0;
  plVar4[0x21] = 0;
  plVar4[0x20] = 0;
  plVar4[3] = (long)&PTR_DAT_110c429f0;
  plVar4[5] = (long)&PTR_FUN_110c42aa0;
  plVar4[10] = (long)&PTR_DAT_110c42af8;
  plVar4[0x1f] = (long)&PTR_SUB_110c42b18;
  plStack_40 = plVar1;
  plStack_38 = plVar4;
  FUN_10ac40554(plVar4,plVar4 + 8,plVar1);
  FUN_10ac40380(param_1,&plStack_40);
  plVar1 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar5 = plStack_38 + 1;
    do {
      lVar7 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar1);
      return;
    }
  }
  return;
}



/* Entry: 10ac12d10; end: 10ac12d9b;  */

void FUN_10ac12d10(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lStack_30;
  undefined1 uStack_28;
  
  if ((*(byte *)(param_1 + 0x2f8) >> 4 & 1) == 0) {
    lStack_30 = param_1 + 0x3a8;
    uStack_28 = 0;
    puVar3 = *(undefined8 **)(param_1 + 0x3c8);
    for (puVar2 = *(undefined8 **)(param_1 + 0x3c0); puVar2 != puVar3; puVar2 = puVar2 + 2) {
      func_0x00010ac60438(*puVar2);
    }
    FUN_10ac4578c(&lStack_30);
  }
  else {
    lVar1 = *(long *)(param_1 + 0x490);
    *(undefined8 *)(param_1 + 0x490) = 0;
    if (lVar1 != 0) {
      func_0x00010a061678(lVar1 + 0x88);
      if (*(long *)(lVar1 + 0x70) != 0) {
        *(long *)(lVar1 + 0x78) = *(long *)(lVar1 + 0x70);
        __ZdlPv();
      }
      FUN_10a1b21d0(lVar1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)(lVar1);
      return;
    }
  }
  return;
}



/* Entry: 10ac12d9c; end: 10ac15607;  */

/* WARNING: Removing unreachable block (ram,0x00010ac14cac) */
/* WARNING: Removing unreachable block (ram,0x00010ac149f8) */
/* WARNING: Removing unreachable block (ram,0x00010ac144a4) */
/* WARNING: Removing unreachable block (ram,0x00010ac14108) */
/* WARNING: Removing unreachable block (ram,0x00010ac14178) */
/* WARNING: Removing unreachable block (ram,0x00010ac14224) */
/* WARNING: Removing unreachable block (ram,0x00010ac13d90) */
/* WARNING: Removing unreachable block (ram,0x00010ac13874) */
/* WARNING: Removing unreachable block (ram,0x00010ac13784) */
/* WARNING: Removing unreachable block (ram,0x00010ac12f84) */
/* WARNING: Removing unreachable block (ram,0x00010ac137c8) */
/* WARNING: Removing unreachable block (ram,0x00010ac13d58) */
/* WARNING: Removing unreachable block (ram,0x00010ac141ec) */
/* WARNING: Removing unreachable block (ram,0x00010ac14140) */
/* WARNING: Removing unreachable block (ram,0x00010ac140d0) */
/* WARNING: Removing unreachable block (ram,0x00010ac14098) */
/* WARNING: Removing unreachable block (ram,0x00010ac14740) */
/* WARNING: Removing unreachable block (ram,0x00010ac14a08) */
/* WARNING: Removing unreachable block (ram,0x00010ac14d30) */
/* WARNING: Removing unreachable block (ram,0x00010ac13f74) */
/* WARNING: Removing unreachable block (ram,0x00010ac13fb0) */
/* WARNING: Removing unreachable block (ram,0x00010ac13fe8) */
/* WARNING: Removing unreachable block (ram,0x00010ac14024) */
/* WARNING: Removing unreachable block (ram,0x00010ac14060) */
/* WARNING: Removing unreachable block (ram,0x00010ac141b0) */
/* WARNING: Removing unreachable block (ram,0x00010ac1425c) */
/* WARNING: Removing unreachable block (ram,0x00010ac14294) */
/* WARNING: Removing unreachable block (ram,0x00010ac142dc) */
/* WARNING: Removing unreachable block (ram,0x00010ac137d8) */
/* WARNING: Removing unreachable block (ram,0x00010ac13830) */

void FUN_10ac12d9c(long param_1)

{
  undefined8 *****pppppuVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 *****pppppuVar7;
  code *pcVar8;
  bool bVar9;
  undefined8 ******ppppppuVar10;
  undefined8 ****ppppuVar11;
  long ******pppppplVar12;
  long ******pppppplVar13;
  uint *puVar14;
  long ******pppppplVar15;
  long ******pppppplVar16;
  undefined1 *puVar17;
  undefined8 *puVar18;
  long *plVar19;
  undefined *puVar20;
  long *****ppppplVar21;
  undefined8 in_x6;
  undefined8 in_x7;
  uint uVar22;
  long lVar23;
  ulong uVar24;
  ulong uVar25;
  undefined8 uVar26;
  long *****ppppplVar27;
  long ******pppppplVar28;
  long *****ppppplVar29;
  long *****ppppplVar30;
  long *****ppppplVar31;
  long *****ppppplVar32;
  long ***ppplVar33;
  long lVar34;
  byte bVar35;
  uint uVar36;
  int iVar37;
  long ******pppppplVar38;
  long ***ppplVar39;
  undefined8 *puVar40;
  long *plVar41;
  long *plVar42;
  long lVar43;
  undefined8 ******ppppppuVar44;
  long ****pppplVar45;
  long *****ppppplVar46;
  long *****ppppplVar47;
  long *plVar48;
  ulong uVar49;
  int iVar50;
  undefined8 ****ppppuVar51;
  ushort uVar52;
  long *****ppppplStack_270;
  ulong uStack_268;
  byte bStack_259;
  long *****ppppplStack_258;
  undefined1 auStack_250 [15];
  char cStack_241;
  long *****ppppplStack_240;
  long *plStack_238;
  char cStack_229;
  long *****ppppplStack_228;
  long *****ppppplStack_220;
  long lStack_218;
  undefined8 *****pppppuStack_210;
  undefined1 uStack_208;
  byte abStack_200 [8];
  long *plStack_1f8;
  uint auStack_1f0 [2];
  undefined1 auStack_1e8 [8];
  undefined8 uStack_1e0;
  int iStack_1d8;
  undefined4 uStack_1d4;
  undefined8 uStack_1d0;
  undefined8 *****pppppuStack_1c8;
  undefined8 *****pppppuStack_1c0;
  undefined8 uStack_1b0;
  char cStack_199;
  undefined8 uStack_198;
  char cStack_181;
  uint *puStack_178;
  long *****ppppplStack_170;
  long **pplStack_168;
  undefined8 uStack_160;
  undefined8 *****pppppuStack_158;
  undefined4 uStack_150;
  long *****ppppplStack_148;
  long *****ppppplStack_140;
  undefined8 uStack_138;
  undefined8 *****pppppuStack_130;
  undefined8 *****pppppuStack_128;
  undefined8 *****pppppuStack_120;
  long *****ppppplStack_110;
  long *****ppppplStack_108;
  ulong uStack_100;
  undefined1 auStack_f0 [7];
  uint uStack_e9;
  undefined4 uStack_e5;
  undefined1 uStack_e1;
  char cStack_e0;
  undefined2 uStack_df;
  uint uStack_dd;
  undefined1 uStack_d9;
  uint uStack_d8;
  float fStack_d4;
  undefined8 uStack_d0;
  float fStack_c8;
  undefined8 uStack_c4;
  long *****ppppplStack_b8;
  long *****ppppplStack_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*(byte *)(param_1 + 0x2f8) & 1) == 0) {
    lVar23 = (long)*(char *)(param_1 + 0x2a7);
    if (lVar23 < 0) {
      lVar23 = *(long *)(param_1 + 0x298);
    }
    if (lVar23 != 0) {
      ppppppuVar44 = (undefined8 ******)(param_1 + 0x3a8);
      lVar43 = *(long *)(param_1 + 0x3b0);
      lVar23 = *(long *)(param_1 + 0x3a8);
      while (lVar43 != lVar23) {
        lVar43 = lVar43 + -0x68;
        func_0x00010ac3f7bc(lVar43);
      }
      lVar43 = param_1 + 0x290;
      *(long *)(param_1 + 0x3b0) = lVar23;
      lVar23 = *(long *)(param_1 + 0x3c8);
      lVar34 = *(long *)(param_1 + 0x3c0);
      while (lVar23 != lVar34) {
        lVar23 = lVar23 + -0x10;
        FUN_10a0522e8();
      }
      *(long *)(param_1 + 0x3c8) = lVar34;
      func_0x00010ac44e84(ppppppuVar44);
      FUN_10a20f5c0(param_1 + 0x240);
      uStack_e5 = 0;
      uStack_e1 = 0;
      cStack_e0 = '\0';
      uStack_df = 0;
      auStack_f0._3_4_ = 0;
      uStack_e9 = 0;
      *(undefined4 *)(param_1 + 0x458) = 0;
      *(undefined2 *)(param_1 + 0x45c) = 0;
      *(undefined1 *)(param_1 + 0x460) = 0;
      *(undefined8 *)(param_1 + 0x469) = 0;
      *(ulong *)(param_1 + 0x461) = (ulong)CONCAT21(auStack_f0._1_2_,auStack_f0[0]);
      *(undefined4 *)(param_1 + 0x470) = 0;
      *(undefined8 *)(param_1 + 0x47c) = 0;
      *(undefined8 *)(param_1 + 0x484) = 0;
      *(undefined8 *)(param_1 + 0x474) = 0;
      lVar23 = *(long *)(param_1 + 0x490);
      *(undefined8 *)(param_1 + 0x490) = 0;
      if (lVar23 != 0) {
        func_0x00010ac4574c();
      }
      FUN_10a0f2388(&ppppplStack_270,lVar43);
      if (-1 < (char)bStack_259) {
        uStack_268 = (ulong)bStack_259;
      }
      if (uStack_268 == 4) {
        pppppplVar15 = (long ******)ppppplStack_270;
        if (-1 < (char)bStack_259) {
          pppppplVar15 = &ppppplStack_270;
        }
        if (*(int *)pppppplVar15 == 0x70626577) {
          bVar35 = *(byte *)(param_1 + 0x2f8);
        }
        else {
          bVar35 = *(byte *)(param_1 + 0x2f8);
          if (*(char *)(param_1 + 0x3a0) != '\x03') {
            *(byte *)(param_1 + 0x2f8) = bVar35 & 0xef;
            goto LAB_10ac12f48;
          }
        }
LAB_10ac13658:
        *(byte *)(param_1 + 0x2f8) = bVar35 | 0x10;
        FUN_10ac15734(param_1,lVar43);
      }
      else {
        bVar35 = *(byte *)(param_1 + 0x2f8);
        if (*(char *)(param_1 + 0x3a0) == '\x03') goto LAB_10ac13658;
        *(byte *)(param_1 + 0x2f8) = bVar35 & 0xef;
        if (uStack_268 != 8) {
LAB_10ac12f48:
          FUN_10a08d2e0(&ppppplStack_110,lVar43);
          FUN_10a0f19e0(auStack_f0,&ppppplStack_110,0);
          FUN_10a0f20c0(&ppppplStack_170,auStack_f0);
          FUN_10a0f1ea0(auStack_f0);
          ppplVar33 = (long ***)pplStack_168;
          pppppplVar15 = (long ******)ppppplStack_170;
          if (-1 < (long)uStack_160) {
            ppplVar33 = (long ***)((ulong)uStack_160 >> 0x38);
            pppppplVar15 = &ppppplStack_170;
          }
          uStack_e5 = 0;
          uStack_e1 = 0;
          cStack_e0 = '\0';
          uStack_df = 0;
          uStack_dd = 0;
          uStack_d9 = 0;
          auStack_f0[0] = 0;
          auStack_f0._1_2_ = 0;
          auStack_f0._3_4_ = 0;
          uStack_e9 = 0;
          if (ppplVar33 != (long ***)0x0) {
            pppppplVar16 = (long ******)((long)pppppplVar15 + (long)ppplVar33);
            pppppplVar28 = pppppplVar15;
LAB_10ac12fbc:
            do {
              pppppplVar38 = pppppplVar15;
              if (*(char *)pppppplVar15 != '\n' && *(char *)pppppplVar15 != '\r') {
                pppppplVar15 = (long ******)((long)pppppplVar15 + 1);
                pppppplVar38 = pppppplVar16;
                if (pppppplVar15 != pppppplVar16) goto LAB_10ac12fbc;
              }
              if (pppppplVar28 != pppppplVar38) {
                pppppplVar15 = (long ******)((long)pppppplVar38 - (long)pppppplVar28);
                ppppplStack_110 = (long *****)pppppplVar28;
                ppppplStack_108 = (long *****)pppppplVar15;
                if ((long)pppppplVar15 < 0) goto LAB_10ac15038;
                FUN_10ac10540();
                ppppplStack_110 = (long *****)pppppplVar28;
                ppppplStack_108 = (long *****)pppppplVar15;
                FUN_10a043080(auStack_f0,&ppppplStack_110);
              }
              if ((pppppplVar38 == pppppplVar16) ||
                 (pppppplVar15 = (long ******)((long)pppppplVar38 + 1), pppppplVar28 = pppppplVar15,
                 pppppplVar15 == pppppplVar16)) break;
            } while( true );
          }
          if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
            lVar23 = *(long *)(param_1 + 0x290);
            if (-1 < *(char *)(param_1 + 0x2a7)) {
              lVar23 = lVar43;
            }
            func_0x00010ae06f08(1,4,&UNK_10f69b84e,&UNK_10f69b888,0x11,&UNK_10f69b8de,in_x6,in_x7,
                                lVar23);
          }
          ppppplStack_110 = (long *****)&ppppplStack_108;
          ppppplStack_108 = (long *****)0x0;
          uStack_100 = 0;
          pppppuStack_130 = (undefined8 ******)0x0;
          pppppuStack_128 = (undefined8 ******)0x0;
          pppppuStack_120 = (undefined8 ******)0x0;
          puVar40 = (undefined8 *)
                    CONCAT17((undefined1)uStack_e9,
                             CONCAT43(auStack_f0._3_4_,CONCAT21(auStack_f0._1_2_,auStack_f0[0])));
          puVar18 = (undefined8 *)CONCAT17(uStack_e1,CONCAT43(uStack_e5,uStack_e9._1_3_));
          if (puVar40 != puVar18) {
            uVar22 = 0;
LAB_10ac13090:
            pppppplVar15 = (long ******)*puVar40;
            plVar41 = (long *)puVar40[1];
            FUN_10ac10540();
            pppppuVar7 = pppppuStack_128;
            uVar36 = uVar22;
            ppppplStack_240 = (long *****)pppppplVar15;
            plStack_238 = plVar41;
            if (plVar41 != (long *)0x0) {
              uVar36 = uVar22 + 1;
              if (uVar22 < 4) {
                ppppplStack_148 = (long *****)0x0;
                ppppplStack_140 = (long *****)0x0;
                pppppplVar16 = (long ******)((long)pppppplVar15 + (long)plVar41);
                uStack_138 = 0;
                pppppplVar28 = pppppplVar15;
LAB_10ac130bc:
                do {
                  cVar2 = *(char *)pppppplVar15;
                  uVar52 = NEON_umaxv(CONCAT26(-(ushort)(cVar2 == '\n'),
                                               CONCAT24(-(ushort)(cVar2 == ';'),
                                                        CONCAT22(-(ushort)(cVar2 == '='),
                                                                 -(ushort)(cVar2 == ' ')))),2);
                  pppppplVar38 = pppppplVar15;
                  if ((uVar52 & 1) == 0) {
                    pppppplVar15 = (long ******)((long)pppppplVar15 + 1);
                    pppppplVar38 = pppppplVar16;
                    if (pppppplVar15 != pppppplVar16) goto LAB_10ac130bc;
                  }
                  if (pppppplVar28 != pppppplVar38) {
                    ppppplStack_220 = (long *****)((long)pppppplVar38 - (long)pppppplVar28);
                    ppppplStack_228 = (long *****)pppppplVar28;
                    if ((long)ppppplStack_220 < 0) goto LAB_10ac15038;
                    FUN_10a043080(&ppppplStack_148,&ppppplStack_228);
                  }
                  ppppplVar47 = ppppplStack_148;
                  if ((pppppplVar38 == pppppplVar16) ||
                     (pppppplVar15 = (long ******)((long)pppppplVar38 + 1),
                     pppppplVar28 = pppppplVar15, pppppplVar15 == pppppplVar16)) goto LAB_10ac1311c;
                } while( true );
              }
              if (pppppuStack_128 < pppppuStack_120) {
                FUN_10aad8c30(pppppuStack_128,&ppppplStack_240);
                pppppuStack_128 = pppppuVar7 + 3;
              }
              else {
                ppppppuVar10 = &pppppuStack_130;
                func_0x000107c27954(ppppppuVar10,&ppppplStack_240);
                pppppuStack_128 = ppppppuVar10;
              }
            }
            goto LAB_10ac131f4;
          }
          goto LAB_10ac13210;
        }
        pppppplVar15 = (long ******)ppppplStack_270;
        if (-1 < (char)bStack_259) {
          pppppplVar15 = &ppppplStack_270;
        }
        if (*pppppplVar15 != (long *****)0x6d696e61736e656c) goto LAB_10ac12f48;
        uVar24 = *(ulong *)(param_1 + 0x298);
        lVar23 = *(long *)(param_1 + 0x290);
        if (-1 < (char)*(byte *)(param_1 + 0x2a7)) {
          uVar24 = (ulong)*(byte *)(param_1 + 0x2a7);
          lVar23 = lVar43;
        }
        auStack_f0[0] = (undefined1)lVar23;
        auStack_f0._1_2_ = (undefined2)((ulong)lVar23 >> 8);
        auStack_f0._3_4_ = (undefined4)((ulong)lVar23 >> 0x18);
        uStack_e9._0_1_ = (undefined1)((ulong)lVar23 >> 0x38);
        uStack_e9._1_3_ = (undefined3)uVar24;
        uStack_e5 = (undefined4)(uVar24 >> 0x18);
        uStack_e1 = (undefined1)(uVar24 >> 0x38);
        pppppplVar15 = (long ******)auStack_f0;
        FUN_10a1aea04(pppppplVar15,&UNK_10f64210b,0xffffffffffffffff);
        if (pppppplVar15 == (long ******)0xffffffffffffffff) {
          pppppplVar16 = (long ******)CONCAT17(uStack_e1,CONCAT43(uStack_e5,uStack_e9._1_3_));
        }
        else {
          pppppplVar16 = (long ******)CONCAT17(uStack_e1,CONCAT43(uStack_e5,uStack_e9._1_3_));
          if (pppppplVar15 <= pppppplVar16) {
            pppppplVar16 = pppppplVar15;
          }
        }
        uVar26 = CONCAT17((undefined1)uStack_e9,
                          CONCAT43(auStack_f0._3_4_,CONCAT21(auStack_f0._1_2_,auStack_f0[0])));
        if ((long ******)0x7ffffffffffffff7 < pppppplVar16) {
          func_0x000109ffde50();
          goto LAB_10ac15038;
        }
        if (pppppplVar16 < (long ******)0x17) {
          uStack_138 = CONCAT17((char)pppppplVar16,(undefined7)uStack_138);
          pppppplVar28 = &ppppplStack_148;
          if (pppppplVar16 != (long ******)0x0) goto LAB_10ac13b0c;
        }
        else {
          pppppplVar15 = (long ******)0x19;
          if (((ulong)pppppplVar16 | 7) != 0x17) {
            pppppplVar15 = (long ******)(((ulong)pppppplVar16 | 7) + 1);
          }
          pppppplVar28 = pppppplVar15;
          __Znwm();
          uStack_138 = (ulong)pppppplVar15 | 0x8000000000000000;
          ppppplStack_148 = (long *****)pppppplVar28;
          ppppplStack_140 = (long *****)pppppplVar16;
LAB_10ac13b0c:
          _memmove(pppppplVar28,uVar26,pppppplVar16);
        }
        *(undefined1 *)((long)pppppplVar28 + (long)pppppplVar16) = 0;
        FUN_10a08d2e0(&ppppplStack_110,lVar43);
        FUN_10a0f19e0(auStack_f0,&ppppplStack_110,0);
        FUN_10a0f20c0(&uStack_1e0,auStack_f0);
        FUN_10a0f1ea0(auStack_f0);
        bVar35 = uStack_1d0._7_1_;
        pppppplVar16 = uStack_1e0;
        uStack_160 = (long ****)((ulong)uStack_1d0._7_1_ << 0x38);
        uVar24 = CONCAT44(uStack_1d4,iStack_1d8);
        iStack_1d8 = 0;
        uStack_1d4 = 0;
        uStack_1d0._0_7_ = 0;
        uStack_1d0._7_1_ = '\0';
        uStack_1e0 = (long ******)0x0;
        puVar40 = (undefined8 *)((ulong)&ppppplStack_170 | 8);
        pppppplVar15 = pppppplVar16;
        if (-1 < (char)bVar35) {
          uVar24 = (ulong)bVar35;
          pppppplVar15 = &ppppplStack_170;
        }
        pppppplVar38 = (long ******)((long)pppppplVar15 + uVar24);
        uVar25 = uVar24;
        ppppplStack_170 = (long *****)pppppplVar16;
        pppppplVar28 = pppppplVar15;
        while ((pppppplVar13 = pppppplVar15, 99 < (long)uVar25 &&
               (_memchr(pppppplVar28,0x22,uVar25 - 99), pppppplVar28 != (long ******)0x0))) {
          pppppplVar12 = pppppplVar28;
          _memcmp();
          if ((int)pppppplVar12 == 0) {
            if ((pppppplVar28 == pppppplVar38) || ((long)pppppplVar28 - (long)pppppplVar15 == -1))
            goto LAB_10ac13bf0;
            goto LAB_10ac13cc4;
          }
          pppppplVar28 = (long ******)((long)pppppplVar28 + 1);
          uVar25 = (long)pppppplVar38 - (long)pppppplVar28;
        }
        if (0x56 < (long)uVar24) {
LAB_10ac13bf0:
          do {
            _memchr(pppppplVar13,0x22,uVar24 - 0x56);
            if (pppppplVar13 == (long ******)0x0) break;
            pppppplVar28 = pppppplVar13;
            _memcmp();
            if ((int)pppppplVar28 == 0) {
              if ((pppppplVar13 != pppppplVar38) && ((long)pppppplVar13 - (long)pppppplVar15 != -1))
              {
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7replaceEmmPKcm
                          (&ppppplStack_170,(long)pppppplVar13 - (long)pppppplVar15,0x57,
                           &UNK_10f69d8d1,0x65);
                bVar35 = uStack_160._7_1_;
                pppppplVar16 = (long ******)ppppplStack_170;
                uVar26 = *puVar40;
                auStack_f0[0] = (undefined1)uVar26;
                auStack_f0._1_2_ = (undefined2)((ulong)uVar26 >> 8);
                auStack_f0._3_4_ = (undefined4)((ulong)uVar26 >> 0x18);
                uStack_e9 = (uint)*(undefined8 *)((long)puVar40 + 7);
                uStack_e5 = (undefined4)((ulong)*(undefined8 *)((long)puVar40 + 7) >> 0x20);
                pplStack_168 = (long **)0x0;
                uStack_160 = (long ****)0x0;
                ppppplStack_170 = (long *****)0x0;
                if (-1 < (char)uStack_1d0._7_1_) goto LAB_10ac13cdc;
                __ZdlPv(uStack_1e0);
                uStack_1e0 = pppppplVar16;
                iStack_1d8 = (int)CONCAT43(auStack_f0._3_4_,CONCAT21(auStack_f0._1_2_,auStack_f0[0])
                                          );
                uStack_1d4._3_1_ = (undefined1)uStack_e9;
                uStack_1d4 = CONCAT13(uStack_1d4._3_1_,SUB43(auStack_f0._3_4_,1));
                uStack_1d0._0_7_ = (undefined7)(CONCAT44(uStack_e5,uStack_e9) >> 8);
                uStack_1d0._7_1_ = bVar35;
                if ((long)uStack_160 < 0) {
                  __ZdlPv(ppppplStack_170);
                }
                goto LAB_10ac13cf0;
              }
              break;
            }
            pppppplVar13 = (long ******)((long)pppppplVar13 + 1);
            uVar24 = (long)pppppplVar38 - (long)pppppplVar13;
            if ((long)uVar24 < 0x57) break;
          } while( true );
        }
LAB_10ac13cc4:
        uVar26 = *puVar40;
        auStack_f0[0] = (undefined1)uVar26;
        auStack_f0._1_2_ = (undefined2)((ulong)uVar26 >> 8);
        auStack_f0._3_4_ = (undefined4)((ulong)uVar26 >> 0x18);
        uStack_e9 = (uint)*(undefined8 *)((long)puVar40 + 7);
        uStack_e5 = (undefined4)((ulong)*(undefined8 *)((long)puVar40 + 7) >> 0x20);
LAB_10ac13cdc:
        uStack_160 = (long ****)0x0;
        pplStack_168 = (long **)0x0;
        ppppplStack_170 = (long *****)0x0;
        iStack_1d8 = (int)CONCAT43(auStack_f0._3_4_,CONCAT21(auStack_f0._1_2_,auStack_f0[0]));
        uStack_1d4._3_1_ = (undefined1)uStack_e9;
        uStack_1d4 = CONCAT13(uStack_1d4._3_1_,SUB43(auStack_f0._3_4_,1));
        uStack_1d0._0_7_ = (undefined7)(CONCAT44(uStack_e5,uStack_e9) >> 8);
        uStack_1e0 = pppppplVar16;
        uStack_1d0._7_1_ = bVar35;
LAB_10ac13cf0:
        uStack_d8 = 0;
        fStack_d4 = 0.0;
        FUN_109d219e8(auStack_1f0,&uStack_1e0,auStack_f0,0,0);
        plVar41 = (long *)CONCAT44(fStack_d4,uStack_d8);
        if (plVar41 == (long *)auStack_f0) {
          lVar23 = 0x20;
LAB_10ac13d34:
          (**(code **)(*plVar41 + lVar23))();
        }
        else if (plVar41 != (long *)0x0) {
          lVar23 = 0x28;
          goto LAB_10ac13d34;
        }
        if ((char)uStack_1d0._7_1_ < '\0') {
          __ZdlPv(uStack_1e0);
        }
        func_0x000107c2b054(auStack_f0,&DAT_10f68518a);
        puVar14 = auStack_1f0;
        func_0x000109406570(puVar14,auStack_f0);
        func_0x000109381b20(abStack_200,puVar14);
        uStack_208 = 0;
        uVar24 = (ulong)abStack_200[0];
        if (abStack_200[0] != 0) {
          if (abStack_200[0] == 1) {
            uVar24 = plStack_1f8[2];
          }
          else if (abStack_200[0] == 2) {
            uVar24 = plStack_1f8[1] - *plStack_1f8 >> 4;
          }
          else {
            uVar24 = 1;
          }
        }
        pppppuStack_210 = ppppppuVar44;
        FUN_10ac15eac(ppppppuVar44,uVar24);
        uStack_1e0 = (long ******)abStack_200;
        iStack_1d8 = 0;
        uStack_1d4 = 0;
        uStack_1d0._0_7_ = 0;
        uStack_1d0._7_1_ = 0;
        pppppuStack_1c8 = (undefined8 ******)0x8000000000000000;
        if (abStack_200[0] == 0) {
          pppppuStack_1c8 = (undefined8 ******)0x1;
LAB_10ac13e68:
          pplStack_168 = (long **)0x0;
          uStack_160 = (long ****)0x0;
          pppppuStack_158 = (undefined8 *****)0x1;
        }
        else if (abStack_200[0] == 2) {
          uStack_1d0._0_7_ = (undefined7)*plStack_1f8;
          uStack_1d0._7_1_ = (byte)((ulong)*plStack_1f8 >> 0x38);
          pplStack_168 = (long **)0x0;
          pppppuStack_158 = (undefined8 *****)0x8000000000000000;
          uStack_160 = (long ****)plStack_1f8[1];
        }
        else {
          if (abStack_200[0] != 1) {
            pppppuStack_1c8 = (undefined8 ******)0x0;
            goto LAB_10ac13e68;
          }
          pplStack_168 = (long **)(plStack_1f8 + 1);
          iStack_1d8 = (int)*plStack_1f8;
          uStack_1d4 = (undefined4)((ulong)*plStack_1f8 >> 0x20);
          pppppuStack_158 = (undefined8 *****)0x8000000000000000;
          uStack_160 = (long ****)0x0;
        }
        ppppplStack_170 = (long *****)abStack_200;
        ppppplVar47 = (long *****)((ulong)auStack_f0 | 4);
        while( true ) {
          puVar40 = &uStack_1e0;
          func_0x000109379420(puVar40,&ppppplStack_170);
          if ((int)puVar40 != 0) break;
          puVar40 = &uStack_1e0;
          func_0x00010937b950(puVar40);
          auStack_f0[0] = 0;
          ppppplVar47[1] = (long ****)0x0;
          *ppppplVar47 = (long ****)0x0;
          ppppplVar47[3] = (long ****)0x0;
          ppppplVar47[2] = (long ****)0x0;
          ppppplVar47[4] = (long ****)0x0;
          uStack_c4 = 0x1869f0001869f;
          ppppplStack_b0 = (long *****)0x0;
          ppppplStack_b8 = (long *****)0x0;
          uStack_a0 = 0;
          uStack_a8 = 0;
          uStack_90 = 0;
          uStack_98 = 0;
          func_0x000107c2b054(&pppppuStack_130,&DAT_10f68f148);
          func_0x000109406570(puVar40,&pppppuStack_130);
          func_0x00010937c804(&ppppplStack_110);
          ppppplStack_b0 = ppppplStack_108;
          ppppplStack_b8 = ppppplStack_110;
          uStack_a8 = uStack_100;
          uStack_100 = uStack_100 & 0xffffffffffffff;
          ppppplStack_110 = (long *****)((ulong)ppppplStack_110 & 0xffffffffffffff00);
          if ((long)pppppuStack_120 < 0) {
            __ZdlPv(pppppuStack_130);
          }
          func_0x000107c2b054(&ppppplStack_110,&DAT_10f69bfbe);
          func_0x000109406570(puVar40,&ppppplStack_110);
          func_0x00010938d198();
          auStack_f0[0] = pppppuStack_130._0_1_;
          func_0x000107c2b054(&ppppplStack_110,&DAT_10f636fd0);
          func_0x000109406570(puVar40,&ppppplStack_110);
          func_0x000109407a04();
          uStack_c4 = CONCAT44(uStack_c4._4_4_,pppppuStack_130._0_4_);
          func_0x000107c2b054(&ppppplStack_110,&DAT_10f69bfc6);
          puVar18 = puVar40;
          func_0x000109406570(puVar40,&ppppplStack_110);
          func_0x000109381b20(&pppppuStack_130,puVar18);
          func_0x000107c2b054(&ppppplStack_110,&DAT_10f62b0e2);
          func_0x0001094947d8(&pppppuStack_130,&ppppplStack_110);
          func_0x00010938d050();
          auStack_f0._4_3_ = SUB83(ppppplStack_228,0);
          uStack_e9._0_1_ = (undefined1)((ulong)ppppplStack_228 >> 0x18);
          func_0x000107c2b054(&ppppplStack_110,"y");
          func_0x0001094947d8(&pppppuStack_130,&ppppplStack_110);
          func_0x00010938d050();
          uStack_e9._1_3_ = SUB83(ppppplStack_228,0);
          uStack_e5._0_1_ = (undefined1)((ulong)ppppplStack_228 >> 0x18);
          func_0x000107c2b054(&ppppplStack_110,"width");
          func_0x0001094947d8(&pppppuStack_130,&ppppplStack_110);
          func_0x00010938d050();
          uStack_e5._1_3_ = SUB83(ppppplStack_228,0);
          uStack_e1 = (undefined1)((ulong)ppppplStack_228 >> 0x18);
          func_0x000107c2b054(&ppppplStack_110,"height");
          func_0x0001094947d8(&pppppuStack_130,&ppppplStack_110);
          func_0x00010938d050();
          cStack_e0 = (char)ppppplStack_228;
          uStack_df = (undefined2)((ulong)ppppplStack_228 >> 8);
          uStack_dd._0_1_ = (undefined1)((ulong)ppppplStack_228 >> 0x18);
          func_0x000107c2b054(&ppppplStack_110,&UNK_10f69bfd3);
          puVar18 = puVar40;
          func_0x000109406570(puVar40,&ppppplStack_110);
          func_0x000109381b20(&ppppplStack_228,puVar18);
          func_0x000107c2b054(&ppppplStack_110,"width");
          func_0x0001094947d8(&ppppplStack_228,&ppppplStack_110);
          func_0x00010938d050();
          uStack_d0._4_4_ = ppppplStack_240._0_4_;
          func_0x000107c2b054(&ppppplStack_110,"height");
          func_0x0001094947d8(&ppppplStack_228,&ppppplStack_110);
          func_0x00010938d050();
          fStack_c8 = ppppplStack_240._0_4_;
          func_0x000107c2b054(&ppppplStack_110,&UNK_10f69bfde);
          func_0x000109406570(puVar40,&ppppplStack_110);
          func_0x000109381b20(&ppppplStack_240,puVar40);
          func_0x000107c2b054(&ppppplStack_110,"left");
          func_0x0001094947d8(&ppppplStack_240,&ppppplStack_110);
          func_0x00010938d050();
          uStack_dd._1_3_ = SUB83(ppppplStack_258,0);
          uStack_d9 = (undefined1)((ulong)ppppplStack_258 >> 0x18);
          func_0x000107c2b054(&ppppplStack_110,"top");
          func_0x0001094947d8(&ppppplStack_240,&ppppplStack_110);
          func_0x00010938d050();
          uStack_d8 = (uint)ppppplStack_258._0_4_;
          func_0x000107c2b054(&ppppplStack_110,"right");
          func_0x0001094947d8(&ppppplStack_240,&ppppplStack_110);
          func_0x00010938d050();
          fStack_d4 = ppppplStack_258._0_4_;
          func_0x000107c2b054(&ppppplStack_110,"bottom");
          func_0x0001094947d8(&ppppplStack_240,&ppppplStack_110);
          func_0x00010938d050();
          uStack_d0 = (long ******)CONCAT44(uStack_d0._4_4_,ppppplStack_258._0_4_);
          FUN_10ac15f74(ppppppuVar44,auStack_f0);
          func_0x000109380ffc(&plStack_238,(ulong)ppppplStack_240 & 0xff);
          func_0x000109380ffc(&ppppplStack_220,(ulong)ppppplStack_228 & 0xff);
          func_0x000109380ffc(&pppppuStack_128,(ulong)pppppuStack_130 & 0xff);
          func_0x000109386b30(&uStack_1e0);
        }
        func_0x000107c2b054(&ppppplStack_240,&DAT_10f414fbf);
        puVar14 = auStack_1f0;
        func_0x000109406570(puVar14,&ppppplStack_240);
        func_0x000107c2b054(&ppppplStack_258,&DAT_10f68518a);
        pplStack_168 = (long **)0x0;
        ppppplStack_170 = (long *****)0x0;
        pppppuStack_158 = (undefined8 ******)0x0;
        uStack_160 = (long ****)0x0;
        uStack_150 = 0x3f800000;
        if ((char)*puVar14 != '\x01') {
          uVar26 = 0x20;
          ___cxa_allocate_exception(0x20);
          func_0x00010937bcec(puVar14);
          func_0x000107c2b054(&uStack_1e0,puVar14);
          FUN_109feb280(auStack_f0,&UNK_10f56746f,&uStack_1e0);
          func_0x00010937bbbc(uVar26,0x12e,auStack_f0);
          ___cxa_throw(uVar26,&PTR_DAT_110af4510,&DAT_10937bd14);
          goto LAB_10ac15038;
        }
        iStack_1d8 = 0;
        uStack_1d4 = 0;
        uStack_1e0 = (long ******)0x0;
        pppppuStack_1c8 = (undefined8 ******)0x0;
        uStack_1d0._0_7_ = 0;
        uStack_1d0._7_1_ = 0;
        pppppuStack_1c0 = (undefined8 *****)CONCAT44(pppppuStack_1c0._4_4_,0x3f800000);
        plVar19 = *(undefined8 **)(puVar14 + 2) + 1;
        plVar41 = (long *)**(undefined8 **)(puVar14 + 2);
        if (plVar41 == plVar19) {
          uStack_160 = (long ****)0x0;
          pplStack_168 = (long **)0x0;
          ppppplStack_170 = (long *****)0x0;
          uStack_150 = 0x3f800000;
        }
        else {
          do {
            func_0x000109381b20(&ppppplStack_110,plVar41 + 7);
            if (*(char *)((long)plVar41 + 0x37) < '\0') {
              func_0x000107c3192c(auStack_f0,plVar41[4],plVar41[5]);
            }
            else {
              lVar43 = plVar41[5];
              lVar23 = plVar41[4];
              uStack_e9._1_3_ = (undefined3)lVar43;
              uStack_e5 = (undefined4)((ulong)lVar43 >> 0x18);
              uStack_e1 = (undefined1)((ulong)lVar43 >> 0x38);
              auStack_f0[0] = (undefined1)lVar23;
              auStack_f0._1_2_ = (undefined2)((ulong)lVar23 >> 8);
              auStack_f0._3_4_ = (undefined4)((ulong)lVar23 >> 0x18);
              uStack_e9._0_1_ = (undefined1)((ulong)lVar23 >> 0x38);
              lVar23 = plVar41[6];
              cStack_e0 = (char)lVar23;
              uStack_df = (undefined2)((ulong)lVar23 >> 8);
              uStack_dd = (uint)((ulong)lVar23 >> 0x18);
              uStack_d9 = (undefined1)((ulong)lVar23 >> 0x38);
            }
            uStack_d8 = CONCAT31(uStack_d8._1_3_,ppppplStack_110._0_1_);
            uStack_d0 = (long ******)ppppplStack_108;
            ppppplStack_110 = (long *****)((ulong)ppppplStack_110 & 0xffffffffffffff00);
            ppppplStack_108 = (long *****)0x0;
            func_0x000109380ffc(&ppppplStack_108,0);
            ppppplVar46 = (long *****)&uStack_1e0;
            func_0x000107c2b05c(ppppplVar46,auStack_f0);
            ppppplVar21 = (long *****)CONCAT44(uStack_1d4,iStack_1d8);
            if (ppppplVar21 != (long *****)0x0) {
              uVar24 = (long)ppppplVar21 - 1;
              if (((ulong)ppppplVar21 & uVar24) == 0) {
                ppppplVar47 = (long *****)(uVar24 & (ulong)ppppplVar46);
              }
              else {
                ppppplVar47 = ppppplVar46;
                if (ppppplVar21 <= ppppplVar46) {
                  uVar25 = 0;
                  if (ppppplVar21 != (long *****)0x0) {
                    uVar25 = (ulong)ppppplVar46 / (ulong)ppppplVar21;
                  }
                  ppppplVar47 = (long *****)((long)ppppplVar46 - uVar25 * (long)ppppplVar21);
                }
              }
              if (uStack_1e0[(long)ppppplVar47] != (long *****)0x0) {
                for (pppplVar45 = *uStack_1e0[(long)ppppplVar47]; pppplVar45 != (long ****)0x0;
                    pppplVar45 = (long ****)*pppplVar45) {
                  ppppplVar27 = (long *****)pppplVar45[1];
                  if (ppppplVar27 == ppppplVar46) {
                    puVar40 = &uStack_1e0;
                    func_0x000107c2b068(puVar40,pppplVar45 + 2,auStack_f0);
                    if (((ulong)puVar40 & 1) != 0) goto LAB_10ac1472c;
                  }
                  else {
                    if (((ulong)ppppplVar21 & uVar24) == 0) {
                      ppppplVar27 = (long *****)((ulong)ppppplVar27 & uVar24);
                    }
                    else if (ppppplVar21 <= ppppplVar27) {
                      uVar25 = 0;
                      if (ppppplVar21 != (long *****)0x0) {
                        uVar25 = (ulong)ppppplVar27 / (ulong)ppppplVar21;
                      }
                      ppppplVar27 = (long *****)((long)ppppplVar27 - uVar25 * (long)ppppplVar21);
                    }
                    if (ppppplVar27 != ppppplVar47) break;
                  }
                }
              }
            }
            pppppplVar15 = (long ******)0x38;
            __Znwm();
            ppppplStack_108 = (long *****)&uStack_1e0;
            *pppppplVar15 = (long *****)0x0;
            pppppplVar15[1] = ppppplVar46;
            pppppplVar15[3] = (long *****)CONCAT17(uStack_e1,CONCAT43(uStack_e5,uStack_e9._1_3_));
            pppppplVar15[2] =
                 (long *****)
                 CONCAT17((undefined1)uStack_e9,
                          CONCAT43(auStack_f0._3_4_,CONCAT21(auStack_f0._1_2_,auStack_f0[0])));
            pppppplVar15[4] =
                 (long *****)CONCAT17(uStack_d9,CONCAT43(uStack_dd,CONCAT21(uStack_df,cStack_e0)));
            *(char *)(pppppplVar15 + 5) = (char)uStack_d8;
            pppppplVar15[6] = (long *****)uStack_d0;
            uStack_d8 = uStack_d8 & 0xffffff00;
            uStack_d0 = (long ******)0x0;
            uStack_100 = 1;
            ppppplStack_110 = (long *****)pppppplVar15;
            if ((ppppplVar21 == (long *****)0x0) ||
               (pppppuStack_1c0._0_4_ * (float)ppppplVar21 < (float)((long)pppppuStack_1c8 + 1))) {
              uVar24 = 1;
              if ((long *****)0x2 < ppppplVar21) {
                uVar24 = (ulong)(((ulong)ppppplVar21 & (long)ppppplVar21 - 1U) != 0);
              }
              ppppplVar47 = (long *****)(uVar24 | (long)ppppplVar21 << 1);
              ppppplVar21 = (long *****)
                            (long)((float)((long)pppppuStack_1c8 + 1) / pppppuStack_1c0._0_4_);
              if (ppppplVar47 <= ppppplVar21) {
                ppppplVar47 = ppppplVar21;
              }
              if ((long)ppppplVar47 - 1U == 0) {
                ppppplVar47 = (long *****)0x2;
              }
              else if (((ulong)ppppplVar47 & (long)ppppplVar47 - 1U) != 0) {
                __ZNSt3__112__next_primeEm();
              }
              ppppplVar21 = (long *****)CONCAT44(uStack_1d4,iStack_1d8);
              if (ppppplVar21 < ppppplVar47) {
LAB_10ac1454c:
                if ((ulong)ppppplVar47 >> 0x3d != 0) {
                  func_0x000109ffded8();
                  goto LAB_10ac15038;
                }
                pppppplVar16 = (long ******)((long)ppppplVar47 << 3);
                __Znwm();
                bVar9 = uStack_1e0 != (long ******)0x0;
                uStack_1e0 = pppppplVar16;
                if (bVar9) {
                  __ZdlPv();
                }
                ppppplVar21 = (long *****)0x0;
                iStack_1d8 = (int)ppppplVar47;
                uStack_1d4 = (undefined4)((ulong)ppppplVar47 >> 0x20);
                do {
                  uStack_1e0[(long)ppppplVar21] = (long *****)0x0;
                  ppppplVar21 = (long *****)((long)ppppplVar21 + 1);
                } while (ppppplVar47 != ppppplVar21);
                ppppplVar27 = (long *****)CONCAT17(uStack_1d0._7_1_,(undefined7)uStack_1d0);
                ppppplVar21 = ppppplVar47;
                if (ppppplVar27 != (long *****)0x0) {
                  ppppplVar29 = (long *****)ppppplVar27[1];
                  uVar24 = (long)ppppplVar47 - 1;
                  if (((ulong)ppppplVar47 & uVar24) == 0) {
                    ppppplVar29 = (long *****)((ulong)ppppplVar29 & uVar24);
                  }
                  else if (ppppplVar47 <= ppppplVar29) {
                    uVar25 = 0;
                    if (ppppplVar47 != (long *****)0x0) {
                      uVar25 = (ulong)ppppplVar29 / (ulong)ppppplVar47;
                    }
                    ppppplVar29 = (long *****)((long)ppppplVar29 - uVar25 * (long)ppppplVar47);
                  }
                  uStack_1e0[(long)ppppplVar29] = (long *****)&uStack_1d0;
                  ppppplVar30 = (long *****)*ppppplVar27;
                  while (ppppplVar30 != (long *****)0x0) {
                    ppppplVar32 = (long *****)ppppplVar30[1];
                    if (((ulong)ppppplVar47 & uVar24) == 0) {
                      ppppplVar32 = (long *****)((ulong)ppppplVar32 & uVar24);
                    }
                    else if (ppppplVar47 <= ppppplVar32) {
                      uVar25 = 0;
                      if (ppppplVar47 != (long *****)0x0) {
                        uVar25 = (ulong)ppppplVar32 / (ulong)ppppplVar47;
                      }
                      ppppplVar32 = (long *****)((long)ppppplVar32 - uVar25 * (long)ppppplVar47);
                    }
                    ppppplVar31 = ppppplVar30;
                    if (ppppplVar32 != ppppplVar29) {
                      if (uStack_1e0[(long)ppppplVar32] == (long *****)0x0) {
                        uStack_1e0[(long)ppppplVar32] = ppppplVar27;
                        ppppplVar29 = ppppplVar32;
                      }
                      else {
                        *ppppplVar27 = *ppppplVar30;
                        *ppppplVar30 = *uStack_1e0[(long)ppppplVar32];
                        *uStack_1e0[(long)ppppplVar32] = (long ****)ppppplVar30;
                        ppppplVar31 = ppppplVar27;
                      }
                    }
                    ppppplVar27 = ppppplVar31;
                    ppppplVar30 = (long *****)*ppppplVar31;
                  }
                }
              }
              else if (ppppplVar47 < ppppplVar21) {
                ppppplVar27 = (long *****)(long)((float)pppppuStack_1c8 / pppppuStack_1c0._0_4_);
                if ((ppppplVar21 < (long *****)0x3) ||
                   (((ulong)ppppplVar21 & (long)ppppplVar21 - 1U) != 0)) {
                  __ZNSt3__112__next_primeEm();
                }
                else if ((long *****)0x1 < ppppplVar27) {
                  ppppplVar27 = (long *****)(1L << (-LZCOUNT((long)ppppplVar27 + -1) & 0x3fU));
                }
                pppppplVar16 = uStack_1e0;
                if (ppppplVar47 <= ppppplVar27) {
                  ppppplVar47 = ppppplVar27;
                }
                if (ppppplVar47 < ppppplVar21) {
                  if (ppppplVar47 != (long *****)0x0) goto LAB_10ac1454c;
                  uStack_1e0 = (long ******)0x0;
                  if (pppppplVar16 != (long ******)0x0) {
                    __ZdlPv();
                  }
                  iStack_1d8 = 0;
                  uStack_1d4 = 0;
                  ppppplVar21 = (long *****)0x0;
                }
                else {
                  ppppplVar21 = (long *****)CONCAT44(uStack_1d4,iStack_1d8);
                }
              }
              if (((ulong)ppppplVar21 & (long)ppppplVar21 - 1U) == 0) {
                ppppplVar47 = (long *****)((long)ppppplVar21 - 1U & (ulong)ppppplVar46);
              }
              else {
                ppppplVar47 = ppppplVar46;
                if (ppppplVar21 <= ppppplVar46) {
                  uVar24 = 0;
                  if (ppppplVar21 != (long *****)0x0) {
                    uVar24 = (ulong)ppppplVar46 / (ulong)ppppplVar21;
                  }
                  ppppplVar47 = (long *****)((long)ppppplVar46 - uVar24 * (long)ppppplVar21);
                }
              }
            }
            ppppplVar46 = uStack_1e0[(long)ppppplVar47];
            if (ppppplVar46 == (long *****)0x0) {
              *pppppplVar15 = (long *****)CONCAT17(uStack_1d0._7_1_,(undefined7)uStack_1d0);
              uStack_1d0._0_7_ = SUB87(pppppplVar15,0);
              uStack_1d0._7_1_ = (byte)((ulong)pppppplVar15 >> 0x38);
              uStack_1e0[(long)ppppplVar47] = (long *****)&uStack_1d0;
              if (*pppppplVar15 != (long *****)0x0) {
                ppppplVar46 = (long *****)(*pppppplVar15)[1];
                if (((ulong)ppppplVar21 & (long)ppppplVar21 - 1U) == 0) {
                  ppppplVar46 = (long *****)((ulong)ppppplVar46 & (long)ppppplVar21 - 1U);
                }
                else if (ppppplVar21 <= ppppplVar46) {
                  uVar24 = 0;
                  if (ppppplVar21 != (long *****)0x0) {
                    uVar24 = (ulong)ppppplVar46 / (ulong)ppppplVar21;
                  }
                  ppppplVar46 = (long *****)((long)ppppplVar46 - uVar24 * (long)ppppplVar21);
                }
                uStack_1e0[(long)ppppplVar46] = (long *****)pppppplVar15;
              }
            }
            else {
              *pppppplVar15 = (long *****)*ppppplVar46;
              *ppppplVar46 = (long ****)pppppplVar15;
            }
            pppppuStack_1c8 = (undefined8 *****)((long)pppppuStack_1c8 + 1);
LAB_10ac1472c:
            func_0x000109380ffc(&uStack_d0,(char)uStack_d8);
            plVar48 = (long *)plVar41[1];
            plVar42 = plVar41;
            if ((long *)plVar41[1] == (long *)0x0) {
              do {
                plVar41 = (long *)plVar42[2];
                bVar9 = (long *)*plVar41 != plVar42;
                plVar42 = plVar41;
              } while (bVar9);
            }
            else {
              do {
                plVar41 = plVar48;
                plVar48 = (long *)*plVar41;
              } while ((long *)*plVar41 != (long *)0x0);
            }
          } while (plVar41 != plVar19);
          pplStack_168 = (long **)CONCAT44(uStack_1d4,iStack_1d8);
          uStack_160 = (long ****)CONCAT17(uStack_1d0._7_1_,(undefined7)uStack_1d0);
          ppppplStack_170 = (long *****)uStack_1e0;
          uStack_150 = pppppuStack_1c0._0_4_;
        }
        pppppuStack_158 = pppppuStack_1c8;
        uStack_1e0 = (long ******)0x0;
        iStack_1d8 = 0;
        uStack_1d4 = 0;
        pppplVar45 = uStack_160;
        if ((undefined8 ******)pppppuStack_1c8 != (undefined8 ******)0x0) {
          ppplVar33 = uStack_160[1];
          if (((ulong)pplStack_168 & (ulong)((long)pplStack_168 + -1)) == 0) {
            ppplVar33 = (long ***)((ulong)ppplVar33 & (ulong)((long)pplStack_168 + -1));
          }
          else if (pplStack_168 <= ppplVar33) {
            uVar24 = 0;
            if ((long ***)pplStack_168 != (long ***)0x0) {
              uVar24 = (ulong)ppplVar33 / (ulong)pplStack_168;
            }
            ppplVar33 = (long ***)((long)ppplVar33 - uVar24 * (long)pplStack_168);
          }
          ppppplStack_170[(long)ppplVar33] = (long ****)&uStack_160;
          uStack_1d0._0_7_ = 0;
          uStack_1d0._7_1_ = 0;
          pppppuStack_1c8 = (undefined8 ******)0x0;
          pppplVar45 = (long ****)0x0;
        }
        func_0x00010ac42840(pppplVar45);
        ppppplVar47 = (long *****)uStack_1e0;
        uStack_1e0 = (long ******)0x0;
        if (ppppplVar47 != (long *****)0x0) {
          __ZdlPv();
        }
        ppppplStack_220 = (long *****)0x0;
        lStack_218 = 0;
        ppppplStack_228 = (long *****)&ppppplStack_220;
        puStack_178 = puVar14;
        FUN_10a0512e4(auStack_f0,&puStack_178);
        func_0x00010a051364(&uStack_1e0,&puStack_178);
        while( true ) {
          puVar17 = auStack_f0;
          func_0x00010937c708(puVar17,&uStack_1e0);
          if ((int)puVar17 != 0) break;
          puVar40 = (undefined8 *)auStack_f0;
          FUN_10a0513d8();
          func_0x00010937c560(auStack_f0);
          func_0x000109406570();
          func_0x0001095085b4(&pppppuStack_130);
          pppppplVar15 = &ppppplStack_220;
          pppppplVar16 = &ppppplStack_220;
          pppppplVar28 = (long ******)ppppplStack_220;
          while (pppppplVar28 != (long ******)0x0) {
            while (pppppplVar16 = pppppplVar28, puVar18 = puVar40,
                  FUN_10a003e3c(puVar40,pppppplVar16 + 4), ((uint)puVar18 >> 7 & 1) != 0) {
              pppppplVar28 = (long ******)*pppppplVar16;
              pppppplVar15 = pppppplVar16;
              if ((long ******)*pppppplVar16 == (long ******)0x0) goto LAB_10ac1491c;
            }
            pppppplVar28 = pppppplVar16 + 4;
            FUN_10a003e3c(pppppplVar28,puVar40);
            if (((uint)pppppplVar28 >> 7 & 1) == 0) {
              if (*pppppplVar15 != (long *****)0x0) goto LAB_10ac149a8;
              break;
            }
            pppppplVar15 = pppppplVar16 + 1;
            pppppplVar28 = (long ******)*pppppplVar15;
          }
LAB_10ac1491c:
          pppppplVar28 = (long ******)0x50;
          __Znwm();
          ppppplStack_110 = (long *****)pppppplVar28;
          ppppplStack_108 = (long *****)&ppppplStack_228;
          uStack_100 = 0;
          if (*(char *)((long)puVar40 + 0x17) < '\0') {
            func_0x000107c3192c(pppppplVar28 + 4,*puVar40,puVar40[1]);
          }
          else {
            ppppplVar46 = (long *****)puVar40[1];
            ppppplVar47 = (long *****)*puVar40;
            pppppplVar28[6] = (long *****)puVar40[2];
            pppppplVar28[5] = ppppplVar46;
            pppppplVar28[4] = ppppplVar47;
          }
          pppppplVar28[8] = pppppuStack_128;
          pppppplVar28[7] = pppppuStack_130;
          pppppplVar28[9] = pppppuStack_120;
          pppppuStack_128 = (undefined8 ******)0x0;
          pppppuStack_120 = (undefined8 ******)0x0;
          pppppuStack_130 = (undefined8 ******)0x0;
          *pppppplVar28 = (long *****)0x0;
          pppppplVar28[1] = (long *****)0x0;
          pppppplVar28[2] = (long *****)pppppplVar16;
          *pppppplVar15 = (long *****)pppppplVar28;
          if ((long ******)*ppppplStack_228 != (long ******)0x0) {
            ppppplStack_228 = (long *****)*ppppplStack_228;
            pppppplVar28 = (long ******)*pppppplVar15;
          }
          func_0x000107c2b058(ppppplStack_220,pppppplVar28);
          lStack_218 = lStack_218 + 1;
LAB_10ac149a8:
          if ((undefined8 ******)pppppuStack_130 != (undefined8 ******)0x0) {
            pppppuStack_128 = pppppuStack_130;
            __ZdlPv();
          }
          func_0x00010937c698(auStack_f0);
          uStack_d0 = (long ******)((long)uStack_d0 + 1);
        }
        if (cStack_181 < '\0') {
          __ZdlPv(uStack_198);
        }
        if (cStack_199 < '\0') {
          __ZdlPv(uStack_1b0);
        }
        func_0x00010ac42840(uStack_160);
        ppppplVar47 = ppppplStack_170;
        ppppplStack_170 = (long *****)0x0;
        if ((long ******)ppppplVar47 != (long ******)0x0) {
          __ZdlPv();
        }
        if (cStack_241 < '\0') {
          __ZdlPv(ppppplStack_258);
        }
        if (cStack_229 < '\0') {
          __ZdlPv(ppppplStack_240);
        }
        if ((long ******)ppppplStack_228 != &ppppplStack_220) {
          plVar41 = (long *)(param_1 + 0x360);
          pppppplVar15 = (long ******)ppppplStack_228;
          do {
            uStack_1e0 = pppppplVar15 + 4;
            func_0x000109566c7c(auStack_f0,param_1 + 0x358,&UNK_10dd5b8f9,&uStack_1e0,
                                &ppppplStack_170);
            lVar23 = CONCAT17((undefined1)uStack_e9,
                              CONCAT43(auStack_f0._3_4_,CONCAT21(auStack_f0._1_2_,auStack_f0[0])));
            plVar19 = (long *)*plVar41;
            plVar48 = plVar41;
            plVar42 = plVar41;
            if ((long *)*plVar41 != (long *)0x0) {
              do {
                while( true ) {
                  plVar48 = plVar19;
                  lVar43 = lVar23 + 0x20;
                  FUN_10a003e3c(lVar43,plVar48 + 4);
                  if (((uint)lVar43 >> 7 & 1) != 0) break;
                  plVar19 = plVar48 + 4;
                  FUN_10a003e3c(plVar19,lVar23 + 0x20);
                  if (((uint)plVar19 >> 7 & 1) == 0) {
                    lVar23 = CONCAT17((undefined1)uStack_e9,
                                      CONCAT43(auStack_f0._3_4_,
                                               CONCAT21(auStack_f0._1_2_,auStack_f0[0])));
                    if (*plVar42 == 0) goto LAB_10ac14b1c;
                    auStack_f0[0] = 0;
                    auStack_f0._1_2_ = 0;
                    auStack_f0._3_4_ = 0;
                    uStack_e9 = uStack_e9 & 0xffffff00;
                    if (lVar23 != 0) {
                      if (cStack_e0 == '\x01') {
                        func_0x00010ac44d7c(lVar23 + 0x20);
                      }
                      __ZdlPv(lVar23);
                    }
                    FUN_10a00946c(&UNK_10f69bfe7);
                    goto LAB_10ac15038;
                  }
                  plVar42 = plVar48 + 1;
                  plVar19 = (long *)*plVar42;
                  if ((long *)*plVar42 == (long *)0x0) goto LAB_10ac14b00;
                }
                plVar19 = (long *)*plVar48;
                plVar42 = plVar48;
              } while ((long *)*plVar48 != (long *)0x0);
LAB_10ac14b00:
              lVar23 = CONCAT17((undefined1)uStack_e9,
                                CONCAT43(auStack_f0._3_4_,CONCAT21(auStack_f0._1_2_,auStack_f0[0])))
              ;
            }
LAB_10ac14b1c:
            func_0x000109566d0c(param_1 + 0x358,plVar48,plVar42,lVar23);
            ppppplVar47 = pppppplVar15[7];
            if (pppppplVar15[8] != ppppplVar47) {
              uVar24 = 0;
              lVar23 = CONCAT17((undefined1)uStack_e9,
                                CONCAT43(auStack_f0._3_4_,CONCAT21(auStack_f0._1_2_,auStack_f0[0])))
              ;
              lVar43 = *(long *)(param_1 + 0x3b0);
              lVar34 = *(long *)(param_1 + 0x3a8);
              do {
                uVar22 = *(uint *)((long)ppppplVar47 + uVar24 * 4);
                uVar49 = (ulong)uVar22;
                uVar25 = (lVar43 - lVar34 >> 3) * 0x4ec4ec4ec4ec4ec5;
                auStack_f0[0] = 0xc2;
                auStack_f0._1_2_ = 0x69bb;
                auStack_f0._3_4_ = 0x10f;
                uStack_e9 = 0x2900;
                uStack_e5 = 0;
                uStack_e1 = 0;
                if (uVar25 < uVar49 || uVar25 - uVar49 == 0) {
                  FUN_10a0edfc4(auStack_f0);
                  goto LAB_10ac15038;
                }
                auStack_f0[0] = (undefined1)uVar22;
                auStack_f0._1_2_ = (undefined2)(uVar22 >> 8);
                auStack_f0[3] = (undefined1)(uVar22 >> 0x18);
                auStack_f0._4_3_ = 1;
                func_0x000109febd04(lVar23 + 0x38,auStack_f0);
                uVar25 = (*(long *)(param_1 + 0x3b0) - *(long *)(param_1 + 0x3a8) >> 3) *
                         0x4ec4ec4ec4ec4ec5;
                if (uVar25 < uVar49 || uVar25 - uVar49 == 0) goto LAB_10ac15038;
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                          (*(long *)(param_1 + 0x3a8) + (ulong)uVar22 * 0x68 + 0x50,pppppplVar15 + 4
                          );
                lVar43 = *(long *)(param_1 + 0x3b0);
                lVar34 = *(long *)(param_1 + 0x3a8);
                uVar25 = (lVar43 - lVar34 >> 3) * 0x4ec4ec4ec4ec4ec5;
                if (uVar25 < uVar49 || uVar25 - uVar49 == 0) goto LAB_10ac15038;
                *(int *)(lVar34 + uVar49 * 0x68 + 0x30) = (int)uVar24;
                uVar24 = uVar24 + 1;
                ppppplVar47 = pppppplVar15[7];
              } while (uVar24 < (ulong)((long)pppppplVar15[8] - (long)ppppplVar47 >> 2));
            }
            pppppplVar16 = (long ******)pppppplVar15[1];
            pppppplVar28 = pppppplVar15;
            if ((long ******)pppppplVar15[1] == (long ******)0x0) {
              do {
                pppppplVar15 = (long ******)pppppplVar28[2];
                bVar9 = (long ******)*pppppplVar15 != pppppplVar28;
                pppppplVar28 = pppppplVar15;
              } while (bVar9);
            }
            else {
              do {
                pppppplVar15 = pppppplVar16;
                pppppplVar16 = (long ******)*pppppplVar15;
              } while ((long ******)*pppppplVar15 != (long ******)0x0);
            }
          } while (pppppplVar15 != &ppppplStack_220);
        }
        plVar41 = (long *)(param_1 + 0x358);
        lVar23 = param_1 + 0x370;
        plVar19 = plVar41;
        func_0x00010ac45eb4(plVar41,lVar23);
        lVar43 = lVar23;
        if ((long *)(param_1 + 0x360) == plVar19) {
          lVar43 = *plVar41 + 0x20;
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(lVar23,lVar43);
        func_0x00010ac17ce4(plVar41,lVar23);
        *(long **)(param_1 + 0x388) = plVar41;
        FUN_10ac161d0(param_1);
        func_0x000107c2b054(auStack_f0,&DAT_10f414fa3);
        puVar14 = auStack_1f0;
        func_0x000109406570(puVar14,auStack_f0);
        func_0x000109381b20(&ppppplStack_258,puVar14);
        FUN_10ac10160(auStack_f0,&ppppplStack_258);
        puVar40 = (undefined8 *)
                  CONCAT17((undefined1)uStack_e9,
                           CONCAT43(auStack_f0._3_4_,CONCAT21(auStack_f0._1_2_,auStack_f0[0])));
        puVar18 = (undefined8 *)CONCAT17(uStack_e1,CONCAT43(uStack_e5,uStack_e9._1_3_));
        if (puVar40 != puVar18) {
          do {
            if (*(char *)((long)puVar40 + 0x17) < '\0') {
              func_0x000107c3192c(&uStack_1e0,*puVar40,puVar40[1]);
            }
            else {
              uStack_1e0 = (long ******)*puVar40;
              uStack_1d0._0_7_ = (undefined7)puVar40[2];
              uStack_1d0._7_1_ = (byte)((ulong)puVar40[2] >> 0x38);
              iStack_1d8 = (int)puVar40[1];
              uStack_1d4 = (undefined4)((ulong)puVar40[1] >> 0x20);
            }
            ppppplStack_108 = (long *****)CONCAT44(uStack_1d4,iStack_1d8);
            ppppplStack_110 = (long *****)uStack_1e0;
            uStack_100 = CONCAT17(uStack_1d0._7_1_,(undefined7)uStack_1d0);
            uStack_1e0 = (long ******)0x0;
            iStack_1d8 = 0;
            uStack_1d4 = 0;
            uStack_1d0._0_7_ = 0;
            uStack_1d0._7_1_ = 0;
            FUN_10a1a7cf8(&ppppplStack_170,&ppppplStack_110);
            uVar24 = uStack_138;
            uVar22 = (uint)(char)uStack_160._7_1_;
            ppplVar33 = (long ***)pplStack_168;
            if (-1 < (int)uVar22) {
              ppplVar33 = (long ***)(ulong)uStack_160._7_1_;
            }
            if (ppplVar33 != (long ***)0x0) {
              pppppplVar15 = (long ******)ppppplStack_140;
              if (-1 < (long)uStack_138) {
                pppppplVar15 = (long ******)(uStack_138 >> 0x38);
              }
              FUN_10a003c90(&ppppplStack_240,(undefined *)((long)pppppplVar15 + 1),&puStack_178);
              pppppplVar16 = (long ******)ppppplStack_240;
              if (-1 < cStack_229) {
                pppppplVar16 = &ppppplStack_240;
              }
              if (pppppplVar15 != (long ******)0x0) {
                pppppplVar28 = (long ******)ppppplStack_148;
                if (-1 < (long)uVar24) {
                  pppppplVar28 = &ppppplStack_148;
                }
                _memmove(pppppplVar16,pppppplVar28,pppppplVar15);
              }
              ((char *)((long)pppppplVar16 + (long)pppppplVar15))[0] = '/';
              ((char *)((long)pppppplVar16 + (long)pppppplVar15))[1] = '\0';
              ppplVar33 = (long ***)pplStack_168;
              pppppplVar15 = (long ******)ppppplStack_170;
              if (-1 < (long)uStack_160) {
                ppplVar33 = (long ***)((ulong)uStack_160 >> 0x38);
                pppppplVar15 = &ppppplStack_170;
              }
              pppppplVar16 = &ppppplStack_240;
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                        (pppppplVar16,pppppplVar15,ppplVar33);
              pppppuStack_128 = pppppplVar16[1];
              pppppuStack_130 = *pppppplVar16;
              pppppuStack_120 = pppppplVar16[2];
              pppppplVar16[1] = (long *****)0x0;
              pppppplVar16[2] = (long *****)0x0;
              *pppppplVar16 = (long *****)0x0;
              if (cStack_229 < '\0') {
                __ZdlPv(ppppplStack_240);
              }
              FUN_10ac45928(&ppppplStack_240,*(undefined8 *)(param_1 + 0x90),2);
              (*(code *)(*ppppplStack_240)[0x24])(ppppplStack_240,&pppppuStack_130);
              FUN_10ac160d0(pppppuStack_210 + 3,&ppppplStack_240);
              plVar41 = plStack_238;
              if (plStack_238 != (long *)0x0) {
                plVar19 = plStack_238 + 1;
                do {
                  lVar23 = *plVar19;
                  cVar2 = '\x01';
                  bVar9 = (bool)ExclusiveMonitorPass(plVar19,0x10);
                  if (bVar9) {
                    *plVar19 = lVar23 + -1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
                if (lVar23 == 0) {
                  (**(code **)(*plStack_238 + 0x10))(plStack_238);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(plVar41);
                }
              }
              if ((long)pppppuStack_120 < 0) {
                __ZdlPv(pppppuStack_130);
              }
              uVar22 = (uint)uStack_160._7_1_;
            }
            if ((uVar22 >> 7 & 1) != 0) {
              __ZdlPv(ppppplStack_170);
            }
            if ((char)uStack_1d0._7_1_ < '\0') {
              __ZdlPv(uStack_1e0);
            }
            puVar40 = puVar40 + 3;
          } while (puVar40 != puVar18);
        }
        uStack_1e0 = (long ******)auStack_f0;
        FUN_10a0426d8(&uStack_1e0);
        func_0x000109380ffc(auStack_250,(ulong)ppppplStack_258 & 0xff);
        func_0x00010ac428b4(ppppplStack_220);
        FUN_10ac4578c(&pppppuStack_210);
        func_0x000109380ffc(&plStack_1f8,abStack_200[0]);
        func_0x000109380ffc(auStack_1e8,(undefined1)auStack_1f0[0]);
        if ((long)uStack_138 < 0) {
          __ZdlPv(ppppplStack_148);
        }
      }
      goto LAB_10ac13a0c;
    }
  }
  else {
LAB_10ac13a30:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
      return;
    }
    ___stack_chk_fail();
  }
  FUN_10a00946c(&UNK_10f69ba7c);
LAB_10ac14f94:
  puVar20 = &UNK_10f69b94f;
  goto LAB_10ac14fa8;
LAB_10ac1311c:
  if (0x10 < (ulong)((long)ppppplStack_140 - (long)ppppplStack_148)) {
    pppppplVar15 = &ppppplStack_110;
    FUN_10ac42980(pppppplVar15,&ppppplStack_228,ppppplStack_148);
    ppppplVar46 = *pppppplVar15;
    if (ppppplVar46 == (long *****)0x0) {
      ppppplVar46 = (long *****)0x40;
      __Znwm();
      ppppplVar21 = (long *****)*ppppplVar47;
      ppppplVar46[5] = ppppplVar47[1];
      ppppplVar46[4] = (long ****)ppppplVar21;
      ppppplVar46[6] = (long ****)0x0;
      ppppplVar46[7] = (long ****)0x0;
      *ppppplVar46 = (long ****)0x0;
      ppppplVar46[1] = (long ****)0x0;
      ppppplVar46[2] = (long ****)ppppplStack_228;
      *pppppplVar15 = ppppplVar46;
      ppppplVar21 = ppppplVar46;
      if ((long ******)*ppppplStack_110 != (long ******)0x0) {
        ppppplVar21 = *pppppplVar15;
        ppppplStack_110 = (long *****)*ppppplStack_110;
      }
      func_0x000107c2b058(ppppplStack_108,ppppplVar21);
      uStack_100 = uStack_100 + 1;
    }
    ppppplVar21 = (long *****)ppppplVar47[2];
    ppppplVar46[7] = ppppplVar47[3];
    ppppplVar46[6] = (long ****)ppppplVar21;
  }
  if ((long ******)ppppplStack_148 != (long ******)0x0) {
    ppppplStack_140 = ppppplStack_148;
    __ZdlPv(ppppplStack_148);
  }
LAB_10ac131f4:
  puVar40 = puVar40 + 2;
  uVar22 = uVar36;
  if (puVar40 == puVar18) goto code_r0x00010ac13204;
  goto LAB_10ac13090;
code_r0x00010ac13204:
  if (uStack_100 < 4) {
LAB_10ac13210:
    if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
      func_0x00010ae06f08(1,4,&UNK_10f69b84e,&UNK_10f69b888,0x2c,&UNK_10f69b916);
    }
  }
  ppppplStack_148 = (long *****)&DAT_10f68518a;
  ppppplStack_140 = (long *****)0x6;
  ppppplStack_228 = (long *****)&ppppplStack_148;
  pppppplVar15 = &ppppplStack_110;
  func_0x00010ac42a04(pppppplVar15,&ppppplStack_148,&UNK_10dd5b8f9,&ppppplStack_228,&ppppplStack_240
                     );
  ppppplVar21 = pppppplVar15[6];
  ppppplVar27 = pppppplVar15[7];
  ppppplVar46 = (long *****)((long)ppppplVar21 + (long)ppppplVar27);
  ppppplVar29 = ppppplVar21;
  for (ppppplVar47 = ppppplVar21;
      (ppppplVar27 != (long *****)0x0 && (ppppplVar29 = ppppplVar47, *(byte *)ppppplVar47 == 0x30));
      ppppplVar47 = (long *****)((long)ppppplVar47 + 1)) {
    ppppplVar27 = (long *****)((long)ppppplVar27 + -1);
    ppppplVar29 = ppppplVar46;
  }
  if ((ppppplVar29 == ppppplVar46) || (9 < *(byte *)ppppplVar29 - 0x30)) {
    if (ppppplVar29 == ppppplVar21) {
      FUN_10a00946c(&UNK_10f69d937);
      goto LAB_10ac15038;
    }
LAB_10ac13304:
    uVar22 = 0;
  }
  else {
    FUN_10a10ca04(ppppplVar29,ppppplVar46,&ppppplStack_228,&ppppplStack_240);
    if ((ppppplVar29 != ppppplVar46) && (*(byte *)ppppplVar29 - 0x30 < 10)) goto LAB_10ac13304;
    if (CARRY4((uint)ppppplStack_228,(uint)ppppplStack_240._0_4_)) goto LAB_10ac13304;
    uVar22 = (uint)ppppplStack_228 + (int)ppppplStack_240._0_4_;
  }
  uStack_1e0 = (long ******)CONCAT44(uStack_1e0._4_4_,uVar22);
  ppppplStack_228 = (long *****)&DAT_10f69b947;
  ppppplStack_220 = (long *****)0x7;
  ppppplStack_240 = (long *****)&ppppplStack_228;
  pppppplVar15 = &ppppplStack_110;
  func_0x00010ac42a04(pppppplVar15,&ppppplStack_228,&UNK_10dd5b8f9,&ppppplStack_240,&ppppplStack_258
                     );
  ppppplVar21 = pppppplVar15[6];
  ppppplVar27 = pppppplVar15[7];
  ppppplVar46 = (long *****)((long)ppppplVar21 + (long)ppppplVar27);
  ppppplVar29 = ppppplVar21;
  for (ppppplVar47 = ppppplVar21;
      (ppppplVar27 != (long *****)0x0 && (ppppplVar29 = ppppplVar47, *(byte *)ppppplVar47 == 0x30));
      ppppplVar47 = (long *****)((long)ppppplVar47 + 1)) {
    ppppplVar27 = (long *****)((long)ppppplVar27 + -1);
    ppppplVar29 = ppppplVar46;
  }
  if ((ppppplVar29 == ppppplVar46) || (9 < *(byte *)ppppplVar29 - 0x30)) {
    if (ppppplVar29 == ppppplVar21) {
      FUN_10a00946c(&UNK_10f69d937);
      goto LAB_10ac15038;
    }
LAB_10ac133cc:
    iVar50 = 0;
  }
  else {
    FUN_10a10ca04(ppppplVar29,ppppplVar46,&ppppplStack_240,&ppppplStack_258);
    if ((ppppplVar29 != ppppplVar46) && (*(byte *)ppppplVar29 - 0x30 < 10)) goto LAB_10ac133cc;
    if (CARRY4((uint)ppppplStack_240._0_4_,(uint)ppppplStack_258._0_4_)) goto LAB_10ac133cc;
    iVar50 = (int)ppppplStack_240._0_4_ + (int)ppppplStack_258._0_4_;
  }
  ppppplStack_240 = (long *****)&DAT_10f334829;
  plStack_238 = (long *)0x4;
  ppppplStack_258 = (long *****)&ppppplStack_240;
  pppppplVar15 = &ppppplStack_110;
  func_0x00010ac42a04(pppppplVar15,&ppppplStack_240,&UNK_10dd5b8f9,&ppppplStack_258,auStack_1f0);
  ppppplVar21 = pppppplVar15[6];
  ppppplVar27 = pppppplVar15[7];
  ppppplVar46 = (long *****)((long)ppppplVar21 + (long)ppppplVar27);
  ppppplVar29 = ppppplVar21;
  for (ppppplVar47 = ppppplVar21;
      (ppppplVar27 != (long *****)0x0 && (ppppplVar29 = ppppplVar47, *(byte *)ppppplVar47 == 0x30));
      ppppplVar47 = (long *****)((long)ppppplVar47 + 1)) {
    ppppplVar27 = (long *****)((long)ppppplVar27 + -1);
    ppppplVar29 = ppppplVar46;
  }
  if ((ppppplVar29 == ppppplVar46) || (9 < *(byte *)ppppplVar29 - 0x30)) {
    if (ppppplVar29 == ppppplVar21) {
      FUN_10a00946c(&UNK_10f69d937);
      goto LAB_10ac15038;
    }
LAB_10ac13490:
    iVar37 = 0;
  }
  else {
    FUN_10a10ca04(ppppplVar29,ppppplVar46,&ppppplStack_258,auStack_1f0);
    if (((ppppplVar29 != ppppplVar46) && (*(byte *)ppppplVar29 - 0x30 < 10)) ||
       (CARRY4((uint)ppppplStack_258._0_4_,auStack_1f0[0]))) goto LAB_10ac13490;
    iVar37 = (int)ppppplStack_258._0_4_ + auStack_1f0[0];
  }
  pppppuVar1 = pppppuStack_128;
  pppppuVar7 = pppppuStack_130;
  uStack_1e0 = (long ******)CONCAT44(iVar50,(uint)uStack_1e0);
  uStack_1d0._0_7_ = SUB87(pppppuStack_130,0);
  uStack_1d0._7_1_ = (byte)((ulong)pppppuStack_130 >> 0x38);
  pppppuStack_1c0 = pppppuStack_120;
  pppppuStack_1c8 = pppppuStack_128;
  pppppuStack_130 = (undefined8 ******)0x0;
  pppppuStack_128 = (undefined8 ******)0x0;
  pppppuStack_120 = (undefined8 ******)0x0;
  ppppplStack_148 = (long *****)&DAT_10f3afcfb;
  ppppplStack_140 = (long *****)0x5;
  ppppplStack_228 = (long *****)&ppppplStack_148;
  pppppplVar15 = &ppppplStack_110;
  iStack_1d8 = iVar37;
  func_0x00010ac42a04(pppppplVar15,&ppppplStack_148,&UNK_10dd5b8f9,&ppppplStack_228,&ppppplStack_240
                     );
  ppppplVar21 = pppppplVar15[6];
  ppppplVar27 = pppppplVar15[7];
  ppppplVar46 = (long *****)((long)ppppplVar21 + (long)ppppplVar27);
  ppppplVar29 = ppppplVar21;
  for (ppppplVar47 = ppppplVar21;
      (ppppplVar27 != (long *****)0x0 && (ppppplVar29 = ppppplVar47, *(byte *)ppppplVar47 == 0x30));
      ppppplVar47 = (long *****)((long)ppppplVar47 + 1)) {
    ppppplVar27 = (long *****)((long)ppppplVar27 + -1);
    ppppplVar29 = ppppplVar46;
  }
  if ((ppppplVar29 == ppppplVar46) || (9 < *(byte *)ppppplVar29 - 0x30)) {
    if (ppppplVar29 == ppppplVar21) {
      FUN_10a00946c(&UNK_10f69d937);
      goto LAB_10ac15038;
    }
LAB_10ac13580:
    uVar24 = 0;
  }
  else {
    FUN_10a10ca04(ppppplVar29,ppppplVar46,&ppppplStack_228,&ppppplStack_240);
    if ((ppppplVar29 != ppppplVar46) && (*(byte *)ppppplVar29 - 0x30 < 10)) goto LAB_10ac13580;
    if (CARRY4((uint)ppppplStack_228,(uint)ppppplStack_240._0_4_)) goto LAB_10ac13580;
    uVar24 = (ulong)((uint)ppppplStack_228 + (int)ppppplStack_240._0_4_);
  }
  if (((long)pppppuVar1 - (long)pppppuVar7 >> 3) * -0x5555555555555555 - uVar24 != 0)
  goto LAB_10ac14f94;
  if (uVar22 <= (uint)(iVar37 * iVar50 * (int)uVar24)) {
    ppppplStack_148 = (long *****)&pppppuStack_130;
    FUN_10a0426d8(&ppppplStack_148);
    func_0x000107c34f24(&ppppplStack_110,ppppplStack_108);
    if (CONCAT17((undefined1)uStack_e9,
                 CONCAT43(auStack_f0._3_4_,CONCAT21(auStack_f0._1_2_,auStack_f0[0]))) != 0) {
      uStack_e9 = CONCAT31(CONCAT21(auStack_f0._1_2_,auStack_f0[0]),(undefined1)uStack_e9);
      uStack_e5 = auStack_f0._3_4_;
      uStack_e1 = (undefined1)uStack_e9;
      __ZdlPv();
    }
    if ((long)uStack_160 < 0) {
      __ZdlPv(ppppplStack_170);
    }
    iVar37 = iStack_1d8;
    iVar50 = uStack_1e0._4_4_;
    pppppuStack_128 = (undefined8 *****)((ulong)pppppuStack_128 & 0xffffffffffffff00);
    uVar24 = *(ulong *)(param_1 + 0x298);
    lVar23 = *(long *)(param_1 + 0x290);
    if (-1 < (char)*(byte *)(param_1 + 0x2a7)) {
      uVar24 = (ulong)*(byte *)(param_1 + 0x2a7);
      lVar23 = lVar43;
    }
    auStack_f0[0] = (undefined1)lVar23;
    auStack_f0._1_2_ = (undefined2)((ulong)lVar23 >> 8);
    auStack_f0._3_4_ = (undefined4)((ulong)lVar23 >> 0x18);
    uStack_e9._0_1_ = (undefined1)((ulong)lVar23 >> 0x38);
    uStack_e9._1_3_ = (undefined3)uVar24;
    uStack_e5 = (undefined4)(uVar24 >> 0x18);
    uStack_e1 = (undefined1)(uVar24 >> 0x38);
    ppplVar33 = (long ***)auStack_f0;
    pppppuStack_130 = ppppppuVar44;
    FUN_10a1aea04(ppplVar33,&UNK_10f64210b,0xffffffffffffffff);
    if (ppplVar33 == (long ***)0xffffffffffffffff) {
      ppplVar39 = (long ***)CONCAT17(uStack_e1,CONCAT43(uStack_e5,uStack_e9._1_3_));
    }
    else {
      ppplVar39 = (long ***)CONCAT17(uStack_e1,CONCAT43(uStack_e5,uStack_e9._1_3_));
      if (ppplVar33 <= ppplVar39) {
        ppplVar39 = ppplVar33;
      }
    }
    uVar26 = CONCAT17((undefined1)uStack_e9,
                      CONCAT43(auStack_f0._3_4_,CONCAT21(auStack_f0._1_2_,auStack_f0[0])));
    if ((long ***)0x7ffffffffffffff7 < ppplVar39) {
      func_0x000109ffde50();
      goto LAB_10ac15038;
    }
    if (ppplVar39 < (long ***)0x17) {
      uStack_160 = (long ****)CONCAT17((char)ppplVar39,(undefined7)uStack_160);
      pppppplVar16 = &ppppplStack_170;
      if (ppplVar39 != (long ***)0x0) goto LAB_10ac136c4;
    }
    else {
      pppppplVar15 = (long ******)0x19;
      if (((ulong)ppplVar39 | 7) != 0x17) {
        pppppplVar15 = (long ******)(((ulong)ppplVar39 | 7) + 1);
      }
      pppppplVar16 = pppppplVar15;
      __Znwm();
      uStack_160 = (long ****)((ulong)pppppplVar15 | 0x8000000000000000);
      ppppplStack_170 = (long *****)pppppplVar16;
      pplStack_168 = (long **)ppplVar39;
LAB_10ac136c4:
      _memmove(pppppplVar16,uVar26,ppplVar39);
    }
    pppppuVar7 = pppppuStack_1c8;
    *(char *)((long)pppppplVar16 + (long)ppplVar39) = '\0';
    ppppppuVar44 = (undefined8 ******)CONCAT17(uStack_1d0._7_1_,(undefined7)uStack_1d0);
    if (ppppppuVar44 != (undefined8 ******)pppppuStack_1c8) {
      do {
        pppplVar45 = uStack_160;
        ppplVar33 = (long ***)pplStack_168;
        if (-1 < (long)uStack_160) {
          ppplVar33 = (long ***)((ulong)uStack_160 >> 0x38);
        }
        FUN_10a003c90(auStack_f0,(undefined1 *)((long)ppplVar33 + 1),&ppppplStack_148);
        if (ppplVar33 != (long ***)0x0) {
          pppppplVar15 = (long ******)ppppplStack_170;
          if (-1 < (long)pppplVar45) {
            pppppplVar15 = &ppppplStack_170;
          }
          _memmove(auStack_f0,pppppplVar15,ppplVar33);
        }
        *(undefined2 *)(auStack_f0 + (long)ppplVar33) = 0x2f;
        pppppuVar1 = ppppppuVar44[1];
        ppppppuVar10 = (undefined8 ******)*ppppppuVar44;
        if (-1 < (char)*(byte *)((long)ppppppuVar44 + 0x17)) {
          pppppuVar1 = (undefined8 *****)(ulong)*(byte *)((long)ppppppuVar44 + 0x17);
          ppppppuVar10 = ppppppuVar44;
        }
        puVar40 = (undefined8 *)auStack_f0;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (puVar40,ppppppuVar10,pppppuVar1);
        ppppplStack_108 = (long *****)puVar40[1];
        ppppplStack_110 = (long *****)*puVar40;
        uStack_100 = puVar40[2];
        puVar40[1] = 0;
        puVar40[2] = 0;
        *puVar40 = 0;
        FUN_10ac45928(&ppppplStack_148,*(undefined8 *)(param_1 + 0x90),2);
        ppppplVar47 = ppppplStack_148;
        FUN_10a107e2c(auStack_f0,&ppppplStack_110,param_1 + 0x2a8,0);
        FUN_10ac5fd4c(ppppplVar47,auStack_f0);
        FUN_10ac160d0(pppppuStack_130 + 3,&ppppplStack_148);
        ppppplVar47 = ppppplStack_140;
        if ((long ******)ppppplStack_140 != (long ******)0x0) {
          pppppplVar15 = (long ******)(ppppplStack_140 + 1);
          do {
            ppppplVar46 = *pppppplVar15;
            cVar2 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(pppppplVar15,0x10);
            if (bVar9) {
              *pppppplVar15 = (long *****)((long)ppppplVar46 + -1);
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (ppppplVar46 == (long *****)0x0) {
            (*(code *)(*ppppplStack_140)[2])(ppppplStack_140);
            __ZNSt3__119__shared_weak_count14__release_weakEv(ppppplVar47);
          }
        }
        ppppppuVar44 = ppppppuVar44 + 3;
      } while (ppppppuVar44 != (undefined8 ******)pppppuVar7);
    }
    func_0x000107c2b054(auStack_f0,"default");
    plVar41 = (long *)(param_1 + 0x358);
    plVar19 = plVar41;
    func_0x00010ac45f30(plVar41,auStack_f0,auStack_f0);
    func_0x000107c27e9c(plVar19 + 7,(ulong)uStack_1e0 & 0xffffffff);
    pppppuVar7 = pppppuStack_130;
    ppppplStack_110 = (long *****)((ulong)ppppplStack_110 & 0xffffffff00000000);
    if ((uint)uStack_1e0 != 0) {
      uVar22 = 0;
      iVar4 = iVar37 * iVar50;
      puVar40 = (undefined8 *)((ulong)auStack_f0 | 4);
      do {
        puVar40[4] = 0;
        puVar40[1] = 0;
        *puVar40 = 0;
        puVar40[3] = 0;
        puVar40[2] = 0;
        ppppplStack_b0 = (long *****)0x0;
        ppppplStack_b8 = (long *****)0x0;
        uStack_a0 = 0;
        uStack_a8 = 0;
        uStack_90 = 0;
        uStack_98 = 0;
        auStack_f0[0] = 0;
        uVar36 = 0;
        if (iVar4 != 0) {
          uVar36 = (int)uVar22 / iVar4;
        }
        uStack_c4 = CONCAT44(99999,uVar36);
        if ((ulong)((long)pppppuVar7[4] - (long)pppppuVar7[3] >> 4) <= (ulong)uVar36) {
          FUN_10a00946c(&UNK_10f69c001);
          goto LAB_10ac15038;
        }
        ppppuVar51 = (undefined8 ****)pppppuVar7[3][(ulong)uVar36 * 2];
        ppppuVar11 = ppppuVar51;
        (*(code *)(*ppppuVar51)[0x16])();
        (*(code *)(*ppppuVar51)[0x17])();
        iVar3 = uVar22 - uVar36 * iVar4;
        iVar5 = 0;
        if (iVar50 != 0) {
          iVar5 = iVar3 / iVar50;
        }
        iVar6 = 0;
        if (iVar50 != 0) {
          iVar6 = ((int)ppppuVar11 * (iVar3 - iVar5 * iVar50)) / iVar50;
        }
        iVar3 = 0;
        if (iVar37 != 0) {
          iVar3 = ((int)ppppuVar51 * iVar5) / iVar37;
        }
        iVar5 = 0;
        if (iVar50 != 0) {
          iVar5 = (int)ppppuVar11 / iVar50;
        }
        fStack_d4 = (float)iVar5;
        auStack_f0._4_3_ = SUB43((float)iVar6,0);
        uStack_e9._1_3_ = SUB43((float)iVar3,0);
        uStack_e9 = CONCAT31(uStack_e9._1_3_,(char)((uint)(float)iVar6 >> 0x18));
        iVar5 = 0;
        if (iVar37 != 0) {
          iVar5 = (int)ppppuVar51 / iVar37;
        }
        fStack_c8 = (float)iVar5;
        uStack_e5._1_3_ = SUB43(fStack_d4,0);
        uStack_e5 = CONCAT31(uStack_e5._1_3_,(char)((uint)(float)iVar3 >> 0x18));
        uStack_e1 = (undefined1)((uint)fStack_d4 >> 0x18);
        cStack_e0 = SUB41(fStack_c8,0);
        uStack_df = (undefined2)((uint)fStack_c8 >> 8);
        uStack_dd = (uint)fStack_c8 >> 0x18;
        uStack_d9 = 0;
        uStack_d8 = 0;
        uStack_d0 = (long ******)CONCAT44(fStack_d4,fStack_c8);
        FUN_10ac15f74(pppppuVar7,auStack_f0);
        func_0x000109febdc8(plVar19 + 7,&ppppplStack_110);
        uVar22 = (int)ppppplStack_110 + 1;
        ppppplStack_110 = (long *****)CONCAT44(ppppplStack_110._4_4_,uVar22);
      } while (uVar22 < (uint)uStack_1e0);
    }
    lVar23 = param_1 + 0x370;
    plVar19 = plVar41;
    func_0x00010ac45eb4(plVar41,lVar23);
    lVar43 = lVar23;
    if ((long *)(param_1 + 0x360) == plVar19) {
      lVar43 = *plVar41 + 0x20;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(lVar23,lVar43);
    func_0x00010ac17ce4(plVar41,lVar23);
    *(long **)(param_1 + 0x388) = plVar41;
    FUN_10ac161d0(param_1);
    if ((long)uStack_160 < 0) {
      __ZdlPv(ppppplStack_170);
    }
    FUN_10ac4578c(&pppppuStack_130);
    auStack_f0[0] = SUB81(&uStack_1d0,0);
    auStack_f0._1_2_ = (undefined2)((ulong)&uStack_1d0 >> 8);
    auStack_f0._3_4_ = (undefined4)((ulong)&uStack_1d0 >> 0x18);
    uStack_e9._0_1_ = (undefined1)((ulong)&uStack_1d0 >> 0x38);
    FUN_10a0426d8(auStack_f0);
LAB_10ac13a0c:
    *(byte *)(param_1 + 0x2f8) = *(byte *)(param_1 + 0x2f8) | 1;
    FUN_10ac15874(param_1);
    if ((char)bStack_259 < '\0') {
      __ZdlPv(ppppplStack_270);
    }
    goto LAB_10ac13a30;
  }
  puVar20 = &UNK_10f69b987;
LAB_10ac14fa8:
  FUN_10a00946c(puVar20);
LAB_10ac15038:
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x10ac1503c);
  (*pcVar8)();
}



/* Entry: 10ac15608; end: 10ac1572b;  */

void FUN_10ac15608(float param_1,long param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  ulong extraout_x8;
  long extraout_x10;
  undefined8 extraout_x11;
  undefined8 extraout_x12;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 auStack_28 [8];
  
  plVar4 = *(long **)(param_2 + 0x388);
  if (plVar4 == (long *)0x0) {
    plVar4 = (long *)(param_2 + 0x358);
    FUN_10ac17ca8(plVar4,param_2 + 0x370);
  }
  lVar1 = *plVar4;
  lVar2 = plVar4[1];
  FUN_10acdc738(*(undefined8 *)(param_2 + 800));
  lVar5 = *(long *)(param_2 + 0x328) + 0xe0;
  func_0x00010aa905a0(param_1 * (*(float *)(*(long *)(param_2 + 0x328) + 0x100) /
                                *(float *)(*(long *)(param_2 + 800) + 0x34)));
  iVar3 = (int)((ulong)(lVar2 - lVar1) >> 2) + -1;
  if ((int)lVar5 <= iVar3) {
    iVar3 = (int)lVar5;
  }
  if (*(int *)(param_2 + 0x390) != iVar3) {
    uStack_38 = *(undefined8 *)(*(long *)(param_2 + 0x90) + 0xbd0);
    FUN_10a1bd024();
    uStack_30 = *(undefined8 *)(lVar5 + 0x40);
    FUN_10a1bd024();
    *(undefined8 *)(lVar5 + 0x40) = extraout_x12;
    *(ulong *)(param_2 + 0x390) = extraout_x8 | extraout_x10 << 0x20;
    *(short *)(param_2 + 0x39c) = (short)((ulong)extraout_x11 >> 0x20);
    *(int *)(param_2 + 0x398) = (int)extraout_x11;
    func_0x00010a1bd170(auStack_28);
    FUN_10ac45aa4(param_2 + 0x390);
    FUN_10ac18ae8(param_2);
    FUN_10a1bff04(&uStack_38);
  }
  return;
}



/* Entry: 10ac1572c; end: 10ac15733;  */

/* WARNING: Removing unreachable block (ram,0x00010ac11960) */
/* WARNING: Removing unreachable block (ram,0x00010ac11964) */
/* WARNING: Removing unreachable block (ram,0x00010ac1196c) */
/* WARNING: Removing unreachable block (ram,0x00010ac11974) */
/* WARNING: Removing unreachable block (ram,0x00010ac11978) */

void FUN_10ac1572c(float param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  float *pfVar2;
  byte bVar3;
  ushort uVar4;
  ushort uVar5;
  char cVar6;
  bool bVar7;
  code *pcVar8;
  int iVar9;
  ushort *puVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  int *piVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  float *pfVar20;
  ulong uVar21;
  int iVar22;
  long *plVar23;
  undefined8 uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  long *plStack_b8;
  long *plStack_b0;
  undefined1 auStack_a8 [8];
  long *plStack_a0;
  long lStack_98;
  uint uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined8 uStack_84;
  undefined8 uStack_7c;
  undefined4 uStack_74;
  undefined1 uStack_70;
  undefined8 uStack_68;
  
  lVar13 = param_2 + -0x10;
  bVar3 = *(byte *)(param_2 + 0x2e8);
  FUN_10ac12d9c();
  FUN_10ac15608(lVar13);
  if ((*(byte *)(param_2 + 0x2e8) >> 4 & 1) != 0) {
    if ((int)param_3 != 0) {
      FUN_10acdc738(*(undefined8 *)(param_2 + 0x310));
      param_1 = param_1 / *(float *)(*(long *)(param_2 + 0x310) + 0x34);
      fVar26 = 0.0;
      if (0.0 <= param_1) {
        fVar26 = param_1;
      }
      fVar25 = 1.0;
      if (fVar26 <= 1.0) {
        fVar25 = fVar26;
      }
      lVar19 = *(long *)(param_2 + 0x318);
      lVar16 = *(long *)(lVar19 + 0xe8);
      pfVar2 = *(float **)(lVar19 + 0xf0);
      lVar14 = (long)pfVar2 - lVar16;
      uVar18 = lVar14 >> 3;
      if (uVar18 < 3) {
        piVar15 = *(int **)(param_2 + 0x480);
        if (*(long *)(piVar15 + 0xc) == *(long *)(piVar15 + 0xe)) goto LAB_10ac119cc;
        fVar26 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(piVar15 + 0xe) + -4));
        iVar22 = (int)(fVar25 * fVar26);
      }
      else {
        fVar25 = fVar25 * *(float *)(lVar19 + 0x100);
        pfVar20 = (float *)(lVar16 + 8);
        uVar17 = uVar18;
        if (pfVar20 != pfVar2) {
          uVar17 = (long)pfVar2 - (long)pfVar20 >> 3;
          do {
            uVar21 = uVar17 >> 1;
            pfVar2 = pfVar20 + uVar21 * 2 + 2;
            uVar17 = uVar17 + (uVar17 >> 1 ^ 0xffffffffffffffff);
            if (fVar25 <= pfVar20[uVar21 * 2]) {
              pfVar2 = pfVar20;
              uVar17 = uVar21;
            }
            pfVar20 = pfVar2;
          } while (uVar17 != 0);
          lVar14 = (long)pfVar2 - lVar16;
          uVar17 = lVar14 >> 3;
        }
        if ((uVar18 <= uVar17 - 1) || (uVar18 <= uVar17)) {
LAB_10ac119cc:
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x10ac119d0);
          (*pcVar8)();
        }
        pfVar2 = (float *)(lVar16 + (uVar17 - 1) * 8);
        fVar27 = *pfVar2;
        fVar26 = pfVar2[1];
        piVar15 = *(int **)(param_2 + 0x480);
        uVar18 = (ulong)(int)((float)(int)fVar26 +
                             ((fVar25 - fVar27) / (*(float *)(lVar16 + lVar14) - fVar27)) *
                             (float)((int)((float *)(lVar16 + lVar14))[1] - (int)fVar26));
        if ((ulong)(*(long *)(piVar15 + 0xe) - *(long *)(piVar15 + 0xc) >> 2) <= uVar18)
        goto LAB_10ac119cc;
        iVar22 = *(int *)(*(long *)(piVar15 + 0xc) + uVar18 * 4);
      }
      if (iVar22 != *piVar15) {
        FUN_10ac126cc(lVar13,param_2 + 0x280);
        piVar15 = *(int **)(param_2 + 0x480);
        puVar10 = (ushort *)(piVar15 + 2);
        uVar5 = *puVar10;
        uVar4 = *(ushort *)((long)piVar15 + 10);
        plVar23 = (long *)(piVar15 + 0x22);
        if (*plVar23 == 0) {
          lStack_98 = (ulong)uVar5 << 0x20;
          uStack_90 = (uint)uVar4;
          uStack_84 = 0;
          uStack_8c = 1;
          uStack_88 = 4;
          uStack_7c = 0x100000001;
          uStack_74 = 0;
          uStack_70 = 0;
          uStack_68 = 0;
          lVar16 = *(long *)(param_2 + 0x80);
          FUN_10a2421c8();
          plVar11 = *(long **)(lVar16 + 0x228);
          (**(code **)(*plVar11 + 0x20))(plVar11,&lStack_98);
          FUN_10a0a25e4(auStack_a8,plVar11);
          uVar24 = *(undefined8 *)(param_2 + 0x80);
          plVar12 = (long *)0x2d0;
          __Znwm();
          plVar12[1] = 0;
          plVar12[2] = 0;
          *plVar12 = (long)&PTR_FUN_110b9fcf0;
          plVar11 = plVar12 + 3;
          FUN_10a1db5e8(plVar11,uVar24,auStack_a8);
          plStack_b8 = plVar11;
          plStack_b0 = plVar12;
          FUN_10a063ca4(&plStack_b8,plVar12 + 0xb,plVar11);
          FUN_10a02bf24(plVar23,&plStack_b8);
          plVar11 = plStack_b0;
          if (plStack_b0 != (long *)0x0) {
            plVar12 = plStack_b0 + 1;
            do {
              lVar16 = *plVar12;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar12,0x10);
              if (bVar7) {
                *plVar12 = lVar16 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (lVar16 == 0) {
              (**(code **)(*plStack_b0 + 0x10))(plStack_b0);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
            }
          }
          plStack_b8 = (long *)*plVar23;
          if (plStack_b8 == (long *)0x0) {
            plStack_b0 = (long *)0x0;
          }
          else {
            plStack_b0 = *(long **)(piVar15 + 0x24);
            if (plStack_b0 != (long *)0x0) {
              plVar23 = plStack_b0 + 1;
              do {
                cVar6 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(plVar23,0x10);
                if (bVar7) {
                  *plVar23 = *plVar23 + 1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
            }
          }
          FUN_10a1e3a04(lVar13,&plStack_b8);
          plVar23 = plStack_b0;
          if (plStack_b0 != (long *)0x0) {
            plVar11 = plStack_b0 + 1;
            do {
              lVar13 = *plVar11;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar11,0x10);
              if (bVar7) {
                *plVar11 = lVar13 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (lVar13 == 0) {
              (**(code **)(*plStack_b0 + 0x10))(plStack_b0);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar23);
            }
          }
          if (plStack_a0 != (long *)0x0) {
            plVar23 = plStack_a0 + 1;
            do {
              lVar13 = *plVar23;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar23,0x10);
              if (bVar7) {
                *plVar23 = lVar13 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (lVar13 == 0) {
              (**(code **)(*plStack_a0 + 0x10))(plStack_a0);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_a0);
            }
          }
        }
        FUN_10a1b2218(puVar10,iVar22);
        (**(code **)(**(long **)(*(long *)(piVar15 + 0x22) + 0x288) + 0xa0))
                  (*(long **)(*(long *)(piVar15 + 0x22) + 0x288),0,0,0,uVar5,uVar4,0,puVar10,0);
        *piVar15 = iVar22;
      }
    }
    goto LAB_10ac117cc;
  }
  lVar16 = lVar13;
  func_0x00010ac17c34();
  lVar14 = *(long *)(param_2 + 0x398);
  uVar18 = (*(long *)(param_2 + 0x3a0) - lVar14 >> 3) * 0x4ec4ec4ec4ec4ec5;
  iVar22 = (int)uVar18;
  if (iVar22 < 2) {
    iVar22 = 1;
  }
  iVar9 = (int)lVar16;
  iVar1 = iVar22 + -1;
  if (iVar9 <= iVar22 + -1) {
    iVar1 = iVar9;
  }
  iVar22 = 0;
  if (-1 < iVar9) {
    iVar22 = iVar1;
  }
  if (*(long *)(param_2 + 0x3a0) == lVar14) {
LAB_10ac11600:
    iVar22 = 0x137ec6b8;
    plVar23 = (long *)0x1137ec6d0;
    if (((bRam00000001137ec6b8 & 1) == 0) && (___cxa_guard_acquire(), iVar22 != 0)) {
      plVar23 = (long *)0x1137ec6d0;
      ___cxa_atexit(FUN_10ac161cc,0x1137ec6d0,0x100000000);
      ___cxa_guard_release(0x1137ec6b8);
    }
  }
  else {
    lVar16 = *(long *)(param_2 + 0x3b0);
    if (lVar16 == *(long *)(param_2 + 0x3b8)) goto LAB_10ac11600;
    if (uVar18 < (ulong)(long)iVar22 || uVar18 - (long)iVar22 == 0) goto LAB_10ac119cc;
    uVar18 = (ulong)*(uint *)(lVar14 + (long)iVar22 * 0x68 + 0x2c);
    if ((ulong)(*(long *)(param_2 + 0x3b8) - lVar16 >> 4) <= uVar18) {
      uVar18 = 0;
    }
    plVar23 = (long *)(lVar16 + uVar18 * 0x10);
  }
  lVar16 = *plVar23;
  if (lVar16 != 0) {
    lVar14 = plVar23[1];
    uStack_90 = (uint)lVar14;
    uStack_8c = (undefined4)((ulong)lVar14 >> 0x20);
    if (lVar14 != 0) {
      plVar11 = (long *)(lVar14 + 8);
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar7) {
          *plVar11 = *plVar11 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    lStack_98 = lVar16;
    FUN_10a1e3a04(lVar13,&lStack_98);
    plVar11 = (long *)CONCAT44(uStack_8c,uStack_90);
    if (plVar11 != (long *)0x0) {
      plVar12 = plVar11 + 1;
      do {
        lVar13 = *plVar12;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar7) {
          *plVar12 = lVar13 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (lVar13 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
      }
    }
    func_0x00010ac60df8(*plVar23,param_3);
  }
LAB_10ac117cc:
  if ((bVar3 & 1) == 0) {
    FUN_10a1c08dc(param_2 + 0x98);
  }
  return;
}



/* Entry: 10ac15734; end: 10ac15873;  */

void FUN_10ac15734(long param_1)

{
  ushort uVar1;
  ushort uVar2;
  undefined2 uVar3;
  float fVar4;
  long lVar5;
  undefined4 *puVar6;
  float fVar7;
  undefined4 uStack_38;
  undefined4 uStack_34;
  char cStack_21;
  
  FUN_10ac126cc();
  lVar5 = *(long *)(param_1 + 0x490);
  uVar1 = *(ushort *)(lVar5 + 8);
  uVar2 = *(ushort *)(lVar5 + 10);
  uVar3 = *(undefined2 *)(lVar5 + 0xc);
  *(ushort *)(param_1 + 0x458) = uVar1;
  *(ushort *)(param_1 + 0x45a) = uVar2;
  *(undefined2 *)(param_1 + 0x45c) = uVar3;
  fVar4 = (float)uVar1;
  fVar7 = (float)uVar2;
  *(byte *)(param_1 + 0x460) = *(byte *)(param_1 + 0x460) & 0xfe;
  *(undefined8 *)(param_1 + 0x464) = 0;
  *(float *)(param_1 + 0x46c) = fVar4;
  *(float *)(param_1 + 0x470) = fVar7;
  *(undefined8 *)(param_1 + 0x47c) = *(undefined8 *)(param_1 + 0x46c);
  *(undefined8 *)(param_1 + 0x474) = *(undefined8 *)(param_1 + 0x464);
  *(float *)(param_1 + 0x484) = fVar4;
  *(float *)(param_1 + 0x488) = fVar7;
  func_0x00010951ec58(param_1 + 0x358,*(undefined8 *)(param_1 + 0x360));
  *(long *)(param_1 + 0x358) = param_1 + 0x360;
  *(undefined8 *)(param_1 + 0x368) = 0;
  *(undefined8 *)(param_1 + 0x360) = 0;
  func_0x000107c2b054(&uStack_38,"default");
  lVar5 = param_1 + 0x358;
  func_0x00010ac45f30(lVar5,&uStack_38,&uStack_38);
  if (cStack_21 < '\0') {
    __ZdlPv(CONCAT44(uStack_34,uStack_38));
  }
  uStack_38 = 0;
  func_0x0001094f81d8(lVar5 + 0x38,*(undefined2 *)(param_1 + 0x45c),&uStack_38);
  if (*(char *)(param_1 + 0x387) < '\0') {
    *(undefined8 *)(param_1 + 0x378) = 7;
    puVar6 = *(undefined4 **)(param_1 + 0x370);
  }
  else {
    puVar6 = (undefined4 *)(param_1 + 0x370);
    *(undefined1 *)(param_1 + 0x387) = 7;
  }
  *(undefined4 *)((long)puVar6 + 3) = 0x746c7561;
  *puVar6 = 0x61666564;
  *(undefined1 *)((long)puVar6 + 7) = 0;
  *(long *)(param_1 + 0x388) = lVar5 + 0x38;
  return;
}



/* Entry: 10ac15874; end: 10ac15a27;  */

void FUN_10ac15874(long param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  code *pcVar6;
  long *plVar7;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar8;
  int iVar9;
  ulong uVar10;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  lStack_40 = 0;
  uStack_38 = 0;
  lStack_48 = 0;
  lVar8 = *(long *)(*(long *)(param_1 + 0x338) + 0xe8);
  lVar2 = *(long *)(*(long *)(param_1 + 0x338) + 0xf0);
  FUN_10ac4068c(&lStack_48,lVar8,lVar2,lVar2 - lVar8 >> 3);
  if (lStack_48 == lStack_40) {
    FUN_10a00946c(&UNK_10f69baa6);
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x10ac15a08);
    (*pcVar6)();
  }
  iVar4 = *(int *)(lStack_40 + -4);
  if (*(ulong *)(param_1 + 0x368) < 2) {
    if ((*(byte *)(param_1 + 0x2f8) >> 4 & 1) == 0) {
      uVar10 = (*(long *)(param_1 + 0x3b0) - *(long *)(param_1 + 0x3a8) >> 3) * 0x4ec4ec4ec4ec4ec5;
    }
    else {
      uVar10 = (ulong)*(ushort *)(param_1 + 0x45c);
    }
  }
  else {
    plVar7 = *(long **)(param_1 + 0x388);
    if (plVar7 == (long *)0x0) {
      plVar7 = (long *)(param_1 + 0x358);
      FUN_10ac17ca8(plVar7,param_1 + 0x370);
    }
    uVar10 = plVar7[1] - *plVar7 >> 2;
  }
  iVar9 = (int)uVar10;
  lVar8 = lStack_48;
  if ((iVar9 < iVar4) && ((bRam000000011330a9e8 & 1) != 0)) {
    func_0x00010ae06f08(0,1,&UNK_10f69bad5,&UNK_10f69bb1b,0x112,&UNK_10f69bb65,in_x6,in_x7,iVar4,
                        uVar10);
    lVar8 = lStack_48;
  }
  for (; lVar8 != lStack_40; lVar8 = lVar8 + 8) {
    iVar3 = *(int *)(lVar8 + 4);
    iVar4 = iVar3;
    if (iVar9 <= iVar3) {
      iVar4 = iVar9;
    }
    iVar1 = iVar9;
    if (iVar3 != -1) {
      iVar1 = iVar4;
    }
    *(int *)(lVar8 + 4) = iVar1;
  }
  func_0x00010aa83d64(*(long *)(param_1 + 0x328) + 0xe0,&lStack_48);
  lVar8 = *(long *)(param_1 + 800);
  *(undefined4 *)(lVar8 + 0x34) = *(undefined4 *)(*(long *)(param_1 + 0x328) + 0x100);
  bVar5 = *(byte *)(param_1 + 0x2f8);
  *(byte *)(lVar8 + 0x24) = bVar5 >> 3 & 1;
  *(byte *)(lVar8 + 0x23) = bVar5 >> 2 & 1;
  if ((bVar5 >> 1 & 1) != 0) {
    FUN_10ac15b70(0,param_1,0xffffffff);
  }
  if (lStack_48 != 0) {
    lStack_40 = lStack_48;
    __ZdlPv();
  }
  return;
}



/* Entry: 10ac15a28; end: 10ac15b6f;  */

bool FUN_10ac15a28(undefined8 param_1,long param_2)

{
  bool bVar1;
  long lStack_110;
  long lStack_108;
  undefined8 uStack_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  short sStack_f0;
  short sStack_ee;
  char cStack_e1;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [48];
  
  __ZSt19uncaught_exceptionsv();
  FUN_10a08d2e0(&uStack_f8,param_1);
  FUN_10a0f19e0(auStack_60,&uStack_f8,0);
  if (cStack_e1 < '\0') {
    __ZdlPv(CONCAT44(uStack_f4,uStack_f8));
  }
  FUN_10a0f1f4c(&lStack_110,auStack_60);
  uStack_f8 = 0xffffffff;
  FUN_10a1b1eec(&sStack_f0,lStack_110,lStack_108 - lStack_110,
                0x134 < *(int *)(*(long *)(param_2 + 0xa20) + 0x18),1);
  bVar1 = false;
  lStack_88 = lStack_110;
  uStack_78 = uStack_100;
  lStack_80 = lStack_108;
  uStack_70 = 0;
  uStack_68 = 0;
  if ((lStack_108 != lStack_110) && (sStack_f0 != 0)) {
    bVar1 = sStack_ee != 0;
  }
  if (lStack_110 != 0) {
    lStack_80 = lStack_110;
    __ZdlPv();
  }
  FUN_10a1b21d0(&sStack_f0);
  FUN_10a0f1ea0(auStack_60);
  __ZSt19uncaught_exceptionsv();
  return bVar1;
}



/* Entry: 10ac15b70; end: 10ac15c1b;  */

void FUN_10ac15b70(double param_1,long param_2,int param_3)

{
  long lVar1;
  long lVar2;
  int iVar3;
  code *pcVar4;
  long *plVar5;
  byte *pbVar6;
  byte *pbVar7;
  ulong extraout_x8;
  float *extraout_x8_00;
  long extraout_x10;
  undefined8 extraout_x11;
  undefined8 extraout_x12;
  long lVar8;
  long *plVar9;
  float fVar10;
  float fVar11;
  double dVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  dVar12 = param_1;
  FUN_10ac114d4(param_2,0);
  if (SUB84(param_1,0) < 0.0) {
    FUN_10a00946c(&UNK_10f69bc10);
  }
  else if ((0 < param_3) || (param_3 == -1)) {
    lVar8 = *(long *)(param_2 + 800);
    *(undefined2 *)(lVar8 + 0x20) = 1;
    *(undefined2 *)(lVar8 + 0x10) = 0;
    *(int *)(lVar8 + 0x28) = param_3;
    *(undefined4 *)(lVar8 + 0x2c) = 0;
    (**(code **)(**(long **)(lVar8 + 8) + 0x10))();
    fVar10 = (float)dVar12 - SUB84(param_1,0);
    *(float *)(lVar8 + 0x30) = fVar10;
    *(float *)(lVar8 + 0x3c) = fVar10;
    FUN_10acdc738(lVar8);
    plVar5 = *(long **)(param_2 + 0x388);
    if (plVar5 == (long *)0x0) {
      plVar5 = (long *)(param_2 + 0x358);
      FUN_10ac17ca8(plVar5,param_2 + 0x370);
    }
    lVar1 = *plVar5;
    lVar2 = plVar5[1];
    FUN_10acdc738(*(undefined8 *)(param_2 + 800));
    lVar8 = *(long *)(param_2 + 0x328) + 0xe0;
    func_0x00010aa905a0(fVar10 * (*(float *)(*(long *)(param_2 + 0x328) + 0x100) /
                                 *(float *)(*(long *)(param_2 + 800) + 0x34)));
    iVar3 = (int)((ulong)(lVar2 - lVar1) >> 2) + -1;
    if ((int)lVar8 <= iVar3) {
      iVar3 = (int)lVar8;
    }
    if (*(int *)(param_2 + 0x390) != iVar3) {
      FUN_10a1bd024();
      FUN_10a1bd024();
      *(undefined8 *)(lVar8 + 0x40) = extraout_x12;
      *(ulong *)(param_2 + 0x390) = extraout_x8 | extraout_x10 << 0x20;
      *(short *)(param_2 + 0x39c) = (short)((ulong)extraout_x11 >> 0x20);
      *(int *)(param_2 + 0x398) = (int)extraout_x11;
      func_0x00010a1bd170(&stack0xffffffffffffffd8);
      FUN_10ac45aa4(param_2 + 0x390);
      FUN_10ac18ae8(param_2);
      FUN_10a1bff04(&stack0xffffffffffffffc8);
    }
    return;
  }
  pbVar6 = &UNK_10f69bc35;
  FUN_10a00946c();
  func_0x00010ab9ac98();
  if ((pbVar6[0x2f8] >> 4 & 1) == 0) {
    if (*(long *)(pbVar6 + 0x3a8) == *(long *)(pbVar6 + 0x3b0)) {
      extraout_x8_00[2] = 0.0;
      extraout_x8_00[3] = 0.0;
      extraout_x8_00[0] = 1.0;
      extraout_x8_00[1] = 0.0;
      extraout_x8_00[6] = 0.0;
      extraout_x8_00[7] = 0.0;
      extraout_x8_00[4] = 1.0;
      extraout_x8_00[5] = 0.0;
      extraout_x8_00[8] = 1.0;
      return;
    }
    fVar10 = 1.0;
    fVar16 = 0.0;
  }
  else {
    iVar3 = *(int *)(*(long *)(*(long *)(pbVar6 + 0x90) + 0xa20) + 0x18);
    fVar10 = -1.0;
    if (iVar3 < 0x13a) {
      fVar10 = 1.0;
    }
    fVar16 = -1.0;
    if (iVar3 < 0x13a) {
      fVar16 = 0.0;
    }
  }
  pbVar7 = pbVar6;
  FUN_10ac15e20();
  if ((pbVar6[0x2f8] >> 4 & 1) == 0) {
    if ((ulong)(*(long *)(pbVar6 + 0x3c8) - *(long *)(pbVar6 + 0x3c0) >> 4) <=
        (ulong)*(uint *)(pbVar7 + 0x2c)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10ac15e20);
      (*pcVar4)();
    }
    plVar9 = *(long **)(*(long *)(pbVar6 + 0x3c0) + (ulong)*(uint *)(pbVar7 + 0x2c) * 0x10);
    plVar5 = plVar9;
    (**(code **)(*plVar9 + 0xb0))();
    (**(code **)(*plVar9 + 0xb8))();
  }
  else {
    plVar5 = (long *)(ulong)*(ushort *)(pbVar6 + 0x458);
    plVar9 = (long *)(ulong)*(ushort *)(pbVar6 + 0x45a);
  }
  fVar13 = 1.0 / (float)((ulong)plVar5 & 0xffffffff);
  fVar11 = 1.0 / (float)((ulong)plVar9 & 0xffffffff);
  fVar14 = *(float *)(pbVar7 + 0x24);
  fVar15 = *(float *)(pbVar7 + 0x28);
  if ((*pbVar7 & 1) == 0) {
    fVar17 = fVar14 * fVar13 - fVar13;
    fVar18 = -fVar11 + fVar11 * fVar15;
    fVar15 = (*(float *)(pbVar7 + 4) - *(float *)(pbVar7 + 0x14)) + 0.5;
    fVar14 = *(float *)(pbVar7 + 8) - *(float *)(pbVar7 + 0x18);
  }
  else {
    fVar17 = -fVar11 + fVar11 * fVar14;
    fVar18 = fVar15 * fVar13 - fVar13;
    fVar15 = (*(float *)(pbVar7 + 4) - *(float *)(pbVar7 + 0x18)) + fVar15 + -0.5;
    fVar14 = ((*(float *)(pbVar7 + 8) + *(float *)(pbVar7 + 0x14)) - fVar14) +
             *(float *)(pbVar7 + 0x10);
  }
  extraout_x8_00[2] = 0.0;
  extraout_x8_00[3] = 0.0;
  extraout_x8_00[1] = 0.0;
  extraout_x8_00[5] = 0.0;
  extraout_x8_00[8] = 1.0;
  *extraout_x8_00 = fVar17;
  extraout_x8_00[4] = fVar10 * fVar18;
  fVar11 = 1.0 - fVar11 * (fVar14 + 0.5);
  extraout_x8_00[6] = fVar13 * fVar15;
  extraout_x8_00[7] = (fVar11 - fVar18) - fVar16;
  FUN_10ac15e20();
  if ((*pbVar6 & 1) != 0) {
    extraout_x8_00[1] = fVar10 * fVar17;
    *extraout_x8_00 = 0.0;
    extraout_x8_00[3] = -fVar18;
    extraout_x8_00[4] = 0.0;
    extraout_x8_00[7] = (fVar11 - fVar17) - fVar16;
  }
  return;
}



/* Entry: 10ac15c1c; end: 10ac15c27;  */

void FUN_10ac15c1c(byte *param_1)

{
  int iVar1;
  code *pcVar2;
  byte *pbVar3;
  float *extraout_x8;
  long *plVar4;
  long *plVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  func_0x00010ab9ac98();
  if ((param_1[0x2f8] >> 4 & 1) == 0) {
    if (*(long *)(param_1 + 0x3a8) == *(long *)(param_1 + 0x3b0)) {
      extraout_x8[2] = 0.0;
      extraout_x8[3] = 0.0;
      extraout_x8[0] = 1.0;
      extraout_x8[1] = 0.0;
      extraout_x8[6] = 0.0;
      extraout_x8[7] = 0.0;
      extraout_x8[4] = 1.0;
      extraout_x8[5] = 0.0;
      extraout_x8[8] = 1.0;
      return;
    }
    fVar11 = 1.0;
    fVar10 = 0.0;
  }
  else {
    iVar1 = *(int *)(*(long *)(*(long *)(param_1 + 0x90) + 0xa20) + 0x18);
    fVar11 = -1.0;
    if (iVar1 < 0x13a) {
      fVar11 = 1.0;
    }
    fVar10 = -1.0;
    if (iVar1 < 0x13a) {
      fVar10 = 0.0;
    }
  }
  pbVar3 = param_1;
  FUN_10ac15e20();
  if ((param_1[0x2f8] >> 4 & 1) == 0) {
    if ((ulong)(*(long *)(param_1 + 0x3c8) - *(long *)(param_1 + 0x3c0) >> 4) <=
        (ulong)*(uint *)(pbVar3 + 0x2c)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10ac15e20);
      (*pcVar2)();
    }
    plVar5 = *(long **)(*(long *)(param_1 + 0x3c0) + (ulong)*(uint *)(pbVar3 + 0x2c) * 0x10);
    plVar4 = plVar5;
    (**(code **)(*plVar5 + 0xb0))();
    (**(code **)(*plVar5 + 0xb8))();
  }
  else {
    plVar4 = (long *)(ulong)*(ushort *)(param_1 + 0x458);
    plVar5 = (long *)(ulong)*(ushort *)(param_1 + 0x45a);
  }
  fVar7 = 1.0 / (float)((ulong)plVar4 & 0xffffffff);
  fVar6 = 1.0 / (float)((ulong)plVar5 & 0xffffffff);
  fVar8 = *(float *)(pbVar3 + 0x24);
  fVar9 = *(float *)(pbVar3 + 0x28);
  if ((*pbVar3 & 1) == 0) {
    fVar12 = fVar8 * fVar7 - fVar7;
    fVar13 = -fVar6 + fVar6 * fVar9;
    fVar9 = (*(float *)(pbVar3 + 4) - *(float *)(pbVar3 + 0x14)) + 0.5;
    fVar8 = *(float *)(pbVar3 + 8) - *(float *)(pbVar3 + 0x18);
  }
  else {
    fVar12 = -fVar6 + fVar6 * fVar8;
    fVar13 = fVar9 * fVar7 - fVar7;
    fVar9 = (*(float *)(pbVar3 + 4) - *(float *)(pbVar3 + 0x18)) + fVar9 + -0.5;
    fVar8 = ((*(float *)(pbVar3 + 8) + *(float *)(pbVar3 + 0x14)) - fVar8) +
            *(float *)(pbVar3 + 0x10);
  }
  extraout_x8[2] = 0.0;
  extraout_x8[3] = 0.0;
  extraout_x8[1] = 0.0;
  extraout_x8[5] = 0.0;
  extraout_x8[8] = 1.0;
  *extraout_x8 = fVar12;
  extraout_x8[4] = fVar11 * fVar13;
  fVar6 = 1.0 - fVar6 * (fVar8 + 0.5);
  extraout_x8[6] = fVar7 * fVar9;
  extraout_x8[7] = (fVar6 - fVar13) - fVar10;
  FUN_10ac15e20();
  if ((*param_1 & 1) != 0) {
    extraout_x8[1] = fVar11 * fVar12;
    *extraout_x8 = 0.0;
    extraout_x8[3] = -fVar13;
    extraout_x8[4] = 0.0;
    extraout_x8[7] = (fVar6 - fVar12) - fVar10;
  }
  return;
}



/* Entry: 10ac15c28; end: 10ac15e1f;  */

void FUN_10ac15c28(float *param_1,byte *param_2)

{
  int iVar1;
  code *pcVar2;
  byte *pbVar3;
  long *plVar4;
  long *plVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  if ((param_2[0x2f8] >> 4 & 1) == 0) {
    if (*(long *)(param_2 + 0x3a8) == *(long *)(param_2 + 0x3b0)) {
      param_1[2] = 0.0;
      param_1[3] = 0.0;
      param_1[0] = 1.0;
      param_1[1] = 0.0;
      param_1[6] = 0.0;
      param_1[7] = 0.0;
      param_1[4] = 1.0;
      param_1[5] = 0.0;
      param_1[8] = 1.0;
      return;
    }
    fVar11 = 1.0;
    fVar10 = 0.0;
  }
  else {
    iVar1 = *(int *)(*(long *)(*(long *)(param_2 + 0x90) + 0xa20) + 0x18);
    fVar11 = -1.0;
    if (iVar1 < 0x13a) {
      fVar11 = 1.0;
    }
    fVar10 = -1.0;
    if (iVar1 < 0x13a) {
      fVar10 = 0.0;
    }
  }
  pbVar3 = param_2;
  FUN_10ac15e20();
  if ((param_2[0x2f8] >> 4 & 1) == 0) {
    if ((ulong)(*(long *)(param_2 + 0x3c8) - *(long *)(param_2 + 0x3c0) >> 4) <=
        (ulong)*(uint *)(pbVar3 + 0x2c)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10ac15e20);
      (*pcVar2)();
    }
    plVar5 = *(long **)(*(long *)(param_2 + 0x3c0) + (ulong)*(uint *)(pbVar3 + 0x2c) * 0x10);
    plVar4 = plVar5;
    (**(code **)(*plVar5 + 0xb0))();
    (**(code **)(*plVar5 + 0xb8))();
  }
  else {
    plVar4 = (long *)(ulong)*(ushort *)(param_2 + 0x458);
    plVar5 = (long *)(ulong)*(ushort *)(param_2 + 0x45a);
  }
  fVar7 = 1.0 / (float)((ulong)plVar4 & 0xffffffff);
  fVar6 = 1.0 / (float)((ulong)plVar5 & 0xffffffff);
  fVar8 = *(float *)(pbVar3 + 0x24);
  fVar9 = *(float *)(pbVar3 + 0x28);
  if ((*pbVar3 & 1) == 0) {
    fVar12 = fVar8 * fVar7 - fVar7;
    fVar13 = -fVar6 + fVar6 * fVar9;
    fVar9 = (*(float *)(pbVar3 + 4) - *(float *)(pbVar3 + 0x14)) + 0.5;
    fVar8 = *(float *)(pbVar3 + 8) - *(float *)(pbVar3 + 0x18);
  }
  else {
    fVar12 = -fVar6 + fVar6 * fVar8;
    fVar13 = fVar9 * fVar7 - fVar7;
    fVar9 = (*(float *)(pbVar3 + 4) - *(float *)(pbVar3 + 0x18)) + fVar9 + -0.5;
    fVar8 = ((*(float *)(pbVar3 + 8) + *(float *)(pbVar3 + 0x14)) - fVar8) +
            *(float *)(pbVar3 + 0x10);
  }
  param_1[2] = 0.0;
  param_1[3] = 0.0;
  param_1[1] = 0.0;
  param_1[5] = 0.0;
  param_1[8] = 1.0;
  *param_1 = fVar12;
  param_1[4] = fVar11 * fVar13;
  fVar6 = 1.0 - fVar6 * (fVar8 + 0.5);
  param_1[6] = fVar7 * fVar9;
  param_1[7] = (fVar6 - fVar13) - fVar10;
  FUN_10ac15e20();
  if ((*param_2 & 1) != 0) {
    param_1[1] = fVar11 * fVar12;
    *param_1 = 0.0;
    param_1[3] = -fVar13;
    param_1[4] = 0.0;
    param_1[7] = (fVar6 - fVar12) - fVar10;
  }
  return;
}



/* Entry: 10ac15e20; end: 10ac15eab;  */

long FUN_10ac15e20(long param_1)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  if ((*(byte *)(param_1 + 0x2f8) >> 4 & 1) == 0) {
    lVar3 = param_1;
    func_0x00010ac17c34();
    lVar4 = *(long *)(param_1 + 0x3a8);
    if (lVar4 == *(long *)(param_1 + 0x3b0)) {
      lVar4 = param_1 + 0x3d8;
    }
    else {
      uVar5 = (*(long *)(param_1 + 0x3b0) - lVar4 >> 3) * 0x4ec4ec4ec4ec4ec5;
      uVar1 = uVar5 - 1;
      if ((ulong)(long)(int)lVar3 <= uVar5 - 1) {
        uVar1 = (long)(int)lVar3;
      }
      if (uVar5 < uVar1 || uVar5 - uVar1 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10ac15eac);
        (*pcVar2)();
      }
      lVar4 = lVar4 + uVar1 * 0x68;
    }
  }
  else {
    lVar4 = param_1 + 0x460;
  }
  return lVar4;
}



/* Entry: 10ac15eac; end: 10ac15f73;  */

ulong * FUN_10ac15eac(ulong *param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  ulong *puVar5;
  ulong *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  undefined8 uVar15;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong *puStack_98;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong *puStack_38;
  
  uVar9 = *param_1;
  if ((undefined8 *)(((long)(param_1[2] - uVar9) >> 3) * 0x4ec4ec4ec4ec4ec5) < param_2) {
    if ((undefined8 *)0x276276276276276 < param_2) {
      FUN_10ac40704();
      puVar6 = (ulong *)param_1[1];
      if (puVar6 < (ulong *)param_1[2]) {
        puVar5 = puVar6;
        FUN_10ac40844(puVar6,param_2);
        puVar6 = puVar6 + 0xd;
        param_1[1] = (ulong)puVar6;
      }
      else {
        lVar13 = (long)puVar6 - *param_1;
        uVar9 = (lVar13 >> 3) * 0x4ec4ec4ec4ec4ec5 + 1;
        if (0x276276276276276 < uVar9) {
          FUN_10ac40704();
          func_0x00010ac407f8(&uStack_b8);
          __Unwind_Resume();
          puVar7 = (undefined8 *)param_1[1];
          if (puVar7 < (undefined8 *)param_1[2]) {
            lVar13 = param_2[1];
            uVar15 = *param_2;
            puVar7[1] = param_2[1];
            *puVar7 = uVar15;
            if (lVar13 != 0) {
              plVar12 = (long *)(lVar13 + 8);
              do {
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
                if (bVar4) {
                  *plVar12 = *plVar12 + 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
            }
            puVar7 = puVar7 + 2;
            puVar6 = param_1;
          }
          else {
            lVar13 = (long)puVar7 - *param_1;
            uVar9 = (lVar13 >> 4) + 1;
            if (uVar9 >> 0x3c != 0) {
              FUN_10ac408ec();
              plVar12 = (long *)param_1[1];
              if (plVar12 != (long *)0x0) {
                plVar1 = plVar12 + 1;
                do {
                  lVar13 = *plVar1;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                  if (bVar4) {
                    *plVar1 = lVar13 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (lVar13 == 0) {
                  (**(code **)(*plVar12 + 0x10))(plVar12);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
                }
              }
              return param_1;
            }
            uVar14 = (long)param_1[2] - *param_1;
            uVar10 = (long)uVar14 >> 3;
            if (uVar10 <= uVar9) {
              uVar10 = uVar9;
            }
            if (0x7fffffffffffffef < uVar14) {
              uVar10 = 0xfffffffffffffff;
            }
            puVar8 = param_2;
            FUN_10ac40900();
            puVar2 = (undefined8 *)(uVar10 + lVar13);
            lVar13 = param_2[1];
            uVar15 = *param_2;
            puVar2[1] = param_2[1];
            *puVar2 = uVar15;
            if (lVar13 != 0) {
              plVar12 = (long *)(lVar13 + 8);
              do {
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
                if (bVar4) {
                  *plVar12 = *plVar12 + 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
            }
            puVar7 = puVar2 + 2;
            uVar9 = (long)puVar2 - (param_1[1] - *param_1);
            _memcpy(uVar9);
            puVar6 = (ulong *)*param_1;
            *param_1 = uVar9;
            param_1[1] = (ulong)puVar7;
            param_1[2] = uVar10 + (long)puVar8 * 0x10;
            if (puVar6 != (ulong *)0x0) {
              __ZdlPv();
            }
          }
          param_1[1] = (ulong)puVar7;
          return puVar6;
        }
        lVar11 = (long)((long)param_1[2] - *param_1) >> 3;
        uVar10 = lVar11 * -0x6276276276276276;
        if (uVar10 < uVar9 || uVar10 - uVar9 == 0) {
          uVar10 = uVar9;
        }
        if (0x13b13b13b13b13a < (ulong)(lVar11 * 0x4ec4ec4ec4ec4ec5)) {
          uVar10 = 0x276276276276276;
        }
        puStack_98 = param_1;
        if (uVar10 == 0) {
          uVar10 = 0;
          puVar7 = (undefined8 *)0x0;
        }
        else {
          puVar7 = param_2;
          FUN_10ac40718();
        }
        lVar13 = uVar10 + lVar13;
        uVar14 = uVar10 + (long)puVar7 * 0x68;
        uStack_b8 = uVar10;
        uStack_b0 = lVar13;
        uStack_a8 = lVar13;
        uStack_a0 = uVar14;
        FUN_10ac40844(lVar13,param_2);
        puVar6 = (ulong *)(lVar13 + 0x68);
        uVar9 = lVar13 + (*param_1 - param_1[1]);
        func_0x00010ac40760(*param_1,param_1[1],uVar9);
        uStack_b8 = *param_1;
        *param_1 = uVar9;
        param_1[1] = (ulong)puVar6;
        uStack_a0 = param_1[2];
        param_1[2] = uVar14;
        puVar5 = &uStack_b8;
        uStack_b0 = uStack_b8;
        uStack_a8 = uStack_b8;
        func_0x00010ac407f8(puVar5);
      }
      param_1[1] = (ulong)puVar6;
      return puVar5;
    }
    uVar10 = param_1[1];
    puVar7 = param_2;
    puStack_38 = param_1;
    FUN_10ac40718();
    uVar9 = (long)param_2 + (uVar10 - uVar9);
    uVar10 = uVar9 + (*param_1 - param_1[1]);
    func_0x00010ac40760(*param_1,param_1[1],uVar10);
    uStack_58 = *param_1;
    *param_1 = uVar10;
    param_1[1] = uVar9;
    uStack_40 = param_1[2];
    param_1[2] = (ulong)(param_2 + (long)puVar7 * 0xd);
    param_1 = &uStack_58;
    uStack_50 = uStack_58;
    uStack_48 = uStack_58;
    func_0x00010ac407f8(param_1);
  }
  return param_1;
}



/* Entry: 10ac15f74; end: 10ac160cf;  */

ulong * FUN_10ac15f74(ulong *param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  ulong *puVar5;
  ulong *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  undefined8 uVar15;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong *puStack_38;
  
  puVar6 = (ulong *)param_1[1];
  if (puVar6 < (ulong *)param_1[2]) {
    puVar5 = puVar6;
    FUN_10ac40844(puVar6,param_2);
    puVar6 = puVar6 + 0xd;
    param_1[1] = (ulong)puVar6;
  }
  else {
    lVar13 = (long)puVar6 - *param_1;
    uVar11 = (lVar13 >> 3) * 0x4ec4ec4ec4ec4ec5 + 1;
    if (0x276276276276276 < uVar11) {
      FUN_10ac40704();
      func_0x00010ac407f8(&uStack_58);
      __Unwind_Resume();
      puVar7 = (undefined8 *)param_1[1];
      if (puVar7 < (undefined8 *)param_1[2]) {
        lVar13 = param_2[1];
        uVar15 = *param_2;
        puVar7[1] = param_2[1];
        *puVar7 = uVar15;
        if (lVar13 != 0) {
          plVar12 = (long *)(lVar13 + 8);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar4) {
              *plVar12 = *plVar12 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        puVar7 = puVar7 + 2;
        puVar6 = param_1;
      }
      else {
        lVar13 = (long)puVar7 - *param_1;
        uVar11 = (lVar13 >> 4) + 1;
        if (uVar11 >> 0x3c != 0) {
          FUN_10ac408ec();
          plVar12 = (long *)param_1[1];
          if (plVar12 != (long *)0x0) {
            plVar1 = plVar12 + 1;
            do {
              lVar13 = *plVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar4) {
                *plVar1 = lVar13 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (lVar13 == 0) {
              (**(code **)(*plVar12 + 0x10))(plVar12);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
            }
          }
          return param_1;
        }
        uVar14 = (long)param_1[2] - *param_1;
        uVar10 = (long)uVar14 >> 3;
        if (uVar10 <= uVar11) {
          uVar10 = uVar11;
        }
        if (0x7fffffffffffffef < uVar14) {
          uVar10 = 0xfffffffffffffff;
        }
        puVar8 = param_2;
        FUN_10ac40900();
        puVar2 = (undefined8 *)(uVar10 + lVar13);
        lVar13 = param_2[1];
        uVar15 = *param_2;
        puVar2[1] = param_2[1];
        *puVar2 = uVar15;
        if (lVar13 != 0) {
          plVar12 = (long *)(lVar13 + 8);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar4) {
              *plVar12 = *plVar12 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        puVar7 = puVar2 + 2;
        uVar11 = (long)puVar2 - (param_1[1] - *param_1);
        _memcpy(uVar11);
        puVar6 = (ulong *)*param_1;
        *param_1 = uVar11;
        param_1[1] = (ulong)puVar7;
        param_1[2] = uVar10 + (long)puVar8 * 0x10;
        if (puVar6 != (ulong *)0x0) {
          __ZdlPv();
        }
      }
      param_1[1] = (ulong)puVar7;
      return puVar6;
    }
    lVar9 = (long)((long)param_1[2] - *param_1) >> 3;
    uVar10 = lVar9 * -0x6276276276276276;
    if (uVar10 < uVar11 || uVar10 - uVar11 == 0) {
      uVar10 = uVar11;
    }
    if (0x13b13b13b13b13a < (ulong)(lVar9 * 0x4ec4ec4ec4ec4ec5)) {
      uVar10 = 0x276276276276276;
    }
    puStack_38 = param_1;
    if (uVar10 == 0) {
      uVar10 = 0;
      puVar7 = (undefined8 *)0x0;
    }
    else {
      puVar7 = param_2;
      FUN_10ac40718();
    }
    lVar13 = uVar10 + lVar13;
    uVar14 = uVar10 + (long)puVar7 * 0x68;
    uStack_58 = uVar10;
    uStack_50 = lVar13;
    uStack_48 = lVar13;
    uStack_40 = uVar14;
    FUN_10ac40844(lVar13,param_2);
    puVar6 = (ulong *)(lVar13 + 0x68);
    uVar11 = lVar13 + (*param_1 - param_1[1]);
    func_0x00010ac40760(*param_1,param_1[1],uVar11);
    uStack_58 = *param_1;
    *param_1 = uVar11;
    param_1[1] = (ulong)puVar6;
    uStack_40 = param_1[2];
    param_1[2] = uVar14;
    puVar5 = &uStack_58;
    uStack_50 = uStack_58;
    uStack_48 = uStack_58;
    func_0x00010ac407f8(puVar5);
  }
  param_1[1] = (ulong)puVar6;
  return puVar5;
}



/* Entry: 10ac160d0; end: 10ac161cb;  */

long * FUN_10ac160d0(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  ulong uVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  
  puVar11 = (undefined8 *)param_1[1];
  if (puVar11 < (undefined8 *)param_1[2]) {
    lVar8 = param_2[1];
    uVar12 = *param_2;
    puVar11[1] = param_2[1];
    *puVar11 = uVar12;
    if (lVar8 != 0) {
      plVar6 = (long *)(lVar8 + 8);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar5) {
          *plVar6 = *plVar6 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    puVar11 = puVar11 + 2;
    plVar6 = param_1;
  }
  else {
    lVar8 = (long)puVar11 - *param_1;
    uVar2 = (lVar8 >> 4) + 1;
    if (uVar2 >> 0x3c != 0) {
      FUN_10ac408ec();
      plVar6 = (long *)param_1[1];
      if (plVar6 != (long *)0x0) {
        plVar1 = plVar6 + 1;
        do {
          lVar8 = *plVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar8 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
        }
      }
      return param_1;
    }
    uVar9 = param_1[2] - *param_1;
    uVar10 = (long)uVar9 >> 3;
    if (uVar10 <= uVar2) {
      uVar10 = uVar2;
    }
    if (0x7fffffffffffffef < uVar9) {
      uVar10 = 0xfffffffffffffff;
    }
    puVar7 = param_2;
    FUN_10ac40900();
    puVar3 = (undefined8 *)(uVar10 + lVar8);
    lVar8 = param_2[1];
    uVar12 = *param_2;
    puVar3[1] = param_2[1];
    *puVar3 = uVar12;
    if (lVar8 != 0) {
      plVar6 = (long *)(lVar8 + 8);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar5) {
          *plVar6 = *plVar6 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    puVar11 = puVar3 + 2;
    lVar8 = (long)puVar3 - (param_1[1] - *param_1);
    _memcpy(lVar8);
    plVar6 = (long *)*param_1;
    *param_1 = lVar8;
    param_1[1] = (long)puVar11;
    param_1[2] = uVar10 + (long)puVar7 * 0x10;
    if (plVar6 != (long *)0x0) {
      __ZdlPv();
    }
  }
  param_1[1] = (long)puVar11;
  return plVar6;
}



/* Entry: 10ac161cc; end: 10ac161cf;  */

long FUN_10ac161cc(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10ac161d0; end: 10ac1631b;  */

void FUN_10ac161d0(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  long *param_5,long **param_6)

{
  undefined4 *puVar1;
  float *pfVar2;
  float *pfVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  long *plVar7;
  long lVar8;
  long **pplVar9;
  long **pplVar10;
  long **pplVar11;
  long **pplVar12;
  long **pplVar13;
  long *plVar14;
  long *plVar15;
  long lVar16;
  ulong uVar17;
  byte bVar18;
  ulong uVar19;
  ulong uVar20;
  float *pfVar21;
  long lVar22;
  long *unaff_x20;
  long unaff_x21;
  int iVar23;
  long *plVar24;
  int iVar25;
  undefined8 *puVar26;
  long **pplVar27;
  undefined4 uVar28;
  long *plStack_1f0;
  long *plStack_1e8;
  long *plStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 uStack_1d0;
  char cStack_1c1;
  long *plStack_1c0;
  char cStack_1a9;
  int iStack_19c;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined8 uStack_16c;
  undefined8 *puStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined1 auStack_129 [9];
  long *plStack_68;
  long lStack_60;
  undefined8 uStack_58;
  long *plStack_50;
  long *plStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  float fStack_30;
  undefined4 uStack_2c;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (1 < (ulong)param_5[0x6d]) {
    plVar7 = (long *)param_5[0x71];
    if (plVar7 == (long *)0x0) {
      plVar7 = param_5 + 0x6b;
      FUN_10ac17ca8(plVar7,param_5 + 0x6e);
    }
    fStack_30 = *(float *)(param_5[0x65] + 0x100);
    param_2 = 0x3f800000;
    if (fStack_30 <= 0.0) {
      fStack_30 = 1.0;
    }
    uStack_38 = 0;
    uStack_2c = (undefined4)((ulong)(plVar7[1] - *plVar7) >> 2);
    lStack_60 = 0;
    uStack_58 = 0;
    plStack_68 = (long *)0x0;
    FUN_10ac405fc(&plStack_68,&uStack_38,&lStack_28);
    unaff_x20 = plStack_68;
    plStack_50 = (long *)0x0;
    plStack_48 = (long *)0x0;
    uStack_40 = 0;
    FUN_10ac4068c(&plStack_50,plStack_68,lStack_60,lStack_60 - (long)plStack_68 >> 3);
    FUN_10ac1631c(&plStack_50);
    param_6 = &plStack_50;
    func_0x00010aa83d64(param_5[0x67] + 0xe0);
    FUN_10ac15874(param_5);
    param_5 = plStack_50;
    if (plStack_50 != (long *)0x0) {
      plStack_48 = plStack_50;
      __ZdlPv();
    }
    if (unaff_x20 != (long *)0x0) {
      param_5 = unaff_x20;
      __ZdlPv();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (unaff_x20 != (long *)0x0) {
    __ZdlPv(unaff_x20);
  }
  __Unwind_Resume();
  pfVar2 = (float *)*param_5;
  pfVar3 = (float *)param_5[1];
  if (pfVar2 == pfVar3) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x10ac16490);
    (*pcVar6)();
  }
  plVar7 = (long *)(ulong)(uint)*pfVar2;
  if (*pfVar2 == 0.0) {
    return;
  }
  if (pfVar3 < (float *)param_5[2]) {
    pfVar21 = pfVar3;
    if (pfVar3 + -2 < pfVar3) {
      *(undefined8 *)pfVar3 = *(undefined8 *)(pfVar3 + -2);
      pfVar21 = pfVar3 + 2;
    }
    param_5[1] = (long)pfVar21;
    if (pfVar3 != pfVar2 + 2) {
      _memmove(pfVar2 + 2,pfVar2);
    }
    pfVar2[0] = 0.0;
    pfVar2[1] = 0.0;
    return;
  }
  uVar17 = ((long)pfVar3 - (long)pfVar2 >> 3) + 1;
  if (uVar17 >> 0x3d != 0) {
    FUN_10a107b28();
    if (unaff_x21 != 0) {
      __ZdlPv();
    }
    __Unwind_Resume();
    pplVar9 = param_6;
    (*(code *)(*param_6)[0x49])(param_6);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_5 + 0xf,pplVar9);
    pplVar9 = param_6;
    (*(code *)(*param_6)[7])(param_6,&PTR_s_version_110c55d90,0);
    pplVar10 = param_6;
    (*(code *)(*param_6)[0x40])(param_6,&PTR_DAT_110c55db0);
    if ((int)pplVar10 == 0) {
      func_0x000107c2b054(&uStack_198,&UNK_10f69b9ca);
      FUN_10a0fed30(&puStack_1d8,param_6,&PTR_DAT_110c55dd0,&uStack_198);
      if ((long)uStack_188 < 0) {
        __ZdlPv(uStack_198);
      }
      pplVar10 = param_6;
      (*(code *)(*param_6)[0x49])();
      if (*(char *)((long)pplVar10 + 0x17) < '\0') {
        func_0x000107c3192c(&plStack_1f0,*pplVar10,pplVar10[1]);
      }
      else {
        plStack_1e8 = pplVar10[1];
        plVar7 = *pplVar10;
        plStack_1e0 = pplVar10[2];
        plStack_1f0 = plVar7;
      }
      FUN_10a107e2c(&uStack_198,&puStack_1d8,&plStack_1f0,0);
      FUN_10ac125dc(param_5,&uStack_198);
      if (uStack_16c._3_1_ < '\0') {
        __ZdlPv(CONCAT44(uStack_17c,uStack_180));
      }
      if ((long)uStack_188 < 0) {
        __ZdlPv(uStack_198);
      }
      plStack_1c0 = plStack_1f0;
      if (-1 < (long)plStack_1e0) goto LAB_10ac16654;
    }
    else {
      FUN_10a1e3e54(&puStack_1d8);
      (*(code *)(*param_6)[0x46])(&uStack_198,param_6,&PTR_DAT_110c55db0,&puStack_1d8);
      FUN_10ac125dc(param_5,&uStack_198);
      if (uStack_16c._3_1_ < '\0') {
        __ZdlPv(CONCAT44(uStack_17c,uStack_180));
      }
      if ((long)uStack_188 < 0) {
        __ZdlPv(uStack_198);
      }
      if (-1 < cStack_1a9) goto LAB_10ac16654;
    }
    __ZdlPv(plStack_1c0);
LAB_10ac16654:
    if (cStack_1c1 < '\0') {
      __ZdlPv(puStack_1d8);
    }
    pplVar10 = param_6;
    (*(code *)(*param_6)[0xb])(param_6,&PTR_DAT_110c55df0,0);
    pplVar27 = param_6;
    (*(code *)(*param_6)[0xb])(param_6,&PTR_DAT_110c55e10,0);
    pplVar11 = param_6;
    (*(code *)(*param_6)[0xb])(param_6,&PTR_DAT_110c55e30,0);
    pplVar12 = param_6;
    (*(code *)(*param_6)[0xb])(param_6,&PTR_DAT_110c55e50,0);
    bVar18 = 0x10;
    if ((int)pplVar12 == 0) {
      bVar18 = 0;
    }
    *(byte *)(param_5 + 0x5f) = *(byte *)(param_5 + 0x5f) & 0xef | bVar18;
    if ((int)pplVar12 == 0) {
      if ((int)pplVar9 < 1) {
        pplVar9 = param_6;
        (*(code *)(*param_6)[0x40])(param_6,&PTR_DAT_110c55d70);
        if ((int)pplVar9 == 0) {
          (*(code *)(*param_6)[0x3e])(param_6,&PTR_DAT_110c5d4d0,param_5[0x67]);
        }
        else {
          (*(code *)(*param_6)[0x42])(param_6,&PTR_DAT_110c55d70);
          pplVar9 = param_6;
          (*(code *)(*param_6)[0x41])();
          uStack_198 = (long *)0x0;
          uStack_190 = (long *)0x0;
          uStack_188 = (long *)0x0;
          if ((int)pplVar9 != 0) {
            uVar17 = (ulong)pplVar9 & 0xffffffff;
            plVar15 = &uStack_198;
            FUN_10a107b3c();
            plVar24 = (long *)((long)plVar15 - ((long)uStack_190 - (long)uStack_198));
            _memcpy(plVar24);
            bVar5 = uStack_198 != (long *)0x0;
            uStack_198 = plVar24;
            uStack_190 = plVar15;
            uStack_188 = plVar15 + uVar17;
            if (bVar5) {
              __ZdlPv();
            }
            iVar23 = 0;
            do {
              (*(code *)(*param_6)[0x43])(param_6,iVar23);
              (*(code *)(*param_6)[8])(param_6,&PTR_DAT_110c5d510);
              pplVar12 = param_6;
              plVar15 = plVar7;
              (*(code *)(*param_6)[6])(param_6,&PTR_s_value_110c5d530);
              if (uStack_190 < uStack_188) {
                *(int *)uStack_190 = (int)plVar7;
                *(int *)((long)uStack_190 + 4) = (int)pplVar12;
                plVar7 = uStack_190 + 1;
              }
              else {
                lVar16 = (long)uStack_190 - (long)uStack_198;
                uVar17 = (lVar16 >> 3) + 1;
                if (uVar17 >> 0x3d != 0) {
                  FUN_10a107b28();
                  goto LAB_10ac16f70;
                }
                uVar20 = (long)uStack_188 - (long)uStack_198 >> 2;
                if (uVar20 <= uVar17) {
                  uVar20 = uVar17;
                }
                if (0x7ffffffffffffff7 < (ulong)((long)uStack_188 - (long)uStack_198)) {
                  uVar20 = 0x1fffffffffffffff;
                }
                puVar26 = &uStack_198;
                FUN_10a107b3c();
                puVar1 = (undefined4 *)((long)puVar26 + lVar16);
                *puVar1 = (int)plVar7;
                puVar1[1] = (int)pplVar12;
                plVar7 = (long *)(puVar1 + 2);
                plVar24 = (long *)((long)puVar1 - ((long)uStack_190 - (long)uStack_198));
                _memcpy(plVar24);
                bVar5 = uStack_198 != (long *)0x0;
                uStack_198 = plVar24;
                uStack_188 = puVar26 + uVar20;
                if (bVar5) {
                  uStack_190 = plVar7;
                  __ZdlPv();
                }
              }
              uStack_190 = plVar7;
              (*(code *)(*param_6)[0x44])(param_6);
              iVar23 = iVar23 + 1;
              plVar7 = plVar15;
            } while ((int)pplVar9 != iVar23);
          }
          (*(code *)(*param_6)[0x44])(param_6);
          FUN_10ac1631c(&uStack_198);
          func_0x00010aa83d64(param_5[0x67] + 0xe0,&uStack_198);
          if (uStack_198 != (long *)0x0) {
            uStack_190 = uStack_198;
            __ZdlPv();
          }
          pplVar10 = (long **)((ulong)pplVar10 & 0xffffffff);
          pplVar27 = (long **)((ulong)pplVar27 & 0xffffffff);
        }
      }
      else {
        (*(code *)(*param_6)[0x3e])(param_6,&PTR_DAT_110c5d4d0,param_5[0x67]);
        pplVar9 = param_6;
        (*(code *)(*param_6)[7])(param_6,&PTR_DAT_110c55c10,0);
        plVar7 = param_5 + 0x75;
        plStack_1e8 = (long *)((ulong)plStack_1e8 & 0xffffffffffffff00);
        plStack_1f0 = plVar7;
        FUN_10ac15eac(plVar7,(long)(int)pplVar9);
        (*(code *)(*param_6)[0x42])(param_6,&PTR_DAT_110c55c30);
        pplVar9 = param_6;
        (*(code *)(*param_6)[0x41])();
        if ((int)pplVar9 != 0) {
          iVar23 = 0;
          puVar26 = (undefined8 *)((ulong)&uStack_198 | 4);
          do {
            (*(code *)(*param_6)[0x43])(param_6,iVar23);
            uStack_198 = (long *)((ulong)uStack_198 & 0xffffffffffffff00);
            uVar28 = 0;
            puVar26[1] = 0;
            *puVar26 = 0;
            puVar26[3] = 0;
            puVar26[2] = 0;
            puVar26[4] = 0;
            uStack_16c = 0x1869f0001869f;
            uStack_158 = 0;
            puStack_160 = (undefined8 *)0x0;
            uStack_148 = 0;
            uStack_150 = 0;
            uStack_138 = 0;
            uStack_140 = 0;
            pplVar12 = param_6;
            (*(code *)(*param_6)[6])(param_6,&PTR_DAT_110c55c50);
            uStack_16c = CONCAT44(uStack_16c._4_4_,(int)pplVar12);
            (*(code *)(*param_6)[0x21])(param_6,&PTR_DAT_110c55c70);
            uStack_198 = (long *)CONCAT44(uVar28,(undefined4)uStack_198);
            uStack_190 = (long *)CONCAT44(param_3,param_2);
            uStack_188 = (long *)CONCAT44(uStack_188._4_4_,param_4);
            (*(code *)(*param_6)[0x21])(param_6,&PTR_DAT_110c55c90);
            uStack_188 = (long *)CONCAT44(uVar28,(undefined4)uStack_188);
            uStack_180 = param_2;
            uStack_17c = param_3;
            uStack_178 = param_4;
            (*(code *)(*param_6)[0x1b])(param_6,&PTR_DAT_110c55cb0);
            pplVar12 = param_6;
            uStack_174 = uVar28;
            uStack_170 = param_2;
            (*(code *)(*param_6)[10])(param_6,&PTR_DAT_110c55cd0);
            uStack_198 = (long *)CONCAT71(uStack_198._1_7_,(char)pplVar12);
            (*(code *)(*param_6)[0x15])(&puStack_1d8,param_6,&PTR_DAT_110c55cf0,&UNK_10f69b9ca,0);
            uStack_158 = uStack_1d0;
            puStack_160 = puStack_1d8;
            uStack_150._7_1_ = cStack_1c1;
            FUN_10ac15f74(plVar7,&uStack_198);
            (*(code *)(*param_6)[0x44])(param_6);
            if (uStack_150._7_1_ < '\0') {
              __ZdlPv(puStack_160);
            }
            iVar23 = iVar23 + 1;
          } while ((int)pplVar9 != iVar23);
        }
        (*(code *)(*param_6)[0x44])(param_6);
        (*(code *)(*param_6)[0x42])(param_6,&PTR_DAT_110c55d10);
        pplVar9 = param_6;
        (*(code *)(*param_6)[0x41])();
        if ((int)pplVar9 != 0) {
          iVar23 = 0;
          do {
            (*(code *)(*param_6)[0x43])(param_6,iVar23);
            (*(code *)(*param_6)[0x14])(&uStack_198,param_6,&PTR_DAT_110c55d30);
            (*(code *)(*param_6)[0x42])(param_6,&PTR_DAT_110c55c30);
            pplVar12 = param_6;
            (*(code *)(*param_6)[0x41])();
            if ((int)pplVar12 != 0) {
              iVar25 = 0;
              do {
                (*(code *)(*param_6)[0x43])(param_6,iVar25);
                pplVar13 = param_6;
                (*(code *)(*param_6)[6])(param_6,&PTR_DAT_110c5d4f0);
                iStack_19c = (int)pplVar13;
                if ((iStack_19c < 0) ||
                   (uVar17 = (param_5[0x76] - param_5[0x75] >> 3) * 0x4ec4ec4ec4ec4ec5,
                   uStack_1d0 = 0x29,
                   uVar17 < ((ulong)pplVar13 & 0xffffffff) ||
                   uVar17 - ((ulong)pplVar13 & 0xffffffff) == 0)) {
                  uStack_1d0 = 0x29;
                  puStack_1d8 = (undefined8 *)&UNK_10f69bbc2;
                  FUN_10a0edfc4(&puStack_1d8);
                  goto LAB_10ac16f70;
                }
                puStack_1d8 = &uStack_198;
                plVar15 = param_5 + 0x6b;
                func_0x000109566b64(plVar15,&uStack_198,&UNK_10dd5b8f9,&puStack_1d8,auStack_129);
                func_0x000109febdc8(plVar15 + 7,&iStack_19c);
                uVar17 = (param_5[0x76] - param_5[0x75] >> 3) * 0x4ec4ec4ec4ec4ec5;
                if (uVar17 < (ulong)(long)iStack_19c || uVar17 - (long)iStack_19c == 0)
                goto LAB_10ac16f70;
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                          (param_5[0x75] + (long)iStack_19c * 0x68 + 0x50,&uStack_198);
                uVar17 = (param_5[0x76] - param_5[0x75] >> 3) * 0x4ec4ec4ec4ec4ec5;
                if (uVar17 < (ulong)(long)iStack_19c || uVar17 - (long)iStack_19c == 0)
                goto LAB_10ac16f70;
                *(int *)(param_5[0x75] + (long)iStack_19c * 0x68 + 0x30) = iVar25;
                (*(code *)(*param_6)[0x44])(param_6);
                iVar25 = iVar25 + 1;
              } while ((int)pplVar12 != iVar25);
            }
            (*(code *)(*param_6)[0x44])(param_6);
            (*(code *)(*param_6)[0x44])(param_6);
            if ((long)uStack_188 < 0) {
              __ZdlPv(uStack_198);
            }
            iVar23 = iVar23 + 1;
          } while (iVar23 != (int)pplVar9);
        }
        (*(code *)(*param_6)[0x44])(param_6);
        pplVar10 = (long **)((ulong)pplVar10 & 0xffffffff);
        pplVar27 = (long **)((ulong)pplVar27 & 0xffffffff);
        pplVar9 = param_6;
        (*(code *)(*param_6)[0x40])(param_6,&PTR_DAT_110c55d50);
        if ((int)pplVar9 != 0) {
          (*(code *)(*param_6)[0x42])(param_6,&PTR_DAT_110c55d50);
          pplVar9 = param_6;
          (*(code *)(*param_6)[0x41])();
          if ((int)pplVar9 != 0) {
            iVar23 = 0;
            do {
              FUN_10ac45928(&uStack_198,param_5[0x12],2);
              (*(code *)(*param_6)[0x3d])(param_6,iVar23,uStack_198);
              FUN_10ac160d0(plStack_1f0 + 3,&uStack_198);
              plVar7 = uStack_190;
              if (uStack_190 != (long *)0x0) {
                plVar15 = uStack_190 + 1;
                do {
                  lVar16 = *plVar15;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
                  if (bVar5) {
                    *plVar15 = lVar16 + -1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (lVar16 == 0) {
                  (**(code **)(*uStack_190 + 0x10))(uStack_190);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
                }
              }
              iVar23 = iVar23 + 1;
            } while (iVar23 != (int)pplVar9);
          }
          (*(code *)(*param_6)[0x44])(param_6);
          plVar7 = plStack_1f0;
        }
        lVar16 = *plVar7;
        if (lVar16 != plVar7[1]) {
          do {
            if ((ulong)(plVar7[4] - plVar7[3] >> 4) <= (ulong)*(uint *)(lVar16 + 0x2c)) {
              FUN_10a00946c(&UNK_10f63b8ac);
LAB_10ac16f70:
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x10ac16f74);
              (*pcVar6)();
            }
            lVar16 = lVar16 + 0x68;
          } while (lVar16 != plVar7[1]);
        }
        *(byte *)(param_5 + 0x5f) = *(byte *)(param_5 + 0x5f) | 1;
        plVar7 = param_5 + 0x6b;
        plVar15 = param_5 + 0x6e;
        plVar14 = plVar7;
        FUN_10ac45eb4(plVar7,plVar15);
        plVar24 = plVar15;
        if (param_5 + 0x6c == plVar14) {
          plVar24 = (long *)(*plVar7 + 0x20);
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(plVar15,plVar24);
        func_0x00010ac17ce4(plVar7,plVar15);
        param_5[0x71] = (long)plVar7;
        FUN_10ac161d0(param_5);
        FUN_10ac15874(param_5);
        FUN_10ac4578c(&plStack_1f0);
      }
    }
    else {
      (*(code *)(*param_6)[0x3e])(param_6,&PTR_DAT_110c5d4d0,param_5[0x67]);
      FUN_10ac15734(param_5,param_5 + 0x52);
      *(byte *)(param_5 + 0x5f) = *(byte *)(param_5 + 0x5f) | 1;
      FUN_10ac15874(param_5);
    }
    func_0x00010ac12b40(param_5,pplVar10);
    func_0x00010ac12b94(param_5,pplVar27);
    bVar18 = 2;
    if ((int)pplVar11 == 0) {
      bVar18 = 0;
    }
    *(byte *)(param_5 + 0x5f) = *(byte *)(param_5 + 0x5f) & 0xfd | bVar18;
    if ((int)pplVar11 != 0) {
      FUN_10ac15b70(0,param_5,0xffffffff);
    }
    return;
  }
  uVar19 = param_5[2] - (long)pfVar2;
  uVar20 = (long)uVar19 >> 2;
  if (uVar20 <= uVar17) {
    uVar20 = uVar17;
  }
  if (0x7ffffffffffffff7 < uVar19) {
    uVar20 = 0x1fffffffffffffff;
  }
  if (uVar20 == 0) {
    plVar7 = (long *)0x0;
  }
  else {
    plVar15 = param_5;
    FUN_10a107b3c();
    plVar7 = plVar15;
    if (uVar20 != 0) {
      plVar24 = plVar15 + uVar20;
      goto LAB_10ac16418;
    }
  }
  lVar16 = 1;
  plVar15 = param_5;
  FUN_10a107b3c();
  plVar24 = plVar15 + lVar16;
  if (plVar7 != (long *)0x0) {
    __ZdlPv(plVar7);
  }
LAB_10ac16418:
  *plVar15 = 0;
  _memcpy(plVar15 + 1,pfVar2,param_5[1] - (long)pfVar2);
  lVar16 = param_5[1];
  param_5[1] = (long)pfVar2;
  lVar22 = (long)plVar15 - ((long)pfVar2 - *param_5);
  _memcpy(lVar22);
  lVar8 = *param_5;
  *param_5 = lVar22;
  param_5[1] = (long)(plVar15 + 1) + (lVar16 - (long)pfVar2);
  param_5[2] = (long)plVar24;
  if (lVar8 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac1631c; end: 10ac164ab;  */

void FUN_10ac1631c(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  long *param_5,long *param_6)

{
  undefined4 *puVar1;
  float *pfVar2;
  float *pfVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  byte bVar13;
  ulong uVar14;
  ulong uVar15;
  float *pfVar16;
  long lVar17;
  long unaff_x21;
  long *plVar18;
  int iVar19;
  long *plVar20;
  int iVar21;
  long *plVar22;
  undefined8 *puVar23;
  long *plVar24;
  undefined4 uVar25;
  long *plStack_180;
  ulong uStack_178;
  long lStack_170;
  undefined8 *puStack_168;
  undefined8 uStack_160;
  char cStack_151;
  long *plStack_150;
  char cStack_139;
  int iStack_12c;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined8 uStack_fc;
  undefined8 *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 auStack_b9 [9];
  
  pfVar2 = (float *)*param_5;
  pfVar3 = (float *)param_5[1];
  if (pfVar2 == pfVar3) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x10ac16490);
    (*pcVar6)();
  }
  plVar18 = (long *)(ulong)(uint)*pfVar2;
  if (*pfVar2 == 0.0) {
    return;
  }
  if (pfVar3 < (float *)param_5[2]) {
    pfVar16 = pfVar3;
    if (pfVar3 + -2 < pfVar3) {
      *(undefined8 *)pfVar3 = *(undefined8 *)(pfVar3 + -2);
      pfVar16 = pfVar3 + 2;
    }
    param_5[1] = (long)pfVar16;
    if (pfVar3 != pfVar2 + 2) {
      _memmove(pfVar2 + 2,pfVar2);
    }
    pfVar2[0] = 0.0;
    pfVar2[1] = 0.0;
    return;
  }
  uVar12 = ((long)pfVar3 - (long)pfVar2 >> 3) + 1;
  if (uVar12 >> 0x3d != 0) {
    FUN_10a107b28();
    if (unaff_x21 != 0) {
      __ZdlPv();
    }
    __Unwind_Resume();
    plVar8 = param_6;
    (**(code **)(*param_6 + 0x248))(param_6);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_5 + 0xf,plVar8);
    plVar8 = param_6;
    (**(code **)(*param_6 + 0x38))(param_6,&PTR_s_version_110c55d90,0);
    plVar9 = param_6;
    (**(code **)(*param_6 + 0x200))(param_6,&PTR_DAT_110c55db0);
    if ((int)plVar9 == 0) {
      func_0x000107c2b054(&uStack_128,&UNK_10f69b9ca);
      FUN_10a0fed30(&puStack_168,param_6,&PTR_DAT_110c55dd0,&uStack_128);
      if ((long)uStack_118 < 0) {
        __ZdlPv(uStack_128);
      }
      plVar9 = param_6;
      (**(code **)(*param_6 + 0x248))();
      if (*(char *)((long)plVar9 + 0x17) < '\0') {
        func_0x000107c3192c(&plStack_180,*plVar9,plVar9[1]);
      }
      else {
        uStack_178 = plVar9[1];
        plVar18 = (long *)*plVar9;
        lStack_170 = plVar9[2];
        plStack_180 = plVar18;
      }
      FUN_10a107e2c(&uStack_128,&puStack_168,&plStack_180,0);
      FUN_10ac125dc(param_5,&uStack_128);
      if (uStack_fc._3_1_ < '\0') {
        __ZdlPv(CONCAT44(uStack_10c,uStack_110));
      }
      if ((long)uStack_118 < 0) {
        __ZdlPv(uStack_128);
      }
      plStack_150 = plStack_180;
      if (-1 < lStack_170) goto LAB_10ac16654;
    }
    else {
      FUN_10a1e3e54(&puStack_168);
      (**(code **)(*param_6 + 0x230))(&uStack_128,param_6,&PTR_DAT_110c55db0,&puStack_168);
      FUN_10ac125dc(param_5,&uStack_128);
      if (uStack_fc._3_1_ < '\0') {
        __ZdlPv(CONCAT44(uStack_10c,uStack_110));
      }
      if ((long)uStack_118 < 0) {
        __ZdlPv(uStack_128);
      }
      if (-1 < cStack_139) goto LAB_10ac16654;
    }
    __ZdlPv(plStack_150);
LAB_10ac16654:
    if (cStack_151 < '\0') {
      __ZdlPv(puStack_168);
    }
    plVar9 = param_6;
    (**(code **)(*param_6 + 0x58))(param_6,&PTR_DAT_110c55df0,0);
    plVar24 = param_6;
    (**(code **)(*param_6 + 0x58))(param_6,&PTR_DAT_110c55e10,0);
    plVar10 = param_6;
    (**(code **)(*param_6 + 0x58))(param_6,&PTR_DAT_110c55e30,0);
    plVar22 = param_6;
    (**(code **)(*param_6 + 0x58))(param_6,&PTR_DAT_110c55e50,0);
    bVar13 = 0x10;
    if ((int)plVar22 == 0) {
      bVar13 = 0;
    }
    *(byte *)(param_5 + 0x5f) = *(byte *)(param_5 + 0x5f) & 0xef | bVar13;
    if ((int)plVar22 == 0) {
      if ((int)plVar8 < 1) {
        plVar8 = param_6;
        (**(code **)(*param_6 + 0x200))(param_6,&PTR_DAT_110c55d70);
        if ((int)plVar8 == 0) {
          (**(code **)(*param_6 + 0x1f0))(param_6,&PTR_DAT_110c5d4d0,param_5[0x67]);
        }
        else {
          (**(code **)(*param_6 + 0x210))(param_6,&PTR_DAT_110c55d70);
          plVar8 = param_6;
          (**(code **)(*param_6 + 0x208))();
          uStack_128 = (long *)0x0;
          uStack_120 = (long *)0x0;
          uStack_118 = (long *)0x0;
          if ((int)plVar8 != 0) {
            uVar12 = (ulong)plVar8 & 0xffffffff;
            plVar22 = &uStack_128;
            FUN_10a107b3c();
            plVar20 = (long *)((long)plVar22 - ((long)uStack_120 - (long)uStack_128));
            _memcpy(plVar20);
            bVar5 = uStack_128 != (long *)0x0;
            uStack_128 = plVar20;
            uStack_120 = plVar22;
            uStack_118 = plVar22 + uVar12;
            if (bVar5) {
              __ZdlPv();
            }
            iVar19 = 0;
            do {
              (**(code **)(*param_6 + 0x218))(param_6,iVar19);
              (**(code **)(*param_6 + 0x40))(param_6,&PTR_DAT_110c5d510);
              plVar22 = param_6;
              plVar20 = plVar18;
              (**(code **)(*param_6 + 0x30))(param_6,&PTR_s_value_110c5d530);
              if (uStack_120 < uStack_118) {
                *(int *)uStack_120 = (int)plVar18;
                *(int *)((long)uStack_120 + 4) = (int)plVar22;
                plVar18 = uStack_120 + 1;
              }
              else {
                lVar11 = (long)uStack_120 - (long)uStack_128;
                uVar12 = (lVar11 >> 3) + 1;
                if (uVar12 >> 0x3d != 0) {
                  FUN_10a107b28();
                  goto LAB_10ac16f70;
                }
                uVar15 = (long)uStack_118 - (long)uStack_128 >> 2;
                if (uVar15 <= uVar12) {
                  uVar15 = uVar12;
                }
                if (0x7ffffffffffffff7 < (ulong)((long)uStack_118 - (long)uStack_128)) {
                  uVar15 = 0x1fffffffffffffff;
                }
                puVar23 = &uStack_128;
                FUN_10a107b3c();
                puVar1 = (undefined4 *)((long)puVar23 + lVar11);
                *puVar1 = (int)plVar18;
                puVar1[1] = (int)plVar22;
                plVar18 = (long *)(puVar1 + 2);
                plVar22 = (long *)((long)puVar1 - ((long)uStack_120 - (long)uStack_128));
                _memcpy(plVar22);
                bVar5 = uStack_128 != (long *)0x0;
                uStack_128 = plVar22;
                uStack_118 = puVar23 + uVar15;
                if (bVar5) {
                  uStack_120 = plVar18;
                  __ZdlPv();
                }
              }
              uStack_120 = plVar18;
              (**(code **)(*param_6 + 0x220))(param_6);
              iVar19 = iVar19 + 1;
              plVar18 = plVar20;
            } while ((int)plVar8 != iVar19);
          }
          (**(code **)(*param_6 + 0x220))(param_6);
          FUN_10ac1631c(&uStack_128);
          func_0x00010aa83d64(param_5[0x67] + 0xe0,&uStack_128);
          if (uStack_128 != (long *)0x0) {
            uStack_120 = uStack_128;
            __ZdlPv();
          }
          plVar9 = (long *)((ulong)plVar9 & 0xffffffff);
          plVar24 = (long *)((ulong)plVar24 & 0xffffffff);
        }
      }
      else {
        (**(code **)(*param_6 + 0x1f0))(param_6,&PTR_DAT_110c5d4d0,param_5[0x67]);
        plVar8 = param_6;
        (**(code **)(*param_6 + 0x38))(param_6,&PTR_DAT_110c55c10,0);
        plVar18 = param_5 + 0x75;
        uStack_178 = uStack_178 & 0xffffffffffffff00;
        plStack_180 = plVar18;
        FUN_10ac15eac(plVar18,(long)(int)plVar8);
        (**(code **)(*param_6 + 0x210))(param_6,&PTR_DAT_110c55c30);
        plVar8 = param_6;
        (**(code **)(*param_6 + 0x208))();
        if ((int)plVar8 != 0) {
          iVar19 = 0;
          puVar23 = (undefined8 *)((ulong)&uStack_128 | 4);
          do {
            (**(code **)(*param_6 + 0x218))(param_6,iVar19);
            uStack_128 = (long *)((ulong)uStack_128 & 0xffffffffffffff00);
            uVar25 = 0;
            puVar23[1] = 0;
            *puVar23 = 0;
            puVar23[3] = 0;
            puVar23[2] = 0;
            puVar23[4] = 0;
            uStack_fc = 0x1869f0001869f;
            uStack_e8 = 0;
            puStack_f0 = (undefined8 *)0x0;
            uStack_d8 = 0;
            uStack_e0 = 0;
            uStack_c8 = 0;
            uStack_d0 = 0;
            plVar22 = param_6;
            (**(code **)(*param_6 + 0x30))(param_6,&PTR_DAT_110c55c50);
            uStack_fc = CONCAT44(uStack_fc._4_4_,(int)plVar22);
            (**(code **)(*param_6 + 0x108))(param_6,&PTR_DAT_110c55c70);
            uStack_128 = (long *)CONCAT44(uVar25,(undefined4)uStack_128);
            uStack_120 = (long *)CONCAT44(param_3,param_2);
            uStack_118 = (long *)CONCAT44(uStack_118._4_4_,param_4);
            (**(code **)(*param_6 + 0x108))(param_6,&PTR_DAT_110c55c90);
            uStack_118 = (long *)CONCAT44(uVar25,(undefined4)uStack_118);
            uStack_110 = param_2;
            uStack_10c = param_3;
            uStack_108 = param_4;
            (**(code **)(*param_6 + 0xd8))(param_6,&PTR_DAT_110c55cb0);
            plVar22 = param_6;
            uStack_104 = uVar25;
            uStack_100 = param_2;
            (**(code **)(*param_6 + 0x50))(param_6,&PTR_DAT_110c55cd0);
            uStack_128 = (long *)CONCAT71(uStack_128._1_7_,(char)plVar22);
            (**(code **)(*param_6 + 0xa8))(&puStack_168,param_6,&PTR_DAT_110c55cf0,&UNK_10f69b9ca,0)
            ;
            uStack_e8 = uStack_160;
            puStack_f0 = puStack_168;
            uStack_e0._7_1_ = cStack_151;
            FUN_10ac15f74(plVar18,&uStack_128);
            (**(code **)(*param_6 + 0x220))(param_6);
            if (uStack_e0._7_1_ < '\0') {
              __ZdlPv(puStack_f0);
            }
            iVar19 = iVar19 + 1;
          } while ((int)plVar8 != iVar19);
        }
        (**(code **)(*param_6 + 0x220))(param_6);
        (**(code **)(*param_6 + 0x210))(param_6,&PTR_DAT_110c55d10);
        plVar8 = param_6;
        (**(code **)(*param_6 + 0x208))();
        if ((int)plVar8 != 0) {
          iVar19 = 0;
          do {
            (**(code **)(*param_6 + 0x218))(param_6,iVar19);
            (**(code **)(*param_6 + 0xa0))(&uStack_128,param_6,&PTR_DAT_110c55d30);
            (**(code **)(*param_6 + 0x210))(param_6,&PTR_DAT_110c55c30);
            plVar22 = param_6;
            (**(code **)(*param_6 + 0x208))();
            if ((int)plVar22 != 0) {
              iVar21 = 0;
              do {
                (**(code **)(*param_6 + 0x218))(param_6,iVar21);
                plVar20 = param_6;
                (**(code **)(*param_6 + 0x30))(param_6,&PTR_DAT_110c5d4f0);
                iStack_12c = (int)plVar20;
                if ((iStack_12c < 0) ||
                   (uVar12 = (param_5[0x76] - param_5[0x75] >> 3) * 0x4ec4ec4ec4ec4ec5,
                   uStack_160 = 0x29,
                   uVar12 < ((ulong)plVar20 & 0xffffffff) ||
                   uVar12 - ((ulong)plVar20 & 0xffffffff) == 0)) {
                  uStack_160 = 0x29;
                  puStack_168 = (undefined8 *)&UNK_10f69bbc2;
                  FUN_10a0edfc4(&puStack_168);
                  goto LAB_10ac16f70;
                }
                puStack_168 = &uStack_128;
                plVar20 = param_5 + 0x6b;
                func_0x000109566b64(plVar20,&uStack_128,&UNK_10dd5b8f9,&puStack_168,auStack_b9);
                func_0x000109febdc8(plVar20 + 7,&iStack_12c);
                uVar12 = (param_5[0x76] - param_5[0x75] >> 3) * 0x4ec4ec4ec4ec4ec5;
                if (uVar12 < (ulong)(long)iStack_12c || uVar12 - (long)iStack_12c == 0)
                goto LAB_10ac16f70;
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                          (param_5[0x75] + (long)iStack_12c * 0x68 + 0x50,&uStack_128);
                uVar12 = (param_5[0x76] - param_5[0x75] >> 3) * 0x4ec4ec4ec4ec4ec5;
                if (uVar12 < (ulong)(long)iStack_12c || uVar12 - (long)iStack_12c == 0)
                goto LAB_10ac16f70;
                *(int *)(param_5[0x75] + (long)iStack_12c * 0x68 + 0x30) = iVar21;
                (**(code **)(*param_6 + 0x220))(param_6);
                iVar21 = iVar21 + 1;
              } while ((int)plVar22 != iVar21);
            }
            (**(code **)(*param_6 + 0x220))(param_6);
            (**(code **)(*param_6 + 0x220))(param_6);
            if ((long)uStack_118 < 0) {
              __ZdlPv(uStack_128);
            }
            iVar19 = iVar19 + 1;
          } while (iVar19 != (int)plVar8);
        }
        (**(code **)(*param_6 + 0x220))(param_6);
        plVar9 = (long *)((ulong)plVar9 & 0xffffffff);
        plVar24 = (long *)((ulong)plVar24 & 0xffffffff);
        plVar8 = param_6;
        (**(code **)(*param_6 + 0x200))(param_6,&PTR_DAT_110c55d50);
        if ((int)plVar8 != 0) {
          (**(code **)(*param_6 + 0x210))(param_6,&PTR_DAT_110c55d50);
          plVar18 = param_6;
          (**(code **)(*param_6 + 0x208))();
          if ((int)plVar18 != 0) {
            iVar19 = 0;
            do {
              FUN_10ac45928(&uStack_128,param_5[0x12],2);
              (**(code **)(*param_6 + 0x1e8))(param_6,iVar19,uStack_128);
              FUN_10ac160d0(plStack_180 + 3,&uStack_128);
              plVar8 = uStack_120;
              if (uStack_120 != (long *)0x0) {
                plVar22 = uStack_120 + 1;
                do {
                  lVar11 = *plVar22;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(plVar22,0x10);
                  if (bVar5) {
                    *plVar22 = lVar11 + -1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (lVar11 == 0) {
                  (**(code **)(*uStack_120 + 0x10))(uStack_120);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
                }
              }
              iVar19 = iVar19 + 1;
            } while (iVar19 != (int)plVar18);
          }
          (**(code **)(*param_6 + 0x220))(param_6);
          plVar18 = plStack_180;
        }
        lVar11 = *plVar18;
        if (lVar11 != plVar18[1]) {
          do {
            if ((ulong)(plVar18[4] - plVar18[3] >> 4) <= (ulong)*(uint *)(lVar11 + 0x2c)) {
              FUN_10a00946c(&UNK_10f63b8ac);
LAB_10ac16f70:
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x10ac16f74);
              (*pcVar6)();
            }
            lVar11 = lVar11 + 0x68;
          } while (lVar11 != plVar18[1]);
        }
        *(byte *)(param_5 + 0x5f) = *(byte *)(param_5 + 0x5f) | 1;
        plVar18 = param_5 + 0x6b;
        plVar8 = param_5 + 0x6e;
        plVar20 = plVar18;
        FUN_10ac45eb4(plVar18,plVar8);
        plVar22 = plVar8;
        if (param_5 + 0x6c == plVar20) {
          plVar22 = (long *)(*plVar18 + 0x20);
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(plVar8,plVar22);
        func_0x00010ac17ce4(plVar18,plVar8);
        param_5[0x71] = (long)plVar18;
        FUN_10ac161d0(param_5);
        FUN_10ac15874(param_5);
        FUN_10ac4578c(&plStack_180);
      }
    }
    else {
      (**(code **)(*param_6 + 0x1f0))(param_6,&PTR_DAT_110c5d4d0,param_5[0x67]);
      FUN_10ac15734(param_5,param_5 + 0x52);
      *(byte *)(param_5 + 0x5f) = *(byte *)(param_5 + 0x5f) | 1;
      FUN_10ac15874(param_5);
    }
    func_0x00010ac12b40(param_5,plVar9);
    func_0x00010ac12b94(param_5,plVar24);
    bVar13 = 2;
    if ((int)plVar10 == 0) {
      bVar13 = 0;
    }
    *(byte *)(param_5 + 0x5f) = *(byte *)(param_5 + 0x5f) & 0xfd | bVar13;
    if ((int)plVar10 != 0) {
      FUN_10ac15b70(0,param_5,0xffffffff);
    }
    return;
  }
  uVar14 = param_5[2] - (long)pfVar2;
  uVar15 = (long)uVar14 >> 2;
  if (uVar15 <= uVar12) {
    uVar15 = uVar12;
  }
  if (0x7ffffffffffffff7 < uVar14) {
    uVar15 = 0x1fffffffffffffff;
  }
  if (uVar15 == 0) {
    plVar18 = (long *)0x0;
  }
  else {
    plVar8 = param_5;
    FUN_10a107b3c();
    plVar18 = plVar8;
    if (uVar15 != 0) {
      plVar9 = plVar8 + uVar15;
      goto LAB_10ac16418;
    }
  }
  lVar11 = 1;
  plVar8 = param_5;
  FUN_10a107b3c();
  plVar9 = plVar8 + lVar11;
  if (plVar18 != (long *)0x0) {
    __ZdlPv(plVar18);
  }
LAB_10ac16418:
  *plVar8 = 0;
  _memcpy(plVar8 + 1,pfVar2,param_5[1] - (long)pfVar2);
  lVar11 = param_5[1];
  param_5[1] = (long)pfVar2;
  lVar17 = (long)plVar8 - ((long)pfVar2 - *param_5);
  _memcpy(lVar17);
  lVar7 = *param_5;
  *param_5 = lVar17;
  param_5[1] = (long)(plVar8 + 1) + (lVar11 - (long)pfVar2);
  param_5[2] = (long)plVar9;
  if (lVar7 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac164ac; end: 10ac17093;  */

void FUN_10ac164ac(long *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  long param_5,long *param_6)

{
  undefined4 *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  byte bVar11;
  long lVar12;
  ulong uVar13;
  int iVar14;
  long *plVar15;
  int iVar16;
  long *plVar17;
  undefined8 *puVar18;
  long *plVar19;
  undefined4 uVar20;
  long *plStack_140;
  ulong uStack_138;
  long lStack_130;
  undefined8 *puStack_128;
  undefined8 uStack_120;
  char cStack_111;
  long *plStack_110;
  char cStack_f9;
  int iStack_ec;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined8 uStack_bc;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_79 [9];
  
  plVar5 = param_6;
  (**(code **)(*param_6 + 0x248))(param_6);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_5 + 0x78,plVar5);
  plVar5 = param_6;
  (**(code **)(*param_6 + 0x38))(param_6,&PTR_s_version_110c55d90,0);
  plVar6 = param_6;
  (**(code **)(*param_6 + 0x200))(param_6,&PTR_DAT_110c55db0);
  if ((int)plVar6 == 0) {
    func_0x000107c2b054(&uStack_e8,&UNK_10f69b9ca);
    FUN_10a0fed30(&puStack_128,param_6,&PTR_DAT_110c55dd0,&uStack_e8);
    if ((long)uStack_d8 < 0) {
      __ZdlPv(uStack_e8);
    }
    plVar6 = param_6;
    (**(code **)(*param_6 + 0x248))();
    if (*(char *)((long)plVar6 + 0x17) < '\0') {
      func_0x000107c3192c(&plStack_140,*plVar6,plVar6[1]);
    }
    else {
      uStack_138 = plVar6[1];
      param_1 = (long *)*plVar6;
      lStack_130 = plVar6[2];
      plStack_140 = param_1;
    }
    FUN_10a107e2c(&uStack_e8,&puStack_128,&plStack_140,0);
    FUN_10ac125dc(param_5,&uStack_e8);
    if (uStack_bc._3_1_ < '\0') {
      __ZdlPv(CONCAT44(uStack_cc,uStack_d0));
    }
    if ((long)uStack_d8 < 0) {
      __ZdlPv(uStack_e8);
    }
    plStack_110 = plStack_140;
    if (-1 < lStack_130) goto LAB_10ac16654;
  }
  else {
    FUN_10a1e3e54(&puStack_128);
    (**(code **)(*param_6 + 0x230))(&uStack_e8,param_6,&PTR_DAT_110c55db0,&puStack_128);
    FUN_10ac125dc(param_5,&uStack_e8);
    if (uStack_bc._3_1_ < '\0') {
      __ZdlPv(CONCAT44(uStack_cc,uStack_d0));
    }
    if ((long)uStack_d8 < 0) {
      __ZdlPv(uStack_e8);
    }
    if (-1 < cStack_f9) goto LAB_10ac16654;
  }
  __ZdlPv(plStack_110);
LAB_10ac16654:
  if (cStack_111 < '\0') {
    __ZdlPv(puStack_128);
  }
  plVar6 = param_6;
  (**(code **)(*param_6 + 0x58))(param_6,&PTR_DAT_110c55df0,0);
  plVar19 = param_6;
  (**(code **)(*param_6 + 0x58))(param_6,&PTR_DAT_110c55e10,0);
  plVar7 = param_6;
  (**(code **)(*param_6 + 0x58))(param_6,&PTR_DAT_110c55e30,0);
  plVar8 = param_6;
  (**(code **)(*param_6 + 0x58))(param_6,&PTR_DAT_110c55e50,0);
  bVar11 = 0x10;
  if ((int)plVar8 == 0) {
    bVar11 = 0;
  }
  *(byte *)(param_5 + 0x2f8) = *(byte *)(param_5 + 0x2f8) & 0xef | bVar11;
  if ((int)plVar8 == 0) {
    if ((int)plVar5 < 1) {
      plVar5 = param_6;
      (**(code **)(*param_6 + 0x200))(param_6,&PTR_DAT_110c55d70);
      if ((int)plVar5 == 0) {
        (**(code **)(*param_6 + 0x1f0))(param_6,&PTR_DAT_110c5d4d0,*(undefined8 *)(param_5 + 0x338))
        ;
      }
      else {
        (**(code **)(*param_6 + 0x210))(param_6,&PTR_DAT_110c55d70);
        plVar5 = param_6;
        (**(code **)(*param_6 + 0x208))();
        uStack_e8 = (long *)0x0;
        uStack_e0 = (long *)0x0;
        uStack_d8 = (long *)0x0;
        if ((int)plVar5 != 0) {
          uVar10 = (ulong)plVar5 & 0xffffffff;
          plVar8 = &uStack_e8;
          FUN_10a107b3c();
          plVar15 = (long *)((long)plVar8 - ((long)uStack_e0 - (long)uStack_e8));
          _memcpy(plVar15);
          bVar3 = uStack_e8 != (long *)0x0;
          uStack_e8 = plVar15;
          uStack_e0 = plVar8;
          uStack_d8 = plVar8 + uVar10;
          if (bVar3) {
            __ZdlPv();
          }
          iVar14 = 0;
          do {
            (**(code **)(*param_6 + 0x218))(param_6,iVar14);
            (**(code **)(*param_6 + 0x40))(param_6,&PTR_DAT_110c5d510);
            plVar8 = param_6;
            plVar15 = param_1;
            (**(code **)(*param_6 + 0x30))(param_6,&PTR_s_value_110c5d530);
            if (uStack_e0 < uStack_d8) {
              *(int *)uStack_e0 = (int)param_1;
              *(int *)((long)uStack_e0 + 4) = (int)plVar8;
              plVar8 = uStack_e0 + 1;
            }
            else {
              lVar12 = (long)uStack_e0 - (long)uStack_e8;
              uVar10 = (lVar12 >> 3) + 1;
              if (uVar10 >> 0x3d != 0) {
                FUN_10a107b28();
                goto LAB_10ac16f70;
              }
              uVar13 = (long)uStack_d8 - (long)uStack_e8 >> 2;
              if (uVar13 <= uVar10) {
                uVar13 = uVar10;
              }
              if (0x7ffffffffffffff7 < (ulong)((long)uStack_d8 - (long)uStack_e8)) {
                uVar13 = 0x1fffffffffffffff;
              }
              puVar18 = &uStack_e8;
              FUN_10a107b3c();
              puVar1 = (undefined4 *)((long)puVar18 + lVar12);
              *puVar1 = (int)param_1;
              puVar1[1] = (int)plVar8;
              plVar8 = (long *)(puVar1 + 2);
              plVar17 = (long *)((long)puVar1 - ((long)uStack_e0 - (long)uStack_e8));
              _memcpy(plVar17);
              bVar3 = uStack_e8 != (long *)0x0;
              uStack_e8 = plVar17;
              uStack_d8 = puVar18 + uVar13;
              if (bVar3) {
                uStack_e0 = plVar8;
                __ZdlPv();
              }
            }
            uStack_e0 = plVar8;
            (**(code **)(*param_6 + 0x220))(param_6);
            iVar14 = iVar14 + 1;
            param_1 = plVar15;
          } while ((int)plVar5 != iVar14);
        }
        (**(code **)(*param_6 + 0x220))(param_6);
        FUN_10ac1631c(&uStack_e8);
        func_0x00010aa83d64(*(long *)(param_5 + 0x338) + 0xe0,&uStack_e8);
        if (uStack_e8 != (long *)0x0) {
          uStack_e0 = uStack_e8;
          __ZdlPv();
        }
        plVar6 = (long *)((ulong)plVar6 & 0xffffffff);
        plVar19 = (long *)((ulong)plVar19 & 0xffffffff);
      }
    }
    else {
      (**(code **)(*param_6 + 0x1f0))(param_6,&PTR_DAT_110c5d4d0,*(undefined8 *)(param_5 + 0x338));
      plVar8 = param_6;
      (**(code **)(*param_6 + 0x38))(param_6,&PTR_DAT_110c55c10,0);
      plVar5 = (long *)(param_5 + 0x3a8);
      uStack_138 = uStack_138 & 0xffffffffffffff00;
      plStack_140 = plVar5;
      FUN_10ac15eac(plVar5,(long)(int)plVar8);
      (**(code **)(*param_6 + 0x210))(param_6,&PTR_DAT_110c55c30);
      plVar8 = param_6;
      (**(code **)(*param_6 + 0x208))();
      if ((int)plVar8 != 0) {
        iVar14 = 0;
        puVar18 = (undefined8 *)((ulong)&uStack_e8 | 4);
        do {
          (**(code **)(*param_6 + 0x218))(param_6,iVar14);
          uStack_e8 = (long *)((ulong)uStack_e8 & 0xffffffffffffff00);
          uVar20 = 0;
          puVar18[1] = 0;
          *puVar18 = 0;
          puVar18[3] = 0;
          puVar18[2] = 0;
          puVar18[4] = 0;
          uStack_bc = 0x1869f0001869f;
          uStack_a8 = 0;
          puStack_b0 = (undefined8 *)0x0;
          uStack_98 = 0;
          uStack_a0 = 0;
          uStack_88 = 0;
          uStack_90 = 0;
          plVar15 = param_6;
          (**(code **)(*param_6 + 0x30))(param_6,&PTR_DAT_110c55c50);
          uStack_bc = CONCAT44(uStack_bc._4_4_,(int)plVar15);
          (**(code **)(*param_6 + 0x108))(param_6,&PTR_DAT_110c55c70);
          uStack_e8 = (long *)CONCAT44(uVar20,(undefined4)uStack_e8);
          uStack_e0 = (long *)CONCAT44(param_3,param_2);
          uStack_d8 = (long *)CONCAT44(uStack_d8._4_4_,param_4);
          (**(code **)(*param_6 + 0x108))(param_6,&PTR_DAT_110c55c90);
          uStack_d8 = (long *)CONCAT44(uVar20,(undefined4)uStack_d8);
          uStack_d0 = param_2;
          uStack_cc = param_3;
          uStack_c8 = param_4;
          (**(code **)(*param_6 + 0xd8))(param_6,&PTR_DAT_110c55cb0);
          plVar15 = param_6;
          uStack_c4 = uVar20;
          uStack_c0 = param_2;
          (**(code **)(*param_6 + 0x50))(param_6,&PTR_DAT_110c55cd0);
          uStack_e8 = (long *)CONCAT71(uStack_e8._1_7_,(char)plVar15);
          (**(code **)(*param_6 + 0xa8))(&puStack_128,param_6,&PTR_DAT_110c55cf0,&UNK_10f69b9ca,0);
          uStack_a8 = uStack_120;
          puStack_b0 = puStack_128;
          uStack_a0._7_1_ = cStack_111;
          FUN_10ac15f74(plVar5,&uStack_e8);
          (**(code **)(*param_6 + 0x220))(param_6);
          if (uStack_a0._7_1_ < '\0') {
            __ZdlPv(puStack_b0);
          }
          iVar14 = iVar14 + 1;
        } while ((int)plVar8 != iVar14);
      }
      (**(code **)(*param_6 + 0x220))(param_6);
      (**(code **)(*param_6 + 0x210))(param_6,&PTR_DAT_110c55d10);
      plVar8 = param_6;
      (**(code **)(*param_6 + 0x208))();
      if ((int)plVar8 != 0) {
        iVar14 = 0;
        do {
          (**(code **)(*param_6 + 0x218))(param_6,iVar14);
          (**(code **)(*param_6 + 0xa0))(&uStack_e8,param_6,&PTR_DAT_110c55d30);
          (**(code **)(*param_6 + 0x210))(param_6,&PTR_DAT_110c55c30);
          plVar15 = param_6;
          (**(code **)(*param_6 + 0x208))();
          if ((int)plVar15 != 0) {
            iVar16 = 0;
            do {
              (**(code **)(*param_6 + 0x218))(param_6,iVar16);
              plVar17 = param_6;
              (**(code **)(*param_6 + 0x30))(param_6,&PTR_DAT_110c5d4f0);
              iStack_ec = (int)plVar17;
              if ((iStack_ec < 0) ||
                 (uVar10 = (*(long *)(param_5 + 0x3b0) - *(long *)(param_5 + 0x3a8) >> 3) *
                           0x4ec4ec4ec4ec4ec5, uStack_120 = 0x29,
                 uVar10 < ((ulong)plVar17 & 0xffffffff) ||
                 uVar10 - ((ulong)plVar17 & 0xffffffff) == 0)) {
                uStack_120 = 0x29;
                puStack_128 = (undefined8 *)&UNK_10f69bbc2;
                FUN_10a0edfc4(&puStack_128);
                goto LAB_10ac16f70;
              }
              puStack_128 = &uStack_e8;
              lVar12 = param_5 + 0x358;
              func_0x000109566b64(lVar12,&uStack_e8,&UNK_10dd5b8f9,&puStack_128,auStack_79);
              func_0x000109febdc8(lVar12 + 0x38,&iStack_ec);
              uVar10 = (*(long *)(param_5 + 0x3b0) - *(long *)(param_5 + 0x3a8) >> 3) *
                       0x4ec4ec4ec4ec4ec5;
              if (uVar10 < (ulong)(long)iStack_ec || uVar10 - (long)iStack_ec == 0)
              goto LAB_10ac16f70;
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                        (*(long *)(param_5 + 0x3a8) + (long)iStack_ec * 0x68 + 0x50,&uStack_e8);
              uVar10 = (*(long *)(param_5 + 0x3b0) - *(long *)(param_5 + 0x3a8) >> 3) *
                       0x4ec4ec4ec4ec4ec5;
              if (uVar10 < (ulong)(long)iStack_ec || uVar10 - (long)iStack_ec == 0)
              goto LAB_10ac16f70;
              *(int *)(*(long *)(param_5 + 0x3a8) + (long)iStack_ec * 0x68 + 0x30) = iVar16;
              (**(code **)(*param_6 + 0x220))(param_6);
              iVar16 = iVar16 + 1;
            } while ((int)plVar15 != iVar16);
          }
          (**(code **)(*param_6 + 0x220))(param_6);
          (**(code **)(*param_6 + 0x220))(param_6);
          if ((long)uStack_d8 < 0) {
            __ZdlPv(uStack_e8);
          }
          iVar14 = iVar14 + 1;
        } while (iVar14 != (int)plVar8);
      }
      (**(code **)(*param_6 + 0x220))(param_6);
      plVar6 = (long *)((ulong)plVar6 & 0xffffffff);
      plVar19 = (long *)((ulong)plVar19 & 0xffffffff);
      plVar8 = param_6;
      (**(code **)(*param_6 + 0x200))(param_6,&PTR_DAT_110c55d50);
      if ((int)plVar8 != 0) {
        (**(code **)(*param_6 + 0x210))(param_6,&PTR_DAT_110c55d50);
        plVar5 = param_6;
        (**(code **)(*param_6 + 0x208))();
        if ((int)plVar5 != 0) {
          iVar14 = 0;
          do {
            FUN_10ac45928(&uStack_e8,*(undefined8 *)(param_5 + 0x90),2);
            (**(code **)(*param_6 + 0x1e8))(param_6,iVar14,uStack_e8);
            FUN_10ac160d0(plStack_140 + 3,&uStack_e8);
            plVar8 = uStack_e0;
            if (uStack_e0 != (long *)0x0) {
              plVar15 = uStack_e0 + 1;
              do {
                lVar12 = *plVar15;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar15,0x10);
                if (bVar3) {
                  *plVar15 = lVar12 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (lVar12 == 0) {
                (**(code **)(*uStack_e0 + 0x10))(uStack_e0);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
              }
            }
            iVar14 = iVar14 + 1;
          } while (iVar14 != (int)plVar5);
        }
        (**(code **)(*param_6 + 0x220))(param_6);
        plVar5 = plStack_140;
      }
      lVar12 = *plVar5;
      if (lVar12 != plVar5[1]) {
        do {
          if ((ulong)(plVar5[4] - plVar5[3] >> 4) <= (ulong)*(uint *)(lVar12 + 0x2c)) {
            FUN_10a00946c(&UNK_10f63b8ac);
LAB_10ac16f70:
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10ac16f74);
            (*pcVar4)();
          }
          lVar12 = lVar12 + 0x68;
        } while (lVar12 != plVar5[1]);
      }
      *(byte *)(param_5 + 0x2f8) = *(byte *)(param_5 + 0x2f8) | 1;
      plVar5 = (long *)(param_5 + 0x358);
      lVar12 = param_5 + 0x370;
      plVar8 = plVar5;
      FUN_10ac45eb4(plVar5,lVar12);
      lVar9 = lVar12;
      if ((long *)(param_5 + 0x360) == plVar8) {
        lVar9 = *plVar5 + 0x20;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(lVar12,lVar9);
      func_0x00010ac17ce4(plVar5,lVar12);
      *(long **)(param_5 + 0x388) = plVar5;
      FUN_10ac161d0(param_5);
      FUN_10ac15874(param_5);
      FUN_10ac4578c(&plStack_140);
    }
  }
  else {
    (**(code **)(*param_6 + 0x1f0))(param_6,&PTR_DAT_110c5d4d0,*(undefined8 *)(param_5 + 0x338));
    FUN_10ac15734(param_5,param_5 + 0x290);
    *(byte *)(param_5 + 0x2f8) = *(byte *)(param_5 + 0x2f8) | 1;
    FUN_10ac15874(param_5);
  }
  func_0x00010ac12b40(param_5,plVar6);
  func_0x00010ac12b94(param_5,plVar19);
  bVar11 = 2;
  if ((int)plVar7 == 0) {
    bVar11 = 0;
  }
  *(byte *)(param_5 + 0x2f8) = *(byte *)(param_5 + 0x2f8) & 0xfd | bVar11;
  if ((int)plVar7 != 0) {
    FUN_10ac15b70(0,param_5,0xffffffff);
  }
  return;
}



/* Entry: 10ac17094; end: 10ac174ef;  */

void FUN_10ac17094(long param_1,long *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  long *plVar3;
  bool bVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long *plVar10;
  long *plVar11;
  undefined4 *puVar12;
  byte *pbVar13;
  byte *pbVar14;
  undefined1 auStack_98 [8];
  undefined *puStack_70;
  undefined8 uStack_68;
  
  if ((*(byte *)(param_1 + 0x2f8) & 1) == 0) {
    puVar5 = &UNK_10f69bbec;
    FUN_10a00946c();
    FUN_10ac114d4();
    uVar7 = *(undefined8 *)(puVar5 + 0x398);
    *(ulong *)(puVar5 + 0x390) = (ulong)*(uint *)(puVar5 + 0x390);
    *(int *)(puVar5 + 0x398) = (int)uVar7;
    *(ushort *)(puVar5 + 0x39c) = (ushort)((ulong)uVar7 >> 0x20) & 0xff01 | 1;
    func_0x00010a1bd170(auStack_98);
    FUN_10ac45aa4(puVar5 + 0x390);
    lVar6 = *(long *)(puVar5 + 800);
    *(undefined1 *)(lVar6 + 0x10) = 1;
    *(undefined2 *)(lVar6 + 0x20) = 0;
    return;
  }
  puStack_70 = &UNK_10f64131a;
  uStack_68 = 0x24;
  (**(code **)(*param_2 + 0x30))(param_2,&PTR_DAT_110c5d550,&puStack_70);
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_s_version_110c55d90,1);
  (**(code **)(*param_2 + 0xf8))(param_2,&PTR_DAT_110c55db0,param_1 + 0x290);
  (**(code **)(*param_2 + 0x1a8))(param_2,&PTR_DAT_110c55dd0,param_1 + 0x290);
  (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110c55df0,*(byte *)(param_1 + 0x2f8) >> 3 & 1);
  (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110c55e10,*(byte *)(param_1 + 0x2f8) >> 2 & 1);
  (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110c55e30,*(byte *)(param_1 + 0x2f8) >> 1 & 1);
  (**(code **)(*param_2 + 0x118))(param_2,&PTR_DAT_110c5d4d0,*(undefined8 *)(param_1 + 0x338));
  (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110c55e50,*(byte *)(param_1 + 0x2f8) >> 4 & 1);
  if ((*(byte *)(param_1 + 0x2f8) >> 4 & 1) == 0) {
    (**(code **)(*param_2 + 0x40))
              (param_2,&PTR_DAT_110c55c10,
               (int)((ulong)(*(long *)(param_1 + 0x3b0) - *(long *)(param_1 + 0x3a8)) >> 3) *
               -0x3b13b13b);
    (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110c55c30);
    pbVar14 = *(byte **)(param_1 + 0x3b0);
    for (pbVar13 = *(byte **)(param_1 + 0x3a8); pbVar13 != pbVar14; pbVar13 = pbVar13 + 0x68) {
      (**(code **)(*param_2 + 0x10))(param_2);
      (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110c55c50,*(undefined4 *)(pbVar13 + 0x2c));
      (**(code **)(*param_2 + 0x90))(param_2,&PTR_DAT_110c55c70,pbVar13 + 4);
      (**(code **)(*param_2 + 0x90))(param_2,&PTR_DAT_110c55c90,pbVar13 + 0x14);
      (**(code **)(*param_2 + 0x78))(param_2,&PTR_DAT_110c55cb0,pbVar13 + 0x24);
      (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110c55cd0,*pbVar13 & 1);
      FUN_10a00d760(param_2,&PTR_DAT_110c55cf0,pbVar13 + 0x38);
      (**(code **)(*param_2 + 0x20))(param_2);
    }
    (**(code **)(*param_2 + 0x20))(param_2);
    (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110c55d50);
    puVar9 = *(undefined8 **)(param_1 + 0x3c8);
    for (puVar8 = *(undefined8 **)(param_1 + 0x3c0); puVar8 != puVar9; puVar8 = puVar8 + 2) {
      (**(code **)(*param_2 + 0x128))(param_2,*puVar8,0);
    }
    (**(code **)(*param_2 + 0x20))(param_2);
  }
  (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110c55d10);
  plVar10 = *(long **)(param_1 + 0x358);
  while (plVar10 != (long *)(param_1 + 0x360)) {
    if (plVar10[7] != plVar10[8]) {
      (**(code **)(*param_2 + 0x10))(param_2);
      FUN_10a00d760(param_2,&PTR_DAT_110c55d30,plVar10 + 4);
      (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110c55c30);
      puVar1 = (undefined4 *)plVar10[8];
      for (puVar12 = (undefined4 *)plVar10[7]; puVar12 != puVar1; puVar12 = puVar12 + 1) {
        uVar2 = *puVar12;
        (**(code **)(*param_2 + 0x10))(param_2);
        (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110c5d4f0,uVar2);
        (**(code **)(*param_2 + 0x20))(param_2);
      }
      (**(code **)(*param_2 + 0x20))(param_2);
      (**(code **)(*param_2 + 0x20))(param_2);
    }
    plVar3 = (long *)plVar10[1];
    plVar11 = plVar10;
    if ((long *)plVar10[1] == (long *)0x0) {
      do {
        plVar10 = (long *)plVar11[2];
        bVar4 = (long *)*plVar10 != plVar11;
        plVar11 = plVar10;
      } while (bVar4);
    }
    else {
      do {
        plVar10 = plVar3;
        plVar3 = (long *)*plVar10;
      } while ((long *)*plVar10 != (long *)0x0);
    }
  }
  (**(code **)(*param_2 + 0x20))(param_2);
  return;
}



/* Entry: 10ac174f0; end: 10ac1759f;  */

void FUN_10ac174f0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_28 [8];
  
  FUN_10ac114d4(param_1,0);
  uVar2 = *(undefined8 *)(param_1 + 0x398);
  *(ulong *)(param_1 + 0x390) = (ulong)*(uint *)(param_1 + 0x390);
  *(int *)(param_1 + 0x398) = (int)uVar2;
  *(ushort *)(param_1 + 0x39c) = (ushort)((ulong)uVar2 >> 0x20) & 0xff01 | 1;
  func_0x00010a1bd170(auStack_28);
  FUN_10ac45aa4(param_1 + 0x390);
  lVar1 = *(long *)(param_1 + 800);
  *(undefined1 *)(lVar1 + 0x10) = 1;
  *(undefined2 *)(lVar1 + 0x20) = 0;
  return;
}



/* Entry: 10ac175a0; end: 10ac176ef;  */

/* WARNING: Type propagation algorithm not settling */

code ** FUN_10ac175a0(double param_1,undefined1 *param_2,code **param_3,undefined8 param_4)

{
  code *pcVar1;
  float *pfVar2;
  float *pfVar3;
  int *******pppppppiVar4;
  long lVar5;
  char cVar6;
  bool bVar7;
  code *pcVar8;
  long *plVar9;
  undefined1 *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  code **ppcVar13;
  code **ppcVar14;
  code **ppcVar15;
  code **ppcVar16;
  undefined8 uVar17;
  ulong extraout_x8;
  float *extraout_x8_00;
  ulong uVar18;
  long extraout_x10;
  ulong uVar19;
  ulong uVar20;
  undefined8 extraout_x11;
  ulong uVar21;
  code *extraout_x12;
  int *piVar22;
  int iVar23;
  long lVar24;
  long *plVar25;
  float fVar26;
  double dVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  int *******pppppppiStack_148;
  ulong uStack_140;
  byte bStack_131;
  code **ppcStack_130;
  code **ppcStack_128;
  undefined1 **ppuStack_120;
  code *pcStack_118;
  code *pcStack_108;
  code **ppcStack_100;
  code **ppcStack_f8;
  code **ppcStack_f0;
  code *pcStack_e8;
  code **ppcStack_e0;
  code *pcStack_d8;
  code *pcStack_c8;
  code **in_stack_ffffffffffffff40;
  undefined **ppuVar35;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  
  uVar17 = 0;
  FUN_10ac114d4();
  iVar23 = (int)param_3;
  if (iVar23 < 0) {
    FUN_10a00946c(&UNK_10f69bc55);
  }
  else {
    puVar10 = param_2;
    func_0x00010ac1755c();
    if (iVar23 < (int)puVar10) {
      lVar24 = *(long *)(*(long *)(param_2 + 0x328) + 0xe8);
      uVar18 = *(long *)(*(long *)(param_2 + 0x328) + 0xf0) - lVar24 >> 3;
      if (uVar18 - 1 < 2) {
        uVar21 = 0;
        uVar20 = 1;
      }
      else {
        uVar21 = uVar18;
        if (uVar18 < 2) {
          uVar21 = 1;
        }
        uVar19 = 1;
        piVar22 = (int *)(lVar24 + 0xc);
        do {
          if (uVar21 == uVar19) goto LAB_10ac176d4;
          uVar20 = uVar19;
        } while ((*piVar22 <= iVar23) &&
                (uVar19 = uVar19 + 1, uVar20 = uVar18 - 1, piVar22 = piVar22 + 2,
                (2 - uVar18) + uVar19 != 1));
        uVar21 = (ulong)((int)uVar20 + -1);
      }
      if ((uVar20 < uVar18) && (uVar21 < uVar18)) {
        pfVar2 = (float *)(lVar24 + uVar20 * 8);
        pfVar3 = (float *)(lVar24 + uVar21 * 8);
        fVar29 = pfVar3[1];
        fVar26 = (float)((int)pfVar2[1] - (int)fVar29);
        fVar28 = (float)(iVar23 - (int)fVar29) / fVar26;
        fVar29 = 0.0;
        if (0.0 <= fVar28) {
          fVar29 = fVar28;
        }
        fVar28 = 1.0;
        if (fVar29 <= 1.0) {
          fVar28 = fVar29;
        }
        fVar29 = *pfVar3;
        fVar30 = *pfVar2;
        fVar29 = fVar30 * fVar28 + (1.0 - fVar28) * fVar29 + ((fVar30 - fVar29) / fVar26) * 0.01;
        dVar27 = (double)(ulong)(uint)fVar29;
        FUN_10ac114d4(param_2,0);
        if (fVar29 < 0.0) {
          FUN_10a00946c(&UNK_10f69bc10);
        }
        else {
          iVar23 = (int)param_4;
          if ((0 < iVar23) || (iVar23 == -1)) {
            lVar24 = *(long *)(param_2 + 800);
            *(undefined2 *)(lVar24 + 0x20) = 1;
            *(undefined2 *)(lVar24 + 0x10) = 0;
            *(int *)(lVar24 + 0x28) = iVar23;
            *(undefined4 *)(lVar24 + 0x2c) = 0;
            (**(code **)(**(long **)(lVar24 + 8) + 0x10))();
            fVar29 = (float)dVar27 - fVar29;
            *(float *)(lVar24 + 0x30) = fVar29;
            *(float *)(lVar24 + 0x3c) = fVar29;
            FUN_10acdc738(lVar24);
            plVar9 = *(long **)(param_2 + 0x388);
            if (plVar9 == (long *)0x0) {
              plVar9 = (long *)(param_2 + 0x358);
              FUN_10ac17ca8(plVar9,param_2 + 0x370);
            }
            lVar24 = *plVar9;
            lVar5 = plVar9[1];
            FUN_10acdc738(*(undefined8 *)(param_2 + 800));
            ppcVar16 = (code **)(*(long *)(param_2 + 0x328) + 0xe0);
            func_0x00010aa905a0(fVar29 * (*(float *)(*(long *)(param_2 + 0x328) + 0x100) /
                                         *(float *)(*(long *)(param_2 + 800) + 0x34)));
            iVar23 = (int)((ulong)(lVar5 - lVar24) >> 2) + -1;
            if ((int)ppcVar16 <= iVar23) {
              iVar23 = (int)ppcVar16;
            }
            if (*(int *)(param_2 + 0x390) != iVar23) {
              FUN_10a1bd024();
              FUN_10a1bd024();
              ppcVar16[8] = extraout_x12;
              *(ulong *)(param_2 + 0x390) = extraout_x8 | extraout_x10 << 0x20;
              *(short *)(param_2 + 0x39c) = (short)((ulong)extraout_x11 >> 0x20);
              *(int *)(param_2 + 0x398) = (int)extraout_x11;
              func_0x00010a1bd170(&stack0xffffffffffffffd8);
              FUN_10ac45aa4(param_2 + 0x390);
              FUN_10ac18ae8(param_2);
              ppcVar16 = (code **)&stack0xffffffffffffffc8;
              FUN_10a1bff04(ppcVar16);
            }
            return ppcVar16;
          }
        }
        ppcVar16 = (code **)&UNK_10f69bc35;
        FUN_10a00946c();
        pcStack_48 = FUN_10ac15c1c;
        puStack_50 = &stack0xfffffffffffffff0;
        func_0x00010ab9ac98();
        pcStack_58 = FUN_10ac15c28;
        if ((*(byte *)(ppcVar16 + 0x5f) >> 4 & 1) == 0) {
          if (ppcVar16[0x75] == ppcVar16[0x76]) {
            extraout_x8_00[2] = 0.0;
            extraout_x8_00[3] = 0.0;
            extraout_x8_00[0] = 1.0;
            extraout_x8_00[1] = 0.0;
            extraout_x8_00[6] = 0.0;
            extraout_x8_00[7] = 0.0;
            extraout_x8_00[4] = 1.0;
            extraout_x8_00[5] = 0.0;
            extraout_x8_00[8] = 1.0;
            return ppcVar16;
          }
          fVar29 = 1.0;
          fVar26 = 0.0;
        }
        else {
          fVar29 = -1.0;
          if (*(int *)(*(long *)(ppcVar16[0x12] + 0xa20) + 0x18) < 0x13a) {
            fVar29 = 1.0;
          }
          fVar26 = -1.0;
          if (*(int *)(*(long *)(ppcVar16[0x12] + 0xa20) + 0x18) < 0x13a) {
            fVar26 = 0.0;
          }
        }
        ppcVar13 = ppcVar16;
        puStack_60 = (undefined1 *)&puStack_50;
        FUN_10ac15e20();
        if ((*(byte *)(ppcVar16 + 0x5f) >> 4 & 1) == 0) {
          if ((ulong)((long)ppcVar16[0x79] - (long)ppcVar16[0x78] >> 4) <=
              (ulong)*(uint *)((long)ppcVar13 + 0x2c)) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x10ac15e20);
            (*pcVar8)();
          }
          plVar25 = *(long **)(ppcVar16[0x78] + (ulong)*(uint *)((long)ppcVar13 + 0x2c) * 0x10);
          plVar9 = plVar25;
          (**(code **)(*plVar25 + 0xb0))();
          (**(code **)(*plVar25 + 0xb8))();
        }
        else {
          plVar9 = (long *)(ulong)*(ushort *)(ppcVar16 + 0x8b);
          plVar25 = (long *)(ulong)*(ushort *)((long)ppcVar16 + 0x45a);
        }
        fVar30 = 1.0 / (float)((ulong)plVar9 & 0xffffffff);
        fVar28 = 1.0 / (float)((ulong)plVar25 & 0xffffffff);
        fVar31 = *(float *)((long)ppcVar13 + 0x24);
        fVar32 = *(float *)(ppcVar13 + 5);
        if (((ulong)*ppcVar13 & 1) == 0) {
          fVar33 = fVar31 * fVar30 - fVar30;
          fVar34 = -fVar28 + fVar28 * fVar32;
          fVar32 = (*(float *)((long)ppcVar13 + 4) - *(float *)((long)ppcVar13 + 0x14)) + 0.5;
          fVar31 = *(float *)(ppcVar13 + 1) - *(float *)(ppcVar13 + 3);
        }
        else {
          fVar33 = -fVar28 + fVar28 * fVar31;
          fVar34 = fVar32 * fVar30 - fVar30;
          fVar32 = (*(float *)((long)ppcVar13 + 4) - *(float *)(ppcVar13 + 3)) + fVar32 + -0.5;
          fVar31 = ((*(float *)(ppcVar13 + 1) + *(float *)((long)ppcVar13 + 0x14)) - fVar31) +
                   *(float *)(ppcVar13 + 2);
        }
        extraout_x8_00[2] = 0.0;
        extraout_x8_00[3] = 0.0;
        extraout_x8_00[1] = 0.0;
        extraout_x8_00[5] = 0.0;
        extraout_x8_00[8] = 1.0;
        *extraout_x8_00 = fVar33;
        extraout_x8_00[4] = fVar29 * fVar34;
        fVar28 = 1.0 - fVar28 * (fVar31 + 0.5);
        extraout_x8_00[6] = fVar30 * fVar32;
        extraout_x8_00[7] = (fVar28 - fVar34) - fVar26;
        FUN_10ac15e20();
        if (((ulong)*ppcVar16 & 1) != 0) {
          extraout_x8_00[1] = fVar29 * fVar33;
          *extraout_x8_00 = 0.0;
          extraout_x8_00[3] = -fVar34;
          extraout_x8_00[4] = 0.0;
          extraout_x8_00[7] = (fVar28 - fVar33) - fVar26;
        }
        return ppcVar16;
      }
LAB_10ac176d4:
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x10ac176d8);
      (*pcVar8)();
    }
  }
  puVar11 = &UNK_10f69bc88;
  FUN_10a00946c();
  puStack_50 = param_2;
  pcStack_48 = (code *)param_4;
  FUN_10ac114d4();
  if ((int)uVar17 < 0) {
    FUN_10a00946c(&UNK_10f69bcd2);
  }
  else {
    puVar12 = puVar11;
    func_0x00010ac1755c();
    if ((int)uVar17 < (int)puVar12) {
      FUN_10ac175a0(puVar11,uVar17,1);
      FUN_10ac114d4(puVar11,0);
      ppcVar13 = *(code ***)(puVar11 + 800);
      ppcVar16 = ppcVar13;
      if (((*(char *)(ppcVar13 + 4) != '\0') && (((ulong)ppcVar13[2] & 1) == 0)) &&
         ((*(byte *)((long)ppcVar13 + 0x21) & 1) == 0)) {
        *(undefined1 *)((long)ppcVar13 + 0x21) = 1;
        cVar6 = *(char *)((long)ppcVar13 + 0x22);
        ppcVar16 = (code **)ppcVar13[1];
        (**(code **)(*ppcVar16 + 0x10))();
        fVar26 = (float)param_1;
        fVar29 = fVar26;
        if ((cVar6 == '\x01') &&
           (fVar29 = *(float *)((long)ppcVar13 + 0x3c), fVar26 <= *(float *)((long)ppcVar13 + 0x3c))
           ) {
          fVar29 = fVar26;
        }
        *(float *)(ppcVar13 + 7) = fVar29;
      }
      return ppcVar16;
    }
  }
  ppcVar16 = (code **)&UNK_10f69bd04;
  FUN_10a00946c();
  pcStack_58 = FUN_10ac17764;
  lVar24 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppcVar13 = (code **)ppcVar16[0x69];
  puStack_60 = &stack0xffffffffffffffc0;
  if (ppcVar13 == (code **)0x0) goto LAB_10ac179e8;
  ppcStack_f0 = (code **)ppcVar16[0x6a];
  if (ppcStack_f0 != (code **)0x0) {
    ppcVar14 = ppcStack_f0 + 1;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(ppcVar14,0x10);
      if (bVar7) {
        *ppcVar14 = *ppcVar14 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  ppcVar14 = &pcStack_c8;
  ppcVar16 = ppcVar16 + 8;
  ppcStack_f8 = ppcVar13;
  FUN_10ac45bf0();
  pcVar8 = pcStack_c8;
  pcStack_108 = pcStack_c8;
  ppcStack_100 = in_stack_ffffffffffffff40;
  ppuVar35 = in_stack_ffffffffffffff40;
  if (*(code *)(ppcVar13 + 8) == (code)0x1) {
    pcVar8 = *ppcVar13;
    if (in_stack_ffffffffffffff40 != (code **)0x0) {
      ppcVar16 = in_stack_ffffffffffffff40 + 1;
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(ppcVar16,0x10);
        if (bVar7) {
          *ppcVar16 = *ppcVar16 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    ppcVar14 = &pcStack_c8;
    (*pcVar8)(ppcVar14,ppcVar13);
    if (in_stack_ffffffffffffff40 != (code **)0x0) {
      ppcVar16 = in_stack_ffffffffffffff40 + 1;
      do {
        pcVar8 = *ppcVar16;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(ppcVar16,0x10);
        if (bVar7) {
          *ppcVar16 = pcVar8 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
LAB_10ac17868:
      if (pcVar8 == (code *)0x0) {
        (**(code **)(*in_stack_ffffffffffffff40 + 0x10))(in_stack_ffffffffffffff40);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        ppcVar14 = in_stack_ffffffffffffff40;
      }
    }
  }
  else if (*(code *)(ppcVar13 + 8) == (code)0x2) {
    param_3 = ppcVar13;
    FUN_10a688b40();
    if (param_3 == (code **)0x0) {
      ppcVar14 = (code **)0x0;
      if (ppcVar16 != (code **)0x0) {
        if (ppcVar13[1] != (code *)0x0) {
          pcVar1 = ppcVar13[1] + 8;
          do {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
            if (bVar7) {
              *(long *)pcVar1 = *(long *)pcVar1 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
        }
        pcStack_d8 = pcVar8;
        if (in_stack_ffffffffffffff40 != (code **)0x0) {
          ppcVar13 = in_stack_ffffffffffffff40 + 1;
          do {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(ppcVar13,0x10);
            if (bVar7) {
              *ppcVar13 = *ppcVar13 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
        }
        pcStack_c8 = FUN_10ac45e3c;
        ppuVar35 = &PTR_FUN_110c5dd38;
        pcStack_e8 = (code *)0x0;
        ppcStack_e0 = (code **)0x0;
        if (in_stack_ffffffffffffff40 != (code **)0x0) {
          ppcVar13 = in_stack_ffffffffffffff40 + 1;
          do {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(ppcVar13,0x10);
            if (bVar7) {
              *ppcVar13 = *ppcVar13 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
        }
        ppcVar13 = &pcStack_e8;
        param_3 = &pcStack_c8;
        FUN_10a4634ec(ppcVar16,&pcStack_c8);
        ppcVar14 = (code **)&stack0xffffffffffffff40;
        FUN_10ac45e4c();
        if (in_stack_ffffffffffffff40 != (code **)0x0) {
          ppcVar16 = in_stack_ffffffffffffff40 + 1;
          do {
            pcVar8 = *ppcVar16;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(ppcVar16,0x10);
            if (bVar7) {
              *ppcVar16 = pcVar8 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (pcVar8 == (code *)0x0) {
            (**(code **)(*in_stack_ffffffffffffff40 + 0x10))(in_stack_ffffffffffffff40);
            __ZNSt3__119__shared_weak_count14__release_weakEv();
            ppcVar14 = in_stack_ffffffffffffff40;
          }
        }
        if (ppcStack_e0 != (code **)0x0) {
          ppcVar16 = ppcStack_e0 + 1;
          do {
            pcVar8 = *ppcVar16;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(ppcVar16,0x10);
            if (bVar7) {
              *ppcVar16 = pcVar8 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
            in_stack_ffffffffffffff40 = ppcStack_e0;
          } while (cVar6 != '\0');
          goto LAB_10ac17868;
        }
      }
    }
    else {
      *param_3 = (code *)CONCAT44((int)((ulong)*param_3 >> 0x20) + 1,(int)*param_3 + 1);
      ppcVar14 = (code **)*ppcVar13;
      FUN_10ac45c30(ppcVar14,&pcStack_108);
      iVar23 = *(int *)((long)param_3 + 4) + -1;
      *(int *)((long)param_3 + 4) = iVar23;
      if (iVar23 == 0) {
        *(undefined4 *)param_3 = 0;
      }
    }
  }
  in_stack_ffffffffffffff40 = (code **)ppuVar35;
  if (ppcStack_100 != (code **)0x0) {
    ppcVar16 = ppcStack_100 + 1;
    do {
      pcVar8 = *ppcVar16;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(ppcVar16,0x10);
      if (bVar7) {
        *ppcVar16 = pcVar8 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (pcVar8 == (code *)0x0) {
      (**(code **)(*ppcStack_100 + 0x10))(ppcStack_100);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      ppcVar14 = ppcStack_100;
    }
  }
  ppcVar15 = ppcStack_f0;
  ppcVar16 = ppcVar14;
  if (ppcStack_f0 != (code **)0x0) {
    ppcVar14 = ppcStack_f0 + 1;
    do {
      pcVar8 = *ppcVar14;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(ppcVar14,0x10);
      if (bVar7) {
        *ppcVar14 = pcVar8 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (pcVar8 == (code *)0x0) {
      (**(code **)(*ppcStack_f0 + 0x10))(ppcStack_f0);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      ppcVar16 = ppcVar15;
    }
  }
LAB_10ac179e8:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar24) {
    return ppcVar16;
  }
  ___stack_chk_fail();
  (**in_stack_ffffffffffffff40)(param_3 + 1);
  FUN_10a37b740(ppcVar13 + 2);
  func_0x00010a004dac(&pcStack_e8);
  FUN_10a37b740(&pcStack_108);
  func_0x00010ac44d24(&ppcStack_f8);
  ppcVar14 = ppcVar16;
  __Unwind_Resume();
  ppcStack_130 = ppcVar13;
  ppcStack_128 = ppcVar16;
  ppuStack_120 = &puStack_60;
  pcStack_118 = FUN_10ac17a88;
  if ((*(byte *)(ppcVar14 + 0x5f) >> 4 & 1) == 0) {
    FUN_10a0f2388(&pppppppiStack_148,ppcVar14 + 0x52);
    if (-1 < (char)bStack_131) {
      uStack_140 = (ulong)bStack_131;
    }
    if (uStack_140 == 4) {
      pppppppiVar4 = pppppppiStack_148;
      if (-1 < (char)bStack_131) {
        pppppppiVar4 = (int *******)&pppppppiStack_148;
      }
      ppcVar16 = (code **)(ulong)(*(int *)pppppppiVar4 != 0x70626577);
    }
    else {
      ppcVar16 = (code **)0x1;
    }
    if ((char)bStack_131 < '\0') {
      __ZdlPv(pppppppiStack_148);
    }
  }
  else {
    ppcVar16 = (code **)0x0;
  }
  return ppcVar16;
}



/* Entry: 10ac176f0; end: 10ac17763;  */

undefined ******* FUN_10ac176f0(double param_1,long param_2,undefined8 param_3)

{
  undefined *****pppppuVar1;
  int ******ppppppiVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  undefined *******pppppppuVar7;
  undefined *******pppppppuVar8;
  undefined *******pppppppuVar9;
  undefined *****pppppuVar10;
  undefined ******ppppppuVar11;
  undefined ******ppppppuVar12;
  undefined ******unaff_x21;
  float fVar13;
  float fVar14;
  int *****pppppiStack_118;
  ulong uStack_110;
  byte bStack_101;
  undefined *****pppppuStack_100;
  undefined ******ppppppuStack_f8;
  undefined1 **ppuStack_f0;
  code *pcStack_e8;
  undefined *****pppppuStack_d8;
  undefined ******ppppppuStack_d0;
  undefined *****pppppuStack_c8;
  undefined ******ppppppuStack_c0;
  undefined ****ppppuStack_b8;
  undefined ******ppppppuStack_b0;
  undefined *****pppppuStack_a8;
  undefined ******ppppppuStack_a0;
  undefined *****pppppuStack_98;
  undefined ******ppppppuStack_90;
  undefined ****ppppuStack_88;
  undefined ****ppppuStack_80;
  undefined *****pppppuStack_78;
  undefined ******ppppppuStack_70;
  long lStack_58;
  undefined1 *puStack_30;
  code *pcStack_28;
  
  FUN_10ac114d4(param_2,0);
  if ((int)param_3 < 0) {
    FUN_10a00946c(&UNK_10f69bcd2);
  }
  else {
    lVar6 = param_2;
    func_0x00010ac1755c();
    if ((int)param_3 < (int)lVar6) {
      FUN_10ac175a0(param_2,param_3,1);
      FUN_10ac114d4(param_2,0);
      pppppppuVar7 = *(undefined ********)(param_2 + 800);
      pppppppuVar9 = pppppppuVar7;
      if (((*(char *)(pppppppuVar7 + 4) != '\0') && (((ulong)pppppppuVar7[2] & 1) == 0)) &&
         ((*(byte *)((long)pppppppuVar7 + 0x21) & 1) == 0)) {
        *(undefined1 *)((long)pppppppuVar7 + 0x21) = 1;
        cVar3 = *(char *)((long)pppppppuVar7 + 0x22);
        pppppppuVar9 = (undefined *******)pppppppuVar7[1];
        (*(code *)(*pppppppuVar9)[2])();
        fVar13 = (float)param_1;
        fVar14 = fVar13;
        if ((cVar3 == '\x01') &&
           (fVar14 = *(float *)((long)pppppppuVar7 + 0x3c),
           fVar13 <= *(float *)((long)pppppppuVar7 + 0x3c))) {
          fVar14 = fVar13;
        }
        *(float *)(pppppppuVar7 + 7) = fVar14;
      }
      return pppppppuVar9;
    }
  }
  pppppppuVar9 = (undefined *******)&UNK_10f69bd04;
  FUN_10a00946c();
  pcStack_28 = FUN_10ac17764;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppppuVar12 = pppppppuVar9[0x69];
  puStack_30 = &stack0xfffffffffffffff0;
  if (ppppppuVar12 == (undefined ******)0x0) goto LAB_10ac179e8;
  ppppppuStack_c0 = pppppppuVar9[0x6a];
  if ((undefined *******)ppppppuStack_c0 != (undefined *******)0x0) {
    pppppppuVar7 = (undefined *******)(ppppppuStack_c0 + 1);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pppppppuVar7,0x10);
      if (bVar4) {
        *pppppppuVar7 = (undefined ******)((long)*pppppppuVar7 + 1);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  pppppppuVar7 = (undefined *******)&pppppuStack_98;
  pppppppuVar9 = pppppppuVar9 + 8;
  pppppuStack_c8 = (undefined *****)ppppppuVar12;
  FUN_10ac45bf0();
  pppppppuVar8 = (undefined *******)ppppppuStack_90;
  pppppuVar10 = pppppuStack_98;
  pppppuStack_d8 = pppppuStack_98;
  ppppppuStack_d0 = ppppppuStack_90;
  if (*(char *)(ppppppuVar12 + 8) == '\x01') {
    pppppuVar10 = *ppppppuVar12;
    if ((undefined *******)ppppppuStack_90 != (undefined *******)0x0) {
      pppppppuVar9 = (undefined *******)(ppppppuStack_90 + 1);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pppppppuVar9,0x10);
        if (bVar4) {
          *pppppppuVar9 = (undefined ******)((long)*pppppppuVar9 + 1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    pppppppuVar7 = (undefined *******)&pppppuStack_98;
    (*(code *)pppppuVar10)(pppppppuVar7,ppppppuVar12);
    if ((undefined *******)ppppppuStack_90 != (undefined *******)0x0) {
      pppppppuVar9 = (undefined *******)(ppppppuStack_90 + 1);
      do {
        ppppppuVar11 = *pppppppuVar9;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pppppppuVar9,0x10);
        if (bVar4) {
          *pppppppuVar9 = (undefined ******)((long)ppppppuVar11 + -1);
          cVar3 = ExclusiveMonitorsStatus();
        }
        pppppppuVar8 = (undefined *******)ppppppuStack_90;
      } while (cVar3 != '\0');
LAB_10ac17868:
      if (ppppppuVar11 == (undefined ******)0x0) {
        (*(code *)(*pppppppuVar8)[2])(pppppppuVar8);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        pppppppuVar7 = pppppppuVar8;
      }
    }
  }
  else if (*(char *)(ppppppuVar12 + 8) == '\x02') {
    unaff_x21 = ppppppuVar12;
    FUN_10a688b40();
    if (unaff_x21 == (undefined ******)0x0) {
      pppppppuVar7 = (undefined *******)0x0;
      if (pppppppuVar9 != (undefined *******)0x0) {
        ppppuStack_80 = (undefined ****)ppppppuVar12[1];
        ppppuStack_88 = (undefined ****)*ppppppuVar12;
        if (ppppppuVar12[1] != (undefined *****)0x0) {
          pppppuVar1 = ppppppuVar12[1] + 1;
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(pppppuVar1,0x10);
            if (bVar4) {
              *pppppuVar1 = (undefined ****)((long)*pppppuVar1 + 1);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        pppppuStack_a8 = pppppuVar10;
        ppppppuStack_a0 = (undefined ******)pppppppuVar8;
        if (pppppppuVar8 != (undefined *******)0x0) {
          pppppppuVar7 = pppppppuVar8 + 1;
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(pppppppuVar7,0x10);
            if (bVar4) {
              *pppppppuVar7 = (undefined ******)((long)*pppppppuVar7 + 1);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        pppppuStack_98 = (undefined *****)FUN_10ac45e3c;
        ppppppuStack_90 = (undefined ******)&PTR_FUN_110c5dd38;
        ppppuStack_b8 = (undefined ****)0x0;
        ppppppuStack_b0 = (undefined ******)0x0;
        pppppuStack_78 = pppppuVar10;
        ppppppuStack_70 = (undefined ******)pppppppuVar8;
        if (pppppppuVar8 != (undefined *******)0x0) {
          pppppppuVar7 = pppppppuVar8 + 1;
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(pppppppuVar7,0x10);
            if (bVar4) {
              *pppppppuVar7 = (undefined ******)((long)*pppppppuVar7 + 1);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        ppppppuVar12 = (undefined ******)&ppppuStack_b8;
        unaff_x21 = &pppppuStack_98;
        FUN_10a4634ec(pppppppuVar9,&pppppuStack_98);
        pppppppuVar7 = &ppppppuStack_90;
        (*(code *)*ppppppuStack_90)();
        if (pppppppuVar8 != (undefined *******)0x0) {
          pppppppuVar9 = pppppppuVar8 + 1;
          do {
            ppppppuVar11 = *pppppppuVar9;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(pppppppuVar9,0x10);
            if (bVar4) {
              *pppppppuVar9 = (undefined ******)((long)ppppppuVar11 + -1);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (ppppppuVar11 == (undefined ******)0x0) {
            (*(code *)(*pppppppuVar8)[2])(pppppppuVar8);
            __ZNSt3__119__shared_weak_count14__release_weakEv();
            pppppppuVar7 = pppppppuVar8;
          }
        }
        if ((undefined *******)ppppppuStack_b0 != (undefined *******)0x0) {
          pppppppuVar9 = (undefined *******)(ppppppuStack_b0 + 1);
          do {
            ppppppuVar11 = *pppppppuVar9;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(pppppppuVar9,0x10);
            if (bVar4) {
              *pppppppuVar9 = (undefined ******)((long)ppppppuVar11 + -1);
              cVar3 = ExclusiveMonitorsStatus();
            }
            pppppppuVar8 = (undefined *******)ppppppuStack_b0;
          } while (cVar3 != '\0');
          goto LAB_10ac17868;
        }
      }
    }
    else {
      *unaff_x21 = (undefined *****)
                   CONCAT44((int)((ulong)*unaff_x21 >> 0x20) + 1,(int)*unaff_x21 + 1);
      pppppppuVar7 = (undefined *******)*ppppppuVar12;
      FUN_10ac45c30(pppppppuVar7,&pppppuStack_d8);
      iVar5 = *(int *)((long)unaff_x21 + 4) + -1;
      *(int *)((long)unaff_x21 + 4) = iVar5;
      if (iVar5 == 0) {
        *(undefined4 *)unaff_x21 = 0;
      }
    }
  }
  pppppppuVar9 = (undefined *******)ppppppuStack_d0;
  if ((undefined *******)ppppppuStack_d0 != (undefined *******)0x0) {
    pppppppuVar8 = (undefined *******)(ppppppuStack_d0 + 1);
    do {
      ppppppuVar11 = *pppppppuVar8;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pppppppuVar8,0x10);
      if (bVar4) {
        *pppppppuVar8 = (undefined ******)((long)ppppppuVar11 + -1);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (ppppppuVar11 == (undefined ******)0x0) {
      (*(code *)(*ppppppuStack_d0)[2])(ppppppuStack_d0);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      pppppppuVar7 = pppppppuVar9;
    }
  }
  pppppppuVar8 = (undefined *******)ppppppuStack_c0;
  pppppppuVar9 = pppppppuVar7;
  if ((undefined *******)ppppppuStack_c0 != (undefined *******)0x0) {
    pppppppuVar7 = (undefined *******)(ppppppuStack_c0 + 1);
    do {
      ppppppuVar11 = *pppppppuVar7;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pppppppuVar7,0x10);
      if (bVar4) {
        *pppppppuVar7 = (undefined ******)((long)ppppppuVar11 + -1);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (ppppppuVar11 == (undefined ******)0x0) {
      (*(code *)(*ppppppuStack_c0)[2])(ppppppuStack_c0);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      pppppppuVar9 = pppppppuVar8;
    }
  }
LAB_10ac179e8:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    (*(code *)*ppppppuStack_90)(unaff_x21 + 1);
    FUN_10a37b740(ppppppuVar12 + 2);
    func_0x00010a004dac(&ppppuStack_b8);
    FUN_10a37b740(&pppppuStack_d8);
    func_0x00010ac44d24(&pppppuStack_c8);
    pppppppuVar7 = pppppppuVar9;
    __Unwind_Resume();
    pppppuStack_100 = (undefined *****)ppppppuVar12;
    ppppppuStack_f8 = (undefined ******)pppppppuVar9;
    ppuStack_f0 = &puStack_30;
    pcStack_e8 = FUN_10ac17a88;
    if ((*(byte *)(pppppppuVar7 + 0x5f) >> 4 & 1) == 0) {
      FUN_10a0f2388(&pppppiStack_118,pppppppuVar7 + 0x52);
      if (-1 < (char)bStack_101) {
        uStack_110 = (ulong)bStack_101;
      }
      if (uStack_110 == 4) {
        ppppppiVar2 = (int ******)pppppiStack_118;
        if (-1 < (char)bStack_101) {
          ppppppiVar2 = &pppppiStack_118;
        }
        pppppppuVar9 = (undefined *******)(ulong)(*(int *)ppppppiVar2 != 0x70626577);
      }
      else {
        pppppppuVar9 = (undefined *******)0x1;
      }
      if ((char)bStack_101 < '\0') {
        __ZdlPv(pppppiStack_118);
      }
    }
    else {
      pppppppuVar9 = (undefined *******)0x0;
    }
    return pppppppuVar9;
  }
  return pppppppuVar9;
}



/* Entry: 10ac17764; end: 10ac17a87;  */

undefined ******* FUN_10ac17764(undefined *******param_1)

{
  undefined *****pppppuVar1;
  int ******ppppppiVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined *******pppppppuVar6;
  undefined *******pppppppuVar7;
  undefined *******pppppppuVar8;
  undefined *****pppppuVar9;
  undefined ******ppppppuVar10;
  undefined ******ppppppuVar11;
  undefined ******unaff_x21;
  int *****pppppiStack_f8;
  ulong uStack_f0;
  byte bStack_e1;
  undefined *****pppppuStack_e0;
  undefined ******ppppppuStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined *****pppppuStack_b8;
  undefined ******ppppppuStack_b0;
  undefined *****pppppuStack_a8;
  undefined ******ppppppuStack_a0;
  undefined ****ppppuStack_98;
  undefined ******ppppppuStack_90;
  undefined *****pppppuStack_88;
  undefined ******ppppppuStack_80;
  undefined *****pppppuStack_78;
  undefined ******ppppppuStack_70;
  undefined ****ppppuStack_68;
  undefined ****ppppuStack_60;
  undefined *****pppppuStack_58;
  undefined ******ppppppuStack_50;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppppuVar11 = param_1[0x69];
  if (ppppppuVar11 == (undefined ******)0x0) goto LAB_10ac179e8;
  ppppppuStack_a0 = param_1[0x6a];
  if ((undefined *******)ppppppuStack_a0 != (undefined *******)0x0) {
    pppppppuVar6 = (undefined *******)(ppppppuStack_a0 + 1);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pppppppuVar6,0x10);
      if (bVar4) {
        *pppppppuVar6 = (undefined ******)((long)*pppppppuVar6 + 1);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  pppppppuVar6 = (undefined *******)&pppppuStack_78;
  param_1 = param_1 + 8;
  pppppuStack_a8 = (undefined *****)ppppppuVar11;
  FUN_10ac45bf0();
  pppppppuVar8 = (undefined *******)ppppppuStack_70;
  pppppuVar9 = pppppuStack_78;
  pppppuStack_b8 = pppppuStack_78;
  ppppppuStack_b0 = ppppppuStack_70;
  if (*(char *)(ppppppuVar11 + 8) == '\x01') {
    pppppuVar9 = *ppppppuVar11;
    if ((undefined *******)ppppppuStack_70 != (undefined *******)0x0) {
      pppppppuVar6 = (undefined *******)(ppppppuStack_70 + 1);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pppppppuVar6,0x10);
        if (bVar4) {
          *pppppppuVar6 = (undefined ******)((long)*pppppppuVar6 + 1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    pppppppuVar6 = (undefined *******)&pppppuStack_78;
    (*(code *)pppppuVar9)(pppppppuVar6,ppppppuVar11);
    if ((undefined *******)ppppppuStack_70 != (undefined *******)0x0) {
      pppppppuVar8 = (undefined *******)(ppppppuStack_70 + 1);
      do {
        ppppppuVar10 = *pppppppuVar8;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pppppppuVar8,0x10);
        if (bVar4) {
          *pppppppuVar8 = (undefined ******)((long)ppppppuVar10 + -1);
          cVar3 = ExclusiveMonitorsStatus();
        }
        pppppppuVar7 = (undefined *******)ppppppuStack_70;
      } while (cVar3 != '\0');
LAB_10ac17868:
      if (ppppppuVar10 == (undefined ******)0x0) {
        (*(code *)(*pppppppuVar7)[2])(pppppppuVar7);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        pppppppuVar6 = pppppppuVar7;
      }
    }
  }
  else if (*(char *)(ppppppuVar11 + 8) == '\x02') {
    unaff_x21 = ppppppuVar11;
    FUN_10a688b40();
    if (unaff_x21 == (undefined ******)0x0) {
      pppppppuVar6 = (undefined *******)0x0;
      if (param_1 != (undefined *******)0x0) {
        ppppuStack_60 = (undefined ****)ppppppuVar11[1];
        ppppuStack_68 = (undefined ****)*ppppppuVar11;
        if (ppppppuVar11[1] != (undefined *****)0x0) {
          pppppuVar1 = ppppppuVar11[1] + 1;
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(pppppuVar1,0x10);
            if (bVar4) {
              *pppppuVar1 = (undefined ****)((long)*pppppuVar1 + 1);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        pppppuStack_88 = pppppuVar9;
        ppppppuStack_80 = (undefined ******)pppppppuVar8;
        if (pppppppuVar8 != (undefined *******)0x0) {
          pppppppuVar6 = pppppppuVar8 + 1;
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(pppppppuVar6,0x10);
            if (bVar4) {
              *pppppppuVar6 = (undefined ******)((long)*pppppppuVar6 + 1);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        pppppuStack_78 = (undefined *****)FUN_10ac45e3c;
        ppppppuStack_70 = (undefined ******)&PTR_FUN_110c5dd38;
        ppppuStack_98 = (undefined ****)0x0;
        ppppppuStack_90 = (undefined ******)0x0;
        pppppuStack_58 = pppppuVar9;
        ppppppuStack_50 = (undefined ******)pppppppuVar8;
        if (pppppppuVar8 != (undefined *******)0x0) {
          pppppppuVar6 = pppppppuVar8 + 1;
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(pppppppuVar6,0x10);
            if (bVar4) {
              *pppppppuVar6 = (undefined ******)((long)*pppppppuVar6 + 1);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        ppppppuVar11 = (undefined ******)&ppppuStack_98;
        unaff_x21 = &pppppuStack_78;
        FUN_10a4634ec(param_1,&pppppuStack_78);
        pppppppuVar6 = &ppppppuStack_70;
        (*(code *)*ppppppuStack_70)();
        if (pppppppuVar8 != (undefined *******)0x0) {
          pppppppuVar7 = pppppppuVar8 + 1;
          do {
            ppppppuVar10 = *pppppppuVar7;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(pppppppuVar7,0x10);
            if (bVar4) {
              *pppppppuVar7 = (undefined ******)((long)ppppppuVar10 + -1);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (ppppppuVar10 == (undefined ******)0x0) {
            (*(code *)(*pppppppuVar8)[2])(pppppppuVar8);
            __ZNSt3__119__shared_weak_count14__release_weakEv();
            pppppppuVar6 = pppppppuVar8;
          }
        }
        if ((undefined *******)ppppppuStack_90 != (undefined *******)0x0) {
          pppppppuVar8 = (undefined *******)(ppppppuStack_90 + 1);
          do {
            ppppppuVar10 = *pppppppuVar8;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(pppppppuVar8,0x10);
            if (bVar4) {
              *pppppppuVar8 = (undefined ******)((long)ppppppuVar10 + -1);
              cVar3 = ExclusiveMonitorsStatus();
            }
            pppppppuVar7 = (undefined *******)ppppppuStack_90;
          } while (cVar3 != '\0');
          goto LAB_10ac17868;
        }
      }
    }
    else {
      *unaff_x21 = (undefined *****)
                   CONCAT44((int)((ulong)*unaff_x21 >> 0x20) + 1,(int)*unaff_x21 + 1);
      pppppppuVar6 = (undefined *******)*ppppppuVar11;
      FUN_10ac45c30(pppppppuVar6,&pppppuStack_b8);
      iVar5 = *(int *)((long)unaff_x21 + 4) + -1;
      *(int *)((long)unaff_x21 + 4) = iVar5;
      if (iVar5 == 0) {
        *(undefined4 *)unaff_x21 = 0;
      }
    }
  }
  pppppppuVar8 = (undefined *******)ppppppuStack_b0;
  if ((undefined *******)ppppppuStack_b0 != (undefined *******)0x0) {
    pppppppuVar7 = (undefined *******)(ppppppuStack_b0 + 1);
    do {
      ppppppuVar10 = *pppppppuVar7;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pppppppuVar7,0x10);
      if (bVar4) {
        *pppppppuVar7 = (undefined ******)((long)ppppppuVar10 + -1);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (ppppppuVar10 == (undefined ******)0x0) {
      (*(code *)(*ppppppuStack_b0)[2])(ppppppuStack_b0);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      pppppppuVar6 = pppppppuVar8;
    }
  }
  pppppppuVar8 = (undefined *******)ppppppuStack_a0;
  param_1 = pppppppuVar6;
  if ((undefined *******)ppppppuStack_a0 != (undefined *******)0x0) {
    pppppppuVar6 = (undefined *******)(ppppppuStack_a0 + 1);
    do {
      ppppppuVar10 = *pppppppuVar6;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pppppppuVar6,0x10);
      if (bVar4) {
        *pppppppuVar6 = (undefined ******)((long)ppppppuVar10 + -1);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (ppppppuVar10 == (undefined ******)0x0) {
      (*(code *)(*ppppppuStack_a0)[2])(ppppppuStack_a0);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      param_1 = pppppppuVar8;
    }
  }
LAB_10ac179e8:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    (*(code *)*ppppppuStack_70)(unaff_x21 + 1);
    FUN_10a37b740(ppppppuVar11 + 2);
    func_0x00010a004dac(&ppppuStack_98);
    FUN_10a37b740(&pppppuStack_b8);
    func_0x00010ac44d24(&pppppuStack_a8);
    pppppppuVar6 = param_1;
    __Unwind_Resume();
    pppppuStack_e0 = (undefined *****)ppppppuVar11;
    ppppppuStack_d8 = (undefined ******)param_1;
    puStack_d0 = &stack0xfffffffffffffff0;
    pcStack_c8 = FUN_10ac17a88;
    if ((*(byte *)(pppppppuVar6 + 0x5f) >> 4 & 1) == 0) {
      FUN_10a0f2388(&pppppiStack_f8,pppppppuVar6 + 0x52);
      if (-1 < (char)bStack_e1) {
        uStack_f0 = (ulong)bStack_e1;
      }
      if (uStack_f0 == 4) {
        ppppppiVar2 = (int ******)pppppiStack_f8;
        if (-1 < (char)bStack_e1) {
          ppppppiVar2 = &pppppiStack_f8;
        }
        pppppppuVar6 = (undefined *******)(ulong)(*(int *)ppppppiVar2 != 0x70626577);
      }
      else {
        pppppppuVar6 = (undefined *******)0x1;
      }
      if ((char)bStack_e1 < '\0') {
        __ZdlPv(pppppiStack_f8);
      }
    }
    else {
      pppppppuVar6 = (undefined *******)0x0;
    }
    return pppppppuVar6;
  }
  return param_1;
}



/* Entry: 10ac17a88; end: 10ac17b1f;  */

bool FUN_10ac17a88(long param_1)

{
  int *****pppppiVar1;
  bool bVar2;
  int ****ppppiStack_38;
  ulong uStack_30;
  byte bStack_21;
  
  if ((*(byte *)(param_1 + 0x2f8) >> 4 & 1) == 0) {
    FUN_10a0f2388(&ppppiStack_38,param_1 + 0x290);
    if (-1 < (char)bStack_21) {
      uStack_30 = (ulong)bStack_21;
    }
    if (uStack_30 == 4) {
      pppppiVar1 = (int *****)ppppiStack_38;
      if (-1 < (char)bStack_21) {
        pppppiVar1 = &ppppiStack_38;
      }
      bVar2 = *(int *)pppppiVar1 != 0x70626577;
    }
    else {
      bVar2 = true;
    }
    if ((char)bStack_21 < '\0') {
      __ZdlPv(ppppiStack_38);
    }
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}



/* Entry: 10ac17b20; end: 10ac17b8b;  */

long * FUN_10ac17b20(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  
  plVar2 = param_1;
  (**(code **)(*param_1 + 0xb8))();
  if ((int)plVar2 != 0) {
    (**(code **)(*param_1 + 0xb0))(param_1);
    (**(code **)(*param_1 + 0xb8))(param_1);
    return param_1;
  }
  puVar1 = &UNK_10f69bd4d;
  FUN_10a00946c();
  FUN_10ac114d4();
  if ((((byte)puVar1[0x2f8] >> 4 & 1) == 0) &&
     (*(long *)(puVar1 + 0x3a8) == *(long *)(puVar1 + 0x3b0))) {
    plVar2 = (long *)0x0;
  }
  else {
    FUN_10ac15e20();
    plVar2 = (long *)(ulong)(uint)(int)*(float *)(puVar1 + 0x24);
  }
  return plVar2;
}



/* Entry: 10ac17b8c; end: 10ac17ca7;  */

int FUN_10ac17b8c(long param_1)

{
  int iVar1;
  
  FUN_10ac114d4(param_1,0);
  if (((*(byte *)(param_1 + 0x2f8) >> 4 & 1) == 0) &&
     (*(long *)(param_1 + 0x3a8) == *(long *)(param_1 + 0x3b0))) {
    iVar1 = 0;
  }
  else {
    FUN_10ac15e20();
    iVar1 = (int)*(float *)(param_1 + 0x24);
  }
  return iVar1;
}



/* Entry: 10ac17ca8; end: 10ac17d1f;  */

/* WARNING: Possible PIC construction at 0x00010ac17d5c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010ac17d60) */
/* WARNING: Removing unreachable block (ram,0x00010ac15874) */
/* WARNING: Removing unreachable block (ram,0x00010ac159f8) */
/* WARNING: Removing unreachable block (ram,0x00010ac158b8) */
/* WARNING: Removing unreachable block (ram,0x00010ac158ec) */
/* WARNING: Removing unreachable block (ram,0x00010ac1591c) */
/* WARNING: Removing unreachable block (ram,0x00010ac158f4) */
/* WARNING: Removing unreachable block (ram,0x00010ac158c8) */
/* WARNING: Removing unreachable block (ram,0x00010ac158d0) */
/* WARNING: Removing unreachable block (ram,0x00010ac158dc) */
/* WARNING: Removing unreachable block (ram,0x00010ac15920) */
/* WARNING: Removing unreachable block (ram,0x00010ac15928) */
/* WARNING: Removing unreachable block (ram,0x00010ac15934) */
/* WARNING: Removing unreachable block (ram,0x00010ac15960) */
/* WARNING: Removing unreachable block (ram,0x00010ac15964) */
/* WARNING: Removing unreachable block (ram,0x00010ac1598c) */
/* WARNING: Removing unreachable block (ram,0x00010ac159c4) */
/* WARNING: Removing unreachable block (ram,0x00010ac159d4) */
/* WARNING: Removing unreachable block (ram,0x00010ac159dc) */
/* WARNING: Removing unreachable block (ram,0x00010ac159e4) */
/* WARNING: Removing unreachable block (ram,0x00010ac1596c) */
/* WARNING: Removing unreachable block (ram,0x00010ac15974) */
/* WARNING: Removing unreachable block (ram,0x00010ac1597c) */

undefined8 * FUN_10ac17ca8(long *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  bool bVar3;
  char *pcVar4;
  char *pcVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  undefined8 *extraout_x8;
  char *unaff_x19;
  undefined1 *unaff_x20;
  undefined8 unaff_x21;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 unaff_x22;
  undefined1 *puVar11;
  undefined8 uVar12;
  undefined1 auStack_20 [8];
  undefined1 auStack_18 [8];
  
  puVar11 = &stack0xfffffffffffffff0;
  func_0x000109566bf8(param_1,auStack_18,param_2);
  if (*param_1 != 0) {
    return (undefined8 *)(*param_1 + 0x38);
  }
  pcVar4 = "map::at:  key not found";
  uVar12 = 0x10ac17ce4;
  FUN_109ffdddc();
  puVar2 = auStack_20;
  while( true ) {
    *(undefined1 **)(puVar2 + -0x10) = puVar11;
    *(undefined8 *)(puVar2 + -8) = uVar12;
    puVar8 = puVar2 + -0x18;
    func_0x000109566bf8();
    if (*(long *)pcVar4 != 0) {
      return (undefined8 *)(*(long *)pcVar4 + 0x38);
    }
    pcVar5 = "map::at:  key not found";
    FUN_109ffdddc();
    *(undefined1 **)(puVar2 + -0x40) = unaff_x20;
    *(char **)(puVar2 + -0x38) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x30) = puVar2 + -0x10;
    *(code **)(puVar2 + -0x28) = FUN_10ac17d20;
    puVar11 = puVar2 + -0x30;
    pcVar4 = pcVar5 + 0x358;
    FUN_10ac45eb4();
    if (pcVar5 + 0x360 == pcVar4) break;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(pcVar5 + 0x370,puVar8);
    pcVar4 = pcVar5 + 0x358;
    uVar12 = 0x10ac17d60;
    puVar2 = puVar2 + -0x40;
    unaff_x19 = pcVar5;
    unaff_x20 = puVar8;
  }
  puVar6 = &UNK_10f69bda5;
  FUN_10a00946c();
  *(undefined8 *)(puVar2 + -0x70) = unaff_x22;
  *(undefined8 *)(puVar2 + -0x68) = unaff_x21;
  *(undefined1 **)(puVar2 + -0x60) = puVar8;
  *(char **)(puVar2 + -0x58) = pcVar5;
  *(undefined1 **)(puVar2 + -0x50) = puVar11;
  *(code **)(puVar2 + -0x48) = FUN_10ac17d90;
  *extraout_x8 = 0;
  extraout_x8[1] = 0;
  extraout_x8[2] = 0;
  puVar7 = extraout_x8;
  func_0x000107c31930(extraout_x8,*(undefined8 *)(puVar6 + 0x368));
  puVar9 = *(undefined8 **)(puVar6 + 0x358);
  while (puVar9 != (undefined8 *)(puVar6 + 0x360)) {
    puVar7 = extraout_x8;
    FUN_10a0b4ec0(extraout_x8,puVar9 + 4);
    puVar1 = (undefined8 *)puVar9[1];
    puVar10 = puVar9;
    if ((undefined8 *)puVar9[1] == (undefined8 *)0x0) {
      do {
        puVar9 = (undefined8 *)puVar10[2];
        bVar3 = (undefined8 *)*puVar9 != puVar10;
        puVar10 = puVar9;
      } while (bVar3);
    }
    else {
      do {
        puVar9 = puVar1;
        puVar1 = (undefined8 *)*puVar9;
      } while ((undefined8 *)*puVar9 != (undefined8 *)0x0);
    }
  }
  return puVar7;
}



/* Entry: 10ac17d20; end: 10ac17d8f;  */

/* WARNING: Removing unreachable block (ram,0x00010ac158b8) */
/* WARNING: Removing unreachable block (ram,0x00010ac158ec) */
/* WARNING: Removing unreachable block (ram,0x00010ac1591c) */
/* WARNING: Removing unreachable block (ram,0x00010ac158f4) */
/* WARNING: Removing unreachable block (ram,0x00010ac158c8) */
/* WARNING: Removing unreachable block (ram,0x00010ac158d0) */
/* WARNING: Removing unreachable block (ram,0x00010ac158dc) */
/* WARNING: Removing unreachable block (ram,0x00010ac15920) */
/* WARNING: Removing unreachable block (ram,0x00010ac15928) */
/* WARNING: Removing unreachable block (ram,0x00010ac15934) */
/* WARNING: Removing unreachable block (ram,0x00010ac15960) */
/* WARNING: Removing unreachable block (ram,0x00010ac15964) */
/* WARNING: Removing unreachable block (ram,0x00010ac1596c) */
/* WARNING: Removing unreachable block (ram,0x00010ac15974) */
/* WARNING: Removing unreachable block (ram,0x00010ac1597c) */
/* WARNING: Removing unreachable block (ram,0x00010ac1598c) */
/* WARNING: Removing unreachable block (ram,0x00010ac159c4) */
/* WARNING: Removing unreachable block (ram,0x00010ac159d4) */
/* WARNING: Removing unreachable block (ram,0x00010ac159dc) */
/* WARNING: Removing unreachable block (ram,0x00010ac159e4) */

void FUN_10ac17d20(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 *extraout_x8;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  lVar5 = param_1 + 0x358;
  FUN_10ac45eb4();
  if (param_1 + 0x360 == lVar5) {
    puVar6 = &UNK_10f69bda5;
    FUN_10a00946c();
    *extraout_x8 = 0;
    extraout_x8[1] = 0;
    extraout_x8[2] = 0;
    func_0x000107c31930(extraout_x8,*(undefined8 *)(puVar6 + 0x368));
    puVar7 = *(undefined8 **)(puVar6 + 0x358);
    while (puVar7 != (undefined8 *)(puVar6 + 0x360)) {
      FUN_10a0b4ec0(extraout_x8,puVar7 + 4);
      puVar2 = (undefined8 *)puVar7[1];
      puVar8 = puVar7;
      if ((undefined8 *)puVar7[1] == (undefined8 *)0x0) {
        do {
          puVar7 = (undefined8 *)puVar8[2];
          bVar4 = (undefined8 *)*puVar7 != puVar8;
          puVar8 = puVar7;
        } while (bVar4);
      }
      else {
        do {
          puVar7 = puVar2;
          puVar2 = (undefined8 *)*puVar7;
        } while ((undefined8 *)*puVar7 != (undefined8 *)0x0);
      }
    }
    return;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 0x370,param_2);
  lVar5 = param_1 + 0x358;
  func_0x00010ac17ce4(lVar5,param_1 + 0x370);
  *(long *)(param_1 + 0x388) = lVar5;
  FUN_10ac174f0(param_1);
  FUN_10ac161d0(param_1);
  lVar5 = *(long *)(*(long *)(param_1 + 0x338) + 0xe8);
  lVar1 = *(long *)(*(long *)(param_1 + 0x338) + 0xf0);
  FUN_10ac4068c(&stack0xffffffffffffffb8,lVar5,lVar1,lVar1 - lVar5 >> 3);
  FUN_10a00946c(&UNK_10f69baa6);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10ac15a08);
  (*pcVar3)();
}



/* Entry: 10ac17d90; end: 10ac17e43;  */

void FUN_10ac17d90(undefined8 *param_1,long param_2)

{
  long *plVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  func_0x000107c31930(param_1,*(undefined8 *)(param_2 + 0x368));
  plVar3 = *(long **)(param_2 + 0x358);
  while (plVar3 != (long *)(param_2 + 0x360)) {
    FUN_10a0b4ec0(param_1,plVar3 + 4);
    plVar1 = (long *)plVar3[1];
    plVar4 = plVar3;
    if ((long *)plVar3[1] == (long *)0x0) {
      do {
        plVar3 = (long *)plVar4[2];
        bVar2 = (long *)*plVar3 != plVar4;
        plVar4 = plVar3;
      } while (bVar2);
    }
    else {
      do {
        plVar3 = plVar1;
        plVar1 = (long *)*plVar3;
      } while ((long *)*plVar3 != (long *)0x0);
    }
  }
  return;
}



/* Entry: 10ac17e44; end: 10ac17fc3;  */

/* WARNING: Removing unreachable block (ram,0x00010ac18808) */
/* WARNING: Removing unreachable block (ram,0x00010ac187e8) */
/* WARNING: Removing unreachable block (ram,0x00010ac187c8) */
/* WARNING: Removing unreachable block (ram,0x00010ac18688) */
/* WARNING: Removing unreachable block (ram,0x00010ac187b8) */
/* WARNING: Removing unreachable block (ram,0x00010ac187d8) */
/* WARNING: Removing unreachable block (ram,0x00010ac187f8) */
/* WARNING: Removing unreachable block (ram,0x00010ac18818) */

void FUN_10ac17e44(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  long *plVar1;
  char *pcVar2;
  char *pcVar3;
  undefined8 *puVar4;
  ulong uVar5;
  int *piVar6;
  int *piVar7;
  byte bVar8;
  int iVar9;
  undefined1 **ppuVar10;
  code *pcVar11;
  long lVar12;
  undefined *puVar13;
  undefined8 *puVar14;
  undefined8 *****pppppuVar15;
  undefined8 ****ppppuVar16;
  undefined8 ***pppuVar17;
  undefined8 **ppuVar18;
  char *pcVar19;
  byte bVar20;
  uint uVar21;
  undefined8 *extraout_x8;
  ulong uVar22;
  long *plVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  undefined8 uVar26;
  undefined1 *puStack_400;
  ulong uStack_3f8;
  byte bStack_3e9;
  undefined8 ****ppppuStack_3e8;
  ulong uStack_3e0;
  byte bStack_3d1;
  undefined8 ****ppppuStack_3d0;
  ulong uStack_3c8;
  byte bStack_3b9;
  undefined8 ****appppuStack_3b8 [2];
  char cStack_3a1;
  undefined8 ***pppuStack_3a0;
  undefined8 ***pppuStack_398;
  undefined8 ***pppuStack_390;
  undefined8 **ppuStack_380;
  undefined8 **ppuStack_378;
  undefined8 **ppuStack_370;
  undefined8 *puStack_360;
  undefined8 *puStack_358;
  undefined8 *puStack_350;
  undefined8 uStack_340;
  undefined8 uStack_338;
  long lStack_330;
  undefined8 uStack_320;
  undefined8 uStack_318;
  long lStack_310;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  long lStack_2f0;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  long lStack_2d0;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  long lStack_2b0;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  long lStack_290;
  undefined8 uStack_280;
  undefined8 uStack_278;
  long lStack_270;
  undefined8 uStack_260;
  undefined8 uStack_258;
  long lStack_250;
  undefined8 uStack_240;
  undefined8 uStack_238;
  long lStack_230;
  undefined8 uStack_220;
  undefined8 uStack_218;
  long lStack_210;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  long lStack_1f0;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  long lStack_1d0;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined1 auStack_1a8 [8];
  ulong uStack_1a0;
  byte bStack_191;
  undefined8 ****ppppuStack_190;
  ulong uStack_188;
  byte bStack_179;
  undefined8 ****ppppuStack_178;
  ulong uStack_170;
  byte bStack_161;
  undefined8 ****ppppuStack_160;
  ulong uStack_158;
  byte bStack_149;
  undefined8 ****ppppuStack_148;
  ulong uStack_140;
  byte bStack_131;
  undefined8 ****ppppuStack_130;
  ulong uStack_128;
  byte bStack_119;
  undefined8 ****ppppuStack_118;
  ulong uStack_110;
  byte bStack_101;
  undefined8 uStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a0;
  undefined1 uStack_98;
  undefined8 *puStack_48;
  
  if ((*(byte *)(param_2 + 0x2f8) >> 4 & 1) == 0) {
    bVar20 = *(byte *)((long)param_3 + 0x17);
    uVar22 = param_3[1];
    if (-1 < (char)bVar20) {
      uVar22 = (ulong)bVar20;
    }
    bVar8 = *(byte *)(param_2 + 0x387);
    uVar5 = *(ulong *)(param_2 + 0x378);
    if (-1 < (char)bVar8) {
      uVar5 = (ulong)bVar8;
    }
    if (uVar22 == uVar5) {
      plVar1 = (long *)(param_2 + 0x370);
      puVar24 = (undefined8 *)*param_3;
      if (-1 < (char)bVar20) {
        puVar24 = param_3;
      }
      plVar23 = (long *)*plVar1;
      if (-1 < (char)bVar8) {
        plVar23 = plVar1;
      }
      _memcmp(puVar24,plVar23);
      if ((int)puVar24 == 0) {
        plVar23 = *(long **)(param_2 + 0x388);
        if (plVar23 == (long *)0x0) {
          plVar23 = (long *)(param_2 + 0x358);
          FUN_10ac17ca8(plVar23,plVar1);
        }
        goto LAB_10ac17ee0;
      }
    }
    lVar12 = param_2 + 0x358;
    FUN_10ac45eb4();
    if (param_2 + 0x360 != lVar12) {
      plVar23 = (long *)(lVar12 + 0x38);
LAB_10ac17ee0:
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      func_0x000107c31930(param_1,plVar23[1] - *plVar23 >> 2);
      piVar6 = (int *)*plVar23;
      piVar7 = (int *)plVar23[1];
      while( true ) {
        if (piVar6 == piVar7) {
          return;
        }
        iVar9 = *piVar6;
        uVar22 = (*(long *)(param_2 + 0x3b0) - *(long *)(param_2 + 0x3a8) >> 3) * 0x4ec4ec4ec4ec4ec5
        ;
        if (uVar22 < (ulong)(long)iVar9 || uVar22 - (long)iVar9 == 0) break;
        FUN_10a0b4ec0(param_1,*(long *)(param_2 + 0x3a8) + (long)iVar9 * 0x68 + 0x38);
        piVar6 = piVar6 + 1;
      }
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x10ac17f90);
      (*pcVar11)();
    }
  }
  else {
    FUN_10a00946c(&UNK_10f69bdc4);
  }
  puVar13 = &UNK_10f69bda5;
  FUN_10a00946c();
  puStack_48 = param_1;
  FUN_10a0426d8(&puStack_48);
  __Unwind_Resume();
  if (((byte)puVar13[0x2f8] >> 4 & 1) != 0) {
    puVar13 = &UNK_10f69bdf9;
    FUN_10a00946c();
    FUN_10ac4578c(&puStack_a0);
    __Unwind_Resume();
    pcVar2 = "false";
    pcVar3 = "true";
    pcVar19 = pcVar2;
    if ((*(char *)(*(long *)(puVar13 + 800) + 0x20) == '\x01') &&
       (*(char *)(*(long *)(puVar13 + 800) + 0x10) == '\0')) {
      pcVar19 = pcVar3;
    }
    func_0x000107c2b054(&ppppuStack_118,pcVar19);
    pcVar19 = pcVar3;
    if (*(char *)(*(long *)(puVar13 + 800) + 0x21) == '\0') {
      pcVar19 = pcVar2;
    }
    func_0x000107c2b054(&ppppuStack_130,pcVar19);
    pcVar19 = pcVar3;
    if (*(char *)(*(long *)(puVar13 + 800) + 0x10) == '\0') {
      pcVar19 = pcVar2;
    }
    func_0x000107c2b054(&ppppuStack_148,pcVar19);
    pcVar19 = pcVar3;
    if (*(char *)(*(long *)(puVar13 + 800) + 0x24) == '\0') {
      pcVar19 = pcVar2;
    }
    func_0x000107c2b054(&ppppuStack_160,pcVar19);
    if (*(long *)(puVar13 + 800) == 0) {
      bVar20 = (byte)puVar13[0x2f8] >> 2 & 1;
    }
    else {
      bVar20 = *(byte *)(*(long *)(puVar13 + 800) + 0x23);
    }
    pcVar19 = pcVar3;
    if ((bVar20 & 1) == 0) {
      pcVar19 = pcVar2;
    }
    func_0x000107c2b054(&ppppuStack_178,pcVar19);
    if ((puVar13[0x2f8] & 2) != 0) {
      pcVar2 = pcVar3;
    }
    func_0x000107c2b054(&ppppuStack_190,pcVar2);
    func_0x00010989f98c(auStack_1a8,puVar13 + 0x28);
    uVar22 = uStack_1a0;
    if (-1 < (char)bStack_191) {
      uVar22 = (ulong)bStack_191;
    }
    FUN_10a003c90(appppuStack_3b8,uVar22 + 0xd,&ppppuStack_3d0);
    pppppuVar15 = (undefined8 *****)appppuStack_3b8[0];
    if (-1 < cStack_3a1) {
      pppppuVar15 = appppuStack_3b8;
    }
    if (uVar22 != 0) {
      _memmove(pppppuVar15,auStack_1a8,uVar22);
    }
    puVar24 = (undefined8 *)((long)pppppuVar15 + uVar22);
    *puVar24 = 0x79616c5073692020;
    *(undefined8 *)((long)puVar24 + 5) = 0x203a676e6979616c;
    *(undefined1 *)((long)puVar24 + 0xd) = 0;
    if (-1 < (char)bStack_101) {
      uStack_110 = (ulong)bStack_101;
      ppppuStack_118 = &ppppuStack_118;
    }
    pppppuVar15 = appppuStack_3b8;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (pppppuVar15,ppppuStack_118,uStack_110);
    pppuStack_398 = pppppuVar15[1];
    pppuStack_3a0 = *pppppuVar15;
    pppuStack_390 = pppppuVar15[2];
    pppppuVar15[1] = (undefined8 ****)0x0;
    pppppuVar15[2] = (undefined8 ****)0x0;
    *pppppuVar15 = (undefined8 ****)0x0;
    ppppuVar16 = &pppuStack_3a0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (ppppuVar16,&UNK_10f69be77,0xc);
    ppuStack_378 = ppppuVar16[1];
    ppuStack_380 = *ppppuVar16;
    ppuStack_370 = ppppuVar16[2];
    ppppuVar16[1] = (undefined8 ***)0x0;
    ppppuVar16[2] = (undefined8 ***)0x0;
    *ppppuVar16 = (undefined8 ***)0x0;
    if (-1 < (char)bStack_119) {
      uStack_128 = (ulong)bStack_119;
      ppppuStack_130 = &ppppuStack_130;
    }
    pppuVar17 = &ppuStack_380;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (pppuVar17,ppppuStack_130,uStack_128);
    puStack_358 = pppuVar17[1];
    puStack_360 = *pppuVar17;
    puStack_350 = pppuVar17[2];
    pppuVar17[1] = (undefined8 **)0x0;
    pppuVar17[2] = (undefined8 **)0x0;
    *pppuVar17 = (undefined8 **)0x0;
    ppuVar18 = &puStack_360;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (ppuVar18,&UNK_10f69be84,0xe);
    uStack_338 = ppuVar18[1];
    uStack_340 = *ppuVar18;
    lStack_330 = (long)ppuVar18[2];
    ppuVar18[1] = (undefined8 *)0x0;
    ppuVar18[2] = (undefined8 *)0x0;
    *ppuVar18 = (undefined8 *)0x0;
    if (-1 < (char)bStack_131) {
      uStack_140 = (ulong)bStack_131;
      ppppuStack_148 = &ppppuStack_148;
    }
    puVar24 = &uStack_340;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar24,ppppuStack_148,uStack_140);
    uStack_318 = puVar24[1];
    uStack_320 = *puVar24;
    lStack_310 = puVar24[2];
    puVar24[1] = 0;
    puVar24[2] = 0;
    *puVar24 = 0;
    puVar24 = &uStack_320;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar24,&UNK_10f68ca88,0xe);
    uStack_2f8 = puVar24[1];
    uStack_300 = *puVar24;
    lStack_2f0 = puVar24[2];
    puVar24[1] = 0;
    puVar24[2] = 0;
    *puVar24 = 0;
    if (-1 < (char)bStack_149) {
      uStack_158 = (ulong)bStack_149;
      ppppuStack_160 = &ppppuStack_160;
    }
    puVar24 = &uStack_300;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar24,ppppuStack_160,uStack_158);
    uStack_2d8 = puVar24[1];
    uStack_2e0 = *puVar24;
    lStack_2d0 = puVar24[2];
    puVar24[1] = 0;
    puVar24[2] = 0;
    *puVar24 = 0;
    puVar24 = &uStack_2e0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar24,&UNK_10f69be93,0xe);
    uStack_2b8 = puVar24[1];
    uStack_2c0 = *puVar24;
    lStack_2b0 = puVar24[2];
    puVar24[1] = 0;
    puVar24[2] = 0;
    *puVar24 = 0;
    if (-1 < (char)bStack_161) {
      uStack_170 = (ulong)bStack_161;
      ppppuStack_178 = &ppppuStack_178;
    }
    puVar24 = &uStack_2c0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar24,ppppuStack_178,uStack_170);
    uStack_298 = puVar24[1];
    uStack_2a0 = *puVar24;
    lStack_290 = puVar24[2];
    puVar24[1] = 0;
    puVar24[2] = 0;
    *puVar24 = 0;
    puVar24 = &uStack_2a0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar24,&UNK_10f69bea2,0xe);
    uStack_278 = puVar24[1];
    uStack_280 = *puVar24;
    lStack_270 = puVar24[2];
    puVar24[1] = 0;
    puVar24[2] = 0;
    *puVar24 = 0;
    if (-1 < (char)bStack_179) {
      uStack_188 = (ulong)bStack_179;
      ppppuStack_190 = &ppppuStack_190;
    }
    puVar24 = &uStack_280;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar24,ppppuStack_190,uStack_188);
    uStack_258 = puVar24[1];
    uStack_260 = *puVar24;
    lStack_250 = puVar24[2];
    puVar24[1] = 0;
    puVar24[2] = 0;
    *puVar24 = 0;
    puVar24 = &uStack_260;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar24,&UNK_10f69beb1,0xf);
    uStack_238 = puVar24[1];
    uStack_240 = *puVar24;
    lStack_230 = puVar24[2];
    puVar24[1] = 0;
    puVar24[2] = 0;
    *puVar24 = 0;
    func_0x00010ac1755c(puVar13);
    __ZNSt3__19to_stringEi(&ppppuStack_3d0);
    pppppuVar15 = (undefined8 *****)ppppuStack_3d0;
    if (-1 < (char)bStack_3b9) {
      uStack_3c8 = (ulong)bStack_3b9;
      pppppuVar15 = &ppppuStack_3d0;
    }
    puVar24 = &uStack_240;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar24,pppppuVar15,uStack_3c8);
    uStack_218 = puVar24[1];
    uStack_220 = *puVar24;
    lStack_210 = puVar24[2];
    puVar24[1] = 0;
    puVar24[2] = 0;
    *puVar24 = 0;
    puVar24 = &uStack_220;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar24,&UNK_10f69bec1,0x17);
    uStack_1f8 = puVar24[1];
    uStack_200 = *puVar24;
    lStack_1f0 = puVar24[2];
    puVar24[1] = 0;
    puVar24[2] = 0;
    *puVar24 = 0;
    FUN_10ac114d4(puVar13,0);
    __ZNSt3__19to_stringEi(&ppppuStack_3e8,*(undefined4 *)(puVar13 + 0x390));
    pppppuVar15 = (undefined8 *****)ppppuStack_3e8;
    if (-1 < (char)bStack_3d1) {
      uStack_3e0 = (ulong)bStack_3d1;
      pppppuVar15 = &ppppuStack_3e8;
    }
    puVar24 = &uStack_200;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar24,pppppuVar15,uStack_3e0);
    uStack_1d8 = puVar24[1];
    uStack_1e0 = *puVar24;
    lStack_1d0 = puVar24[2];
    puVar24[1] = 0;
    puVar24[2] = 0;
    *puVar24 = 0;
    puVar24 = &uStack_1e0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar24,&UNK_10f68ca40,0xc);
    uStack_1b8 = puVar24[1];
    uStack_1c0 = *puVar24;
    uStack_1b0 = puVar24[2];
    puVar24[1] = 0;
    puVar24[2] = 0;
    *puVar24 = 0;
    __ZNSt3__19to_stringEf(&puStack_400,*(undefined4 *)(*(long *)(puVar13 + 800) + 0x34));
    ppuVar10 = (undefined1 **)puStack_400;
    if (-1 < (char)bStack_3e9) {
      uStack_3f8 = (ulong)bStack_3e9;
      ppuVar10 = &puStack_400;
    }
    puVar24 = &uStack_1c0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar24,ppuVar10,uStack_3f8);
    uVar26 = *puVar24;
    extraout_x8[1] = puVar24[1];
    *extraout_x8 = uVar26;
    extraout_x8[2] = puVar24[2];
    puVar24[1] = 0;
    puVar24[2] = 0;
    *puVar24 = 0;
    if ((char)bStack_3e9 < '\0') {
      __ZdlPv(puStack_400);
    }
    if (lStack_1d0 < 0) {
      __ZdlPv(uStack_1e0);
    }
    if ((char)bStack_3d1 < '\0') {
      __ZdlPv(ppppuStack_3e8);
    }
    if (lStack_1f0 < 0) {
      __ZdlPv(uStack_200);
    }
    if (lStack_210 < 0) {
      __ZdlPv(uStack_220);
    }
    if ((char)bStack_3b9 < '\0') {
      __ZdlPv(ppppuStack_3d0);
    }
    if (lStack_230 < 0) {
      __ZdlPv(uStack_240);
    }
    if (lStack_250 < 0) {
      __ZdlPv(uStack_260);
    }
    if (lStack_270 < 0) {
      __ZdlPv(uStack_280);
    }
    if (lStack_290 < 0) {
      __ZdlPv(uStack_2a0);
    }
    if (lStack_2b0 < 0) {
      __ZdlPv(uStack_2c0);
    }
    if (lStack_2d0 < 0) {
      __ZdlPv(uStack_2e0);
    }
    if (lStack_2f0 < 0) {
      __ZdlPv(uStack_300);
    }
    if (lStack_310 < 0) {
      __ZdlPv(uStack_320);
    }
    if (lStack_330 < 0) {
      __ZdlPv(uStack_340);
    }
    if ((long)puStack_350 < 0) {
      __ZdlPv(puStack_360);
    }
    if ((long)ppuStack_370 < 0) {
      __ZdlPv(ppuStack_380);
    }
    if ((long)pppuStack_390 < 0) {
      __ZdlPv(pppuStack_3a0);
    }
    if (cStack_3a1 < '\0') {
      __ZdlPv(appppuStack_3b8[0]);
    }
    return;
  }
  puStack_a0 = puVar13 + 0x3a8;
  uStack_98 = 0;
  puVar24 = *(undefined8 **)(puVar13 + 0x3a8);
  puVar25 = *(undefined8 **)(puVar13 + 0x3b0);
  if (puVar24 == puVar25) {
LAB_10ac18084:
    if (puVar24 != puVar25) {
      if (*(char *)((long)puVar24 + 0x67) < '\0') {
        func_0x000107c3192c(&uStack_c0,puVar24[10],puVar24[0xb]);
      }
      else {
        uStack_b8 = puVar24[0xb];
        uStack_c0 = puVar24[10];
        uStack_b0 = puVar24[0xc];
      }
      uVar21 = (uint)(char)uStack_b0._7_1_;
      uVar22 = uStack_b8;
      if (-1 < (int)uVar21) {
        uVar22 = (ulong)uStack_b0._7_1_;
      }
      if (uVar22 != 0) {
        FUN_10ac17d20(puVar13,&uStack_c0);
        FUN_10ac176f0(puVar13,*(undefined4 *)(puVar24 + 6));
        uVar21 = (uint)uStack_b0._7_1_;
      }
      if ((uVar21 >> 7 & 1) != 0) {
        __ZdlPv(uStack_c0);
      }
      uStack_98 = 1;
      FUN_10ac4578c(&puStack_a0);
      return;
    }
  }
  else {
    puVar4 = (undefined8 *)*param_3;
    uVar22 = param_3[1];
    if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
      puVar4 = param_3;
      uVar22 = (ulong)*(byte *)((long)param_3 + 0x17);
    }
    puVar24 = puVar24 + 7;
    do {
      bVar20 = *(byte *)((long)puVar24 + 0x17);
      uVar5 = puVar24[1];
      if (-1 < (char)bVar20) {
        uVar5 = (ulong)bVar20;
      }
      if (uVar5 == uVar22) {
        puVar14 = (undefined8 *)*puVar24;
        if (-1 < (char)bVar20) {
          puVar14 = puVar24;
        }
        _memcmp(puVar14,puVar4,uVar22);
        if ((int)puVar14 == 0) {
          puVar24 = puVar24 + -7;
          goto LAB_10ac18084;
        }
      }
      puVar14 = puVar24 + 6;
      puVar24 = puVar24 + 0xd;
    } while (puVar14 != puVar25);
  }
  uStack_98 = 1;
  FUN_10a00946c(&UNK_10f69be22);
                    /* WARNING: Does not return */
  pcVar11 = (code *)SoftwareBreakpoint(1,0x10ac18080);
  (*pcVar11)();
}



/* Entry: 10ac17fc4; end: 10ac18157;  */

/* WARNING: Removing unreachable block (ram,0x00010ac18808) */
/* WARNING: Removing unreachable block (ram,0x00010ac187e8) */
/* WARNING: Removing unreachable block (ram,0x00010ac187c8) */
/* WARNING: Removing unreachable block (ram,0x00010ac18688) */
/* WARNING: Removing unreachable block (ram,0x00010ac187b8) */
/* WARNING: Removing unreachable block (ram,0x00010ac187d8) */
/* WARNING: Removing unreachable block (ram,0x00010ac187f8) */
/* WARNING: Removing unreachable block (ram,0x00010ac18818) */

void FUN_10ac17fc4(long param_1,undefined8 *param_2)

{
  char *pcVar1;
  char *pcVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 **ppuVar6;
  code *pcVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined8 ****ppppuVar10;
  undefined8 ***pppuVar11;
  undefined8 **ppuVar12;
  char *pcVar13;
  byte bVar14;
  uint uVar15;
  undefined8 *extraout_x8;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  undefined1 *puStack_3b0;
  ulong uStack_3a8;
  byte bStack_399;
  undefined8 ***pppuStack_398;
  ulong uStack_390;
  byte bStack_381;
  undefined8 ***pppuStack_380;
  ulong uStack_378;
  byte bStack_369;
  undefined8 ***apppuStack_368 [2];
  char cStack_351;
  undefined8 **ppuStack_350;
  undefined8 **ppuStack_348;
  undefined8 **ppuStack_340;
  undefined8 *puStack_330;
  undefined8 *puStack_328;
  undefined8 *puStack_320;
  undefined8 uStack_310;
  undefined8 uStack_308;
  long lStack_300;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  long lStack_2e0;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  long lStack_2c0;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  long lStack_2a0;
  undefined8 uStack_290;
  undefined8 uStack_288;
  long lStack_280;
  undefined8 uStack_270;
  undefined8 uStack_268;
  long lStack_260;
  undefined8 uStack_250;
  undefined8 uStack_248;
  long lStack_240;
  undefined8 uStack_230;
  undefined8 uStack_228;
  long lStack_220;
  undefined8 uStack_210;
  undefined8 uStack_208;
  long lStack_200;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  long lStack_1e0;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  long lStack_1c0;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long lStack_1a0;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_180;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined1 auStack_158 [8];
  ulong uStack_150;
  byte bStack_141;
  undefined8 ***pppuStack_140;
  ulong uStack_138;
  byte bStack_129;
  undefined8 ***pppuStack_128;
  ulong uStack_120;
  byte bStack_111;
  undefined8 ***pppuStack_110;
  ulong uStack_108;
  byte bStack_f9;
  undefined8 ***pppuStack_f8;
  ulong uStack_f0;
  byte bStack_e1;
  undefined8 ***pppuStack_e0;
  ulong uStack_d8;
  byte bStack_c9;
  undefined8 ***pppuStack_c8;
  ulong uStack_c0;
  byte bStack_b1;
  undefined8 uStack_70;
  ulong uStack_68;
  undefined8 uStack_60;
  long lStack_50;
  undefined1 uStack_48;
  
  if ((*(byte *)(param_1 + 0x2f8) >> 4 & 1) != 0) {
    puVar9 = &UNK_10f69bdf9;
    FUN_10a00946c();
    FUN_10ac4578c(&lStack_50);
    __Unwind_Resume();
    pcVar1 = "false";
    pcVar2 = "true";
    pcVar13 = pcVar1;
    if ((*(char *)(*(long *)(puVar9 + 800) + 0x20) == '\x01') &&
       (*(char *)(*(long *)(puVar9 + 800) + 0x10) == '\0')) {
      pcVar13 = pcVar2;
    }
    func_0x000107c2b054(&pppuStack_c8,pcVar13);
    pcVar13 = pcVar2;
    if (*(char *)(*(long *)(puVar9 + 800) + 0x21) == '\0') {
      pcVar13 = pcVar1;
    }
    func_0x000107c2b054(&pppuStack_e0,pcVar13);
    pcVar13 = pcVar2;
    if (*(char *)(*(long *)(puVar9 + 800) + 0x10) == '\0') {
      pcVar13 = pcVar1;
    }
    func_0x000107c2b054(&pppuStack_f8,pcVar13);
    pcVar13 = pcVar2;
    if (*(char *)(*(long *)(puVar9 + 800) + 0x24) == '\0') {
      pcVar13 = pcVar1;
    }
    func_0x000107c2b054(&pppuStack_110,pcVar13);
    if (*(long *)(puVar9 + 800) == 0) {
      bVar14 = (byte)puVar9[0x2f8] >> 2 & 1;
    }
    else {
      bVar14 = *(byte *)(*(long *)(puVar9 + 800) + 0x23);
    }
    pcVar13 = pcVar2;
    if ((bVar14 & 1) == 0) {
      pcVar13 = pcVar1;
    }
    func_0x000107c2b054(&pppuStack_128,pcVar13);
    if ((puVar9[0x2f8] & 2) != 0) {
      pcVar1 = pcVar2;
    }
    func_0x000107c2b054(&pppuStack_140,pcVar1);
    func_0x00010989f98c(auStack_158,puVar9 + 0x28);
    uVar5 = uStack_150;
    if (-1 < (char)bStack_141) {
      uVar5 = (ulong)bStack_141;
    }
    FUN_10a003c90(apppuStack_368,uVar5 + 0xd,&pppuStack_380);
    ppppuVar10 = (undefined8 ****)apppuStack_368[0];
    if (-1 < cStack_351) {
      ppppuVar10 = apppuStack_368;
    }
    if (uVar5 != 0) {
      _memmove(ppppuVar10,auStack_158,uVar5);
    }
    puVar16 = (undefined8 *)((long)ppppuVar10 + uVar5);
    *puVar16 = 0x79616c5073692020;
    *(undefined8 *)((long)puVar16 + 5) = 0x203a676e6979616c;
    *(undefined1 *)((long)puVar16 + 0xd) = 0;
    if (-1 < (char)bStack_b1) {
      uStack_c0 = (ulong)bStack_b1;
      pppuStack_c8 = &pppuStack_c8;
    }
    ppppuVar10 = apppuStack_368;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (ppppuVar10,pppuStack_c8,uStack_c0);
    ppuStack_348 = ppppuVar10[1];
    ppuStack_350 = *ppppuVar10;
    ppuStack_340 = ppppuVar10[2];
    ppppuVar10[1] = (undefined8 ***)0x0;
    ppppuVar10[2] = (undefined8 ***)0x0;
    *ppppuVar10 = (undefined8 ***)0x0;
    pppuVar11 = &ppuStack_350;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (pppuVar11,&UNK_10f69be77,0xc);
    puStack_328 = pppuVar11[1];
    puStack_330 = *pppuVar11;
    puStack_320 = pppuVar11[2];
    pppuVar11[1] = (undefined8 **)0x0;
    pppuVar11[2] = (undefined8 **)0x0;
    *pppuVar11 = (undefined8 **)0x0;
    if (-1 < (char)bStack_c9) {
      uStack_d8 = (ulong)bStack_c9;
      pppuStack_e0 = &pppuStack_e0;
    }
    ppuVar12 = &puStack_330;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (ppuVar12,pppuStack_e0,uStack_d8);
    uStack_308 = ppuVar12[1];
    uStack_310 = *ppuVar12;
    lStack_300 = (long)ppuVar12[2];
    ppuVar12[1] = (undefined8 *)0x0;
    ppuVar12[2] = (undefined8 *)0x0;
    *ppuVar12 = (undefined8 *)0x0;
    puVar16 = &uStack_310;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar16,&UNK_10f69be84,0xe);
    uStack_2e8 = puVar16[1];
    uStack_2f0 = *puVar16;
    lStack_2e0 = puVar16[2];
    puVar16[1] = 0;
    puVar16[2] = 0;
    *puVar16 = 0;
    if (-1 < (char)bStack_e1) {
      uStack_f0 = (ulong)bStack_e1;
      pppuStack_f8 = &pppuStack_f8;
    }
    puVar16 = &uStack_2f0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar16,pppuStack_f8,uStack_f0);
    uStack_2c8 = puVar16[1];
    uStack_2d0 = *puVar16;
    lStack_2c0 = puVar16[2];
    puVar16[1] = 0;
    puVar16[2] = 0;
    *puVar16 = 0;
    puVar16 = &uStack_2d0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar16,&UNK_10f68ca88,0xe);
    uStack_2a8 = puVar16[1];
    uStack_2b0 = *puVar16;
    lStack_2a0 = puVar16[2];
    puVar16[1] = 0;
    puVar16[2] = 0;
    *puVar16 = 0;
    if (-1 < (char)bStack_f9) {
      uStack_108 = (ulong)bStack_f9;
      pppuStack_110 = &pppuStack_110;
    }
    puVar16 = &uStack_2b0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar16,pppuStack_110,uStack_108);
    uStack_288 = puVar16[1];
    uStack_290 = *puVar16;
    lStack_280 = puVar16[2];
    puVar16[1] = 0;
    puVar16[2] = 0;
    *puVar16 = 0;
    puVar16 = &uStack_290;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar16,&UNK_10f69be93,0xe);
    uStack_268 = puVar16[1];
    uStack_270 = *puVar16;
    lStack_260 = puVar16[2];
    puVar16[1] = 0;
    puVar16[2] = 0;
    *puVar16 = 0;
    if (-1 < (char)bStack_111) {
      uStack_120 = (ulong)bStack_111;
      pppuStack_128 = &pppuStack_128;
    }
    puVar16 = &uStack_270;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar16,pppuStack_128,uStack_120);
    uStack_248 = puVar16[1];
    uStack_250 = *puVar16;
    lStack_240 = puVar16[2];
    puVar16[1] = 0;
    puVar16[2] = 0;
    *puVar16 = 0;
    puVar16 = &uStack_250;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar16,&UNK_10f69bea2,0xe);
    uStack_228 = puVar16[1];
    uStack_230 = *puVar16;
    lStack_220 = puVar16[2];
    puVar16[1] = 0;
    puVar16[2] = 0;
    *puVar16 = 0;
    if (-1 < (char)bStack_129) {
      uStack_138 = (ulong)bStack_129;
      pppuStack_140 = &pppuStack_140;
    }
    puVar16 = &uStack_230;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar16,pppuStack_140,uStack_138);
    uStack_208 = puVar16[1];
    uStack_210 = *puVar16;
    lStack_200 = puVar16[2];
    puVar16[1] = 0;
    puVar16[2] = 0;
    *puVar16 = 0;
    puVar16 = &uStack_210;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar16,&UNK_10f69beb1,0xf);
    uStack_1e8 = puVar16[1];
    uStack_1f0 = *puVar16;
    lStack_1e0 = puVar16[2];
    puVar16[1] = 0;
    puVar16[2] = 0;
    *puVar16 = 0;
    func_0x00010ac1755c(puVar9);
    __ZNSt3__19to_stringEi(&pppuStack_380);
    ppppuVar10 = (undefined8 ****)pppuStack_380;
    if (-1 < (char)bStack_369) {
      uStack_378 = (ulong)bStack_369;
      ppppuVar10 = &pppuStack_380;
    }
    puVar16 = &uStack_1f0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar16,ppppuVar10,uStack_378);
    uStack_1c8 = puVar16[1];
    uStack_1d0 = *puVar16;
    lStack_1c0 = puVar16[2];
    puVar16[1] = 0;
    puVar16[2] = 0;
    *puVar16 = 0;
    puVar16 = &uStack_1d0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar16,&UNK_10f69bec1,0x17);
    uStack_1a8 = puVar16[1];
    uStack_1b0 = *puVar16;
    lStack_1a0 = puVar16[2];
    puVar16[1] = 0;
    puVar16[2] = 0;
    *puVar16 = 0;
    FUN_10ac114d4(puVar9,0);
    __ZNSt3__19to_stringEi(&pppuStack_398,*(undefined4 *)(puVar9 + 0x390));
    ppppuVar10 = (undefined8 ****)pppuStack_398;
    if (-1 < (char)bStack_381) {
      uStack_390 = (ulong)bStack_381;
      ppppuVar10 = &pppuStack_398;
    }
    puVar16 = &uStack_1b0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar16,ppppuVar10,uStack_390);
    uStack_188 = puVar16[1];
    uStack_190 = *puVar16;
    lStack_180 = puVar16[2];
    puVar16[1] = 0;
    puVar16[2] = 0;
    *puVar16 = 0;
    puVar16 = &uStack_190;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar16,&UNK_10f68ca40,0xc);
    uStack_168 = puVar16[1];
    uStack_170 = *puVar16;
    uStack_160 = puVar16[2];
    puVar16[1] = 0;
    puVar16[2] = 0;
    *puVar16 = 0;
    __ZNSt3__19to_stringEf(&puStack_3b0,*(undefined4 *)(*(long *)(puVar9 + 800) + 0x34));
    ppuVar6 = (undefined1 **)puStack_3b0;
    if (-1 < (char)bStack_399) {
      uStack_3a8 = (ulong)bStack_399;
      ppuVar6 = &puStack_3b0;
    }
    puVar16 = &uStack_170;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar16,ppuVar6,uStack_3a8);
    uVar18 = *puVar16;
    extraout_x8[1] = puVar16[1];
    *extraout_x8 = uVar18;
    extraout_x8[2] = puVar16[2];
    puVar16[1] = 0;
    puVar16[2] = 0;
    *puVar16 = 0;
    if ((char)bStack_399 < '\0') {
      __ZdlPv(puStack_3b0);
    }
    if (lStack_180 < 0) {
      __ZdlPv(uStack_190);
    }
    if ((char)bStack_381 < '\0') {
      __ZdlPv(pppuStack_398);
    }
    if (lStack_1a0 < 0) {
      __ZdlPv(uStack_1b0);
    }
    if (lStack_1c0 < 0) {
      __ZdlPv(uStack_1d0);
    }
    if ((char)bStack_369 < '\0') {
      __ZdlPv(pppuStack_380);
    }
    if (lStack_1e0 < 0) {
      __ZdlPv(uStack_1f0);
    }
    if (lStack_200 < 0) {
      __ZdlPv(uStack_210);
    }
    if (lStack_220 < 0) {
      __ZdlPv(uStack_230);
    }
    if (lStack_240 < 0) {
      __ZdlPv(uStack_250);
    }
    if (lStack_260 < 0) {
      __ZdlPv(uStack_270);
    }
    if (lStack_280 < 0) {
      __ZdlPv(uStack_290);
    }
    if (lStack_2a0 < 0) {
      __ZdlPv(uStack_2b0);
    }
    if (lStack_2c0 < 0) {
      __ZdlPv(uStack_2d0);
    }
    if (lStack_2e0 < 0) {
      __ZdlPv(uStack_2f0);
    }
    if (lStack_300 < 0) {
      __ZdlPv(uStack_310);
    }
    if ((long)puStack_320 < 0) {
      __ZdlPv(puStack_330);
    }
    if ((long)ppuStack_340 < 0) {
      __ZdlPv(ppuStack_350);
    }
    if (cStack_351 < '\0') {
      __ZdlPv(apppuStack_368[0]);
    }
    return;
  }
  lStack_50 = param_1 + 0x3a8;
  uStack_48 = 0;
  puVar16 = *(undefined8 **)(param_1 + 0x3a8);
  puVar17 = *(undefined8 **)(param_1 + 0x3b0);
  if (puVar16 == puVar17) {
LAB_10ac18084:
    if (puVar16 != puVar17) {
      if (*(char *)((long)puVar16 + 0x67) < '\0') {
        func_0x000107c3192c(&uStack_70,puVar16[10],puVar16[0xb]);
      }
      else {
        uStack_68 = puVar16[0xb];
        uStack_70 = puVar16[10];
        uStack_60 = puVar16[0xc];
      }
      uVar15 = (uint)(char)uStack_60._7_1_;
      uVar5 = uStack_68;
      if (-1 < (int)uVar15) {
        uVar5 = (ulong)uStack_60._7_1_;
      }
      if (uVar5 != 0) {
        FUN_10ac17d20(param_1,&uStack_70);
        FUN_10ac176f0(param_1,*(undefined4 *)(puVar16 + 6));
        uVar15 = (uint)uStack_60._7_1_;
      }
      if ((uVar15 >> 7 & 1) != 0) {
        __ZdlPv(uStack_70);
      }
      uStack_48 = 1;
      FUN_10ac4578c(&lStack_50);
      return;
    }
  }
  else {
    puVar3 = (undefined8 *)*param_2;
    uVar5 = param_2[1];
    if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
      puVar3 = param_2;
      uVar5 = (ulong)*(byte *)((long)param_2 + 0x17);
    }
    puVar16 = puVar16 + 7;
    do {
      bVar14 = *(byte *)((long)puVar16 + 0x17);
      uVar4 = puVar16[1];
      if (-1 < (char)bVar14) {
        uVar4 = (ulong)bVar14;
      }
      if (uVar4 == uVar5) {
        puVar8 = (undefined8 *)*puVar16;
        if (-1 < (char)bVar14) {
          puVar8 = puVar16;
        }
        _memcmp(puVar8,puVar3,uVar5);
        if ((int)puVar8 == 0) {
          puVar16 = puVar16 + -7;
          goto LAB_10ac18084;
        }
      }
      puVar8 = puVar16 + 6;
      puVar16 = puVar16 + 0xd;
    } while (puVar8 != puVar17);
  }
  uStack_48 = 1;
  FUN_10a00946c(&UNK_10f69be22);
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10ac18080);
  (*pcVar7)();
}



/* Entry: 10ac18158; end: 10ac18ac3;  */

/* WARNING: Removing unreachable block (ram,0x00010ac18808) */
/* WARNING: Removing unreachable block (ram,0x00010ac187e8) */
/* WARNING: Removing unreachable block (ram,0x00010ac187c8) */
/* WARNING: Removing unreachable block (ram,0x00010ac18688) */
/* WARNING: Removing unreachable block (ram,0x00010ac187b8) */
/* WARNING: Removing unreachable block (ram,0x00010ac187d8) */
/* WARNING: Removing unreachable block (ram,0x00010ac187f8) */
/* WARNING: Removing unreachable block (ram,0x00010ac18818) */

void FUN_10ac18158(undefined8 *param_1,long param_2)

{
  char *pcVar1;
  char *pcVar2;
  ulong uVar3;
  undefined1 **ppuVar4;
  undefined8 ***pppuVar5;
  undefined8 **ppuVar6;
  undefined8 *puVar7;
  char *pcVar8;
  byte bVar9;
  undefined8 uVar10;
  undefined1 *puStack_340;
  ulong uStack_338;
  byte bStack_329;
  undefined8 **ppuStack_328;
  ulong uStack_320;
  byte bStack_311;
  undefined8 **ppuStack_310;
  ulong uStack_308;
  byte bStack_2f9;
  undefined8 **appuStack_2f8 [2];
  char cStack_2e1;
  undefined8 *puStack_2e0;
  undefined8 *puStack_2d8;
  undefined8 *puStack_2d0;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  long lStack_2b0;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  long lStack_290;
  undefined8 uStack_280;
  undefined8 uStack_278;
  long lStack_270;
  undefined8 uStack_260;
  undefined8 uStack_258;
  long lStack_250;
  undefined8 uStack_240;
  undefined8 uStack_238;
  long lStack_230;
  undefined8 uStack_220;
  undefined8 uStack_218;
  long lStack_210;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  long lStack_1f0;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  long lStack_1d0;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  long lStack_1b0;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long lStack_190;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_170;
  undefined8 uStack_160;
  undefined8 uStack_158;
  long lStack_150;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_130;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 auStack_e8 [8];
  ulong uStack_e0;
  byte bStack_d1;
  undefined8 **ppuStack_d0;
  ulong uStack_c8;
  byte bStack_b9;
  undefined8 **ppuStack_b8;
  ulong uStack_b0;
  byte bStack_a1;
  undefined8 **ppuStack_a0;
  ulong uStack_98;
  byte bStack_89;
  undefined8 **ppuStack_88;
  ulong uStack_80;
  byte bStack_71;
  undefined8 **ppuStack_70;
  ulong uStack_68;
  byte bStack_59;
  undefined8 **ppuStack_58;
  ulong uStack_50;
  byte bStack_41;
  
  pcVar1 = "false";
  pcVar2 = "true";
  pcVar8 = pcVar1;
  if ((*(char *)(*(long *)(param_2 + 800) + 0x20) == '\x01') &&
     (*(char *)(*(long *)(param_2 + 800) + 0x10) == '\0')) {
    pcVar8 = pcVar2;
  }
  func_0x000107c2b054(&ppuStack_58,pcVar8);
  pcVar8 = pcVar2;
  if (*(char *)(*(long *)(param_2 + 800) + 0x21) == '\0') {
    pcVar8 = pcVar1;
  }
  func_0x000107c2b054(&ppuStack_70,pcVar8);
  pcVar8 = pcVar2;
  if (*(char *)(*(long *)(param_2 + 800) + 0x10) == '\0') {
    pcVar8 = pcVar1;
  }
  func_0x000107c2b054(&ppuStack_88,pcVar8);
  pcVar8 = pcVar2;
  if (*(char *)(*(long *)(param_2 + 800) + 0x24) == '\0') {
    pcVar8 = pcVar1;
  }
  func_0x000107c2b054(&ppuStack_a0,pcVar8);
  if (*(long *)(param_2 + 800) == 0) {
    bVar9 = *(byte *)(param_2 + 0x2f8) >> 2 & 1;
  }
  else {
    bVar9 = *(byte *)(*(long *)(param_2 + 800) + 0x23);
  }
  pcVar8 = pcVar2;
  if ((bVar9 & 1) == 0) {
    pcVar8 = pcVar1;
  }
  func_0x000107c2b054(&ppuStack_b8,pcVar8);
  if ((*(byte *)(param_2 + 0x2f8) & 2) != 0) {
    pcVar1 = pcVar2;
  }
  func_0x000107c2b054(&ppuStack_d0,pcVar1);
  func_0x00010989f98c(auStack_e8,param_2 + 0x28);
  uVar3 = uStack_e0;
  if (-1 < (char)bStack_d1) {
    uVar3 = (ulong)bStack_d1;
  }
  FUN_10a003c90(appuStack_2f8,uVar3 + 0xd,&ppuStack_310);
  pppuVar5 = (undefined8 ***)appuStack_2f8[0];
  if (-1 < cStack_2e1) {
    pppuVar5 = appuStack_2f8;
  }
  if (uVar3 != 0) {
    _memmove(pppuVar5,auStack_e8,uVar3);
  }
  puVar7 = (undefined8 *)((long)pppuVar5 + uVar3);
  *puVar7 = 0x79616c5073692020;
  *(undefined8 *)((long)puVar7 + 5) = 0x203a676e6979616c;
  *(undefined1 *)((long)puVar7 + 0xd) = 0;
  if (-1 < (char)bStack_41) {
    uStack_50 = (ulong)bStack_41;
    ppuStack_58 = &ppuStack_58;
  }
  pppuVar5 = appuStack_2f8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (pppuVar5,ppuStack_58,uStack_50);
  puStack_2d8 = pppuVar5[1];
  puStack_2e0 = *pppuVar5;
  puStack_2d0 = pppuVar5[2];
  pppuVar5[1] = (undefined8 **)0x0;
  pppuVar5[2] = (undefined8 **)0x0;
  *pppuVar5 = (undefined8 **)0x0;
  ppuVar6 = &puStack_2e0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppuVar6,&UNK_10f69be77,0xc);
  uStack_2b8 = ppuVar6[1];
  uStack_2c0 = *ppuVar6;
  lStack_2b0 = (long)ppuVar6[2];
  ppuVar6[1] = (undefined8 *)0x0;
  ppuVar6[2] = (undefined8 *)0x0;
  *ppuVar6 = (undefined8 *)0x0;
  if (-1 < (char)bStack_59) {
    uStack_68 = (ulong)bStack_59;
    ppuStack_70 = &ppuStack_70;
  }
  puVar7 = &uStack_2c0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar7,ppuStack_70,uStack_68);
  uStack_298 = puVar7[1];
  uStack_2a0 = *puVar7;
  lStack_290 = puVar7[2];
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  puVar7 = &uStack_2a0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar7,&UNK_10f69be84,0xe);
  uStack_278 = puVar7[1];
  uStack_280 = *puVar7;
  lStack_270 = puVar7[2];
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  if (-1 < (char)bStack_71) {
    uStack_80 = (ulong)bStack_71;
    ppuStack_88 = &ppuStack_88;
  }
  puVar7 = &uStack_280;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar7,ppuStack_88,uStack_80);
  uStack_258 = puVar7[1];
  uStack_260 = *puVar7;
  lStack_250 = puVar7[2];
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  puVar7 = &uStack_260;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar7,&UNK_10f68ca88,0xe);
  uStack_238 = puVar7[1];
  uStack_240 = *puVar7;
  lStack_230 = puVar7[2];
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  if (-1 < (char)bStack_89) {
    uStack_98 = (ulong)bStack_89;
    ppuStack_a0 = &ppuStack_a0;
  }
  puVar7 = &uStack_240;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar7,ppuStack_a0,uStack_98);
  uStack_218 = puVar7[1];
  uStack_220 = *puVar7;
  lStack_210 = puVar7[2];
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  puVar7 = &uStack_220;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar7,&UNK_10f69be93,0xe);
  uStack_1f8 = puVar7[1];
  uStack_200 = *puVar7;
  lStack_1f0 = puVar7[2];
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  if (-1 < (char)bStack_a1) {
    uStack_b0 = (ulong)bStack_a1;
    ppuStack_b8 = &ppuStack_b8;
  }
  puVar7 = &uStack_200;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar7,ppuStack_b8,uStack_b0);
  uStack_1d8 = puVar7[1];
  uStack_1e0 = *puVar7;
  lStack_1d0 = puVar7[2];
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  puVar7 = &uStack_1e0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar7,&UNK_10f69bea2,0xe);
  uStack_1b8 = puVar7[1];
  uStack_1c0 = *puVar7;
  lStack_1b0 = puVar7[2];
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  if (-1 < (char)bStack_b9) {
    uStack_c8 = (ulong)bStack_b9;
    ppuStack_d0 = &ppuStack_d0;
  }
  puVar7 = &uStack_1c0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar7,ppuStack_d0,uStack_c8);
  uStack_198 = puVar7[1];
  uStack_1a0 = *puVar7;
  lStack_190 = puVar7[2];
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  puVar7 = &uStack_1a0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar7,&UNK_10f69beb1,0xf);
  uStack_178 = puVar7[1];
  uStack_180 = *puVar7;
  lStack_170 = puVar7[2];
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  func_0x00010ac1755c(param_2);
  __ZNSt3__19to_stringEi(&ppuStack_310);
  pppuVar5 = (undefined8 ***)ppuStack_310;
  if (-1 < (char)bStack_2f9) {
    uStack_308 = (ulong)bStack_2f9;
    pppuVar5 = &ppuStack_310;
  }
  puVar7 = &uStack_180;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar7,pppuVar5,uStack_308);
  uStack_158 = puVar7[1];
  uStack_160 = *puVar7;
  lStack_150 = puVar7[2];
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  puVar7 = &uStack_160;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar7,&UNK_10f69bec1,0x17);
  uStack_138 = puVar7[1];
  uStack_140 = *puVar7;
  lStack_130 = puVar7[2];
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  FUN_10ac114d4(param_2,0);
  __ZNSt3__19to_stringEi(&ppuStack_328,*(undefined4 *)(param_2 + 0x390));
  pppuVar5 = (undefined8 ***)ppuStack_328;
  if (-1 < (char)bStack_311) {
    uStack_320 = (ulong)bStack_311;
    pppuVar5 = &ppuStack_328;
  }
  puVar7 = &uStack_140;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar7,pppuVar5,uStack_320);
  uStack_118 = puVar7[1];
  uStack_120 = *puVar7;
  lStack_110 = puVar7[2];
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  puVar7 = &uStack_120;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar7,&UNK_10f68ca40,0xc);
  uStack_f8 = puVar7[1];
  uStack_100 = *puVar7;
  uStack_f0 = puVar7[2];
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  __ZNSt3__19to_stringEf(&puStack_340,*(undefined4 *)(*(long *)(param_2 + 800) + 0x34));
  ppuVar4 = (undefined1 **)puStack_340;
  if (-1 < (char)bStack_329) {
    uStack_338 = (ulong)bStack_329;
    ppuVar4 = &puStack_340;
  }
  puVar7 = &uStack_100;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar7,ppuVar4,uStack_338);
  uVar10 = *puVar7;
  param_1[1] = puVar7[1];
  *param_1 = uVar10;
  param_1[2] = puVar7[2];
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  if ((char)bStack_329 < '\0') {
    __ZdlPv(puStack_340);
  }
  if (lStack_110 < 0) {
    __ZdlPv(uStack_120);
  }
  if ((char)bStack_311 < '\0') {
    __ZdlPv(ppuStack_328);
  }
  if (lStack_130 < 0) {
    __ZdlPv(uStack_140);
  }
  if (lStack_150 < 0) {
    __ZdlPv(uStack_160);
  }
  if ((char)bStack_2f9 < '\0') {
    __ZdlPv(ppuStack_310);
  }
  if (lStack_170 < 0) {
    __ZdlPv(uStack_180);
  }
  if (lStack_190 < 0) {
    __ZdlPv(uStack_1a0);
  }
  if (lStack_1b0 < 0) {
    __ZdlPv(uStack_1c0);
  }
  if (lStack_1d0 < 0) {
    __ZdlPv(uStack_1e0);
  }
  if (lStack_1f0 < 0) {
    __ZdlPv(uStack_200);
  }
  if (lStack_210 < 0) {
    __ZdlPv(uStack_220);
  }
  if (lStack_230 < 0) {
    __ZdlPv(uStack_240);
  }
  if (lStack_250 < 0) {
    __ZdlPv(uStack_260);
  }
  if (lStack_270 < 0) {
    __ZdlPv(uStack_280);
  }
  if (lStack_290 < 0) {
    __ZdlPv(uStack_2a0);
  }
  if (lStack_2b0 < 0) {
    __ZdlPv(uStack_2c0);
  }
  if ((long)puStack_2d0 < 0) {
    __ZdlPv(puStack_2e0);
  }
  if (cStack_2e1 < '\0') {
    __ZdlPv(appuStack_2f8[0]);
  }
  return;
}



/* Entry: 10ac18ac4; end: 10ac18ae7;  */

/* WARNING: Removing unreachable block (ram,0x00010ac18808) */
/* WARNING: Removing unreachable block (ram,0x00010ac187e8) */
/* WARNING: Removing unreachable block (ram,0x00010ac187c8) */
/* WARNING: Removing unreachable block (ram,0x00010ac18688) */
/* WARNING: Removing unreachable block (ram,0x00010ac187b8) */
/* WARNING: Removing unreachable block (ram,0x00010ac187d8) */
/* WARNING: Removing unreachable block (ram,0x00010ac187f8) */
/* WARNING: Removing unreachable block (ram,0x00010ac18818) */

void FUN_10ac18ac4(undefined8 *param_1,long param_2)

{
  char *pcVar1;
  char *pcVar2;
  ulong uVar3;
  undefined1 **ppuVar4;
  undefined8 ***pppuVar5;
  undefined8 **ppuVar6;
  undefined8 *puVar7;
  char *pcVar8;
  byte bVar9;
  undefined8 uVar10;
  undefined1 *puStack_340;
  ulong uStack_338;
  byte bStack_329;
  undefined8 **ppuStack_328;
  ulong uStack_320;
  byte bStack_311;
  undefined8 **ppuStack_310;
  ulong uStack_308;
  byte bStack_2f9;
  undefined8 **appuStack_2f8 [2];
  char cStack_2e1;
  undefined8 *puStack_2e0;
  undefined8 *puStack_2d8;
  undefined8 *puStack_2d0;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  long lStack_2b0;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  long lStack_290;
  undefined8 uStack_280;
  undefined8 uStack_278;
  long lStack_270;
  undefined8 uStack_260;
  undefined8 uStack_258;
  long lStack_250;
  undefined8 uStack_240;
  undefined8 uStack_238;
  long lStack_230;
  undefined8 uStack_220;
  undefined8 uStack_218;
  long lStack_210;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  long lStack_1f0;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  long lStack_1d0;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  long lStack_1b0;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long lStack_190;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_170;
  undefined8 uStack_160;
  undefined8 uStack_158;
  long lStack_150;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_130;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 auStack_e8 [8];
  ulong uStack_e0;
  byte bStack_d1;
  undefined8 **ppuStack_d0;
  ulong uStack_c8;
  byte bStack_b9;
  undefined8 **ppuStack_b8;
  ulong uStack_b0;
  byte bStack_a1;
  undefined8 **ppuStack_a0;
  ulong uStack_98;
  byte bStack_89;
  undefined8 **ppuStack_88;
  ulong uStack_80;
  byte bStack_71;
  undefined8 **ppuStack_70;
  ulong uStack_68;
  byte bStack_59;
  undefined8 **ppuStack_58;
  ulong uStack_50;
  byte bStack_41;
  
  pcVar1 = "false";
  pcVar2 = "true";
  pcVar8 = pcVar1;
  if ((*(char *)(*(long *)(param_2 + 0x2f8) + 0x20) == '\x01') &&
     (*(char *)(*(long *)(param_2 + 0x2f8) + 0x10) == '\0')) {
    pcVar8 = pcVar2;
  }
  func_0x000107c2b054(&ppuStack_58,pcVar8);
  pcVar8 = pcVar2;
  if (*(char *)(*(long *)(param_2 + 0x2f8) + 0x21) == '\0') {
    pcVar8 = pcVar1;
  }
  func_0x000107c2b054(&ppuStack_70,pcVar8);
  pcVar8 = pcVar2;
  if (*(char *)(*(long *)(param_2 + 0x2f8) + 0x10) == '\0') {
    pcVar8 = pcVar1;
  }
  func_0x000107c2b054(&ppuStack_88,pcVar8);
  pcVar8 = pcVar2;
  if (*(char *)(*(long *)(param_2 + 0x2f8) + 0x24) == '\0') {
    pcVar8 = pcVar1;
  }
  func_0x000107c2b054(&ppuStack_a0,pcVar8);
  if (*(long *)(param_2 + 0x2f8) == 0) {
    bVar9 = *(byte *)(param_2 + 0x2d0) >> 2 & 1;
  }
  else {
    bVar9 = *(byte *)(*(long *)(param_2 + 0x2f8) + 0x23);
  }
  pcVar8 = pcVar2;
  if ((bVar9 & 1) == 0) {
    pcVar8 = pcVar1;
  }
  func_0x000107c2b054(&ppuStack_b8,pcVar8);
  if ((*(byte *)(param_2 + 0x2d0) & 2) != 0) {
    pcVar1 = pcVar2;
  }
  func_0x000107c2b054(&ppuStack_d0,pcVar1);
  func_0x00010989f98c(auStack_e8,param_2);
  uVar3 = uStack_e0;
  if (-1 < (char)bStack_d1) {
    uVar3 = (ulong)bStack_d1;
  }
  FUN_10a003c90(appuStack_2f8,uVar3 + 0xd,&ppuStack_310);
  pppuVar5 = (undefined8 ***)appuStack_2f8[0];
  if (-1 < cStack_2e1) {
    pppuVar5 = appuStack_2f8;
  }
  if (uVar3 != 0) {
    _memmove(pppuVar5,auStack_e8,uVar3);
  }
  puVar7 = (undefined8 *)((long)pppuVar5 + uVar3);
  *puVar7 = 0x79616c5073692020;
  *(undefined8 *)((long)puVar7 + 5) = 0x203a676e6979616c;
  *(undefined1 *)((long)puVar7 + 0xd) = 0;
  if (-1 < (char)bStack_41) {
    uStack_50 = (ulong)bStack_41;
    ppuStack_58 = &ppuStack_58;
  }
  pppuVar5 = appuStack_2f8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (pppuVar5,ppuStack_58,uStack_50);
  puStack_2d8 = pppuVar5[1];
  puStack_2e0 = *pppuVar5;
  puStack_2d0 = pppuVar5[2];
  pppuVar5[1] = (undefined8 **)0x0;
  pppuVar5[2] = (undefined8 **)0x0;
  *pppuVar5 = (undefined8 **)0x0;
  ppuVar6 = &puStack_2e0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppuVar6,&UNK_10f69be77,0xc);
  uStack_2b8 = ppuVar6[1];
  uStack_2c0 = *ppuVar6;
  lStack_2b0 = (long)ppuVar6[2];
  ppuVar6[1] = (undefined8 *)0x0;
  ppuVar6[2] = (undefined8 *)0x0;
  *ppuVar6 = (undefined8 *)0x0;
  if (-1 < (char)bStack_59) {
    uStack_68 = (ulong)bStack_59;
    ppuStack_70 = &ppuStack_70;
  }
  puVar7 = &uStack_2c0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar7,ppuStack_70,uStack_68);
  uStack_298 = puVar7[1];
  uStack_2a0 = *puVar7;
  lStack_290 = puVar7[2];
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  puVar7 = &uStack_2a0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar7,&UNK_10f69be84,0xe);
  uStack_278 = puVar7[1];
  uStack_280 = *puVar7;
  lStack_270 = puVar7[2];
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  if (-1 < (char)bStack_71) {
    uStack_80 = (ulong)bStack_71;
    ppuStack_88 = &ppuStack_88;
  }
  puVar7 = &uStack_280;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar7,ppuStack_88,uStack_80);
  uStack_258 = puVar7[1];
  uStack_260 = *puVar7;
  lStack_250 = puVar7[2];
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  puVar7 = &uStack_260;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar7,&UNK_10f68ca88,0xe);
  uStack_238 = puVar7[1];
  uStack_240 = *puVar7;
  lStack_230 = puVar7[2];
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  if (-1 < (char)bStack_89) {
    uStack_98 = (ulong)bStack_89;
    ppuStack_a0 = &ppuStack_a0;
  }
  puVar7 = &uStack_240;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar7,ppuStack_a0,uStack_98);
  uStack_218 = puVar7[1];
  uStack_220 = *puVar7;
  lStack_210 = puVar7[2];
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  puVar7 = &uStack_220;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar7,&UNK_10f69be93,0xe);
  uStack_1f8 = puVar7[1];
  uStack_200 = *puVar7;
  lStack_1f0 = puVar7[2];
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  if (-1 < (char)bStack_a1) {
    uStack_b0 = (ulong)bStack_a1;
    ppuStack_b8 = &ppuStack_b8;
  }
  puVar7 = &uStack_200;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar7,ppuStack_b8,uStack_b0);
  uStack_1d8 = puVar7[1];
  uStack_1e0 = *puVar7;
  lStack_1d0 = puVar7[2];
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  puVar7 = &uStack_1e0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar7,&UNK_10f69bea2,0xe);
  uStack_1b8 = puVar7[1];
  uStack_1c0 = *puVar7;
  lStack_1b0 = puVar7[2];
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  if (-1 < (char)bStack_b9) {
    uStack_c8 = (ulong)bStack_b9;
    ppuStack_d0 = &ppuStack_d0;
  }
  puVar7 = &uStack_1c0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar7,ppuStack_d0,uStack_c8);
  uStack_198 = puVar7[1];
  uStack_1a0 = *puVar7;
  lStack_190 = puVar7[2];
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  puVar7 = &uStack_1a0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar7,&UNK_10f69beb1,0xf);
  uStack_178 = puVar7[1];
  uStack_180 = *puVar7;
  lStack_170 = puVar7[2];
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  func_0x00010ac1755c(param_2 + -0x28);
  __ZNSt3__19to_stringEi(&ppuStack_310);
  pppuVar5 = (undefined8 ***)ppuStack_310;
  if (-1 < (char)bStack_2f9) {
    uStack_308 = (ulong)bStack_2f9;
    pppuVar5 = &ppuStack_310;
  }
  puVar7 = &uStack_180;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar7,pppuVar5,uStack_308);
  uStack_158 = puVar7[1];
  uStack_160 = *puVar7;
  lStack_150 = puVar7[2];
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  puVar7 = &uStack_160;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar7,&UNK_10f69bec1,0x17);
  uStack_138 = puVar7[1];
  uStack_140 = *puVar7;
  lStack_130 = puVar7[2];
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  FUN_10ac114d4(param_2 + -0x28,0);
  __ZNSt3__19to_stringEi(&ppuStack_328,*(undefined4 *)(param_2 + 0x368));
  pppuVar5 = (undefined8 ***)ppuStack_328;
  if (-1 < (char)bStack_311) {
    uStack_320 = (ulong)bStack_311;
    pppuVar5 = &ppuStack_328;
  }
  puVar7 = &uStack_140;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar7,pppuVar5,uStack_320);
  uStack_118 = puVar7[1];
  uStack_120 = *puVar7;
  lStack_110 = puVar7[2];
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  puVar7 = &uStack_120;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar7,&UNK_10f68ca40,0xc);
  uStack_f8 = puVar7[1];
  uStack_100 = *puVar7;
  uStack_f0 = puVar7[2];
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  __ZNSt3__19to_stringEf(&puStack_340,*(undefined4 *)(*(long *)(param_2 + 0x2f8) + 0x34));
  ppuVar4 = (undefined1 **)puStack_340;
  if (-1 < (char)bStack_329) {
    uStack_338 = (ulong)bStack_329;
    ppuVar4 = &puStack_340;
  }
  puVar7 = &uStack_100;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar7,ppuVar4,uStack_338);
  uVar10 = *puVar7;
  param_1[1] = puVar7[1];
  *param_1 = uVar10;
  param_1[2] = puVar7[2];
  puVar7[1] = 0;
  puVar7[2] = 0;
  *puVar7 = 0;
  if ((char)bStack_329 < '\0') {
    __ZdlPv(puStack_340);
  }
  if (lStack_110 < 0) {
    __ZdlPv(uStack_120);
  }
  if ((char)bStack_311 < '\0') {
    __ZdlPv(ppuStack_328);
  }
  if (lStack_130 < 0) {
    __ZdlPv(uStack_140);
  }
  if (lStack_150 < 0) {
    __ZdlPv(uStack_160);
  }
  if ((char)bStack_2f9 < '\0') {
    __ZdlPv(ppuStack_310);
  }
  if (lStack_170 < 0) {
    __ZdlPv(uStack_180);
  }
  if (lStack_190 < 0) {
    __ZdlPv(uStack_1a0);
  }
  if (lStack_1b0 < 0) {
    __ZdlPv(uStack_1c0);
  }
  if (lStack_1d0 < 0) {
    __ZdlPv(uStack_1e0);
  }
  if (lStack_1f0 < 0) {
    __ZdlPv(uStack_200);
  }
  if (lStack_210 < 0) {
    __ZdlPv(uStack_220);
  }
  if (lStack_230 < 0) {
    __ZdlPv(uStack_240);
  }
  if (lStack_250 < 0) {
    __ZdlPv(uStack_260);
  }
  if (lStack_270 < 0) {
    __ZdlPv(uStack_280);
  }
  if (lStack_290 < 0) {
    __ZdlPv(uStack_2a0);
  }
  if (lStack_2b0 < 0) {
    __ZdlPv(uStack_2c0);
  }
  if ((long)puStack_2d0 < 0) {
    __ZdlPv(puStack_2e0);
  }
  if (cStack_2e1 < '\0') {
    __ZdlPv(appuStack_2f8[0]);
  }
  return;
}



/* Entry: 10ac18ae8; end: 10ac18cc7;  */

void FUN_10ac18ae8(byte *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  byte *pbVar4;
  long *plVar5;
  long *plVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  if ((*(long *)(param_1 + 600) != 0) && (*(long *)(*(long *)(param_1 + 0x250) + 0x10) != 0)) {
    pbVar4 = param_1;
    FUN_10ac15e20();
    plVar11 = *(long **)(param_1 + 0x250);
    if (plVar11 != (long *)0x0) {
      fVar16 = *(float *)(pbVar4 + 4);
      fVar17 = *(float *)(pbVar4 + 8);
      fVar15 = *(float *)(pbVar4 + 0xc);
      fVar18 = *(float *)(pbVar4 + 0x10);
      do {
        plVar9 = (long *)plVar11[2];
        iVar14 = *(int *)plVar9[3];
        iVar7 = ((int *)plVar9[3])[3];
        plVar5 = (long *)plVar9[1];
        if ((plVar5 != (long *)0x0) &&
           (__ZNSt3__119__shared_weak_count4lockEv(), plVar5 != (long *)0x0)) {
          lVar10 = *plVar9;
          if (lVar10 != 0) {
            plVar12 = *(long **)(param_1 + 0x448);
            for (plVar9 = *(long **)(param_1 + 0x440); plVar9 != plVar12; plVar9 = plVar9 + 7) {
              plVar6 = (long *)plVar9[1];
              if ((plVar6 != (long *)0x0) &&
                 (__ZNSt3__119__shared_weak_count4lockEv(), plVar6 != (long *)0x0)) {
                lVar13 = *plVar9;
                plVar1 = plVar6 + 1;
                do {
                  lVar8 = *plVar1;
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                  if (bVar3) {
                    *plVar1 = lVar8 + -1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
                if (lVar8 == 0) {
                  (**(code **)(*plVar6 + 0x10))(plVar6);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
                }
                if (lVar13 == lVar10) {
                  plVar9 = plVar9 + 2;
                  FUN_10ac45fb8(plVar9,*(undefined4 *)(pbVar4 + 0x2c));
                  if (plVar9 != (long *)0x0) {
                    iVar14 = *(int *)((long)plVar9 + 0x14);
                    iVar7 = (int)plVar9[4];
                  }
                  break;
                }
              }
            }
          }
          plVar9 = plVar5 + 1;
          do {
            lVar10 = *plVar9;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar3) {
              *plVar9 = lVar10 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar10 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
          }
        }
        iVar7 = (int)(((float)iVar7 - fVar17) - fVar18);
        lVar10 = plVar11[2];
        *(ulong *)(lVar10 + 0x4c) = CONCAT44(iVar7,(int)(fVar16 + (float)iVar14));
        *(ulong *)(lVar10 + 0x54) =
             CONCAT44(iVar7 + (int)fVar18,(int)(fVar16 + (float)iVar14) + (int)fVar15);
        *(byte *)(plVar11[2] + 0x5c) = *pbVar4 & 1;
        plVar11 = (long *)*plVar11;
      } while (plVar11 != (long *)0x0);
    }
  }
  return;
}



/* Entry: 10ac18cc8; end: 10ac18d63;  */

long * FUN_10ac18cc8(long param_1)

{
  int iVar1;
  long *plVar2;
  undefined *puVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  
  if ((*(byte *)(param_1 + 0x2f8) >> 4 & 1) == 0) {
    plVar5 = *(long **)(param_1 + 0x3c0);
    plVar6 = *(long **)(param_1 + 0x3c8);
    if (plVar5 != plVar6) {
      plVar7 = (long *)0x2;
      do {
        for (plVar4 = (long *)*plVar5; plVar4 != (long *)0x0; plVar4 = (long *)plVar4[0x13]) {
          plVar2 = plVar4;
          (**(code **)(*plVar4 + 0x80))();
          iVar1 = (int)plVar2;
          if (iVar1 != 2) {
            if (iVar1 == 0) {
              return plVar2;
            }
            plVar7 = plVar2;
            if (iVar1 != 1) {
              puVar3 = &UNK_10f69c027;
              FUN_10a00946c();
              return (long *)(ulong)((puVar3[0x2f8] & 0x10) == 0);
            }
            break;
          }
        }
        plVar5 = plVar5 + 2;
        if (plVar5 == plVar6) {
          return plVar7;
        }
      } while( true );
    }
  }
  return (long *)0x2;
}



/* Entry: 10ac18d64; end: 10ac18d73;  */

bool FUN_10ac18d64(long param_1)

{
  return (*(byte *)(param_1 + 0x2f8) & 0x10) == 0;
}



/* Entry: 10ac18d74; end: 10ac18dd7;  */

float FUN_10ac18d74(long param_1)

{
  if (((*(byte *)(param_1 + 0x2f8) >> 4 & 1) == 0) &&
     (*(long *)(param_1 + 0x3a8) == *(long *)(param_1 + 0x3b0))) {
    return 0.0;
  }
  FUN_10ac15e20();
  return *(float *)(param_1 + 0x14) / *(float *)(param_1 + 0x24);
}



/* Entry: 10ac18dd8; end: 10ac18e7f;  */

void FUN_10ac18dd8(undefined8 param_1,long param_2)

{
  char cVar1;
  long lVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  
  uVar6 = (undefined4)((ulong)param_1 >> 0x20);
  uVar3 = (undefined4)param_1;
  FUN_10ac114d4(param_2,0);
  lVar2 = *(long *)(param_2 + 800);
  if (((*(char *)(lVar2 + 0x20) != '\0') && ((*(byte *)(lVar2 + 0x10) & 1) == 0)) &&
     ((*(byte *)(lVar2 + 0x21) & 1) == 0)) {
    *(undefined1 *)(lVar2 + 0x21) = 1;
    cVar1 = *(char *)(lVar2 + 0x22);
    (**(code **)(**(long **)(lVar2 + 8) + 0x10))();
    fVar4 = (float)(double)CONCAT44(uVar6,uVar3);
    fVar5 = fVar4;
    if ((cVar1 == '\x01') && (fVar5 = *(float *)(lVar2 + 0x3c), fVar4 <= *(float *)(lVar2 + 0x3c)))
    {
      fVar5 = fVar4;
    }
    *(float *)(lVar2 + 0x38) = fVar5;
  }
  return;
}



/* Entry: 10ac18e80; end: 10ac1936f;  */

void FUN_10ac18e80(undefined8 ****param_1,long param_2,long *param_3)

{
  undefined8 ***pppuVar1;
  undefined8 *puVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  long **pplVar6;
  code *pcVar7;
  long *plVar8;
  long *plVar9;
  undefined8 ****ppppuVar10;
  long lVar11;
  ulong uVar12;
  undefined8 **ppuVar13;
  int *piVar14;
  bool bVar15;
  long lVar16;
  long *plVar17;
  long lVar18;
  undefined8 ****ppppuVar19;
  long *plVar20;
  ulong uVar21;
  long *plVar22;
  long ***ppplVar23;
  long *plVar24;
  ulong uVar25;
  long **pplStack_d0;
  long **pplStack_c8;
  int *piStack_b8;
  int *piStack_b0;
  undefined8 uStack_a8;
  undefined8 ***pppuStack_a0;
  long ***ppplStack_98;
  long ***ppplStack_90;
  long ***ppplStack_88;
  undefined8 ***pppuStack_80;
  undefined8 ***pppuStack_78;
  long ***ppplStack_70;
  long ***ppplStack_68;
  
  if (*param_3 != 0) {
    plVar22 = *(long **)(param_2 + 0x440);
    plVar24 = *(long **)(param_2 + 0x448);
    if (plVar22 != plVar24) {
      plVar20 = (long *)0x0;
      do {
        plVar8 = (long *)plVar22[1];
        if (plVar8 == (long *)0x0) {
          lVar16 = *param_3;
LAB_10ac18f24:
          if (lVar16 == 0) {
LAB_10ac18f28:
            if (plVar20 != (long *)0x0) goto LAB_10ac192b0;
            plVar20 = plVar22 + 2;
          }
        }
        else {
          __ZNSt3__119__shared_weak_count4lockEv();
          lVar16 = *param_3;
          if (plVar8 == (long *)0x0) goto LAB_10ac18f24;
          lVar18 = *plVar22;
          plVar3 = plVar8 + 1;
          do {
            lVar11 = *plVar3;
            cVar4 = '\x01';
            bVar15 = (bool)ExclusiveMonitorPass(plVar3,0x10);
            if (bVar15) {
              *plVar3 = lVar11 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar11 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
          }
          if (lVar18 == lVar16) goto LAB_10ac18f28;
        }
        plVar22 = plVar22 + 7;
      } while (plVar22 != plVar24);
      if ((plVar20 != (long *)0x0) && (plVar20[3] != 0)) {
        if (*(long *)(param_2 + 0x3c8) != *(long *)(param_2 + 0x3c0)) {
          lVar16 = *(long *)(param_2 + 0x3c8) - *(long *)(param_2 + 0x3c0);
          pppuStack_a0 = (long ***)0x0;
          ppplStack_98 = (long ***)0x0;
          ppplStack_90 = (long ***)0x0;
          piStack_b8 = (int *)0x0;
          piStack_b0 = (int *)0x0;
          uStack_a8 = 0;
          FUN_10a78f1f4(&pppuStack_a0,lVar16 >> 4);
          FUN_10a775ab4(&piStack_b8,lVar16 >> 4);
          uVar25 = plVar20[3];
          if (uVar25 != 0) {
            uVar21 = 0;
            do {
              plVar22 = plVar20;
              FUN_10ac45fb8(plVar20,uVar21);
              if (plVar22 == (long *)0x0) goto LAB_10ac192fc;
              piVar14 = piStack_b8;
              if (piStack_b8 == piStack_b0) {
LAB_10ac18ffc:
                if (piVar14 == piStack_b0) goto LAB_10ac19004;
              }
              else {
                do {
                  if ((*piVar14 == *(int *)((long)plVar22 + 0x14) && piVar14[1] == (int)plVar22[3])
                     && (piVar14[2] == *(int *)((long)plVar22 + 0x1c) &&
                         piVar14[3] == (int)plVar22[4])) goto LAB_10ac18ffc;
                  piVar14 = piVar14 + 4;
                } while (piVar14 != piStack_b0);
LAB_10ac19004:
                if ((long)piStack_b0 - (long)piStack_b8 == lVar16) goto LAB_10ac192fc;
                pplStack_d0 = (long **)0x0;
                pplStack_c8 = (long **)0x0;
                plVar24 = *(long **)(param_2 + 0x250);
                if (plVar24 == (long *)0x0) {
LAB_10ac19170:
                  *param_1 = (undefined8 ***)0x0;
                  param_1[1] = (undefined8 ***)0x0;
                  bVar15 = true;
                  param_1[2] = (undefined8 ***)0x0;
                }
                else {
                  do {
                    plVar8 = plVar24 + 2;
                    lVar18 = *plVar8;
                    if (lVar18 != 0) {
                      piVar14 = *(int **)(lVar18 + 0x18);
                      plVar3 = *(long **)(lVar18 + 0x20);
                      if (plVar3 != (long *)0x0) {
                        plVar9 = plVar3 + 1;
                        do {
                          cVar4 = '\x01';
                          bVar15 = (bool)ExclusiveMonitorPass(plVar9,0x10);
                          if (bVar15) {
                            *plVar9 = *plVar9 + 1;
                            cVar4 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar4 != '\0');
                      }
                      if (piVar14 != (int *)0x0) {
                        plVar17 = (long *)*plVar8;
                        plVar9 = (long *)plVar17[1];
                        if (plVar9 == (long *)0x0) {
                          lVar18 = 0;
                          plVar9 = (long *)0x0;
                        }
                        else {
                          __ZNSt3__119__shared_weak_count4lockEv();
                          if (plVar9 == (long *)0x0) {
                            lVar18 = 0;
                          }
                          else {
                            lVar18 = *plVar17;
                          }
                        }
                        if (lVar18 == *param_3) {
                          bVar15 = false;
                          if ((*piVar14 == *(int *)((long)plVar22 + 0x14)) &&
                             (piVar14[1] == (int)plVar22[3])) {
                            bVar15 = piVar14[2] == *(int *)((long)plVar22 + 0x1c) &&
                                     piVar14[3] == (int)plVar22[4];
                          }
                        }
                        else {
                          bVar15 = false;
                        }
                        if (plVar9 != (long *)0x0) {
                          plVar17 = plVar9 + 1;
                          do {
                            lVar18 = *plVar17;
                            cVar4 = '\x01';
                            bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
                            if (bVar5) {
                              *plVar17 = lVar18 + -1;
                              cVar4 = ExclusiveMonitorsStatus();
                            }
                          } while (cVar4 != '\0');
                          if (lVar18 == 0) {
                            (**(code **)(*plVar9 + 0x10))(plVar9);
                            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
                          }
                        }
                        if (bVar15) {
                          FUN_10a350d34(&pplStack_d0,plVar8);
                          if (plVar3 != (long *)0x0) {
                            plVar24 = plVar3 + 1;
                            do {
                              lVar18 = *plVar24;
                              cVar4 = '\x01';
                              bVar15 = (bool)ExclusiveMonitorPass(plVar24,0x10);
                              if (bVar15) {
                                *plVar24 = lVar18 + -1;
                                cVar4 = ExclusiveMonitorsStatus();
                              }
                            } while (cVar4 != '\0');
                            if (lVar18 == 0) {
                              (**(code **)(*plVar3 + 0x10))(plVar3);
                              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
                            }
                          }
                          break;
                        }
                      }
                      if (plVar3 != (long *)0x0) {
                        plVar8 = plVar3 + 1;
                        do {
                          lVar18 = *plVar8;
                          cVar4 = '\x01';
                          bVar15 = (bool)ExclusiveMonitorPass(plVar8,0x10);
                          if (bVar15) {
                            *plVar8 = lVar18 + -1;
                            cVar4 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar4 != '\0');
                        if (lVar18 == 0) {
                          (**(code **)(*plVar3 + 0x10))(plVar3);
                          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
                        }
                      }
                    }
                    plVar24 = (long *)*plVar24;
                  } while (plVar24 != (long *)0x0);
                  if ((undefined8 ***)pplStack_d0 == (undefined8 ***)0x0) goto LAB_10ac19170;
                  FUN_10abf7bc0(&piStack_b8,(long)plVar22 + 0x14);
                  if (ppplStack_98 < ppplStack_90) {
                    ppppuVar19 = (undefined8 ****)(ppplStack_98 + 2);
                    ppplStack_98[1] = pplStack_c8;
                    *ppplStack_98 = pplStack_d0;
                    pplStack_d0 = (long **)0x0;
                    pplStack_c8 = (long **)0x0;
                  }
                  else {
                    lVar18 = (long)ppplStack_98 - (long)pppuStack_a0;
                    uVar25 = (lVar18 >> 4) + 1;
                    if (uVar25 >> 0x3c != 0) {
                      FUN_10a7a6324();
                    /* WARNING: Does not return */
                      pcVar7 = (code *)SoftwareBreakpoint(1,0x10ac19330);
                      (*pcVar7)();
                    }
                    uVar12 = (long)ppplStack_90 - (long)pppuStack_a0 >> 3;
                    if (uVar12 <= uVar25) {
                      uVar12 = uVar25;
                    }
                    if (0x7fffffffffffffef < (ulong)((long)ppplStack_90 - (long)pppuStack_a0)) {
                      uVar12 = 0xfffffffffffffff;
                    }
                    ppplStack_68 = (long ***)&pppuStack_a0;
                    ppppuVar10 = &pppuStack_a0;
                    FUN_10a7a6338();
                    puVar2 = (undefined8 *)((long)ppppuVar10 + lVar18);
                    ppppuVar19 = (undefined8 ****)(puVar2 + 2);
                    puVar2[1] = pplStack_c8;
                    *puVar2 = pplStack_d0;
                    pplStack_d0 = (long **)0x0;
                    pplStack_c8 = (long **)0x0;
                    ppplVar23 = (long ***)((long)puVar2 - ((long)ppplStack_98 - (long)pppuStack_a0))
                    ;
                    _memcpy(ppplVar23);
                    ppplStack_88 = pppuStack_a0;
                    pppuStack_78 = pppuStack_a0;
                    ppplStack_70 = ppplStack_90;
                    pppuStack_80 = pppuStack_a0;
                    pppuStack_a0 = ppplVar23;
                    ppplStack_98 = (long ***)ppppuVar19;
                    ppplStack_90 = (long ***)(ppppuVar10 + uVar12 * 2);
                    FUN_10a7a6470(&ppplStack_88);
                  }
                  bVar15 = false;
                  ppplStack_98 = (long ***)ppppuVar19;
                }
                pplVar6 = pplStack_c8;
                if ((undefined8 ***)pplStack_c8 != (undefined8 ***)0x0) {
                  pppuVar1 = (undefined8 ***)(pplStack_c8 + 1);
                  do {
                    ppuVar13 = *pppuVar1;
                    cVar4 = '\x01';
                    bVar5 = (bool)ExclusiveMonitorPass(pppuVar1,0x10);
                    if (bVar5) {
                      *pppuVar1 = (undefined8 **)((long)ppuVar13 + -1);
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                  if (ppuVar13 == (undefined8 **)0x0) {
                    (*(code *)(*pplStack_c8)[2])(pplStack_c8);
                    __ZNSt3__119__shared_weak_count14__release_weakEv(pplVar6);
                  }
                }
                if (bVar15) goto LAB_10ac19304;
                uVar25 = plVar20[3];
              }
              uVar21 = (ulong)((int)uVar21 + 1);
            } while (uVar21 < uVar25);
          }
          if ((long)ppplStack_98 - (long)pppuStack_a0 == lVar16) {
            *param_1 = pppuStack_a0;
            param_1[1] = ppplStack_98;
            param_1[2] = ppplStack_90;
            param_1 = &pppuStack_a0;
          }
LAB_10ac192fc:
          *param_1 = (undefined8 ***)0x0;
          param_1[1] = (undefined8 ***)0x0;
          param_1[2] = (undefined8 ***)0x0;
LAB_10ac19304:
          if (piStack_b8 != (int *)0x0) {
            piStack_b0 = piStack_b8;
            __ZdlPv();
          }
          ppplStack_88 = (long ***)&pppuStack_a0;
          FUN_10a436ac0(&ppplStack_88);
          return;
        }
      }
    }
  }
LAB_10ac192b0:
  *param_1 = (undefined8 ***)0x0;
  param_1[1] = (undefined8 ***)0x0;
  param_1[2] = (undefined8 ***)0x0;
  return;
}



/* Entry: 10ac19370; end: 10ac199c3;  */

void FUN_10ac19370(long param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  ulong uVar4;
  code *pcVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  uint uVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  uint uVar20;
  undefined8 *puVar21;
  undefined8 uVar22;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 *puStack_70;
  long *plStack_68;
  
  puVar14 = (undefined8 *)*param_2;
  plVar6 = (long *)puVar14[1];
  if (plVar6 == (long *)0x0) {
    return;
  }
  plVar13 = param_2;
  __ZNSt3__119__shared_weak_count4lockEv();
  if (plVar6 == (long *)0x0) {
    return;
  }
  puVar14 = (undefined8 *)*puVar14;
  puStack_70 = puVar14;
  plStack_68 = plVar6;
  if (puVar14 == (undefined8 *)0x0) goto LAB_10ac1992c;
  puVar17 = *(undefined8 **)(param_1 + 0x440);
  if (puVar17 == *(undefined8 **)(param_1 + 0x448)) {
LAB_10ac19598:
    plVar6 = plStack_68 + 2;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = *plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    puVar19 = *(undefined8 **)(param_1 + 0x448);
LAB_10ac195b4:
    plVar6 = plStack_68;
    puVar14 = puStack_70;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_80 = 0x3f800000;
    if (puVar19 < *(undefined8 **)(param_1 + 0x450)) {
      *puVar19 = puStack_70;
      puVar19[1] = plStack_68;
      FUN_10ac40934(puVar19 + 2,&uStack_a0);
      puVar17 = puVar19 + 7;
    }
    else {
      lVar10 = *(long *)(param_1 + 0x440);
      uVar9 = ((long)puVar19 - lVar10 >> 3) * 0x6db6db6db6db6db7 + 1;
      if (0x492492492492492 < uVar9) {
        FUN_10ac40324();
        goto LAB_10ac19980;
      }
      lVar11 = (long)*(undefined8 **)(param_1 + 0x450) - lVar10 >> 3;
      uVar12 = lVar11 * -0x2492492492492492;
      if (uVar12 < uVar9 || uVar12 - uVar9 == 0) {
        uVar12 = uVar9;
      }
      if (0x249249249249248 < (ulong)(lVar11 * 0x6db6db6db6db6db7)) {
        uVar12 = 0x492492492492492;
      }
      FUN_10ac40338();
      puVar15 = (undefined8 *)(uVar12 + ((long)puVar19 - lVar10));
      *puVar15 = puVar14;
      puVar15[1] = plVar6;
      FUN_10ac40934(puVar15 + 2,&uStack_a0);
      puVar21 = *(undefined8 **)(param_1 + 0x448);
      puVar18 = *(undefined8 **)(param_1 + 0x440);
      lVar11 = (long)puVar21 - (long)puVar18;
      puVar14 = (undefined8 *)(uVar12 + (long)plVar13 * 0x38);
      puVar17 = puVar15 + 7;
      if ((long)puVar21 - (long)puVar18 != 0) {
        lVar10 = (long)puVar19 +
                 uVar12 + (((long)puVar21 - (long)puVar18 >> 3) * -8 - lVar10) + 0x10;
        puVar19 = puVar18;
        do {
          uVar8 = *puVar19;
          *(undefined8 *)(lVar10 + -8) = puVar19[1];
          *(undefined8 *)(lVar10 + -0x10) = uVar8;
          *puVar19 = 0;
          puVar19[1] = 0;
          FUN_10ac40934(lVar10,puVar19 + 2);
          puVar19 = puVar19 + 7;
          lVar10 = lVar10 + 0x38;
        } while (puVar19 != puVar21);
        do {
          func_0x00010ac3fd74(puVar18);
          puVar18 = puVar18 + 7;
        } while (puVar18 != puVar21);
        puVar18 = *(undefined8 **)(param_1 + 0x440);
      }
      *(long *)(param_1 + 0x440) = (long)puVar15 - lVar11;
      *(undefined8 **)(param_1 + 0x448) = puVar17;
      *(undefined8 **)(param_1 + 0x450) = puVar14;
      if (puVar18 != (undefined8 *)0x0) {
        __ZdlPv(puVar18);
      }
    }
    *(undefined8 **)(param_1 + 0x448) = puVar17;
    FUN_10ac3fd2c(&uStack_a0);
    if (*(long *)(param_1 + 0x440) == *(long *)(param_1 + 0x448)) {
LAB_10ac19980:
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10ac19984);
      (*pcVar5)();
    }
    plVar6 = (long *)(*(long *)(param_1 + 0x448) + -0x28);
  }
  else {
    plVar6 = (long *)0x0;
    puVar18 = *(undefined8 **)(param_1 + 0x448);
    do {
      plVar7 = (long *)puVar17[1];
      if ((plVar7 == (long *)0x0) || (plVar7[1] == -1)) {
        puVar15 = puVar17 + 7;
        puVar19 = puVar17;
        if (puVar15 != puVar18) {
          do {
            uVar22 = puVar15[1];
            uVar8 = *puVar15;
            *puVar15 = 0;
            puVar15[1] = 0;
            lVar10 = puVar19[1];
            puVar19[1] = uVar22;
            *puVar19 = uVar8;
            if (lVar10 != 0) {
              __ZNSt3__119__shared_weak_count14__release_weakEv();
            }
            if (puVar19[5] != 0) {
              plVar7 = (long *)puVar19[4];
              while (plVar7 != (long *)0x0) {
                plVar7 = (long *)*plVar7;
                __ZdlPv();
              }
              puVar19[4] = 0;
              lVar10 = puVar19[3];
              if (lVar10 != 0) {
                lVar11 = 0;
                do {
                  *(undefined8 *)(puVar19[2] + lVar11 * 8) = 0;
                  lVar11 = lVar11 + 1;
                } while (lVar10 != lVar11);
              }
              puVar19[5] = 0;
            }
            uVar8 = puVar15[2];
            puVar15[2] = 0;
            lVar10 = puVar19[2];
            puVar19[2] = uVar8;
            if (lVar10 != 0) {
              __ZdlPv();
            }
            lVar10 = puVar15[4];
            uVar9 = puVar15[3];
            puVar19[4] = lVar10;
            puVar19[3] = uVar9;
            puVar15[3] = 0;
            lVar11 = puVar15[5];
            puVar19[5] = lVar11;
            *(undefined4 *)(puVar19 + 6) = *(undefined4 *)(puVar15 + 6);
            if (lVar11 != 0) {
              uVar12 = *(ulong *)(lVar10 + 8);
              if ((uVar9 & uVar9 - 1) == 0) {
                uVar12 = uVar12 & uVar9 - 1;
              }
              else if (uVar9 <= uVar12) {
                uVar4 = 0;
                if (uVar9 != 0) {
                  uVar4 = uVar12 / uVar9;
                }
                uVar12 = uVar12 - uVar4 * uVar9;
              }
              *(undefined8 **)(puVar19[2] + uVar12 * 8) = puVar19 + 4;
              puVar15[4] = 0;
              puVar15[5] = 0;
            }
            puVar15 = puVar15 + 7;
            puVar14 = puVar19 + 7;
            puVar19 = puVar14;
          } while (puVar15 != puVar18);
          puVar18 = *(undefined8 **)(param_1 + 0x448);
        }
        while (puVar18 != puVar19) {
          puVar18 = puVar18 + -7;
          func_0x00010ac3fd74(puVar18);
        }
        *(undefined8 **)(param_1 + 0x448) = puVar19;
      }
      else {
        if (plVar6 == (long *)0x0) {
          __ZNSt3__119__shared_weak_count4lockEv();
          puVar18 = puStack_70;
          if (plVar7 == (long *)0x0) {
            if (puStack_70 == (undefined8 *)0x0) goto LAB_10ac19578;
          }
          else {
            puVar15 = (undefined8 *)*puVar17;
            plVar6 = plVar7 + 1;
            do {
              lVar10 = *plVar6;
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
              if (bVar2) {
                *plVar6 = lVar10 + -1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
            if (lVar10 == 0) {
              (**(code **)(*plVar7 + 0x10))(plVar7);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
            }
            if (puVar15 == puVar18) {
LAB_10ac19578:
              plVar6 = puVar17 + 2;
              goto LAB_10ac1957c;
            }
          }
          plVar6 = (long *)0x0;
        }
LAB_10ac1957c:
        puVar17 = puVar17 + 7;
        puVar19 = *(undefined8 **)(param_1 + 0x448);
      }
      puVar18 = puVar19;
    } while (puVar17 != puVar19);
    if (plVar6 == (long *)0x0) {
      if (plStack_68 != (long *)0x0) goto LAB_10ac19598;
      goto LAB_10ac195b4;
    }
  }
  puVar15 = (undefined8 *)(plVar6[3] & 0xffffffff);
  puVar17 = *(undefined8 **)(*param_2 + 0x18);
  puVar18 = (undefined8 *)plVar6[1];
  uVar20 = (uint)plVar6[3];
  if (puVar18 != (undefined8 *)0x0) {
    uVar9 = (long)puVar18 - 1;
    uVar16 = (uint)puVar18;
    if (((ulong)puVar18 & uVar9) == 0) {
      puVar14 = (undefined8 *)((ulong)(uVar16 - 1) & (ulong)puVar15);
    }
    else {
      puVar14 = puVar15;
      if (puVar18 <= puVar15) {
        uVar3 = 0;
        if (uVar16 != 0) {
          uVar3 = uVar20 / uVar16;
        }
        puVar14 = (undefined8 *)(ulong)(uVar20 - uVar3 * uVar16);
      }
    }
    puVar19 = *(undefined8 **)(*plVar6 + (long)puVar14 * 8);
    if (puVar19 != (undefined8 *)0x0) {
      for (plVar13 = (long *)*puVar19; plVar13 != (long *)0x0; plVar13 = (long *)*plVar13) {
        puVar19 = (undefined8 *)plVar13[1];
        if (puVar19 == puVar15) {
          if (*(uint *)(plVar13 + 2) == uVar20) goto LAB_10ac19914;
        }
        else {
          if (((ulong)puVar18 & uVar9) == 0) {
            puVar19 = (undefined8 *)((ulong)puVar19 & uVar9);
          }
          else if (puVar18 <= puVar19) {
            uVar12 = 0;
            if (puVar18 != (undefined8 *)0x0) {
              uVar12 = (ulong)puVar19 / (ulong)puVar18;
            }
            puVar19 = (undefined8 *)((long)puVar19 - uVar12 * (long)puVar18);
          }
          if (puVar19 != puVar14) break;
        }
      }
    }
  }
  plVar13 = (long *)0x28;
  __Znwm();
  *plVar13 = 0;
  plVar13[1] = (long)puVar15;
  *(uint *)(plVar13 + 2) = uVar20;
  *(undefined8 *)((long)plVar13 + 0x1c) = 0;
  *(undefined8 *)((long)plVar13 + 0x14) = 0;
  if ((puVar18 == (undefined8 *)0x0) ||
     (*(float *)(plVar6 + 4) * (float)puVar18 < (float)(plVar6[3] + 1))) {
    uVar9 = 1;
    if ((undefined8 *)0x2 < puVar18) {
      uVar9 = (ulong)(((ulong)puVar18 & (long)puVar18 - 1U) != 0);
    }
    uVar9 = uVar9 | (long)puVar18 << 1;
    uVar12 = (ulong)((float)(plVar6[3] + 1) / *(float *)(plVar6 + 4));
    if (uVar9 <= uVar12) {
      uVar9 = uVar12;
    }
    FUN_10ac3fb5c(plVar6,uVar9);
    puVar18 = (undefined8 *)plVar6[1];
    if (((ulong)puVar18 & (long)puVar18 - 1U) == 0) {
      puVar14 = (undefined8 *)((ulong)((int)puVar18 - 1) & (ulong)puVar15);
    }
    else {
      puVar14 = puVar15;
      if (puVar18 <= puVar15) {
        uVar9 = 0;
        if (puVar18 != (undefined8 *)0x0) {
          uVar9 = (ulong)puVar15 / (ulong)puVar18;
        }
        puVar14 = (undefined8 *)((long)puVar15 - uVar9 * (long)puVar18);
      }
    }
  }
  lVar10 = *plVar6;
  plVar7 = *(long **)(lVar10 + (long)puVar14 * 8);
  if (plVar7 == (long *)0x0) {
    plVar7 = plVar6 + 2;
    *plVar13 = *plVar7;
    *plVar7 = (long)plVar13;
    *(long **)(lVar10 + (long)puVar14 * 8) = plVar7;
    if (*plVar13 != 0) {
      puVar14 = *(undefined8 **)(*plVar13 + 8);
      if (((ulong)puVar18 & (long)puVar18 - 1U) == 0) {
        puVar14 = (undefined8 *)((ulong)puVar14 & (long)puVar18 - 1U);
      }
      else if (puVar18 <= puVar14) {
        uVar9 = 0;
        if (puVar18 != (undefined8 *)0x0) {
          uVar9 = (ulong)puVar14 / (ulong)puVar18;
        }
        puVar14 = (undefined8 *)((long)puVar14 - uVar9 * (long)puVar18);
      }
      plVar7 = (long *)(*plVar6 + (long)puVar14 * 8);
      goto LAB_10ac19904;
    }
  }
  else {
    *plVar13 = *plVar7;
LAB_10ac19904:
    *plVar7 = (long)plVar13;
  }
  plVar6[3] = plVar6[3] + 1;
LAB_10ac19914:
  uVar8 = *puVar17;
  *(undefined8 *)((long)plVar13 + 0x1c) = puVar17[1];
  *(undefined8 *)((long)plVar13 + 0x14) = uVar8;
  FUN_10ac18ae8(param_1);
  if (plStack_68 == (long *)0x0) {
    return;
  }
LAB_10ac1992c:
  plVar13 = plStack_68;
  plVar6 = plStack_68 + 1;
  do {
    lVar10 = *plVar6;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar2) {
      *plVar6 = lVar10 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar10 == 0) {
    (**(code **)(*plStack_68 + 0x10))(plStack_68);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
  }
  return;
}



/* Entry: 10ac199c4; end: 10ac19a57;  */

undefined1  [16] FUN_10ac199c4(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x1c;
  auVar1._0_8_ = &UNK_10f69d9a3;
  return auVar1;
}



/* Entry: 10ac19a58; end: 10ac19aaf;  */

void FUN_10ac19a58(undefined8 param_1)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  uStack_58 = 0;
  uStack_50 = 0xffffffff00000001;
  uStack_48 = 0xffffffff;
  puStack_40 = &UNK_10f69b9ca;
  uStack_30 = 0;
  uStack_38 = 0;
  uStack_20 = 0;
  uStack_28 = 0;
  uStack_18 = 0xffffffff;
  FUN_10ac19ab0(param_1,&uStack_58);
  FUN_10ac46158();
  return;
}



/* Entry: 10ac19ab0; end: 10ac19b87;  */

/* WARNING: Removing unreachable block (ram,0x00010ac19b48) */

undefined1  [16] FUN_10ac19ab0(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined1 auVar2 [16];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar1 = &puStack_90;
  func_0x000109887da8(auStack_48,&UNK_10f69d9a3,0x1c);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10ac4605c(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10ac19b88; end: 10ac19c33;  */

undefined8 * FUN_10ac19b88(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined **ppuVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  *param_1 = &PTR_FUN_110c5e7d8;
  param_1[2] = &PTR_FUN_110c5e878;
  param_1[5] = &PTR_DAT_110c5e8a8;
  param_1[0x17] = &PTR_DAT_110c5e930;
  plVar5 = (long *)param_1[0x16];
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  *param_1 = &PTR_FUN_110c59478;
  param_1[2] = &PTR_FUN_110bf2fd8;
  param_1[5] = &PTR_DAT_110bf3008;
  param_1[0x17] = &PTR_DAT_110c59548;
  FUN_10a576c8c(param_1 + 0x13);
  *param_1 = &PTR_DAT_110c60a00;
  param_1[2] = &PTR_DAT_110c60a88;
  param_1[5] = &PTR_DAT_110c60ab8;
  ppuVar6 = (undefined **)(param_1 + 0xb);
  puVar8 = (undefined8 *)param_1[0xc];
  for (puVar7 = (undefined8 *)*ppuVar6; puVar7 != puVar8; puVar7 = puVar7 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar7,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar6);
  plVar5 = param_1 + 10;
  if ((*plVar5 != 0) && (*(undefined ***)(*(long *)(*plVar5 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(param_1 + 3);
  if ((param_1[0x12] != 0) && (lVar4 = *(long *)(param_1[0x12] + 0x828), lVar4 != 0)) {
    FUN_10a1dfb2c(lVar4,param_1);
  }
  if (*(char *)((long)param_1 + 0x8f) < '\0') {
    __ZdlPv(param_1[0xf]);
  }
  appuStack_180[0] = ppuVar6;
  FUN_10ac78cf4(appuStack_180);
  lVar4 = *plVar5;
  *plVar5 = 0;
  if (lVar4 != 0) {
    FUN_10ac7d690(plVar5);
  }
  if (param_1[9] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[5] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 6);
  param_1[2] = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + 3);
  return param_1;
}



/* Entry: 10ac19c34; end: 10ac19c57;  */

undefined8 * FUN_10ac19c34(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined **ppuVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  *param_1 = &PTR_FUN_110c5e7d8;
  param_1[2] = &PTR_FUN_110c5e878;
  param_1[5] = &PTR_DAT_110c5e8a8;
  param_1[0x17] = &PTR_DAT_110c5e930;
  plVar5 = (long *)param_1[0x16];
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  *param_1 = &PTR_FUN_110c59478;
  param_1[2] = &PTR_FUN_110bf2fd8;
  param_1[5] = &PTR_DAT_110bf3008;
  param_1[0x17] = &PTR_DAT_110c59548;
  FUN_10a576c8c(param_1 + 0x13);
  *param_1 = &PTR_DAT_110c60a00;
  param_1[2] = &PTR_DAT_110c60a88;
  param_1[5] = &PTR_DAT_110c60ab8;
  ppuVar6 = (undefined **)(param_1 + 0xb);
  puVar8 = (undefined8 *)param_1[0xc];
  for (puVar7 = (undefined8 *)*ppuVar6; puVar7 != puVar8; puVar7 = puVar7 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar7,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar6);
  plVar5 = param_1 + 10;
  if ((*plVar5 != 0) && (*(undefined ***)(*(long *)(*plVar5 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(param_1 + 3);
  if ((param_1[0x12] != 0) && (lVar4 = *(long *)(param_1[0x12] + 0x828), lVar4 != 0)) {
    FUN_10a1dfb2c(lVar4,param_1);
  }
  if (*(char *)((long)param_1 + 0x8f) < '\0') {
    __ZdlPv(param_1[0xf]);
  }
  appuStack_180[0] = ppuVar6;
  FUN_10ac78cf4(appuStack_180);
  lVar4 = *plVar5;
  *plVar5 = 0;
  if (lVar4 != 0) {
    FUN_10ac7d690(plVar5);
  }
  if (param_1[9] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[5] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 6);
  param_1[2] = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + 3);
  return param_1;
}



/* Entry: 10ac19c58; end: 10ac19c9b;  */

void FUN_10ac19c58(void)

{
  FUN_10ac19b88();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ac19c9c; end: 10ac19ccb;  */

void FUN_10ac19c9c(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + -0x18);
  FUN_10ac19b88((long)param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)((long)param_1 + lVar1);
  return;
}



/* Entry: 10ac19ccc; end: 10ac19cd3;  */

void FUN_10ac19ccc(void)

{
  return;
}



/* Entry: 10ac19cd4; end: 10ac19dff;  */

void FUN_10ac19cd4(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar5);
      return;
    }
  }
  return;
}



/* Entry: 10ac19e00; end: 10ac19eff;  */

long FUN_10ac19e00(long param_1)

{
  return param_1 + 0xa8;
}



/* Entry: 10ac19f00; end: 10ac1a01b;  */

void FUN_10ac19f00(undefined8 param_1)

{
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined **ppuStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puStack_a8 = (undefined *)0x0;
  ppuStack_a0 = (undefined **)0xffffffff00000001;
  uStack_98 = CONCAT44(uStack_98._4_4_,0xffffffff);
  puStack_90 = &UNK_10f69b9ca;
  uStack_88 = 0;
  puStack_80 = &UNK_10f69b9ca;
  uStack_78 = 0;
  uStack_70 = 0x93;
  uStack_68 = CONCAT44(uStack_68._4_4_,0xffffffff);
  FUN_10ac1a01c(param_1,&puStack_a8);
  ppuStack_a0 = (undefined **)0x0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f69c03a;
  uStack_88 = 0xffffffffffffffff;
  puStack_90 = (undefined *)0x100000064;
  puStack_80 = &UNK_10f69b9ca;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x93;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10ac46310();
  puStack_b8 = &UNK_10f69c062;
  puStack_b0 = &UNK_10f69c06d;
  ppuStack_a0 = &puStack_b8;
  puStack_a8 = &UNK_10f69c050;
  uStack_98 = 2;
  uStack_88 = 0xffffffffffffffff;
  puStack_90 = (undefined *)0x100000064;
  puStack_80 = &UNK_10f69b9ca;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x93;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10ac46480(param_1,&puStack_a8,0);
  FUN_10ac46680(param_1);
  return;
}



/* Entry: 10ac1a01c; end: 10ac1a0f3;  */

/* WARNING: Removing unreachable block (ram,0x00010ac1a0b4) */

undefined1  [16] FUN_10ac1a01c(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined1 auVar2 [16];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar1 = &puStack_90;
  func_0x000109887da8(auStack_48,&UNK_10f69d9c0,0x1c);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10ac46214(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}


