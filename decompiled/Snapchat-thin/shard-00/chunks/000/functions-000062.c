/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1001cc908; end: 1001cc92b;  */

void FUN_1001cc908(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1103f5e78;
  FUN_1000285a8(0x112d6a5b8,&UNK_10d92db30);
  func_0x000107c613fc(&UNK_1103f5e78,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_1003a5c6c,puVar1);
  return;
}



/* Entry: 1001cc92c; end: 1001cc93b; -[SCSQLiteDocObjectContext addChangeRequestClassName:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1001cc92c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11278eb20),PTR_s_addObject__11259c1f0);
  return;
}



/* Entry: 1001cc93c; end: 1001cc9ef; -[SCDocPrefItemChangeRequest table] */

undefined * FUN_1001cc93c(void)

{
  return &UNK_10f7805f9;
}



/* Entry: 1001cc9f0; end: 1001ccaa3; -[SCDocPrefItemChangeRequest createTableWithSQLite:] */

void FUN_1001cc9f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_3;
  func_0x000107c613a0(param_3,&UNK_10e5d1d7c,0x73,&uStack_28,0);
  if ((int)uVar1 == 0) {
    func_0x000107c613a8(uStack_28);
    func_0x000107c61388(uStack_28);
  }
  uVar1 = param_3;
  func_0x000107c613a0(param_3,&UNK_10e5d1def,100,&uStack_30,0);
  if ((int)uVar1 == 0) {
    func_0x000107c613a8(uStack_30);
    func_0x000107c61388(uStack_30);
    func_0x000107c613a0(param_3,&UNK_10e5d1e53,0x6d,&uStack_38,0);
    if ((int)param_3 == 0) {
      func_0x000107c613a8(uStack_38);
      func_0x000107c61388(uStack_38);
    }
  }
  return;
}



/* Entry: 1001ccaa4; end: 1001ccabf;  */

void FUN_1001ccaa4(undefined8 param_1)

{
  FUN_1000285a8(0x112df4c78,&UNK_10d9c3198);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1009790c8,param_1);
  return;
}



/* Entry: 1001ccac0; end: 1001ccb0f;  */

void FUN_1001ccac0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1001ccb10; end: 1001ccb2f;  */

void FUN_1001ccb10(void)

{
  func_0x000107c61168(&PTR_PTR_11297df90);
  return;
}



/* Entry: 1001ccb30; end: 1001ccebb;  */

void FUN_1001ccb30(long *param_1,ulong param_2,long param_3)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  ulong unaff_x24;
  
  uVar13 = param_1[1];
  if (uVar13 != 0) {
    uVar4 = uVar13 - 1;
    if ((uVar13 & uVar4) == 0) {
      unaff_x24 = uVar4 & param_2;
    }
    else {
      unaff_x24 = param_2;
      if (uVar13 <= param_2) {
        uVar9 = 0;
        if (uVar13 != 0) {
          uVar9 = param_2 / uVar13;
        }
        unaff_x24 = param_2 - uVar9 * uVar13;
      }
    }
    plVar7 = *(long **)(*param_1 + unaff_x24 * 8);
    if (plVar7 != (long *)0x0) {
      do {
        while( true ) {
          plVar7 = (long *)*plVar7;
          if (plVar7 == (long *)0x0) goto LAB_1001ccbdc;
          uVar9 = plVar7[1];
          if (uVar9 != param_2) break;
          if (plVar7[2] == param_2) {
            return;
          }
        }
        if ((uVar13 & uVar4) == 0) {
          uVar9 = uVar9 & uVar4;
        }
        else if (uVar13 <= uVar9) {
          uVar5 = 0;
          if (uVar13 != 0) {
            uVar5 = uVar9 / uVar13;
          }
          uVar9 = uVar9 - uVar5 * uVar13;
        }
      } while (uVar9 == unaff_x24);
    }
  }
LAB_1001ccbdc:
  plVar7 = (long *)0x18;
  func_0x000107c60e20();
  *plVar7 = 0;
  plVar7[1] = param_2;
  plVar7[2] = param_3;
  if ((uVar13 != 0) && ((float)(param_1[3] + 1) <= *(float *)(param_1 + 4) * (float)uVar13))
  goto LAB_1001ccde0;
  uVar4 = 1;
  if (2 < uVar13) {
    uVar4 = (ulong)((uVar13 & uVar13 - 1) != 0);
  }
  uVar4 = uVar4 | uVar13 << 1;
  uVar9 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
  if (uVar4 <= uVar9) {
    uVar4 = uVar9;
  }
  if (uVar4 - 1 == 0) {
    uVar4 = 2;
  }
  else if ((uVar4 & uVar4 - 1) != 0) {
    func_0x000107c60c44();
    uVar13 = param_1[1];
  }
  if (uVar13 < uVar4) {
LAB_1001ccc7c:
    if (uVar4 >> 0x3d != 0) {
      func_0x000104bd35f4();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1001ccea8);
      (*pcVar2)();
    }
    lVar6 = uVar4 << 3;
    func_0x000107c60e20();
    lVar3 = *param_1;
    *param_1 = lVar6;
    if (lVar3 != 0) {
      func_0x000107c60e14();
      lVar6 = *param_1;
    }
    param_1[1] = uVar4;
    func_0x000107c60ee4(lVar6,uVar4 << 3);
    plVar8 = (long *)param_1[2];
    uVar13 = uVar4;
    if (plVar8 != (long *)0x0) {
      uVar9 = plVar8[1];
      uVar5 = uVar4 - 1;
      if ((uVar4 & uVar5) == 0) {
        uVar9 = uVar9 & uVar5;
      }
      else if (uVar4 <= uVar9) {
        uVar12 = 0;
        if (uVar4 != 0) {
          uVar12 = uVar9 / uVar4;
        }
        uVar9 = uVar9 - uVar12 * uVar4;
      }
      *(long **)(lVar6 + uVar9 * 8) = param_1 + 2;
      plVar10 = (long *)*plVar8;
      while (plVar10 != (long *)0x0) {
        uVar12 = plVar10[1];
        if ((uVar4 & uVar5) == 0) {
          uVar12 = uVar12 & uVar5;
        }
        else if (uVar4 <= uVar12) {
          uVar1 = 0;
          if (uVar4 != 0) {
            uVar1 = uVar12 / uVar4;
          }
          uVar12 = uVar12 - uVar1 * uVar4;
        }
        plVar11 = plVar10;
        if (uVar12 != uVar9) {
          if (*(long *)(lVar6 + uVar12 * 8) == 0) {
            *(long **)(lVar6 + uVar12 * 8) = plVar8;
            uVar9 = uVar12;
          }
          else {
            *plVar8 = *plVar10;
            *plVar10 = **(undefined8 **)(lVar6 + uVar12 * 8);
            **(long **)(lVar6 + uVar12 * 8) = (long)plVar10;
            plVar11 = plVar8;
          }
        }
        plVar8 = plVar11;
        plVar10 = (long *)*plVar11;
      }
    }
  }
  else if (uVar4 < uVar13) {
    uVar9 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((uVar13 < 3) || ((uVar13 & uVar13 - 1) != 0)) {
      func_0x000107c60c44();
    }
    else if (1 < uVar9) {
      uVar9 = 1L << (-LZCOUNT(uVar9 - 1) & 0x3fU);
    }
    if (uVar4 <= uVar9) {
      uVar4 = uVar9;
    }
    if (uVar4 < uVar13) {
      if (uVar4 != 0) goto LAB_1001ccc7c;
      lVar6 = *param_1;
      *param_1 = 0;
      if (lVar6 != 0) {
        func_0x000107c60e14();
      }
      param_1[1] = 0;
      uVar13 = 0;
    }
    else {
      uVar13 = param_1[1];
    }
  }
  if ((uVar13 & uVar13 - 1) == 0) {
    unaff_x24 = uVar13 - 1 & param_2;
  }
  else {
    unaff_x24 = param_2;
    if (uVar13 <= param_2) {
      uVar4 = 0;
      if (uVar13 != 0) {
        uVar4 = param_2 / uVar13;
      }
      unaff_x24 = param_2 - uVar4 * uVar13;
    }
  }
LAB_1001ccde0:
  lVar6 = *param_1;
  plVar8 = *(long **)(lVar6 + unaff_x24 * 8);
  if (plVar8 == (long *)0x0) {
    plVar8 = param_1 + 2;
    *plVar7 = *plVar8;
    *plVar8 = (long)plVar7;
    *(long **)(lVar6 + unaff_x24 * 8) = plVar8;
    if (*plVar7 != 0) {
      uVar4 = *(ulong *)(*plVar7 + 8);
      if ((uVar13 & uVar13 - 1) == 0) {
        uVar4 = uVar4 & uVar13 - 1;
      }
      else if (uVar13 <= uVar4) {
        uVar9 = 0;
        if (uVar13 != 0) {
          uVar9 = uVar4 / uVar13;
        }
        uVar4 = uVar4 - uVar9 * uVar13;
      }
      *(long **)(lVar6 + uVar4 * 8) = plVar7;
    }
  }
  else {
    *plVar7 = *plVar8;
    *plVar8 = (long)plVar7;
  }
  param_1[3] = param_1[3] + 1;
  return;
}



/* Entry: 1001ccebc; end: 1001ccf9b;  */

undefined8 *
FUN_1001ccebc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6,undefined8 param_7)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  
  func_0x000107c61174(param_7);
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = param_5;
  *(undefined4 *)(param_1 + 4) = param_6;
  func_0x000107c61174(param_7);
  param_1[5] = param_7;
  *(undefined1 *)(param_1 + 6) = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x3f800000;
  FUN_1001b9adc(*param_1,&uStack_80,0,param_1[3],param_7,*(undefined4 *)(param_1 + 4),4);
  FUN_1001ba7c0(&uStack_80);
  func_0x000107c61170(param_7);
  return param_1;
}



/* Entry: 1001ccf9c; end: 1001cd01b;  */

void FUN_1001ccf9c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112dd9cc8,&UNK_10d99dba0);
  puVar1 = &UNK_1104198c0;
  func_0x000107c613fc(&UNK_1104198c0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_1003cd298,puVar1);
  return;
}



/* Entry: 1001cd01c; end: 1001cd03b;  */

void FUN_1001cd01c(void)

{
  func_0x000107c61168(&PTR_PTR_112dd9d40);
  return;
}



/* Entry: 1001cd03c; end: 1001cd057;  */

void FUN_1001cd03c(undefined8 param_1)

{
  FUN_1000285a8(0x112dd9cd0,&UNK_10d99dba8);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1003cd23c,param_1);
  return;
}



/* Entry: 1001cd058; end: 1001cd0a7;  */

void FUN_1001cd058(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1001cd0a8; end: 1001cd0c7;  */

void FUN_1001cd0a8(void)

{
  func_0x000107c61168(&PTR_PTR_112954c38);
  return;
}



/* Entry: 1001cd0c8; end: 1001cd113;  */

void FUN_1001cd0c8(undefined8 param_1)

{
  FUN_1000285a8(0x112dbfe30,&UNK_10d97be10);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1003ec85c,param_1);
  return;
}



/* Entry: 1001cd114; end: 1001cd12f;  */

void FUN_1001cd114(undefined8 param_1)

{
  FUN_1000285a8(0x112ddcb10,&UNK_10d9a2050);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_10063f048,param_1);
  return;
}



/* Entry: 1001cd130; end: 1001cd17f;  */

void FUN_1001cd130(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1001cd180; end: 1001cd19f;  */

void FUN_1001cd180(void)

{
  func_0x000107c61168(&PTR_PTR_112ddcb88);
  return;
}



/* Entry: 1001cd1a0; end: 1001cd1ff;  */

void FUN_1001cd1a0(undefined8 param_1)

{
  FUN_1000285a8(0x112ddcb18,&UNK_10d9a2058);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_10063efec,param_1);
  return;
}



/* Entry: 1001cd200; end: 1001cd24f;  */

