/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1016f26d0; end: 1016f2717;  */

void FUN_1016f26d0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x88);
  func_0x00010006c090(*(undefined8 *)(unaff_x22 + 0x90),*(undefined8 *)(unaff_x22 + 0x98));
  func_0x000107c61170(uVar1);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0001016f2714. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}



/* Entry: 1016f2718; end: 1016f278f;  */

void FUN_1016f2718(long param_1,long param_2,long param_3,long param_4)

{
  undefined *puVar1;
  long *plVar2;
  long unaff_x22;
  
  plVar2 = (long *)0xc0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x1016f59c0;
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  plVar2[0xf] = param_3;
  plVar2[0x10] = param_4;
  plVar2[0xd] = param_1;
  plVar2[0xe] = param_2;
  plVar2[0xc] = (long)puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1016f22e8,0,0);
  return;
}



/* Entry: 1016f2790; end: 1016f2983;  */

undefined * FUN_1016f2790(ulong param_1)

{
  undefined *puVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong uStack_90;
  undefined1 auStack_88 [32];
  undefined *puStack_68;
  
  if (param_1 >> 0x3e == 0) {
    uVar5 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar5 = param_1;
    }
    func_0x000107c60480();
  }
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100c077e4(0,uVar5 & ((long)uVar5 >> 0x3f ^ 0xffffffffffffffffU),0);
    puVar6 = puStack_68;
    puVar1 = PTR___sypN_11034f1a8;
    if ((long)uVar5 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1016f2984);
      (*pcVar2)();
    }
    if ((param_1 & 0xc000000000000001) == 0) {
      uVar4 = 0;
      func_0x0001016f543c(0,0x112dc2b68,&PTR_PTR_1126bfdb0);
      puVar1 = PTR___sypN_11034f1a8;
      puVar8 = (ulong *)(param_1 + 0x20);
      do {
        uStack_90 = *puVar8;
        func_0x000107c61174();
        func_0x000107c6147c(auStack_88,&uStack_90,uVar4,puVar1 + 8,7);
        uVar7 = *(ulong *)(puVar6 + 0x10);
        puStack_68 = puVar6;
        if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar7) {
          func_0x000100c077e4(1 < *(ulong *)(puVar6 + 0x18),uVar7 + 1,1);
        }
        puVar6 = puStack_68;
        *(ulong *)(puStack_68 + 0x10) = uVar7 + 1;
        func_0x000100102924(auStack_88,puStack_68 + uVar7 * 0x20 + 0x20);
        uVar5 = uVar5 - 1;
        puVar8 = puVar8 + 1;
      } while (uVar5 != 0);
    }
    else {
      uVar7 = 0;
      do {
        uVar3 = uVar7;
        FUN_1016f01b0(uVar7,param_1);
        uVar4 = 0;
        uStack_90 = uVar3;
        func_0x0001016f543c(0,0x112dc2b68,&PTR_PTR_1126bfdb0);
        func_0x000107c6147c(auStack_88,&uStack_90,uVar4,puVar1 + 8,7);
        uVar3 = *(ulong *)(puVar6 + 0x10);
        puStack_68 = puVar6;
        if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar3) {
          func_0x000100c077e4(1 < *(ulong *)(puVar6 + 0x18),uVar3 + 1,1);
        }
        puVar6 = puStack_68;
        uVar7 = uVar7 + 1;
        *(ulong *)(puStack_68 + 0x10) = uVar3 + 1;
        func_0x000100102924(auStack_88,puStack_68 + uVar3 * 0x20 + 0x20);
      } while (uVar5 != uVar7);
    }
  }
  return puVar6;
}



/* Entry: 1016f2984; end: 1016f2adf;  */

void FUN_1016f2984(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  long lStack_58;
  
  func_0x000100083b20(auStack_78);
  func_0x0001000a8868(auStack_78,uStack_60);
  uVar2 = uStack_60;
  (**(code **)(lStack_58 + 8))(uStack_60,lStack_58);
  func_0x000107c5fadc(param_2,param_3);
  func_0x000107c5ee20(param_5,param_6);
  uVar3 = param_5;
  func_0x0001058e9178();
  func_0x000107c61180();
  pcStack_88 = FUN_1016f5998;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0x42000000;
  puStack_98 = &UNK_101376680;
  puStack_90 = &UNK_1103fc028;
  ppuVar4 = &puStack_a8;
  uStack_80 = param_1;
  func_0x000107c60bc4(ppuVar4);
  uVar1 = uStack_80;
  func_0x000107c6157c(param_1);
  func_0x000107c61574(uVar1);
  func_0x000107c5d1d8(uVar2);
  func_0x000107c61180();
  func_0x000107c615e8();
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c615e8(uVar2);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_5);
  func_0x000107c61170(uVar3);
  FUN_1016f52c8(auStack_78);
  return;
}



/* Entry: 1016f2ae0; end: 1016f2aef;  */

void FUN_1016f2ae0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  long lStack_58;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x30);
  func_0x000100083b20(auStack_78);
  func_0x0001000a8868(auStack_78,uStack_60);
  uVar2 = uStack_60;
  (**(code **)(lStack_58 + 8))(uStack_60,lStack_58);
  func_0x000107c5fadc(uVar3,uVar1);
  func_0x000107c5ee20(uVar4,uVar6);
  uVar6 = uVar4;
  func_0x0001058e9178();
  func_0x000107c61180();
  pcStack_88 = FUN_1016f5998;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0x42000000;
  puStack_98 = &UNK_101376680;
  puStack_90 = &UNK_1103fc028;
  ppuVar5 = &puStack_a8;
  uStack_80 = param_1;
  func_0x000107c60bc4(ppuVar5);
  uVar1 = uStack_80;
  func_0x000107c6157c(param_1);
  func_0x000107c61574(uVar1);
  func_0x000107c5d1d8(uVar2);
  func_0x000107c61180();
  func_0x000107c615e8();
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c615e8(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar6);
  FUN_1016f52c8(auStack_78);
  return;
}



/* Entry: 1016f2af0; end: 1016f2bcf;  */

void FUN_1016f2af0(long param_1,ulong param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  long lStack_50;
  ulong uStack_48;
  undefined1 uStack_40;
  
  if (0xe < param_2 >> 0x3c) goto LAB_1016f2b7c;
  uVar1 = (uint)(param_2 >> 0x20);
  uVar2 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar2 == 0) {
      if ((param_2 & 0xff000000000000) == 0) goto LAB_1016f2b78;
    }
    else {
      if ((long)(int)param_1 == param_1 >> 0x20) goto LAB_1016f2b7c;
LAB_1016f2b5c:
      func_0x000100de78a0();
    }
    if (param_3 == 0) {
      uStack_40 = 0;
      lStack_50 = param_1;
      uStack_48 = param_2;
      func_0x00010488e5d4(&lStack_50);
      func_0x0001000b44c0(param_1,param_2);
      return;
    }
  }
  else if (uVar2 == 2) {
    if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_1016f2b7c;
    goto LAB_1016f2b5c;
  }
LAB_1016f2b78:
  func_0x0001000b44c0();
LAB_1016f2b7c:
  uStack_48 = 0xf000000000000000;
  lStack_50 = 0;
  uStack_40 = 0;
  func_0x00010488e5d4(&lStack_50);
  return;
}



/* Entry: 1016f2bd0; end: 1016f3183;  */

undefined * FUN_1016f2bd0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  long lVar19;
  long lStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined1 auStack_88 [40];
  
  lVar15 = param_1;
  func_0x000107c5064c();
  func_0x000107c61180();
  if (lVar15 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1016f3184);
    (*pcVar3)();
  }
  lVar19 = lVar15;
  func_0x000107c3db60();
  func_0x000107c61180();
  func_0x000107c61170(lVar15);
  puVar11 = PTR___sypN_11034f1a8;
  lVar15 = lVar19;
  func_0x000107c5fc54(lVar19,PTR___sypN_11034f1a8 + 8);
  func_0x000107c61170(lVar19);
  uVar16 = *(ulong *)(lVar15 + 0x10);
  puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar16 != 0) {
    uVar12 = 0;
    do {
      lVar19 = lVar15 + 0x20 + uVar12 * 0x20;
      uVar14 = uVar12;
LAB_1016f2cb4:
      if (*(ulong *)(lVar15 + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1016f3164);
        (*pcVar3)();
      }
      func_0x0001000bb420(lVar19,auStack_88);
      func_0x0001000bb420(auStack_88,&lStack_b0);
      plVar4 = &lStack_d0;
      func_0x000107c6147c(plVar4,&lStack_b0,puVar11 + 8,PTR___sSSN_11034da80,6);
      uVar1 = uStack_c8;
      lVar2 = lStack_d0;
      if ((int)plVar4 == 0) goto LAB_1016f2c9c;
      lVar5 = param_1;
      func_0x000107c5064c();
      func_0x000107c61180();
      if (lVar5 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1016f3180);
        (*pcVar3)();
      }
      lStack_d0 = lVar2;
      uStack_c8 = uVar1;
      func_0x000107c61434(uVar1);
      plVar4 = &lStack_d0;
      func_0x000107c6061c(plVar4,PTR___sSSN_11034da80);
      lVar6 = lVar5;
      func_0x000107c3ac74();
      func_0x000107c61180();
      func_0x000107c61170(lVar5);
      func_0x000107c615e8(plVar4);
      if (lVar6 == 0) {
        uStack_c8 = 0;
        lStack_d0 = 0;
        lStack_b8 = 0;
        uStack_c0 = 0;
      }
      else {
        func_0x000107c60234(&lStack_d0,lVar6);
        func_0x000107c615e8(lVar6);
      }
      uStack_a8 = uStack_c8;
      lStack_b0 = lStack_d0;
      lStack_98 = lStack_b8;
      uStack_a0 = uStack_c0;
      if (lStack_b8 == 0) {
        func_0x000107c6142c(uVar1);
        func_0x0001016f5338(&lStack_b0,0x112d387f8,&UNK_10d902650);
        goto LAB_1016f2c9c;
      }
      uVar7 = 0;
      func_0x0001016f543c(0,0x112dc30f8,&PTR_PTR_1126a7a18);
      plVar4 = &lStack_d8;
      func_0x000107c6147c(plVar4,&lStack_b0,puVar11 + 8,uVar7,6);
      lVar5 = lStack_d8;
      if (((ulong)plVar4 & 1) == 0) {
LAB_1016f2c88:
        func_0x000107c6142c(uVar1);
LAB_1016f2c9c:
        uVar14 = uVar14 + 1;
        FUN_1016f52c8(auStack_88);
        lVar19 = lVar19 + 0x20;
        if (uVar16 == uVar14) break;
        goto LAB_1016f2cb4;
      }
      lVar6 = lStack_d8;
      func_0x000107c5bf28();
      if (lVar6 == 0) {
LAB_1016f2c80:
        func_0x000107c61170(lVar5);
        goto LAB_1016f2c88;
      }
      lVar6 = lVar5;
      func_0x000107c5bf24();
      func_0x000107c61180();
      if (lVar6 == 0) goto LAB_1016f2c80;
      lStack_b0 = 0;
      uVar7 = 0;
      func_0x0001016f543c(0,0x112dc2f30,&PTR_PTR_1126a79f8);
      func_0x000107c5fc50(lVar6,&lStack_b0,uVar7);
      func_0x000107c61170(lVar6);
      func_0x000107c61170(lVar5);
      lVar5 = lStack_b0;
      if (lStack_b0 == 0) {
        func_0x000107c6142c(uVar1);
        goto LAB_1016f2c9c;
      }
      FUN_1016f52c8(auStack_88);
      puVar8 = puVar9;
      func_0x000107c61558();
      puVar10 = puVar9;
      if (((ulong)puVar8 & 1) == 0) {
        puVar10 = (undefined *)0x0;
        FUN_1016e75a0(0,*(long *)(puVar9 + 0x10) + 1,1,puVar9);
      }
      uVar13 = *(ulong *)(puVar10 + 0x10);
      puVar9 = puVar10;
      if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar13) {
        puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar10 + 0x18));
        FUN_1016e75a0(puVar9,uVar13 + 1,1,puVar10);
      }
      uVar12 = uVar14 + 1;
      *(ulong *)(puVar9 + 0x10) = uVar13 + 1;
      *(long *)(puVar9 + uVar13 * 0x18 + 0x20) = lVar2;
      *(undefined8 *)(puVar9 + uVar13 * 0x18 + 0x28) = uVar1;
      *(long *)(puVar9 + uVar13 * 0x18 + 0x30) = lVar5;
    } while (uVar16 - 1 != uVar14);
  }
  func_0x000107c6142c(lVar15);
  uVar16 = *(ulong *)(puVar9 + 0x10);
  puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar16 != 0) {
    uVar12 = 0;
    puVar18 = (undefined8 *)(puVar9 + 0x30);
    do {
      if (*(ulong *)(puVar9 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1016f3168);
        (*pcVar3)();
      }
      uVar1 = puVar18[-1];
      uVar7 = *puVar18;
      uVar17 = puVar18[-2];
      func_0x000107c61434(uVar1);
      func_0x000107c61434(uVar7);
      FUN_1016f3298(uVar17,uVar1,uVar7,param_2,param_3,param_4);
      func_0x000107c6142c(uVar7);
      func_0x000107c6142c(uVar1);
      puVar8 = puVar11;
      func_0x000107c61558();
      puVar10 = puVar11;
      if (((ulong)puVar8 & 1) == 0) {
        puVar10 = (undefined *)0x0;
        FUN_1016e744c(0,*(long *)(puVar11 + 0x10) + 1,1,puVar11);
      }
      uVar14 = *(ulong *)(puVar10 + 0x10);
      puVar11 = puVar10;
      if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar14) {
        puVar11 = (undefined *)(ulong)(1 < *(ulong *)(puVar10 + 0x18));
        FUN_1016e744c(puVar11,uVar14 + 1,1,puVar10);
      }
      uVar12 = uVar12 + 1;
      *(ulong *)(puVar11 + 0x10) = uVar14 + 1;
      *(undefined8 *)(puVar11 + uVar14 * 8 + 0x20) = uVar17;
      puVar18 = puVar18 + 3;
    } while (uVar16 != uVar12);
  }
  func_0x000107c6142c(puVar9);
  uVar16 = *(ulong *)(puVar11 + 0x10);
  puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar16 != 0) {
    uVar12 = 0;
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    do {
      if (*(ulong *)(puVar11 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1016f316c);
        (*pcVar3)();
      }
      lVar15 = *(long *)(puVar11 + uVar12 * 8 + 0x20);
      uVar14 = *(ulong *)(lVar15 + 0x10);
      lVar19 = *(long *)(puVar8 + 0x10);
      if (SCARRY8(lVar19,uVar14)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1016f3170);
        (*pcVar3)();
      }
      func_0x000107c61434(lVar15);
      puVar9 = puVar8;
      func_0x000107c61558();
      if (((int)puVar9 == 0) ||
         (uVar13 = *(ulong *)(puVar8 + 0x18) >> 1, (long)uVar13 < (long)(lVar19 + uVar14))) {
        FUN_1016e7328();
        uVar13 = *(ulong *)(puVar9 + 0x18) >> 1;
        puVar8 = puVar9;
        if (*(long *)(lVar15 + 0x10) != 0) goto LAB_1016f30e0;
LAB_1016f3050:
        func_0x000107c6142c(lVar15);
        puVar9 = puVar8;
        if (uVar14 != 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1016f3174);
          (*pcVar3)();
        }
      }
      else {
        puVar9 = puVar8;
        if (*(long *)(lVar15 + 0x10) == 0) goto LAB_1016f3050;
LAB_1016f30e0:
        if (uVar13 - *(long *)(puVar9 + 0x10) < uVar14) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1016f3178);
          (*pcVar3)();
        }
        func_0x000107c6140c(puVar9 + *(long *)(puVar9 + 0x10) * 0x48 + 0x20,lVar15 + 0x20,uVar14,
                            &UNK_110763ca8);
        func_0x000107c6142c(lVar15);
        if (uVar14 != 0) {
          if (SCARRY8(*(long *)(puVar9 + 0x10),uVar14)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1016f317c);
            (*pcVar3)();
          }
          *(ulong *)(puVar9 + 0x10) = *(long *)(puVar9 + 0x10) + uVar14;
        }
      }
      uVar12 = uVar12 + 1;
      puVar8 = puVar9;
    } while (uVar16 != uVar12);
  }
  func_0x000107c6142c(puVar11);
  return puVar9;
}



/* Entry: 1016f3184; end: 1016f3203;  */

void FUN_1016f3184(undefined8 param_1,long param_2,long param_3,long param_4,long param_5,
                  long param_6,undefined8 param_7)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_7;
  plVar1 = (long *)0xc0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x20) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1016f3204;
  plVar1[0xf] = param_3;
  plVar1[0x10] = param_4;
  plVar1[0xd] = param_6;
  plVar1[0xe] = param_2;
  plVar1[0xc] = param_5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1016f22e8,0,0);
  return;
}



/* Entry: 1016f3204; end: 1016f3253;  */

void FUN_1016f3204(undefined8 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x28) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1016f3254,0,0);
  return;
}



/* Entry: 1016f3254; end: 1016f3297;  */

