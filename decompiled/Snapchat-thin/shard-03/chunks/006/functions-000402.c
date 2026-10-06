/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102a82298; end: 102a823f3;  */

void FUN_102a82298(long param_1,long param_2,long param_3,long *param_4)

{
  ulong *puVar1;
  ulong *puVar2;
  code *pcVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  long extraout_x8;
  long lVar7;
  long lVar8;
  long lVar9;
  long extraout_x12;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  
  lVar5 = 0;
  FUN_102aabc7c();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  if (param_3 != param_2) {
    lVar12 = *param_4;
    lVar8 = *(long *)(extraout_x12 + 0x48);
    lVar7 = param_3 + -1;
    param_1 = param_1 - param_3;
    lVar10 = lVar8 * param_3;
    lVar11 = lVar12;
    lVar13 = param_1;
    lVar9 = lVar12;
LAB_102a82388:
    do {
      puVar1 = (ulong *)(lVar11 + lVar10);
      puVar2 = (ulong *)(lVar11 + lVar8 * lVar7);
      uVar6 = *puVar1;
      if ((uVar6 != *puVar2 || puVar1[1] != puVar2[1]) && (func_0x000107c605b8(), (uVar6 & 1) != 0))
      {
        if (lVar12 == 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x102a823f4);
          (*pcVar3)();
        }
        func_0x000102a5d690(puVar1,&stack0xffffffffffffff70 +
                                   -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
        func_0x000107c61414(puVar1,puVar2,1,lVar5);
        func_0x000102a5d690(&stack0xffffffffffffff70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
                            puVar2);
        bVar4 = param_1 != -1;
        param_1 = param_1 + 1;
        lVar11 = lVar11 - lVar8;
        if (bVar4) goto LAB_102a82388;
      }
      param_3 = param_3 + 1;
      lVar11 = lVar9 + lVar8;
      param_1 = lVar13 + -1;
      lVar13 = param_1;
      lVar9 = lVar11;
    } while (param_3 != param_2);
  }
  return;
}



/* Entry: 102a823f4; end: 102a82673;  */

undefined8 FUN_102a823f4(ulong *param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long unaff_x21;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  
  uVar8 = *param_1;
  if (1 < *(ulong *)(uVar8 + 0x10)) {
    uVar5 = uVar8;
    func_0x000107c61558();
    if ((uVar5 & 1) == 0) {
      func_0x000100e06d54();
    }
    *param_1 = uVar8;
    uVar5 = *(ulong *)(uVar8 + 0x10);
    do {
      lVar9 = uVar5 - 1;
      if (uVar5 < 4) {
        if (uVar5 == 3) {
          bVar3 = SBORROW8(*(long *)(uVar8 + 0x28),*(long *)(uVar8 + 0x20));
          lVar6 = *(long *)(uVar8 + 0x28) - *(long *)(uVar8 + 0x20);
          goto LAB_102a824c8;
        }
        if (uVar5 < 2) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102a8265c);
          (*pcVar2)();
        }
        plVar1 = (long *)(uVar8 + uVar5 * 0x10);
        lVar6 = *plVar1;
        lVar7 = plVar1[1];
        bVar3 = SBORROW8(lVar7,lVar6);
        lVar7 = lVar7 - lVar6;
LAB_102a8252c:
        if (bVar3) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102a8264c);
          (*pcVar2)();
        }
        lVar6 = uVar8 + lVar9 * 0x10;
        lVar4 = *(long *)(lVar6 + 0x20);
        lVar6 = *(long *)(lVar6 + 0x28);
        if (SBORROW8(lVar6,lVar4)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102a82654);
          (*pcVar2)();
        }
        lVar10 = lVar9;
        if (lVar6 - lVar4 < lVar7) {
          return 1;
        }
      }
      else {
        lVar7 = uVar8 + 0x20 + uVar5 * 0x10;
        if (SBORROW8(*(long *)(lVar7 + -0x38),*(long *)(lVar7 + -0x40))) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102a82634);
          (*pcVar2)();
        }
        lVar6 = *(long *)(lVar7 + -0x28) - *(long *)(lVar7 + -0x30);
        if (SBORROW8(*(long *)(lVar7 + -0x28),*(long *)(lVar7 + -0x30))) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102a82638);
          (*pcVar2)();
        }
        plVar1 = (long *)(uVar8 + uVar5 * 0x10);
        lVar4 = *plVar1;
        lVar10 = plVar1[1];
        lVar12 = lVar10 - lVar4;
        if (SBORROW8(lVar10,lVar4)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102a82640);
          (*pcVar2)();
        }
        if (SCARRY8(lVar6,lVar12)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102a82648);
          (*pcVar2)();
        }
        bVar3 = false;
        if (lVar6 + lVar12 < *(long *)(lVar7 + -0x38) - *(long *)(lVar7 + -0x40)) {
LAB_102a824c8:
          if (bVar3) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x102a8263c);
            (*pcVar2)();
          }
          plVar1 = (long *)(uVar8 + uVar5 * 0x10);
          lVar4 = *plVar1;
          lVar10 = plVar1[1];
          lVar7 = lVar10 - lVar4;
          if (SBORROW8(lVar10,lVar4)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x102a82644);
            (*pcVar2)();
          }
          plVar1 = (long *)(uVar8 + 0x20 + lVar9 * 0x10);
          lVar4 = *plVar1;
          lVar10 = plVar1[1];
          lVar12 = lVar10 - lVar4;
          if (SBORROW8(lVar10,lVar4)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x102a82650);
            (*pcVar2)();
          }
          if (SCARRY8(lVar7,lVar12)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x102a82658);
            (*pcVar2)();
          }
          bVar3 = false;
          if (lVar7 + lVar12 < lVar6) goto LAB_102a8252c;
          lVar10 = uVar5 - 2;
          if (lVar12 <= lVar6) {
            lVar10 = lVar9;
          }
        }
        else {
          plVar1 = (long *)(uVar8 + 0x20 + lVar9 * 0x10);
          lVar7 = *plVar1;
          lVar4 = plVar1[1];
          if (SBORROW8(lVar4,lVar7)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x102a82660);
            (*pcVar2)();
          }
          lVar10 = uVar5 - 2;
          if (lVar4 - lVar7 <= lVar6) {
            lVar10 = lVar9;
          }
        }
      }
      uVar11 = lVar10 - 1;
      if (uVar5 <= uVar11) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102a82628);
        (*pcVar2)();
      }
      lVar9 = *param_3;
      if (lVar9 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102a82674);
        (*pcVar2)();
      }
      lVar12 = *(long *)(uVar8 + 0x20 + uVar11 * 0x10);
      plVar1 = (long *)(uVar8 + 0x20 + lVar10 * 0x10);
      lVar6 = *plVar1;
      lVar7 = plVar1[1];
      lVar4 = 0;
      FUN_102aabc7c();
      lVar4 = *(long *)(*(long *)(lVar4 + -8) + 0x48);
      FUN_102a82674(lVar9 + lVar4 * lVar12,lVar9 + lVar4 * lVar6,lVar9 + lVar4 * lVar7,param_2);
      if (unaff_x21 != 0) {
        return 1;
      }
      if (lVar7 < lVar12) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102a8262c);
        (*pcVar2)();
      }
      uVar5 = uVar8;
      func_0x000107c61558();
      if ((uVar5 & 1) == 0) {
        func_0x000100e06d54();
      }
      if (*(ulong *)(uVar8 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102a82630);
        (*pcVar2)();
      }
      lVar9 = uVar8 + uVar11 * 0x10;
      *(long *)(lVar9 + 0x20) = lVar12;
      *(long *)(lVar9 + 0x28) = lVar7;
      *param_1 = uVar8;
      func_0x0001000a97cc(lVar10);
      uVar8 = *param_1;
      uVar5 = *(ulong *)(uVar8 + 0x10);
    } while (1 < uVar5);
  }
  return 1;
}



/* Entry: 102a82674; end: 102a829d7;  */

undefined8 FUN_102a82674(ulong *param_1,ulong *param_2,ulong *param_3,ulong *param_4)

{
  ulong *puVar1;
  ulong *puVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong *puVar7;
  ulong *puVar8;
  long lVar9;
  ulong *puVar10;
  long lVar11;
  ulong *puStack_70;
  ulong *puStack_68;
  ulong *puStack_58;
  
  lVar4 = 0;
  FUN_102aabc7c();
  lVar11 = *(long *)(*(long *)(lVar4 + -8) + 0x48);
  if (lVar11 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x102a829d0);
    (*pcVar3)();
  }
  if (((long)param_2 - (long)param_1 == -0x8000000000000000) && (lVar11 == -1)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x102a829d4);
    (*pcVar3)();
  }
  if (((long)param_3 - (long)param_2 == -0x8000000000000000) && (lVar11 == -1)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x102a829d8);
    (*pcVar3)();
  }
  lVar9 = 0;
  if (lVar11 != 0) {
    lVar9 = ((long)param_2 - (long)param_1) / lVar11;
  }
  lVar6 = 0;
  if (lVar11 != 0) {
    lVar6 = ((long)param_3 - (long)param_2) / lVar11;
  }
  puStack_68 = param_4;
  puStack_58 = param_1;
  if (lVar9 < lVar6) {
    lVar6 = lVar9 * lVar11;
    if ((param_4 < param_1) || ((ulong *)((long)param_1 + lVar6) <= param_4)) {
      func_0x000107c61414(param_4,param_1,lVar9,lVar4);
    }
    else if (param_4 != param_1) {
      func_0x000107c61410(param_4,param_1,lVar9,lVar4);
    }
    puVar7 = (ulong *)((long)param_4 + lVar6);
    puStack_70 = puVar7;
    if (0 < lVar6 && param_2 < param_3) {
      do {
        uVar5 = *param_2;
        if ((uVar5 == *param_4 && param_2[1] == param_4[1]) ||
           (func_0x000107c605b8(), (uVar5 & 1) == 0)) {
          puVar8 = (ulong *)((long)param_4 + lVar11);
          puVar10 = param_2;
          puVar1 = puVar8;
          if ((param_1 < param_4) || (puVar8 <= param_1)) {
            func_0x000107c61414(param_1,param_4,1,lVar4);
          }
          else if (param_1 != param_4) {
            func_0x000107c61410(param_1,param_4,1,lVar4);
          }
        }
        else {
          puVar10 = (ulong *)((long)param_2 + lVar11);
          puVar8 = param_4;
          if ((param_1 < param_2) || (puVar10 <= param_1)) {
            func_0x000107c61414(param_1,param_2,1,lVar4);
            puVar1 = puStack_68;
          }
          else {
            puVar1 = puStack_68;
            if (param_1 != param_2) {
              func_0x000107c61410(param_1,param_2,1,lVar4);
              puVar1 = puStack_68;
            }
          }
        }
        puStack_68 = puVar1;
        param_1 = (ulong *)((long)param_1 + lVar11);
        puStack_58 = param_1;
      } while ((puVar8 < puVar7) &&
              (param_4 = puVar8, param_2 = puVar10, puStack_58 = param_1, puVar10 < param_3));
    }
  }
  else {
    lVar9 = lVar6 * lVar11;
    if ((param_4 < param_2) || ((ulong *)((long)param_2 + lVar9) <= param_4)) {
      func_0x000107c61414(param_4,param_2,lVar6,lVar4);
    }
    else if (param_4 != param_2) {
      func_0x000107c61410(param_4,param_2,lVar6,lVar4);
    }
    puVar7 = (ulong *)((long)param_4 + lVar9);
    puStack_70 = puVar7;
    puStack_58 = param_2;
    if (0 < lVar9 && param_1 < param_2) {
      lVar11 = -lVar11;
      do {
        puVar10 = (ulong *)((long)param_2 + lVar11);
        puVar8 = param_3;
        puStack_58 = param_2;
        while( true ) {
          puVar1 = (ulong *)((long)puVar7 + lVar11);
          uVar5 = *puVar1;
          if ((uVar5 != *puVar10 || puVar1[1] != puVar10[1]) &&
             (func_0x000107c605b8(), (uVar5 & 1) != 0)) break;
          puVar2 = (ulong *)((long)puVar8 + lVar11);
          puStack_70 = puVar1;
          if ((puVar8 < puVar7) || (puVar7 <= puVar2)) {
            func_0x000107c61414(puVar2,puVar1,1,lVar4);
          }
          else if (puVar8 != puVar7) {
            func_0x000107c61410(puVar2,puVar1,1,lVar4);
          }
          puVar8 = puVar2;
          puVar7 = puVar1;
          if (puVar1 <= param_4) goto LAB_102a828a0;
        }
        param_3 = (ulong *)((long)puVar8 + lVar11);
        if ((puVar8 < param_2) || (param_2 <= param_3)) {
          func_0x000107c61414(param_3,puVar10,1,lVar4);
        }
        else if (puVar8 != param_2) {
          func_0x000107c61410(param_3,puVar10,1,lVar4);
        }
        puStack_58 = puVar10;
      } while ((param_4 < puVar7) && (param_2 = puVar10, param_1 < puVar10));
    }
  }
LAB_102a828a0:
  FUN_102a829d8(&puStack_58,&puStack_68,&puStack_70);
  return 1;
}



/* Entry: 102a829d8; end: 102a82a87;  */

void FUN_102a829d8(ulong *param_1,ulong *param_2,long *param_3)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  
  uVar6 = *param_1;
  uVar5 = *param_2;
  lVar7 = *param_3;
  lVar3 = 0;
  FUN_102aabc7c();
  lVar4 = *(long *)(*(long *)(lVar3 + -8) + 0x48);
  if (lVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102a82a84);
    (*pcVar2)();
  }
  if (lVar7 - uVar5 != -0x8000000000000000 || lVar4 != -1) {
    lVar1 = 0;
    if (lVar4 != 0) {
      lVar1 = (long)(lVar7 - uVar5) / lVar4;
    }
    if ((uVar5 <= uVar6) && (uVar6 < uVar5 + lVar1 * lVar4)) {
      if (uVar6 != uVar5) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbffc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_arrayInitWithTakeBackToFront_11034f240)(uVar6,uVar5);
        return;
      }
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbffd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_arrayInitWithTakeFrontToBack_11034f248)(uVar6,uVar5,lVar1,lVar3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102a82a88);
  (*pcVar2)();
}



/* Entry: 102a82a88; end: 102a82acb;  */

void FUN_102a82a88(long param_1)

{
  FUN_102a816d4(0,*(undefined8 *)(param_1 + 0x10),0,param_1,0x112ee63b8,&UNK_10db123b0,FUN_102aabc7c
                ,PTR__swift_release_11034f4c0);
  return;
}



/* Entry: 102a82acc; end: 102a83313;  */

void FUN_102a82acc(undefined8 *param_1,undefined *param_2,undefined *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  long lVar17;
  undefined *puVar18;
  undefined8 *puVar19;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar16 = param_2;
  puVar18 = param_3;
  func_0x000107c5bcd8();
  func_0x000107c61180();
  if (puVar16 == (undefined *)0x0) {
LAB_102a82cf0:
    puVar7 = param_2;
    func_0x000107c5bccc();
    func_0x000107c61180();
    puVar16 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (puVar7 == (undefined *)0x0) {
      lVar17 = *(long *)(PTR___swiftEmptyArrayStorage_11034f1c8 + 0x10);
      puVar7 = puVar18;
      puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
      goto joined_r0x000102a82eec;
    }
    puVar8 = puVar7;
    func_0x000107c5faec();
    func_0x000107c61170(puVar7);
    puVar14 = param_3;
    func_0x000107c4f340();
    func_0x000107c61180();
    if (puVar14 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x102a8315c);
      (*pcVar6)();
    }
    puVar9 = (undefined *)0x0;
    func_0x000102a83cd8(0,0x112e118a0,&PTR_PTR_1126b02b0);
    puVar15 = puVar14;
    puVar7 = puVar9;
    func_0x000107c5fc54(puVar14,puVar9);
    func_0x000107c61170(puVar14);
    if ((ulong)puVar15 >> 0x3e == 0) {
      puVar14 = *(undefined **)(((ulong)puVar15 & 0xffffffffffffff8) + 0x10);
    }
    else {
      puVar14 = (undefined *)((ulong)puVar15 & 0xffffffffffffff8);
      if ((undefined *)0x7fffffffffffffff < puVar15) {
        puVar14 = puVar15;
      }
      func_0x000107c60480();
    }
    func_0x000107c6142c(puVar15);
    if (puVar14 != (undefined *)0x0) {
      func_0x000107c4f340();
      func_0x000107c61180();
      if (param_3 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x102a83160);
        (*pcVar6)();
      }
      puVar14 = param_3;
      func_0x000107c5fc54();
      func_0x000107c61170(param_3);
      if ((ulong)puVar14 >> 0x3e == 0) {
        puVar15 = *(undefined **)(((ulong)puVar14 & 0xffffffffffffff8) + 0x10);
        puVar7 = puVar9;
      }
      else {
        puVar15 = (undefined *)((ulong)puVar14 & 0xffffffffffffff8);
        if ((undefined *)0x7fffffffffffffff < puVar14) {
          puVar15 = puVar14;
        }
        func_0x000107c60480();
        puVar7 = puVar9;
      }
      if (puVar15 != (undefined *)0x0) {
        puStack_90 = puVar16;
        puVar7 = (undefined *)((ulong)puVar15 & ((long)puVar15 >> 0x3f ^ 0xffffffffffffffffU));
        func_0x000102a81038(0,puVar7,0);
        if ((long)puVar15 < 0) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x102a83150);
          (*pcVar6)();
        }
        puVar16 = (undefined *)0x0;
        do {
          puVar9 = puStack_90;
          if (((ulong)puVar14 & 0xc000000000000001) == 0) {
            if (*(long *)(((ulong)puVar14 & 0xffffffffffffff8) + 0x10) <= (long)puVar16) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x102a83044);
              (*pcVar6)();
            }
            puVar10 = *(undefined **)(puVar14 + (long)puVar16 * 8 + 0x20);
            func_0x000107c61174();
            puVar13 = puVar7;
          }
          else {
            puVar10 = puVar16;
            puVar13 = puVar14;
            FUN_102a81858(puVar16,puVar14,&PTR_PTR_1126b02b0,0x112e118a0);
          }
          puVar11 = puVar10;
          func_0x000107c4f31c();
          func_0x000107c61180();
          if (puVar11 == (undefined *)0x0) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x102a83158);
            (*pcVar6)();
          }
          puVar12 = puVar11;
          func_0x000107c5faec();
          puVar7 = puVar13;
          func_0x000107c61170(puVar11);
          func_0x000107c61434(puVar18);
          func_0x000107c61170(puVar10);
          uVar1 = *(ulong *)(puVar9 + 0x10);
          puVar10 = (undefined *)(uVar1 + 1);
          puStack_90 = puVar9;
          if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar1) {
            puVar7 = puVar10;
            func_0x000102a81038(1 < *(ulong *)(puVar9 + 0x18),puVar10,1);
          }
          puVar9 = puStack_90;
          puVar16 = puVar16 + 1;
          *(undefined **)(puStack_90 + 0x10) = puVar10;
          *(undefined **)(puStack_90 + uVar1 * 0x20 + 0x20) = puVar12;
          *(undefined **)(puStack_90 + uVar1 * 0x20 + 0x28) = puVar13;
          *(undefined **)(puStack_90 + uVar1 * 0x20 + 0x30) = puVar8;
          *(undefined **)(puStack_90 + uVar1 * 0x20 + 0x38) = puVar18;
        } while (puVar15 != puVar16);
        func_0x000107c6142c(puVar18);
        goto LAB_102a82f00;
      }
      func_0x000107c6142c(puVar18);
      puVar18 = puVar14;
    }
  }
  else {
    puVar7 = (undefined *)0x0;
    func_0x000102a83cd8(0,0x112ee6fe8,&PTR_PTR_1126c8050);
    puVar14 = puVar16;
    func_0x000107c5fc54();
    func_0x000107c61170(puVar16);
    if ((ulong)puVar14 >> 0x3e == 0) {
      puVar16 = *(undefined **)(((ulong)puVar14 & 0xffffffffffffff8) + 0x10);
      if (puVar16 == (undefined *)0x0) goto LAB_102a82ce8;
LAB_102a82b58:
      puStack_90 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000102a81038(0,(ulong)puVar16 & ((long)puVar16 >> 0x3f ^ 0xffffffffffffffffU),0);
      if ((long)puVar16 < 0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x102a83048);
        (*pcVar6)();
      }
      puVar18 = (undefined *)0x0;
      do {
        puVar7 = puStack_90;
        if (((ulong)puVar14 & 0xc000000000000001) == 0) {
          if (*(long *)(((ulong)puVar14 & 0xffffffffffffff8) + 0x10) <= (long)puVar18) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x102a82cac);
            (*pcVar6)();
          }
          puVar8 = *(undefined **)(puVar14 + (long)puVar18 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          puVar8 = puVar18;
          FUN_102a81858(puVar18,puVar14,&PTR_PTR_1126c8050,0x112ee6fe8);
        }
        func_0x000107c4f31c();
        puVar15 = PTR___ss6UInt64VN_11034f048;
        puVar10 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068;
        func_0x000107c6057c();
        puVar9 = puVar8;
        puVar13 = puVar10;
        func_0x000107c5bccc();
        func_0x000107c61180();
        if (puVar9 == (undefined *)0x0) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x102a83154);
          (*pcVar6)();
        }
        puVar11 = puVar9;
        func_0x000107c5faec();
        func_0x000107c61170(puVar8);
        func_0x000107c61170(puVar9);
        uVar1 = *(ulong *)(puVar7 + 0x10);
        puStack_90 = puVar7;
        if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar1) {
          func_0x000102a81038(1 < *(ulong *)(puVar7 + 0x18),uVar1 + 1,1);
        }
        puVar18 = puVar18 + 1;
        *(ulong *)(puStack_90 + 0x10) = uVar1 + 1;
        *(undefined **)(puStack_90 + uVar1 * 0x20 + 0x20) = puVar15;
        *(undefined **)(puStack_90 + uVar1 * 0x20 + 0x28) = puVar10;
        *(undefined **)(puStack_90 + uVar1 * 0x20 + 0x30) = puVar11;
        *(undefined **)(puStack_90 + uVar1 * 0x20 + 0x38) = puVar13;
        puVar7 = puVar14;
        puVar9 = puStack_90;
      } while (puVar16 != puVar18);
LAB_102a82f00:
      func_0x000107c6142c(puVar14);
      lVar17 = *(long *)(puVar9 + 0x10);
      goto joined_r0x000102a82eec;
    }
    puVar16 = (undefined *)((ulong)puVar14 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar14) {
      puVar16 = puVar14;
    }
    puVar18 = puVar16;
    func_0x000107c60480();
    if (puVar18 == (undefined *)0x0) {
LAB_102a82ce8:
      func_0x000107c6142c(puVar14);
      puVar18 = puVar7;
      goto LAB_102a82cf0;
    }
    func_0x000107c60480();
    puVar18 = puVar14;
    if (puVar16 != (undefined *)0x0) goto LAB_102a82b58;
  }
  func_0x000107c6142c(puVar18);
  lVar17 = *(long *)(PTR___swiftEmptyArrayStorage_11034f1c8 + 0x10);
  puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