void FUN_1001cd200(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1001cd250; end: 1001cd26f;  */

void FUN_1001cd250(void)

{
  func_0x000107c61168(&PTR_PTR_112ddcc68);
  return;
}



/* Entry: 1001cd270; end: 1001cd283;  */

void FUN_1001cd270(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c279770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_transactWithSQLite_flatbuffers__11267c000,
             *(undefined8 *)(param_1 + 0x30),*(long *)(param_1 + 0x28) + 0x90);
  return;
}



/* Entry: 1001cd284; end: 1001cd903; -[SCDocPrefItemChangeRequest transactWithSQLite:flatbuffers:] */

void FUN_1001cd284(undefined *param_1,undefined8 param_2,long param_3,long param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  uint *puVar13;
  
  iVar3 = *(int *)(param_1 + 0x10);
  puVar7 = param_1;
  if (iVar3 == 1) {
    FUN_1001cd904(param_1);
    func_0x000107c61180();
    lVar8 = param_4;
    FUN_1001cd9a4(param_4,puVar7);
    FUN_1001ce6fc(param_4,lVar8,0,0);
    puVar13 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar13;
    puVar11 = PTR_PTR_1126b04a8;
    func_0x000107c421f0();
    func_0x000107c61180();
    puVar9 = puVar11;
    func_0x000107c41220();
    func_0x00010507cae4();
    func_0x000107c61170(puVar11);
    lVar8 = param_3;
    FUN_1001b9e08(param_3,&UNK_10f7806e2);
    if (lVar8 == 0) goto LAB_1001cd830;
    func_0x000107c61324(lVar8,1,*(undefined8 *)(param_4 + 0x30),
                        (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                        *(int *)(param_4 + 0x28),0);
    piVar1 = (int *)((long)puVar13 + (ulong)uVar4);
    puVar13 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
    puVar2 = (undefined4 *)((long)puVar13 + (ulong)*puVar13);
    func_0x000107c61338(lVar8,2,puVar2 + 1,*puVar2,0);
    func_0x000107c613a8();
    if ((int)lVar8 != 0x65) goto LAB_1001cd830;
    uVar12 = *(undefined8 *)(param_3 + 0x58);
    func_0x000107c61394();
    if (((ulong)puVar9 & 1) != 0) {
      FUN_1001b9e08(param_3,&UNK_10f780605);
      func_0x000107c6132c();
      if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 7) ||
         (uVar10 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[3], uVar10 == 0)) {
        func_0x000107c61330(param_3,2);
      }
      else {
        puVar13 = (uint *)((long)piVar1 + uVar10);
        puVar2 = (undefined4 *)((long)puVar13 + (ulong)*puVar13);
        func_0x000107c61338(param_3,2,puVar2 + 1,*puVar2,0);
      }
      func_0x000107c613a8();
      if ((int)param_3 != 0x65) goto LAB_1001cd830;
    }
    *(undefined8 *)(param_1 + 8) = uVar12;
    func_0x000107c57f38(puVar7);
    puVar11 = PTR_PTR_1126b04a8;
    func_0x000107c421f0(PTR_PTR_1126b04a8);
    func_0x000107c61180();
    func_0x000107c61158(PTR_PTR_1126e0340);
    func_0x000107c5a210(puVar11);
LAB_1001cd808:
    func_0x000107c61170(puVar11);
    func_0x000107c61174(puVar7);
    puVar11 = puVar7;
  }
  else {
    if (iVar3 != 2) {
      if (iVar3 == 3) {
        *(undefined4 *)(param_1 + 0x10) = 0;
        lVar8 = param_3;
        FUN_1001b9e08(param_3,&UNK_10f780685);
        if (lVar8 != 0) {
          func_0x000107c6132c();
          func_0x000107c613a8();
          if ((int)lVar8 == 0x65) {
            FUN_1001b9e08(param_3,&UNK_10f7806ac);
            if (param_3 != 0) {
              func_0x000107c6132c();
              func_0x000107c613a8();
              if ((int)param_3 != 0x65) goto LAB_1001cd3b0;
            }
            puVar7 = PTR_PTR_1126b04a8;
            func_0x000107c421f0(PTR_PTR_1126b04a8);
            func_0x000107c61180();
            puVar11 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x000107c4d8b8(PTR__OBJC_CLASS___NSNull_1126aef28);
            func_0x000107c61180();
            func_0x000107c61158(PTR_PTR_1126e0340);
            func_0x000107c5a210(puVar7);
            func_0x000107c61170(puVar11);
            func_0x000107c61170(puVar7);
            puVar11 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x000107c4d8b8(PTR__OBJC_CLASS___NSNull_1126aef28);
            func_0x000107c61180();
            goto LAB_1001cd83c;
          }
        }
      }
LAB_1001cd3b0:
      puVar11 = (undefined *)0x0;
      goto LAB_1001cd83c;
    }
    FUN_1001cd904();
    func_0x000107c61180();
    lVar8 = param_4;
    FUN_1001cd9a4(param_4,puVar7);
    FUN_1001ce6fc(param_4,lVar8,0,0);
    puVar13 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar13;
    uVar12 = *(undefined8 *)(param_1 + 8);
    func_0x000107c61174(puVar7);
    lVar8 = param_3;
    FUN_1001b9e08(param_3,&UNK_10f780713);
    if (lVar8 != 0) {
      func_0x000107c61324(lVar8,1,*(undefined8 *)(param_4 + 0x30),
                          (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                          *(int *)(param_4 + 0x28),0);
      func_0x000107c6132c(lVar8,2,uVar12);
      piVar1 = (int *)((long)puVar13 + (ulong)uVar4);
      puVar13 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
      puVar2 = (undefined4 *)((long)puVar13 + (ulong)*puVar13);
      func_0x000107c61338(lVar8,3,puVar2 + 1,*puVar2,0);
      func_0x000107c613a8();
      if ((int)lVar8 == 0x65) {
        puVar11 = PTR_PTR_1126b04a8;
        func_0x000107c421f0();
        func_0x000107c61180();
        func_0x000107c61158(PTR_PTR_1126e0340);
        puVar9 = puVar11;
        func_0x000107c4d9b8();
        func_0x000107c61180();
        func_0x000107c61170(puVar11);
        puVar11 = puVar9;
        func_0x000107c4d3ec();
        func_0x000107c61180();
        puVar5 = puVar7;
        func_0x000107c4d3ec();
        func_0x000107c61180();
        func_0x000107c61174(puVar11);
        func_0x000107c61174(puVar5);
        if (puVar11 != (undefined *)0x0 || puVar5 != (undefined *)0x0) {
          if ((puVar11 == (undefined *)0x0) || (puVar5 == (undefined *)0x0)) {
            func_0x000107c61170(puVar5);
            func_0x000107c61170(puVar11);
            func_0x000107c61170(puVar5);
            func_0x000107c61170(puVar11);
          }
          else {
            puVar6 = puVar11;
            func_0x000107c49d0c();
            func_0x000107c61170(puVar5);
            func_0x000107c61170(puVar11);
            func_0x000107c61170(puVar5);
            func_0x000107c61170(puVar11);
            if (((ulong)puVar6 & 1) != 0) goto LAB_1001cd7c4;
          }
          FUN_1001b9e08(param_3,&UNK_10f78074e);
          if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 7) ||
             (uVar10 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[3], uVar10 == 0)) {
            func_0x000107c61330(param_3,1);
          }
          else {
            puVar13 = (uint *)((long)piVar1 + uVar10);
            puVar2 = (undefined4 *)((long)puVar13 + (ulong)*puVar13);
            func_0x000107c61338(param_3,1,puVar2 + 1,*puVar2,0);
          }
          func_0x000107c6132c(param_3,2,uVar12);
          func_0x000107c613a8();
          if ((int)param_3 != 0x65) {
            func_0x000107c61170(puVar9);
            goto LAB_1001cd828;
          }
        }
LAB_1001cd7c4:
        func_0x000107c61170(puVar9);
        func_0x000107c61170(puVar7);
        puVar11 = PTR_PTR_1126b04a8;
        func_0x000107c421f0(PTR_PTR_1126b04a8);
        func_0x000107c61180();
        func_0x000107c61158(PTR_PTR_1126e0340);
        func_0x000107c5a210(puVar11);
        goto LAB_1001cd808;
      }
    }
LAB_1001cd828:
    func_0x000107c61170(puVar7);
LAB_1001cd830:
    puVar11 = (undefined *)0x0;
  }
  func_0x000107c61170(puVar7);
LAB_1001cd83c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 1001cd904; end: 1001cd987;  */

void FUN_1001cd904(long param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126e0340;
    func_0x000107c610f4(PTR_PTR_1126e0340);
    func_0x000107c47058(*(undefined4 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x40));
    func_0x000107c57f38();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1001cd988; end: 1001cd9a3;  */

void FUN_1001cd988(undefined8 param_1)

{
  FUN_1000285a8(0x112ddcbf8,&UNK_10d9a21e8);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_100649660,param_1);
  return;
}



/* Entry: 1001cd9a4; end: 1001cdc3f;  */

ulong FUN_1001cd9a4(undefined8 param_1,ulong param_2,ulong param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 uVar16;
  
  func_0x000107c61174(param_3);
  uVar4 = param_3;
  func_0x000107c4a8c4();
  func_0x000107c61180();
  uVar5 = param_2;
  FUN_1001cdc40(param_2,uVar4);
  uVar6 = param_3;
  func_0x000107c4d3ec();
  func_0x000107c61180();
  uVar7 = param_2;
  FUN_1001cdc40(param_2,uVar6);
  uVar8 = param_3;
  func_0x000107c5dba0();
  uVar9 = param_3;
  func_0x000107c5db80(param_3);
  uVar10 = param_3;
  func_0x000107c5db98(param_3);
  uVar11 = param_3;
  func_0x000107c5dba8(param_3);
  func_0x000107c5db90(param_3);
  uVar16 = param_1;
  func_0x000107c5db88(param_3);
  uVar12 = param_3;
  func_0x000107c5db8c();
  func_0x000107c61180();
  func_0x000107c61174();
  if (uVar12 == 0) {
    uVar15 = 0;
  }
  else {
    uVar13 = uVar12;
    func_0x000107c61178(uVar12);
    func_0x000107c3eea8();
    uVar14 = uVar12;
    func_0x000107c4adac(uVar12);
    uVar15 = param_2;
    FUN_1001d1030(param_2,uVar13,uVar14);
  }
  func_0x000107c61170(uVar12);
  *(undefined1 *)(param_2 + 0x46) = 1;
  iVar1 = *(int *)(param_2 + 0x20);
  iVar2 = *(int *)(param_2 + 0x30);
  iVar3 = *(int *)(param_2 + 0x28);
  func_0x0001001ce11c(uVar16,0,param_2,0x12);
  func_0x0001001ce170(param_2,0xe,uVar11,0);
  func_0x0001001ce1c8(param_2,0xc,uVar10,0);
  FUN_1001ce220(param_2,0x14,uVar15 & 0xffffffff);
  FUN_1001ce290(param_1,0,param_2,0x10);
  FUN_1001ce2e4(param_2,6,uVar7 & 0xffffffff);
  FUN_1001ce2e4(param_2,4,uVar5 & 0xffffffff);
  FUN_1001ce42c(param_2,10,uVar9,0);
  FUN_1001ce42c(param_2,8,uVar8 & 0xffffffff,0);
  FUN_1001ce548(param_2,(iVar1 - iVar2) + iVar3);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(param_3);
  return param_2;
}



/* Entry: 1001cdc40; end: 1001cdd6f;  */