void FUN_1016f3254(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x28);
  *(undefined8 *)(unaff_x22 + 0x10) = uVar1;
  func_0x000100b60084();
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001016f3294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1016f3298; end: 1016f349f;  */

undefined *
FUN_1016f3298(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  code *pcVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulong auStack_70 [2];
  
  if (param_3 >> 0x3e == 0) {
    uVar16 = *(ulong *)((param_3 & 0xffffffffffffff8) + 0x10);
    puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar16 = param_3 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_3) {
      uVar16 = param_3;
    }
    func_0x000107c60480();
    puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar14;
  if (uVar16 != 0) {
    uVar17 = 0;
    do {
      if ((param_3 & 0xc000000000000001) == 0) {
        if (*(ulong *)((param_3 & 0xffffffffffffff8) + 0x10) <= uVar17) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x1016f345c);
          (*pcVar10)();
        }
        uVar11 = *(ulong *)(param_3 + uVar17 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar11 = uVar17;
        FUN_1016f0380(uVar17,param_3);
      }
      if (SCARRY8(uVar17,1)) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x1016f3458);
        (*pcVar10)();
      }
      uVar15 = uVar17 + 1;
      auStack_70[0] = uVar11;
      FUN_1016f34a0(&uStack_b8,auStack_70,param_4,param_5,param_6,param_1,param_2);
      func_0x000107c61170(uVar11);
      uVar9 = uStack_78;
      uVar8 = uStack_80;
      uVar7 = uStack_88;
      uVar6 = uStack_90;
      uVar5 = uStack_98;
      uVar4 = uStack_a0;
      uVar3 = uStack_a8;
      lVar2 = lStack_b0;
      uVar1 = uStack_b8;
      if (lStack_b0 == 1) {
        func_0x0001016f5338(&uStack_b8,0x112dc3100,&UNK_10d9803c8);
      }
      else {
        puVar12 = puVar14;
        func_0x000107c61558();
        puVar13 = puVar14;
        if (((ulong)puVar12 & 1) == 0) {
          puVar13 = (undefined *)0x0;
          FUN_1016e7328(0,*(long *)(puVar14 + 0x10) + 1,1,puVar14);
        }
        uVar11 = *(ulong *)(puVar13 + 0x10);
        puVar14 = puVar13;
        if (*(ulong *)(puVar13 + 0x18) >> 1 <= uVar11) {
          puVar14 = (undefined *)(ulong)(1 < *(ulong *)(puVar13 + 0x18));
          FUN_1016e7328(puVar14,uVar11 + 1,1,puVar13);
        }
        *(ulong *)(puVar14 + 0x10) = uVar11 + 1;
        *(long *)(puVar14 + uVar11 * 0x48 + 0x28) = lVar2;
        *(undefined8 *)(puVar14 + uVar11 * 0x48 + 0x20) = uVar1;
        *(undefined8 *)(puVar14 + uVar11 * 0x48 + 0x60) = uVar9;
        *(undefined8 *)(puVar14 + uVar11 * 0x48 + 0x48) = uVar6;
        *(undefined8 *)(puVar14 + uVar11 * 0x48 + 0x40) = uVar5;
        *(undefined8 *)(puVar14 + uVar11 * 0x48 + 0x58) = uVar8;
        *(undefined8 *)(puVar14 + uVar11 * 0x48 + 0x50) = uVar7;
        *(undefined8 *)(puVar14 + uVar11 * 0x48 + 0x38) = uVar4;
        *(undefined8 *)(puVar14 + uVar11 * 0x48 + 0x30) = uVar3;
      }
      uVar17 = uVar17 + 1;
    } while (uVar15 != uVar16);
  }
  return puVar14;
}



/* Entry: 1016f34a0; end: 1016f3867;  */

void FUN_1016f34a0(ulong *param_1,ulong *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined1 auStack_270 [8];
  undefined8 auStack_268 [2];
  undefined4 auStack_258 [2];
  undefined8 auStack_250 [2];
  undefined4 auStack_240 [2];
  undefined8 uStack_238;
  undefined1 auStack_230 [16];
  ulong uStack_220;
  ulong uStack_218;
  long lStack_210;
  long lStack_208;
  long lStack_200;
  undefined1 auStack_1d8 [232];
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
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  
  lVar1 = 0;
  func_0x0001044c3ef4();
  lStack_210 = *(long *)(lVar1 + -8);
  lStack_208 = lVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_210 + 0x40));
  uVar4 = (long)&uStack_220 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = uVar4 - extraout_x12;
  lVar1 = 0x112dc3108;
  puVar7 = &UNK_10d9803d0;
  func_0x0001000285a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar9 = lVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar1 = lVar9 - extraout_x12_00;
  uVar10 = *param_2;
  uVar2 = uVar10;
  lStack_200 = lVar1;
  func_0x000107c4004c();
  func_0x000107c61180();
  if (uVar2 != 0) {
    uVar3 = uVar2;
    uStack_218 = uVar4;
    func_0x000107c5faec();
    func_0x000107c61170(uVar2);
    uVar2 = uVar3 & 0xffffffffffff;
    if (((ulong)puVar7 & 0x2000000000000000) != 0) {
      uVar2 = (ulong)puVar7 >> 0x38 & 0xf;
    }
    if (uVar2 != 0) {
      uVar2 = uVar10;
      FUN_1016f3868(uVar10,param_6,param_7,param_3,param_4,param_5);
      if (uVar2 >> 0x3e == 0) {
        uVar4 = *(ulong *)((uVar2 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar4 = uVar2 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar2) {
          uVar4 = uVar2;
        }
        func_0x000107c60480();
      }
      if (uVar4 != 0) {
        func_0x0001044ba0fc(0);
        func_0x000107c610f8();
        func_0x000107c61438(puVar7,3);
        uVar4 = uVar3;
        func_0x0001044b9e6c(uVar3,puVar7,0,0,0,0,0);
        uStack_e8 = 1;
        uStack_f0 = 0;
        uStack_d8 = 0;
        uStack_e0 = 0;
        uStack_c8 = 0;
        uStack_d0 = 0;
        uStack_b8 = 0;
        uStack_c0 = 0;
        uStack_a8 = 0;
        uStack_b0 = 0;
        uStack_98 = 0;
        uStack_a0 = 0;
        uStack_88 = 0;
        uStack_90 = 0;
        uStack_80 = 0;
        uStack_220 = uVar4;
        *(undefined8 *)(lVar1 + -0x30) = 0;
        *(undefined8 *)(lVar1 + -0x28) = 0;
        *(undefined1 *)(lVar1 + -0x10) = 0;
        *(undefined **)(lVar1 + -0x18) = PTR___swiftEmptyArrayStorage_11034f1c8;
        *(undefined4 *)(lVar1 + -0x20) = 0;
        *(undefined4 *)(lVar1 + -0x38) = 0;
        *(undefined8 **)(lVar1 + -0x48) = &uStack_f0;
        *(undefined8 *)(lVar1 + -0x40) = 0;
        *(undefined1 *)(lVar1 + -0x50) = 0;
        func_0x00010449b3f4(auStack_1d8,uVar3,puVar7,0,0,0,0,0,0);
        lVar1 = lStack_200;
        FUN_1016f3aa0(lStack_200,uVar10,param_3,param_4,param_5);
        FUN_1016f52e8(lVar1,lVar9);
        lVar5 = lVar9;
        (**(code **)(lStack_210 + 0x30))(lVar9,1,lStack_208);
        if ((int)lVar5 == 1) {
          func_0x000107c6142c(puVar7);
          func_0x0001016f5338(lVar1,0x112dc3108,&UNK_10d9803d0);
          uVar10 = 0;
        }
        else {
          func_0x0001016f5378(lVar9,lVar8);
          uVar10 = uStack_218;
          func_0x0001016f53bc(lVar8,uStack_218);
          func_0x0001044c7d1c(0);
          func_0x000107c610f8();
          func_0x0001044c6bc8();
          func_0x000107c6142c(puVar7);
          func_0x0001016f5400(lVar8);
          func_0x0001016f5338(lVar1,0x112dc3108,&UNK_10d9803d0);
        }
        func_0x0001044abe24(0);
        func_0x000107c610f8();
        puVar6 = auStack_1d8;
        func_0x0001044ab774();
        *param_1 = uVar3;
        param_1[1] = (ulong)puVar7;
        param_1[2] = uVar2;
        param_1[3] = 0;
        param_1[4] = 0;
        param_1[5] = (ulong)puVar6;
        param_1[6] = uVar10;
        param_1[7] = 0;
        param_1[8] = uStack_220;
        return;
      }
      func_0x000107c6142c(puVar7);
      func_0x000107c6142c(uVar2);
      param_1[1] = 1;
      *param_1 = 0;
      param_1[3] = 0;
      param_1[2] = 0;
      param_1[5] = 0;
      param_1[4] = 0;
      param_1[7] = 0;
      param_1[6] = 0;
      param_1[8] = 0;
      return;
    }
    func_0x000107c6142c(puVar7);
  }
  param_1[1] = 1;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[8] = 0;
  return;
}



/* Entry: 1016f3868; end: 1016f3a9f;  */

/* WARNING: Removing unreachable block (ram,0x0001016f3a7c) */

undefined *
FUN_1016f3868(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long extraout_x8;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_a8;
  undefined1 auStack_a0 [32];
  undefined1 auStack_80 [24];
  long lStack_68;
  
  lVar3 = 0;
  uStack_d0 = param_3;
  uStack_c8 = param_4;
  uStack_c0 = param_5;
  uStack_b8 = param_6;
  func_0x000107c5ed50();
  lVar9 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  lVar10 = (long)&lStack_e0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar4 = param_1;
  func_0x000107c5b540();
  puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar4 != 0) {
    lVar4 = param_1;
    func_0x000107c5b53c();
    func_0x000107c61180();
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1016f3a7c);
      (*pcVar2)();
    }
    lStack_e0 = lVar4;
    lStack_d8 = lVar9;
    func_0x000107c600f4(lVar10);
    func_0x000100e15a08();
    func_0x000107c601c0(auStack_80,lVar3,lVar4);
    puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
    while (lStack_68 != 0) {
      func_0x000100102924(auStack_80,auStack_a0);
      FUN_1016f3d94(&lStack_a8,auStack_a0,param_2,uStack_d0,param_1,uStack_c8,uStack_c0,uStack_b8);
      FUN_1016f52c8(auStack_a0);
      lVar9 = lStack_a8;
      if (lStack_a8 != 0) {
        puVar6 = puVar7;
        func_0x000107c61550();
        if ((((int)puVar6 == 0) || ((long)puVar7 < 0)) ||
           (puVar6 = puVar7, ((ulong)puVar7 >> 0x3e & 1) != 0)) {
          if ((ulong)puVar7 >> 0x3e == 0) {
            puVar5 = *(undefined **)(((ulong)puVar7 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar5 = (undefined *)((ulong)puVar7 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puVar7) {
              puVar5 = puVar7;
            }
            func_0x000107c60480(puVar5);
          }
          puVar6 = (undefined *)0x0;
          func_0x000101055e1c(0,puVar5 + 1,1,puVar7);
        }
        uVar8 = (ulong)puVar6 & 0xffffffffffffff8;
        uVar1 = *(ulong *)(uVar8 + 0x10);
        puVar7 = puVar6;
        if (*(ulong *)(uVar8 + 0x18) >> 1 <= uVar1) {
          puVar7 = (undefined *)(ulong)(1 < *(ulong *)(uVar8 + 0x18));
          func_0x000101055e1c(puVar7,uVar1 + 1,1,puVar6);
          uVar8 = (ulong)puVar7 & 0xffffffffffffff8;
        }
        *(ulong *)(uVar8 + 0x10) = uVar1 + 1;
        *(long *)(uVar8 + uVar1 * 8 + 0x20) = lVar9;
      }
      func_0x000107c601c0(auStack_80,lVar3,lVar4);
    }
    func_0x000107c61170(lStack_e0);
    (**(code **)(lStack_d8 + 8))(lVar10,lVar3);
  }
  return puVar7;
}



/* Entry: 1016f3aa0; end: 1016f3d93;  */

void FUN_1016f3aa0(double *param_1,long param_2)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  double *pdVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  long lVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  long extraout_x8;
  code *pcVar14;
  long lVar15;
  long lVar16;
  double dVar17;
  double dStack_d0;
  double dStack_c8;
  double dStack_c0;
  double dStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  double dStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  double dStack_80;
  long lStack_78;
  
  lVar3 = 0;
  func_0x000107c5eea4();
  lVar16 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar16 + 0x40));
  lVar15 = (long)&dStack_d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar9 = param_2;
  func_0x000107c5b540();
  if (lVar9 != 0) {
    func_0x000107c5b53c();
    func_0x000107c61180();
    if (param_2 == 0) {
                    /* WARNING: Does not return */
      pcVar14 = (code *)SoftwareBreakpoint(1,0x1016f3d94);
      (*pcVar14)();
    }
    lVar9 = param_2;
    func_0x000107c43638();
    func_0x000107c61180();
    func_0x000107c61170(param_2);
    if (lVar9 == 0) {
      uStack_a8 = 0;
      uStack_b0 = 0;
      lStack_98 = 0;
      dStack_a0 = 0.0;
    }
    else {
      func_0x000107c60234(&uStack_b0,lVar9);
      func_0x000107c615e8(lVar9);
    }
    uStack_88 = uStack_a8;
    uStack_90 = uStack_b0;
    lStack_78 = lStack_98;
    dStack_80 = dStack_a0;
    if (lStack_98 == 0) {
      func_0x0001016f5338(&uStack_90,0x112d387f8,&UNK_10d902650);
    }
    else {
      uVar4 = 0;
      dVar17 = dStack_a0;
      func_0x0001016f543c(0,0x112dc3110,&PTR_PTR_1126bfdf8);
      pdVar5 = &dStack_b8;
      func_0x000107c6147c(pdVar5,&uStack_90,PTR___sypN_11034f1a8 + 8,uVar4,6);
      if (((ulong)pdVar5 & 1) != 0) {
        dVar6 = dStack_b8;
        func_0x000107c44860();
        if (SUB84(dVar6,0) != 0) {
          dVar6 = dStack_b8;
          func_0x000107c428c4();
          func_0x000107c61180();
          if (dVar6 != 0.0) {
            func_0x000107c5eea0(lVar15);
            func_0x000107c5ee8c();
            (**(code **)(lVar16 + 8))(lVar15,lVar3);
            dVar7 = dVar6;
            func_0x000107c3ebec();
            dVar8 = dVar6;
            dStack_c0 = dVar7;
            func_0x000107c5a94c();
            dVar7 = dVar6;
            dStack_c8 = dVar8;
            func_0x000107c5de98();
            dVar8 = dVar6;
            dStack_d0 = dVar7;
            func_0x000107c5c254();
            dVar7 = dVar6;
            func_0x000107c4fdd8();
            lVar9 = 0;
            func_0x0001044c3ef4();
            iVar2 = *(int *)(lVar9 + 0x30);
            lVar3 = 0;
            func_0x000107c5eec8();
            (**(code **)(*(long *)(lVar3 + -8) + 0x38))((long)param_1 + (long)iVar2,1,1,lVar3);
            dVar10 = dVar6;
            func_0x000107c5b904();
            dVar11 = dVar6;
            func_0x000107c5b8e4();
            dVar12 = dVar6;
            func_0x000107c5b914();
            dVar13 = dVar6;
            func_0x000107c4fa78();
            func_0x000107c61170(dVar6);
            func_0x000107c61170(dStack_b8);
            *param_1 = dVar17 * 1000.0;
            param_1[1] = dStack_c0;
            param_1[2] = dStack_c8;
            param_1[3] = dStack_d0;
            param_1[4] = dVar8;
            param_1[5] = dVar7;
            param_1[6] = 0.0;
            param_1[7] = 0.0;
            param_1[8] = 0.0;
            puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar9 + 0x34));
            *puVar1 = 0;
            *(undefined1 *)(puVar1 + 1) = 1;
            *(ulong *)((long)param_1 + (long)*(int *)(lVar9 + 0x38)) =
                 (ulong)dVar10 & ((long)dVar10 >> 0x3f ^ 0xffffffffffffffffU);
            *(ulong *)((long)param_1 + (long)*(int *)(lVar9 + 0x3c)) =
                 (ulong)dVar11 & ((long)dVar11 >> 0x3f ^ 0xffffffffffffffffU);
            *(ulong *)((long)param_1 + (long)*(int *)(lVar9 + 0x40)) =
                 (ulong)dVar12 & ((long)dVar12 >> 0x3f ^ 0xffffffffffffffffU);
            *(double *)((long)param_1 + (long)*(int *)(lVar9 + 0x44)) = dVar13;
            pcVar14 = *(code **)(*(long *)(lVar9 + -8) + 0x38);
            uVar4 = 0;
            goto LAB_1016f3d68;
          }
        }
        func_0x000107c61170(dStack_b8);
      }
    }
  }
  lVar9 = 0;
  func_0x0001044c3ef4();
  pcVar14 = *(code **)(*(long *)(lVar9 + -8) + 0x38);
  uVar4 = 1;