joined_r0x000102a82eec:
  if (lVar17 == 0) {
    func_0x000107c6142c(puVar9);
    puVar16 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puStack_90 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000102a8101c(0,lVar17,0);
    puVar19 = (undefined8 *)(puVar9 + 0x38);
    do {
      puVar16 = puStack_90;
      uVar2 = puVar19[-3];
      uVar4 = puVar19[-2];
      uVar3 = puVar19[-1];
      uVar5 = *puVar19;
      func_0x000107c61438(uVar4,2);
      puVar7 = (undefined *)0x2;
      func_0x000107c61438(uVar5,2);
      puVar18 = param_2;
      func_0x000107c50118();
      func_0x000107c61180();
      if (puVar18 == (undefined *)0x0) {
        func_0x000107c6142c(uVar5);
        func_0x000107c6142c(uVar4);
        puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      else {
        puVar7 = (undefined *)0x0;
        func_0x000102a83cd8(0,0x112ee62c8,&PTR_PTR_1126c8060);
        puVar14 = puVar18;
        func_0x000107c5fc54(puVar18,puVar7);
        func_0x000107c6142c(uVar5);
        func_0x000107c6142c(uVar4);
        func_0x000107c61170(puVar18);
      }
      uVar1 = *(ulong *)(puVar16 + 0x10);
      puVar18 = (undefined *)(uVar1 + 1);
      puStack_90 = puVar16;
      if (*(ulong *)(puVar16 + 0x18) >> 1 <= uVar1) {
        puVar7 = puVar18;
        func_0x000102a8101c(1 < *(ulong *)(puVar16 + 0x18),puVar18,1);
      }
      puVar16 = puStack_90;
      puVar19 = puVar19 + 4;
      *(undefined **)(puStack_90 + 0x10) = puVar18;
      *(undefined8 *)(puStack_90 + uVar1 * 0x28 + 0x20) = uVar2;
      *(undefined8 *)(puStack_90 + uVar1 * 0x28 + 0x28) = uVar4;
      *(undefined8 *)(puStack_90 + uVar1 * 0x28 + 0x30) = uVar3;
      *(undefined8 *)(puStack_90 + uVar1 * 0x28 + 0x38) = uVar5;
      *(undefined **)(puStack_90 + uVar1 * 0x28 + 0x40) = puVar14;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
    func_0x000107c6142c(puVar9);
  }
  puVar18 = param_2;
  func_0x000107c42214(param_2);
  func_0x000107c61180();
  puVar14 = puVar18;
  func_0x000107c5faec();
  puVar8 = puVar7;
  func_0x000107c61170(puVar18);
  func_0x000107c42218(param_2);
  func_0x000107c61180();
  puVar18 = param_2;
  func_0x000107c5faec();
  func_0x000107c61170(param_2);
  FUN_102aab454(&puStack_90,puVar14,puVar7,puVar18,puVar8,puVar16);
  param_1[1] = uStack_88;
  *param_1 = puStack_90;
  param_1[3] = uStack_78;
  param_1[2] = uStack_80;
  param_1[5] = uStack_68;
  param_1[4] = uStack_70;
  return;
}



/* Entry: 102a83314; end: 102a83333;  */

void FUN_102a83314(void)

{
  func_0x000107c61168(&PTR_PTR_112883a90);
  return;
}



/* Entry: 102a83334; end: 102a8338f;  */

/* WARNING: Possible PIC construction at 0x000102a83364: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102a83374: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102a83368) */
/* WARNING: Removing unreachable block (ram,0x000102a83378) */

void FUN_102a83334(long param_1)

{
  long lVar1;
  
  if (*(ulong *)(param_1 + 0x20) >> 0x3c < 0xf) {
    func_0x00010006c090(*(undefined8 *)(param_1 + 0x18));
  }
  lVar1 = *(long *)(param_1 + 0x30);
  if (lVar1 == 0) {
    lVar1 = *(long *)(param_1 + 0x58);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar1);
  return;
}



/* Entry: 102a83390; end: 102a8365b;  */

undefined1 * FUN_102a83390(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  param_1[0x10] = param_2[0x10];
  uVar4 = *(ulong *)(param_2 + 0x20);
  if (uVar4 >> 0x3c < 0xf) {
    uVar5 = *(undefined8 *)(param_2 + 0x18);
    func_0x00010006c00c(uVar5,uVar4);
    *(undefined8 *)(param_1 + 0x18) = uVar5;
    *(ulong *)(param_1 + 0x20) = uVar4;
    lVar3 = *(long *)(param_2 + 0x30);
  }
  else {
    uVar5 = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
    *(undefined8 *)(param_1 + 0x18) = uVar5;
    lVar3 = *(long *)(param_2 + 0x30);
  }
  if (lVar3 == 0) {
    uVar5 = *(undefined8 *)(param_2 + 0x28);
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
    *(undefined8 *)(param_1 + 0x28) = uVar5;
    uVar5 = *(undefined8 *)(param_2 + 0x38);
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_1 + 0x38) = uVar5;
    uVar5 = *(undefined8 *)(param_2 + 0x48);
    *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
    *(undefined8 *)(param_1 + 0x48) = uVar5;
  }
  else {
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
    *(long *)(param_1 + 0x30) = lVar3;
    uVar1 = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
    *(undefined8 *)(param_1 + 0x40) = uVar1;
    uVar5 = *(undefined8 *)(param_2 + 0x48);
    uVar2 = *(undefined8 *)(param_2 + 0x50);
    *(undefined8 *)(param_1 + 0x48) = uVar5;
    *(undefined8 *)(param_1 + 0x50) = uVar2;
    func_0x000107c61434();
    func_0x000107c61434(uVar1);
    func_0x000107c61434(uVar5);
    func_0x000107c61434(uVar2);
  }
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  func_0x000107c61434();
  return param_1;
}



/* Entry: 102a8365c; end: 102a83797;  */

undefined8 FUN_102a8365c(undefined8 param_1)

{
  (*(code *)(undefined *)0x102aab81c)();
  return param_1;
}



/* Entry: 102a83798; end: 102a8386f;  */

int FUN_102a83798(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[0x18] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 0xc);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 102a83870; end: 102a8389f;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_102a83870(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  func_0x000107c6142c(*(undefined8 *)(param_1 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x18));
  uVar1 = *(ulong *)(param_1 + 0x30);
  uVar2 = (uint)(*(ulong *)(param_1 + 0x38) >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = *(ulong *)(param_1 + 0x38) & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 102a838a0; end: 102a8391b;  */

undefined8 * FUN_102a838a0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar2 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  param_1[4] = param_2[4];
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  uVar1 = param_2[6];
  uVar3 = param_2[7];
  func_0x000107c61434();
  func_0x000107c61434(uVar2);
  func_0x00010006c00c(uVar1,uVar3);
  param_1[6] = uVar1;
  param_1[7] = uVar3;
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  return param_1;
}



/* Entry: 102a8391c; end: 102a839bb;  */

undefined8 * FUN_102a8391c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  uVar4 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar4);
  param_1[2] = param_2[2];
  uVar4 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c61434();
  func_0x000107c6142c(uVar4);
  uVar4 = param_2[4];
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  param_1[4] = uVar4;
  uVar4 = param_2[6];
  uVar2 = param_2[7];
  func_0x00010006c00c(uVar4,uVar2);
  uVar1 = param_1[6];
  uVar3 = param_1[7];
  param_1[6] = uVar4;
  param_1[7] = uVar2;
  func_0x00010006c090(uVar1,uVar3);
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  return param_1;
}



/* Entry: 102a839bc; end: 102a83a27;  */

undefined8 * FUN_102a839bc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  func_0x000107c6142c(uVar2);
  param_1[4] = param_2[4];
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  uVar1 = param_1[6];
  uVar2 = param_1[7];
  uVar3 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  return param_1;
}



/* Entry: 102a83a28; end: 102a83adf;  */

int FUN_102a83a28(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x41) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 102a83ae0; end: 102a83aff;  */

void FUN_102a83ae0(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 102a83b00; end: 102a83b23;  */

void FUN_102a83b00(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 102a83b24; end: 102a83b43;  */

void FUN_102a83b24(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 102a83b44; end: 102a83b4b;  */

void FUN_102a83b44(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  code *pcVar13;
  long lVar14;
  long unaff_x20;
  long lVar15;
  long lVar16;
  code *pcVar17;
  ulong uStack_c0;
  long lStack_b8;
  code *pcStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  puVar2 = *(undefined8 **)(unaff_x20 + 0x10);
  uStack_78 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar8 = 0;
  lStack_88 = param_3;
  uStack_80 = param_4;
  lStack_70 = param_5;
  uStack_68 = param_2;
  func_0x000107c5ede0();
  lVar16 = *(long *)(lVar8 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar16 + 0x40));
  lVar10 = (long)&uStack_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar14 = 0x112d7e680;
  lStack_b8 = lVar10;
  func_0x0001000285a8(0x112d7e680,&UNK_10d95e350);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar14 + -8) + 0x40));
  lVar10 = lVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lStack_98 = lVar10;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = lVar10 - extraout_x12;
  lVar12 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar12 + -8) + 0x40));
  uVar11 = lVar10 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  uStack_c0 = uVar11;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = uVar11 - extraout_x12_00;
  lStack_a0 = lVar12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar11 = lVar12 - extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar15 = uVar11 - extraout_x12_02;
  pcStack_b0 = *(code **)(lVar16 + 0x38);
  (*pcStack_b0)(lVar15,1,1,lVar8);
  lVar12 = (long)*(int *)(lVar14 + 0x30);
  lStack_a8 = lVar14;
  uStack_90 = param_1;
  FUN_102a83c90(param_1,lVar10,0x112d36580,&UNK_10d9016d0);
  FUN_102a83c90(lVar15,lVar10 + lVar12,0x112d36580,&UNK_10d9016d0);
  pcVar17 = *(code **)(lVar16 + 0x30);
  lVar14 = lVar10;
  (*pcVar17)(lVar10,1,lVar8);
  if ((int)lVar14 == 1) {
    FUN_102a83b74(lVar15,0x112d36580,&UNK_10d9016d0);
    lVar12 = lVar10 + lVar12;
    (*pcVar17)(lVar12,1,lVar8);
    if ((int)lVar12 == 1) {
      FUN_102a83b74(lVar10,0x112d36580,&UNK_10d9016d0);
LAB_102a80d20:
      lVar15 = lStack_a0;
      (*pcStack_b0)(lStack_a0,1,1,lVar8);
      lVar10 = lStack_98;
      lVar14 = (long)*(int *)(lStack_a8 + 0x30);
      FUN_102a83c90(uStack_68,lStack_98,0x112d36580,&UNK_10d9016d0);
      FUN_102a83c90(lVar15,lVar10 + lVar14,0x112d36580,&UNK_10d9016d0);
      lVar12 = lVar10;
      (*pcVar17)(lVar10,1,lVar8);
      uVar11 = uStack_c0;
      if ((int)lVar12 == 1) {
        FUN_102a83b74(lVar15,0x112d36580,&UNK_10d9016d0);
        lVar14 = lVar10 + lVar14;
        (*pcVar17)(lVar14,1,lVar8);
        if ((int)lVar14 != 1) goto LAB_102a80e48;
        FUN_102a83b74(lVar10,0x112d36580,&UNK_10d9016d0);
      }
      else {
        FUN_102a83c90(lVar10,uStack_c0,0x112d36580,&UNK_10d9016d0);
        lVar12 = lVar10 + lVar14;
        (*pcVar17)(lVar12,1,lVar8);
        lVar6 = lStack_b8;
        if ((int)lVar12 == 1) goto LAB_102a80e20;
        lVar12 = lStack_b8;
        (**(code **)(lVar16 + 0x20))(lStack_b8,lVar10 + lVar14,lVar8);
        func_0x000101553b98();
        uVar9 = uVar11;
        func_0x000107c5fab8(uVar11,lVar6,lVar8,lVar12);
        pcVar17 = *(code **)(lVar16 + 8);
        (*pcVar17)(lVar6,lVar8);
        FUN_102a83b74(lVar15,0x112d36580,&UNK_10d9016d0);
        (*pcVar17)(uVar11,lVar8);
        FUN_102a83b74(lVar10,0x112d36580,&UNK_10d9016d0);
        if ((uVar9 & 1) == 0) goto LAB_102a80e60;
      }
      if (lStack_70 == 0) {
        return;
      }
      goto LAB_102a80e60;
    }
  }
  else {
    FUN_102a83c90(lVar10,uVar11,0x112d36580,&UNK_10d9016d0);
    lVar14 = lVar10 + lVar12;
    (*pcVar17)(lVar14,1,lVar8);
    lVar6 = lStack_b8;
    if ((int)lVar14 != 1) {
      lVar14 = lStack_b8;
      (**(code **)(lVar16 + 0x20))(lStack_b8,lVar10 + lVar12,lVar8);
      func_0x000101553b98();
      uVar9 = uVar11;
      func_0x000107c5fab8(uVar11,lVar6,lVar8,lVar14);
      pcVar13 = *(code **)(lVar16 + 8);
      (*pcVar13)(lVar6,lVar8);
      FUN_102a83b74(lVar15,0x112d36580,&UNK_10d9016d0);
      (*pcVar13)(uVar11,lVar8);
      FUN_102a83b74(lVar10,0x112d36580,&UNK_10d9016d0);
      if ((uVar9 & 1) == 0) goto LAB_102a80e60;
      goto LAB_102a80d20;
    }
LAB_102a80e20:
    FUN_102a83b74(lVar15,0x112d36580,&UNK_10d9016d0);
    (**(code **)(lVar16 + 8))(uVar11,lVar8);
  }
LAB_102a80e48:
  FUN_102a83b74(lVar10,0x112d7e680,&UNK_10d95e350);
LAB_102a80e60:
  func_0x0001060faae4();
  lVar14 = lStack_88;
  if ((int)lVar10 != 0) {
    func_0x0001060faaec();
    lVar14 = lVar10;
  }
  FUN_102a83b74(puVar2,0x112ee5e70,&UNK_10db11270);
  lVar12 = 0x112ee62a8;
  func_0x0001000285a8(0x112ee62a8,&UNK_10db11820);
  uVar7 = uStack_78;
  iVar3 = *(int *)(lVar12 + 0x30);
  iVar4 = *(int *)(lVar12 + 0x40);
  iVar5 = *(int *)(lVar12 + 0x50);
  puVar1 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x60));
  *puVar2 = uStack_78;
  FUN_102a83c90(uStack_90,(long)puVar2 + (long)iVar3,0x112d36580,&UNK_10d9016d0);
  FUN_102a83c90(uStack_68,(long)puVar2 + (long)iVar4,0x112d36580,&UNK_10d9016d0);
  lVar12 = lStack_70;
  *(long *)((long)puVar2 + (long)iVar5) = lVar14;
  *puVar1 = uStack_80;
  puVar1[1] = lStack_70;
  lVar14 = 0;
  FUN_102aabe08();
  func_0x000107c6159c(puVar2,lVar14,2);
  (**(code **)(*(long *)(lVar14 + -8) + 0x38))(puVar2,0,1,lVar14);
  func_0x000107c61434(lVar12);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(uVar7);
  return;
}



/* Entry: 102a83b4c; end: 102a83b6b;  */

void FUN_102a83b4c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 102a83b6c; end: 102a83b73;  */

void FUN_102a83b6c(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long extraout_x8;
  long extraout_x12;
  long lVar6;
  undefined1 *puVar7;
  long unaff_x20;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  code *pcVar11;
  
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar8 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar6 = (long)puVar8 - extraout_x12;
  FUN_102a83c90(param_1,lVar6,0x112d36580,&UNK_10d9016d0);
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar10 = *(long *)(lVar2 + -8);
  pcVar11 = *(code **)(lVar10 + 0x30);
  lVar1 = lVar6;
  (*pcVar11)(lVar6,1,lVar2);
  lVar9 = 0;
  if ((int)lVar1 != 1) {
    func_0x000107c5ed90();
    (**(code **)(lVar10 + 8))(lVar6,lVar2);
    lVar9 = lVar1;
  }
  FUN_102a83c90(param_1,puVar8,0x112d36580,&UNK_10d9016d0);
  puVar7 = puVar8;
  (*pcVar11)(puVar8,1,lVar2);
  if ((int)puVar7 == 1) {
    puVar7 = (undefined1 *)0x0;
  }
  else {
    func_0x000107c5ed90();
    (**(code **)(lVar10 + 8))(puVar8,lVar2);
  }
  puVar3 = PTR_PTR_1126be2f8;
  func_0x000107c61168(PTR_PTR_1126be2f8);
  func_0x000107c42c7c();
  func_0x000107c61180();
  func_0x000107c61170(lVar9);
  func_0x000107c61170(puVar7);
  func_0x000107c61174(puVar3);
  uVar4 = 0x694c6e6f69746361;
  func_0x000107c5fadc(0x694c6e6f69746361,0xea00000000006b6e);
  func_0x000107c5a4a0(uVar5);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar4);
  return;
}



/* Entry: 102a83b74; end: 102a83bb3;  */

undefined8 FUN_102a83b74(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 102a83bb4; end: 102a83c4f;  */

void FUN_102a83bb4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x20;
  
  lVar2 = 0;
  func_0x000107c5eea4();
  uVar3 = (ulong)*(byte *)(*(long *)(lVar2 + -8) + 0x50);
  uVar3 = uVar3 + 0x18 & (uVar3 ^ 0xffffffffffffffff);
  lVar2 = uVar3 + *(long *)(*(long *)(lVar2 + -8) + 0x40);
  puVar1 = (undefined8 *)(unaff_x20 + (lVar2 + 0x4fU & 0xfffffffffffffff8));
  FUN_102a7f5e0(param_1,param_2,param_3,param_4,*(undefined8 *)(unaff_x20 + 0x10),unaff_x20 + uVar3,
                unaff_x20 + (lVar2 + 7U & 0xfffffffffffffff8),*puVar1,puVar1[1]);
  return;
}



/* Entry: 102a83c50; end: 102a83c8f;  */

void FUN_102a83c50(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee7008 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db12490;
  func_0x000107c61520(&UNK_10db12490,&UNK_11058fe80);
  puRam0000000112ee7008 = puVar1;
  return;
}



/* Entry: 102a83c90; end: 102a83d17;  */

undefined8 FUN_102a83c90(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 102a83d18; end: 102a83e7f;  */

int FUN_102a83d18(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfb < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 4) {
      iVar2 = 4;
    }
    if (param_2 + 4 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_102a83d94;
        goto LAB_102a83d78;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_102a83d78:
      return ((uint)*param_1 | uVar1 << 8) - 4;
    }
  }
LAB_102a83d94:
  iVar2 = *param_1 - 5;
  if (*param_1 < 5) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 102a83e80; end: 102a83ebf;  */

void FUN_102a83e80(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee7030 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db12468;
  func_0x000107c61520(&UNK_10db12468,&UNK_11058fe80);
  puRam0000000112ee7030 = puVar1;
  return;
}



/* Entry: 102a83ec0; end: 102a83f03;  */

void FUN_102a83ec0(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 102a83f04; end: 102a83f8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_102a83f04(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 auVar5 [16];
  
  lVar2 = 0x38;
  if (PTR__swift_coroFrameAlloc_11034f288 == (undefined *)0x0) {
    func_0x000107c610a0();
  }
  else {
    func_0x000107c61458(0x38,0x3240);
  }
  *param_1 = lVar2;
  lVar1 = _DAT_112ee7038;
  *(long *)(lVar2 + 0x28) = unaff_x20;
  *(long *)(lVar2 + 0x30) = lVar1;
  lVar1 = unaff_x20 + lVar1;
  func_0x000107c61428(lVar1,lVar2,0x21,0);
  lVar3 = lVar1;
  func_0x000107c61618();
  uVar4 = *(undefined8 *)(lVar1 + 8);
  *(long *)(lVar2 + 0x18) = lVar3;
  *(undefined8 *)(lVar2 + 0x20) = uVar4;
  auVar5._8_8_ = (long *)(lVar2 + 0x18);
  auVar5._0_8_ = FUN_102a84314;
  return auVar5;
}



/* Entry: 102a83f90; end: 102a83f9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a83f90(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = unaff_x20 + _DAT_112ee7040;
  func_0x000107c61428(lVar1,auStack_38,0,0);
  func_0x000107c61618(lVar1);
  return;
}



/* Entry: 102a83f9c; end: 102a83fe3;  */

void FUN_102a83f9c(long *param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_1;
  func_0x000107c61428(unaff_x20 + lVar1,auStack_38,0,0);
  func_0x000107c61618(unaff_x20 + lVar1);
  return;
}



/* Entry: 102a83fe4; end: 102a83fef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a83fe4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = unaff_x20 + _DAT_112ee7040;
  func_0x000107c61428(lVar1,auStack_48,1,0);
  *(undefined8 *)(lVar1 + 8) = param_2;
  func_0x000107c61604(lVar1,param_1);
  func_0x000107c615e8(param_1);
  return;
}



/* Entry: 102a83ff0; end: 102a840df;  */

void FUN_102a83ff0(undefined8 param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = unaff_x20 + *param_3;
  func_0x000107c61428(lVar1,auStack_48,1,0);
  *(undefined8 *)(lVar1 + 8) = param_2;
  func_0x000107c61604(lVar1,param_1);
  func_0x000107c615e8(param_1);
  return;
}



/* Entry: 102a840e0; end: 102a840e3;  */

void FUN_102a840e0(long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = *param_1;
  uVar3 = *(undefined8 *)(lVar2 + 0x18);
  lVar1 = *(long *)(lVar2 + 0x28) + *(long *)(lVar2 + 0x30);
  *(undefined8 *)(lVar1 + 8) = *(undefined8 *)(lVar2 + 0x20);
  func_0x000107c61604(lVar1,uVar3);
  if ((param_2 & 1) == 0) {
    func_0x000107c614a8(lVar2);
    func_0x000107c615e8(uVar3);
  }
  else {
    func_0x000107c615e8(*(undefined8 *)(lVar2 + 0x18));
    func_0x000107c614a8(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar2);
  return;
}



/* Entry: 102a840e4; end: 102a84157;  */

void FUN_102a840e4(long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = *param_1;
  uVar3 = *(undefined8 *)(lVar2 + 0x18);
  lVar1 = *(long *)(lVar2 + 0x28) + *(long *)(lVar2 + 0x30);
  *(undefined8 *)(lVar1 + 8) = *(undefined8 *)(lVar2 + 0x20);
  func_0x000107c61604(lVar1,uVar3);
  if ((param_2 & 1) == 0) {
    func_0x000107c614a8(lVar2);
    func_0x000107c615e8(uVar3);
  }
  else {
    func_0x000107c615e8(*(undefined8 *)(lVar2 + 0x18));
    func_0x000107c614a8(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar2);
  return;
}



/* Entry: 102a84158; end: 102a841ef; -[_TtC26ShoppingLensProductPicking23BaseCenterPagedScroller initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a84158(long param_1)

{
  long lVar1;
  code *pcVar2;
  
  lVar1 = param_1 + _DAT_112ee7038;
  *(undefined8 *)(lVar1 + 8) = 0;
  func_0x000107c61614(lVar1,0);
  param_1 = param_1 + _DAT_112ee7040;
  *(undefined8 *)(param_1 + 8) = 0;
  func_0x000107c61614(param_1,0);
  func_0x000107c60450("Fatal error",0xb,2,0x6c706d6920746f4e,0xef6465746e656d65,
                      "ShoppingLensProductPicking/BaseCenterPagedScroller.swift",0x38,2,0x14,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102a841f0);
  (*pcVar2)();
}



/* Entry: 102a841f0; end: 102a8420f;  */

void FUN_102a841f0(void)

{
  func_0x000107c61168(&PTR_PTR_112883b60);
  return;
}



/* Entry: 102a84210; end: 102a842ab; -[_TtC26ShoppingLensProductPicking23BaseCenterPagedScroller initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a84210(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  long lStack_50;
  long lStack_48;
  
  lVar1 = param_5 + _DAT_112ee7038;
  *(undefined8 *)(lVar1 + 8) = 0;
  func_0x000107c61614(lVar1,0);
  lVar1 = param_5 + _DAT_112ee7040;
  *(undefined8 *)(lVar1 + 8) = 0;
  func_0x000107c61614(lVar1,0);
  FUN_102a841f0();
  lStack_50 = param_5;
  lStack_48 = lVar1;
  func_0x000107c61154(param_1,param_2,param_3,param_4,&lStack_50,PTR_s_initWithFrame__1125e2948);
  return;
}



/* Entry: 102a842ac; end: 102a842db;  */

void FUN_102a842ac(void)

{
  FUN_102a841f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102a842dc; end: 102a84313; -[_TtC26ShoppingLensProductPicking23BaseCenterPagedScroller .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102a842f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102a842fc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102a842dc(long param_1)

{
  param_1 = param_1 + _DAT_112ee7038;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 102a84314; end: 102a84317;  */

void FUN_102a84314(long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = *param_1;
  uVar3 = *(undefined8 *)(lVar2 + 0x18);
  lVar1 = *(long *)(lVar2 + 0x28) + *(long *)(lVar2 + 0x30);
  *(undefined8 *)(lVar1 + 8) = *(undefined8 *)(lVar2 + 0x20);
  func_0x000107c61604(lVar1,uVar3);
  if ((param_2 & 1) == 0) {
    func_0x000107c614a8(lVar2);
    func_0x000107c615e8(uVar3);
  }
  else {
    func_0x000107c615e8(*(undefined8 *)(lVar2 + 0x18));
    func_0x000107c614a8(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar2);
  return;
}



/* Entry: 102a84318; end: 102a8434f;  */

void FUN_102a84318(undefined8 param_1)

{
  if (lRam0000000112ee70c8 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e710068);
  return;
}



/* Entry: 102a84350; end: 102a84357;  */

void FUN_102a84350(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 102a84358; end: 102a843c7;  */

undefined8 * FUN_102a84358(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 102a843c8; end: 102a84483;  */

int FUN_102a843c8(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[4] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 102a84484; end: 102a8464b;  */

long * FUN_102a84484(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  code *pcVar14;
  ulong uVar15;
  long lVar16;
  
  uVar10 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar10 >> 0x11 & 1) == 0) {
    lVar12 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar12;
    lVar3 = param_2[3];
    param_1[2] = param_2[2];
    param_1[3] = lVar3;
    lVar4 = param_2[5];
    param_1[4] = param_2[4];
    param_1[5] = lVar4;
    lVar5 = param_2[7];
    param_1[6] = param_2[6];
    param_1[7] = lVar5;
    lVar6 = param_2[9];
    param_1[8] = param_2[8];
    param_1[9] = lVar6;
    lVar16 = (long)*(int *)(param_3 + 0x24);
    lVar11 = 0;
    func_0x000107c5ede0();
    lVar13 = *(long *)(lVar11 + -8);
    pcVar14 = *(code **)(lVar13 + 0x30);
    func_0x000107c61434(lVar12);
    func_0x000107c61434(lVar3);
    func_0x000107c61434(lVar4);
    func_0x000107c61434(lVar5);
    func_0x000107c61434(lVar6);
    lVar12 = (long)param_2 + lVar16;
    (*pcVar14)(lVar12,1,lVar11);
    if ((int)lVar12 == 0) {
      (**(code **)(lVar13 + 0x10))((long)param_1 + lVar16,(long)param_2 + lVar16,lVar11);
      (**(code **)(lVar13 + 0x38))((long)param_1 + lVar16,0,1,lVar11);
    }
    else {
      lVar12 = 0x112d36580;
      func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
      func_0x000107c610b4((long)param_1 + lVar16,(long)param_2 + lVar16,
                          *(undefined8 *)(*(long *)(lVar12 + -8) + 0x40));
    }
    lVar12 = (long)param_1 + (long)*(int *)(param_3 + 0x28);
    lVar3 = (long)param_2 + (long)*(int *)(param_3 + 0x28);
    func_0x000107c6160c(lVar12,lVar3);
    *(undefined8 *)(lVar12 + 8) = *(undefined8 *)(lVar3 + 8);
    iVar9 = *(int *)(param_3 + 0x30);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x2c));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x2c));
    uVar7 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar7;
    puVar1 = (undefined8 *)((long)param_1 + (long)iVar9);
    puVar2 = (undefined8 *)((long)param_2 + (long)iVar9);
    uVar7 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar7;
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x34));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x34));
    uVar8 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar8;
    func_0x000107c61434();
    func_0x000107c61434(uVar7);
    func_0x000107c61434(uVar8);
  }
  else {
    lVar12 = *param_2;
    *param_1 = lVar12;
    uVar15 = (ulong)uVar10 & 0xff;
    param_1 = (long *)(lVar12 + (uVar15 + 0x10 & (uVar15 ^ 0xffffffffffffffff)));
    func_0x000107c6157c();
  }
  return param_1;
}