undefined8 FUN_1001cdc40(undefined8 param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  
  func_0x000107c61174(param_2);
  if (param_2 == (char *)0x0) {
    param_1 = 0;
    goto LAB_1001cdd20;
  }
  pcVar1 = param_2;
  func_0x000107c60858(param_2,0x8000100);
  if (pcVar1 != (char *)0x0) {
    pcVar2 = pcVar1;
    func_0x000107c613d0(pcVar1);
    FUN_1001cde08(param_1,pcVar1,pcVar2);
    goto LAB_1001cdd20;
  }
  pcVar1 = param_2;
  func_0x000107c412d4();
  func_0x000107c61180();
  if (pcVar1 == (char *)0x0) {
    pcVar1 = param_2;
    func_0x000107c412d8();
    func_0x000107c61180();
    if (pcVar1 != (char *)0x0) goto LAB_1001cdce0;
    param_1 = 0;
  }
  else {
LAB_1001cdce0:
    pcVar3 = pcVar1;
    func_0x000107c61178();
    func_0x000107c3eea8();
    pcVar4 = pcVar1;
    func_0x000107c4adac(pcVar1);
    pcVar2 = "";
    if (pcVar3 != (char *)0x0) {
      pcVar2 = pcVar3;
    }
    FUN_1001cde08(param_1,pcVar2,pcVar4);
  }
  func_0x000107c61170(pcVar1);
LAB_1001cdd20:
  func_0x000107c61170(param_2);
  return param_1;
}



/* Entry: 1001cdd70; end: 1001cddaf;  */

void FUN_1001cdd70(void)

{
  FUN_1000285a8(0x112f93710,&UNK_10dc0c190);
  FUN_1000823a8(FUN_10076f770,0);
  return;
}



/* Entry: 1001cddb0; end: 1001cddcf;  */

void FUN_1001cddb0(void)

{
  func_0x000107c61168(&PTR_PTR_112f93758);
  return;
}



/* Entry: 1001cddd0; end: 1001cde07;  */

void FUN_1001cddd0(long param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  if (*(ulong *)(param_1 + 0x48) < param_3) {
    *(ulong *)(param_1 + 0x48) = param_3;
  }
  uVar1 = param_3 - 1 &
          -(ulong)(uint)((*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x30)) +
                        *(int *)(param_1 + 0x28)) - param_2;
  if ((ulong)(*(long *)(param_1 + 0x30) - *(long *)(param_1 + 0x38)) < uVar1) {
    FUN_1001cde7c(param_1,uVar1);
    *(ulong *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) - uVar1;
  }
  else {
    *(ulong *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) - uVar1;
    if (uVar1 == 0) {
      return;
    }
  }
  uVar2 = 0;
  do {
    *(undefined1 *)(*(long *)(param_1 + 0x30) + uVar2) = 0;
    uVar2 = uVar2 + 1;
  } while (uVar1 != uVar2);
  return;
}



/* Entry: 1001cde08; end: 1001cde7b;  */

int FUN_1001cde08(long param_1,undefined8 param_2,long param_3)

{
  FUN_1001cddd0(param_1,param_3 + 1,4);
  FUN_1001cdfb4(param_1,1);
  FUN_1001ce024(param_1,param_2,param_3);
  FUN_1001ce0bc(param_1,param_3);
  return (*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x30)) + *(int *)(param_1 + 0x28);
}



/* Entry: 1001cde7c; end: 1001cdfb3;  */

void FUN_1001cde7c(long *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  
  uVar2 = param_1[4];
  lVar3 = param_1[5];
  lVar4 = param_1[7];
  uVar1 = (uVar2 - param_1[6]) + lVar3;
  if (uVar2 == 0) {
    uVar6 = param_1[2];
  }
  else {
    uVar6 = uVar2 >> 1;
  }
  if (param_2 <= uVar6) {
    param_2 = uVar6;
  }
  plVar7 = (long *)((uVar2 + param_1[3] + param_2) - 1 & -param_1[3]);
  param_1[4] = (long)plVar7;
  plVar5 = (long *)*param_1;
  if (lVar3 == 0) {
    if (plVar5 == (long *)0x0) {
      func_0x000107c60e1c();
    }
    else {
      (**(code **)(*plVar5 + 0x10))(plVar5,plVar7);
      plVar7 = plVar5;
    }
  }
  else {
    uVar8 = uVar1 & 0xffffffff;
    uVar6 = lVar4 - lVar3 & 0xffffffff;
    if (plVar5 == (long *)0x0) {
      plVar5 = plVar7;
      func_0x000107c60e1c();
      func_0x000107c610b4(((long)plVar5 + (long)plVar7) - uVar8,(lVar3 + uVar2) - uVar8,uVar8);
      func_0x000107c610b4(plVar5,lVar3,uVar6);
      func_0x000107c60e10(lVar3);
      plVar7 = plVar5;
    }
    else {
      (**(code **)(*plVar5 + 0x20))(plVar5,lVar3,uVar2,plVar7,uVar8,uVar6);
      plVar7 = plVar5;
    }
  }
  param_1[5] = (long)plVar7;
  param_1[6] = (long)plVar7 + (param_1[4] - (uVar1 & 0xffffffff));
  param_1[7] = (long)plVar7 + (lVar4 - lVar3 & 0xffffffffU);
  return;
}



/* Entry: 1001cdfb4; end: 1001ce023;  */

void FUN_1001cdfb4(long param_1,ulong param_2)

{
  ulong uVar1;
  
  if ((ulong)(*(long *)(param_1 + 0x30) - *(long *)(param_1 + 0x38)) < param_2) {
    FUN_1001cde7c(param_1,param_2);
    *(ulong *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) - param_2;
  }
  else {
    *(ulong *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) - param_2;
    if (param_2 == 0) {
      return;
    }
  }
  uVar1 = 0;
  do {
    *(undefined1 *)(*(long *)(param_1 + 0x30) + uVar1) = 0;
    uVar1 = uVar1 + 1;
  } while (param_2 != uVar1);
  return;
}



/* Entry: 1001ce024; end: 1001ce087;  */

void FUN_1001ce024(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  
  if (param_3 != 0) {
    lVar1 = *(long *)(param_1 + 0x30);
    if ((ulong)(lVar1 - *(long *)(param_1 + 0x38)) < param_3) {
      FUN_1001cde7c(param_1,param_3);
      lVar1 = *(long *)(param_1 + 0x30);
    }
    *(ulong *)(param_1 + 0x30) = lVar1 - param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memcpy_11034c658)(lVar1 - param_3,param_2,param_3);
    return;
  }
  return;
}



/* Entry: 1001ce088; end: 1001ce0bb;  */

void FUN_1001ce088(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  if (*(ulong *)(param_1 + 0x48) < param_2) {
    *(ulong *)(param_1 + 0x48) = param_2;
  }
  uVar1 = param_2 - 1 &
          -(ulong)(uint)((*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x30)) +
                        *(int *)(param_1 + 0x28));
  if ((ulong)(*(long *)(param_1 + 0x30) - *(long *)(param_1 + 0x38)) < uVar1) {
    FUN_1001cde7c(param_1,uVar1);
    *(ulong *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) - uVar1;
  }
  else {
    *(ulong *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) - uVar1;
    if (uVar1 == 0) {
      return;
    }
  }
  uVar2 = 0;
  do {
    *(undefined1 *)(*(long *)(param_1 + 0x30) + uVar2) = 0;
    uVar2 = uVar2 + 1;
  } while (uVar1 != uVar2);
  return;
}



/* Entry: 1001ce0bc; end: 1001ce21f;  */

int FUN_1001ce0bc(long param_1,undefined4 param_2)

{
  long lVar1;
  undefined4 *puVar2;
  
  FUN_1001ce088(param_1,4);
  lVar1 = *(long *)(param_1 + 0x30);
  if ((ulong)(lVar1 - *(long *)(param_1 + 0x38)) < 4) {
    FUN_1001cde7c(param_1,4);
    lVar1 = *(long *)(param_1 + 0x30);
  }
  puVar2 = (undefined4 *)(lVar1 + -4);
  *puVar2 = param_2;
  *(undefined4 **)(param_1 + 0x30) = puVar2;
  return (*(int *)(param_1 + 0x20) - (int)puVar2) + *(int *)(param_1 + 0x28);
}



/* Entry: 1001ce220; end: 1001ce28f;  */

void FUN_1001ce220(ulong param_1,uint param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  ulong *puVar4;
  
  if (param_3 == 0) {
    return;
  }
  FUN_1001ce088(param_1,4);
  iVar1 = (((*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x30)) + *(int *)(param_1 + 0x28)) -
          param_3) + 4;
  if ((iVar1 == 0) && (*(char *)(param_1 + 0x50) != '\x01')) {
    return;
  }
  uVar3 = param_1;
  FUN_1001ce0bc(param_1,iVar1);
  puVar4 = *(ulong **)(param_1 + 0x38);
  if ((ulong)(*(long *)(param_1 + 0x30) - (long)puVar4) < 8) {
    FUN_1001cde7c(param_1,8);
    puVar4 = *(ulong **)(param_1 + 0x38);
  }
  *puVar4 = uVar3 & 0xffffffff | (ulong)param_2 << 0x20;
  *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + 8;
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
  uVar2 = (uint)*(ushort *)(param_1 + 0x44);
  if (*(ushort *)(param_1 + 0x44) <= param_2) {
    uVar2 = param_2;
  }
  *(short *)(param_1 + 0x44) = (short)uVar2;
  return;
}



/* Entry: 1001ce290; end: 1001ce2e3;  */

void FUN_1001ce290(float param_1,float param_2,ulong param_3,uint param_4)

{
  uint uVar1;
  ulong uVar2;
  ulong *puVar3;
  
  if ((param_1 == param_2) && (*(char *)(param_3 + 0x50) != '\x01')) {
    return;
  }
  uVar2 = param_3;
  func_0x000100ab12d4();
  puVar3 = *(ulong **)(param_3 + 0x38);
  if ((ulong)(*(long *)(param_3 + 0x30) - (long)puVar3) < 8) {
    FUN_1001cde7c(param_3,8);
    puVar3 = *(ulong **)(param_3 + 0x38);
  }
  *puVar3 = uVar2 & 0xffffffff | (ulong)param_4 << 0x20;
  *(long *)(param_3 + 0x38) = *(long *)(param_3 + 0x38) + 8;
  *(int *)(param_3 + 0x40) = *(int *)(param_3 + 0x40) + 1;
  uVar1 = (uint)*(ushort *)(param_3 + 0x44);
  if (*(ushort *)(param_3 + 0x44) <= param_4) {
    uVar1 = param_4;
  }
  *(short *)(param_3 + 0x44) = (short)uVar1;
  return;
}



/* Entry: 1001ce2e4; end: 1001ce353;  */

void FUN_1001ce2e4(ulong param_1,uint param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  ulong *puVar4;
  
  if (param_3 == 0) {
    return;
  }
  FUN_1001ce088(param_1,4);
  iVar1 = (((*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x30)) + *(int *)(param_1 + 0x28)) -
          param_3) + 4;
  if ((iVar1 == 0) && (*(char *)(param_1 + 0x50) != '\x01')) {
    return;
  }
  uVar3 = param_1;
  FUN_1001ce0bc(param_1,iVar1);
  puVar4 = *(ulong **)(param_1 + 0x38);
  if ((ulong)(*(long *)(param_1 + 0x30) - (long)puVar4) < 8) {
    FUN_1001cde7c(param_1,8);
    puVar4 = *(ulong **)(param_1 + 0x38);
  }
  *puVar4 = uVar3 & 0xffffffff | (ulong)param_2 << 0x20;
  *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + 8;
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
  uVar2 = (uint)*(ushort *)(param_1 + 0x44);
  if (*(ushort *)(param_1 + 0x44) <= param_2) {
    uVar2 = param_2;
  }
  *(short *)(param_1 + 0x44) = (short)uVar2;
  return;
}



/* Entry: 1001ce354; end: 1001ce3ab;  */

void FUN_1001ce354(ulong param_1,uint param_2,undefined8 param_3,int param_4)

{
  uint uVar1;
  ulong uVar2;
  ulong *puVar3;
  
  if (((int)param_3 == param_4) && (*(char *)(param_1 + 0x50) != '\x01')) {
    return;
  }
  uVar2 = param_1;
  FUN_1001ce0bc(param_1,param_3);
  puVar3 = *(ulong **)(param_1 + 0x38);
  if ((ulong)(*(long *)(param_1 + 0x30) - (long)puVar3) < 8) {
    FUN_1001cde7c(param_1,8);
    puVar3 = *(ulong **)(param_1 + 0x38);
  }
  *puVar3 = uVar2 & 0xffffffff | (ulong)param_2 << 0x20;
  *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + 8;
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
  uVar1 = (uint)*(ushort *)(param_1 + 0x44);
  if (*(ushort *)(param_1 + 0x44) <= param_2) {
    uVar1 = param_2;
  }
  *(short *)(param_1 + 0x44) = (short)uVar1;
  return;
}