LAB_1016f3d68:
  (*pcVar14)(param_1,uVar4,1,lVar9);
  return;
}



/* Entry: 1016f3d94; end: 1016f4583;  */

void FUN_1016f3d94(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4,
                  long param_5)

{
  code *pcVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined1 *puVar12;
  undefined *puVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  long lVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  long lStack_c8;
  undefined1 *puStack_c0;
  long lStack_a0;
  long lStack_90;
  undefined1 auStack_88 [40];
  long lStack_58;
  
  func_0x0001000bb420(param_2,auStack_88);
  uVar2 = 0;
  func_0x0001016f543c(0,0x112dc3110,&PTR_PTR_1126bfdf8);
  plVar3 = &lStack_58;
  puVar19 = auStack_88;
  func_0x000107c6147c(plVar3,puVar19,PTR___sypN_11034f1a8 + 8,uVar2,6);
  if (((ulong)plVar3 & 1) == 0) {
    puVar13 = (undefined *)0x0;
    goto LAB_1016f4540;
  }
  func_0x000107c4004c();
  func_0x000107c61180();
  if (param_5 == 0) {
    lStack_90 = 0;
    puVar16 = (undefined1 *)0x0;
    puVar18 = puVar19;
  }
  else {
    lStack_90 = param_5;
    func_0x000107c5faec();
    puVar18 = puVar19;
    func_0x000107c61170(param_5);
    puVar16 = puVar19;
  }
  lVar10 = lStack_58;
  func_0x000107c4e0bc();
  func_0x000107c61180();
  if (lVar10 == 0) {
    lVar11 = 0;
    puVar14 = (undefined1 *)0x0;
    puVar19 = puVar18;
  }
  else {
    lVar11 = lVar10;
    func_0x000107c5faec();
    puVar19 = puVar18;
    func_0x000107c61170(lVar10);
    puVar14 = puVar18;
  }
  lVar10 = lStack_58;
  func_0x000107c5aa50();
  func_0x000107c61180();
  if (lVar10 == 0) {
    lVar17 = 0;
    puVar19 = (undefined1 *)0x0;
  }
  else {
    lVar17 = lVar10;
    func_0x000107c5faec();
    func_0x000107c61170(lVar10);
  }
  func_0x000107c5fadc(param_3);
  if (puVar16 == (undefined1 *)0x0) {
    lStack_90 = 0;
    if (puVar14 == (undefined1 *)0x0) goto LAB_1016f3f34;
LAB_1016f3ef4:
    param_4 = puVar14;
    func_0x000107c5fadc(lVar11);
    func_0x000107c6142c(puVar14);
    if (puVar19 != (undefined1 *)0x0) goto LAB_1016f3f10;
LAB_1016f3f3c:
    lVar17 = 0;
  }
  else {
    param_4 = puVar16;
    func_0x000107c5fadc(lStack_90);
    func_0x000107c6142c(puVar16);
    if (puVar14 != (undefined1 *)0x0) goto LAB_1016f3ef4;
LAB_1016f3f34:
    lVar11 = 0;
    if (puVar19 == (undefined1 *)0x0) goto LAB_1016f3f3c;
LAB_1016f3f10:
    param_4 = puVar19;
    func_0x000107c5fadc(lVar17);
    func_0x000107c6142c(puVar19);
  }
  puVar4 = PTR_PTR_1126d9f10;
  func_0x000107c610f8();
  func_0x000107c48df0();
  func_0x000107c61170(param_3);
  func_0x000107c61170(lStack_90);
  func_0x000107c61170(lVar11);
  func_0x000107c61170(lVar17);
  puVar5 = PTR_PTR_1126c2fd0;
  func_0x000107c61168();
  func_0x000107c5cc3c();
  func_0x000107c61180();
  puVar6 = PTR_PTR_1126d5df0;
  func_0x000107c610f8();
  func_0x000107c47190();
  lVar10 = lStack_58;
  func_0x000107c5b340();
  func_0x000107c61180();
  if (lVar10 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1016f456c);
    (*pcVar1)();
  }
  lVar11 = lVar10;
  func_0x000107c4c99c();
  func_0x000107c61180();
  func_0x000107c61170(lVar10);
  if (lVar11 == 0) {
    lVar10 = 0;
    puVar18 = (undefined1 *)0x0;
    puVar19 = param_4;
  }
  else {
    lVar10 = lVar11;
    func_0x000107c5faec(lVar11);
    puVar19 = param_4;
    func_0x000107c61170(lVar11);
    puVar18 = param_4;
  }
  lVar11 = lStack_58;
  func_0x000107c5b340();
  func_0x000107c61180();
  if (lVar11 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1016f4570);
    (*pcVar1)();
  }
  lVar17 = lVar11;
  func_0x000107c4c9ac();
  func_0x000107c61180();
  func_0x000107c61170(lVar11);
  if (lVar17 == 0) {
    lVar11 = 0;
    puVar14 = (undefined1 *)0x0;
    puVar16 = puVar19;
  }
  else {
    lVar11 = lVar17;
    func_0x000107c5faec(lVar17);
    puVar16 = puVar19;
    func_0x000107c61170(lVar17);
    puVar14 = puVar19;
  }
  lVar17 = lStack_58;
  func_0x000107c5b340();
  func_0x000107c61180();
  if (lVar17 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1016f4574);
    (*pcVar1)();
  }
  lVar7 = lVar17;
  func_0x000107c4c9a8();
  func_0x000107c61180();
  func_0x000107c61170(lVar17);
  if (lVar7 == 0) {
    lStack_a0 = 0;
    puVar12 = (undefined1 *)0x0;
    puVar19 = puVar16;
  }
  else {
    lStack_a0 = lVar7;
    func_0x000107c5faec();
    puVar19 = puVar16;
    func_0x000107c61170(lVar7);
    puVar12 = puVar16;
  }
  lVar17 = lStack_58;
  func_0x000107c5b340();
  func_0x000107c61180();
  if (lVar17 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1016f4578);
    (*pcVar1)();
  }
  lVar7 = lVar17;
  func_0x000107c4ca64();
  func_0x000107c61180();
  func_0x000107c61170(lVar17);
  if (lVar7 == 0) {
    puStack_c0 = (undefined1 *)0x0;
    puVar15 = (undefined1 *)0x0;
    puVar16 = puVar19;
  }
  else {
    puStack_c0 = (undefined1 *)lVar7;
    func_0x000107c5faec();
    puVar16 = puVar19;
    func_0x000107c61170(lVar7);
    puVar15 = puVar19;
  }
  lVar17 = lStack_58;
  func_0x000107c5b340();
  func_0x000107c61180();
  if (lVar17 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1016f457c);
    (*pcVar1)();
  }
  func_0x000107c4a754();
  func_0x000107c61170(lVar17);
  if (puVar18 == (undefined1 *)0x0) {
    func_0x000107c61174(puVar6);
    lVar10 = 0;
    if (puVar14 == (undefined1 *)0x0) goto LAB_1016f41e8;
LAB_1016f4184:
    puVar16 = puVar14;
    func_0x000107c5fadc(lVar11);
    func_0x000107c6142c(puVar14);
    if (puVar12 != (undefined1 *)0x0) goto LAB_1016f41a0;
LAB_1016f41f0:
    lStack_a0 = 0;
    if (puVar15 == (undefined1 *)0x0) goto LAB_1016f41f8;
LAB_1016f41bc:
    puVar16 = puVar15;
    func_0x000107c5fadc(puStack_c0);
    func_0x000107c6142c(puVar15);
  }
  else {
    func_0x000107c61174(puVar6);
    puVar16 = puVar18;
    func_0x000107c5fadc(lVar10);
    func_0x000107c6142c(puVar18);
    if (puVar14 != (undefined1 *)0x0) goto LAB_1016f4184;
LAB_1016f41e8:
    lVar11 = 0;
    if (puVar12 == (undefined1 *)0x0) goto LAB_1016f41f0;
LAB_1016f41a0:
    puVar16 = puVar12;
    func_0x000107c5fadc(lStack_a0);
    func_0x000107c6142c(puVar12);
    if (puVar15 != (undefined1 *)0x0) goto LAB_1016f41bc;
LAB_1016f41f8:
    puStack_c0 = (undefined1 *)0x0;
  }
  puVar8 = PTR_PTR_1126cf3c0;
  func_0x000107c610f8();
  func_0x000107c46d3c();
  func_0x000107c61170(puVar6);
  func_0x000107c61170(lVar10);
  func_0x000107c61170(lVar11);
  func_0x000107c61170(lStack_a0);
  func_0x000107c61170(puStack_c0);
  lVar10 = lStack_58;
  func_0x000107c5b2d0();
  func_0x000107c61180();
  if (lVar10 == 0) {
    lStack_c8 = 0;
    puStack_c0 = (undefined1 *)0x0;
    puVar19 = puVar16;
  }
  else {
    lStack_c8 = lVar10;
    func_0x000107c5faec();
    puVar19 = puVar16;
    func_0x000107c61170(lVar10);
    puStack_c0 = puVar16;
  }
  lVar10 = lStack_58;
  func_0x000107c5b170();
  func_0x000107c61180();
  if (lVar10 == 0) {
    lVar11 = 0;
    puVar16 = (undefined1 *)0x0;
    puVar18 = puVar19;
  }
  else {
    lVar11 = lVar10;
    func_0x000107c5faec();
    puVar18 = puVar19;
    func_0x000107c61170(lVar10);
    puVar16 = puVar19;
  }
  lVar10 = lStack_58;
  func_0x000107c40d14();
  func_0x000107c61180();
  if (lVar10 == 0) {
    lVar17 = 0;
    puVar14 = (undefined1 *)0x0;
    puVar19 = puVar18;
  }
  else {
    lVar17 = lVar10;
    func_0x000107c5faec();
    puVar19 = puVar18;
    func_0x000107c61170(lVar10);
    puVar14 = puVar18;
  }
  lVar10 = lStack_58;
  func_0x000107c5b2d0();
  func_0x000107c61180();
  if (lVar10 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1016f4580);
    (*pcVar1)();
  }
  lVar7 = lVar10;
  func_0x000107c5faec();
  func_0x000107c61170(lVar10);
  lVar10 = lStack_58;
  FUN_1016f547c(lStack_58,lVar7,puVar19);
  func_0x000107c6142c(puVar19);
  lVar7 = lStack_58;
  func_0x000107c5b2d0();
  func_0x000107c61180();
  if (lVar7 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1016f4584);
    (*pcVar1)();
  }
  func_0x000107c61170();
  lVar7 = lStack_58;
  FUN_1016f56dc();
  lVar9 = lStack_58;
  FUN_1016f5804();
  func_0x000107c501a0();
  if (puStack_c0 == (undefined1 *)0x0) {
    func_0x000107c61174(puVar5);
    func_0x000107c61174(puVar8);
    lStack_c8 = 0;
    if (puVar16 == (undefined1 *)0x0) goto LAB_1016f4424;
LAB_1016f43d0:
    func_0x000107c5fadc(lVar11,puVar16);
    func_0x000107c6142c(puVar16);
    if (puVar14 != (undefined1 *)0x0) goto LAB_1016f43f0;
LAB_1016f4430:
    lVar17 = 0;
  }
  else {
    func_0x000107c61174(puVar5);
    func_0x000107c61174(puVar8);
    func_0x000107c5fadc(lStack_c8,puStack_c0);
    func_0x000107c6142c(puStack_c0);
    if (puVar16 != (undefined1 *)0x0) goto LAB_1016f43d0;
LAB_1016f4424:
    lVar11 = 0;
    if (puVar14 == (undefined1 *)0x0) goto LAB_1016f4430;
LAB_1016f43f0:
    func_0x000107c5fadc(lVar17,puVar14);
    func_0x000107c6142c(puVar14);
  }
  puVar13 = PTR_PTR_1126cc4e0;
  func_0x000107c610f8();
  func_0x000107c485e0();
  func_0x000107c61170(lStack_58);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(lVar10);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(lVar9);
  func_0x000107c61170(lStack_c8);
  func_0x000107c61170(lVar11);
  func_0x000107c61170(lVar17);
LAB_1016f4540:
  *param_1 = puVar13;
  return;
}



/* Entry: 1016f4584; end: 1016f45f3;  */

void FUN_1016f4584(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long *plVar4;
  long *unaff_x20;
  long lVar5;
  long unaff_x22;
  
  lVar1 = *unaff_x20;
  lVar2 = unaff_x20[1];
  lVar5 = unaff_x20[2];
  plVar4 = (long *)0xc0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = 0x1016f59c4;
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  plVar4[0xf] = lVar2;
  plVar4[0x10] = lVar5;
  plVar4[0xd] = (long)puVar3;
  plVar4[0xe] = lVar1;
  plVar4[0xc] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1016f22e8,0,0);
  return;
}



/* Entry: 1016f45f4; end: 1016f470f;  */

undefined8 FUN_1016f45f4(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 *unaff_x20;
  undefined8 uVar5;
  
  uVar4 = *unaff_x20;
  uVar1 = unaff_x20[1];
  uVar5 = unaff_x20[2];
  func_0x0001000285a8(0x112dc30b8,&UNK_10d9802c8);
  func_0x000107c613fc();
  lVar2 = 0;
  func_0x00010095c380();
  puVar3 = &UNK_1103fc010;
  func_0x000107c613fc(&UNK_1103fc010,0x40,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar4;
  *(undefined8 *)(puVar3 + 0x18) = uVar1;
  *(undefined8 *)(puVar3 + 0x20) = uVar5;
  *(undefined8 *)(puVar3 + 0x28) = param_1;
  *(undefined **)(puVar3 + 0x30) = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(long *)(puVar3 + 0x38) = lVar2;
  func_0x000107c61434(uVar1);
  func_0x000107c6157c(uVar5);
  func_0x000107c61434(param_1);
  func_0x000107c6157c(lVar2);
  uVar4 = 2;
  func_0x0001001ca524(2,3,0x50,4,0,0,&UNK_10d9803b8,puVar3,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(uVar4);
  uVar4 = *(undefined8 *)(lVar2 + 0x10);
  func_0x000107c6157c(uVar4);
  func_0x000107c61574(lVar2);
  return uVar4;
}



/* Entry: 1016f4710; end: 1016f4783;  */

void FUN_1016f4710(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long *plVar4;
  long *unaff_x20;
  long lVar5;
  long unaff_x22;
  
  lVar1 = *unaff_x20;
  lVar2 = unaff_x20[1];
  lVar5 = unaff_x20[2];
  plVar4 = (long *)0xc0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_1016f4784;
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  plVar4[0xf] = lVar2;
  plVar4[0x10] = lVar5;
  plVar4[0xd] = param_1;
  plVar4[0xe] = lVar1;
  plVar4[0xc] = (long)puVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1016f22e8,0,0);
  return;
}



/* Entry: 1016f4784; end: 1016f47c7;  */

void FUN_1016f4784(undefined8 param_1)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001016f47c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(param_1);
  return;
}



/* Entry: 1016f47c8; end: 1016f48e3;  */

undefined8 FUN_1016f47c8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 *unaff_x20;
  undefined8 uVar6;
  
  uVar5 = *unaff_x20;
  uVar1 = unaff_x20[1];
  uVar6 = unaff_x20[2];
  func_0x0001000285a8(0x112dc30b8,&UNK_10d9802c8);
  func_0x000107c613fc();
  lVar3 = 0;
  func_0x00010095c380();
  puVar4 = &UNK_1103fbfe8;
  func_0x000107c613fc(&UNK_1103fbfe8,0x40,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar5;
  *(undefined8 *)(puVar4 + 0x18) = uVar1;
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined8 *)(puVar4 + 0x20) = uVar6;
  *(undefined **)(puVar4 + 0x28) = puVar2;
  *(undefined8 *)(puVar4 + 0x30) = param_1;
  *(long *)(puVar4 + 0x38) = lVar3;
  func_0x000107c61434(uVar1);
  func_0x000107c6157c(uVar6);
  func_0x000107c61434(param_1);
  func_0x000107c6157c(lVar3);
  uVar5 = 2;
  func_0x0001001ca524(2,3,0x50,4,0,0,&UNK_10d9803b0,puVar4,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar4);
  func_0x000107c61574(uVar5);
  uVar5 = *(undefined8 *)(lVar3 + 0x10);
  func_0x000107c6157c(uVar5);
  func_0x000107c61574(lVar3);
  return uVar5;
}