/* Entry: 102a8464c; end: 102a84717;  */

/* WARNING: Possible PIC construction at 0x000102a8466c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102a8467c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102a8468c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102a846e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102a84690) */
/* WARNING: Removing unreachable block (ram,0x000102a846bc) */
/* WARNING: Removing unreachable block (ram,0x000102a846cc) */
/* WARNING: Removing unreachable block (ram,0x000102a84680) */
/* WARNING: Removing unreachable block (ram,0x000102a84670) */
/* WARNING: Removing unreachable block (ram,0x000102a846e8) */

void FUN_102a8464c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 102a84718; end: 102a848af;  */

undefined8 * FUN_102a84718(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  code *pcVar11;
  long lVar12;
  long lVar13;
  
  uVar3 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  uVar4 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar4;
  uVar5 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar5;
  uVar6 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar6;
  uVar7 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar7;
  lVar13 = (long)*(int *)(param_3 + 0x24);
  lVar9 = 0;
  func_0x000107c5ede0();
  lVar12 = *(long *)(lVar9 + -8);
  pcVar11 = *(code **)(lVar12 + 0x30);
  func_0x000107c61434(uVar3);
  func_0x000107c61434(uVar4);
  func_0x000107c61434(uVar5);
  func_0x000107c61434(uVar6);
  func_0x000107c61434(uVar7);
  lVar10 = (long)param_2 + lVar13;
  (*pcVar11)(lVar10,1,lVar9);
  if ((int)lVar10 == 0) {
    (**(code **)(lVar12 + 0x10))((long)param_1 + lVar13,(long)param_2 + lVar13,lVar9);
    (**(code **)(lVar12 + 0x38))((long)param_1 + lVar13,0,1,lVar9);
  }
  else {
    lVar10 = 0x112d36580;
    func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
    func_0x000107c610b4((long)param_1 + lVar13,(long)param_2 + lVar13,
                        *(undefined8 *)(*(long *)(lVar10 + -8) + 0x40));
  }
  lVar10 = (long)param_1 + (long)*(int *)(param_3 + 0x28);
  lVar9 = (long)param_2 + (long)*(int *)(param_3 + 0x28);
  func_0x000107c6160c(lVar10,lVar9);
  *(undefined8 *)(lVar10 + 8) = *(undefined8 *)(lVar9 + 8);
  iVar8 = *(int *)(param_3 + 0x30);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x2c));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x2c));
  uVar3 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar3;
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar8);
  puVar2 = (undefined8 *)((long)param_2 + (long)iVar8);
  uVar3 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar3;
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x34));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x34));
  uVar4 = param_2[1];
  *puVar1 = *param_2;
  puVar1[1] = uVar4;
  func_0x000107c61434();
  func_0x000107c61434(uVar3);
  func_0x000107c61434(uVar4);
  return param_1;
}



/* Entry: 102a848b0; end: 102a84af7;  */

undefined8 * FUN_102a848b0(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  
  *param_1 = *param_2;
  uVar6 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar6);
  param_1[2] = param_2[2];
  uVar6 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c61434();
  func_0x000107c6142c(uVar6);
  param_1[4] = param_2[4];
  uVar6 = param_1[5];
  param_1[5] = param_2[5];
  func_0x000107c61434();
  func_0x000107c6142c(uVar6);
  param_1[6] = param_2[6];
  uVar6 = param_1[7];
  param_1[7] = param_2[7];
  func_0x000107c61434();
  func_0x000107c6142c(uVar6);
  param_1[8] = param_2[8];
  uVar6 = param_1[9];
  param_1[9] = param_2[9];
  func_0x000107c61434();
  func_0x000107c6142c(uVar6);
  lVar7 = (long)*(int *)(param_3 + 0x24);
  lVar3 = 0;
  func_0x000107c5ede0();
  lVar8 = *(long *)(lVar3 + -8);
  pcVar9 = *(code **)(lVar8 + 0x30);
  lVar4 = (long)param_1 + lVar7;
  (*pcVar9)(lVar4,1,lVar3);
  lVar5 = (long)param_2 + lVar7;
  (*pcVar9)(lVar5,1,lVar3);
  if ((int)lVar4 == 0) {
    if ((int)lVar5 == 0) {
      (**(code **)(lVar8 + 0x18))((long)param_1 + lVar7,(long)param_2 + lVar7,lVar3);
      goto LAB_102a84a24;
    }
    (**(code **)(lVar8 + 8))((long)param_1 + lVar7,lVar3);
  }
  else if ((int)lVar5 == 0) {
    (**(code **)(lVar8 + 0x10))((long)param_1 + lVar7,(long)param_2 + lVar7,lVar3);
    (**(code **)(lVar8 + 0x38))((long)param_1 + lVar7,0,1,lVar3);
    goto LAB_102a84a24;
  }
  lVar4 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  func_0x000107c610b4((long)param_1 + lVar7,(long)param_2 + lVar7,
                      *(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
LAB_102a84a24:
  lVar4 = (long)param_1 + (long)*(int *)(param_3 + 0x28);
  lVar5 = (long)param_2 + (long)*(int *)(param_3 + 0x28);
  func_0x000107c61608(lVar4,lVar5);
  *(undefined8 *)(lVar4 + 8) = *(undefined8 *)(lVar5 + 8);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x2c));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x2c));
  *puVar1 = *puVar2;
  uVar6 = puVar1[1];
  puVar1[1] = puVar2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar6);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x30));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x30));
  *puVar1 = *puVar2;
  uVar6 = puVar1[1];
  puVar1[1] = puVar2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar6);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x34));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x34));
  *puVar1 = *param_2;
  uVar6 = puVar1[1];
  puVar1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar6);
  return param_1;
}



/* Entry: 102a84af8; end: 102a84c07;  */

undefined8 * FUN_102a84af8(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar8 = *param_2;
  uVar10 = param_2[3];
  uVar9 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar8;
  param_1[3] = uVar10;
  param_1[2] = uVar9;
  uVar8 = param_2[4];
  uVar10 = param_2[7];
  uVar9 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar8;
  param_1[7] = uVar10;
  param_1[6] = uVar9;
  uVar8 = param_2[8];
  param_1[9] = param_2[9];
  param_1[8] = uVar8;
  lVar6 = (long)*(int *)(param_3 + 0x24);
  lVar4 = 0;
  func_0x000107c5ede0();
  lVar7 = *(long *)(lVar4 + -8);
  lVar5 = (long)param_2 + lVar6;
  (**(code **)(lVar7 + 0x30))(lVar5,1,lVar4);
  if ((int)lVar5 == 0) {
    (**(code **)(lVar7 + 0x20))((long)param_1 + lVar6,(long)param_2 + lVar6,lVar4);
    (**(code **)(lVar7 + 0x38))((long)param_1 + lVar6,0,1,lVar4);
  }
  else {
    lVar5 = 0x112d36580;
    func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
    func_0x000107c610b4((long)param_1 + lVar6,(long)param_2 + lVar6,
                        *(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  }
  lVar5 = (long)param_1 + (long)*(int *)(param_3 + 0x28);
  lVar4 = (long)param_2 + (long)*(int *)(param_3 + 0x28);
  func_0x000107c61620(lVar5,lVar4);
  *(undefined8 *)(lVar5 + 8) = *(undefined8 *)(lVar4 + 8);
  iVar1 = *(int *)(param_3 + 0x30);
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x2c));
  uVar8 = *puVar2;
  puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x2c));
  puVar3[1] = puVar2[1];
  *puVar3 = uVar8;
  puVar2 = (undefined8 *)((long)param_2 + (long)iVar1);
  uVar8 = *puVar2;
  puVar3 = (undefined8 *)((long)param_1 + (long)iVar1);
  puVar3[1] = puVar2[1];
  *puVar3 = uVar8;
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x34));
  uVar8 = *param_2;
  puVar2 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x34));
  puVar2[1] = param_2[1];
  *puVar2 = uVar8;
  return param_1;
}



/* Entry: 102a84c08; end: 102a84dcf;  */

undefined8 * FUN_102a84c08(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  
  uVar3 = param_2[1];
  uVar4 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  func_0x000107c6142c(uVar4);
  uVar3 = param_2[3];
  uVar4 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar3;
  func_0x000107c6142c(uVar4);
  uVar3 = param_2[5];
  uVar4 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar3;
  func_0x000107c6142c(uVar4);
  uVar3 = param_2[7];
  uVar4 = param_1[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar3;
  func_0x000107c6142c(uVar4);
  uVar3 = param_2[9];
  uVar4 = param_1[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar3;
  func_0x000107c6142c(uVar4);
  lVar8 = (long)*(int *)(param_3 + 0x24);
  lVar5 = 0;
  func_0x000107c5ede0();
  lVar9 = *(long *)(lVar5 + -8);
  pcVar10 = *(code **)(lVar9 + 0x30);
  lVar6 = (long)param_1 + lVar8;
  (*pcVar10)(lVar6,1,lVar5);
  lVar7 = (long)param_2 + lVar8;
  (*pcVar10)(lVar7,1,lVar5);
  if ((int)lVar6 == 0) {
    if ((int)lVar7 == 0) {
      (**(code **)(lVar9 + 0x28))((long)param_1 + lVar8,(long)param_2 + lVar8,lVar5);
      goto LAB_102a84d2c;
    }
    (**(code **)(lVar9 + 8))((long)param_1 + lVar8,lVar5);
  }
  else if ((int)lVar7 == 0) {
    (**(code **)(lVar9 + 0x20))((long)param_1 + lVar8,(long)param_2 + lVar8,lVar5);
    (**(code **)(lVar9 + 0x38))((long)param_1 + lVar8,0,1,lVar5);
    goto LAB_102a84d2c;
  }
  lVar6 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  func_0x000107c610b4((long)param_1 + lVar8,(long)param_2 + lVar8,
                      *(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
LAB_102a84d2c:
  lVar6 = (long)param_1 + (long)*(int *)(param_3 + 0x28);
  lVar7 = (long)param_2 + (long)*(int *)(param_3 + 0x28);
  func_0x000107c6161c(lVar6,lVar7);
  *(undefined8 *)(lVar6 + 8) = *(undefined8 *)(lVar7 + 8);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x2c));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x2c));
  uVar3 = puVar2[1];
  uVar4 = puVar1[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar3;
  func_0x000107c6142c(uVar4);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x30));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x30));
  uVar3 = puVar2[1];
  uVar4 = puVar1[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar3;
  func_0x000107c6142c(uVar4);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x34));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x34));
  uVar3 = param_2[1];
  uVar4 = puVar1[1];
  *puVar1 = *param_2;
  puVar1[1] = uVar3;
  func_0x000107c6142c(uVar4);
  return param_1;
}



/* Entry: 102a84dd0; end: 102a84de7;  */

void FUN_102a84dd0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 102a84de8; end: 102a84e7b;  */

void FUN_102a84de8(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puStack_70 = &UNK_10db12550;
  puStack_68 = &UNK_10db12568;
  puStack_60 = &UNK_10db12568;
  puStack_58 = &UNK_10db12568;
  puStack_50 = &UNK_10db12568;
  lVar1 = 0x13f;
  func_0x0001000ee934();
  if (param_2 < 0x40) {
    lStack_48 = *(long *)(lVar1 + -8) + 0x40;
    puStack_40 = &UNK_10db12580;
    puStack_38 = &UNK_10db12568;
    puStack_30 = &UNK_10db12568;
    puStack_28 = &UNK_10db12568;
    func_0x000107c6153c(param_1,0x100,10,&puStack_70,param_1 + 0x10);
  }
  return;
}



/* Entry: 102a84e7c; end: 102a84fb3;  */

void FUN_102a84e7c(undefined2 *param_1,undefined2 *param_2)

{
  undefined2 uVar1;
  
  uVar1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *param_1 = uVar1;
  return;
}



/* Entry: 102a84fb4; end: 102a85107;  */

void FUN_102a84fb4(undefined8 *param_1)

{
  if (*(char *)(param_1 + 1) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(*param_1);
    return;
  }
  return;
}



/* Entry: 102a85108; end: 102a851bf;  */

void FUN_102a85108(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12c970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 102a851c0; end: 102a852af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102a851c0(undefined8 param_1)

{
  long lVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  lVar1 = _DAT_112ee7120;
  func_0x000107c61614(unaff_x20 + _DAT_112ee7120,0);
  func_0x000107c61604(unaff_x20 + lVar1,param_1);
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  func_0x000107c615e8(param_1);
  return puVar2;
}



/* Entry: 102a852b0; end: 102a852ff;  */

void FUN_102a852b0(void)

{
  func_0x000107c61168(&PTR_PTR_112883c50);
  return;
}



/* Entry: 102a85300; end: 102a8530f; -[_TtC25ShoppingLensURLDownloader25ShoppingLensURLDownloader .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102a85300(long param_1)

{
  param_1 = param_1 + _DAT_112ee7120;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 102a85310; end: 102a8545b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a85310(undefined8 param_1,code *param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  code *pcVar5;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_70;
  lVar1 = unaff_x20 + _DAT_112ee7120;
  pcVar5 = param_2;
  func_0x000107c61618();
  if (lVar1 == 0) {
    (*param_2)();
  }
  else {
    puVar2 = PTR_PTR_1126aebd8;
    func_0x000107c61168(PTR_PTR_1126aebd8);
    puVar3 = puVar2;
    func_0x000107c5ed70();
    func_0x000107c5fadc();
    func_0x000107c6142c(pcVar5);
    func_0x000107c51834(puVar2);
    func_0x000107c61180();
    func_0x000107c61170(puVar3);
    puVar3 = &UNK_110590228;
    func_0x000107c613fc(&UNK_110590228,0x20,7);
    *(code **)(puVar3 + 0x10) = param_2;
    *(undefined8 *)(puVar3 + 0x18) = param_3;
    pcStack_50 = FUN_102a85658;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_1013efd24;
    puStack_58 = &UNK_110590240;
    puStack_48 = puVar3;
    func_0x000107c60bc4(&puStack_70);
    puVar3 = puStack_48;
    func_0x000107c6157c(param_3);
    func_0x000107c61574(puVar3);
    func_0x000107c42244(lVar1);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c615e8(lVar1);
    func_0x000107c61170(puVar2);
  }
  return;
}



/* Entry: 102a8545c; end: 102a85657;  */

void FUN_102a8545c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long extraout_x8;
  long extraout_x8_00;
  long lVar8;
  long lVar9;
  long lStack_a0;
  long lStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar1 = 0;
  func_0x000107c5f7fc();
  lStack_98 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_98 + 0x40));
  lVar8 = (long)&lStack_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  func_0x000107c5f824();
  lVar9 = *(long *)(lVar2 + -8);
  lStack_a0 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  lVar2 = lVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uVar3 = 0;
  func_0x0001000295c4(0);
  func_0x000107c5ffdc();
  puVar4 = &UNK_110590288;
  func_0x000107c613fc(&UNK_110590288,0x30,7);
  *(undefined8 *)(puVar4 + 0x10) = param_1;
  *(undefined8 *)(puVar4 + 0x18) = param_2;
  *(undefined8 *)(puVar4 + 0x20) = param_3;
  *(undefined8 *)(puVar4 + 0x28) = param_4;
  pcStack_70 = FUN_102a856a4;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000f6b44;
  puStack_78 = &UNK_1105902a0;
  ppuVar5 = &puStack_90;
  puStack_68 = puVar4;
  func_0x000107c60bc4(ppuVar5);
  puVar4 = puStack_68;
  func_0x000100de78a0(param_1,param_2);
  func_0x000107c6157c(param_4);
  func_0x000107c61574(puVar4);
  func_0x000107c5f808(lVar2);
  puStack_90 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001001c7eec();
  uVar6 = 0x112d4af90;
  func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
  uVar7 = uVar6;
  func_0x0001001c7f30();
  func_0x000107c60264(lVar8,&puStack_90,uVar6,uVar7,lVar1,puVar4);
  func_0x000107c5ffe8(0,lVar2,lVar8,ppuVar5);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61170(uVar3);
  (**(code **)(lStack_98 + 8))(lVar8,lVar1);
  (**(code **)(lVar9 + 8))(lVar2,lStack_a0);
  return;
}



/* Entry: 102a85658; end: 102a8567f;  */

void FUN_102a85658(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  long lVar8;
  long lVar9;
  long lStack_a0;
  long lStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar1 = 0;
  func_0x000107c5f7fc();
  lStack_98 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_98 + 0x40));
  lVar8 = (long)&lStack_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  func_0x000107c5f824();
  lVar9 = *(long *)(lVar2 + -8);
  lStack_a0 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  lVar2 = lVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uVar3 = 0;
  func_0x0001000295c4(0);
  func_0x000107c5ffdc();
  puVar4 = &UNK_110590288;
  func_0x000107c613fc(&UNK_110590288,0x30,7);
  *(undefined8 *)(puVar4 + 0x10) = param_1;
  *(undefined8 *)(puVar4 + 0x18) = param_2;
  *(undefined8 *)(puVar4 + 0x20) = uVar6;
  *(undefined8 *)(puVar4 + 0x28) = uVar7;
  pcStack_70 = FUN_102a856a4;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000f6b44;
  puStack_78 = &UNK_1105902a0;
  ppuVar5 = &puStack_90;
  puStack_68 = puVar4;
  func_0x000107c60bc4(ppuVar5);
  puVar4 = puStack_68;
  func_0x000100de78a0(param_1,param_2);
  func_0x000107c6157c(uVar7);
  func_0x000107c61574(puVar4);
  func_0x000107c5f808(lVar2);
  puStack_90 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001001c7eec();
  uVar6 = 0x112d4af90;
  func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
  uVar7 = uVar6;
  func_0x0001001c7f30();
  func_0x000107c60264(lVar8,&puStack_90,uVar6,uVar7,lVar1,puVar4);
  func_0x000107c5ffe8(0,lVar2,lVar8,ppuVar5);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61170(uVar3);
  (**(code **)(lStack_98 + 8))(lVar8,lVar1);
  (**(code **)(lVar9 + 8))(lVar2,lStack_a0);
  return;
}



/* Entry: 102a85680; end: 102a856a3;  */