/* Entry: 1001ce3ac; end: 1001ce42b;  */

void FUN_1001ce3ac(long param_1,uint param_2,ulong param_3)

{
  uint uVar1;
  ulong *puVar2;
  
  puVar2 = *(ulong **)(param_1 + 0x38);
  if ((ulong)(*(long *)(param_1 + 0x30) - (long)puVar2) < 8) {
    FUN_1001cde7c(param_1,8);
    puVar2 = *(ulong **)(param_1 + 0x38);
  }
  *puVar2 = param_3 & 0xffffffff | (ulong)param_2 << 0x20;
  *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + 8;
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
  uVar1 = (uint)*(ushort *)(param_1 + 0x44);
  if (*(ushort *)(param_1 + 0x44) <= param_2) {
    uVar1 = param_2;
  }
  *(short *)(param_1 + 0x44) = (short)uVar1;
  return;
}



/* Entry: 1001ce42c; end: 1001ce547;  */

void FUN_1001ce42c(ulong param_1,uint param_2,undefined8 param_3,int param_4)

{
  uint uVar1;
  ulong uVar2;
  ulong *puVar3;
  
  if (((int)param_3 == param_4) && (*(char *)(param_1 + 0x50) != '\x01')) {
    return;
  }
  uVar2 = param_1;
  func_0x0001001ce484(param_1,param_3);
  puVar3 = *(ulong **)(param_1 + 0x38);
  if ((ulong)(*(long *)(param_1 + 0x30) - (long)puVar3) < 8) {
    FUN_1001cde7c(param_1,8);
    puVar3 = *(ulong **)(param_1 + 0x38);
  }
  *puVar3 = uVar2 & 0xffffffff | (ulong)param_2 << 0x20;
  *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + 8;
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
  uVar1 = (uint)*(ushort *)(param_1 + 0x44);
  if (*(ushort *)(param_1 + 0x44) <= param_2) {
    uVar1 = param_2;
  }
  *(short *)(param_1 + 0x44) = (short)uVar1;
  return;
}



/* Entry: 1001ce548; end: 1001ce6fb;  */

ulong FUN_1001ce548(ulong param_1,short param_2)

{
  uint uVar1;
  short sVar2;
  ulong uVar3;
  short *psVar4;
  long lVar5;
  uint *puVar6;
  short *psVar7;
  uint uVar8;
  ulong uVar9;
  uint *puVar10;
  uint *puVar11;
  
  uVar3 = param_1;
  func_0x0001001ce4e8(param_1,0);
  uVar8 = *(ushort *)(param_1 + 0x44) + 2 & 0xffff;
  if (uVar8 < 5) {
    uVar8 = 4;
  }
  uVar9 = (ulong)uVar8;
  *(short *)(param_1 + 0x44) = (short)uVar8;
  lVar5 = *(long *)(param_1 + 0x30);
  if ((ulong)(lVar5 - *(long *)(param_1 + 0x38)) < uVar9) {
    FUN_1001cde7c(param_1,uVar9);
    lVar5 = *(long *)(param_1 + 0x30);
  }
  *(ulong *)(param_1 + 0x30) = lVar5 - uVar9;
  func_0x000107c60ee4(lVar5 - uVar9,uVar9);
  psVar7 = *(short **)(param_1 + 0x30);
  puVar11 = *(uint **)(param_1 + 0x38);
  psVar7[1] = (short)uVar3 - param_2;
  *psVar7 = *(short *)(param_1 + 0x44);
  puVar10 = puVar11 + (ulong)*(uint *)(param_1 + 0x40) * -2;
  puVar6 = puVar10;
  if (*(uint *)(param_1 + 0x40) != 0) {
    do {
      *(short *)((long)psVar7 + (ulong)(ushort)puVar6[1]) = (short)uVar3 - (short)*puVar6;
      puVar6 = puVar6 + 2;
    } while (puVar6 < puVar11);
  }
  *(uint **)(param_1 + 0x38) = puVar10;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined2 *)(param_1 + 0x44) = 0;
  lVar5 = *(long *)(param_1 + 0x20);
  puVar6 = *(uint **)(param_1 + 0x28);
  uVar8 = ((int)lVar5 - (int)psVar7) + (int)puVar6;
  if (*(char *)(param_1 + 0x51) == '\x01' && puVar6 < puVar10) {
    sVar2 = *psVar7;
    puVar11 = puVar6;
    do {
      uVar1 = *puVar11;
      psVar4 = (short *)((long)puVar6 + (lVar5 - (ulong)uVar1));
      if ((sVar2 == *psVar4) && (func_0x000107c610b0(psVar4,psVar7,sVar2), (int)psVar4 == 0)) {
        psVar7 = (short *)((long)psVar7 + (ulong)(uVar8 - (int)uVar3));
        *(short **)(param_1 + 0x30) = psVar7;
        uVar8 = uVar1;
        break;
      }
      puVar11 = puVar11 + 1;
    } while (puVar11 < puVar10);
  }
  if (uVar8 == ((int)lVar5 + (int)puVar6) - (int)psVar7) {
    if ((ulong)((long)psVar7 - (long)puVar10) < 4) {
      FUN_1001cde7c(param_1,4);
      puVar10 = *(uint **)(param_1 + 0x38);
      lVar5 = *(long *)(param_1 + 0x20);
      puVar6 = *(uint **)(param_1 + 0x28);
    }
    *puVar10 = uVar8;
    *(uint **)(param_1 + 0x38) = puVar10 + 1;
  }
  *(uint *)((long)puVar6 + (lVar5 - (uVar3 & 0xffffffff))) = uVar8 - (int)uVar3;
  *(undefined1 *)(param_1 + 0x46) = 0;
  return uVar3;
}



/* Entry: 1001ce6fc; end: 1001ce7e3;  */

void FUN_1001ce6fc(long param_1,int param_2,undefined4 *param_3,int param_4)

{
  long lVar1;
  long lVar2;
  
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_1 + 0x28);
  lVar2 = 8;
  if (param_4 == 0) {
    lVar2 = 4;
  }
  lVar1 = 0;
  if (param_3 != (undefined4 *)0x0) {
    lVar1 = 4;
  }
  FUN_1001cddd0(param_1,lVar2 + lVar1,*(undefined8 *)(param_1 + 0x48));
  if (param_3 != (undefined4 *)0x0) {
    lVar2 = *(long *)(param_1 + 0x30);
    if ((ulong)(lVar2 - *(long *)(param_1 + 0x38)) < 4) {
      FUN_1001cde7c(param_1,4);
      lVar2 = *(long *)(param_1 + 0x30);
    }
    *(long *)(param_1 + 0x30) = lVar2 + -4;
    *(undefined4 *)(lVar2 + -4) = *param_3;
  }
  FUN_1001ce088(param_1,4);
  FUN_1001ce0bc(param_1,(((*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x30)) +
                         *(int *)(param_1 + 0x28)) - param_2) + 4);
  if (param_4 != 0) {
    FUN_1001ce0bc(param_1,(*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x30)) +
                          *(int *)(param_1 + 0x28));
  }
  *(undefined1 *)(param_1 + 0x47) = 1;
  return;
}



/* Entry: 1001ce7e4; end: 1001ce87b;  */

void FUN_1001ce7e4(undefined8 param_1)

{
  FUN_1000285a8(0x11304a408,&UNK_10dcc5b50);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_100264d40,param_1);
  return;
}



/* Entry: 1001ce87c; end: 1001ce897;  */

void FUN_1001ce87c(undefined8 param_1)

{
  FUN_1000285a8(0x112ddccd0,&UNK_10d9a2390);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_10065c10c,param_1);
  return;
}



/* Entry: 1001ce898; end: 1001ce8e7;  */

void FUN_1001ce898(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1001ce8e8; end: 1001ce907;  */

void FUN_1001ce8e8(void)

{
  func_0x000107c61168(&PTR_PTR_112ddcd48);
  return;
}



/* Entry: 1001ce908; end: 1001ce923;  */

void FUN_1001ce908(undefined8 param_1)

{
  FUN_1000285a8(0x112ddccd8,&UNK_10d9a2398);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_10065c0b0,param_1);
  return;
}



/* Entry: 1001ce924; end: 1001ce9a3;  */

void FUN_1001ce924(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112df6a30,&UNK_10d9c5d40);
  puVar1 = &UNK_11043aad8;
  func_0x000107c613fc(&UNK_11043aad8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_1009b5400,puVar1);
  return;
}



/* Entry: 1001ce9a4; end: 1001ce9c3;  */

void FUN_1001ce9a4(void)

{
  func_0x000107c61168(&PTR_PTR_112df6aa0);
  return;
}



/* Entry: 1001ce9c4; end: 1001ce9df;  */

void FUN_1001ce9c4(undefined8 param_1)

{
  FUN_1000285a8(0x112ddcdb0,&UNK_10d9a2570);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_10063f314,param_1);
  return;
}



/* Entry: 1001ce9e0; end: 1001cea2f;  */

void FUN_1001ce9e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1001cea30; end: 1001cea4f;  */

void FUN_1001cea30(void)

{
  func_0x000107c61168(&PTR_PTR_112ddce28);
  return;
}



/* Entry: 1001cea50; end: 1001cea6b;  */

void FUN_1001cea50(undefined8 param_1)

{
  FUN_1000285a8(0x112ddcdb8,&UNK_10d9a2578);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_10063f2b8,param_1);
  return;
}



/* Entry: 1001cea6c; end: 1001ceaeb;  */

void FUN_1001cea6c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112ddf688,&UNK_10d9a6840);
  puVar1 = &UNK_11041ed00;
  func_0x000107c613fc(&UNK_11041ed00,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_100714814,puVar1);
  return;
}



/* Entry: 1001ceaec; end: 1001ceb0b;  */

void FUN_1001ceaec(void)

{
  func_0x000107c61168(&PTR_PTR_112ddf700);
  return;
}



/* Entry: 1001ceb0c; end: 1001cec03; -[SCSQLiteDocObjectContext setUpdatedObject:forClass:byRowid:] */

/* WARNING: Possible PIC construction at 0x0001001ceb8c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001001ceb90) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1001ceb0c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000107c61174(param_3);
  uStack_48 = param_5;
  func_0x000107c5c688();
  param_1 = param_1 + _DAT_11278eb44;
  uStack_50 = param_4;
  FUN_1001cb89c(param_1,param_4,&uStack_50);
  param_1 = param_1 + 0x18;
  FUN_1001cbc64(param_1,param_5,&uStack_48);
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1001cec04; end: 1001ced2b;  */

undefined8
FUN_1001cec04(undefined8 param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5,
             undefined8 param_6,undefined8 param_7)

{
  bool bVar1;
  int iVar2;
  undefined4 uStack_7c;
  undefined1 auStack_78 [40];
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_5);
  iVar2 = (int)*(undefined8 *)(param_4 + 0x58);
  func_0x000107c61390();
  if (iVar2 == 0) {
    uStack_7c = 0xd;
    FUN_1001ceff0(auStack_78,&uStack_7c,1);
    FUN_1001b9adc(param_1,auStack_78,param_3,param_4,param_5,param_6,param_7);
    FUN_1001ba7c0(auStack_78);
    bVar1 = (int)param_1 != 0x65;
  }
  else {
    param_1 = 1;
    bVar1 = true;
  }
  if ((param_2 != 0) && (bVar1)) {
    FUN_1001b9e08(param_4,param_2);
    func_0x000107c613a8();
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_3);
  return param_1;
}



/* Entry: 1001ced2c; end: 1001ced7b;  */

long FUN_1001ced2c(long param_1)