/* Entry: 1016f48e4; end: 1016f492f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016f48e4(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112dc30c8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1016f4930; end: 1016f4aaf; -[_TtC19SCMusicServicesImpl28SCMusicTopicPageStoryFetcher fetchSimilarStoriesWithTrackIDs:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016f4930(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  long lStack_48;
  
  func_0x000107c5fc54(param_3,PTR___sSSN_11034da80);
  func_0x000107c61174(param_1);
  func_0x000100083b20(auStack_68);
  func_0x0001000a8868(auStack_68,uStack_50);
  uVar1 = param_3;
  (**(code **)(lStack_48 + 0x10))(param_3,uStack_50,lStack_48);
  uVar4 = 0x112dc2b88;
  func_0x0001000285a8(0x112dc2b88,&UNK_10d9802e0);
  uVar2 = 0;
  func_0x000100759f5c(0,1,FUN_1016f4ca0,0,uVar4);
  uVar4 = 0x112daafe8;
  func_0x0001000285a8(0x112daafe8,&UNK_10d953970);
  uVar3 = 0;
  func_0x000100775264(0,1,FUN_1016f4cbc,0,uVar4);
  func_0x000107c61574(uVar2);
  uVar4 = 0;
  func_0x0001016f543c(0,0x112d38dd0,&PTR__OBJC_CLASS___NSArray_1126ae530);
  uVar2 = 0;
  func_0x000100775264(0,1,FUN_1016f4e2c,0,uVar4);
  func_0x000107c61574(uVar3);
  func_0x00010488b12c();
  func_0x000107c61574(uVar1);
  func_0x000107c61574(uVar2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_3);
  FUN_1016f52c8(auStack_68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1016f4ab0; end: 1016f4c2f; -[_TtC19SCMusicServicesImpl28SCMusicTopicPageStoryFetcher fetchSimilarStoriesWithStoryIDs:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016f4ab0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  long lStack_48;
  
  func_0x000107c5fc54(param_3,PTR___sSSN_11034da80);
  func_0x000107c61174(param_1);
  func_0x000100083b20(auStack_68);
  func_0x0001000a8868(auStack_68,uStack_50);
  uVar1 = param_3;
  (**(code **)(lStack_48 + 0x20))(param_3,uStack_50,lStack_48);
  uVar4 = 0x112dc2b88;
  func_0x0001000285a8(0x112dc2b88,&UNK_10d9802e0);
  uVar2 = 0;
  func_0x000100759f5c(0,1,FUN_1016f4ca0,0,uVar4);
  uVar4 = 0x112daafe8;
  func_0x0001000285a8(0x112daafe8,&UNK_10d953970);
  uVar3 = 0;
  func_0x000100775264(0,1,FUN_1016f4cbc,0,uVar4);
  func_0x000107c61574(uVar2);
  uVar4 = 0;
  func_0x0001016f543c(0,0x112d38dd0,&PTR__OBJC_CLASS___NSArray_1126ae530);
  uVar2 = 0;
  func_0x000100775264(0,1,FUN_1016f4e2c,0,uVar4);
  func_0x000107c61574(uVar3);
  func_0x00010488b12c();
  func_0x000107c61574(uVar1);
  func_0x000107c61574(uVar2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_3);
  FUN_1016f52c8(auStack_68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1016f4c30; end: 1016f4c8f; -[_TtC19SCMusicServicesImpl28SCMusicTopicPageStoryFetcher init] */

void FUN_1016f4c30(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCMusicServicesImpl.SCMusicTopicPageStoryFetcher",0x30,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1016f4c5c);
  (*pcVar1)();
}



/* Entry: 1016f4c90; end: 1016f4c9f; -[_TtC19SCMusicServicesImpl28SCMusicTopicPageStoryFetcher .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016f4c90(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112dc30c8));
  return;
}



/* Entry: 1016f4ca0; end: 1016f4cbb;  */

void FUN_1016f4ca0(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  func_0x000107c61434();
  return;
}



/* Entry: 1016f4cbc; end: 1016f4e2b;  */

void FUN_1016f4cbc(undefined8 *param_1,long *param_2)

{
  ulong uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *apuStack_f8 [3];
  undefined8 uStack_e0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  lVar8 = *param_2;
  uVar9 = *(ulong *)(lVar8 + 0x10);
  puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar9 != 0) {
    uVar10 = 0;
    puVar11 = (undefined8 *)(lVar8 + 0x20);
    do {
      if (*(ulong *)(lVar8 + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1016f4e2c);
        (*pcVar2)();
      }
      uStack_a8 = puVar11[1];
      uStack_b0 = *puVar11;
      uStack_98 = puVar11[3];
      uStack_a0 = puVar11[2];
      uStack_88 = puVar11[5];
      uStack_90 = puVar11[4];
      uStack_78 = puVar11[7];
      uStack_80 = puVar11[6];
      uStack_70 = puVar11[8];
      uVar3 = 0;
      func_0x0001043a5714();
      func_0x000107c610f8();
      FUN_1016f5258(&uStack_b0,apuStack_f8);
      FUN_1016f5258(&uStack_b0,apuStack_f8);
      puVar4 = &uStack_b0;
      func_0x0001043a5378();
      uStack_e0 = uVar3;
      func_0x0001016f5294(&uStack_b0);
      puVar5 = puVar7;
      apuStack_f8[0] = puVar4;
      func_0x000107c61558();
      puVar6 = puVar7;
      if (((ulong)puVar5 & 1) == 0) {
        puVar6 = (undefined *)0x0;
        func_0x000100f6a040(0,*(long *)(puVar7 + 0x10) + 1,1,puVar7);
      }
      uVar1 = *(ulong *)(puVar6 + 0x10);
      puVar7 = puVar6;
      if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar1) {
        puVar7 = (undefined *)(ulong)(1 < *(ulong *)(puVar6 + 0x18));
        func_0x000100f6a040(puVar7,uVar1 + 1,1,puVar6);
      }
      uVar10 = uVar10 + 1;
      *(ulong *)(puVar7 + 0x10) = uVar1 + 1;
      func_0x000100102924(apuStack_f8,puVar7 + uVar1 * 0x20 + 0x20);
      puVar11 = puVar11 + 9;
    } while (uVar9 != uVar10);
  }
  *param_1 = puVar7;
  return;
}



/* Entry: 1016f4e2c; end: 1016f4e9f;  */

void FUN_1016f4e2c(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x000107c610f8();
  func_0x000107c5fc48(uVar2,PTR___sypN_11034f1a8 + 8);
  func_0x000107c45788();
  func_0x000107c61170(uVar2);
  *param_1 = puVar1;
  return;
}



/* Entry: 1016f4ea0; end: 1016f4f5f;  */

code * FUN_1016f4ea0(long *param_1)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  long lVar2;
  code *unaff_x20;
  
  lVar2 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c5ee20();
  func_0x000107c4636c();
  func_0x000107c61170(param_1);
  plVar1 = (long *)0x0;
  if (unaff_x20 == (code *)0x0) {
    func_0x000107c61174();
    func_0x000107c5ed30(0);
    func_0x000107c61170(plVar1);
    func_0x000107c61654();
  }
  else {
    func_0x000107c61174();
    plVar1 = param_1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar2) {
    return unaff_x20;
  }
  func_0x000107c60e78();
  lVar2 = *plVar1;
  func_0x000107c615c0(*(undefined8 *)(*plVar1 + 0x10));
  UNRECOVERED_JUMPTABLE = *(code **)(lVar2 + 8);
                    /* WARNING: Could not recover jumptable at 0x0001016f4f98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return UNRECOVERED_JUMPTABLE;
}



/* Entry: 1016f4f60; end: 1016f4f9b;  */

void FUN_1016f4f60(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001016f4f98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1016f4f9c; end: 1016f4fab;  */

undefined1  [16] FUN_1016f4f9c(void)

{
  return ZEXT816(0x1103fbf28);
}



/* Entry: 1016f4fac; end: 1016f500f;  */

undefined8 * FUN_1016f4fac(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  return param_1;
}



/* Entry: 1016f5010; end: 1016f5053;  */

undefined8 * FUN_1016f5010(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  func_0x000107c6142c(param_1[1]);
  uVar1 = param_1[2];
  uVar2 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  func_0x000107c61574(uVar1);
  return param_1;
}



/* Entry: 1016f5054; end: 1016f50fb;  */

int FUN_1016f5054(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[6] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1016f50fc; end: 1016f5187;  */

void FUN_1016f50fc(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar4 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar5 = *(long *)(unaff_x20 + 0x28);
  lVar3 = *(long *)(unaff_x20 + 0x30);
  lVar6 = *(long *)(unaff_x20 + 0x38);
  plVar8 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = 0x1016f59c8;
  plVar8[3] = lVar6;
  plVar7 = (long *)0xc0;
  func_0x000107c615b8();
  plVar8[4] = (long)plVar7;
  *plVar7 = (long)plVar8;
  plVar7[1] = (long)FUN_1016f3204;
  plVar7[0xf] = lVar4;
  plVar7[0x10] = lVar2;
  plVar7[0xd] = lVar3;
  plVar7[0xe] = lVar1;
  plVar7[0xc] = lVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1016f22e8,0,0);
  return;
}



/* Entry: 1016f5188; end: 1016f51cb;  */

void FUN_1016f5188(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1016f51cc; end: 1016f5257;  */

void FUN_1016f51cc(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar4 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar5 = *(long *)(unaff_x20 + 0x28);
  lVar3 = *(long *)(unaff_x20 + 0x30);
  lVar6 = *(long *)(unaff_x20 + 0x38);
  plVar8 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = 0x1016f59cc;
  plVar8[3] = lVar6;
  plVar7 = (long *)0xc0;
  func_0x000107c615b8();
  plVar8[4] = (long)plVar7;
  *plVar7 = (long)plVar8;
  plVar7[1] = (long)FUN_1016f3204;
  plVar7[0xf] = lVar4;
  plVar7[0x10] = lVar2;
  plVar7[0xd] = lVar3;
  plVar7[0xe] = lVar1;
  plVar7[0xc] = lVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1016f22e8,0,0);
  return;
}



/* Entry: 1016f5258; end: 1016f52c7;  */

undefined8 FUN_1016f5258(undefined8 param_1,undefined8 param_2)

{
  (*(code *)&DAT_1043a377c)(param_2,param_1);
  return param_2;
}



/* Entry: 1016f52c8; end: 1016f52e7;  */

void FUN_1016f52c8(undefined8 *param_1)

{
  if ((*(byte *)(*(long *)(param_1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001016f52dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1[3] + -8) + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}



/* Entry: 1016f52e8; end: 1016f547b;  */

undefined8 FUN_1016f52e8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112dc3108;
  func_0x0001000285a8(0x112dc3108,&UNK_10d9803d0);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1016f547c; end: 1016f56db;  */

void FUN_1016f547c(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lStack_70;
  long lStack_68;
  
  lVar3 = param_1;
  lVar4 = param_2;
  func_0x000107c44bac();
  if ((int)lVar3 == 0) {
    return;
  }
  func_0x000107c5c910();
  func_0x000107c61180();
  if (param_1 != 0) {
    lVar3 = param_1;
    func_0x000107c4c9ac();
    func_0x000107c61180();
    if (lVar3 == 0) {
      lStack_68 = 0;
      lVar3 = 0;
      lVar7 = lVar4;
    }
    else {
      lStack_68 = lVar3;
      func_0x000107c5faec();
      lVar7 = lVar4;
      func_0x000107c61170(lVar3);
      lVar3 = lVar4;
    }
    lVar4 = param_1;
    func_0x000107c5c940();
    func_0x000107c61180();
    if (lVar4 == 0) {
      lStack_70 = 0;
      lVar4 = 0;
      lVar1 = lVar7;
    }
    else {
      lStack_70 = lVar4;
      func_0x000107c5faec();
      lVar1 = lVar7;
      func_0x000107c61170(lVar4);
      lVar4 = lVar7;
    }
    lVar7 = param_1;
    func_0x000107c5c958();
    func_0x000107c61180();
    if (lVar7 == 0) {
      lVar5 = 0;
      lVar7 = 0;
      lVar8 = lVar1;
    }
    else {
      lVar5 = lVar7;
      func_0x000107c5faec();
      lVar8 = lVar1;
      func_0x000107c61170(lVar7);
      lVar7 = lVar1;
    }
    lVar1 = param_1;
    func_0x000107c4a97c();
    func_0x000107c61180();
    if (lVar1 == 0) {
      lVar6 = 0;
      lVar8 = 0;
    }
    else {
      lVar6 = lVar1;
      func_0x000107c5faec();
      func_0x000107c61170(lVar1);
    }
    if (lVar3 == 0) {
      lStack_68 = 0;
    }
    else {
      func_0x000107c5fadc(lStack_68,lVar3);
      func_0x000107c6142c(lVar3);
    }
    if (lVar4 == 0) {
      lStack_70 = 0;
    }
    else {
      func_0x000107c5fadc(lStack_70,lVar4);
      func_0x000107c6142c(lVar4);
    }
    if (lVar7 == 0) {
      lVar5 = 0;
    }
    else {
      func_0x000107c5fadc(lVar5,lVar7);
      func_0x000107c6142c(lVar7);
    }
    if (lVar8 == 0) {
      lVar6 = 0;
    }
    else {
      func_0x000107c5fadc(lVar6,lVar8);
      func_0x000107c6142c(lVar8);
    }
    puVar2 = PTR_PTR_1126cb008;
    func_0x000107c610f8(PTR_PTR_1126cb008);
    func_0x000107c5fadc(param_2,param_3);
    func_0x000107c47050(puVar2);
    func_0x000107c61170(param_1);
    func_0x000107c61170(lStack_68);
    func_0x000107c61170(lStack_70);
    func_0x000107c61170(lVar5);
    func_0x000107c61170(lVar6);
    func_0x000107c61170(param_2);
    return;
  }
  return;
}



/* Entry: 1016f56dc; end: 1016f5803;  */

void FUN_1016f56dc(ulong param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  
  func_0x000107c42770();
  func_0x000107c61180();
  if (param_1 != 0) {
    uVar1 = param_1;
    func_0x000107c5faec();
    func_0x000107c61170(param_1);
    uVar4 = uVar1 & 0xffffffffffff;
    if ((param_2 & 0x2000000000000000) != 0) {
      uVar4 = param_2 >> 0x38 & 0xf;
    }
    if (uVar4 == 0) {
      func_0x000107c6142c(param_2);
    }
    else {
      uVar4 = param_2;
      func_0x000107c5fadc(uVar1,param_2);
      func_0x000107c6142c(param_2);
      puVar2 = PTR_PTR_1126b2378;
      func_0x000107c61168();
      func_0x000107c44e9c();
      func_0x000107c61180();
      func_0x000107c61170(uVar1);
      puVar5 = puVar2;
      func_0x000107c41214();
      func_0x000107c61180();
      if (puVar5 == (undefined *)0x0) {
        puVar5 = (undefined *)0x0;
      }
      else {
        puVar3 = puVar5;
        func_0x000107c5ee30();
        func_0x000107c61170(puVar5);
        puVar5 = puVar3;
        func_0x000107c5ee20(puVar3,uVar4);
        func_0x00010006c090(puVar3,uVar4);
      }
      func_0x000107c610f8(PTR_PTR_1126cf3e8);
      func_0x000107c4825c();
      func_0x000107c61170(puVar2);
      func_0x000107c61170(puVar5);
    }
  }
  return;
}



/* Entry: 1016f5804; end: 1016f5997;  */

void FUN_1016f5804(double param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long extraout_x8;
  long lVar4;
  long alStack_90 [4];
  
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar4 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = param_2;
  func_0x000107c44860();
  if ((int)lVar3 != 0) {
    func_0x000107c428c4();
    func_0x000107c61180();
    if (param_2 != 0) {
      func_0x000107c5eea0(&stack0xffffffffffffff90 + lVar1);
      func_0x000107c5ee8c();
      (**(code **)(lVar4 + 8))(&stack0xffffffffffffff90 + lVar1,lVar2);
      func_0x000107c3ebec(param_2);
      func_0x000107c5a94c(param_2);
      func_0x000107c5de98(param_2);
      func_0x000107c5c254(param_2);
      func_0x000107c5b904(param_2);
      func_0x000107c5b8e4(param_2);
      lVar3 = param_2;
      func_0x000107c5b914();
      lVar2 = param_2;
      func_0x000107c4fdd8();
      lVar4 = param_2;
      func_0x000107c4fa78();
      func_0x000107c610f8(PTR_PTR_1126d9f58);
      *(long *)((long)alStack_90 + lVar1 + 8) = lVar2;
      *(long *)((long)alStack_90 + lVar1 + 0x10) = lVar4;
      *(long *)((long)alStack_90 + lVar1) = lVar3;
      func_0x000107c48d38(param_1 * 1000.0);
      func_0x000107c61170(param_2);
    }
  }
  return;
}



/* Entry: 1016f5998; end: 1016f59cf;  */

void FUN_1016f5998(long param_1,ulong param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  long lStack_50;
  ulong uStack_48;
  undefined1 uStack_40;
  
  if (0xe < param_2 >> 0x3c) goto LAB_1016f2b7c;
  uVar1 = (uint)(param_2 >> 0x20);
  uVar2 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar2 == 0) {
      if ((param_2 & 0xff000000000000) == 0) goto LAB_1016f2b78;
    }
    else {
      if ((long)(int)param_1 == param_1 >> 0x20) goto LAB_1016f2b7c;
LAB_1016f2b5c:
      func_0x000100de78a0();
    }
    if (param_3 == 0) {
      uStack_40 = 0;
      lStack_50 = param_1;
      uStack_48 = param_2;
      func_0x00010488e5d4(&lStack_50);
      func_0x0001000b44c0(param_1,param_2);
      return;
    }
  }
  else if (uVar2 == 2) {
    if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_1016f2b7c;
    goto LAB_1016f2b5c;
  }
LAB_1016f2b78:
  func_0x0001000b44c0();
LAB_1016f2b7c:
  uStack_48 = 0xf000000000000000;
  lStack_50 = 0;
  uStack_40 = 0;
  func_0x00010488e5d4(&lStack_50);
  return;
}



/* Entry: 1016f59d0; end: 1016f5a0b;  */

/* WARNING: Possible PIC construction at 0x0001016f59f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001016f59fc) */

void FUN_1016f59d0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  param_1[3] = &UNK_1103fc148;
  param_1[4] = &PTR_DAT_1103fc0a8;
  *param_1 = uVar1;
  param_1[1] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 1016f5a0c; end: 1016f5a3b;  */

void FUN_1016f5a0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x98) = param_8;
  *(undefined8 *)(unaff_x22 + 0xa0) = param_9;
  *(undefined8 *)(unaff_x22 + 0x88) = param_6;
  *(undefined8 *)(unaff_x22 + 0x90) = param_7;
  *(undefined8 *)(unaff_x22 + 0x78) = param_4;
  *(undefined8 *)(unaff_x22 + 0x80) = param_5;
  *(undefined8 *)(unaff_x22 + 0x68) = param_2;
  *(undefined8 *)(unaff_x22 + 0x70) = param_3;
  *(undefined8 *)(unaff_x22 + 0x60) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1016f5a3c,0,0);
  return;
}