undefined8 FUN_102a85680(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 102a856a4; end: 102a85723;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_102a856a4(void)

{
  ulong uVar1;
  code *pcVar2;
  uint uVar3;
  long unaff_x20;
  ulong uVar4;
  
  uVar1 = *(ulong *)(unaff_x20 + 0x18);
  pcVar2 = *(code **)(unaff_x20 + 0x20);
  if (0xe < uVar1 >> 0x3c) {
    (*pcVar2)(1,0,1);
    return;
  }
  uVar4 = *(ulong *)(unaff_x20 + 0x10);
  func_0x00010006c00c(uVar4,uVar1);
  (*pcVar2)(uVar4,uVar1,0);
  if (uVar1 >> 0x3c < 0xf) {
    uVar3 = (uint)(uVar1 >> 0x3e);
    if (uVar3 == 1) {
      uVar4 = uVar1 & 0x3fffffffffffffff;
    }
    else if (uVar3 != 2) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(uVar4);
    return;
  }
  return;
}



/* Entry: 102a85724; end: 102a8573f;  */

void FUN_102a85724(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 102a85740; end: 102a857eb;  */

void FUN_102a85740(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 102a857ec; end: 102a857ef;  */

void FUN_102a857ec(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee7150 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db126c0;
  func_0x000107c61520(&UNK_10db126c0,&UNK_110590388);
  puRam0000000112ee7150 = puVar1;
  return;
}



/* Entry: 102a857f0; end: 102a8582f;  */

void FUN_102a857f0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee7150 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db126c0;
  func_0x000107c61520(&UNK_10db126c0,&UNK_110590388);
  puRam0000000112ee7150 = puVar1;
  return;
}



/* Entry: 102a85830; end: 102a859a3;  */

void FUN_102a85830(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 102a859a4; end: 102a85a4b;  */

void FUN_102a859a4(void)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x000107c5eea4(0);
  func_0x000100028750();
  func_0x000100028790(uVar1,0x112ee72f0);
  func_0x000107c5ee88(uVar1,0);
  return;
}



/* Entry: 102a85a4c; end: 102a85b5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a85a4c(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x18,auStack_48,1,0);
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined **)(unaff_x20 + 0x18) = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000107c6142c(uVar5);
  func_0x000107c61428(unaff_x20 + 0x20,auStack_60,1,0);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  *(undefined **)(unaff_x20 + 0x20) = puVar2;
  func_0x000107c6142c(uVar5);
  func_0x000107c61428(unaff_x20 + 0x28,auStack_78,1,0);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  *(undefined **)(unaff_x20 + 0x28) = PTR___swiftEmptySetSingleton_11034f1d8;
  func_0x000107c6142c(uVar5);
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ee7160);
  uVar7 = puVar1[1];
  *puVar1 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar5;
  func_0x000107c61434();
  func_0x000107c6142c(uVar7);
  lVar4 = _DAT_113804e80;
  lVar3 = _DAT_112ee7158;
  func_0x000107c61428(unaff_x20 + _DAT_112ee7158,auStack_90,0x21,0);
  lVar6 = 0;
  func_0x000107c5eea4();
  (**(code **)(*(long *)(lVar6 + -8) + 0x18))(unaff_x20 + lVar3,param_1 + lVar4,lVar6);
  func_0x000107c614a8(auStack_90);
  return;
}



/* Entry: 102a85b5c; end: 102a85bdb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a85b5c(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x28));
  lVar1 = _DAT_112ee7158;
  lVar2 = 0;
  func_0x000107c5eea4();
  (**(code **)(*(long *)(lVar2 + -8) + 8))(unaff_x20 + lVar1,lVar2);
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + _DAT_112ee7160 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102a85bdc; end: 102a85be3;  */

void FUN_102a85bdc(void)

{
  if (lRam0000000112ee7190 != 0) {
    return;
  }
  func_0x000107c614fc(0,&DAT_10e710270);
  return;
}



/* Entry: 102a85be4; end: 102a85c1b;  */

void FUN_102a85be4(undefined8 param_1)

{
  if (lRam0000000112ee7190 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e710270);
  return;
}



/* Entry: 102a85c1c; end: 102a85caf;  */

void FUN_102a85c1c(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_50 = PTR___sBOWV_11034d658 + 0x40;
  puStack_48 = PTR___sBbWV_11034d660 + 0x40;
  lVar1 = 0x13f;
  puStack_40 = puStack_48;
  puStack_38 = puStack_48;
  func_0x000107c5eea4();
  if (param_2 < 0x40) {
    lStack_30 = *(long *)(lVar1 + -8) + 0x40;
    puStack_28 = &UNK_10db127e0;
    func_0x000107c61630(param_1,0x100,6,&puStack_50,param_1 + 0x50);
  }
  return;
}



/* Entry: 102a85cb0; end: 102a86327;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a85cb0(double param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  code *pcVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  long extraout_x8;
  long lVar9;
  long unaff_x20;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 *puVar14;
  long lVar15;
  undefined4 uVar16;
  undefined1 auStack_190 [8];
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined1 auStack_120 [120];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [32];
  
  uVar11 = param_2[1];
  lVar5 = 0;
  func_0x000107c5eea4();
  lVar15 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar15 + 0x40));
  lVar9 = _DAT_112ee7158;
  puVar14 = auStack_190 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uStack_128 = *param_2;
  uStack_130 = param_2[3];
  uVar2 = param_2[5];
  uVar1 = param_2[6];
  uVar3 = (uint)((ulong)uVar1 >> 0x20);
  uVar8 = uVar3 >> 0x1e;
  if (uVar8 == 0) {
    uStack_188 = uVar11;
    uStack_180 = param_2[2];
    uStack_178 = param_2[4];
    uStack_170 = param_2[7];
    uStack_168 = param_2[8];
    uStack_160 = param_2[9];
    uStack_158 = param_2[10];
    uStack_150 = param_2[0xb];
    uStack_148 = param_2[0xe];
    uStack_140 = param_2[0xc];
    uStack_138 = param_2[0xd];
    func_0x000107c61428(unaff_x20 + _DAT_112ee7158,auStack_90,0,0);
    (**(code **)(lVar15 + 0x10))(puVar14,unaff_x20 + lVar9,lVar5);
    func_0x000107c5ee68(puVar14);
    (**(code **)(lVar15 + 8))(puVar14,lVar5);
    param_1 = param_1 * 1000.0;
    if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x102a86240);
      (*pcVar4)();
    }
    if (param_1 <= -1.0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x102a8624c);
      (*pcVar4)();
    }
    if (1.8446744073709552e+19 <= param_1) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x102a86258);
      (*pcVar4)();
    }
    func_0x000107c61428(unaff_x20 + 0x18,auStack_a8,0x21,0);
    uVar10 = *(ulong *)(unaff_x20 + 0x18);
    func_0x000107c61434(uVar2);
    uVar11 = uStack_188;
    func_0x000107c61434(uStack_188);
    uVar13 = uStack_130;
    func_0x000107c61434(uStack_130);
    func_0x000102a8b158(param_2,auStack_120);
    uVar6 = uVar10;
    func_0x000107c61558();
    *(ulong *)(unaff_x20 + 0x18) = uVar10;
    uVar7 = uVar10;
    if ((uVar6 & 1) == 0) {
      uVar7 = 0;
      func_0x000102a8b888(0,*(long *)(uVar10 + 0x10) + 1,1,uVar10);
      *(ulong *)(unaff_x20 + 0x18) = uVar7;
    }
    uVar12 = uStack_128;
    uVar6 = *(ulong *)(uVar7 + 0x10);
    uVar10 = uVar7;
    if (*(ulong *)(uVar7 + 0x18) >> 1 <= uVar6) {
      uVar10 = (ulong)(1 < *(ulong *)(uVar7 + 0x18));
      func_0x000102a8b888(uVar10,uVar6 + 1,1,uVar7);
    }
    *(ulong *)(uVar10 + 0x10) = uVar6 + 1;
    lVar9 = uVar10 + uVar6 * 200;
    *(undefined1 *)(lVar9 + 0x20) = 0;
  }
  else {
    if (uVar8 != 1) {
      func_0x000107c61428(unaff_x20 + _DAT_112ee7158,auStack_120,0,0);
      (**(code **)(lVar15 + 0x10))(puVar14,unaff_x20 + lVar9,lVar5);
      func_0x000107c61434(uVar11);
      func_0x000107c5ee68(puVar14);
      (**(code **)(lVar15 + 8))(puVar14,lVar5);
      param_1 = param_1 * 1000.0;
      if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102a86244);
        (*pcVar4)();
      }
      if (param_1 <= -1.0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102a86250);
        (*pcVar4)();
      }
      if (1.8446744073709552e+19 <= param_1) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102a8625c);
        (*pcVar4)();
      }
      func_0x000107c61428(unaff_x20 + 0x18,auStack_90,0x21,0);
      uVar10 = *(ulong *)(unaff_x20 + 0x18);
      uVar6 = uVar10;
      func_0x000107c61558();
      *(ulong *)(unaff_x20 + 0x18) = uVar10;
      uVar7 = uVar10;
      if ((uVar6 & 1) == 0) {
        uVar7 = 0;
        func_0x000102a8b888(0,*(long *)(uVar10 + 0x10) + 1,1,uVar10);
        *(ulong *)(unaff_x20 + 0x18) = uVar7;
      }
      uVar1 = uStack_128;
      uVar6 = *(ulong *)(uVar7 + 0x10);
      uVar10 = uVar7;
      if (*(ulong *)(uVar7 + 0x18) >> 1 <= uVar6) {
        uVar10 = (ulong)(1 < *(ulong *)(uVar7 + 0x18));
        func_0x000102a8b888(uVar10,uVar6 + 1,1,uVar7);
      }
      *(ulong *)(uVar10 + 0x10) = uVar6 + 1;
      lVar9 = uVar10 + uVar6 * 200;
      *(undefined1 *)(lVar9 + 0x20) = 2;
      *(long *)(lVar9 + 0x28) = (long)param_1;
      *(undefined8 *)(lVar9 + 0x30) = uVar1;
      *(undefined8 *)(lVar9 + 0x38) = uVar11;
      *(undefined1 *)(lVar9 + 0x40) = 1;
      *(undefined8 *)(lVar9 + 0x50) = 0;
      *(undefined8 *)(lVar9 + 0x48) = 0;
      *(undefined8 *)(lVar9 + 0x60) = 0;
      *(undefined8 *)(lVar9 + 0x58) = 0;
      *(undefined8 *)(lVar9 + 0x70) = 0;
      *(undefined8 *)(lVar9 + 0x68) = 0;
      *(undefined8 *)(lVar9 + 0x80) = 0;
      *(undefined8 *)(lVar9 + 0x78) = 0;
      *(undefined8 *)(lVar9 + 0x90) = 0;
      *(undefined8 *)(lVar9 + 0x88) = 0;
      *(undefined8 *)(lVar9 + 0xa0) = 0;
      *(undefined8 *)(lVar9 + 0x98) = 0;
      *(undefined8 *)(lVar9 + 0xb0) = 0;
      *(undefined8 *)(lVar9 + 0xa8) = 0;
      *(undefined8 *)(lVar9 + 0xc0) = 0;
      *(undefined8 *)(lVar9 + 0xb8) = 0;
      *(undefined8 *)(lVar9 + 0xd0) = 0;
      *(undefined8 *)(lVar9 + 200) = 0;
      *(undefined8 *)(lVar9 + 0xdc) = 0;
      *(undefined8 *)(lVar9 + 0xd4) = 0;
      *(undefined1 *)(lVar9 + 0xe4) = 1;
      *(ulong *)(unaff_x20 + 0x18) = uVar10;
      lVar9 = -0x80;
      goto LAB_102a86210;
    }
    uStack_180 = param_2[2];
    uStack_178 = param_2[4];
    uStack_170 = param_2[7];
    uStack_168 = param_2[8];
    uStack_160 = param_2[9];
    uStack_158 = param_2[10];
    uStack_150 = param_2[0xb];
    uStack_148 = param_2[0xe];
    uStack_140 = param_2[0xc];
    uStack_138 = param_2[0xd];
    func_0x000107c61428(unaff_x20 + _DAT_112ee7158,auStack_90,0,0);
    (**(code **)(lVar15 + 0x10))(puVar14,unaff_x20 + lVar9,lVar5);
    func_0x000107c5ee68(puVar14);
    (**(code **)(lVar15 + 8))(puVar14,lVar5);
    param_1 = param_1 * 1000.0;
    if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x102a8623c);
      (*pcVar4)();
    }
    if (param_1 <= -1.0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x102a86248);
      (*pcVar4)();
    }
    if (1.8446744073709552e+19 <= param_1) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x102a86254);
      (*pcVar4)();
    }
    func_0x000107c61428(unaff_x20 + 0x18,auStack_a8,0x21,0);
    uVar10 = *(ulong *)(unaff_x20 + 0x18);
    func_0x000102a8b158(param_2,auStack_120);
    func_0x000107c61434(uVar2);
    func_0x000107c61434(uVar11);
    uVar13 = uStack_130;
    func_0x000107c61434(uStack_130);
    uVar6 = uVar10;
    func_0x000107c61558();
    *(ulong *)(unaff_x20 + 0x18) = uVar10;
    uVar7 = uVar10;
    if ((uVar6 & 1) == 0) {
      uVar7 = 0;
      func_0x000102a8b888(0,*(long *)(uVar10 + 0x10) + 1,1,uVar10);
      *(ulong *)(unaff_x20 + 0x18) = uVar7;
    }
    uVar12 = uStack_128;
    uVar6 = *(ulong *)(uVar7 + 0x10);
    uVar10 = uVar7;
    if (*(ulong *)(uVar7 + 0x18) >> 1 <= uVar6) {
      uVar10 = (ulong)(1 < *(ulong *)(uVar7 + 0x18));
      func_0x000102a8b888(uVar10,uVar6 + 1,1,uVar7);
    }
    *(ulong *)(uVar10 + 0x10) = uVar6 + 1;
    lVar9 = uVar10 + uVar6 * 200;
    *(undefined1 *)(lVar9 + 0x20) = 1;
  }
  *(long *)(lVar9 + 0x28) = (long)param_1;
  *(undefined8 *)(lVar9 + 0x30) = uVar12;
  *(undefined8 *)(lVar9 + 0x38) = uVar11;
  *(undefined1 *)(lVar9 + 0x40) = 0;
  *(undefined8 *)(lVar9 + 0x48) = uStack_180;
  *(undefined8 *)(lVar9 + 0x50) = uVar13;
  *(undefined8 *)(lVar9 + 0x58) = uStack_178;
  *(undefined8 *)(lVar9 + 0x60) = uVar2;
  *(undefined8 *)(lVar9 + 0x68) = uVar12;
  *(undefined8 *)(lVar9 + 0x70) = uVar11;
  *(undefined8 *)(lVar9 + 0x78) = uStack_180;
  *(undefined8 *)(lVar9 + 0x80) = uVar13;
  *(undefined8 *)(lVar9 + 0x88) = uStack_178;
  *(undefined8 *)(lVar9 + 0x90) = uVar2;
  uVar16 = (undefined4)uVar1;
  *(undefined4 *)(lVar9 + 0x98) = uVar16;
  *(uint *)(lVar9 + 0x9c) = uVar3 & 0x3fffffff;
  *(undefined8 *)(lVar9 + 0xa0) = uStack_170;
  *(undefined8 *)(lVar9 + 0xa8) = uStack_168;
  *(undefined8 *)(lVar9 + 0xb0) = uStack_160;
  *(undefined8 *)(lVar9 + 0xb8) = uStack_158;
  *(undefined8 *)(lVar9 + 0xc0) = uStack_150;
  *(undefined8 *)(lVar9 + 200) = uStack_140;
  *(undefined8 *)(lVar9 + 0xd0) = uStack_138;
  *(undefined8 *)(lVar9 + 0xd8) = uStack_148;
  *(undefined4 *)(lVar9 + 0xe0) = uVar16;
  *(undefined1 *)(lVar9 + 0xe4) = 0;
  *(ulong *)(unaff_x20 + 0x18) = uVar10;
  lVar9 = -0x98;
LAB_102a86210:
  func_0x000107c614a8(&stack0xfffffffffffffff0 + lVar9);
  return;
}



/* Entry: 102a86328; end: 102a86337;  */

void FUN_102a86328(void)

{
  return;
}



/* Entry: 102a86338; end: 102a8642f;  */

void FUN_102a86338(undefined8 *param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x20;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_48 = param_1[1];
  uStack_50 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  func_0x000107c61428(unaff_x20 + 0x20,auStack_78,0x21,0);
  uVar4 = *(ulong *)(unaff_x20 + 0x20);
  func_0x000100402194(&uStack_50,auStack_88);
  func_0x000100402194(&uStack_60,auStack_88);
  uVar1 = uVar4;
  func_0x000107c61558();
  *(ulong *)(unaff_x20 + 0x20) = uVar4;
  uVar2 = uVar4;
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
    func_0x000102a8b9ac(0,*(long *)(uVar4 + 0x10) + 1,1,uVar4);
    *(ulong *)(unaff_x20 + 0x20) = uVar2;
  }
  uVar1 = *(ulong *)(uVar2 + 0x10);
  uVar4 = uVar2;
  if (*(ulong *)(uVar2 + 0x18) >> 1 <= uVar1) {
    uVar4 = (ulong)(1 < *(ulong *)(uVar2 + 0x18));
    func_0x000102a8b9ac(uVar4,uVar1 + 1,1,uVar2);
  }
  *(ulong *)(uVar4 + 0x10) = uVar1 + 1;
  lVar3 = uVar4 + uVar1 * 0x30;
  uVar6 = param_1[1];
  uVar5 = *param_1;
  uVar8 = param_1[3];
  uVar7 = param_1[2];
  uVar9 = *(undefined8 *)((long)param_1 + 0x19);
  *(undefined8 *)(lVar3 + 0x41) = *(undefined8 *)((long)param_1 + 0x21);
  *(undefined8 *)(lVar3 + 0x39) = uVar9;
  *(undefined8 *)(lVar3 + 0x28) = uVar6;
  *(undefined8 *)(lVar3 + 0x20) = uVar5;
  *(undefined8 *)(lVar3 + 0x38) = uVar8;
  *(undefined8 *)(lVar3 + 0x30) = uVar7;
  *(ulong *)(unaff_x20 + 0x20) = uVar4;
  func_0x000107c614a8(auStack_78);
  return;
}



/* Entry: 102a86430; end: 102a86473;  */

void FUN_102a86430(void)

{
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x28,auStack_38,0x21,0);
  FUN_102a88c28();
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 102a86474; end: 102a88b83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102a86474(double param_1,undefined8 param_2,uint param_3,undefined8 param_4)

{
  ulong *puVar1;
  double *pdVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined4 uVar10;
  code *pcVar11;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  undefined *puVar15;
  ulong *puVar16;
  ulong uVar17;
  uint uVar18;
  uint uVar19;
  long lVar20;
  double dVar21;
  double dVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  long lVar25;
  long extraout_x8;
  long extraout_x8_00;
  long lVar26;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long lVar27;
  ulong uVar28;
  long lVar29;
  long lVar30;
  undefined8 *puVar31;
  code *pcVar32;
  ulong uVar33;
  ulong uVar34;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long extraout_x12_05;
  long extraout_x12_06;
  long extraout_x12_07;
  long extraout_x12_08;
  long extraout_x12_09;
  long extraout_x12_10;
  long extraout_x12_11;
  long extraout_x12_12;
  long extraout_x12_13;
  long extraout_x12_14;
  long extraout_x12_15;
  long extraout_x12_16;
  long extraout_x12_17;
  long extraout_x12_18;
  long extraout_x12_19;
  long extraout_x12_20;
  long extraout_x12_21;
  long extraout_x12_22;
  long extraout_x12_23;
  long extraout_x12_24;
  long extraout_x12_25;
  long extraout_x12_26;
  long extraout_x12_27;
  long extraout_x12_28;
  long extraout_x12_29;
  long extraout_x12_30;
  long extraout_x12_31;
  long extraout_x12_32;
  long extraout_x12_33;
  long extraout_x12_34;
  long extraout_x12_35;
  long extraout_x12_36;
  long extraout_x12_37;
  long extraout_x12_38;
  long extraout_x12_39;
  undefined8 extraout_x13;
  undefined8 extraout_x14;
  undefined8 extraout_x15;
  long unaff_x20;
  ulong uVar35;
  long lVar36;
  long lVar37;
  ulong uVar38;
  code *pcVar39;
  ulong uVar40;
  code *pcVar41;
  long lVar42;
  long *plVar43;
  ulong *puVar44;
  double dVar45;
  undefined8 auStack_510 [2];
  uint uStack_4fc;
  ulong uStack_4f8;
  long lStack_4f0;
  long lStack_4e8;
  long lStack_4e0;
  undefined8 uStack_4d8;
  long lStack_4d0;
  long lStack_4c8;
  long lStack_4c0;
  undefined8 uStack_4b8;
  long lStack_4b0;
  long lStack_4a8;
  long lStack_4a0;
  long lStack_498;
  long lStack_490;
  long lStack_488;
  ulong uStack_480;
  undefined *puStack_478;
  long lStack_470;
  long lStack_468;
  long lStack_460;
  ulong *puStack_458;
  long lStack_450;
  undefined8 uStack_448;
  ulong uStack_440;
  long lStack_438;
  ulong uStack_430;
  long lStack_428;
  ulong uStack_420;
  ulong uStack_418;
  long lStack_410;
  long lStack_408;
  long lStack_400;
  long lStack_3f8;
  double dStack_3f0;
  double dStack_3e8;
  double dStack_3e0;
  double dStack_3d8;
  double dStack_3d0;
  undefined8 uStack_3c8;
  long lStack_3c0;
  double dStack_3b8;
  double dStack_3b0;
  double dStack_3a8;
  double dStack_3a0;
  double dStack_398;
  ulong uStack_390;
  ulong uStack_388;
  long lStack_380;
  long lStack_378;
  long lStack_370;
  long lStack_368;
  double dStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  long lStack_348;
  long lStack_340;
  long lStack_338;
  long lStack_330;
  long lStack_328;
  long lStack_320;
  long lStack_318;
  undefined8 *puStack_310;
  undefined8 *puStack_308;
  long lStack_300;
  long lStack_2f8;
  long lStack_2f0;
  code *pcStack_2e8;
  long lStack_2e0;
  long lStack_2d8;
  long lStack_2d0;
  ulong uStack_2c8;
  long lStack_2c0;
  long lStack_2b8;
  undefined *puStack_2a8;
  undefined1 auStack_258 [32];
  undefined *apuStack_238 [25];
  undefined *puStack_170;
  long lStack_168;
  ulong *puStack_160;
  double dStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  double dStack_118;
  double dStack_110;
  double dStack_108;
  double dStack_100;
  long lStack_f8;
  double dStack_f0;
  double dStack_e8;
  double dStack_e0;
  long lStack_d8;
  double dStack_d0;
  long lStack_c8;
  double dStack_c0;
  undefined5 uStack_b8;
  undefined3 uStack_b3;
  uint uStack_b0;
  char cStack_ac;
  undefined1 auStack_a0 [24];
  undefined *puStack_88;
  
  lVar12 = 0x112ee6128;
  uStack_4d8 = param_2;
  uStack_4b8 = param_4;
  func_0x0001000285a8(0x112ee6128,&UNK_10db114e0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar12 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar40 = (long)auStack_510 - extraout_x8;
  lVar12 = 0;
  func_0x000102a91a2c();
  lStack_320 = *(long *)(lVar12 + -8);
  lStack_318 = lVar12;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_320 + 0x40));
  lVar12 = uVar40 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lStack_4c0 = lVar12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = lVar12 - extraout_x12;
  lStack_4c8 = lVar12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = lVar12 - extraout_x12_00;
  lStack_328 = lVar12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = lVar12 - extraout_x12_01;
  lStack_340 = lVar12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = lVar12 - extraout_x12_02;
  lStack_330 = lVar12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = lVar12 - extraout_x12_03;
  lVar13 = 0;
  lStack_348 = lVar12;
  func_0x000102a91698();
  lVar26 = *(long *)(lVar13 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar26 + 0x40));
  lVar12 = lVar12 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lStack_4f0 = lVar12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = lVar12 - extraout_x12_04;
  lStack_488 = lVar12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar28 = lVar12 - extraout_x12_05;
  uStack_388 = uVar28;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = uVar28 - extraout_x12_06;
  lStack_2f8 = lVar12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar28 = lVar12 - extraout_x12_07;
  uStack_420 = uVar28;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = uVar28 - extraout_x12_08;
  lStack_4a0 = lVar12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = lVar12 - extraout_x12_09;
  lStack_4a8 = lVar12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar28 = lVar12 - extraout_x12_10;
  uStack_390 = uVar28;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = uVar28 - extraout_x12_11;
  lStack_300 = lVar12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar28 = lVar12 - extraout_x12_12;
  uStack_418 = uVar28;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar29 = uVar28 - extraout_x12_13;
  lStack_490 = lVar29;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar29 = lVar29 - extraout_x12_14;
  lStack_498 = lVar29;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar29 = lVar29 - extraout_x12_15;
  uVar28 = 0;
  lStack_428 = lVar29;
  func_0x000107c5eea4();
  lVar36 = *(long *)(uVar28 - 8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar36 + 0x40));
  lVar29 = lVar29 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  lStack_2d0 = lVar29;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar29 = lVar29 - extraout_x12_16;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar37 = lVar29 - extraout_x12_17;
  lVar12 = 0x112ee72c8;
  func_0x0001000285a8(0x112ee72c8,&UNK_10db12820);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar12 + -8) + 0x40));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar30 = (lVar37 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0)) - extraout_x12_18;
  lStack_4e0 = lVar30;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar30 = lVar30 - extraout_x12_19;
  lStack_4e8 = lVar30;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar30 = lVar30 - extraout_x12_20;
  lStack_4d0 = lVar30;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar30 = lVar30 - extraout_x12_21;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = (lVar30 - extraout_x12_22) - extraout_x12_23;
  lStack_368 = lVar12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = lVar12 - extraout_x12_24;
  lStack_370 = lVar12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = (lVar12 - extraout_x12_25) - extraout_x12_26;
  lVar27 = lVar12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = lVar12 - extraout_x12_27;
  lStack_408 = lVar12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = lVar12 - extraout_x12_28;
  lStack_410 = lVar12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar31 = (undefined8 *)(lVar12 - extraout_x12_29);
  puStack_310 = puVar31;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar20 = (long)puVar31 - extraout_x12_30;
  lVar12 = lVar20;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar20 = lVar20 - extraout_x12_31;
  lStack_378 = lVar20;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar20 = lVar20 - extraout_x12_32;
  lStack_380 = lVar20;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar20 = lVar20 - extraout_x12_33;
  lStack_338 = lVar20;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar20 = lVar20 - extraout_x12_34;
  lVar42 = lVar20;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar20 = lVar20 - extraout_x12_35;
  lStack_3f8 = lVar20;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar20 = lVar20 - extraout_x12_36;
  lStack_400 = lVar20;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar31 = (undefined8 *)(lVar20 - extraout_x12_37);
  puStack_308 = puVar31;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar25 = (long)puVar31 - extraout_x12_38;
  lVar20 = lVar25;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_2e0 = lVar25 - extraout_x12_39;
  lStack_3c0 = ((undefined8 *)(unaff_x20 + _DAT_112ee7160))[1];
  if (lStack_3c0 == 0) {
    return PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  uStack_3c8 = *(undefined8 *)(unaff_x20 + _DAT_112ee7160);
  auStack_510[1] = extraout_x13;
  uStack_4fc = param_3;
  lStack_470 = lVar20;
  lStack_468 = lVar27;
  lStack_460 = lVar42;
  lStack_450 = lVar12;
  uStack_448 = extraout_x14;
  uStack_350 = extraout_x15;
  func_0x000107c61434();
  puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_102a8adb4();
  puStack_88 = puVar14;
  func_0x000107c61428(unaff_x20 + 0x18,auStack_a0,0,0);
  lVar12 = *(long *)(unaff_x20 + 0x18);
  lVar42 = *(long *)(lVar12 + 0x10);
  lStack_4b0 = lVar30;
  uStack_430 = uVar40;
  lStack_2f0 = lVar36;
  lStack_2d8 = lVar37;
  if (lVar42 != 0) {
    func_0x000107c61434(lVar12);
    uVar40 = 0;
    lVar20 = 0x20;
    do {
      puVar14 = puStack_88;
      plVar43 = (long *)(lVar12 + lVar20);
      lStack_168 = plVar43[1];
      puStack_170 = (undefined *)*plVar43;
      dVar45 = (double)plVar43[3];
      puVar44 = (ulong *)plVar43[2];
      lStack_148 = plVar43[5];
      lStack_150 = plVar43[4];
      lStack_138 = plVar43[7];
      lStack_140 = plVar43[6];
      lStack_128 = plVar43[9];
      lStack_130 = plVar43[8];
      dStack_118 = (double)plVar43[0xb];
      lStack_120 = plVar43[10];
      dStack_108 = (double)plVar43[0xd];
      dStack_110 = (double)plVar43[0xc];
      lStack_f8 = plVar43[0xf];
      dStack_100 = (double)plVar43[0xe];
      dStack_e8 = (double)plVar43[0x11];
      dStack_f0 = (double)plVar43[0x10];
      lStack_d8 = plVar43[0x13];
      param_1 = (double)plVar43[0x12];
      lStack_c8 = plVar43[0x15];
      dStack_d0 = (double)plVar43[0x14];
      dStack_c0 = (double)plVar43[0x16];
      uStack_b0 = (uint)((ulong)*(undefined8 *)((long)plVar43 + 0xbd) >> 0x18);
      cStack_ac = (char)((ulong)*(undefined8 *)((long)plVar43 + 0xbd) >> 0x38);
      uStack_b8 = (undefined5)plVar43[0x17];
      uStack_b3 = (undefined3)((ulong)plVar43[0x17] >> 0x28);
      puStack_160 = puVar44;
      dStack_158 = dVar45;
      dStack_e0 = param_1;
      if (*(long *)(puStack_88 + 0x10) == 0) {
        FUN_102a8aeb0(&puStack_170,apuStack_238);
        func_0x000107c61434(dVar45);
LAB_102a86c34:
        puVar15 = puVar14;
        func_0x000107c61558();
        apuStack_238[0] = puVar14;
        puVar16 = puVar44;
        dVar21 = dVar45;
        func_0x000100029284();
        uVar38 = (ulong)~SUB84(dVar21,0) & 1;
        lVar27 = *(long *)(puVar14 + 0x10) + uVar38;
        if (SCARRY8(*(long *)(puVar14 + 0x10),uVar38)) {
                    /* WARNING: Does not return */
          pcVar11 = (code *)SoftwareBreakpoint(1,0x102a88b38);
          (*pcVar11)();
        }
        if (*(long *)(puVar14 + 0x18) < lVar27) {
          func_0x000102a89d70(lVar27,puVar15);
          puVar16 = puVar44;
          dVar22 = dVar45;
          func_0x000100029284();
          puVar14 = apuStack_238[0];
          if ((SUB84(dVar21,0) & 1) != (SUB84(dVar22,0) & 1)) {
            func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
            pcVar11 = (code *)SoftwareBreakpoint(1,0x102a88b84);
            (*pcVar11)();
          }
        }
        else {
          puVar14 = apuStack_238[0];
          if (((ulong)puVar15 & 1) == 0) {
            FUN_102a89a0c();
            puVar14 = apuStack_238[0];
          }
        }
        apuStack_238[0] = puVar14;
        if (((ulong)dVar21 & 1) == 0) {
          *(ulong *)(puVar14 + ((ulong)puVar16 >> 6) * 8 + 0x40) =
               *(ulong *)(puVar14 + ((ulong)puVar16 >> 6) * 8 + 0x40) |
               1L << ((ulong)puVar16 & 0x3f);
          puVar1 = (ulong *)(*(long *)(puVar14 + 0x30) + (long)puVar16 * 0x10);
          *puVar1 = (ulong)puVar44;
          puVar1[1] = (ulong)dVar45;
          *(undefined **)(*(long *)(puVar14 + 0x38) + (long)puVar16 * 8) =
               PTR___swiftEmptyArrayStorage_11034f1c8;
          if (SCARRY8(*(long *)(puVar14 + 0x10),1)) {
                    /* WARNING: Does not return */
            pcVar11 = (code *)SoftwareBreakpoint(1,0x102a88b44);
            (*pcVar11)();
          }
          *(long *)(puVar14 + 0x10) = *(long *)(puVar14 + 0x10) + 1;
          func_0x000107c61434(dVar45);
          puStack_88 = puVar14;
        }
        else {
          uVar23 = *(undefined8 *)(*(long *)(puVar14 + 0x38) + (long)puVar16 * 8);
          *(undefined **)(*(long *)(puVar14 + 0x38) + (long)puVar16 * 8) =
               PTR___swiftEmptyArrayStorage_11034f1c8;
          func_0x000107c6142c(uVar23);
          puStack_88 = puVar14;
        }
      }
      else {
        FUN_102a8aeb0(&puStack_170,apuStack_238);
        func_0x000107c61434(dVar45);
        func_0x000107c61434(puVar14);
        dVar21 = dVar45;
        func_0x000100029284(puVar44);
        func_0x000107c6142c(puVar14);
        if (((ulong)dVar21 & 1) == 0) goto LAB_102a86c34;
      }
      pcVar11 = (code *)auStack_258;
      FUN_102a88b84(pcVar11,puVar44,dVar45);
      uVar38 = *puVar44;
      if (uVar38 != 0) {
        FUN_102a8aeb0(&puStack_170,apuStack_238);
        uVar35 = uVar38;
        func_0x000107c61558();
        *puVar44 = uVar38;
        uVar17 = uVar38;
        if ((uVar35 & 1) == 0) {
          uVar17 = 0;
          func_0x000102a8b888(0,*(long *)(uVar38 + 0x10) + 1,1,uVar38);
          *puVar44 = uVar17;
        }
        uVar38 = *(ulong *)(uVar17 + 0x10);
        uVar35 = uVar17;
        if (*(ulong *)(uVar17 + 0x18) >> 1 <= uVar38) {
          uVar35 = (ulong)(1 < *(ulong *)(uVar17 + 0x18));
          func_0x000102a8b888(uVar35,uVar38 + 1,1,uVar17);
          *puVar44 = uVar35;
        }
        *(ulong *)(uVar35 + 0x10) = uVar38 + 1;
        lVar27 = uVar35 + uVar38 * 200;
        *(long *)(lVar27 + 0x28) = lStack_168;
        *(undefined **)(lVar27 + 0x20) = puStack_170;
        *(long *)(lVar27 + 0x58) = lStack_138;
        *(long *)(lVar27 + 0x50) = lStack_140;
        *(long *)(lVar27 + 0x68) = lStack_128;
        *(long *)(lVar27 + 0x60) = lStack_130;
        *(double *)(lVar27 + 0x38) = dStack_158;
        *(ulong **)(lVar27 + 0x30) = puStack_160;
        *(long *)(lVar27 + 0x48) = lStack_148;
        *(long *)(lVar27 + 0x40) = lStack_150;
        *(long *)(lVar27 + 0x98) = lStack_f8;
        *(double *)(lVar27 + 0x90) = dStack_100;
        *(double *)(lVar27 + 0xa8) = dStack_e8;
        *(double *)(lVar27 + 0xa0) = dStack_f0;
        *(double *)(lVar27 + 0x78) = dStack_118;
        *(long *)(lVar27 + 0x70) = lStack_120;
        *(double *)(lVar27 + 0x88) = dStack_108;
        *(double *)(lVar27 + 0x80) = dStack_110;
        *(ulong *)(lVar27 + 0xdd) = CONCAT17(cStack_ac,CONCAT43(uStack_b0,uStack_b3));
        *(long *)(lVar27 + 200) = lStack_c8;
        *(double *)(lVar27 + 0xc0) = dStack_d0;
        *(ulong *)(lVar27 + 0xd8) = CONCAT35(uStack_b3,uStack_b8);
        *(double *)(lVar27 + 0xd0) = dStack_c0;
        *(long *)(lVar27 + 0xb8) = lStack_d8;
        *(double *)(lVar27 + 0xb0) = dStack_e0;
        param_1 = dStack_e0;
      }
      (*pcVar11)(auStack_258,0);
      func_0x000102a8aeec(&puStack_170);
      func_0x000107c6142c(dVar45);
      if (lVar42 - 1U == uVar40) {
        func_0x000107c6142c(lVar12);
        puVar14 = puStack_88;
        break;
      }
      uVar40 = uVar40 + 1;
      lVar20 = lVar20 + 200;
      if (*(ulong *)(lVar12 + 0x10) <= uVar40) {
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x102a88b34);
        (*pcVar11)();
      }
    } while( true );
  }
  lVar12 = lStack_2d8;
  lVar42 = lStack_2f0;
  lVar20 = _DAT_112ee7158;
  puVar15 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puStack_458 = (ulong *)(puVar14 + 0x40);
  uVar38 = -1L << ((ulong)(byte)puVar14[0x20] & 0x3f);
  uVar40 = 0xffffffffffffffff;
  if (-uVar38 < 0x40) {
    uVar40 = ~(-1L << (-uVar38 & 0x3f));
  }
  uVar40 = uVar40 & *puStack_458;
  func_0x000107c61438(puVar14,2);
  lStack_2c0 = lVar20;
  func_0x000107c61428(unaff_x20 + lVar20,auStack_258,0,0);
  uStack_480 = 0x3f - uVar38 >> 6;
  lVar20 = 0;
  puStack_478 = puVar14;
  uStack_4f8 = uVar38;
  lVar27 = 0;
  do {
    while (uVar38 = uStack_430, puVar44 = puStack_458, puVar14 = puStack_478, uVar40 == 0) {
      lVar25 = lVar20 + 1;
      if (SCARRY8(lVar20,1)) {
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x102a88b30);
        (*pcVar11)();
      }
      if ((long)uStack_480 <= lVar25) {
        func_0x000107c6142c(puStack_478);
        func_0x000107c6142c(lStack_3c0);
        FUN_102a8af20(puVar14,puVar44,~uStack_4f8,lVar27,0);
        func_0x000107c6142c(puVar14);
        return puVar15;
      }
      lVar20 = lVar25;
      uVar40 = puStack_458[lVar25];
    }
    uVar35 = (uVar40 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar40 & 0x5555555555555555) << 1;
    uVar35 = (uVar35 & 0xcccccccccccccccc) >> 2 | (uVar35 & 0x3333333333333333) << 2;
    uVar35 = (uVar35 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar35 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar35 = (uVar35 & 0xff00ff00ff00ff00) >> 8 | (uVar35 & 0xff00ff00ff00ff) << 8;
    uVar35 = (uVar35 & 0xffff0000ffff0000) >> 0x10 | (uVar35 & 0xffff0000ffff) << 0x10;
    lVar25 = *(long *)(*(long *)(puStack_478 + 0x38) + LZCOUNT(uVar35 >> 0x20 | uVar35 << 0x20) * 8
                      + lVar20 * 0x200);
    pcVar11 = *(code **)(lVar26 + 0x38);
    uStack_440 = uVar40;
    (*pcVar11)(lStack_2e0,1,1,lVar13);
    pcVar32 = *(code **)(lVar42 + 0x10);
    (*pcVar32)(lVar12,unaff_x20 + lStack_2c0,uVar28);
    lVar27 = *(long *)(lVar25 + 0x10);
    lStack_438 = lVar20;
    lStack_2b8 = lVar25;
    if (lVar27 != 0) {
      plVar43 = (long *)(lVar25 + 0x20);
      func_0x000107c61434(lVar25);
      uVar40 = 0;
      uStack_2c8 = lVar27 - 1;
      puStack_2a8 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
      lVar20 = lStack_2e0;
      do {
        lVar27 = lStack_2d0;
        lStack_168 = plVar43[1];
        puStack_170 = (undefined *)*plVar43;
        dStack_158 = (double)plVar43[3];
        puStack_160 = (ulong *)plVar43[2];
        lStack_148 = plVar43[5];
        lStack_150 = plVar43[4];
        lStack_138 = plVar43[7];
        lStack_140 = plVar43[6];
        lStack_128 = plVar43[9];
        lStack_130 = plVar43[8];
        dStack_118 = (double)plVar43[0xb];
        lStack_120 = plVar43[10];
        dStack_108 = (double)plVar43[0xd];
        dStack_110 = (double)plVar43[0xc];
        lStack_f8 = plVar43[0xf];
        dStack_100 = (double)plVar43[0xe];
        dStack_e8 = (double)plVar43[0x11];
        dStack_f0 = (double)plVar43[0x10];
        lStack_d8 = plVar43[0x13];
        dStack_e0 = (double)plVar43[0x12];
        lStack_c8 = plVar43[0x15];
        dStack_d0 = (double)plVar43[0x14];
        dStack_c0 = (double)plVar43[0x16];
        uStack_b0 = (uint)((ulong)*(undefined8 *)((long)plVar43 + 0xbd) >> 0x18);
        cStack_ac = (char)((ulong)*(undefined8 *)((long)plVar43 + 0xbd) >> 0x38);
        uStack_b8 = (undefined5)plVar43[0x17];
        uStack_b3 = (undefined3)((ulong)plVar43[0x17] >> 0x28);
        (*pcVar32)(lStack_2d0,unaff_x20 + lStack_2c0,uVar28);
        param_1 = (double)NEON_ucvtf(lStack_168);
        param_1 = param_1 / 1000.0;
        FUN_102a8aeb0(&puStack_170,apuStack_238);
        func_0x000107c5ee6c(lVar29);
        pcVar41 = *(code **)(lVar42 + 8);
        uVar38 = uVar28;
        (*pcVar41)(lVar27);
        dVar22 = dStack_c0;
        lVar30 = lStack_c8;
        lVar25 = lStack_d8;
        dVar21 = dStack_e0;
        dVar45 = dStack_e8;
        lVar27 = lStack_338;
        uVar23 = uStack_350;
        if ((char)puStack_170 == '\0') {
          if ((lStack_120 == 0) || (cStack_ac == '\x01')) {
            func_0x000102a8aeec(&puStack_170);
            (*pcVar41)(lVar12,uVar28);
            func_0x000102a8af70(lVar20,0x112ee72c8,&UNK_10db12820);
            uVar23 = 1;
            puVar31 = puStack_308;
            goto LAB_102a87cac;
          }
          dStack_360 = dStack_110;
          uStack_358 = dStack_100;
          dStack_3a0 = dStack_f0;
          dStack_398 = dStack_118;
          dStack_3b0 = dStack_d0;
          dStack_3a8 = dStack_108;
          dVar4 = (double)CONCAT35(uStack_b3,uStack_b8);
          pcStack_2e8 = (code *)CONCAT44(pcStack_2e8._4_4_,uStack_b0);
          if (*(long *)(puStack_2a8 + 0x10) == 0) {
LAB_102a87804:
            dVar5 = dStack_158;
            puVar44 = puStack_160;
            puVar31 = puStack_308;
            dStack_3e0 = dVar21;
            dStack_3d8 = dVar22;
            dStack_3e8 = dStack_158;
            dStack_3d0 = dVar45;
            dStack_3b8 = dVar4;
            (*pcVar32)((long)puStack_308 + (long)*(int *)(lVar13 + 0x2c),lVar29,uVar28);
            iVar3 = *(int *)(lVar13 + 0x40);
            lVar12 = 0;
            FUN_102a9ded4();
            (**(code **)(*(long *)(lVar12 + -8) + 0x38))((long)puVar31 + (long)iVar3,1,1,lVar12);
            lVar12 = lStack_3c0;
            *puVar31 = uStack_3c8;
            puVar31[1] = lVar12;
            puVar31[2] = puVar44;
            puVar31[3] = dVar5;
            dVar22 = dStack_360;
            uVar10 = pcStack_2e8._0_4_;
            puVar31[4] = dStack_398;
            puVar31[5] = dVar22;
            dVar21 = uStack_358;
            puVar31[6] = dStack_3a8;
            puVar31[7] = dVar21;
            puVar31[8] = dStack_3a0;
            puVar31[9] = dVar45;
            dVar21 = dStack_3b8;
            puVar31[10] = dStack_3b0;
            puVar31[0xb] = lVar30;
            dVar45 = dStack_3d8;
            puVar31[0xc] = dStack_3e0;
            puVar31[0xd] = lVar25;
            *(undefined4 *)(puVar31 + 0xe) = uVar10;
            pdVar2 = (double *)((long)puVar31 + (long)*(int *)(lVar13 + 0x30));
            *pdVar2 = dVar45;
            pdVar2[1] = dVar21;
            lVar42 = (long)*(int *)(lVar13 + 0x34);
            *(undefined4 *)((long)puVar31 + lVar42) = 0;
            *(undefined8 *)((long)puVar31 + (long)*(int *)(lVar13 + 0x38)) = 0;
            *(undefined1 *)((long)puVar31 + (long)*(int *)(lVar13 + 0x3c)) = 0;
            *(undefined **)((long)puVar31 + (long)*(int *)(lVar13 + 0x44)) =
                 PTR___swiftEmptyArrayStorage_11034f1c8;
            func_0x000107c61434();
            func_0x000107c61434(lVar12);
            func_0x000107c61434(dStack_3e8);
            func_0x000107c61434(dVar22);
            func_0x000107c61434(uStack_358);
            func_0x000107c61434(dStack_3d0);
            func_0x000107c61434(lVar30);
            func_0x000107c61434(lVar25);
          }
          else {
            uVar35 = (ulong)uStack_b0;
            func_0x000100e0a948(uVar35);
            lVar12 = lStack_490;
            if ((uVar38 & 1) == 0) goto LAB_102a87804;
            func_0x000102a8afb0(*(long *)(puStack_2a8 + 0x38) + *(long *)(lVar26 + 0x48) * uVar35,
                                lStack_490,0x102a91698);
            lVar42 = lStack_498;
            func_0x000102a8aff4(lVar12,lStack_498,0x102a91698);
            puVar31 = puStack_308;
            func_0x000102a8aff4(lVar42,puStack_308,0x102a91698);
            lVar42 = (long)*(int *)(lVar13 + 0x34);
          }
          lVar12 = lStack_400;
          if (SCARRY4(*(int *)((long)puVar31 + lVar42),1)) {
                    /* WARNING: Does not return */
            pcVar11 = (code *)SoftwareBreakpoint(1,0x102a88b3c);
            (*pcVar11)();
          }
          *(int *)((long)puVar31 + lVar42) = *(int *)((long)puVar31 + lVar42) + 1;
          func_0x000102a8afb0(puVar31,lStack_400,0x102a91698);
          (*pcVar11)(lVar12,0,1,lVar13);
          lVar42 = lStack_3f8;
          func_0x000102a8b038(lVar12,lStack_3f8);
          lVar12 = lVar42;
          (**(code **)(lVar26 + 0x30))(lVar42,1,lVar13);
          if ((int)lVar12 == 1) {
            uVar38 = 0;
            func_0x000102a8af70(lVar42,0x112ee72c8,&UNK_10db12820);
            uVar35 = (ulong)pcStack_2e8 & 0xffffffff;
            func_0x000100e0a948(uVar35);
            lVar12 = lStack_2d8;
            lVar42 = lStack_2e0;
            if ((uVar38 & 1) == 0) {
              func_0x000102a8aeec(&puStack_170);
              (*pcVar41)(lVar12,uVar28);
              func_0x000102a8af70(lVar42,0x112ee72c8,&UNK_10db12820);
              uVar23 = 1;
              lVar42 = lStack_460;
            }
            else {
              puVar14 = puStack_2a8;
              func_0x000107c61558();
              apuStack_238[0] = puStack_2a8;
              if ((int)puVar14 == 0) {
                FUN_102a89b7c();
              }
              puStack_2a8 = apuStack_238[0];
              lVar42 = lStack_460;
              func_0x000102a8aff4(*(long *)(apuStack_238[0] + 0x38) +
                                  *(long *)(lVar26 + 0x48) * uVar35,lStack_460,0x102a91698);
              func_0x000102a89878(uVar35,puStack_2a8);
              func_0x000102a8aeec(&puStack_170);
              (*pcVar41)(lVar12,uVar28);
              func_0x000102a8af70(lStack_2e0,0x112ee72c8,&UNK_10db12820);
              uVar23 = 0;
            }
            (*pcVar11)(lVar42,uVar23,1,lVar13);
            func_0x000102a8af70(lVar42,0x112ee72c8,&UNK_10db12820);
            uVar23 = 0;
            puVar31 = puStack_308;
            lVar42 = lStack_2f0;
            lVar20 = lStack_2e0;
          }
          else {
            uVar35 = uStack_418;
            func_0x000102a8aff4(lVar42,uStack_418,0x102a91698);
            puVar14 = puStack_2a8;
            func_0x000107c61558();
            uVar19 = (uint)puVar14;
            apuStack_238[0] = puStack_2a8;
            uVar10 = pcStack_2e8._0_4_;
            uVar17 = (ulong)pcStack_2e8 & 0xffffffff;
            uVar38 = uVar17;
            func_0x000100e0a948();
            lVar20 = lStack_2e0;
            uVar34 = (ulong)~(uint)uVar35 & 1;
            lVar12 = *(long *)(puStack_2a8 + 0x10) + uVar34;
            if (SCARRY8(*(long *)(puStack_2a8 + 0x10),uVar34)) {
                    /* WARNING: Does not return */
              pcVar11 = (code *)SoftwareBreakpoint(1,0x102a88b50);
              (*pcVar11)();
            }
            if (*(long *)(puStack_2a8 + 0x18) < lVar12) {
              func_0x000102a8a00c(lVar12);
              func_0x000100e0a948();
              uVar38 = uVar17;
              if (((uint)uVar35 & 1) != (uVar19 & 1)) {
LAB_102a88b64:
                func_0x000107c60624(PTR___ss5Int32VN_11034ee20);
                    /* WARNING: Does not return */
                pcVar11 = (code *)SoftwareBreakpoint(1,0x102a88b74);
                (*pcVar11)();
              }
            }
            else if (((ulong)puVar14 & 1) == 0) {
              FUN_102a89b7c();
            }
            puVar14 = apuStack_238[0];
            lVar12 = lStack_2d8;
            puStack_2a8 = apuStack_238[0];
            if ((uVar35 & 1) == 0) {
              *(ulong *)(apuStack_238[0] + (uVar38 >> 6) * 8 + 0x40) =
                   *(ulong *)(apuStack_238[0] + (uVar38 >> 6) * 8 + 0x40) | 1L << (uVar38 & 0x3f);
              *(undefined4 *)(*(long *)(apuStack_238[0] + 0x30) + uVar38 * 4) = uVar10;
              func_0x000102a8aff4(uStack_418,
                                  *(long *)(apuStack_238[0] + 0x38) +
                                  *(long *)(lVar26 + 0x48) * uVar38,0x102a91698);
              func_0x000102a8aeec(&puStack_170);
              (*pcVar41)(lVar12,uVar28);
              func_0x000102a8af70(lVar20,0x112ee72c8,&UNK_10db12820);
              lVar42 = *(long *)(puVar14 + 0x10);
              if (SCARRY8(lVar42,1)) {
                    /* WARNING: Does not return */
                pcVar11 = (code *)SoftwareBreakpoint(1,0x102a88b60);
                (*pcVar11)();
              }
              *(long *)(puVar14 + 0x10) = lVar42 + 1;
            }
            else {
              func_0x000102a8b114(uStack_418,
                                  *(long *)(apuStack_238[0] + 0x38) +
                                  *(long *)(lVar26 + 0x48) * uVar38);
              func_0x000102a8aeec(&puStack_170);
              (*pcVar41)(lVar12,uVar28);
              func_0x000102a8af70(lVar20,0x112ee72c8,&UNK_10db12820);
            }
            uVar23 = 0;
            puVar31 = puStack_308;
            lVar42 = lStack_2f0;
          }
LAB_102a87cac:
          (*pcVar11)(puVar31,uVar23,1,lVar13);
          func_0x000102a8b038(puVar31,lVar20);
        }
        else {
          if ((char)puStack_170 == '\x01') {
            uVar38 = 0;
            FUN_102a8af28(lVar20,lStack_338,0x112ee72c8,&UNK_10db12820);
            pcStack_2e8 = *(code **)(lVar26 + 0x30);
            lVar30 = lVar27;
            (*pcStack_2e8)(lVar27,1,lVar13);
            lVar25 = lStack_300;
            if ((int)lVar30 == 1) {
              func_0x000102a8af70(lVar27,0x112ee72c8,&UNK_10db12820);
              dVar45 = dStack_3b8;
              dVar21 = dStack_3b0;
              dVar22 = dStack_3a8;
              dVar4 = dStack_3a0;
              dVar5 = dStack_398;
              dVar6 = dStack_360;
              dStack_3a0 = dStack_118;
              dStack_398 = dStack_110;
              dStack_3b0 = dStack_108;
              dStack_360 = dStack_100;
              dStack_3a8 = dStack_f0;
              dVar7 = dStack_e8;
              dVar8 = dStack_e0;
              lVar27 = lStack_d8;
              dStack_3b8 = dStack_d0;
              lVar25 = lStack_c8;
              dVar9 = dStack_c0;
            }
            else {
              uVar38 = 0;
              func_0x000102a8aff4(lVar27,lStack_300,0x102a91698);
              func_0x000107c5ee68(lVar12);
              lVar42 = lStack_348;
              dVar45 = param_1 + *(double *)(lVar25 + *(int *)(lVar13 + 0x38));
              *(double *)(lVar25 + *(int *)(lVar13 + 0x38)) = dVar45;
              (*pcVar32)(lStack_348,lVar12,uVar28);
              *(double *)(lVar42 + *(int *)(lStack_318 + 0x14)) = param_1;
              func_0x000102a8afb0(lVar42,lStack_330,0x102a91a2c);
              iVar3 = *(int *)(lVar13 + 0x44);
              uVar34 = *(ulong *)(lVar25 + iVar3);
              uVar35 = uVar34;
              func_0x000107c61558();
              uVar17 = uVar34;
              if ((uVar35 & 1) == 0) {
                uVar17 = 0;
                FUN_102a8bad0(0,*(long *)(uVar34 + 0x10) + 1,1,uVar34);
              }
              uVar35 = *(ulong *)(uVar17 + 0x10);
              uVar34 = uVar17;
              if (*(ulong *)(uVar17 + 0x18) >> 1 <= uVar35) {
                uVar34 = (ulong)(1 < *(ulong *)(uVar17 + 0x18));
                FUN_102a8bad0(uVar34,uVar35 + 1,1,uVar17);
              }
              *(ulong *)(uVar34 + 0x10) = uVar35 + 1;
              func_0x000102a8aff4(lStack_330,
                                  uVar34 + ((ulong)*(byte *)(lStack_320 + 0x50) + 0x20 &
                                           ((ulong)*(byte *)(lStack_320 + 0x50) ^ 0xffffffffffffffff
                                           )) + *(long *)(lStack_320 + 0x48) * uVar35,0x102a91a2c);
              lVar12 = lStack_380;
              *(ulong *)(lStack_300 + iVar3) = uVar34;
              uVar19 = *(uint *)(lStack_300 + 0x70);
              uVar35 = (ulong)uVar19;
              func_0x000102a8afb0(lStack_300,lStack_380,0x102a91698);
              (*pcVar11)(lVar12,0,1,lVar13);
              lVar42 = lStack_378;
              func_0x000102a8b038(lVar12,lStack_378);
              lVar12 = lVar42;
              (*pcStack_2e8)(lVar42,1,lVar13);
              if ((int)lVar12 == 1) {
                uVar17 = 0;
                func_0x000102a8af70(lVar42,0x112ee72c8,&UNK_10db12820);
                func_0x000100e0a948(uVar35);
                if ((uVar17 & 1) == 0) {
                  func_0x000102a8b088(lStack_348,0x102a91a2c);
                  uVar23 = 1;
                  lVar12 = lStack_2d8;
                  lVar42 = lStack_450;
                }
                else {
                  puVar14 = puStack_2a8;
                  func_0x000107c61558();
                  lVar12 = lStack_2d8;
                  apuStack_238[0] = puStack_2a8;
                  if ((int)puVar14 == 0) {
                    FUN_102a89b7c();
                  }
                  puStack_2a8 = apuStack_238[0];
                  lVar42 = lStack_450;
                  func_0x000102a8aff4(*(long *)(apuStack_238[0] + 0x38) +
                                      *(long *)(lVar26 + 0x48) * uVar35,lStack_450,0x102a91698);
                  func_0x000102a89878(uVar35,puStack_2a8);
                  func_0x000102a8b088(lStack_348,0x102a91a2c);
                  uVar23 = 0;
                }
                (*pcVar11)(lVar42,uVar23,1,lVar13);
                func_0x000102a8af70(lVar42,0x112ee72c8,&UNK_10db12820);
              }
              else {
                uVar34 = uStack_390;
                func_0x000102a8aff4(lVar42,uStack_390,0x102a91698);
                puVar14 = puStack_2a8;
                func_0x000107c61558();
                uVar18 = (uint)puVar14;
                apuStack_238[0] = puStack_2a8;
                uVar17 = uVar35;
                func_0x000100e0a948();
                uVar33 = (ulong)~(uint)uVar34 & 1;
                lVar12 = *(long *)(puStack_2a8 + 0x10) + uVar33;
                if (SCARRY8(*(long *)(puStack_2a8 + 0x10),uVar33)) {
                    /* WARNING: Does not return */
                  pcVar11 = (code *)SoftwareBreakpoint(1,0x102a88b4c);
                  (*pcVar11)();
                }
                if (*(long *)(puStack_2a8 + 0x18) < lVar12) {
                  func_0x000102a8a00c(lVar12);
                  func_0x000100e0a948();
                  uVar17 = uVar35;
                  if (((uint)uVar34 & 1) != (uVar18 & 1)) goto LAB_102a88b64;
                }
                else if (((ulong)puVar14 & 1) == 0) {
                  FUN_102a89b7c();
                }
                puVar14 = apuStack_238[0];
                puStack_2a8 = apuStack_238[0];
                if ((uVar34 & 1) == 0) {
                  *(ulong *)(apuStack_238[0] + (uVar17 >> 6) * 8 + 0x40) =
                       *(ulong *)(apuStack_238[0] + (uVar17 >> 6) * 8 + 0x40) |
                       1L << (uVar17 & 0x3f);
                  *(uint *)(*(long *)(apuStack_238[0] + 0x30) + uVar17 * 4) = uVar19;
                  func_0x000102a8aff4(uStack_390,
                                      *(long *)(apuStack_238[0] + 0x38) +
                                      *(long *)(lVar26 + 0x48) * uVar17,0x102a91698);
                  func_0x000102a8b088(lStack_348,0x102a91a2c);
                  lVar12 = *(long *)(puVar14 + 0x10);
                  if (SCARRY8(lVar12,1)) {
                    /* WARNING: Does not return */
                    pcVar11 = (code *)SoftwareBreakpoint(1,0x102a88b5c);
                    (*pcVar11)();
                  }
                  *(long *)(puVar14 + 0x10) = lVar12 + 1;
                  lVar12 = lStack_2d8;
                }
                else {
                  func_0x000102a8b114(uStack_390,
                                      *(long *)(apuStack_238[0] + 0x38) +
                                      *(long *)(lVar26 + 0x48) * uVar17);
                  func_0x000102a8b088(lStack_348,0x102a91a2c);
                  lVar12 = lStack_2d8;
                }
              }
              lVar42 = lStack_2f0;
              func_0x000102a8b088(lStack_300);
              param_1 = dVar45;
              dVar45 = dStack_3b8;
              dVar21 = dStack_3b0;
              dVar22 = dStack_3a8;
              dVar4 = dStack_3a0;
              dVar5 = dStack_398;
              dVar6 = dStack_360;
              dStack_3a0 = dStack_118;
              dStack_398 = dStack_110;
              dStack_3b0 = dStack_108;
              dStack_360 = dStack_100;
              dStack_3a8 = dStack_f0;
              dVar7 = dStack_e8;
              dVar8 = dStack_e0;
              lVar27 = lStack_d8;
              dStack_3b8 = dStack_d0;
              lVar25 = lStack_c8;
              dVar9 = dStack_c0;
            }
            dStack_d0 = dStack_3b8;
            dStack_108 = dStack_3b0;
            dStack_f0 = dStack_3a8;
            dStack_118 = dStack_3a0;
            dStack_110 = dStack_398;
            dStack_100 = dStack_360;
            dStack_e8 = dVar7;
            dStack_e0 = dVar8;
            lStack_d8 = lVar27;
            lStack_c8 = lVar25;
            dStack_c0 = dVar9;
            if ((lStack_120 == 0) || (cStack_ac == '\x01')) {
              dStack_3b8 = dVar45;
              dStack_3b0 = dVar21;
              dStack_3a8 = dVar22;
              dStack_3a0 = dVar4;
              dStack_398 = dVar5;
              dStack_360 = dVar6;
              func_0x000102a8aeec(&puStack_170);
              (*pcVar41)(lVar12,uVar28);
              func_0x000102a8af70(lVar20,0x112ee72c8,&UNK_10db12820);
              uVar23 = 1;
              puVar31 = puStack_310;
              goto LAB_102a87cac;
            }
            dVar45 = (double)CONCAT35(uStack_b3,uStack_b8);
            uVar35 = (ulong)uStack_358 >> 0x20;
            uStack_358 = (double)CONCAT44((int)uVar35,uStack_b0);
            if (*(long *)(puStack_2a8 + 0x10) == 0) {
LAB_102a87d84:
              dVar21 = dStack_158;
              puVar44 = puStack_160;
              puVar31 = puStack_310;
              dStack_3f0 = dStack_158;
              dStack_3e8 = dVar8;
              dStack_3e0 = dVar9;
              dStack_3d8 = dVar7;
              dStack_3d0 = dVar45;
              (*pcVar32)((long)puStack_310 + (long)*(int *)(lVar13 + 0x2c),lVar29,uVar28);
              iVar3 = *(int *)(lVar13 + 0x40);
              lVar12 = 0;
              FUN_102a9ded4();
              (**(code **)(*(long *)(lVar12 + -8) + 0x38))((long)puVar31 + (long)iVar3,1,1,lVar12);
              lVar12 = lStack_3c0;
              *puVar31 = uStack_3c8;
              puVar31[1] = lVar12;
              puVar31[2] = puVar44;
              puVar31[3] = dVar21;
              dVar21 = dStack_398;
              uVar10 = (undefined4)uStack_358;
              puVar31[4] = dStack_3a0;
              puVar31[5] = dVar21;
              dVar45 = dStack_360;
              puVar31[6] = dStack_3b0;
              puVar31[7] = dVar45;
              puVar31[8] = dStack_3a8;
              puVar31[9] = dVar7;
              puVar31[10] = dStack_3b8;
              puVar31[0xb] = lVar25;
              dVar45 = dStack_3e0;
              puVar31[0xc] = dStack_3e8;
              puVar31[0xd] = lVar27;
              *(undefined4 *)(puVar31 + 0xe) = uVar10;
              pdVar2 = (double *)((long)puVar31 + (long)*(int *)(lVar13 + 0x30));
              *pdVar2 = dVar45;
              pdVar2[1] = dStack_3d0;
              lVar42 = (long)*(int *)(lVar13 + 0x34);
              *(undefined4 *)((long)puVar31 + lVar42) = 0;
              *(undefined8 *)((long)puVar31 + (long)*(int *)(lVar13 + 0x38)) = 0;
              *(undefined1 *)((long)puVar31 + (long)*(int *)(lVar13 + 0x3c)) = 0;
              *(undefined **)((long)puVar31 + (long)*(int *)(lVar13 + 0x44)) =
                   PTR___swiftEmptyArrayStorage_11034f1c8;
              func_0x000107c61434();
              func_0x000107c61434(lVar12);
              func_0x000107c61434(dStack_3f0);
              func_0x000107c61434(dVar21);
              func_0x000107c61434(dStack_360);
              func_0x000107c61434(dStack_3d8);
              func_0x000107c61434(lVar25);
              func_0x000107c61434(lVar27);
            }
            else {
              uVar35 = (ulong)uStack_b0;
              func_0x000100e0a948(uVar35);
              lVar12 = lStack_4a0;
              if ((uVar38 & 1) == 0) goto LAB_102a87d84;
              func_0x000102a8afb0(*(long *)(puStack_2a8 + 0x38) + *(long *)(lVar26 + 0x48) * uVar35,
                                  lStack_4a0,0x102a91698);
              lVar42 = lStack_4a8;
              func_0x000102a8aff4(lVar12,lStack_4a8,0x102a91698);
              puVar31 = puStack_310;
              func_0x000102a8aff4(lVar42,puStack_310,0x102a91698);
              lVar42 = (long)*(int *)(lVar13 + 0x34);
            }
            lVar12 = lStack_410;
            if (SCARRY4(*(int *)((long)puVar31 + lVar42),1)) {
                    /* WARNING: Does not return */
              pcVar11 = (code *)SoftwareBreakpoint(1,0x102a88b40);
              (*pcVar11)();
            }
            *(int *)((long)puVar31 + lVar42) = *(int *)((long)puVar31 + lVar42) + 1;
            func_0x000102a8afb0(puVar31,lStack_410,0x102a91698);
            (*pcVar11)(lVar12,0,1,lVar13);
            lVar42 = lStack_408;
            func_0x000102a8b038(lVar12,lStack_408);
            lVar12 = lVar42;
            (*pcStack_2e8)(lVar42,1,lVar13);
            if ((int)lVar12 == 1) {
              uVar38 = 0;
              func_0x000102a8af70(lVar42,0x112ee72c8,&UNK_10db12820);
              uVar35 = (ulong)uStack_358 & 0xffffffff;
              func_0x000100e0a948(uVar35);
              lVar12 = lStack_2d8;
              lVar42 = lStack_2e0;
              if ((uVar38 & 1) == 0) {
                func_0x000102a8aeec(&puStack_170);
                (*pcVar41)(lVar12,uVar28);
                func_0x000102a8af70(lVar42,0x112ee72c8,&UNK_10db12820);
                uVar23 = 1;
                lVar42 = lStack_468;
              }
              else {
                puVar14 = puStack_2a8;
                func_0x000107c61558();
                apuStack_238[0] = puStack_2a8;
                if ((int)puVar14 == 0) {
                  FUN_102a89b7c();
                }
                puStack_2a8 = apuStack_238[0];
                lVar42 = lStack_468;
                func_0x000102a8aff4(*(long *)(apuStack_238[0] + 0x38) +
                                    *(long *)(lVar26 + 0x48) * uVar35,lStack_468,0x102a91698);
                func_0x000102a89878(uVar35,puStack_2a8);
                func_0x000102a8aeec(&puStack_170);
                (*pcVar41)(lVar12,uVar28);
                func_0x000102a8af70(lStack_2e0,0x112ee72c8,&UNK_10db12820);
                uVar23 = 0;
              }
              (*pcVar11)(lVar42,uVar23,1,lVar13);
              func_0x000102a8af70(lVar42,0x112ee72c8,&UNK_10db12820);
              uVar23 = 0;
              puVar31 = puStack_310;
              lVar42 = lStack_2f0;
              lVar20 = lStack_2e0;
            }
            else {
              uVar35 = uStack_420;
              func_0x000102a8aff4(lVar42,uStack_420,0x102a91698);
              puVar14 = puStack_2a8;
              func_0x000107c61558();
              uVar19 = (uint)puVar14;
              uVar10 = (undefined4)uStack_358;
              uVar17 = (ulong)uStack_358 & 0xffffffff;
              uVar38 = uVar17;
              apuStack_238[0] = puStack_2a8;
              func_0x000100e0a948();
              lVar20 = lStack_2e0;
              uVar34 = (ulong)~(uint)uVar35 & 1;
              lVar12 = *(long *)(puStack_2a8 + 0x10) + uVar34;
              if (SCARRY8(*(long *)(puStack_2a8 + 0x10),uVar34)) {
                    /* WARNING: Does not return */
                pcVar11 = (code *)SoftwareBreakpoint(1,0x102a88b54);
                (*pcVar11)();
              }
              if (*(long *)(puStack_2a8 + 0x18) < lVar12) {
                func_0x000102a8a00c(lVar12);
                func_0x000100e0a948();
                uVar38 = uVar17;
                if (((uint)uVar35 & 1) != (uVar19 & 1)) goto LAB_102a88b64;
              }
              else if (((ulong)puVar14 & 1) == 0) {
                FUN_102a89b7c();
              }
              puVar14 = apuStack_238[0];
              lVar12 = lStack_2d8;
              puStack_2a8 = apuStack_238[0];
              if ((uVar35 & 1) == 0) {
                *(ulong *)(apuStack_238[0] + (uVar38 >> 6) * 8 + 0x40) =
                     *(ulong *)(apuStack_238[0] + (uVar38 >> 6) * 8 + 0x40) | 1L << (uVar38 & 0x3f);
                *(undefined4 *)(*(long *)(apuStack_238[0] + 0x30) + uVar38 * 4) = uVar10;
                func_0x000102a8aff4(uStack_420,
                                    *(long *)(apuStack_238[0] + 0x38) +
                                    *(long *)(lVar26 + 0x48) * uVar38,0x102a91698);
                func_0x000102a8aeec(&puStack_170);
                (*pcVar41)(lVar12,uVar28);
                func_0x000102a8af70(lVar20,0x112ee72c8,&UNK_10db12820);
                lVar42 = *(long *)(puVar14 + 0x10);
                if (SCARRY8(lVar42,1)) {
                    /* WARNING: Does not return */
                  pcVar11 = (code *)SoftwareBreakpoint(1,0x102a88b64);
                  (*pcVar11)();
                }
                *(long *)(puVar14 + 0x10) = lVar42 + 1;
              }
              else {
                func_0x000102a8b114(uStack_420,
                                    *(long *)(apuStack_238[0] + 0x38) +
                                    *(long *)(lVar26 + 0x48) * uVar38);
                func_0x000102a8aeec(&puStack_170);
                (*pcVar41)(lVar12,uVar28);
                func_0x000102a8af70(lVar20,0x112ee72c8,&UNK_10db12820);
              }
              uVar23 = 0;
              puVar31 = puStack_310;
              lVar42 = lStack_2f0;
            }
            goto LAB_102a87cac;
          }
          FUN_102a8af28(lVar20,uStack_350,0x112ee72c8,&UNK_10db12820);
          pcVar39 = *(code **)(lVar26 + 0x30);
          uVar24 = uVar23;
          (*pcVar39)(uVar23,1,lVar13);
          lVar12 = lStack_2f8;
          if ((int)uVar24 == 1) {
            func_0x000102a8aeec(&puStack_170);
            lVar12 = lStack_2d8;
            (*pcVar41)(lStack_2d8,uVar28);
            func_0x000102a8af70(lVar20,0x112ee72c8,&UNK_10db12820);
            func_0x000102a8af70(uVar23,0x112ee72c8,&UNK_10db12820);
          }
          else {
            func_0x000102a8aff4(uVar23,lStack_2f8,0x102a91698);
            lVar20 = lStack_2d8;
            func_0x000107c5ee68(lStack_2d8);
            lVar42 = lStack_340;
            dVar45 = param_1 + *(double *)(lVar12 + *(int *)(lVar13 + 0x38));
            *(double *)(lVar12 + *(int *)(lVar13 + 0x38)) = dVar45;
            (*pcVar32)(lStack_340,lVar20,uVar28);
            *(double *)(lVar42 + *(int *)(lStack_318 + 0x14)) = param_1;
            func_0x000102a8afb0(lVar42,lStack_328,0x102a91a2c);
            iVar3 = *(int *)(lVar13 + 0x44);
            uVar17 = *(ulong *)(lVar12 + iVar3);
            uVar38 = uVar17;
            func_0x000107c61558();
            uVar35 = uVar17;
            param_1 = dVar45;
            if ((uVar38 & 1) == 0) {
              uVar35 = 0;
              FUN_102a8bad0(0,*(long *)(uVar17 + 0x10) + 1,1,uVar17);
              param_1 = dVar45;
            }
            uVar38 = *(ulong *)(uVar35 + 0x10);
            uVar17 = uVar35;
            if (*(ulong *)(uVar35 + 0x18) >> 1 <= uVar38) {
              uVar17 = (ulong)(1 < *(ulong *)(uVar35 + 0x18));
              FUN_102a8bad0(uVar17,uVar38 + 1,1,uVar35);
            }
            *(ulong *)(uVar17 + 0x10) = uVar38 + 1;
            func_0x000102a8aff4(lStack_328,
                                uVar17 + ((ulong)*(byte *)(lStack_320 + 0x50) + 0x20 &
                                         ((ulong)*(byte *)(lStack_320 + 0x50) ^ 0xffffffffffffffff))
                                + *(long *)(lStack_320 + 0x48) * uVar38,0x102a91a2c);
            lVar12 = lStack_370;
            *(ulong *)(lStack_2f8 + iVar3) = uVar17;
            uVar19 = *(uint *)(lStack_2f8 + 0x70);
            uVar38 = (ulong)uVar19;
            func_0x000102a8afb0(lStack_2f8,lStack_370,0x102a91698);
            (*pcVar11)(lVar12,0,1,lVar13);
            lVar42 = lStack_368;
            func_0x000102a8b038(lVar12,lStack_368);
            lVar12 = lVar42;
            (*pcVar39)(lVar42,1,lVar13);
            if ((int)lVar12 == 1) {
              uVar35 = 0;
              func_0x000102a8af70(lVar42,0x112ee72c8,&UNK_10db12820);
              func_0x000100e0a948(uVar38);
              lVar42 = lStack_2e0;
              if ((uVar35 & 1) == 0) {
                func_0x000102a8aeec(&puStack_170);
                func_0x000102a8b088(lStack_340,0x102a91a2c);
                lVar12 = lStack_2d8;
                (*pcVar41)(lStack_2d8,uVar28);
                func_0x000102a8af70(lVar42,0x112ee72c8,&UNK_10db12820);
                uVar24 = 1;
                uVar23 = uStack_448;
              }
              else {
                puVar14 = puStack_2a8;
                func_0x000107c61558();
                lVar12 = lStack_2d8;
                apuStack_238[0] = puStack_2a8;
                if ((int)puVar14 == 0) {
                  FUN_102a89b7c();
                }
                puStack_2a8 = apuStack_238[0];
                uVar23 = uStack_448;
                func_0x000102a8aff4(*(long *)(apuStack_238[0] + 0x38) +
                                    *(long *)(lVar26 + 0x48) * uVar38,uStack_448,0x102a91698);
                func_0x000102a89878(uVar38,puStack_2a8);
                func_0x000102a8aeec(&puStack_170);
                func_0x000102a8b088(lStack_340,0x102a91a2c);
                (*pcVar41)(lVar12,uVar28);
                func_0x000102a8af70(lStack_2e0,0x112ee72c8,&UNK_10db12820);
                uVar24 = 0;
              }
              (*pcVar11)(uVar23,uVar24,1,lVar13);
              func_0x000102a8af70(uVar23,0x112ee72c8,&UNK_10db12820);
              lVar20 = lStack_2e0;
            }
            else {
              uVar17 = uStack_388;
              func_0x000102a8aff4(lVar42,uStack_388,0x102a91698);
              puVar14 = puStack_2a8;
              func_0x000107c61558();
              uVar18 = (uint)puVar14;
              apuStack_238[0] = puStack_2a8;
              uVar35 = uVar38;
              func_0x000100e0a948();
              uVar34 = (ulong)~(uint)uVar17 & 1;
              lVar12 = *(long *)(puStack_2a8 + 0x10) + uVar34;
              if (SCARRY8(*(long *)(puStack_2a8 + 0x10),uVar34)) {
                    /* WARNING: Does not return */
                pcVar11 = (code *)SoftwareBreakpoint(1,0x102a88b48);
                (*pcVar11)();
              }
              if (*(long *)(puStack_2a8 + 0x18) < lVar12) {
                func_0x000102a8a00c(lVar12);
                func_0x000100e0a948();
                uVar35 = uVar38;
                if (((uint)uVar17 & 1) != (uVar18 & 1)) goto LAB_102a88b64;
              }
              else if (((ulong)puVar14 & 1) == 0) {
                FUN_102a89b7c();
              }
              puVar14 = apuStack_238[0];
              puStack_2a8 = apuStack_238[0];
              if ((uVar17 & 1) == 0) {
                *(ulong *)(apuStack_238[0] + (uVar35 >> 6) * 8 + 0x40) =
                     *(ulong *)(apuStack_238[0] + (uVar35 >> 6) * 8 + 0x40) | 1L << (uVar35 & 0x3f);
                *(uint *)(*(long *)(apuStack_238[0] + 0x30) + uVar35 * 4) = uVar19;
                func_0x000102a8aff4(uStack_388,
                                    *(long *)(apuStack_238[0] + 0x38) +
                                    *(long *)(lVar26 + 0x48) * uVar35,0x102a91698);
                func_0x000102a8aeec(&puStack_170);
                func_0x000102a8b088(lStack_340,0x102a91a2c);
                lVar12 = lStack_2d8;
                (*pcVar41)(lStack_2d8,uVar28);
                lVar20 = lStack_2e0;
                func_0x000102a8af70(lStack_2e0,0x112ee72c8,&UNK_10db12820);
                lVar42 = *(long *)(puVar14 + 0x10);
                if (SCARRY8(lVar42,1)) {
                    /* WARNING: Does not return */
                  pcVar11 = (code *)SoftwareBreakpoint(1,0x102a88b58);
                  (*pcVar11)();
                }
                *(long *)(puVar14 + 0x10) = lVar42 + 1;
              }
              else {
                func_0x000102a8b114(uStack_388,
                                    *(long *)(apuStack_238[0] + 0x38) +
                                    *(long *)(lVar26 + 0x48) * uVar35);
                func_0x000102a8aeec(&puStack_170);
                func_0x000102a8b088(lStack_340,0x102a91a2c);
                lVar12 = lStack_2d8;
                (*pcVar41)(lStack_2d8,uVar28);
                lVar20 = lStack_2e0;
                func_0x000102a8af70(lStack_2e0,0x112ee72c8,&UNK_10db12820);
              }
            }
            lVar42 = lStack_2f0;
            func_0x000102a8b088(lStack_2f8,0x102a91698);
          }
          (*pcVar11)(lVar20,1,1,lVar13);
        }
        (**(code **)(lVar42 + 0x20))(lVar12,lVar29,uVar28);
        uVar38 = uStack_430;
        if (uStack_2c8 == uVar40) goto LAB_102a885b4;
        uVar40 = uVar40 + 1;
        plVar43 = plVar43 + 0x19;
        if (*(ulong *)(lStack_2b8 + 0x10) <= uVar40) {
                    /* WARNING: Does not return */
          pcVar11 = (code *)SoftwareBreakpoint(1,0x102a88b2c);
          (*pcVar11)();
        }
      } while( true );
    }
    func_0x000107c61434(lVar25);
    puStack_2a8 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
LAB_102a885b4:
    lVar12 = lStack_470;
    FUN_102a8af28(lStack_2e0,lStack_470,0x112ee72c8,&UNK_10db12820);
    pcVar41 = *(code **)(lVar26 + 0x30);
    lVar27 = lVar12;
    (*pcVar41)(lVar12,1,lVar13);
    lVar20 = lStack_428;
    if ((int)lVar27 == 1) {
      func_0x000102a8af70(lVar12,0x112ee72c8,&UNK_10db12820);
      lVar12 = lStack_2d8;
    }
    else {
      func_0x000102a8aff4(lVar12,lStack_428,0x102a91698);
      *(undefined1 *)(lVar20 + *(int *)(lVar13 + 0x3c)) = 1;
      FUN_102a8af28(uStack_4b8,uVar38,0x112ee6128,&UNK_10db114e0);
      lVar12 = 0;
      FUN_102a9ded4();
      lVar42 = 1;
      uVar40 = uVar38;
      (**(code **)(*(long *)(lVar12 + -8) + 0x30))(uVar38,1,lVar12);
      if ((int)uVar40 == 1) {
        func_0x000102a8af70(uVar38,0x112ee6128,&UNK_10db114e0);
      }
      else {
        FUN_102a9dda0();
        func_0x000102a8b088(uVar38,FUN_102a9ded4);
        uVar19 = uStack_4fc;
        if (lVar42 != 0) {
          if ((uVar40 == *(ulong *)(lStack_428 + 0x20)) && (lVar42 == *(long *)(lStack_428 + 0x28)))
          {
            func_0x000107c6142c(lVar42);
          }
          else {
            func_0x000107c605b8(uVar40,lVar42,*(ulong *)(lStack_428 + 0x20),
                                *(long *)(lStack_428 + 0x28),0);
            func_0x000107c6142c(lVar42);
            uVar19 = uStack_4fc;
            if ((uVar40 & 1) == 0) goto LAB_102a88720;
          }
          if ((uVar19 & 0xff) == 3) {
            func_0x000102a8b0c4(uStack_4b8,lStack_428 + *(int *)(lVar13 + 0x40));
          }
        }
      }
LAB_102a88720:
      lVar42 = lStack_4b0;
      func_0x000102a8afb0(lStack_428,lStack_4b0,0x102a91698);
      (*pcVar11)(lVar42,0,1,lVar13);
      lVar12 = lStack_4d0;
      FUN_102a8af28(lVar42,lStack_4d0,0x112ee72c8,&UNK_10db12820);
      lVar27 = lVar12;
      (*pcVar41)(lVar12,1,lVar13);
      lVar20 = lStack_488;
      if ((int)lVar27 == 1) {
        func_0x000102a8af70(lVar42,0x112ee72c8,&UNK_10db12820);
        func_0x000102a8af70(lVar12,0x112ee72c8,&UNK_10db12820);
        lVar42 = lStack_2f0;
        lVar12 = lStack_2d8;
      }
      else {
        func_0x000102a8aff4(lVar12,lStack_488,0x102a91698);
        lVar42 = lStack_2d8;
        func_0x000107c5ee68(lStack_2d8);
        lVar12 = lStack_4c8;
        dVar45 = param_1 + *(double *)(lVar20 + *(int *)(lVar13 + 0x38));
        *(double *)(lVar20 + *(int *)(lVar13 + 0x38)) = dVar45;
        (*pcVar32)(lStack_4c8,lVar42,uVar28);
        *(double *)(lVar12 + *(int *)(lStack_318 + 0x14)) = param_1;
        func_0x000102a8afb0(lVar12,lStack_4c0,0x102a91a2c);
        iVar3 = *(int *)(lVar13 + 0x44);
        uVar35 = *(ulong *)(lVar20 + iVar3);
        uVar40 = uVar35;
        func_0x000107c61558();
        uVar38 = uVar35;
        param_1 = dVar45;
        if ((uVar40 & 1) == 0) {
          uVar38 = 0;
          FUN_102a8bad0(0,*(long *)(uVar35 + 0x10) + 1,1,uVar35);
          param_1 = dVar45;
        }
        uVar40 = *(ulong *)(uVar38 + 0x10);
        uVar35 = uVar38;
        if (*(ulong *)(uVar38 + 0x18) >> 1 <= uVar40) {
          uVar35 = (ulong)(1 < *(ulong *)(uVar38 + 0x18));
          FUN_102a8bad0(uVar35,uVar40 + 1,1,uVar38);
        }
        *(ulong *)(uVar35 + 0x10) = uVar40 + 1;
        func_0x000102a8aff4(lStack_4c0,
                            uVar35 + ((ulong)*(byte *)(lStack_320 + 0x50) + 0x20 &
                                     ((ulong)*(byte *)(lStack_320 + 0x50) ^ 0xffffffffffffffff)) +
                            *(long *)(lStack_320 + 0x48) * uVar40,0x102a91a2c);
        lVar12 = lStack_4e8;
        *(ulong *)(lStack_488 + iVar3) = uVar35;
        uVar40 = (ulong)*(uint *)(lStack_488 + 0x70);
        func_0x000102a8afb0(lStack_488,lStack_4e8,0x102a91698);
        (*pcVar11)(lVar12,0,1,lVar13);
        lVar42 = lStack_4e0;
        func_0x000102a8b038(lVar12,lStack_4e0);
        lVar20 = lVar42;
        (*pcVar41)(lVar42,1,lVar13);
        lVar12 = lStack_4f0;
        if ((int)lVar20 == 1) {
          uVar38 = 0;
          func_0x000102a8af70(lVar42,0x112ee72c8,&UNK_10db12820);
          func_0x000100e0a948(uVar40);
          lVar12 = lStack_2d8;
          if ((uVar38 & 1) == 0) {
            uVar24 = 1;
            uVar23 = auStack_510[1];
          }
          else {
            puVar14 = puStack_2a8;
            func_0x000107c61558();
            puStack_170 = puStack_2a8;
            if ((int)puVar14 == 0) {
              FUN_102a89b7c();
            }
            puStack_2a8 = puStack_170;
            uVar23 = auStack_510[1];
            func_0x000102a8aff4(*(long *)(puStack_170 + 0x38) + *(long *)(lVar26 + 0x48) * uVar40,
                                auStack_510[1],0x102a91698);
            func_0x000102a89878(uVar40,puStack_2a8);
            uVar24 = 0;
          }
          (*pcVar11)(uVar23,uVar24,1,lVar13);
          func_0x000102a8af70(uVar23,0x112ee72c8,&UNK_10db12820);
          func_0x000102a8b088(lStack_4c8,0x102a91a2c);
          func_0x000102a8af70(lStack_4b0,0x112ee72c8,&UNK_10db12820);
        }
        else {
          func_0x000102a8aff4(lVar42,lStack_4f0,0x102a91698);
          puVar14 = puStack_2a8;
          func_0x000107c61558(puStack_2a8);
          puStack_170 = puStack_2a8;
          FUN_102a8a300(lVar12,uVar40,puVar14);
          func_0x000102a8b088(lStack_4c8,0x102a91a2c);
          func_0x000102a8af70(lStack_4b0,0x112ee72c8,&UNK_10db12820);
          puStack_2a8 = puStack_170;
          lVar12 = lStack_2d8;
        }
        lVar42 = lStack_2f0;
        func_0x000102a8b088(lStack_488,0x102a91698);
      }
      func_0x000102a8b088(lStack_428,0x102a91698);
    }
    uVar40 = uStack_440 - 1 & uStack_440;
    func_0x000107c61434(puStack_2a8);
    func_0x000102a8a610();
    func_0x000107c6142c(lStack_2b8);
    (**(code **)(lVar42 + 8))(lVar12,uVar28);
    func_0x000102a8af70(lStack_2e0,0x112ee72c8,&UNK_10db12820);
    func_0x000107c6142c(puStack_2a8);
    lVar20 = lStack_438;
    lVar27 = lStack_438;
  } while( true );
}