{
  if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
    FUN_1001cec04(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 8),0,
                  *(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x28),
                  *(undefined4 *)(param_1 + 0x20),4);
  }
  func_0x000107c61170(*(undefined8 *)(param_1 + 0x28));
  return param_1;
}



/* Entry: 1001ced7c; end: 1001cef7b;  */

undefined1  [16] FUN_1001ced7c(long *param_1,int *param_2,undefined4 *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  ulong unaff_x24;
  undefined1 auVar11 [16];
  
  uVar10 = (ulong)*param_2;
  uVar9 = param_1[1];
  if (uVar9 != 0) {
    uVar3 = uVar9 - 1;
    if ((uVar9 & uVar3) == 0) {
      unaff_x24 = uVar3 & uVar10;
    }
    else {
      unaff_x24 = uVar10;
      if (uVar9 <= uVar10) {
        uVar6 = 0;
        if (uVar9 != 0) {
          uVar6 = uVar10 / uVar9;
        }
        unaff_x24 = uVar10 - uVar6 * uVar9;
      }
    }
    puVar5 = *(undefined8 **)(*param_1 + unaff_x24 * 8);
    if (puVar5 != (undefined8 *)0x0) {
      for (plVar8 = (long *)*puVar5; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
        uVar6 = plVar8[1];
        if (uVar6 == uVar10) {
          if ((int)plVar8[2] == *param_2) {
            uVar2 = 0;
            goto LAB_1001cef48;
          }
        }
        else {
          if ((uVar9 & uVar3) == 0) {
            uVar6 = uVar6 & uVar3;
          }
          else if (uVar9 <= uVar6) {
            uVar1 = 0;
            if (uVar9 != 0) {
              uVar1 = uVar6 / uVar9;
            }
            uVar6 = uVar6 - uVar1 * uVar9;
          }
          if (uVar6 != unaff_x24) break;
        }
      }
    }
  }
  plVar8 = (long *)0x18;
  func_0x000107c60e20();
  *plVar8 = 0;
  plVar8[1] = uVar10;
  *(undefined4 *)(plVar8 + 2) = *param_3;
  if ((uVar9 == 0) || (*(float *)(param_1 + 4) * (float)uVar9 < (float)(param_1[3] + 1))) {
    uVar3 = 1;
    if (2 < uVar9) {
      uVar3 = (ulong)((uVar9 & uVar9 - 1) != 0);
    }
    uVar3 = uVar3 | uVar9 << 1;
    uVar9 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar3 <= uVar9) {
      uVar3 = uVar9;
    }
    FUN_1001cf034(param_1,uVar3);
    uVar9 = param_1[1];
    if ((uVar9 & uVar9 - 1) == 0) {
      unaff_x24 = uVar9 - 1 & uVar10;
    }
    else {
      unaff_x24 = uVar10;
      if (uVar9 <= uVar10) {
        uVar3 = 0;
        if (uVar9 != 0) {
          uVar3 = uVar10 / uVar9;
        }
        unaff_x24 = uVar10 - uVar3 * uVar9;
      }
    }
  }
  lVar4 = *param_1;
  plVar7 = *(long **)(lVar4 + unaff_x24 * 8);
  if (plVar7 == (long *)0x0) {
    plVar7 = param_1 + 2;
    *plVar8 = *plVar7;
    *plVar7 = (long)plVar8;
    *(long **)(lVar4 + unaff_x24 * 8) = plVar7;
    if (*plVar8 != 0) {
      uVar10 = *(ulong *)(*plVar8 + 8);
      if ((uVar9 & uVar9 - 1) == 0) {
        uVar10 = uVar10 & uVar9 - 1;
      }
      else if (uVar9 <= uVar10) {
        uVar3 = 0;
        if (uVar9 != 0) {
          uVar3 = uVar10 / uVar9;
        }
        uVar10 = uVar10 - uVar3 * uVar9;
      }
      *(long **)(lVar4 + uVar10 * 8) = plVar8;
    }
  }
  else {
    *plVar8 = *plVar7;
    *plVar7 = (long)plVar8;
  }
  param_1[3] = param_1[3] + 1;
  uVar2 = 1;
LAB_1001cef48:
  auVar11._8_8_ = uVar2;
  auVar11._0_8_ = plVar8;
  return auVar11;
}



/* Entry: 1001cef7c; end: 1001cefaf;  */

void FUN_1001cef7c(undefined8 param_1,undefined8 param_2)

{
  FUN_1001ced7c(param_1,param_2,param_2);
  return;
}



/* Entry: 1001cefb0; end: 1001cefef;  */

void FUN_1001cefb0(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 4) {
    func_0x0001001cef98(param_1,param_2);
  }
  return;
}



/* Entry: 1001ceff0; end: 1001cf033;  */

undefined8 * FUN_1001ceff0(undefined8 *param_1,long param_2,long param_3)

{
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  FUN_1001cefb0(param_1,param_2,param_2 + param_3 * 4);
  return param_1;
}



/* Entry: 1001cf034; end: 1001cf237;  */

void FUN_1001cf034(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  
  if (param_2 - 1 == 0) {
    param_2 = 2;
  }
  else if ((param_2 & param_2 - 1) != 0) {
    func_0x000107c60c44();
  }
  uVar9 = param_1[1];
  if (uVar9 < param_2) {
LAB_1001cf07c:
    if (param_2 == 0) {
      lVar8 = *param_1;
      *param_1 = 0;
      if (lVar8 != 0) {
        func_0x000107c60e14();
      }
      param_1[1] = 0;
    }
    else {
      if (param_2 >> 0x3d != 0) {
        func_0x000104bd35f4();
        return;
      }
      lVar8 = param_2 << 3;
      func_0x000107c60e20();
      lVar2 = *param_1;
      *param_1 = lVar8;
      if (lVar2 != 0) {
        func_0x000107c60e14();
        lVar8 = *param_1;
      }
      param_1[1] = param_2;
      func_0x000107c60ee4(lVar8,param_2 << 3);
      plVar4 = (long *)param_1[2];
      if (plVar4 != (long *)0x0) {
        uVar9 = plVar4[1];
        uVar3 = param_2 - 1;
        if ((param_2 & uVar3) == 0) {
          uVar9 = uVar9 & uVar3;
        }
        else if (param_2 <= uVar9) {
          uVar7 = 0;
          if (param_2 != 0) {
            uVar7 = uVar9 / param_2;
          }
          uVar9 = uVar9 - uVar7 * param_2;
        }
        *(long **)(lVar8 + uVar9 * 8) = param_1 + 2;
        plVar5 = (long *)*plVar4;
        while (plVar5 != (long *)0x0) {
          uVar7 = plVar5[1];
          if ((param_2 & uVar3) == 0) {
            uVar7 = uVar7 & uVar3;
          }
          else if (param_2 <= uVar7) {
            uVar1 = 0;
            if (param_2 != 0) {
              uVar1 = uVar7 / param_2;
            }
            uVar7 = uVar7 - uVar1 * param_2;
          }
          plVar6 = plVar5;
          if (uVar7 != uVar9) {
            if (*(long *)(lVar8 + uVar7 * 8) == 0) {
              *(long **)(lVar8 + uVar7 * 8) = plVar4;
              uVar9 = uVar7;
            }
            else {
              *plVar4 = *plVar5;
              *plVar5 = **(undefined8 **)(lVar8 + uVar7 * 8);
              **(long **)(lVar8 + uVar7 * 8) = (long)plVar5;
              plVar6 = plVar4;
            }
          }
          plVar4 = plVar6;
          plVar5 = (long *)*plVar6;
        }
      }
    }
    return;
  }
  if (param_2 < uVar9) {
    uVar3 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((uVar9 < 3) || ((uVar9 & uVar9 - 1) != 0)) {
      func_0x000107c60c44();
    }
    else if (1 < uVar3) {
      uVar3 = 1L << (-LZCOUNT(uVar3 - 1) & 0x3fU);
    }
    if (param_2 <= uVar3) {
      param_2 = uVar3;
    }
    if (param_2 < uVar9) goto LAB_1001cf07c;
  }
  return;
}



/* Entry: 1001cf238; end: 1001cf24b;  */

void FUN_1001cf238(void)

{
  return;
}



/* Entry: 1001cf24c; end: 1001cf287; -[SCDocPrefItemChangeRequest .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001001cf264: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001001cf268) */

void FUN_1001cf24c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x48,0);
  return;
}



/* Entry: 1001cf288; end: 1001cf2a3;  */

void FUN_1001cf288(undefined8 param_1)

{
  FUN_1000285a8(0x112ddf690,&UNK_10d9a6848);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1007147b8,param_1);
  return;
}



/* Entry: 1001cf2a4; end: 1001cf2f3;  */

void FUN_1001cf2a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1001cf2f4; end: 1001cf313;  */

void FUN_1001cf2f4(void)

{
  func_0x000107c61168(&PTR_PTR_11295a010);
  return;
}



/* Entry: 1001cf314; end: 1001cf32f;  */

void FUN_1001cf314(undefined8 param_1)

{
  FUN_1000285a8(0x112ddcf80,&UNK_10d9a2860);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_10065be48,param_1);
  return;
}



/* Entry: 1001cf330; end: 1001cf37f;  */

void FUN_1001cf330(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1001cf380; end: 1001cf39f;  */

void FUN_1001cf380(void)

{
  func_0x000107c61168(&PTR_PTR_112ddcff8);
  return;
}



/* Entry: 1001cf3a0; end: 1001cf3d7;  */

void FUN_1001cf3a0(undefined8 param_1)

{
  FUN_1000285a8(0x112ddcf88,&UNK_10d9a2868);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_10065bdec,param_1);
  return;
}



/* Entry: 1001cf3d8; end: 1001cf427;  */

void FUN_1001cf3d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1001cf428; end: 1001cf447;  */

void FUN_1001cf428(void)

{
  func_0x000107c61168(&PTR_PTR_112ddd0d8);
  return;
}



/* Entry: 1001cf448; end: 1001cf47f;  */

void FUN_1001cf448(undefined8 param_1)

{
  FUN_1000285a8(0x112ddd068,&UNK_10d9a2a38);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_10063ec5c,param_1);
  return;
}



/* Entry: 1001cf480; end: 1001cf49f;  */

void FUN_1001cf480(void)

{
  func_0x000107c61168(&PTR_PTR_112db02f0);
  return;
}



/* Entry: 1001cf4a0; end: 1001cf6f7;  */

/* WARNING: Possible PIC construction at 0x0001001cf5c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001001cf5f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001001cf63c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001001cf64c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001001cf6cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001001cf6dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001001cf6d0) */
/* WARNING: Removing unreachable block (ram,0x0001001cf650) */
/* WARNING: Removing unreachable block (ram,0x0001001cf68c) */
/* WARNING: Removing unreachable block (ram,0x0001001cf6c8) */
/* WARNING: Removing unreachable block (ram,0x0001001cf668) */
/* WARNING: Removing unreachable block (ram,0x000107c61110) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf288) */
/* WARNING: Removing unreachable block (ram,0x0001001cf640) */
/* WARNING: Removing unreachable block (ram,0x0001001cf5fc) */
/* WARNING: Removing unreachable block (ram,0x0001001cf62c) */
/* WARNING: Removing unreachable block (ram,0x0001001cf60c) */
/* WARNING: Removing unreachable block (ram,0x0001001cf638) */
/* WARNING: Removing unreachable block (ram,0x0001001cf5cc) */
/* WARNING: Removing unreachable block (ram,0x0001001cf5d8) */
/* WARNING: Removing unreachable block (ram,0x0001001cf6e0) */
/* WARNING: Removing unreachable block (ram,0x0001001cf6f0) */
/* WARNING: Removing unreachable block (ram,0x0001001cf5ac) */