/* Entry: 1016f5a3c; end: 1016f5b9b;  */

void FUN_1016f5a3c(ulong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long unaff_x22;
  
  func_0x0001058e90b0();
  if ((param_1 & 1) == 0) {
    func_0x000100083b20(unaff_x22 + 0x48);
    lVar7 = *(long *)(unaff_x22 + 0x48);
    lVar2 = lVar7;
    func_0x000107c40430();
    func_0x000107c61180();
    func_0x000107c61170(lVar7);
    lVar7 = lVar2;
    func_0x000107c5c734();
    func_0x000107c61180();
    *(long *)(unaff_x22 + 0xa8) = lVar7;
    func_0x000107c61170(lVar2);
    if (lVar7 != 0) {
      lVar2 = lVar7;
      func_0x000107c614f0();
      lVar4 = lVar2;
      func_0x000107c5ed70();
      *(long *)(unaff_x22 + 0x10) = lVar4;
      *(undefined8 *)(unaff_x22 + 0x18) = param_2;
      *(undefined8 *)(unaff_x22 + 0x20) = 0x736568637261;
      *(undefined8 *)(unaff_x22 + 0x28) = 0xe600000000000000;
      *(undefined8 *)(unaff_x22 + 0x30) = 0x6f69647561;
      *(undefined8 *)(unaff_x22 + 0x38) = 0xe500000000000000;
      *(undefined8 *)(unaff_x22 + 0x40) = 2;
      plVar5 = (long *)0xa0;
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0xb0) = plVar5;
      *plVar5 = unaff_x22;
      plVar5[1] = (long)FUN_1016f5b9c;
      plVar5[0xc] = lVar2;
      plVar5[0xd] = lVar7;
      plVar5[0xb] = unaff_x22 + 0x10;
      lVar2 = 0;
      func_0x000107c5eea4();
      plVar5[0xe] = lVar2;
      lVar2 = *(long *)(lVar2 + -8);
      plVar5[0xf] = lVar2;
      uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
      func_0x000107c615b8();
      plVar5[0x10] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_task_switch_110350130)(FUN_1016eb99c,0,0);
      return;
    }
    uVar6 = *(undefined8 *)(unaff_x22 + 0x88);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x90);
    func_0x000100083b20(unaff_x22 + 0x50);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x50);
    func_0x000107c5fadc(uVar6,uVar1);
    func_0x000107c4bc24(uVar8);
    func_0x000107c61170(uVar6);
    func_0x000107c615e8(uVar8);
  }
                    /* WARNING: Could not recover jumptable at 0x0001016f5b98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0,0xf000000000000000);
  return;
}



/* Entry: 1016f5b9c; end: 1016f5bfb;  */

void FUN_1016f5b9c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 0xa8);
  *(undefined8 *)(lVar2 + 0xb8) = param_1;
  *(undefined8 *)(lVar2 + 0xc0) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0xb0));
  FUN_1016f5da8(lVar2 + 0x10);
  func_0x000107c615e8(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1016f5bfc,0,0);
  return;
}



/* Entry: 1016f5bfc; end: 1016f5da7;  */

void FUN_1016f5bfc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long unaff_x22;
  ulong uVar12;
  undefined8 uVar13;
  
  uVar7 = *(ulong *)(unaff_x22 + 0xc0);
  if (uVar7 >> 0x3c < 0xf) {
    uVar9 = *(ulong *)(unaff_x22 + 0x80);
    uVar12 = *(ulong *)(unaff_x22 + 0x70);
    uVar11 = *(undefined8 *)(unaff_x22 + 0xb8);
    uVar13 = uVar11;
    if (uVar12 >> 0x3c < 0xf && uVar9 >> 0x3c < 0xf) {
      uVar8 = *(undefined8 *)(unaff_x22 + 0x78);
      uVar13 = *(undefined8 *)(unaff_x22 + 0x68);
      func_0x000100de78a0(uVar13,uVar12);
      func_0x000100de78a0(uVar8,uVar9);
      func_0x0001016ec27c(uVar13,uVar12,uVar8,uVar9,uVar11,uVar7);
      uVar11 = *(undefined8 *)(unaff_x22 + 0xb8);
      uVar8 = *(undefined8 *)(unaff_x22 + 0xc0);
      if (uVar12 >> 0x3c < 0xf) {
        uVar5 = *(undefined8 *)(unaff_x22 + 0x68);
        uVar6 = *(undefined8 *)(unaff_x22 + 0x70);
        func_0x0001000b44c0(*(undefined8 *)(unaff_x22 + 0x78),*(undefined8 *)(unaff_x22 + 0x80));
      }
      else {
        uVar4 = *(undefined8 *)(unaff_x22 + 0x88);
        uVar2 = *(undefined8 *)(unaff_x22 + 0x90);
        uVar1 = *(undefined8 *)(unaff_x22 + 0x78);
        uVar3 = *(undefined8 *)(unaff_x22 + 0x80);
        uVar5 = *(undefined8 *)(unaff_x22 + 0x68);
        uVar6 = *(undefined8 *)(unaff_x22 + 0x70);
        func_0x000100083b20(unaff_x22 + 0x58);
        uVar10 = *(undefined8 *)(unaff_x22 + 0x58);
        func_0x000107c5fadc(uVar4,uVar2);
        func_0x000107c4bc24(uVar10);
        func_0x000107c61170(uVar4);
        func_0x000107c615e8(uVar10);
        func_0x0001000b44c0(uVar1,uVar3);
      }
      func_0x0001000b44c0(uVar5,uVar6);
      func_0x0001000b44c0(uVar11,uVar8);
      uVar7 = uVar12;
    }
  }
  else {
    uVar13 = *(undefined8 *)(unaff_x22 + 0x88);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x90);
    func_0x000100083b20(unaff_x22 + 0x50);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x50);
    func_0x000107c5fadc(uVar13,uVar11);
    func_0x000107c4bc24(uVar8);
    func_0x000107c61170(uVar13);
    func_0x000107c615e8(uVar8);
    uVar7 = 0xf000000000000000;
    uVar13 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0001016f5da4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar13,uVar7);
  return;
}



/* Entry: 1016f5da8; end: 1016f5ddb;  */

undefined8 FUN_1016f5da8(undefined8 param_1)

{
  (*(code *)(undefined *)0x1016ebec0)();
  return param_1;
}



/* Entry: 1016f5ddc; end: 1016f5fe3;  */

undefined8
FUN_1016f5ddc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long alStack_c0 [2];
  undefined1 auStack_b0 [8];
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar7 = 0;
  uStack_98 = param_8;
  uStack_90 = param_2;
  uStack_88 = param_3;
  uStack_80 = param_4;
  uStack_78 = param_5;
  uStack_70 = param_6;
  uStack_68 = param_7;
  func_0x000107c5ede0();
  lVar14 = *(long *)(lVar7 + -8);
  lVar12 = *(long *)(lVar14 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar1 = -(lVar12 + 0xfU & 0xfffffffffffffff0);
  func_0x0001000285a8(0x112dc3120,&UNK_10d9803f0);
  func_0x000107c613fc();
  lVar8 = 0;
  func_0x00010095c380();
  lStack_a0 = lVar8;
  (**(code **)(lVar14 + 0x10))(auStack_b0 + lVar1,param_1,lVar7);
  uVar11 = (ulong)*(byte *)(lVar14 + 0x50);
  uVar15 = uVar11 + 0x20 & (uVar11 ^ 0xffffffffffffffff);
  uVar13 = lVar12 + uVar15 + 7 & 0xfffffffffffffff8;
  lStack_a8 = uVar13 + 0x30;
  puVar9 = &UNK_1103fc090;
  func_0x000107c613fc(&UNK_1103fc090,uVar13 + 0x38,uVar11 | 7);
  uVar10 = uStack_98;
  *(undefined8 *)(puVar9 + 0x10) = uStack_98;
  *(undefined8 *)(puVar9 + 0x18) = param_9;
  (**(code **)(lVar14 + 0x20))(puVar9 + uVar15,auStack_b0 + lVar1,lVar7);
  uVar6 = uStack_68;
  uVar5 = uStack_78;
  uVar4 = uStack_80;
  uVar3 = uStack_88;
  uVar2 = uStack_90;
  lVar7 = lStack_a0;
  *(undefined8 *)(puVar9 + uVar13) = uStack_90;
  *(undefined8 *)((long)(puVar9 + uVar13) + 8) = uStack_88;
  *(undefined8 *)(puVar9 + uVar13 + 0x10) = uStack_80;
  *(undefined8 *)((long)(puVar9 + uVar13 + 0x10) + 8) = uStack_78;
  *(undefined8 *)(puVar9 + uVar13 + 0x20) = uStack_70;
  *(undefined8 *)((long)(puVar9 + uVar13 + 0x20) + 8) = uStack_68;
  *(long *)(puVar9 + lStack_a8) = lStack_a0;
  func_0x000107c6157c(uVar10);
  func_0x000107c6157c(param_9);
  func_0x000100de78a0(uVar2,uVar3);
  func_0x000100de78a0(uVar4,uVar5);
  func_0x000107c61434(uVar6);
  func_0x000107c6157c(lVar7);
  *(undefined **)((long)alStack_c0 + lVar1) = PTR___sytN_11034f1b0 + 8;
  uVar10 = 1;
  func_0x0001001ca524(1,3,0x50,4,0,0,&UNK_10d980400,puVar9);
  func_0x000107c61574(puVar9);
  func_0x000107c61574(uVar10);
  uVar10 = *(undefined8 *)(lVar7 + 0x10);
  func_0x000107c6157c(uVar10);
  func_0x000107c61574(lVar7);
  return uVar10;
}



/* Entry: 1016f5fe4; end: 1016f601b;  */

void FUN_1016f5fe4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xb8) = param_11;
  *(undefined8 *)(unaff_x22 + 0xb0) = param_10;
  *(undefined8 *)(unaff_x22 + 0xa8) = param_9;
  *(undefined8 *)(unaff_x22 + 0x98) = param_7;
  *(undefined8 *)(unaff_x22 + 0xa0) = param_8;
  *(undefined8 *)(unaff_x22 + 0x88) = param_5;
  *(undefined8 *)(unaff_x22 + 0x90) = param_6;
  *(undefined8 *)(unaff_x22 + 0x78) = param_3;
  *(undefined8 *)(unaff_x22 + 0x80) = param_4;
  *(undefined8 *)(unaff_x22 + 0x70) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1016f601c,0,0);
  return;
}



/* Entry: 1016f601c; end: 1016f6197;  */

void FUN_1016f601c(ulong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long unaff_x22;
  
  func_0x0001058e90b0();
  if ((param_1 & 1) == 0) {
    func_0x000100083b20(unaff_x22 + 0x58);
    lVar7 = *(long *)(unaff_x22 + 0x58);
    lVar2 = lVar7;
    func_0x000107c40430();
    func_0x000107c61180();
    func_0x000107c61170(lVar7);
    lVar7 = lVar2;
    func_0x000107c5c734();
    func_0x000107c61180();
    *(long *)(unaff_x22 + 0xc0) = lVar7;
    func_0x000107c61170(lVar2);
    if (lVar7 != 0) {
      lVar2 = lVar7;
      func_0x000107c614f0();
      lVar4 = lVar2;
      func_0x000107c5ed70();
      *(long *)(unaff_x22 + 0x10) = lVar4;
      *(undefined8 *)(unaff_x22 + 0x18) = param_2;
      *(undefined8 *)(unaff_x22 + 0x20) = 0x736568637261;
      *(undefined8 *)(unaff_x22 + 0x28) = 0xe600000000000000;
      *(undefined8 *)(unaff_x22 + 0x30) = 0x6f69647561;
      *(undefined8 *)(unaff_x22 + 0x38) = 0xe500000000000000;
      *(undefined8 *)(unaff_x22 + 0x40) = 2;
      plVar5 = (long *)0xa0;
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 200) = plVar5;
      *plVar5 = unaff_x22;
      plVar5[1] = (long)FUN_1016f6198;
      plVar5[0xc] = lVar2;
      plVar5[0xd] = lVar7;
      plVar5[0xb] = unaff_x22 + 0x10;
      lVar2 = 0;
      func_0x000107c5eea4();
      plVar5[0xe] = lVar2;
      lVar2 = *(long *)(lVar2 + -8);
      plVar5[0xf] = lVar2;
      uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
      func_0x000107c615b8();
      plVar5[0x10] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_task_switch_110350130)(FUN_1016eb99c,0,0);
      return;
    }
    uVar6 = *(undefined8 *)(unaff_x22 + 0xa8);
    uVar1 = *(undefined8 *)(unaff_x22 + 0xb0);
    func_0x000100083b20(unaff_x22 + 0x60);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x60);
    func_0x000107c5fadc(uVar6,uVar1);
    func_0x000107c4bc24(uVar8);
    func_0x000107c61170(uVar6);
    func_0x000107c615e8(uVar8);
  }
  *(undefined8 *)(unaff_x22 + 0x50) = 0xf000000000000000;
  *(undefined8 *)(unaff_x22 + 0x48) = 0;
  func_0x000100b60084();
  func_0x0001000b44c0(0,0xf000000000000000);
                    /* WARNING: Could not recover jumptable at 0x0001016f6194. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1016f6198; end: 1016f61f7;  */

void FUN_1016f6198(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 0xc0);
  *(undefined8 *)(lVar2 + 0xd0) = param_1;
  *(undefined8 *)(lVar2 + 0xd8) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 200));
  FUN_1016f5da8(lVar2 + 0x10);
  func_0x000107c615e8(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1016f61f8,0,0);
  return;
}



/* Entry: 1016f61f8; end: 1016f63bb;  */

void FUN_1016f61f8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long unaff_x22;
  ulong uVar12;
  undefined8 uVar13;
  
  uVar7 = *(ulong *)(unaff_x22 + 0xd8);
  if (uVar7 >> 0x3c < 0xf) {
    uVar9 = *(ulong *)(unaff_x22 + 0xa0);
    uVar12 = *(ulong *)(unaff_x22 + 0x90);
    uVar11 = *(undefined8 *)(unaff_x22 + 0xd0);
    uVar13 = uVar11;
    if (uVar12 >> 0x3c < 0xf && uVar9 >> 0x3c < 0xf) {
      uVar8 = *(undefined8 *)(unaff_x22 + 0x98);
      uVar13 = *(undefined8 *)(unaff_x22 + 0x88);
      func_0x000100de78a0(uVar13,uVar12);
      func_0x000100de78a0(uVar8,uVar9);
      func_0x0001016ec27c(uVar13,uVar12,uVar8,uVar9,uVar11,uVar7);
      uVar11 = *(undefined8 *)(unaff_x22 + 0xd0);
      uVar8 = *(undefined8 *)(unaff_x22 + 0xd8);
      if (uVar12 >> 0x3c < 0xf) {
        uVar5 = *(undefined8 *)(unaff_x22 + 0x88);
        uVar6 = *(undefined8 *)(unaff_x22 + 0x90);
        func_0x0001000b44c0(*(undefined8 *)(unaff_x22 + 0x98),*(undefined8 *)(unaff_x22 + 0xa0));
      }
      else {
        uVar4 = *(undefined8 *)(unaff_x22 + 0xa8);
        uVar2 = *(undefined8 *)(unaff_x22 + 0xb0);
        uVar1 = *(undefined8 *)(unaff_x22 + 0x98);
        uVar3 = *(undefined8 *)(unaff_x22 + 0xa0);
        uVar5 = *(undefined8 *)(unaff_x22 + 0x88);
        uVar6 = *(undefined8 *)(unaff_x22 + 0x90);
        func_0x000100083b20(unaff_x22 + 0x68);
        uVar10 = *(undefined8 *)(unaff_x22 + 0x68);
        func_0x000107c5fadc(uVar4,uVar2);
        func_0x000107c4bc24(uVar10);
        func_0x000107c61170(uVar4);
        func_0x000107c615e8(uVar10);
        func_0x0001000b44c0(uVar1,uVar3);
      }
      func_0x0001000b44c0(uVar5,uVar6);
      func_0x0001000b44c0(uVar11,uVar8);
      uVar7 = uVar12;
    }
  }
  else {
    uVar13 = *(undefined8 *)(unaff_x22 + 0xa8);
    uVar11 = *(undefined8 *)(unaff_x22 + 0xb0);
    func_0x000100083b20(unaff_x22 + 0x60);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x60);
    func_0x000107c5fadc(uVar13,uVar11);
    func_0x000107c4bc24(uVar8);
    func_0x000107c61170(uVar13);
    func_0x000107c615e8(uVar8);
    uVar7 = 0xf000000000000000;
    uVar13 = 0;
  }
  *(undefined8 *)(unaff_x22 + 0x48) = uVar13;
  *(ulong *)(unaff_x22 + 0x50) = uVar7;
  func_0x000100b60084();
  func_0x0001000b44c0(uVar13,uVar7);
                    /* WARNING: Could not recover jumptable at 0x0001016f63b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1016f63bc; end: 1016f64af;  */