/* Entry: 102a88b84; end: 102a88bf7;  */

code * FUN_102a88b84(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0x28;
  if (PTR__swift_coroFrameAlloc_11034f288 == (undefined *)0x0) {
    func_0x000107c610a0();
  }
  else {
    func_0x000107c61458(0x28,0x6053);
  }
  *param_1 = lVar1;
  lVar2 = lVar1;
  FUN_102a89364();
  *(long *)(lVar1 + 0x20) = lVar2;
  return FUN_102a88bf8;
}



/* Entry: 102a88bf8; end: 102a88c27;  */

void FUN_102a88bf8(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  (**(code **)(lVar1 + 0x20))(lVar1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar1);
  return;
}



/* Entry: 102a88c28; end: 102a88dd3;  */

bool FUN_102a88c28(void)

{
  ulong uVar1;
  ulong uVar2;
  long *unaff_x20;
  long lVar3;
  long alStack_78 [9];
  
  lVar3 = *unaff_x20;
  func_0x000107c6068c(alStack_78,*(undefined8 *)(lVar3 + 0x28));
  uVar2 = 0;
  func_0x000107c60690();
  func_0x000107c606a8();
  uVar2 = uVar2 & (-1L << ((ulong)*(byte *)(lVar3 + 0x20) & 0x3f) ^ 0xffffffffffffffffU);
  uVar1 = 1L << (uVar2 & 0x3f) & *(ulong *)(lVar3 + (uVar2 >> 3 & 0xffffffffffffff8) + 0x38);
  if (uVar1 == 0) {
    lVar3 = *unaff_x20;
    func_0x000107c61558(lVar3);
    alStack_78[0] = *unaff_x20;
    func_0x000102a88cd8(uVar2,lVar3);
    *unaff_x20 = alStack_78[0];
  }
  return uVar1 == 0;
}