void FUN_1001cf4a0(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uStack_130;
  ulong *puStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  undefined8 uStack_68;
  
  uStack_68 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174();
  func_0x000107c5b5c8(param_1,param_2,PTR_s_compare__1125ae690);
  func_0x000107c61180();
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  puStack_128 = (ulong *)0x0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000107c4080c(param_1,param_2,&uStack_130,auStack_e8,0x10);
  if (uVar1 != 0) {
    if (*plStack_120 != *plStack_120) {
      func_0x000107c61128(param_1);
    }
    param_1 = *puStack_128;
    uVar1 = param_1;
    func_0x000107c4adac();
    if (uVar1 < 0xe) {
      func_0x000107c61174(param_1);
    }
    else {
      uVar1 = param_1;
      func_0x000107c4adac(param_1);
      func_0x000107c5c380(param_1,param_2,0,uVar1 - 0xd);
      func_0x000107c61180();
    }
    func_0x000107c4d2d4(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1001cf6f8; end: 1001cf76b; -[SCDocObjectLoggingActivityMonitor docObjectContextTransactionCommitForChangeRequests:duration:] */

void FUN_1001cf6f8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1001cf4a0(param_4);
  func_0x000107c61180();
  FUN_1001cf818(param_1,*(undefined8 *)(param_2 + 0x18),param_4);
  FUN_1001cfa18(*(undefined8 *)(param_2 + 0x18),param_4,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1001cf76c; end: 1001cf7eb;  */

void FUN_1001cf76c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112dc0858,&UNK_10d97d020);
  puVar1 = &UNK_1103f8008;
  func_0x000107c613fc(&UNK_1103f8008,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(&UNK_1016bd050,puVar1);
  return;
}



/* Entry: 1001cf7ec; end: 1001cf817;  */

void FUN_1001cf7ec(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1001cf818; end: 1001cf883;  */

void FUN_1001cf818(double param_1,long param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  if (param_2 != 0) {
    FUN_1001cf884(param_2,param_3,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1001cf884; end: 1001cfa17;  */

long * FUN_1001cf884(long param_1,long *param_2,undefined1 *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar5 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar2 = param_2;
  puVar4 = param_3;
  func_0x000107c61174(param_2);
  if (param_1 != 0) {
    plVar1 = *(long **)(param_1 + 8);
    plVar2 = (long *)&UNK_110d25618;
    (**(code **)(*plVar1 + 0x28))();
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(param_1 + 8);
      func_0x000107c61174(param_2);
      if (param_2 == (long *)0x0) {
        plVar2 = (long *)&UNK_10f7809fd;
      }
      else {
        plVar2 = param_2;
        func_0x000107c61178(param_2);
        func_0x000107c3ac4c();
      }
      func_0x000107c61170(param_2);
      FUN_10002b838(auStack_60,plVar2);
      uStack_80 = 0;
      uStack_78 = 0;
      uStack_70 = 0;
      FUN_10007e1e8(&uStack_80,auStack_60,&lStack_48,1);
      plVar2 = (long *)&UNK_110d25618;
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110d25618,&uStack_80,param_3);
      puStack_68 = (undefined1 *)&uStack_80;
      FUN_10007e5dc(&puStack_68);
      puVar4 = (undefined1 *)puVar5;
      if (cStack_49 < '\0') {
        func_0x000107c60e14(auStack_60[0]);
        puVar4 = (undefined1 *)puVar5;
      }
    }
  }
  plVar1 = param_2;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return plVar1;
  }
  func_0x000107c60e78();
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_2);
  func_0x000107c60bd8();
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(plVar2);
  if (plVar1 != (long *)0x0) {
    plVar3 = (long *)plVar1[1];
    (**(code **)(*plVar3 + 0x28))(plVar3,&UNK_110d257f8);
    if ((int)plVar3 != 0) {
      plVar1 = (long *)plVar1[1];
      func_0x000107c61174(plVar2);
      if (plVar2 == (long *)0x0) {
        plVar3 = (long *)&UNK_10f7809fd;
      }
      else {
        plVar3 = plVar2;
        func_0x000107c61178(plVar2);
        func_0x000107c3ac4c();
      }
      func_0x000107c61170(plVar2);
      FUN_10002b838(auStack_e0,plVar3);
      uStack_100 = 0;
      uStack_f8 = 0;
      uStack_f0 = 0;
      FUN_10007e1e8(&uStack_100,auStack_e0,&lStack_c8,1);
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110d257f8,&uStack_100,(long)puVar4 * 100);
      puStack_e8 = (undefined1 *)&uStack_100;
      FUN_10007e5dc(&puStack_e8);
      if (cStack_c9 < '\0') {
        func_0x000107c60e14(auStack_e0[0]);
      }
    }
  }
  plVar1 = plVar2;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_c8) {
    func_0x000107c60e78();
    func_0x000107c61170(plVar2);
    func_0x000107c61170(plVar2);
    func_0x000107c60bd8();
    plVar2 = (long *)plVar1[2];
    while (plVar2 != (long *)0x0) {
      lVar6 = *plVar2;
      func_0x000107c61170(plVar2[3]);
      func_0x000107c60e14(plVar2);
      plVar2 = (long *)lVar6;
    }
    lVar6 = *plVar1;
    *plVar1 = 0;
    if (lVar6 != 0) {
      func_0x000107c60e14();
    }
    return plVar1;
  }
  return plVar1;
}



/* Entry: 1001cfa18; end: 1001cfbaf;  */

long * FUN_1001cfa18(long param_1,long *param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_2);
  if (param_1 != 0) {
    plVar1 = *(long **)(param_1 + 8);
    (**(code **)(*plVar1 + 0x28))(plVar1,&UNK_110d257f8);
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(param_1 + 8);
      func_0x000107c61174(param_2);
      if (param_2 == (long *)0x0) {
        plVar2 = (long *)&UNK_10f7809fd;
      }
      else {
        plVar2 = param_2;
        func_0x000107c61178(param_2);
        func_0x000107c3ac4c();
      }
      func_0x000107c61170(param_2);
      FUN_10002b838(auStack_60,plVar2);
      uStack_80 = 0;
      uStack_78 = 0;
      uStack_70 = 0;
      FUN_10007e1e8(&uStack_80,auStack_60,&lStack_48,1);
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110d257f8,&uStack_80,param_3 * 100);
      puStack_68 = (undefined1 *)&uStack_80;
      FUN_10007e5dc(&puStack_68);
      if (cStack_49 < '\0') {
        func_0x000107c60e14(auStack_60[0]);
      }
    }
  }
  plVar1 = param_2;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    func_0x000107c60e78();
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_2);
    func_0x000107c60bd8();
    plVar2 = (long *)plVar1[2];
    while (plVar2 != (long *)0x0) {
      lVar3 = *plVar2;
      func_0x000107c61170(plVar2[3]);
      func_0x000107c60e14(plVar2);
      plVar2 = (long *)lVar3;
    }
    lVar3 = *plVar1;
    *plVar1 = 0;
    if (lVar3 != 0) {
      func_0x000107c60e14();
    }
    return plVar1;
  }
  return plVar1;
}



/* Entry: 1001cfbb0; end: 1001cfc0b;  */

long * FUN_1001cfbb0(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    func_0x000107c61170(plVar1[3]);
    func_0x000107c60e14(plVar1);
    plVar1 = (long *)lVar2;
  }
  lVar2 = *param_1;
  *param_1 = 0;
  if (lVar2 != 0) {
    func_0x000107c60e14();
  }
  return param_1;
}



/* Entry: 1001cfc0c; end: 1001cfc8f;  */

void FUN_1001cfc0c(long *param_1)

{
  long lVar1;
  
  while (param_1 != (long *)0x0) {
    lVar1 = *param_1;
    FUN_1001cfbb0(param_1 + 3);
    func_0x000107c60e14(param_1);
    param_1 = (long *)lVar1;
  }
  return;
}



/* Entry: 1001cfc90; end: 1001cfd37;  */

long * FUN_1001cfc90(long *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  
  uVar2 = param_1[1];
  if ((uVar2 != 0) && (param_1[3] != 0)) {
    uVar3 = *param_2;
    uVar4 = uVar2 - 1;
    if ((uVar2 & uVar4) == 0) {
      uVar5 = uVar3 & uVar4;
    }
    else {
      uVar5 = uVar3;
      if (uVar2 <= uVar3) {
        uVar5 = 0;
        if (uVar2 != 0) {
          uVar5 = uVar3 / uVar2;
        }
        uVar5 = uVar3 - uVar5 * uVar2;
      }
    }
    plVar6 = *(long **)(*param_1 + uVar5 * 8);
    if (plVar6 != (long *)0x0) {
      plVar6 = (long *)*plVar6;
      do {
        if (plVar6 == (long *)0x0) {
          return (long *)0x0;
        }
        uVar7 = plVar6[1];
        if (uVar7 == uVar3) {
          if (plVar6[2] == uVar3) {
            return plVar6;
          }
        }
        else {
          if ((uVar2 & uVar4) == 0) {
            uVar7 = uVar7 & uVar4;
          }
          else if (uVar2 <= uVar7) {
            uVar1 = 0;
            if (uVar2 != 0) {
              uVar1 = uVar7 / uVar2;
            }
            uVar7 = uVar7 - uVar1 * uVar2;
          }
          if (uVar7 != uVar5) {
            return (long *)0x0;
          }
        }
        plVar6 = (long *)*plVar6;
      } while( true );
    }
  }
  return (long *)0x0;
}



/* Entry: 1001cfd38; end: 1001cfe5f;  */

void FUN_1001cfd38(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  
  for (plVar5 = *(long **)(param_1 + 0x10); plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
    lVar1 = param_2;
    FUN_1001cfc90(param_2,plVar5 + 2);
    if (lVar1 != 0) {
      for (plVar6 = (long *)plVar5[5]; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
        lVar2 = lVar1 + 0x18;
        func_0x000100c54734(lVar2,plVar6 + 2);
        if (lVar2 != 0) {
          puVar4 = (undefined *)plVar6[3];
          func_0x000107c61174(puVar4);
          puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
          func_0x000107c4d8b8();
          func_0x000107c61180();
          func_0x000107c61170();
          plVar7 = (long *)(lVar2 + 0x28);
          if (puVar4 == puVar3) {
            while (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0) {
              func_0x000100c547dc(plVar7 + 3,0);
            }
            func_0x000107c306c0(lVar1 + 0x18,lVar2);
          }
          else {
            while (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0) {
              func_0x000100c547dc(plVar7 + 3,puVar4);
            }
          }
          func_0x000107c61170(puVar4);
        }
      }
      if (*(long *)(lVar1 + 0x30) == 0) {
        func_0x000107c306c8(param_2,lVar1);
      }
    }
  }
  return;
}



/* Entry: 1001cfe60; end: 1001d089b;  */

void FUN_1001cfe60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6)