void FUN_1016f63bc(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  long unaff_x20;
  long unaff_x22;
  long lVar11;
  ulong uVar12;
  
  lVar8 = 0;
  func_0x000107c5ede0();
  uVar10 = (ulong)*(byte *)(*(long *)(lVar8 + -8) + 0x50);
  uVar12 = uVar10 + 0x20 & (uVar10 ^ 0xffffffffffffffff);
  uVar10 = *(long *)(*(long *)(lVar8 + -8) + 0x40) + uVar12 + 7 & 0xfffffffffffffff8;
  lVar8 = *(long *)(unaff_x20 + 0x10);
  lVar4 = *(long *)(unaff_x20 + 0x18);
  lVar1 = *(long *)(unaff_x20 + uVar10);
  lVar5 = ((long *)(unaff_x20 + uVar10))[1];
  plVar9 = (long *)(unaff_x20 + uVar10 + 0x10);
  lVar2 = *plVar9;
  lVar6 = plVar9[1];
  plVar9 = (long *)(unaff_x20 + uVar10 + 0x20);
  lVar3 = *plVar9;
  lVar7 = plVar9[1];
  lVar11 = *(long *)(unaff_x20 + (uVar10 + 0x37 & 0xffffffffffffff8));
  plVar9 = (long *)0xe0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar9;
  *plVar9 = unaff_x22;
  plVar9[1] = (long)FUN_1016f64b0;
  plVar9[0x17] = lVar11;
  plVar9[0x16] = lVar7;
  plVar9[0x15] = lVar3;
  plVar9[0x13] = lVar2;
  plVar9[0x14] = lVar6;
  plVar9[0x11] = lVar1;
  plVar9[0x12] = lVar5;
  plVar9[0xf] = lVar4;
  plVar9[0x10] = unaff_x20 + uVar12;
  plVar9[0xe] = lVar8;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1016f601c,0,0);
  return;
}



/* Entry: 1016f64b0; end: 1016f64eb;  */

void FUN_1016f64b0(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001016f64e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1016f64ec; end: 1016f6593;  */

void FUN_1016f64ec(long param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
                  long param_7)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *unaff_x20;
  long unaff_x22;
  
  lVar1 = *unaff_x20;
  lVar2 = unaff_x20[1];
  plVar3 = (long *)0xd0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1016f6594;
  plVar3[0x13] = lVar1;
  plVar3[0x14] = lVar2;
  plVar3[0x11] = param_6;
  plVar3[0x12] = param_7;
  plVar3[0xf] = param_4;
  plVar3[0x10] = param_5;
  plVar3[0xd] = param_2;
  plVar3[0xe] = param_3;
  plVar3[0xc] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1016f5a3c,0,0);
  return;
}



/* Entry: 1016f6594; end: 1016f65df;  */

void FUN_1016f6594(undefined8 param_1,undefined8 param_2)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001016f65dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(param_1,param_2);
  return;
}



/* Entry: 1016f65e0; end: 1016f65eb;  */

undefined8
FUN_1016f65e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 *unaff_x20;
  long lVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  undefined8 uStack0000000000000000;
  long alStack_c0 [2];
  undefined1 auStack_b0 [8];
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uStack_98 = *unaff_x20;
  uVar11 = unaff_x20[1];
  lVar8 = 0;
  uStack0000000000000000 = uVar11;
  uStack_90 = param_2;
  uStack_88 = param_3;
  uStack_80 = param_4;
  uStack_78 = param_5;
  uStack_70 = param_6;
  uStack_68 = param_7;
  func_0x000107c5ede0();
  lVar15 = *(long *)(lVar8 + -8);
  lVar13 = *(long *)(lVar15 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar1 = -(lVar13 + 0xfU & 0xfffffffffffffff0);
  func_0x0001000285a8(0x112dc3120,&UNK_10d9803f0);
  func_0x000107c613fc();
  lVar9 = 0;
  func_0x00010095c380();
  lStack_a0 = lVar9;
  (**(code **)(lVar15 + 0x10))(auStack_b0 + lVar1,param_1,lVar8);
  uVar12 = (ulong)*(byte *)(lVar15 + 0x50);
  uVar16 = uVar12 + 0x20 & (uVar12 ^ 0xffffffffffffffff);
  uVar14 = lVar13 + uVar16 + 7 & 0xfffffffffffffff8;
  lStack_a8 = uVar14 + 0x30;
  puVar10 = &UNK_1103fc090;
  func_0x000107c613fc(&UNK_1103fc090,uVar14 + 0x38,uVar12 | 7);
  uVar2 = uStack_98;
  *(undefined8 *)(puVar10 + 0x10) = uStack_98;
  *(undefined8 *)(puVar10 + 0x18) = uVar11;
  (**(code **)(lVar15 + 0x20))(puVar10 + uVar16,auStack_b0 + lVar1,lVar8);
  uVar7 = uStack_68;
  uVar6 = uStack_78;
  uVar5 = uStack_80;
  uVar4 = uStack_88;
  uVar3 = uStack_90;
  lVar8 = lStack_a0;
  *(undefined8 *)(puVar10 + uVar14) = uStack_90;
  *(undefined8 *)((long)(puVar10 + uVar14) + 8) = uStack_88;
  *(undefined8 *)(puVar10 + uVar14 + 0x10) = uStack_80;
  *(undefined8 *)((long)(puVar10 + uVar14 + 0x10) + 8) = uStack_78;
  *(undefined8 *)(puVar10 + uVar14 + 0x20) = uStack_70;
  *(undefined8 *)((long)(puVar10 + uVar14 + 0x20) + 8) = uStack_68;
  *(long *)(puVar10 + lStack_a8) = lStack_a0;
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar11);
  func_0x000100de78a0(uVar3,uVar4);
  func_0x000100de78a0(uVar5,uVar6);
  func_0x000107c61434(uVar7);
  func_0x000107c6157c(lVar8);
  *(undefined **)((long)alStack_c0 + lVar1) = PTR___sytN_11034f1b0 + 8;
  uVar11 = 1;
  func_0x0001001ca524(1,3,0x50,4,0,0,&UNK_10d980400,puVar10);
  func_0x000107c61574(puVar10);
  func_0x000107c61574(uVar11);
  uVar11 = *(undefined8 *)(lVar8 + 0x10);
  func_0x000107c6157c(uVar11);
  func_0x000107c61574(lVar8);
  return uVar11;
}



/* Entry: 1016f65ec; end: 1016f6627;  */

void FUN_1016f65ec(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_2;
  FUN_1016f6af8();
  func_0x000107c613fc();
  *(long *)(lVar1 + 0x10) = param_2;
  *param_1 = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 1016f6628; end: 1016f662f;  */

void FUN_1016f6628(long *param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  FUN_1016f6af8();
  func_0x000107c613fc();
  *(long *)(lVar1 + 0x10) = unaff_x20;
  *param_1 = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 1016f6630; end: 1016f665f;  */

void FUN_1016f6630(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 1016f6660; end: 1016f6703;  */

void FUN_1016f6660(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  uVar2 = param_2[1];
  if (uVar2 >> 0x3c < 0xf) {
    uVar4 = *param_2;
    puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x000107c610f8();
    func_0x00010006c00c(uVar4,uVar2);
    uVar1 = uVar4;
    func_0x000107c5ee20(uVar4,uVar2);
    func_0x000107c4635c();
    func_0x000107c61170(uVar1);
    func_0x0001000b44c0(uVar4,uVar2);
  }
  else {
    puVar3 = (undefined *)0x0;
  }
  *param_1 = puVar3;
  return;
}



/* Entry: 1016f6704; end: 1016f692b; -[_TtC19SCMusicServicesImpl29MusicTrackAudioDataLoaderImpl loadAudioData:encryptionKey:encryptionIv:source:] */

void FUN_1016f6704(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5,undefined8 param_6)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  long extraout_x8;
  code *pcVar8;
  long lVar9;
  undefined8 uVar10;
  long alStack_b0 [2];
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  undefined1 auStack_88 [24];
  undefined8 uStack_70;
  long lStack_68;
  
  lVar2 = 0;
  func_0x000107c5ede0();
  lStack_98 = *(long *)(lVar2 + -8);
  lStack_90 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_98 + 0x40));
  lVar2 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lStack_a0 = (long)&lStack_a0 + lVar2;
  func_0x000107c5edb4(param_3);
  if (param_4 == 0) {
    func_0x000107c61174(param_5);
    func_0x000107c61174(param_6);
    func_0x000107c6157c(param_1);
    param_4 = 0;
    uVar1 = 0xf000000000000000;
    uVar3 = param_2;
  }
  else {
    func_0x000107c61174(param_5);
    func_0x000107c61174(param_6);
    func_0x000107c6157c(param_1);
    lVar9 = param_4;
    func_0x000107c61174(param_4);
    func_0x000107c5ee30(param_4);
    uVar3 = param_2;
    func_0x000107c61170(lVar9);
    uVar1 = param_2;
  }
  if (param_5 == 0) {
    lVar9 = 0;
    uVar10 = 0xf000000000000000;
    uVar7 = uVar3;
  }
  else {
    lVar9 = param_5;
    func_0x000107c5ee30(param_5);
    uVar7 = uVar3;
    func_0x000107c61170(param_5);
    uVar10 = uVar3;
  }
  uVar3 = param_6;
  func_0x000107c5faec(param_6);
  func_0x000107c61170(param_6);
  func_0x000100083b20(auStack_88);
  func_0x0001000a8868(auStack_88,uStack_70);
  pcVar8 = *(code **)(lStack_68 + 0x10);
  *(long *)((long)alStack_b0 + lVar2) = lStack_68;
  lVar2 = lStack_a0;
  lVar4 = lStack_a0;
  (*pcVar8)(lStack_a0,param_4,uVar1,lVar9,uVar10,uVar3,uVar7,uStack_70);
  uVar3 = 0x112dc3130;
  func_0x0001000285a8(0x112dc3130,&UNK_10d980410);
  uVar5 = 0;
  func_0x000100775264(0,1,FUN_1016f6660,0,uVar3);
  func_0x000107c61574(lVar4);
  puVar6 = auStack_88;
  func_0x0001000834e4(puVar6);
  func_0x00010488b298();
  func_0x000107c61574(param_1);
  func_0x000107c6142c(uVar7);
  func_0x000107c61574(uVar5);
  func_0x0001000b44c0(lVar9,uVar10);
  func_0x0001000b44c0(param_4,uVar1);
  (**(code **)(lStack_98 + 8))(lVar2,lStack_90);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1016f692c; end: 1016f694f;  */

void FUN_1016f692c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1016f6950; end: 1016f695f;  */

undefined1  [16] FUN_1016f6950(void)

{
  return ZEXT816(0x1103fc0d0);
}



/* Entry: 1016f6960; end: 1016f69bb;  */

/* WARNING: Possible PIC construction at 0x0001016f6974: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001016f6978) */

void FUN_1016f6960(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}



/* Entry: 1016f69bc; end: 1016f6a17;  */

undefined8 * FUN_1016f69bc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  return param_1;
}



/* Entry: 1016f6a18; end: 1016f6a53;  */

undefined8 * FUN_1016f6a18(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61574(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c61574(uVar1);
  return param_1;
}



/* Entry: 1016f6a54; end: 1016f6af7;  */

int FUN_1016f6a54(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[2] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1016f6af8; end: 1016f6b17;  */

void FUN_1016f6af8(void)

{
  func_0x000107c61168(&PTR_PTR_112dc3178);
  return;
}



/* Entry: 1016f6b18; end: 1016f6b1f;  */

undefined8 * FUN_1016f6b18(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6157c();
  func_0x000107c6157c(uVar1);
  return param_1;
}



/* Entry: 1016f6b20; end: 1016f6d3f;  */

undefined * FUN_1016f6b20(long param_1)

{
  ulong uVar1;
  int iVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  undefined1 uStack_61;
  
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar10 = *(long *)(param_1 + 0x10);
  if (lVar10 != 0) {
    func_0x000100403514(0,lVar10,0);
    uVar1 = param_1 + 0x38;
    uVar13 = uVar1;
    func_0x000107c60268(uVar1,~(-1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f)));
    lVar15 = 0;
    do {
      if (uVar13 >> ((ulong)*(byte *)(param_1 + 0x20) & 0x3f) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1016f6d30);
        (*pcVar4)();
      }
      uVar9 = uVar13 >> 6;
      uVar11 = 1L << (uVar13 & 0x3f);
      if ((*(ulong *)(uVar1 + uVar9 * 8) & uVar11) == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1016f6d34);
        (*pcVar4)();
      }
      iVar2 = *(int *)(param_1 + 0x24);
      uStack_61 = *(undefined1 *)(*(long *)(param_1 + 0x30) + uVar13);
      puVar5 = &uStack_61;
      puVar6 = &UNK_11072df98;
      func_0x000107c5fb18();
      uVar14 = *(ulong *)(puVar3 + 0x10);
      if (*(ulong *)(puVar3 + 0x18) >> 1 <= uVar14) {
        func_0x000100403514(1 < *(ulong *)(puVar3 + 0x18),uVar14 + 1,1);
      }
      *(ulong *)(puVar3 + 0x10) = uVar14 + 1;
      *(undefined1 **)(puVar3 + uVar14 * 0x10 + 0x20) = puVar5;
      *(undefined **)(puVar3 + uVar14 * 0x10 + 0x28) = puVar6;
      uVar14 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
      if (uVar14 <= uVar13) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1016f6d38);
        (*pcVar4)();
      }
      uVar7 = *(ulong *)(uVar1 + uVar9 * 8);
      if ((uVar7 & uVar11) == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1016f6d3c);
        (*pcVar4)();
      }
      if (iVar2 != *(int *)(param_1 + 0x24)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1016f6d40);
        (*pcVar4)();
      }
      uVar7 = uVar7 & -2L << (uVar13 & 0x3f);
      if (uVar7 == 0) {
        lVar12 = uVar9 << 6;
        puVar8 = (ulong *)(param_1 + 0x40 + uVar9 * 8);
        do {
          uVar9 = uVar9 + 1;
          if (uVar14 + 0x3f >> 6 <= uVar9) {
            FUN_1016fa69c(uVar13,iVar2,0);
            uVar13 = uVar14;
            goto LAB_1016f6bb8;
          }
          uVar11 = *puVar8;
          lVar12 = lVar12 + 0x40;
          puVar8 = puVar8 + 1;
        } while (uVar11 == 0);
        FUN_1016fa69c(uVar13,iVar2,0);
        uVar13 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
        uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
        uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
        uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
        uVar13 = LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) + lVar12;
      }
      else {
        uVar9 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
        uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
        uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
        uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
        uVar13 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar13 & 0x7fffffffffffffc0;
      }
LAB_1016f6bb8:
      lVar15 = lVar15 + 1;
    } while (lVar15 != lVar10);
  }
  return puVar3;
}



/* Entry: 1016f6d40; end: 1016f6dcb;  */

/* WARNING: Possible PIC construction at 0x0001016f6da0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001016f6db0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001016f6da4) */
/* WARNING: Removing unreachable block (ram,0x0001016f6db4) */

void FUN_1016f6d40(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  param_1[3] = &UNK_1103fc258;
  param_1[4] = &PTR_DAT_1103fc1b0;
  puVar1 = &UNK_1103fc2d0;
  func_0x000107c613fc(&UNK_1103fc2d0,0x30,7);
  *param_1 = puVar1;
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 1016f6dcc; end: 1016f6dd7;  */

/* WARNING: Possible PIC construction at 0x0001016f6da0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001016f6db0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001016f6da4) */
/* WARNING: Removing unreachable block (ram,0x0001016f6db4) */

void FUN_1016f6dcc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  param_1[3] = &UNK_1103fc258;
  param_1[4] = &PTR_DAT_1103fc1b0;
  puVar5 = &UNK_1103fc2d0;
  func_0x000107c613fc(&UNK_1103fc2d0,0x30,7);
  *param_1 = puVar5;
  *(undefined8 *)(puVar5 + 0x10) = uVar1;
  *(undefined8 *)(puVar5 + 0x18) = uVar3;
  *(undefined8 *)(puVar5 + 0x20) = uVar2;
  *(undefined8 *)(puVar5 + 0x28) = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1016f6dd8; end: 1016f6eab;  */

void FUN_1016f6dd8(long param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5,
                  long param_6)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x88) = param_3;
  *(undefined8 *)(unaff_x22 + 0x90) = param_5;
  *(long *)(unaff_x22 + 0x80) = param_1;
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  uVar1 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x98) = uVar1;
  lVar2 = 0;
  func_0x000107c5ede0();
  *(long *)(unaff_x22 + 0xa0) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0xa8) = lVar2;
  uVar1 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xb0) = uVar1;
  plVar3 = (long *)0x160;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xb8) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1016f6eac;
  plVar3[0x22] = param_4;
  plVar3[0x23] = param_6;
  plVar3[0x20] = 0;
  plVar3[0x21] = 0;
  plVar3[0x1e] = param_2;
  plVar3[0x1f] = 0;
  plVar3[0x1d] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1016f94fc,0,0);
  return;
}