/* Entry: 102a88dd4; end: 102a88faf;  */

void FUN_102a88dd4(long param_1)

{
  long lVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x20;
  long lVar11;
  long lVar12;
  ulong uVar13;
  undefined1 auStack_a8 [72];
  
  lVar11 = *unaff_x20;
  lVar12 = *(long *)(lVar11 + 0x18);
  if (*(long *)(lVar11 + 0x18) <= param_1) {
    lVar12 = param_1;
  }
  uVar4 = 0x112ee72e0;
  func_0x0001000285a8(0x112ee72e0,&UNK_10db12838);
  lVar5 = lVar11;
  func_0x000107c602e0(lVar11,lVar12,0,uVar4);
  if (*(long *)(lVar11 + 0x10) != 0) {
    lVar12 = 0;
    uVar8 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
    uVar13 = 0xffffffffffffffff;
    if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
      uVar13 = ~(-1L << (uVar8 & 0x3f));
    }
    uVar13 = uVar13 & *(ulong *)(lVar11 + 0x38);
    lVar1 = lVar5 + 0x38;
    while( true ) {
      for (; uVar13 != 0; uVar13 = uVar13 - 1 & uVar13) {
        func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar5 + 0x28));
        uVar6 = 0;
        func_0x000107c60690();
        func_0x000107c606a8();
        uVar9 = -1L << ((ulong)*(byte *)(lVar5 + 0x20) & 0x3f);
        uVar6 = uVar6 & (uVar9 ^ 0xffffffffffffffff);
        uVar7 = uVar6 >> 6;
        uVar10 = -1L << (uVar6 & 0x3f) & (*(ulong *)(lVar1 + uVar7 * 8) ^ 0xffffffffffffffff);
        if (uVar10 == 0) {
          bVar3 = false;
          uVar10 = 0x3f - uVar9 >> 6;
          do {
            uVar6 = uVar7 + 1;
            if ((uVar6 == uVar10) && (bVar3)) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x102a88fb0);
              (*pcVar2)();
            }
            uVar7 = 0;
            if (uVar6 != uVar10) {
              uVar7 = uVar6;
            }
            bVar3 = (bool)(uVar6 == uVar10 | bVar3);
            uVar6 = *(ulong *)(lVar1 + uVar7 * 8);
          } while (uVar6 == 0xffffffffffffffff);
          uVar6 = ~uVar6;
          uVar10 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
          uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
          uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
          uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
          uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | uVar7 << 6;
        }
        else {
          uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
          uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
          uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
          uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
          uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | uVar6 & 0x7fffffffffffffc0;
        }
        uVar7 = uVar10 >> 3 & 0x1ffffffffffffff8;
        *(ulong *)(lVar1 + uVar7) = 1L << (uVar10 & 0x3f) | *(ulong *)(lVar1 + uVar7);
        *(long *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + 1;
      }
      bVar3 = SCARRY8(lVar12,1);
      lVar12 = lVar12 + 1;
      if (bVar3) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102a88fac);
        (*pcVar2)();
      }
      if ((long)(uVar8 + 0x3f >> 6) <= lVar12) break;
      uVar13 = ((ulong *)(lVar11 + 0x38))[lVar12];
    }
  }
  func_0x000107c61574(lVar11);
  *unaff_x20 = lVar5;
  return;
}