{
  long *plVar1;
  bool bVar2;
  long ***ppplVar3;
  code *pcVar4;
  uint uVar5;
  long lVar6;
  undefined *puVar7;
  long ****pppplVar8;
  undefined8 *puVar9;
  long *plVar10;
  long **pplVar11;
  long ***ppplVar12;
  long *plVar13;
  uint *puVar14;
  undefined8 uVar15;
  ulong uVar16;
  int iVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  long ****pppplVar21;
  long ****pppplVar22;
  long *plVar23;
  long *plVar24;
  long lVar25;
  ulong uVar26;
  undefined *puVar27;
  long lVar28;
  long *plVar29;
  long *plVar30;
  long *plVar31;
  long *plVar32;
  uint uStack_13c;
  long **pplStack_138;
  long **pplStack_130;
  long **pplStack_128;
  long **pplStack_120;
  long **pplStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_100;
  long lStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  long *plStack_d8;
  long *plStack_d0;
  long lStack_c8;
  long ***ppplStack_c0;
  long ***ppplStack_b8;
  long ***ppplStack_b0;
  long *plStack_a8;
  long *plStack_a0;
  long *plStack_98;
  long *plStack_90;
  long lStack_88;
  long lStack_80;
  long *plStack_78;
  long *plStack_70;
  
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  plVar30 = *(long **)(param_5 + 0x10);
  if (plVar30 != (long *)0x0) {
    do {
      lVar6 = param_6;
      FUN_1001d089c(param_6,plVar30 + 2);
      if (lVar6 != 0) {
        plStack_a8 = (long *)0x0;
        plStack_a0 = (long *)0x0;
        plStack_98 = (long *)0x0;
        uVar16 = plVar30[6];
        if (uVar16 != 0) {
          if (uVar16 >> 0x3d != 0) {
            func_0x000107c306a0();
LAB_1001d077c:
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1001d0780);
            (*pcVar4)();
          }
          pplVar11 = &plStack_98;
          pplStack_118 = &plStack_98;
          FUN_100104040();
          pplStack_120 = pplVar11 + uVar16;
          pplStack_138 = pplVar11;
          pplStack_130 = pplVar11;
          pplStack_128 = pplVar11;
          FUN_100104074(&plStack_a8,&pplStack_138);
          FUN_100104120(&pplStack_138);
        }
        ppplStack_c0 = (long ***)0x0;
        ppplStack_b8 = (long ***)0x0;
        ppplStack_b0 = (long ***)0x0;
        puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
        for (plVar23 = (long *)plVar30[5]; PTR__OBJC_CLASS___NSNull_1126aef28 = puVar7,
            plVar23 != (long *)0x0; plVar23 = (long *)*plVar23) {
          puVar27 = (undefined *)plVar23[3];
          func_0x000107c4d8b8();
          func_0x000107c61180();
          func_0x000107c61170();
          if (puVar27 == puVar7) {
            if (ppplStack_b8 < ppplStack_b0) {
              *ppplStack_b8 = (long **)plVar23[2];
              ppplStack_b8 = ppplStack_b8 + 1;
            }
            else {
              lVar20 = (long)ppplStack_b8 - (long)ppplStack_c0;
              uVar16 = (lVar20 >> 3) + 1;
              if (uVar16 >> 0x3d != 0) {
                func_0x000104bef190();
                goto LAB_1001d077c;
              }
              uVar26 = (long)ppplStack_b0 - (long)ppplStack_c0 >> 2;
              if (uVar26 <= uVar16) {
                uVar26 = uVar16;
              }
              if (0x7ffffffffffffff7 < (ulong)((long)ppplStack_b0 - (long)ppplStack_c0)) {
                uVar26 = 0x1fffffffffffffff;
              }
              pppplVar8 = &ppplStack_b0;
              FUN_10065b9f0();
              puVar9 = (undefined8 *)((long)pppplVar8 + lVar20);
              pppplVar22 = (long ****)(puVar9 + 1);
              *puVar9 = plVar23[2];
              pppplVar21 = (long ****)((long)puVar9 - ((long)ppplStack_b8 - (long)ppplStack_c0));
              func_0x000107c610b4(pppplVar21);
              bVar2 = (long ****)ppplStack_c0 != (long ****)0x0;
              ppplStack_c0 = (long ***)pppplVar21;
              ppplStack_b8 = (long ***)pppplVar22;
              ppplStack_b0 = (long ***)(pppplVar8 + uVar26);
              if (bVar2) {
                func_0x000107c60e14();
                ppplStack_b8 = (long ***)pppplVar22;
              }
            }
          }
          else {
            FUN_100103f40(&plStack_a8,plVar23 + 3);
          }
          puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
        }
        for (plVar23 = *(long **)(lVar6 + 0x28); plVar23 != (long *)0x0; plVar23 = (long *)*plVar23)
        {
          pplStack_138 = (long **)(plVar23 + 2);
          lVar20 = lVar6 + 0x18;
          FUN_1004e7c3c(lVar20,pplStack_138,&UNK_10dd5b8f9,&pplStack_138,&plStack_90);
          puVar9 = *(undefined8 **)(lVar20 + 0x40);
          func_0x000107c42c54();
          plVar10 = *(long **)(lVar20 + 0x40);
          func_0x000107c4e034();
          ppplVar3 = ppplStack_b8;
          plStack_d8 = (long *)0x0;
          plStack_d0 = (long *)0x0;
          lStack_c8 = 0;
          if (ppplStack_c0 == ppplStack_b8) {
            bVar2 = false;
            plVar31 = plStack_a8;
            plVar32 = plStack_a0;
          }
          else {
            bVar2 = false;
            pppplVar8 = (long ****)ppplStack_c0;
            do {
              lVar28 = lVar20 + 0x18;
              func_0x000100c5494c(lVar28,pppplVar8);
              if (lVar28 != 0) {
                plVar32 = plStack_d8;
                plVar31 = plStack_d8;
                plVar13 = plStack_d0;
                if (!bVar2) {
                  pplVar11 = *(long ***)(lVar20 + 0x40);
                  func_0x000107c3e15c();
                  plVar32 = plStack_d8;
                  plVar31 = plStack_d8;
                  plVar13 = plStack_d0;
                  if (&plStack_d8 != pplVar11) {
                    FUN_100104d5c(&plStack_d8,*pplVar11,pplVar11[1],
                                  (long)pplVar11[1] - (long)*pplVar11 >> 3);
                    plVar32 = plStack_d8;
                    plVar31 = plStack_d8;
                    plVar13 = plStack_d0;
                  }
                }
                for (; plVar29 = plStack_d0, bVar2 = plVar32 != plStack_d0, plStack_d0 = plVar13,
                    bVar2; plVar32 = plVar32 + 1) {
                  ppplVar12 = (long ***)*plVar32;
                  func_0x000107c50940();
                  plVar31 = plVar32;
                  if (ppplVar12 == *pppplVar8) break;
                  plVar31 = plVar29;
                  plVar13 = plStack_d0;
                  plStack_d0 = plVar29;
                }
                plVar32 = plStack_d0;
                if (plVar31 != plStack_d0) {
                  while (plVar29 = plVar31 + 1, plVar13 = plStack_d0, plVar29 != plVar32) {
                    lVar25 = plVar29[-1];
                    plVar29[-1] = *plVar29;
                    *plVar29 = 0;
                    func_0x000107c61170(lVar25);
                    plVar31 = plVar29;
                  }
                  while (plVar32 = plVar31, plVar31 != plVar13) {
                    func_0x000107c61170(plVar13[-1]);
                    plVar13 = plVar13 + -1;
                  }
                }
                plStack_d0 = plVar32;
                func_0x000107c28e5c(lVar20 + 0x18,lVar28);
                bVar2 = true;
              }
              pppplVar8 = pppplVar8 + 1;
              plVar31 = plStack_a8;
              plVar32 = plStack_a0;
            } while (pppplVar8 != (long ****)ppplVar3);
          }
          for (; plVar31 != plVar32; plVar31 = plVar31 + 1) {
            pplVar11 = (long **)*plVar31;
            func_0x000107c50940();
            plVar13 = (long *)*puVar9;
            pplStack_138 = pplVar11;
            (**(code **)(*plVar13 + 0x28))(plVar13,0,*plVar31,&uStack_13c);
            if (((int)plVar13 == 0) || ((uStack_13c & 1) != 0)) {
              lVar28 = lVar20 + 0x18;
              func_0x000100c5494c(lVar28,&pplStack_138);
              if (lVar28 != 0) {
                plVar13 = plStack_d8;
                plVar29 = plStack_d8;
                plVar24 = plStack_d0;
                if (!bVar2) {
                  pplVar11 = *(long ***)(lVar20 + 0x40);
                  func_0x000107c3e15c();
                  plVar13 = plStack_d8;
                  plVar29 = plStack_d8;
                  plVar24 = plStack_d0;
                  if (&plStack_d8 != pplVar11) {
                    FUN_100104d5c(&plStack_d8,*pplVar11,pplVar11[1],
                                  (long)pplVar11[1] - (long)*pplVar11 >> 3);
                    plVar13 = plStack_d8;
                    plVar29 = plStack_d8;
                    plVar24 = plStack_d0;
                  }
                }
                for (; plVar1 = plStack_d0, bVar2 = plVar13 != plStack_d0, plStack_d0 = plVar24,
                    bVar2; plVar13 = plVar13 + 1) {
                  pplVar11 = (long **)*plVar13;
                  func_0x000107c50940();
                  plVar29 = plVar13;
                  if (pplVar11 == pplStack_138) break;
                  plVar29 = plVar1;
                  plVar24 = plStack_d0;
                  plStack_d0 = plVar1;
                }
                plVar13 = plStack_d0;
                if (plVar29 != plStack_d0) {
                  while (plVar1 = plVar29 + 1, plVar24 = plStack_d0, plVar1 != plVar13) {
                    lVar25 = plVar1[-1];
                    plVar1[-1] = *plVar1;
                    *plVar1 = 0;
                    func_0x000107c61170(lVar25);
                    plVar29 = plVar1;
                  }
                  while (plVar13 = plVar29, plVar29 != plVar24) {
                    func_0x000107c61170(plVar24[-1]);
                    plVar24 = plVar24 + -1;
                  }
                }
                plStack_d0 = plVar13;
                func_0x000107c28e5c(lVar20 + 0x18,lVar28);
                plVar13 = plStack_d0;
                goto LAB_1001d0490;
              }
            }
            else {
              if (!bVar2) {
                pplVar11 = *(long ***)(lVar20 + 0x40);
                func_0x000107c3e15c();
                if (&plStack_d8 != pplVar11) {
                  FUN_100104d5c(&plStack_d8,*pplVar11,pplVar11[1],
                                (long)pplVar11[1] - (long)*pplVar11 >> 3);
                }
              }
              plVar29 = plStack_d0;
              plVar13 = plStack_d8;
              lStack_e8 = 0;
              uStack_e0 = 0;
              lStack_f0 = 0;
              func_0x000100c43640(&lStack_f0,*plVar10,plVar10[1],plVar10[1] - *plVar10 >> 5);
              func_0x000100c4383c(plVar13,plVar29,plVar31,&lStack_f0,&plStack_90);
              if (lStack_f0 != 0) {
                lStack_e8 = lStack_f0;
                func_0x000107c60e14();
              }
              lVar28 = lVar20 + 0x18;
              func_0x000100c5494c(lVar28,&pplStack_138);
              plVar1 = plStack_d0;
              plVar29 = plStack_d8;
              plVar24 = plStack_d8;
              if (lVar28 == 0) {
                func_0x000100c438c0(&plStack_d8,plVar13,plVar31);
                func_0x000107c28aac(lVar20 + 0x18,&pplStack_138,&pplStack_138);
                plVar13 = plStack_d0;
              }
              else {
                for (; plVar29 != plVar1; plVar29 = plVar29 + 1) {
                  pplVar11 = (long **)*plVar29;
                  func_0x000107c50940();
                  plVar24 = plVar29;
                  if (pplVar11 == pplStack_138) break;
                  plVar24 = plVar1;
                }
                if (plVar24 == plStack_d0) {
                  func_0x000100c438c0(&plStack_d8,plVar13,plVar31);
                  plVar13 = plStack_d0;
                }
                else if (plVar24 == plVar13) {
                  lVar25 = *plVar31;
                  func_0x000107c61174(lVar25);
                  lVar28 = *plVar13;
                  *plVar13 = lVar25;
                  func_0x000107c61170(lVar28);
                  plVar13 = plStack_d0;
                }
                else {
                  lVar28 = (long)plVar24 - (long)plStack_d8;
                  if (plVar24 < plVar13) {
                    func_0x000100c438c0(&plStack_d8,plVar13,plVar31);
                    plVar29 = plStack_d0;
                    plVar13 = (long *)((long)plStack_d8 + lVar28);
                    while (plVar24 = plVar13 + 1, plVar1 = plStack_d0, plVar24 != plVar29) {
                      lVar28 = plVar24[-1];
                      plVar24[-1] = *plVar24;
                      *plVar24 = 0;
                      func_0x000107c61170(lVar28);
                      plVar13 = plVar24;
                    }
                    while (plVar13 != plVar1) {
                      func_0x000107c61170(plVar1[-1]);
                      plVar1 = plVar1 + -1;
                    }
                  }
                  else {
                    func_0x000100c438c0(&plStack_d8,plVar13,plVar31);
                    plVar24 = plStack_d0;
                    plVar29 = (long *)((long)plStack_d8 + lVar28 + 0x10);
                    if (plVar29 == plStack_d0) {
                      plVar13 = (long *)((long)plStack_d8 + lVar28 + 8);
                      plVar1 = plStack_d0;
                    }
                    else {
                      do {
                        plVar13 = plVar29;
                        lVar28 = plVar13[-1];
                        plVar13[-1] = *plVar13;
                        *plVar13 = 0;
                        func_0x000107c61170(lVar28);
                        plVar29 = plVar13 + 1;
                        plVar1 = plStack_d0;
                      } while (plVar13 + 1 != plVar24);
                    }
                    while (plVar13 != plVar1) {
                      func_0x000107c61170(plVar1[-1]);
                      plVar1 = plVar1 + -1;
                    }
                  }
                }
              }
LAB_1001d0490:
              plStack_d0 = plVar13;
              bVar2 = true;
            }
          }
          if (bVar2) {
            puVar14 = *(uint **)(lVar20 + 0x40);
            func_0x000107c4b624();
            pplStack_138 = (long **)0x0;
            pplStack_130 = (long **)((ulong)pplStack_130 & 0xffffffff00000000);
            pplStack_120 = (long **)0x0;
            pplStack_128 = (long **)0x0;
            uStack_110 = 0;
            pplStack_118 = (long **)0x0;
            lStack_100 = 0;
            uStack_108 = 0;
            uVar5 = *puVar14;
            uVar16 = (ulong)uVar5;
            plVar10 = plStack_d0;
            if (0 < (int)uVar5) {
              uVar26 = (long)plStack_d0 - (long)plStack_d8;
              iVar17 = (int)(uVar26 >> 3);
              if ((int)uVar5 < iVar17) {
                uVar18 = (long)uVar26 >> 3;
                if (uVar18 < uVar16) {
                  uVar18 = uVar16 - uVar18;
                  if ((ulong)(lStack_c8 - (long)plStack_d0 >> 3) < uVar18) {
                    uVar19 = lStack_c8 - (long)plStack_d8 >> 2;
                    if (uVar19 <= uVar16) {
                      uVar19 = uVar16;
                    }
                    if (0x7ffffffffffffff7 < (ulong)(lStack_c8 - (long)plStack_d8)) {
                      uVar19 = 0x1fffffffffffffff;
                    }
                    plVar10 = &lStack_c8;
                    plStack_70 = &lStack_c8;
                    FUN_100104040();
                    lStack_88 = (long)plVar10 + uVar26;
                    plStack_78 = plVar10 + uVar19;
                    lVar28 = lStack_88 + uVar18 * 8;
                    plStack_90 = plVar10;
                    func_0x000107c60ee4(lStack_88,uVar18 * 8);
                    lStack_80 = lVar28;
                    FUN_100104074(&plStack_d8,&plStack_90);
                    FUN_100104120(&plStack_90);
                    plVar10 = plStack_d0;
                  }
                  else {
                    plVar10 = plStack_d0 + uVar18;
                    func_0x000107c60ee4(plStack_d0,uVar18 * 8);
                  }
                }
                else if (uVar16 < uVar18) {
                  plVar10 = plStack_d8 + uVar16;
                  plVar32 = plStack_d0;
                  while (plVar10 != plVar32) {
                    plVar32 = plVar32 + -1;
                    func_0x000107c61170(*plVar32);
                  }
                }
              }
              else if (iVar17 < (int)uVar5) {
                uVar5 = (uint)*(undefined8 *)(lVar20 + 0x40);
                func_0x000107c40808();
                plVar10 = plStack_d0;
                if (*puVar14 == uVar5) {
                  func_0x000107c4d9a8(*(undefined8 *)(lVar20 + 0x40));
                  uStack_13c = (uint)((ulong)((long)plStack_d0 - (long)plStack_d8) >> 3);
                  plStack_90 = (long *)CONCAT44(plStack_90._4_4_,*puVar14 - uStack_13c);
                  FUN_1000e7990();
                  plVar10 = plStack_d0;
                }
              }
            }
            plStack_d0 = plVar10;
            puVar7 = PTR_PTR_1126c0ab8;
            func_0x000107c610f4();
            func_0x000107c4d9a8(*(undefined8 *)(lVar20 + 0x40));
            func_0x000107c4578c();
            uVar15 = *(undefined8 *)(lVar20 + 0x40);
            func_0x000107c3e15c(uVar15);
            pplVar11 = &plStack_d8;
            func_0x000107c310c8(pplVar11,uVar15);
            func_0x000107c61174(puVar7);
            uVar15 = *(undefined8 *)(lVar20 + 0x40);
            *(undefined **)(lVar20 + 0x40) = puVar7;
            func_0x000107c61170(uVar15);
            if (((ulong)pplVar11 & 1) == 0) {
              plVar10 = (long *)(lVar20 + 0x58);
              while (plVar10 = (long *)*plVar10, plVar10 != (long *)0x0) {
                func_0x000107c30698(plVar10 + 3,puVar7);
              }
            }
            func_0x000107c61170(puVar7);
            if (lStack_100 < 0) {
              func_0x000107c60e14(uStack_110);
            }
            if ((long)pplStack_118 < 0) {
              func_0x000107c60e14(pplStack_128);
            }
          }
          pplStack_138 = &plStack_d8;
          FUN_100104170(&pplStack_138);
        }
        if ((long ****)ppplStack_c0 != (long ****)0x0) {
          ppplStack_b8 = ppplStack_c0;
          func_0x000107c60e14();
        }
        pplStack_138 = &plStack_a8;
        FUN_100104170(&pplStack_138);
      }
      plVar30 = (long *)*plVar30;
    } while (plVar30 != (long *)0x0);
  }
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 1001d089c; end: 1001d0943;  */