/* Entry: 1016f6eac; end: 1016f6f0b;  */

void FUN_1016f6eac(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar2 + 0xc0) = param_1;
  *(long *)(lVar2 + 200) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0xb8));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1016f6f0c;
  }
  else {
    pcVar1 = FUN_1016f73e4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 1016f6f0c; end: 1016f73e3;  */

void FUN_1016f6f0c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  undefined *puVar6;
  int *piVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  long unaff_x22;
  undefined8 uVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 uStackY_70;
  
  iVar3 = (int)*(undefined8 *)(unaff_x22 + 0xc0);
  func_0x000107c449b0();
  if (iVar3 == 0) {
    uVar11 = *(undefined8 *)(unaff_x22 + 0xc0);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x80);
    func_0x000107c602fc(0x23);
    func_0x000107c6142c(0xe000000000000000);
    uStackY_70 = 0x800000010efb88a0;
    *(undefined8 *)(unaff_x22 + 0x60) = uVar8;
    puVar6 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068;
    func_0x000107c6057c(PTR___ss6UInt64VN_11034f048,
                        PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068);
    func_0x000107c5fb78();
    func_0x000107c6142c(puVar6);
  }
  else {
    lVar4 = *(long *)(unaff_x22 + 0xc0);
    func_0x000107c4d2ac();
    func_0x000107c61180();
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1016f73c8);
      (*pcVar2)();
    }
    lVar9 = lVar4;
    func_0x000107c42794();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    if (lVar9 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1016f73cc);
      (*pcVar2)();
    }
    lVar4 = lVar9;
    func_0x000107c40500();
    func_0x000107c61180();
    func_0x000107c61170(lVar9);
    if (lVar4 != 0) {
      uVar11 = *(undefined8 *)(unaff_x22 + 0xa0);
      lVar9 = *(long *)(unaff_x22 + 0xa8);
      uVar8 = *(undefined8 *)(unaff_x22 + 0x98);
      lVar12 = lVar4;
      func_0x000107c5faec(lVar4);
      func_0x000107c61170(lVar4);
      func_0x000107c5edd0(uVar8,lVar12,param_2);
      func_0x000107c6142c(param_2);
      param_2 = 1;
      (**(code **)(lVar9 + 0x30))(uVar8,1,uVar11);
      if ((int)uVar8 != 1) {
        lVar4 = *(long *)(unaff_x22 + 0xc0);
        uVar11 = *(undefined8 *)(unaff_x22 + 0x98);
        (**(code **)(*(long *)(unaff_x22 + 0xa8) + 0x20))
                  (*(undefined8 *)(unaff_x22 + 0xb0),uVar11,*(undefined8 *)(unaff_x22 + 0xa0));
        func_0x000107c4d2ac();
        func_0x000107c61180();
        if (lVar4 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1016f73d8);
          (*pcVar2)();
        }
        lVar9 = lVar4;
        func_0x000107c42794();
        func_0x000107c61180();
        func_0x000107c61170(lVar4);
        if (lVar9 != 0) {
          lVar4 = lVar9;
          func_0x000107c4271c();
          func_0x000107c61180();
          func_0x000107c61170(lVar9);
          if (lVar4 == 0) {
            lVar9 = 0;
            uVar10 = 0xf000000000000000;
            uVar8 = uVar11;
          }
          else {
            lVar9 = lVar4;
            func_0x000107c5ee30();
            uVar8 = uVar11;
            func_0x000107c61170(lVar4);
            uVar10 = uVar11;
          }
          *(long *)(unaff_x22 + 0xd0) = lVar9;
          *(undefined8 *)(unaff_x22 + 0xd8) = uVar10;
          lVar4 = *(long *)(unaff_x22 + 0xc0);
          func_0x000107c4d2ac();
          func_0x000107c61180();
          if (lVar4 != 0) {
            lVar12 = lVar4;
            func_0x000107c42794();
            func_0x000107c61180();
            func_0x000107c61170(lVar4);
            if (lVar12 != 0) {
              lVar4 = lVar12;
              func_0x000107c42718();
              func_0x000107c61180();
              func_0x000107c61170(lVar12);
              if (lVar4 == 0) {
                lVar12 = 0;
                uVar8 = 0xf000000000000000;
              }
              else {
                lVar12 = lVar4;
                func_0x000107c5ee30();
                func_0x000107c61170(lVar4);
              }
              *(long *)(unaff_x22 + 0xe0) = lVar12;
              *(undefined8 *)(unaff_x22 + 0xe8) = uVar8;
              func_0x000100083b20(unaff_x22 + 0x10);
              uVar1 = *(undefined8 *)(unaff_x22 + 0x28);
              lVar4 = *(long *)(unaff_x22 + 0x30);
              func_0x0001000a8868(unaff_x22 + 0x10,uVar1);
              puVar13 = (undefined8 *)(unaff_x22 + 0x70);
              *puVar13 = &UNK_1103fc258;
              uVar11 = 0x112dc31e0;
              func_0x0001000285a8(0x112dc31e0,&UNK_10d9804e0);
              func_0x000107c5fb18(puVar13);
              *(undefined8 *)(unaff_x22 + 0xf0) = uVar11;
              piVar7 = *(int **)(lVar4 + 8);
              iVar3 = *piVar7;
              plVar5 = (long *)(ulong)(uint)piVar7[1];
              func_0x000107c615b8();
              *(long **)(unaff_x22 + 0xf8) = plVar5;
              *plVar5 = unaff_x22;
              plVar5[1] = 0x1016f742c;
                    /* WARNING: Could not recover jumptable at 0x0001016f73c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)((long)iVar3 + (long)piVar7))
                        (*(undefined8 *)(unaff_x22 + 0xb0),lVar9,uVar10,lVar12,uVar8,puVar13,uVar11,
                         uVar1,lVar4);
              return;
            }
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1016f73e4);
            (*pcVar2)();
          }
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1016f73e0);
          (*pcVar2)();
        }
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1016f73dc);
        (*pcVar2)();
      }
      func_0x0001000293e4(*(undefined8 *)(unaff_x22 + 0x98));
    }
    lVar4 = *(long *)(unaff_x22 + 0xc0);
    func_0x000107c4d2ac();
    func_0x000107c61180();
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1016f73d0);
      (*pcVar2)();
    }
    lVar9 = lVar4;
    func_0x000107c42794();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    if (lVar9 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1016f73d4);
      (*pcVar2)();
    }
    lVar4 = lVar9;
    func_0x000107c40500();
    func_0x000107c61180();
    func_0x000107c61170(lVar9);
    if (lVar4 == 0) {
      param_2 = 0xe300000000000000;
      lVar9 = 0x6c696e;
    }
    else {
      lVar9 = lVar4;
      func_0x000107c5faec(lVar4);
      func_0x000107c61170(lVar4);
    }
    uVar11 = *(undefined8 *)(unaff_x22 + 0xc0);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x80);
    func_0x000107c602fc(0x38);
    uStackY_70 = 0xe000000000000000;
    func_0x000107c5fb78(0xd000000000000026,0x800000010efb88d0);
    *(undefined8 *)(unaff_x22 + 0x68) = uVar8;
    puVar6 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068;
    func_0x000107c6057c(PTR___ss6UInt64VN_11034f048,
                        PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068);
    func_0x000107c5fb78();
    func_0x000107c6142c(puVar6);
    func_0x000107c5fb78(0x6e65746e6f63202c,0xee00203a4c525574);
    func_0x000107c5fb78(lVar9,param_2);
    func_0x000107c6142c(param_2);
  }
  func_0x000107c61170(uVar11);
  func_0x000107c6142c(uStackY_70);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x98);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xb0));
  func_0x000107c615c0(uVar11);
                    /* WARNING: Could not recover jumptable at 0x0001016f7264. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}



/* Entry: 1016f73e4; end: 1016f7483;  */

void FUN_1016f73e4(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 200));
  uVar1 = *(undefined8 *)(unaff_x22 + 0x98);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xb0));
  func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001016f7428. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}



/* Entry: 1016f7484; end: 1016f796f;  */

void FUN_1016f7484(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  int iVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long unaff_x22;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  if (*(ulong *)(unaff_x22 + 0x108) >> 0x3c < 0xf) {
    lVar5 = *(long *)(unaff_x22 + 0xc0);
    func_0x0001000834e4(unaff_x22 + 0x10);
    func_0x000107c3e1b0();
    if (lVar5 == 0) {
LAB_1016f75c0:
      uVar14 = 0;
    }
    else {
      lVar5 = *(long *)(unaff_x22 + 0xc0);
      func_0x000107c3e1ac();
      func_0x000107c61180();
      if (lVar5 == 0) goto LAB_1016f75c0;
      uStack_78 = 0;
      uVar14 = 0;
      FUN_1016f9d20(0);
      func_0x000107c5fc50(lVar5,&uStack_78,uVar14);
      func_0x000107c61170(lVar5);
      uVar14 = uStack_78;
    }
    lVar13 = *(long *)(unaff_x22 + 0xc0);
    func_0x000100083b20(unaff_x22 + 0x38);
    lVar5 = *(long *)(unaff_x22 + 0x58);
    func_0x0001000a8868(unaff_x22 + 0x38,*(undefined8 *)(unaff_x22 + 0x50));
    func_0x000107c4d2ac();
    func_0x000107c61180();
    if (lVar13 == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1016f7968);
      (*pcVar4)();
    }
    lVar12 = lVar13;
    (**(code **)(lVar5 + 8))();
    func_0x000107c61170(lVar13);
    func_0x000107c6142c(uVar14);
    if (lVar12 != 0) {
      iVar10 = (int)*(undefined8 *)(unaff_x22 + 0xc0);
      func_0x0001000834e4(unaff_x22 + 0x38);
      func_0x000107c44bd8();
      if (iVar10 == 0) {
        uVar14 = *(undefined8 *)(unaff_x22 + 0x100);
        uVar11 = *(undefined8 *)(unaff_x22 + 0x108);
        uVar15 = *(undefined8 *)(unaff_x22 + 0xe0);
        uVar2 = *(undefined8 *)(unaff_x22 + 0xe8);
        uVar1 = *(undefined8 *)(unaff_x22 + 0xd0);
        uVar3 = *(undefined8 *)(unaff_x22 + 0xd8);
        uVar18 = *(undefined8 *)(unaff_x22 + 0xc0);
        (**(code **)(*(long *)(unaff_x22 + 0xa8) + 8))
                  (*(undefined8 *)(unaff_x22 + 0xb0),*(undefined8 *)(unaff_x22 + 0xa0));
        func_0x0001000b44c0(uVar15,uVar2);
        func_0x0001000b44c0(uVar1,uVar3);
        func_0x0001000b44c0(uVar14,uVar11);
        func_0x000107c61170(uVar18);
      }
      else {
        lVar5 = *(long *)(unaff_x22 + 0xc0);
        func_0x000107c5cfd0();
        func_0x000107c61180();
        if (lVar5 == 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1016f7970);
          (*pcVar4)();
        }
        uVar14 = *(undefined8 *)(unaff_x22 + 0x100);
        uVar11 = *(undefined8 *)(unaff_x22 + 0x108);
        uVar15 = *(undefined8 *)(unaff_x22 + 0xe0);
        uVar2 = *(undefined8 *)(unaff_x22 + 0xe8);
        uVar1 = *(undefined8 *)(unaff_x22 + 0xd0);
        uVar3 = *(undefined8 *)(unaff_x22 + 0xd8);
        uVar16 = *(undefined8 *)(unaff_x22 + 0xc0);
        lVar13 = *(long *)(unaff_x22 + 0xa8);
        uVar18 = *(undefined8 *)(unaff_x22 + 0xb0);
        uVar9 = *(undefined8 *)(unaff_x22 + 0xa0);
        lVar6 = lVar5;
        func_0x000107c4f898();
        func_0x000107c4d158(lVar5);
        lVar7 = lVar5;
        func_0x000107c4f89c(lVar5);
        puVar8 = PTR_PTR_1126a7a20;
        func_0x000107c610f8(PTR_PTR_1126a7a20);
        func_0x000107c4824c((double)(int)lVar6,(double)(int)lVar7);
        func_0x000107c61170(lVar5);
        func_0x000107c5a084(lVar12);
        func_0x0001000b44c0(uVar15,uVar2);
        func_0x0001000b44c0(uVar1,uVar3);
        func_0x0001000b44c0(uVar14,uVar11);
        func_0x000107c61170(uVar16);
        func_0x000107c61170(puVar8);
        (**(code **)(lVar13 + 8))(uVar18,uVar9);
      }
      goto LAB_1016f78d0;
    }
    uVar14 = *(undefined8 *)(unaff_x22 + 0x100);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x108);
    uVar15 = *(undefined8 *)(unaff_x22 + 0xe0);
    uVar2 = *(undefined8 *)(unaff_x22 + 0xe8);
    uVar1 = *(undefined8 *)(unaff_x22 + 0xd0);
    uVar3 = *(undefined8 *)(unaff_x22 + 0xd8);
    uVar17 = *(undefined8 *)(unaff_x22 + 0xc0);
    lVar5 = *(long *)(unaff_x22 + 0xa8);
    uVar18 = *(undefined8 *)(unaff_x22 + 0xb0);
    uVar9 = *(undefined8 *)(unaff_x22 + 0xa0);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x80);
    func_0x0001000834e4(unaff_x22 + 0x38);
    uStack_78 = 0;
    uStack_70 = 0xe000000000000000;
    func_0x000107c602fc(0x2c);
    func_0x000107c6142c(uStack_70);
    uStack_78 = 0xd00000000000002a;
    uStack_70 = 0x800000010efb8900;
    *(undefined8 *)(unaff_x22 + 0x78) = uVar16;
    puVar8 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068;
    func_0x000107c6057c(PTR___ss6UInt64VN_11034f048,
                        PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068);
    func_0x000107c5fb78();
    func_0x000107c6142c(puVar8);
    func_0x0001000b44c0(uVar15,uVar2);
    func_0x0001000b44c0(uVar1,uVar3);
    func_0x0001000b44c0(uVar14,uVar11);
    func_0x000107c61170(uVar17);
    func_0x000107c6142c(uStack_70);
    (**(code **)(lVar5 + 8))(uVar18,uVar9);
  }
  else {
    uVar14 = *(undefined8 *)(unaff_x22 + 0xe0);
    uVar1 = *(undefined8 *)(unaff_x22 + 0xe8);
    uVar15 = *(undefined8 *)(unaff_x22 + 0xd0);
    uVar11 = *(undefined8 *)(unaff_x22 + 0xd8);
    (**(code **)(*(long *)(unaff_x22 + 0xa8) + 8))
              (*(undefined8 *)(unaff_x22 + 0xb0),*(undefined8 *)(unaff_x22 + 0xa0));
    func_0x0001000b44c0(uVar14,uVar1);
    func_0x0001000b44c0(uVar15,uVar11);
    func_0x0001000834e4(unaff_x22 + 0x10);
    lVar5 = *(long *)(unaff_x22 + 0xc0);
    func_0x000107c4d2ac();
    func_0x000107c61180();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1016f7964);
      (*pcVar4)();
    }
    lVar13 = lVar5;
    func_0x000107c42794();
    func_0x000107c61180();
    func_0x000107c61170(lVar5);
    if (lVar13 == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1016f796c);
      (*pcVar4)();
    }
    lVar5 = lVar13;
    func_0x000107c40500();
    func_0x000107c61180();
    func_0x000107c61170(lVar13);
    if (lVar5 == 0) {
      uVar11 = 0xe300000000000000;
      lVar13 = 0x6c696e;
    }
    else {
      lVar13 = lVar5;
      func_0x000107c5faec(lVar5);
      func_0x000107c61170(lVar5);
    }
    uVar14 = *(undefined8 *)(unaff_x22 + 0xc0);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x80);
    uStack_78 = 0;
    uStack_70 = 0xe000000000000000;
    func_0x000107c602fc(0x38);
    func_0x000107c5fb78(0xd000000000000026,0x800000010efb88d0);
    *(undefined8 *)(unaff_x22 + 0x68) = uVar15;
    puVar8 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068;
    func_0x000107c6057c(PTR___ss6UInt64VN_11034f048,
                        PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068);
    func_0x000107c5fb78();
    func_0x000107c6142c(puVar8);
    func_0x000107c5fb78(0x6e65746e6f63202c,0xee00203a4c525574);
    func_0x000107c5fb78(lVar13,uVar11);
    func_0x000107c6142c(uVar11);
    func_0x000107c61170(uVar14);
    func_0x000107c6142c(uStack_70);
  }
  lVar12 = 0;