/* Entry: 102a88fb0; end: 102a890bb;  */

void FUN_102a88fb0(void)

{
  long lVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  
  func_0x0001000285a8(0x112ee72e0,&UNK_10db12838);
  lVar8 = *unaff_x20;
  lVar4 = lVar8;
  func_0x000107c602dc();
  if (*(long *)(lVar8 + 0x10) != 0) {
    lVar1 = lVar8 + 0x38;
    uVar5 = (1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar4 != lVar8 || lVar1 + uVar5 * 8 <= lVar4 + 0x38U) {
      func_0x000107c610b8(lVar4 + 0x38U,lVar1,uVar5 << 3);
    }
    lVar6 = 0;
    *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar8 + 0x10);
    uVar7 = 1L << ((ulong)*(byte *)(lVar8 + 0x20) & 0x3f);
    uVar5 = 0xffffffffffffffff;
    if ((*(byte *)(lVar8 + 0x20) & 0x3f) < 6) {
      uVar5 = ~(-1L << (uVar7 & 0x3f));
    }
    uVar5 = uVar5 & *(ulong *)(lVar8 + 0x38);
    while( true ) {
      for (; uVar5 != 0; uVar5 = uVar5 - 1 & uVar5) {
      }
      bVar3 = SCARRY8(lVar6,1);
      lVar6 = lVar6 + 1;
      if (bVar3) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102a890bc);
        (*pcVar2)();
      }
      if ((long)(uVar7 + 0x3f >> 6) <= lVar6) break;
      uVar5 = *(ulong *)(lVar1 + lVar6 * 8);
    }
  }
  func_0x000107c61574(lVar8);
  *unaff_x20 = lVar4;
  return;
}



/* Entry: 102a890bc; end: 102a892d7;  */

void FUN_102a890bc(long param_1)

{
  long lVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x20;
  long lVar11;
  ulong *puVar12;
  long lVar13;
  ulong uVar14;
  undefined1 auStack_a8 [72];
  
  lVar11 = *unaff_x20;
  lVar13 = *(long *)(lVar11 + 0x18);
  if (*(long *)(lVar11 + 0x18) <= param_1) {
    lVar13 = param_1;
  }
  uVar4 = 0x112ee72e0;
  func_0x0001000285a8(0x112ee72e0,&UNK_10db12838);
  lVar5 = lVar11;
  func_0x000107c602e0(lVar11,lVar13,1,uVar4);
  if (*(long *)(lVar11 + 0x10) != 0) {
    lVar13 = 0;
    puVar12 = (ulong *)(lVar11 + 0x38);
    uVar8 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
    uVar14 = 0xffffffffffffffff;
    if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
      uVar14 = ~(-1L << (uVar8 & 0x3f));
    }
    uVar14 = uVar14 & *puVar12;
    lVar1 = lVar5 + 0x38;
    while( true ) {
      for (; uVar14 != 0; uVar14 = uVar14 - 1 & uVar14) {
        func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar5 + 0x28));
        uVar6 = 0;
        func_0x000107c60690();
        func_0x000107c606a8();
        uVar9 = -1L << ((ulong)*(byte *)(lVar5 + 0x20) & 0x3f);
        uVar6 = uVar6 & (uVar9 ^ 0xffffffffffffffff);
        uVar7 = uVar6 >> 6;
        uVar10 = -1L << (uVar6 & 0x3f) & (*(ulong *)(lVar1 + uVar7 * 8) ^ 0xffffffffffffffff);
        if (uVar10 == 0) {
          bVar3 = false;
          uVar10 = 0x3f - uVar9 >> 6;
          do {
            uVar6 = uVar7 + 1;
            if ((uVar6 == uVar10) && (bVar3)) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x102a892d8);
              (*pcVar2)();
            }
            uVar7 = 0;
            if (uVar6 != uVar10) {
              uVar7 = uVar6;
            }
            bVar3 = (bool)(uVar6 == uVar10 | bVar3);
            uVar6 = *(ulong *)(lVar1 + uVar7 * 8);
          } while (uVar6 == 0xffffffffffffffff);
          uVar6 = ~uVar6;
          uVar10 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
          uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
          uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
          uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
          uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | uVar7 << 6;
        }
        else {
          uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
          uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
          uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
          uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
          uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | uVar6 & 0x7fffffffffffffc0;
        }
        uVar7 = uVar10 >> 3 & 0x1ffffffffffffff8;
        *(ulong *)(lVar1 + uVar7) = 1L << (uVar10 & 0x3f) | *(ulong *)(lVar1 + uVar7);
        *(long *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + 1;
      }
      bVar3 = SCARRY8(lVar13,1);
      lVar13 = lVar13 + 1;
      if (bVar3) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102a892d4);
        (*pcVar2)();
      }
      if ((long)(uVar8 + 0x3f >> 6) <= lVar13) break;
      uVar14 = puVar12[lVar13];
    }
    uVar14 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
    if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
      *puVar12 = -1L << (uVar14 & 0x3f);
    }
    else {
      func_0x000107c60ee4(puVar12,uVar14 + 0x3f >> 3 & 0xffffffffffffff8);
    }
    *(undefined8 *)(lVar11 + 0x10) = 0;
  }
  func_0x000107c61574(lVar11);
  *unaff_x20 = lVar5;
  return;
}



/* Entry: 102a892d8; end: 102a89363;  */