long * FUN_1001d089c(long *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  
  uVar2 = param_1[1];
  if ((uVar2 != 0) && (param_1[3] != 0)) {
    uVar3 = *param_2;
    uVar4 = uVar2 - 1;
    if ((uVar2 & uVar4) == 0) {
      uVar5 = uVar3 & uVar4;
    }
    else {
      uVar5 = uVar3;
      if (uVar2 <= uVar3) {
        uVar5 = 0;
        if (uVar2 != 0) {
          uVar5 = uVar3 / uVar2;
        }
        uVar5 = uVar3 - uVar5 * uVar2;
      }
    }
    plVar6 = *(long **)(*param_1 + uVar5 * 8);
    if (plVar6 != (long *)0x0) {
      plVar6 = (long *)*plVar6;
      do {
        if (plVar6 == (long *)0x0) {
          return (long *)0x0;
        }
        uVar7 = plVar6[1];
        if (uVar7 == uVar3) {
          if (plVar6[2] == uVar3) {
            return plVar6;
          }
        }
        else {
          if ((uVar2 & uVar4) == 0) {
            uVar7 = uVar7 & uVar4;
          }
          else if (uVar2 <= uVar7) {
            uVar1 = 0;
            if (uVar2 != 0) {
              uVar1 = uVar7 / uVar2;
            }
            uVar7 = uVar7 - uVar1 * uVar2;
          }
          if (uVar7 != uVar5) {
            return (long *)0x0;
          }
        }
        plVar6 = (long *)*plVar6;
      } while( true );
    }
  }
  return (long *)0x0;
}



/* Entry: 1001d0944; end: 1001d0a0b; -[SCSQLiteDocObjectTransactionContext .cxx_destruct] */

long * FUN_1001d0944(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0xe8);
  if (lVar3 != 0) {
    func_0x000107c3072c(*(undefined8 *)(lVar3 + 8));
    func_0x000107c60e14(lVar3);
  }
  lVar3 = *(long *)(param_1 + 0xb8);
  if (lVar3 != 0) {
    plVar1 = *(long **)(param_1 + 0x90);
    if (plVar1 == (long *)0x0) {
      func_0x000107c60e10(lVar3);
    }
    else {
      (**(code **)(*plVar1 + 0x18))(plVar1,lVar3,*(undefined8 *)(param_1 + 0xb0));
    }
  }
  *(undefined8 *)(param_1 + 0xb8) = 0;
  if ((*(char *)(param_1 + 0x98) == '\x01') && (*(long **)(param_1 + 0x90) != (long *)0x0)) {
    (**(code **)(**(long **)(param_1 + 0x90) + 8))();
  }
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined1 *)(param_1 + 0x98) = 0;
  if (*(char *)(param_1 + 0x87) < '\0') {
    func_0x000107c60e14(*(undefined8 *)(param_1 + 0x70));
  }
  if (*(char *)(param_1 + 0x6f) < '\0') {
    func_0x000107c60e14(*(undefined8 *)(param_1 + 0x58));
  }
  func_0x000107c61120(param_1 + 0x40);
  func_0x000107c6119c(param_1 + 0x38,0);
  plVar1 = (long *)(param_1 + 0x10);
  plVar2 = *(long **)(param_1 + 0x20);
  while (plVar2 != (long *)0x0) {
    plVar2 = (long *)*plVar2;
    func_0x000107c60e14();
  }
  lVar3 = *plVar1;
  *plVar1 = 0;
  if (lVar3 != 0) {
    func_0x000107c60e14();
  }
  return plVar1;
}



/* Entry: 1001d0a0c; end: 1001d0a53;  */

long * FUN_1001d0a0c(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    plVar1 = (long *)*plVar1;
    func_0x000107c60e14();
  }
  lVar2 = *param_1;
  *param_1 = 0;
  if (lVar2 != 0) {
    func_0x000107c60e14();
  }
  return param_1;
}



/* Entry: 1001d0a54; end: 1001d0a83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1001d0a54(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11278ea0c));
  return;
}



/* Entry: 1001d0a84; end: 1001d0aa3;  */

void FUN_1001d0a84(void)

{
  func_0x000107c61168(&PTR_PTR_11295d820);
  return;
}



/* Entry: 1001d0aa4; end: 1001d0b07; -[SCDocObjectLoggingActivityMonitor docObjectContextDidDequeueChangesBlockForChangeRequests:duration:] */

void FUN_1001d0aa4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  FUN_1001cf4a0(param_4);
  func_0x000107c61180();
  FUN_1001d0b08(param_1,uVar1,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1001d0b08; end: 1001d0b73;  */

void FUN_1001d0b08(double param_1,long param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  if (param_2 != 0) {
    FUN_1001d0b74(param_2,param_3,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1001d0b74; end: 1001d0d07;  */

/* WARNING: Possible PIC construction at 0x0001001d0c00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001001d0c74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001001d0cb4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001001d0c78) */
/* WARNING: Removing unreachable block (ram,0x0001001d0ca8) */
/* WARNING: Removing unreachable block (ram,0x0001001d0c90) */
/* WARNING: Removing unreachable block (ram,0x0001001d0c04) */
/* WARNING: Removing unreachable block (ram,0x0001001d0c68) */
/* WARNING: Removing unreachable block (ram,0x0001001d0cb8) */
/* WARNING: Removing unreachable block (ram,0x0001001d0cf0) */
/* WARNING: Removing unreachable block (ram,0x0001001d0d00) */

void FUN_1001d0b74(long param_1,long param_2)

{
  long *plVar1;
  
  func_0x000107c61174(param_2);
  if (param_1 != 0) {
    plVar1 = *(long **)(param_1 + 8);
    (**(code **)(*plVar1 + 0x28))(plVar1,&UNK_110d25668);
    if (((int)plVar1 != 0) && (func_0x000107c61174(param_2), param_2 != 0)) {
      func_0x000107c61178(param_2);
      func_0x000107c3ac4c();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1001d0d08; end: 1001d0d6b; -[SCDocObjectLoggingActivityMonitor docObjectContextDidExecutePerformChangesForChangeRequests:duration:] */

void FUN_1001d0d08(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  FUN_1001cf4a0(param_4);
  func_0x000107c61180();
  FUN_1001d0d6c(param_1,uVar1,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1001d0d6c; end: 1001d0dd7;  */

void FUN_1001d0d6c(double param_1,long param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  if (param_2 != 0) {
    FUN_1001d0dd8(param_2,param_3,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}