LAB_1016f78d0:
  uVar14 = *(undefined8 *)(unaff_x22 + 0x98);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xb0));
  func_0x000107c615c0(uVar14);
                    /* WARNING: Could not recover jumptable at 0x0001016f790c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(lVar12);
  return;
}



/* Entry: 1016f7970; end: 1016f79f7;  */

void FUN_1016f7970(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7,long param_8)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  plVar4 = (long *)0x110;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x20) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_1016f79f8;
  plVar4[0x11] = param_3;
  plVar4[0x12] = param_5;
  plVar4[0x10] = param_7;
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  uVar1 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x13] = uVar1;
  lVar2 = 0;
  func_0x000107c5ede0();
  plVar4[0x14] = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  plVar4[0x15] = lVar2;
  uVar1 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x16] = uVar1;
  plVar3 = (long *)0x160;
  func_0x000107c615b8();
  plVar4[0x17] = (long)plVar3;
  *plVar3 = (long)plVar4;
  plVar3[1] = (long)FUN_1016f6eac;
  plVar3[0x22] = param_4;
  plVar3[0x23] = param_6;
  plVar3[0x20] = 0;
  plVar3[0x21] = 0;
  plVar3[0x1e] = param_8;
  plVar3[0x1f] = 0;
  plVar3[0x1d] = param_7;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1016f94fc,0,0);
  return;
}



/* Entry: 1016f79f8; end: 1016f7a47;  */

void FUN_1016f79f8(undefined8 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x28) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1016f7a48,0,0);
  return;
}



/* Entry: 1016f7a48; end: 1016f7a8b;  */

void FUN_1016f7a48(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x28);
  *(undefined8 *)(unaff_x22 + 0x10) = uVar1;
  func_0x000100b60084();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001016f7a88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1016f7a8c; end: 1016f7b1b;  */

void FUN_1016f7a8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0xc0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1016fa6ec;
                    /* WARNING: Could not recover jumptable at 0x0001016f7b18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_1016f9eb0(param_1,param_2,param_4,param_5,param_6);
  return;
}



/* Entry: 1016f7b1c; end: 1016f7b97;  */

void FUN_1016f7b1c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *unaff_x20;
  long unaff_x22;
  
  lVar5 = *unaff_x20;
  lVar2 = unaff_x20[1];
  lVar1 = unaff_x20[2];
  lVar3 = unaff_x20[3];
  plVar7 = (long *)0x110;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_1016f7b98;
  plVar7[0x11] = lVar5;
  plVar7[0x12] = lVar1;
  plVar7[0x10] = param_1;
  lVar5 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  uVar4 = *(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar7[0x13] = uVar4;
  lVar5 = 0;
  func_0x000107c5ede0();
  plVar7[0x14] = lVar5;
  lVar5 = *(long *)(lVar5 + -8);
  plVar7[0x15] = lVar5;
  uVar4 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar7[0x16] = uVar4;
  plVar6 = (long *)0x160;
  func_0x000107c615b8();
  plVar7[0x17] = (long)plVar6;
  *plVar6 = (long)plVar7;
  plVar6[1] = (long)FUN_1016f6eac;
  plVar6[0x22] = lVar2;
  plVar6[0x23] = lVar3;
  plVar6[0x20] = 0;
  plVar6[0x21] = 0;
  plVar6[0x1e] = param_2;
  plVar6[0x1f] = 0;
  plVar6[0x1d] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1016f94fc,0,0);
  return;
}



/* Entry: 1016f7b98; end: 1016f7bdb;  */

void FUN_1016f7b98(undefined8 param_1)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001016f7bd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(param_1);
  return;
}



/* Entry: 1016f7bdc; end: 1016f7d23;  */

undefined8
FUN_1016f7bdc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 *unaff_x20;
  
  uVar6 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar1 = unaff_x20[2];
  uVar3 = unaff_x20[3];
  func_0x0001000285a8(0x112dc31e8,&UNK_10d9804e8);
  func_0x000107c613fc();
  lVar4 = 0;
  func_0x00010095c380();
  puVar5 = &UNK_1103fc2a8;
  func_0x000107c613fc(&UNK_1103fc2a8,0x48,7);
  *(long *)(puVar5 + 0x10) = lVar4;
  *(undefined8 *)(puVar5 + 0x18) = uVar6;
  *(undefined8 *)(puVar5 + 0x20) = uVar2;
  *(undefined8 *)(puVar5 + 0x28) = uVar1;
  *(undefined8 *)(puVar5 + 0x30) = uVar3;
  *(undefined8 *)(puVar5 + 0x38) = param_1;
  *(undefined8 *)(puVar5 + 0x40) = param_2;
  func_0x000107c6157c(lVar4);
  func_0x000107c6157c(uVar6);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar3);
  func_0x000107c61434(param_2);
  func_0x0001001ca524(param_3,param_4,param_5,4,0,0,&UNK_10d9805b0,puVar5,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(param_3);
  uVar6 = *(undefined8 *)(lVar4 + 0x10);
  func_0x000107c6157c(uVar6);
  func_0x000107c61574(lVar4);
  return uVar6;
}



/* Entry: 1016f7d24; end: 1016f7daf;  */

void FUN_1016f7d24(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 8);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0xc0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1016f7db0;
                    /* WARNING: Could not recover jumptable at 0x0001016f7dac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_1016f9eb0(param_1,param_2,uVar1,uVar2,uVar4);
  return;
}



/* Entry: 1016f7db0; end: 1016f7df7;  */

void FUN_1016f7db0(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001016f7df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1016f7df8; end: 1016f7e27;  */

void FUN_1016f7df8(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 1016f7e28; end: 1016f7f3b;  */

undefined8 FUN_1016f7e28(undefined8 param_1,ulong param_2,ulong param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined1 auStack_80 [24];
  undefined8 uStack_68;
  long lStack_60;
  undefined *puStack_58;
  
  puStack_58 = PTR___swiftEmptySetSingleton_11034f1d8;
  uVar3 = param_3;
  if ((param_2 & 1) != 0) {
    FUN_1016f8298(auStack_80,0);
  }
  if ((param_3 & 1) != 0) {
    FUN_1016f8298(auStack_80,1);
  }
  func_0x000100083b20(auStack_80);
  uVar2 = uStack_68;
  func_0x0001000a8868(auStack_80,uStack_68);
  puVar1 = puStack_58;
  func_0x000107c61174(param_4);
  func_0x00010007c020();
  (**(code **)(lStack_60 + 0x10))(param_1,puVar1,param_4,uVar2,uVar3,uStack_68,lStack_60);
  func_0x00010007d980(param_4,uVar2,uVar3);
  func_0x00010488b298();
  func_0x000107c6142c(puVar1);
  func_0x000107c61574(param_1);
  func_0x0001000834e4(auStack_80);
  return param_4;
}



/* Entry: 1016f7f3c; end: 1016f7fb7; -[_TtC19SCMusicServicesImpl20MusicTrackLoaderImpl getTrackWithID:requestArtist:requestSubtextInfo:attribution:] */

void FUN_1016f7f3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  func_0x000107c61174(param_6);
  func_0x000107c6157c(param_1);
  FUN_1016f7e28(param_3,param_4,param_5,param_6);
  func_0x000107c61170(param_6);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1016f7fb8; end: 1016f80ef;  */

undefined8
FUN_1016f7fb8(undefined8 param_1,ulong param_2,ulong param_3,ulong param_4,undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined1 auStack_80 [24];
  undefined8 uStack_68;
  long lStack_60;
  undefined *puStack_58;
  
  puStack_58 = PTR___swiftEmptySetSingleton_11034f1d8;
  uVar3 = param_3;
  if ((param_2 & 1) != 0) {
    FUN_1016f8298(auStack_80,0);
  }
  if ((param_3 & 1) != 0) {
    FUN_1016f8298(auStack_80,1);
  }
  if ((param_4 & 1) != 0) {
    FUN_1016f8298(auStack_80,2);
  }
  func_0x000100083b20(auStack_80);
  uVar2 = uStack_68;
  func_0x0001000a8868(auStack_80,uStack_68);
  puVar1 = puStack_58;
  func_0x000107c61174(param_5);
  func_0x00010007c020();
  (**(code **)(lStack_60 + 0x10))(param_1,puVar1,param_5,uVar2,uVar3,uStack_68,lStack_60);
  func_0x00010007d980(param_5,uVar2,uVar3);
  func_0x00010488b298();
  func_0x000107c6142c(puVar1);
  func_0x000107c61574(param_1);
  func_0x0001000834e4(auStack_80);
  return param_5;
}



/* Entry: 1016f80f0; end: 1016f8173; -[_TtC19SCMusicServicesImpl20MusicTrackLoaderImpl getTrackWithID:requestArtist:requestSubtextInfo:requestTrendingChartEntry:attribution:] */

void FUN_1016f80f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  func_0x000107c61174(param_7);
  func_0x000107c6157c(param_1);
  FUN_1016f7fb8(param_3,param_4,param_5,param_6,param_7);
  func_0x000107c61170(param_7);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1016f8174; end: 1016f8273; -[_TtC19SCMusicServicesImpl20MusicTrackLoaderImpl getTrackWithID:attribution:] */

void FUN_1016f8174(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_88 [24];
  undefined8 uStack_70;
  long lStack_68;
  
  uVar3 = param_3;
  func_0x000107c61174(param_4);
  func_0x000107c6157c(param_1);
  func_0x000100083b20(auStack_88);
  uVar2 = uStack_70;
  func_0x0001000a8868(auStack_88,uStack_70);
  func_0x000107c61174(param_4);
  uVar1 = param_4;
  func_0x00010007c020();
  (**(code **)(lStack_68 + 0x10))
            (param_3,PTR___swiftEmptySetSingleton_11034f1d8,uVar1,uVar2,uVar3,uStack_70,lStack_68);
  func_0x00010007d980(uVar1,uVar2,uVar3);
  func_0x00010488b298();
  func_0x000107c61574(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61574(param_1);
  func_0x0001000834e4(auStack_88);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1016f8274; end: 1016f8297;  */

void FUN_1016f8274(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1016f8298; end: 1016f8383;  */

undefined8 FUN_1016f8298(undefined1 *param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *unaff_x20;
  long lVar4;
  long alStack_88 [9];
  
  lVar4 = *unaff_x20;
  func_0x000107c6068c(alStack_88,*(undefined8 *)(lVar4 + 0x28));
  uVar1 = param_2 & 0xff;
  func_0x000107c60690();
  func_0x000107c606a8();
  uVar3 = -1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f);
  uVar1 = uVar1 & (uVar3 ^ 0xffffffffffffffff);
  if ((*(ulong *)(lVar4 + 0x38 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) != 0) {
    do {
      if ((uint)*(byte *)(*(long *)(lVar4 + 0x30) + uVar1) == ((uint)param_2 & 0xff)) {
        uVar2 = 0;
        goto LAB_1016f8368;
      }
      uVar1 = uVar1 + 1 & ~uVar3;
    } while ((*(ulong *)(lVar4 + 0x38 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) != 0);
  }
  lVar4 = *unaff_x20;
  func_0x000107c61558(lVar4);
  alStack_88[0] = *unaff_x20;
  FUN_1016f8384(param_2,uVar1,lVar4);
  *unaff_x20 = alStack_88[0];
  uVar2 = 1;
LAB_1016f8368:
  *param_1 = (char)param_2;
  return uVar2;
}



/* Entry: 1016f8384; end: 1016f84b3;  */

void FUN_1016f8384(byte param_1,ulong param_2,uint param_3)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long *unaff_x20;
  long lVar5;
  undefined1 auStack_78 [72];
  
  uVar4 = (ulong)(uint)param_1;
  uVar3 = *(ulong *)(*unaff_x20 + 0x10);
  if (uVar3 < *(ulong *)(*unaff_x20 + 0x18)) {
    if ((param_3 & 1) == 0) {
      FUN_1016f86c4();
    }
  }
  else {
    if ((param_3 & 1) == 0) {
      FUN_1016f84b4(uVar3 + 1);
    }
    else {
      FUN_1016f8804();
    }
    lVar5 = *unaff_x20;
    func_0x000107c6068c(auStack_78,*(undefined8 *)(lVar5 + 0x28));
    func_0x000107c60690();
    func_0x000107c606a8();
    uVar3 = -1L << ((ulong)*(byte *)(lVar5 + 0x20) & 0x3f);
    param_2 = uVar4 & (uVar3 ^ 0xffffffffffffffff);
    if ((*(ulong *)(lVar5 + 0x38 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0) {
      do {
        if ((uint)*(byte *)(*(long *)(lVar5 + 0x30) + param_2) == (uint)param_1) {
          func_0x000107c60620(&UNK_11072df98);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1016f84b4);
          (*pcVar1)();
        }
        param_2 = param_2 + 1 & ~uVar3;
      } while ((*(ulong *)(lVar5 + 0x38 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0);
    }
  }
  lVar2 = *unaff_x20;
  lVar5 = lVar2 + (param_2 >> 6) * 8;
  *(ulong *)(lVar5 + 0x38) = *(ulong *)(lVar5 + 0x38) | 1L << (param_2 & 0x3f);
  *(byte *)(*(long *)(lVar2 + 0x30) + param_2) = param_1;
  if (!SCARRY8(*(long *)(lVar2 + 0x10),1)) {
    *(long *)(lVar2 + 0x10) = *(long *)(lVar2 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1016f84a4);
  (*pcVar1)();
}



/* Entry: 1016f84b4; end: 1016f86c3;  */

void FUN_1016f84b4(long param_1)

{
  long lVar1;
  byte bVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long *unaff_x20;
  long lVar13;
  ulong uVar14;
  long lVar15;
  undefined1 auStack_a8 [72];
  
  lVar13 = *unaff_x20;
  lVar1 = *(long *)(lVar13 + 0x18);
  if (*(long *)(lVar13 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar5 = 0x112dc3298;
  func_0x0001000285a8(0x112dc3298,&UNK_10d9e4e00);
  lVar6 = lVar13;
  func_0x000107c602e0(lVar13,lVar1,0,uVar5);
  if (*(long *)(lVar13 + 0x10) == 0) {
LAB_1016f868c:
    func_0x000107c61574(lVar13);
    *unaff_x20 = lVar6;
    return;
  }
  uVar10 = 1L << ((ulong)*(byte *)(lVar13 + 0x20) & 0x3f);
  uVar12 = 0xffffffffffffffff;
  if ((*(byte *)(lVar13 + 0x20) & 0x3f) < 6) {
    uVar12 = ~(-1L << (uVar10 & 0x3f));
  }
  uVar12 = uVar12 & *(ulong *)(lVar13 + 0x38);
  lVar1 = lVar6 + 0x38;
  lVar8 = 0;
  do {
    if (uVar12 == 0) {
      do {
        lVar15 = lVar8 + 1;
        if (SCARRY8(lVar8,1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1016f86c0);
          (*pcVar4)();
        }
        if ((long)(uVar10 + 0x3f >> 6) <= lVar15) goto LAB_1016f868c;
        uVar12 = ((ulong *)(lVar13 + 0x38))[lVar15];
        lVar8 = lVar8 + 1;
      } while (uVar12 == 0);
      uVar7 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
      uVar12 = uVar12 - 1 & uVar12;
    }
    else {
      uVar7 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
      uVar12 = uVar12 - 1 & uVar12;
      lVar15 = lVar8;
    }
    bVar2 = *(byte *)(*(long *)(lVar13 + 0x30) + (LZCOUNT(uVar7) | lVar15 << 6));
    uVar14 = (ulong)bVar2;
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar6 + 0x28));
    func_0x000107c60690();
    func_0x000107c606a8();
    uVar11 = -1L << ((ulong)*(byte *)(lVar6 + 0x20) & 0x3f);
    uVar14 = uVar14 & (uVar11 ^ 0xffffffffffffffff);
    uVar9 = uVar14 >> 6;
    uVar7 = -1L << (uVar14 & 0x3f) & (*(ulong *)(lVar1 + uVar9 * 8) ^ 0xffffffffffffffff);
    if (uVar7 == 0) {
      bVar3 = false;
      uVar7 = 0x3f - uVar11 >> 6;
      do {
        uVar14 = uVar9 + 1;
        if ((uVar14 == uVar7) && (bVar3)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1016f86c4);
          (*pcVar4)();
        }
        uVar9 = 0;
        if (uVar14 != uVar7) {
          uVar9 = uVar14;
        }
        bVar3 = (bool)(uVar14 == uVar7 | bVar3);
        uVar14 = *(ulong *)(lVar1 + uVar9 * 8);
      } while (uVar14 == 0xffffffffffffffff);
      uVar14 = ~uVar14;
      uVar7 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) | uVar9 << 6;
    }
    else {
      uVar7 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) | uVar14 & 0x7fffffffffffffc0;
    }
    uVar9 = uVar7 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar9) = 1L << (uVar7 & 0x3f) | *(ulong *)(lVar1 + uVar9);
    *(byte *)(*(long *)(lVar6 + 0x30) + uVar7) = bVar2;
    *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
    lVar8 = lVar15;
  } while( true );
}