void FUN_102a892d8(ulong param_1,undefined4 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = param_4 + (param_1 >> 6) * 8;
  *(ulong *)(lVar2 + 0x40) = *(ulong *)(lVar2 + 0x40) | 1L << (param_1 & 0x3f);
  *(undefined4 *)(*(long *)(param_4 + 0x30) + param_1 * 4) = param_2;
  lVar3 = *(long *)(param_4 + 0x38);
  lVar2 = 0;
  func_0x000102a91698();
  func_0x000102a8aff4(param_3,lVar3 + *(long *)(*(long *)(lVar2 + -8) + 0x48) * param_1,0x102a91698)
  ;
  if (!SCARRY8(*(long *)(param_4 + 0x10),1)) {
    *(long *)(param_4 + 0x10) = *(long *)(param_4 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102a89364);
  (*pcVar1)();
}



/* Entry: 102a89364; end: 102a893fb;  */

code * FUN_102a89364(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *unaff_x20;
  
  lVar1 = 0x50;
  if (PTR__swift_coroFrameAlloc_11034f288 == (undefined *)0x0) {
    func_0x000107c610a0();
  }
  else {
    func_0x000107c61458(0x50,0xb3d8);
  }
  *param_1 = lVar1;
  uVar2 = *unaff_x20;
  func_0x000107c61558(uVar2);
  lVar3 = lVar1;
  FUN_102a896a4();
  *(long *)(lVar1 + 0x40) = lVar3;
  lVar3 = lVar1 + 0x20;
  FUN_102a89438(lVar3,param_2,param_3,uVar2);
  *(long *)(lVar1 + 0x48) = lVar3;
  return FUN_102a893fc;
}



/* Entry: 102a893fc; end: 102a89437;  */

void FUN_102a893fc(long *param_1)

{
  code *pcVar1;
  long lVar2;
  
  lVar2 = *param_1;
  pcVar1 = *(code **)(lVar2 + 0x40);
  (**(code **)(lVar2 + 0x48))(lVar2 + 0x20,0);
  (*pcVar1)(lVar2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar2);
  return;
}



/* Entry: 102a89438; end: 102a89573;  */

undefined1  [16] FUN_102a89438(long *param_1,long param_2,ulong param_3,uint param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  undefined1 auVar10 [16];
  
  puVar3 = (undefined8 *)0x30;
  if (PTR__swift_coroFrameAlloc_11034f288 == (undefined *)0x0) {
    func_0x000107c610a0();
  }
  else {
    func_0x000107c61458(0x30,0x967);
  }
  *param_1 = (long)puVar3;
  puVar3[2] = param_3;
  puVar3[3] = unaff_x20;
  puVar3[1] = param_2;
  lVar9 = *unaff_x20;
  lVar4 = param_2;
  uVar5 = param_3;
  func_0x000100029284();
  *(byte *)(puVar3 + 5) = (byte)uVar5 & 1;
  lVar6 = *(long *)(lVar9 + 0x10);
  uVar8 = (ulong)~(uint)uVar5 & 1;
  lVar1 = lVar6 + uVar8;
  if (SCARRY8(lVar6,uVar8)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102a89530);
    (*pcVar2)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar1) {
    func_0x000102a89d70(lVar1,param_4 & 1);
    func_0x000100029284();
    lVar4 = param_2;
    if (((uint)uVar5 & 1) != ((uint)param_3 & 1)) {
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102a89510);
      (*pcVar2)();
    }
  }
  else if ((param_4 & 1) == 0) {
    FUN_102a89a0c();
    puVar3[4] = lVar4;
    goto joined_r0x000102a89544;
  }
  puVar3[4] = lVar4;
joined_r0x000102a89544:
  if ((uVar5 & 1) == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined8 *)(*(long *)(*unaff_x20 + 0x38) + lVar4 * 8);
  }
  *puVar3 = uVar7;
  auVar10._8_8_ = puVar3;
  auVar10._0_8_ = FUN_102a89574;
  return auVar10;
}



/* Entry: 102a89574; end: 102a896a3;  */

void FUN_102a89574(long *param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  byte bVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  
  param_1 = (long *)*param_1;
  lVar9 = *param_1;
  bVar3 = *(byte *)(param_1 + 5);
  if ((param_2 & 1) == 0) {
    if (lVar9 == 0) goto LAB_102a89604;
    uVar8 = param_1[4];
    lVar6 = *(long *)param_1[3];
    if ((bVar3 & 1) != 0) goto LAB_102a895f8;
    lVar5 = param_1[1];
    lVar2 = param_1[2];
    lVar7 = lVar6 + (uVar8 >> 6) * 8;
    *(ulong *)(lVar7 + 0x40) = *(ulong *)(lVar7 + 0x40) | 1L << (uVar8 & 0x3f);
    plVar1 = (long *)(*(long *)(lVar6 + 0x30) + uVar8 * 0x10);
    *plVar1 = lVar5;
    plVar1[1] = lVar2;
    *(long *)(*(long *)(lVar6 + 0x38) + uVar8 * 8) = lVar9;
    lVar7 = *(long *)(lVar6 + 0x10);
    if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x102a896a4);
      (*pcVar4)();
    }
  }
  else {
    if (lVar9 == 0) {
LAB_102a89604:
      if ((bVar3 & 1) != 0) {
        lVar6 = param_1[4];
        lVar7 = *(long *)param_1[3];
        func_0x000100bcb1dc(*(long *)(lVar7 + 0x30) + lVar6 * 0x10);
        FUN_102a896c8(lVar6,lVar7);
      }
      goto LAB_102a89678;
    }
    uVar8 = param_1[4];
    lVar6 = *(long *)param_1[3];
    if ((bVar3 & 1) != 0) {
LAB_102a895f8:
      *(long *)(*(long *)(lVar6 + 0x38) + uVar8 * 8) = lVar9;
      goto LAB_102a89678;
    }
    lVar5 = param_1[1];
    lVar2 = param_1[2];
    lVar7 = lVar6 + (uVar8 >> 6) * 8;
    *(ulong *)(lVar7 + 0x40) = *(ulong *)(lVar7 + 0x40) | 1L << (uVar8 & 0x3f);
    plVar1 = (long *)(*(long *)(lVar6 + 0x30) + uVar8 * 0x10);
    *plVar1 = lVar5;
    plVar1[1] = lVar2;
    *(long *)(*(long *)(lVar6 + 0x38) + uVar8 * 8) = lVar9;
    lVar7 = *(long *)(lVar6 + 0x10);
    if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x102a895e8);
      (*pcVar4)();
    }
  }
  lVar5 = param_1[2];
  *(long *)(lVar6 + 0x10) = lVar7 + 1;
  func_0x000107c61434(lVar5);
LAB_102a89678:
  lVar6 = *param_1;
  func_0x000107c61434(lVar9);
  func_0x000107c6142c(lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(param_1);
  return;
}



/* Entry: 102a896a4; end: 102a896c7;  */

undefined1  [16] FUN_102a896a4(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  undefined1 auVar1 [16];
  
  *param_1 = *unaff_x20;
  param_1[1] = unaff_x20;
  auVar1._8_8_ = param_1;
  auVar1._0_8_ = 0x102a896bc;
  return auVar1;
}



/* Entry: 102a896c8; end: 102a89a0b;  */

void FUN_102a896c8(ulong param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined1 *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined1 auStack_a8 [72];
  
  lVar1 = param_2 + 0x40;
  uVar7 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  uVar9 = param_1 + 1 & (uVar7 ^ 0xffffffffffffffff);
  if ((*(ulong *)(lVar1 + (uVar9 >> 6) * 8) >> (uVar9 & 0x3f) & 1) != 0) {
    uVar7 = ~uVar7;
    uVar10 = param_1;
    func_0x000107c6026c(param_1,lVar1,uVar7);
    uVar10 = uVar10 + 1 & uVar7;
    do {
      puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + uVar9 * 0x10);
      uVar11 = *puVar2;
      uVar4 = puVar2[1];
      func_0x000107c6068c(auStack_a8,*(undefined8 *)(param_2 + 0x28));
      func_0x000107c61434(uVar4);
      puVar6 = auStack_a8;
      func_0x000107c5fb58(puVar6,uVar11,uVar4);
      func_0x000107c606a8();
      func_0x000107c6142c(uVar4);
      uVar8 = (ulong)puVar6 & uVar7;
      if ((long)param_1 < (long)uVar10) {
        if (uVar8 < uVar10) {
LAB_102a897bc:
          if ((long)param_1 < (long)uVar8) goto LAB_102a89744;
        }
        puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + param_1 * 0x10);
        puVar3 = (undefined8 *)(*(long *)(param_2 + 0x30) + uVar9 * 0x10);
        if (((long)param_1 < (long)uVar9) || (puVar3 + 2 <= puVar2 || param_1 != uVar9)) {
          uVar11 = *puVar3;
          puVar2[1] = puVar3[1];
          *puVar2 = uVar11;
        }
        puVar2 = (undefined8 *)(*(long *)(param_2 + 0x38) + param_1 * 8);
        puVar3 = (undefined8 *)(*(long *)(param_2 + 0x38) + uVar9 * 8);
        if ((((long)param_1 < (long)uVar9) || (puVar3 + 1 <= puVar2)) || (param_1 != uVar9)) {
          *puVar2 = *puVar3;
          param_1 = uVar9;
        }
      }
      else if (uVar10 <= uVar8) goto LAB_102a897bc;
LAB_102a89744:
      uVar9 = uVar9 + 1 & uVar7;
    } while ((*(ulong *)(lVar1 + (uVar9 >> 6) * 8) >> (uVar9 & 0x3f) & 1) != 0);
  }
  uVar7 = param_1 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(lVar1 + uVar7) = *(ulong *)(lVar1 + uVar7) & (-1L << (param_1 & 0x3f)) - 1U;
  if (!SBORROW8(*(long *)(param_2 + 0x10),1)) {
    *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -1;
    *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x102a89878);
  (*pcVar5)();
}



/* Entry: 102a89a0c; end: 102a89b7b;  */

void FUN_102a89a0c(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x20;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  
  func_0x0001000285a8(0x112ee72d0,&UNK_10db12828);
  lVar11 = *unaff_x20;
  lVar7 = lVar11;
  func_0x000107c6048c();
  if (*(long *)(lVar11 + 0x10) != 0) {
    lVar1 = lVar11 + 0x40;
    uVar8 = (1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar7 != lVar11 || lVar1 + uVar8 * 8 <= lVar7 + 0x40U) {
      func_0x000107c610b8(lVar7 + 0x40U,lVar1,uVar8 << 3);
    }
    lVar13 = 0;
    *(undefined8 *)(lVar7 + 0x10) = *(undefined8 *)(lVar11 + 0x10);
    uVar9 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
    uVar8 = 0xffffffffffffffff;
    if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
      uVar8 = ~(-1L << (uVar9 & 0x3f));
    }
    uVar8 = uVar8 & *(ulong *)(lVar11 + 0x40);
    if (uVar8 == 0) goto LAB_102a89ae8;
    do {
      uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar8 = uVar8 - 1 & uVar8;
      while( true ) {
        uVar10 = LZCOUNT(uVar10) | lVar13 << 6;
        puVar3 = (undefined8 *)(*(long *)(lVar11 + 0x30) + uVar10 * 0x10);
        uVar5 = puVar3[1];
        uVar12 = *(undefined8 *)(*(long *)(lVar11 + 0x38) + uVar10 * 8);
        puVar4 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar10 * 0x10);
        *puVar4 = *puVar3;
        puVar4[1] = uVar5;
        *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar10 * 8) = uVar12;
        func_0x000107c61434();
        func_0x000107c61434(uVar12);
        if (uVar8 != 0) break;
LAB_102a89ae8:
        do {
          lVar2 = lVar13 + 1;
          if (SCARRY8(lVar13,1)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x102a89b7c);
            (*pcVar6)();
          }
          if ((long)(uVar9 + 0x3f >> 6) <= lVar2) goto LAB_102a89b54;
          uVar8 = *(ulong *)(lVar1 + lVar2 * 8);
          lVar13 = lVar13 + 1;
        } while (uVar8 == 0);
        uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
        uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
        uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
        uVar8 = uVar8 - 1 & uVar8;
        lVar13 = lVar2;
      }
    } while( true );
  }
LAB_102a89b54:
  func_0x000107c61574(lVar11);
  *unaff_x20 = lVar7;
  return;
}



/* Entry: 102a89b7c; end: 102a8a2ff;  */

void FUN_102a89b7c(void)

{
  long lVar1;
  undefined4 uVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  long extraout_x8;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  long lVar10;
  long lVar11;
  
  lVar4 = 0;
  func_0x000102a91698();
  lVar5 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  func_0x0001000285a8(0x112ee72d8,&UNK_10db12830);
  lVar9 = *unaff_x20;
  lVar4 = lVar9;
  func_0x000107c6048c();
  if (*(long *)(lVar9 + 0x10) == 0) {
    func_0x000107c61574(lVar9);
LAB_102a89d48:
    *unaff_x20 = lVar4;
    return;
  }
  lVar1 = lVar9 + 0x40;
  uVar6 = (1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f)) + 0x3fU >> 6;
  if ((lVar4 != lVar9) || (lVar1 + uVar6 * 8 <= lVar4 + 0x40U)) {
    func_0x000107c610b8(lVar4 + 0x40U,lVar1,uVar6 << 3);
  }
  lVar11 = 0;
  *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar9 + 0x10);
  uVar7 = 1L << ((ulong)*(byte *)(lVar9 + 0x20) & 0x3f);
  uVar6 = 0xffffffffffffffff;
  if ((*(byte *)(lVar9 + 0x20) & 0x3f) < 6) {
    uVar6 = ~(-1L << (uVar7 & 0x3f));
  }
  uVar6 = uVar6 & *(ulong *)(lVar9 + 0x40);
  if (uVar6 == 0) goto LAB_102a89ca8;
  do {
    uVar8 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
    uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
    uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
    uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
    uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
    uVar6 = uVar6 - 1 & uVar6;
    while( true ) {
      uVar8 = LZCOUNT(uVar8) | lVar11 << 6;
      uVar2 = *(undefined4 *)(*(long *)(lVar9 + 0x30) + uVar8 * 4);
      lVar10 = *(long *)(lVar5 + 0x48) * uVar8;
      func_0x000102a8afb0(*(long *)(lVar9 + 0x38) + lVar10,
                          &stack0xffffffffffffff80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
                          0x102a91698);
      *(undefined4 *)(*(long *)(lVar4 + 0x30) + uVar8 * 4) = uVar2;
      func_0x000102a8aff4(&stack0xffffffffffffff80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
                          *(long *)(lVar4 + 0x38) + lVar10,0x102a91698);
      if (uVar6 != 0) break;
LAB_102a89ca8:
      do {
        lVar10 = lVar11 + 1;
        if (SCARRY8(lVar11,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x102a89d70);
          (*pcVar3)();
        }
        if ((long)(uVar7 + 0x3f >> 6) <= lVar10) {
          func_0x000107c61574(lVar9);
          goto LAB_102a89d48;
        }
        uVar6 = *(ulong *)(lVar1 + lVar10 * 8);
        lVar11 = lVar11 + 1;
      } while (uVar6 == 0);
      uVar8 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
      uVar6 = uVar6 - 1 & uVar6;
      lVar11 = lVar10;
    }
  } while( true );
}



/* Entry: 102a8a300; end: 102a8a407;  */

long FUN_102a8a300(long param_1,ulong param_2,uint param_3)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long *unaff_x20;
  long lVar7;
  
  lVar7 = *unaff_x20;
  uVar2 = param_2;
  uVar3 = param_2;
  func_0x000100e0a948();
  lVar5 = *(long *)(lVar7 + 0x10);
  uVar6 = (ulong)~(uint)uVar3 & 1;
  lVar4 = lVar5 + uVar6;
  if (SCARRY8(lVar5,uVar6)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102a8a3d4);
    (*pcVar1)();
  }
  if (*(long *)(lVar7 + 0x18) < lVar4) {
    param_3 = param_3 & 1;
    func_0x000102a8a00c(lVar4);
    uVar2 = param_2;
    func_0x000100e0a948();
    if (((uint)uVar3 & 1) != (param_3 & 1)) {
      func_0x000107c60624(PTR___ss5Int32VN_11034ee20);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102a8a390);
      (*pcVar1)();
    }
  }
  else if ((param_3 & 1) == 0) {
    func_0x000102a89b7c();
    lVar4 = *unaff_x20;
    goto joined_r0x000102a8a3e8;
  }
  lVar4 = *unaff_x20;
joined_r0x000102a8a3e8:
  if ((uVar3 & 1) != 0) {
    lVar5 = *(long *)(lVar4 + 0x38);
    lVar4 = 0;
    func_0x000102a91698();
    lVar5 = lVar5 + *(long *)(*(long *)(lVar4 + -8) + 0x48) * uVar2;
    lVar4 = 0;
    func_0x000102a91698();
    (**(code **)(*(long *)(lVar4 + -8) + 0x28))(lVar5,param_1,lVar4);
    return lVar5;
  }
  lVar5 = lVar4 + (uVar2 >> 6) * 8;
  *(ulong *)(lVar5 + 0x40) = *(ulong *)(lVar5 + 0x40) | 1L << (uVar2 & 0x3f);
  *(int *)(*(long *)(lVar4 + 0x30) + uVar2 * 4) = (int)param_2;
  lVar7 = *(long *)(lVar4 + 0x38);
  lVar5 = 0;
  func_0x000102a91698();
  func_0x000102a8aff4(param_1,lVar7 + *(long *)(*(long *)(lVar5 + -8) + 0x48) * uVar2,0x102a91698);
  if (SCARRY8(*(long *)(lVar4 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102a89364);
    (*pcVar1)();
  }
  *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + 1;
  return param_1;
}



/* Entry: 102a8a408; end: 102a8abcf;  */

long FUN_102a8a408(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  code *pcVar4;
  bool bVar5;
  long lVar6;
  long extraout_x8;
  long lVar7;
  long extraout_x12;
  ulong uVar8;
  ulong *puVar9;
  ulong uVar10;
  long lVar11;
  ulong uStack_90;
  long *plStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar6 = 0;
  func_0x000102a91698();
  lStack_68 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_68 + 0x40));
  lVar6 = (long)&uStack_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lStack_70 = lVar6;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_78 = lVar6 - extraout_x12;
  puVar9 = (ulong *)(param_4 + 0x40);
  uStack_90 = -1L << ((ulong)*(byte *)(param_4 + 0x20) & 0x3f);
  uVar10 = 0xffffffffffffffff;
  if (-uStack_90 < 0x40) {
    uVar10 = ~(-1L << (-uStack_90 & 0x3f));
  }
  uVar10 = uVar10 & *puVar9;
  if (param_2 == 0) {
    lVar6 = 0;
    param_3 = 0;
  }
  else if (param_3 == 0) {
    lVar6 = 0;
  }
  else {
    if (param_3 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x102a8a610);
      (*pcVar4)();
    }
    lVar7 = 0;
    uVar8 = 0x3f - uStack_90 >> 6;
    lVar1 = 0;
    lStack_80 = param_3;
    lVar3 = lStack_70;
    lVar6 = lVar7;
    while( true ) {
      while (param_3 = lVar1, plStack_88 = param_1, lStack_70 = lVar3, uVar10 != 0) {
        lVar1 = param_3 + 1;
        uVar2 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
        uVar2 = (uVar2 & 0xcccccccccccccccc) >> 2 | (uVar2 & 0x3333333333333333) << 2;
        uVar2 = (uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
        uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
        uVar10 = uVar10 - 1 & uVar10;
        lVar11 = *(long *)(lStack_68 + 0x48);
        func_0x000102a8afb0(*(long *)(param_4 + 0x38) +
                            lVar11 * (LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) | lVar6 << 6),lVar3,
                            0x102a91698);
        lVar7 = lStack_78;
        func_0x000102a8aff4(lVar3,lStack_78,0x102a91698);
        func_0x000102a8aff4(lVar7,param_2,0x102a91698);
        param_1 = plStack_88;
        param_3 = lStack_80;
        if (lVar1 == lStack_80) goto LAB_102a8a5c4;
        param_2 = param_2 + lVar11;
        lVar7 = lVar6;
        lVar3 = lStack_70;
      }
      bVar5 = SCARRY8(lVar6,1);
      lVar6 = lVar6 + 1;
      if (bVar5) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102a8a60c);
        (*pcVar4)();
      }
      if ((long)uVar8 <= lVar6) break;
      uVar10 = puVar9[lVar6];
      lVar1 = param_3;
    }
    uVar10 = 0;
    if ((long)uVar8 <= lVar7 + 1) {
      uVar8 = lVar7 + 1;
    }
    lVar6 = uVar8 - 1;
  }
LAB_102a8a5c4:
  *param_1 = param_4;
  param_1[1] = (long)puVar9;
  param_1[2] = ~uStack_90;
  param_1[3] = lVar6;
  param_1[4] = uVar10;
  return param_3;
}



/* Entry: 102a8abd0; end: 102a8adb3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a8abd0(long *param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long unaff_x20;
  long lVar7;
  code *pcVar8;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar6 = &puStack_70;
  puVar2 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(unaff_x20 + 0x10) = puVar2;
  *(undefined **)(unaff_x20 + 0x18) = puVar5;
  puVar2 = PTR___swiftEmptySetSingleton_11034f1d8;
  *(undefined **)(unaff_x20 + 0x20) = puVar5;
  *(undefined **)(unaff_x20 + 0x28) = puVar2;
  lVar4 = _DAT_112ee7158;
  if (lRam0000000112ee72e8 != -1) {
    func_0x000107c61568(0x112ee72e8,FUN_102a859a4);
  }
  lVar3 = 0;
  func_0x000107c5eea4();
  lVar7 = lVar3;
  func_0x000100028790();
  lVar4 = unaff_x20 + lVar4;
  (**(code **)(*(long *)(lVar3 + -8) + 0x10))(lVar4,lVar7,lVar3);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ee7160);
  *puVar1 = 0;
  puVar1[1] = 0;
  (**(code **)(*param_1 + 0x70))();
  if (lVar4 != 0) {
    FUN_102a85a4c();
    func_0x000107c61574(lVar4);
  }
  lVar7 = param_1[3];
  puVar5 = &UNK_110590508;
  func_0x000107c613fc(&UNK_110590508,0x18,7);
  func_0x000107c61644(puVar5 + 0x10);
  pcStack_50 = FUN_102a8b194;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  pcStack_60 = FUN_102a91ae4;
  puStack_58 = &UNK_110590520;
  puStack_48 = puVar5;
  func_0x000107c60bc4(&puStack_70);
  puVar5 = puStack_48;
  func_0x000107c61174(lVar7);
  func_0x000107c61574(puVar5);
  lVar4 = lVar7;
  func_0x000107c5c320(lVar7);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c61170(lVar7);
  func_0x000107c3e924(lVar4);
  func_0x000107c61170(lVar4);
  pcVar8 = *(code **)(*param_1 + 0xf8);
  FUN_102a85be4(0);
  (*pcVar8)();
  return;
}



/* Entry: 102a8adb4; end: 102a8aeaf;  */

undefined * FUN_102a8adb4(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  
  puVar8 = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar8 != (undefined *)0x0) {
    func_0x0001000285a8(0x112ee72d0,&UNK_10db12828);
    puVar5 = puVar8;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar10 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar2 = puVar10[-2];
      uVar3 = puVar10[-1];
      uVar9 = *puVar10;
      func_0x000107c61434(uVar3);
      func_0x000107c61434(uVar9);
      uVar6 = uVar2;
      uVar7 = uVar3;
      func_0x000100029284();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102a8aeac);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      *(undefined8 *)(*(long *)(puVar5 + 0x38) + uVar6 * 8) = uVar9;
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102a8aeb0);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      puVar8 = puVar8 + -1;
      puVar10 = puVar10 + 3;
    } while (puVar8 != (undefined *)0x0);
    func_0x000107c61574(puVar5);
  }
  return puVar5;
}


