/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100fe3f08; end: 100fe3f27;  */

void FUN_100fe3f08(long param_1)

{
  if (param_1 == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)();
  return;
}



/* Entry: 100fe3f28; end: 100fe417b;  */

uint FUN_100fe3f28(ulong param_1,ulong param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  uint uVar8;
  ulong uVar9;
  ulong *puVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  
  if (param_1 >> 0x3e == 0) {
    uVar9 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar9 = param_1 & 0xffffffffffffff8;
    if ((param_1 & 0x8000000000000000) != 0) {
      uVar9 = param_1;
    }
    func_0x000107c60480();
  }
  if (param_2 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_2 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_2 & 0xffffffffffffff8;
    if ((param_2 & 0x8000000000000000) != 0) {
      uVar2 = param_2;
    }
    func_0x000107c60480();
  }
  if (uVar9 == uVar2) {
    if (uVar9 != 0) {
      uVar5 = param_1 & 0xffffffffffffff8;
      uVar2 = uVar5;
      if ((param_1 & 0x8000000000000000) != 0) {
        uVar2 = param_1;
      }
      uVar3 = uVar5 + 0x20;
      if (param_1 >> 0x3e != 0) {
        uVar3 = uVar2;
      }
      uVar6 = param_2 & 0xffffffffffffff8;
      uVar2 = uVar6;
      if ((param_2 & 0x8000000000000000) != 0) {
        uVar2 = param_2;
      }
      uVar4 = uVar6 + 0x20;
      if (param_2 >> 0x3e != 0) {
        uVar4 = uVar2;
      }
      if (uVar3 != uVar4) {
        if ((long)uVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100fe417c);
          (*pcVar1)();
        }
        func_0x000100fe46c4(0,0x112d530b0,&PTR_PTR_1126d8840);
        if (((param_2 | param_1) & 0xc000000000000001) == 0) {
          lVar12 = *(long *)(uVar5 + 0x10);
          lVar13 = *(long *)(uVar6 + 0x10);
          puVar10 = (ulong *)(param_1 + 0x20);
          puVar11 = (undefined8 *)(param_2 + 0x20);
          do {
            uVar9 = uVar9 - 1;
            if (lVar12 == 0) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x100fe411c);
              (*pcVar1)();
            }
            if (lVar13 == 0) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x100fe4120);
              (*pcVar1)();
            }
            uVar5 = *puVar10;
            uVar7 = *puVar11;
            func_0x000107c61174();
            func_0x000107c61174(uVar7);
            uVar2 = uVar5;
            func_0x000107c60118(uVar5,uVar7);
            uVar8 = (uint)uVar2;
            func_0x000107c61170(uVar5);
            func_0x000107c61170(uVar7);
            if ((uVar2 & 1) == 0) break;
            lVar13 = lVar13 + -1;
            lVar12 = lVar12 + -1;
            puVar10 = puVar10 + 1;
            puVar11 = puVar11 + 1;
          } while (uVar9 != 0);
        }
        else {
          lVar12 = 4;
          do {
            uVar9 = uVar9 - 1;
            uVar2 = lVar12 - 4;
            if ((param_1 & 0xc000000000000001) == 0) {
              if (*(long *)(uVar5 + 0x10) <= (long)uVar2) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x100fe4124);
                (*pcVar1)();
              }
              uVar3 = *(ulong *)(param_1 + lVar12 * 8);
              func_0x000107c61174();
              if ((param_2 & 0xc000000000000001) == 0) goto LAB_100fe4044;
LAB_100fe4014:
              FUN_100ff3f74(uVar2,param_2);
            }
            else {
              uVar3 = uVar2;
              FUN_100ff3f74(uVar2,param_1);
              if ((param_2 & 0xc000000000000001) != 0) goto LAB_100fe4014;
LAB_100fe4044:
              if (*(long *)(uVar6 + 0x10) <= (long)uVar2) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x100fe4128);
                (*pcVar1)();
              }
              uVar2 = *(ulong *)(param_2 + lVar12 * 8);
              func_0x000107c61174(uVar2);
            }
            uVar4 = uVar3;
            func_0x000107c60118(uVar3,uVar2);
            uVar8 = (uint)uVar4;
            func_0x000107c61170(uVar3);
            func_0x000107c61170(uVar2);
          } while (((uVar4 & 1) != 0) && (lVar12 = lVar12 + 1, uVar9 != 0));
        }
        goto LAB_100fe4154;
      }
    }
    uVar8 = 1;
  }
  else {
    uVar8 = 0;
  }
LAB_100fe4154:
  return uVar8 & 1;
}



/* Entry: 100fe417c; end: 100fe41ab;  */

void FUN_100fe417c(undefined8 *param_1,ulong *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long unaff_x20;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
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
  undefined1 uStack_68;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar10 = *param_2;
  if (uVar10 >> 0x3e == 0) {
    uVar11 = *(ulong *)((uVar10 & 0xffffffffffffff8) + 0x10);
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar11 = uVar10 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar10) {
      uVar11 = uVar10;
    }
    func_0x000107c60480();
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar8;
  if (uVar11 != 0) {
    uVar12 = 0;
    do {
      if ((uVar10 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar10 & 0xffffffffffffff8) + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100fe3d48);
          (*pcVar4)();
        }
        uVar5 = *(ulong *)(uVar10 + uVar12 * 8 + 0x20);
        func_0x000107c61174(uVar5);
      }
      else {
        uVar5 = uVar12;
        func_0x000100ff3f88(uVar12,uVar10);
      }
      uVar1 = uVar12 + 1;
      if (SCARRY8(uVar12,1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100fe3d44);
        (*pcVar4)();
      }
      FUN_100ff3780(&uStack_b8,uVar2);
      func_0x000107c61170(uVar5);
      puVar6 = puVar8;
      func_0x000107c61558();
      puVar7 = puVar8;
      if (((ulong)puVar6 & 1) == 0) {
        puVar7 = (undefined *)0x0;
        FUN_100fe2a54(0,*(long *)(puVar8 + 0x10) + 1,1,puVar8);
      }
      uVar5 = *(ulong *)(puVar7 + 0x10);
      puVar8 = puVar7;
      if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar5) {
        puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
        FUN_100fe2a54(puVar8,uVar5 + 1,1,puVar7);
      }
      *(ulong *)(puVar8 + 0x10) = uVar5 + 1;
      *(undefined8 *)(puVar8 + uVar5 * 0x58 + 0x28) = uStack_b0;
      *(undefined8 *)(puVar8 + uVar5 * 0x58 + 0x20) = uStack_b8;
      *(undefined8 *)(puVar8 + uVar5 * 0x58 + 0x38) = uStack_a0;
      *(undefined8 *)(puVar8 + uVar5 * 0x58 + 0x30) = uStack_a8;
      puVar8[uVar5 * 0x58 + 0x70] = uStack_68;
      *(undefined8 *)(puVar8 + uVar5 * 0x58 + 0x58) = uStack_80;
      *(undefined8 *)(puVar8 + uVar5 * 0x58 + 0x50) = uStack_88;
      *(undefined8 *)(puVar8 + uVar5 * 0x58 + 0x68) = uStack_70;
      *(undefined8 *)(puVar8 + uVar5 * 0x58 + 0x60) = uStack_78;
      *(undefined8 *)(puVar8 + uVar5 * 0x58 + 0x48) = uStack_90;
      *(undefined8 *)(puVar8 + uVar5 * 0x58 + 0x40) = uStack_98;
      uVar12 = uVar12 + 1;
    } while (uVar1 != uVar11);
  }
  FUN_100fe4454(uVar9,uVar3,puVar8);
  func_0x000107c6142c(puVar8);
  *param_1 = uVar9;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  return;
}



/* Entry: 100fe41ac; end: 100fe4223;  */

void FUN_100fe41ac(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    func_0x000100fe46c4(0,param_1,param_2);
    if (lVar3 != 0) {
      param_3 = (ulong *)0x112d36e60;
      param_4 = (long *)&UNK_10d901170;
    }
  }
  if (*param_3 == 0 || (*param_3 & 1) != 0) {
    puVar2 = (undefined *)((long)param_4 + (long)(int)*param_4);
    func_0x000107c61518(puVar2,*param_4 >> 0x20,0,0);
    *param_3 = (ulong)puVar2;
  }
  return;
}



/* Entry: 100fe4224; end: 100fe4247;  */

void FUN_100fe4224(void)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong *puVar4;
  long *plVar5;
  
  puVar4 = (ulong *)0x112d530c0;
  plVar5 = (long *)&UNK_10daabb90;
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    func_0x000100fe46c4(0,0x112d530c8,&PTR_PTR_1126affc8);
    if (lVar3 != 0) {
      puVar4 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
    }
  }
  if (*puVar4 == 0 || (*puVar4 & 1) != 0) {
    puVar2 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar2,*plVar5 >> 0x20,0,0);
    *puVar4 = (ulong)puVar2;
  }
  return;
}



/* Entry: 100fe4248; end: 100fe4453;  */

void FUN_100fe4248(long param_1)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *unaff_x20;
  ulong uVar5;
  long lVar6;
  
  uVar5 = *(ulong *)(param_1 + 0x10);
  lVar4 = *unaff_x20;
  lVar6 = *(long *)(lVar4 + 0x10);
  if (SCARRY8(lVar6,uVar5)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100fe4338);
    (*pcVar1)();
  }
  lVar2 = lVar4;
  func_0x000107c61558();
  if (((int)lVar2 == 0) ||
     (uVar3 = *(ulong *)(lVar4 + 0x18) >> 1, (long)uVar3 < (long)(lVar6 + uVar5))) {
    FUN_100fe2a54();
    uVar3 = *(ulong *)(lVar2 + 0x18) >> 1;
    lVar6 = *(long *)(param_1 + 0x10);
    lVar4 = lVar2;
  }
  else {
    lVar6 = *(long *)(param_1 + 0x10);
  }
  if (lVar6 == 0) {
    func_0x000107c6142c(param_1);
    if (uVar5 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100fe433c);
      (*pcVar1)();
    }
  }
  else {
    if (uVar3 - *(long *)(lVar4 + 0x10) < uVar5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100fe4340);
      (*pcVar1)();
    }
    func_0x000107c6140c(lVar4 + *(long *)(lVar4 + 0x10) * 0x58 + 0x20,param_1 + 0x20,uVar5,
                        &UNK_110376178);
    func_0x000107c6142c(param_1);
    if (uVar5 != 0) {
      if (SCARRY8(*(long *)(lVar4 + 0x10),uVar5)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100fe4344);
        (*pcVar1)();
      }
      *(ulong *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + uVar5;
    }
  }
  *unaff_x20 = lVar4;
  return;
}



/* Entry: 100fe4454; end: 100fe45ab;  */

long FUN_100fe4454(ulong param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  code *pcVar6;
  
  if (((param_1 == 0) && (param_2 == -0x2000000000000000)) ||
     (uVar2 = param_1, func_0x000107c605b8(param_1,param_2,0,0xe000000000000000,0), (uVar2 & 1) != 0
     )) {
    func_0x000107c61434(param_3);
    lVar3 = param_3;
  }
  else {
    lVar3 = 0x112d52fa0;
    func_0x0001000285a8(0x112d52fa0,&UNK_10d919880);
    pcVar6 = (code *)0x78;
    func_0x000107c613fc();
    *(undefined8 *)(lVar3 + 0x18) = 2;
    *(undefined8 *)(lVar3 + 0x10) = 1;
    if (lRam0000000112d54208 != -1) {
      pcVar6 = FUN_1010011f4;
      func_0x000107c61568(0x112d54208);
    }
    uVar1 = uRam00000001137ff120;
    lVar4 = param_2;
    func_0x000107c61434();
    FUN_10100074c();
    puVar5 = &UNK_110374458;
    func_0x000107c613fc(&UNK_110374458,0x18,7);
    *(undefined8 *)(puVar5 + 0x10) = uVar1;
    *(ulong *)(lVar3 + 0x20) = param_1;
    *(long *)(lVar3 + 0x28) = param_2;
    *(long *)(lVar3 + 0x30) = lVar4;
    *(code **)(lVar3 + 0x38) = pcVar6;
    *(undefined8 *)(lVar3 + 0x40) = 0;
    *(undefined1 *)(lVar3 + 0x48) = 1;
    *(undefined8 *)(lVar3 + 0x50) = 0;
    *(undefined8 *)(lVar3 + 0x58) = 0xe000000000000000;
    *(undefined **)(lVar3 + 0x60) = &UNK_10d919950;
    *(undefined **)(lVar3 + 0x68) = puVar5;
    *(undefined1 *)(lVar3 + 0x70) = 0;
    func_0x000107c61174(uVar1);
    func_0x000107c61434(param_3);
    FUN_100fe4248();
  }
  return lVar3;
}



/* Entry: 100fe45ac; end: 100fe4617;  */

void FUN_100fe45ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  long *plVar1;
  long unaff_x20;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  plVar1 = (long *)0x10;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100fe4618;
  UNRECOVERED_JUMPTABLE = (code *)plVar1[1];
  func_0x000107c61174(param_1,param_2,param_3,uVar2);
                    /* WARNING: Could not recover jumptable at 0x000100fe327c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar2);
  return;
}



/* Entry: 100fe4618; end: 100fe465b;  */

void FUN_100fe4618(undefined8 param_1)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000100fe4658. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(param_1);
  return;
}



/* Entry: 100fe465c; end: 100fe4677;  */

void FUN_100fe465c(long param_1,long param_2)

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



/* Entry: 100fe4678; end: 100fe4703;  */

void FUN_100fe4678(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = **(undefined8 **)(unaff_x20 + 0x10);
  **(undefined8 **)(unaff_x20 + 0x10) = param_1;
  func_0x000107c61174();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100fe4704; end: 100fe4713;  */

void FUN_100fe4704(long param_1,undefined8 param_2)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  func_0x000107c61174(param_2);
  (*pcVar1)();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 100fe4714; end: 100fe494f;  */

void FUN_100fe4714(ulong *param_1,ulong *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 *puVar1;
  ulong uVar2;
  long lVar3;
  code *pcVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long unaff_x20;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  undefined1 auStack_128 [88];
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  undefined1 uStack_80;
  
  uVar10 = *param_2;
  uVar11 = *(ulong *)(uVar10 + 0x10);
  if (uVar11 != 0) {
    uVar12 = 0;
    uVar2 = *(ulong *)(unaff_x20 + 0x38);
    lVar3 = *(long *)(unaff_x20 + 0x40);
    lVar13 = 0x70;
    do {
      uVar5 = *(ulong *)(uVar10 + lVar13 + -0x50);
      lVar7 = *(long *)(uVar10 + lVar13 + -0x48);
      if ((uVar5 == uVar2 && lVar7 == lVar3) ||
         (func_0x000107c605b8(uVar5,lVar7,uVar2,lVar3,0), (uVar5 & 1) != 0)) {
        lVar7 = lRam0000000112d54208;
        func_0x000107c61434(uVar10);
        if (lVar7 != -1) {
          func_0x000107c61568(0x112d54208,FUN_1010011f4);
        }
        uVar6 = uRam00000001137ff120;
        func_0x000107c61174();
        uVar9 = param_4;
        func_0x000100fe55d8(param_3);
        lVar7 = lVar3;
        func_0x000107c61434();
        func_0x000101000818();
        puVar8 = &UNK_110374588;
        func_0x000107c613fc(&UNK_110374588,0x28,7);
        *(undefined8 *)(puVar8 + 0x10) = param_3;
        *(undefined8 *)(puVar8 + 0x18) = param_4;
        *(undefined8 *)(puVar8 + 0x20) = uVar6;
        func_0x000107c61434(param_6);
        uVar11 = uVar10;
        func_0x000107c61558();
        if ((uVar11 & 1) == 0) {
          func_0x000100fe55c4();
        }
        if (*(ulong *)(uVar10 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100fe4950);
          (*pcVar4)();
        }
        puVar1 = (undefined1 *)(uVar10 + lVar13);
        uStack_c8 = *(ulong *)(puVar1 + -0x48);
        uStack_d0 = *(ulong *)(puVar1 + -0x50);
        uStack_b8 = *(ulong *)(puVar1 + -0x38);
        uStack_c0 = *(ulong *)(puVar1 + -0x40);
        uStack_a8 = *(ulong *)(puVar1 + -0x28);
        uStack_b0 = *(ulong *)(puVar1 + -0x30);
        uStack_98 = *(ulong *)(puVar1 + -0x18);
        uStack_a0 = *(ulong *)(puVar1 + -0x20);
        uStack_88 = *(ulong *)(puVar1 + -8);
        uStack_90 = *(ulong *)(puVar1 + -0x10);
        uStack_80 = *puVar1;
        *(ulong *)(puVar1 + -0x50) = uVar2;
        *(long *)(puVar1 + -0x48) = lVar3;
        *(long *)(puVar1 + -0x40) = lVar7;
        *(undefined8 *)(puVar1 + -0x38) = uVar9;
        *(undefined8 *)(puVar1 + -0x30) = 0;
        puVar1[-0x28] = 1;
        *(undefined8 *)(puVar1 + -0x20) = param_5;
        *(undefined8 *)(puVar1 + -0x18) = param_6;
        *(undefined **)(puVar1 + -0x10) = &UNK_10d919a18;
        *(undefined **)(puVar1 + -8) = puVar8;
        *puVar1 = 0;
        FUN_100fe3114(&uStack_d0);
        goto LAB_100fe489c;
      }
      uVar12 = uVar12 + 1;
      lVar13 = lVar13 + 0x58;
    } while (uVar11 != uVar12);
  }
  func_0x000107c61434(uVar10);
LAB_100fe489c:
  uStack_a8 = param_2[6];
  uStack_b0 = param_2[5];
  uStack_98 = param_2[8];
  uStack_a0 = param_2[7];
  uStack_88 = param_2[10];
  uStack_90 = param_2[9];
  uStack_80 = (undefined1)param_2[0xb];
  uStack_c8 = param_2[2];
  uStack_d0 = param_2[1];
  uStack_b8 = param_2[4];
  uStack_c0 = param_2[3];
  FUN_100fe56ac(&uStack_d0,auStack_128);
  *param_1 = uVar10;
  uVar10 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar10;
  uVar10 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = uVar10;
  uVar10 = param_2[9];
  param_1[10] = param_2[10];
  param_1[9] = uVar10;
  *(char *)(param_1 + 0xb) = (char)param_2[0xb];
  uVar10 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar10;
  uVar10 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar10;
  return;
}



/* Entry: 100fe4950; end: 100fe49b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fe4950(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  func_0x0001000834e4(unaff_x20 + 0x10);
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x40));
  lVar1 = _DAT_112d530d0;
  lVar2 = 0x112d50a30;
  func_0x0001000285a8(0x112d50a30,&UNK_10d917400);
  (**(code **)(*(long *)(lVar2 + -8) + 8))(unaff_x20 + lVar1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 100fe49b8; end: 100fe49bf;  */

void FUN_100fe49b8(void)

{
  if (lRam0000000112d53100 != 0) {
    return;
  }
  func_0x000107c614fc(0,&DAT_10e61d5ec);
  return;
}



/* Entry: 100fe49c0; end: 100fe49f7;  */

void FUN_100fe49c0(undefined8 param_1)

{
  if (lRam0000000112d53100 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e61d5ec);
  return;
}



/* Entry: 100fe49f8; end: 100fe4a77;  */

void FUN_100fe49f8(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_38 = &UNK_10d9199a0;
  puStack_30 = &UNK_10d9199b8;
  lVar1 = 0x13f;
  FUN_100fe4a78();
  if (param_2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    func_0x000107c61630(param_1,0x100,3,&puStack_38,param_1 + 0x50);
  }
  return;
}



/* Entry: 100fe4a78; end: 100fe4ac7;  */

void FUN_100fe4a78(undefined8 param_1)

{
  undefined *puVar1;
  
  if (lRam0000000112d50930 != 0) {
    return;
  }
  puVar1 = &UNK_110376b20;
  func_0x000107c5fd44();
  if (puVar1 != (undefined *)0x0) {
    return;
  }
  lRam0000000112d50930 = param_1;
  return;
}



/* Entry: 100fe4ac8; end: 100fe4d67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fe4ac8(undefined8 param_1,long param_2)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long extraout_x8;
  long extraout_x12;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  code *pcVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  long alStack_100 [2];
  undefined *puStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined1 auStack_c8 [40];
  undefined1 auStack_a0 [40];
  undefined1 auStack_78 [24];
  
  lVar4 = 0x112d52f50;
  uStack_d0 = param_1;
  func_0x0001000285a8(0x112d52f50,&UNK_10d919830);
  lVar11 = *(long *)(lVar4 + -8);
  lVar12 = *(long *)(lVar11 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)(lVar12 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0x112d50a30;
  lStack_d8 = (long)&puStack_f0 - extraout_x8;
  func_0x0001000285a8(0x112d50a30,&UNK_10d917400);
  lVar8 = *(long *)(lVar5 + -8);
  lVar16 = *(long *)(lVar8 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar15 = ((long)&puStack_f0 - extraout_x8) - (lVar16 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = lVar15 - extraout_x12;
  func_0x000107c61428(param_2 + 0x10,auStack_78,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 == 0) {
    func_0x000107c5fd2c(lVar4);
  }
  else {
    pcVar13 = *(code **)(lVar8 + 0x10);
    lStack_e0 = param_2;
    (*pcVar13)(lVar10,param_2 + _DAT_112d530d0,lVar5);
    puVar6 = &UNK_110374538;
    func_0x000107c613fc(&UNK_110374538,0x18,7);
    puStack_f0 = puVar6;
    func_0x000107c61644(puVar6 + 0x10,param_2);
    FUN_100fe27a4(param_2 + 0x10,auStack_a0);
    FUN_100fe27e8(auStack_a0,auStack_c8);
    (*pcVar13)(lVar15,lVar10,lVar5);
    lVar3 = lStack_d8;
    lStack_e8 = lVar10;
    (**(code **)(lVar11 + 0x10))(lStack_d8,uStack_d0,lVar4);
    bVar1 = *(byte *)(lVar8 + 0x50);
    uVar14 = (ulong)bVar1 + 0x38 & ((ulong)bVar1 ^ 0xffffffffffffffff);
    uVar17 = lVar16 + uVar14 + 7 & 0xfffffffffffffff8;
    bVar2 = *(byte *)(lVar11 + 0x50);
    uVar9 = bVar2 + uVar17 + 8 & ((ulong)bVar2 ^ 0xffffffffffffffff);
    puVar6 = &UNK_110374560;
    func_0x000107c613fc(&UNK_110374560,uVar9 + lVar12,bVar1 | bVar2 | 7);
    FUN_100fe27e8(auStack_c8,puVar6 + 0x10);
    (**(code **)(lVar8 + 0x20))(puVar6 + uVar14,lVar15,lVar5);
    *(undefined **)(puVar6 + uVar17) = puStack_f0;
    (**(code **)(lVar11 + 0x20))(puVar6 + uVar9,lVar3,lVar4);
    *(undefined **)(lVar10 + -0x10) = PTR___sytN_11034f1b0 + 8;
    uVar7 = 0x41;
    func_0x0001001ca524(0x41,0,0x48,4,0,0,&UNK_10d9199f0,puVar6);
    func_0x000107c61574(puVar6);
    func_0x000107c5fd1c(FUN_100fe54fc,uVar7,lVar4);
    func_0x000107c61574(lStack_e0);
    (**(code **)(lVar8 + 8))(lStack_e8,lVar5);
  }
  return;
}



/* Entry: 100fe4d68; end: 100fe4e43;  */

void FUN_100fe4d68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  long lVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x2e8) = param_5;
  *(undefined8 *)(unaff_x22 + 0x2e0) = param_4;
  *(undefined8 *)(unaff_x22 + 0x2d8) = param_3;
  *(undefined8 *)(unaff_x22 + 0x2d0) = param_2;
  lVar2 = 0x112d52f60;
  func_0x0001000285a8(0x112d52f60,&UNK_10d919850);
  *(long *)(unaff_x22 + 0x2f0) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x2f8) = lVar2;
  uVar1 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x300) = uVar1;
  lVar2 = 0x112d52f68;
  func_0x0001000285a8(0x112d52f68,&UNK_10d919a00);
  *(long *)(unaff_x22 + 0x308) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x310) = lVar2;
  uVar1 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x318) = uVar1;
  lVar2 = 0x112d53198;
  func_0x0001000285a8(0x112d53198,&UNK_10d919a08);
  *(long *)(unaff_x22 + 800) = lVar2;
  uVar1 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x328) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fe4e44,0,0);
  return;
}



/* Entry: 100fe4e44; end: 100fe4fd3;  */

void FUN_100fe4e44(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long unaff_x22;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  uVar9 = *(undefined8 *)(unaff_x22 + 0x328);
  uVar8 = *(undefined8 *)(unaff_x22 + 800);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x318);
  lVar10 = *(long *)(unaff_x22 + 0x310);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x308);
  lVar7 = *(long *)(unaff_x22 + 0x2e0);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x2d8);
  lVar2 = *(long *)(unaff_x22 + 0x2d0);
  uVar3 = *(undefined8 *)(lVar2 + 0x18);
  lVar1 = *(long *)(lVar2 + 0x20);
  func_0x0001000a8868(lVar2,uVar3);
  (**(code **)(lVar1 + 8))(uVar11,uVar3,lVar1);
  uVar3 = 0x112d50a30;
  func_0x0001000285a8(0x112d50a30,&UNK_10d917400);
  uVar4 = 0x112d52f78;
  FUN_100fe5520(0x112d52f78,0x112d52f68,&UNK_10d919a00);
  uVar5 = 0x112d531a0;
  FUN_100fe5520(0x112d531a0,0x112d50a30,&UNK_10d917400);
  func_0x00010410b100(uVar9,uVar11,uVar13,uVar12,uVar3,uVar4,uVar5);
  (**(code **)(lVar10 + 8))(uVar11,uVar12);
  func_0x00010410b214();
  *(undefined8 *)(unaff_x22 + 0x330) = uVar8;
  func_0x000100fe5564(uVar9);
  *(undefined8 *)(unaff_x22 + 0x2c8) = uVar8;
  func_0x000107c61428(lVar7 + 0x10,unaff_x22 + 0x2b0,0,0);
  plVar6 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x338) = plVar6;
  func_0x0001000285a8(0x112d531a8,&UNK_10d919a10);
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_100fe4fd4;
  plVar6[2] = unaff_x22 + 0x10;
  plVar6[3] = unaff_x22 + 0x2c8;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_10410b850,0,0);
  return;
}



/* Entry: 100fe4fd4; end: 100fe5033;  */

void FUN_100fe4fd4(void)

{
  long unaff_x20;
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x338));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRelease_11034f318)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fe5034,0,0);
  return;
}



/* Entry: 100fe5034; end: 100fe52a7;  */

void FUN_100fe5034(void)

{
  undefined8 uVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x22;
  undefined8 uVar10;
  undefined8 uVar11;
  
  *(undefined8 *)(unaff_x22 + 0x158) = *(undefined8 *)(unaff_x22 + 0x58);
  *(undefined8 *)(unaff_x22 + 0x150) = *(undefined8 *)(unaff_x22 + 0x50);
  *(undefined8 *)(unaff_x22 + 0x168) = *(undefined8 *)(unaff_x22 + 0x68);
  *(undefined8 *)(unaff_x22 + 0x160) = *(undefined8 *)(unaff_x22 + 0x60);
  *(undefined8 *)(unaff_x22 + 0x178) = *(undefined8 *)(unaff_x22 + 0x78);
  *(undefined8 *)(unaff_x22 + 0x170) = *(undefined8 *)(unaff_x22 + 0x70);
  *(undefined8 *)(unaff_x22 + 0x188) = *(undefined8 *)(unaff_x22 + 0x88);
  *(undefined8 *)(unaff_x22 + 0x180) = *(undefined8 *)(unaff_x22 + 0x80);
  *(undefined8 *)(unaff_x22 + 0x118) = *(undefined8 *)(unaff_x22 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x110) = *(undefined8 *)(unaff_x22 + 0x10);
  *(undefined8 *)(unaff_x22 + 0x128) = *(undefined8 *)(unaff_x22 + 0x28);
  *(undefined8 *)(unaff_x22 + 0x120) = *(undefined8 *)(unaff_x22 + 0x20);
  *(undefined8 *)(unaff_x22 + 0x138) = *(undefined8 *)(unaff_x22 + 0x38);
  *(undefined8 *)(unaff_x22 + 0x130) = *(undefined8 *)(unaff_x22 + 0x30);
  *(undefined8 *)(unaff_x22 + 0x148) = *(undefined8 *)(unaff_x22 + 0x48);
  *(undefined8 *)(unaff_x22 + 0x140) = *(undefined8 *)(unaff_x22 + 0x40);
  *(undefined8 *)(unaff_x22 + 0x98) = *(undefined8 *)(unaff_x22 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x90) = *(undefined8 *)(unaff_x22 + 0x10);
  *(undefined8 *)(unaff_x22 + 0xa8) = *(undefined8 *)(unaff_x22 + 0x28);
  *(undefined8 *)(unaff_x22 + 0xa0) = *(undefined8 *)(unaff_x22 + 0x20);
  *(undefined8 *)(unaff_x22 + 0xb8) = *(undefined8 *)(unaff_x22 + 0x38);
  *(undefined8 *)(unaff_x22 + 0xb0) = *(undefined8 *)(unaff_x22 + 0x30);
  *(undefined8 *)(unaff_x22 + 200) = *(undefined8 *)(unaff_x22 + 0x48);
  *(undefined8 *)(unaff_x22 + 0xc0) = *(undefined8 *)(unaff_x22 + 0x40);
  *(undefined8 *)(unaff_x22 + 0xd8) = *(undefined8 *)(unaff_x22 + 0x58);
  *(undefined8 *)(unaff_x22 + 0xd0) = *(undefined8 *)(unaff_x22 + 0x50);
  *(undefined8 *)(unaff_x22 + 0xe8) = *(undefined8 *)(unaff_x22 + 0x68);
  *(undefined8 *)(unaff_x22 + 0xe0) = *(undefined8 *)(unaff_x22 + 0x60);
  *(undefined8 *)(unaff_x22 + 0xf8) = *(undefined8 *)(unaff_x22 + 0x78);
  *(undefined8 *)(unaff_x22 + 0xf0) = *(undefined8 *)(unaff_x22 + 0x70);
  *(undefined8 *)(unaff_x22 + 0x108) = *(undefined8 *)(unaff_x22 + 0x88);
  *(undefined8 *)(unaff_x22 + 0x100) = *(undefined8 *)(unaff_x22 + 0x80);
  iVar2 = (int)unaff_x22 + 0x110;
  FUN_100fe55ac();
  if (iVar2 == 1) {
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x330));
  }
  else {
    *(undefined8 *)(unaff_x22 + 0x1b8) = *(undefined8 *)(unaff_x22 + 0xb8);
    *(undefined8 *)(unaff_x22 + 0x1b0) = *(undefined8 *)(unaff_x22 + 0xb0);
    *(undefined8 *)(unaff_x22 + 0x1c8) = *(undefined8 *)(unaff_x22 + 200);
    *(undefined8 *)(unaff_x22 + 0x1c0) = *(undefined8 *)(unaff_x22 + 0xc0);
    *(undefined8 *)(unaff_x22 + 0x1d8) = *(undefined8 *)(unaff_x22 + 0xd8);
    *(undefined8 *)(unaff_x22 + 0x1d0) = *(undefined8 *)(unaff_x22 + 0xd0);
    *(undefined8 *)(unaff_x22 + 0x1e1) = *(undefined8 *)(unaff_x22 + 0xe1);
    *(undefined8 *)(unaff_x22 + 0x1d9) = *(undefined8 *)(unaff_x22 + 0xd9);
    *(undefined8 *)(unaff_x22 + 0x198) = *(undefined8 *)(unaff_x22 + 0x98);
    *(undefined8 *)(unaff_x22 + 400) = *(undefined8 *)(unaff_x22 + 0x90);
    *(undefined8 *)(unaff_x22 + 0x1a8) = *(undefined8 *)(unaff_x22 + 0xa8);
    *(undefined8 *)(unaff_x22 + 0x1a0) = *(undefined8 *)(unaff_x22 + 0xa0);
    uVar8 = *(undefined8 *)(unaff_x22 + 0xf0);
    uVar10 = *(undefined8 *)(unaff_x22 + 0xf8);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x100);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x108);
    uVar4 = *(long *)(unaff_x22 + 0x2e0) + 0x10;
    func_0x000107c61648();
    if (uVar4 == 0) {
      uVar4 = *(ulong *)(unaff_x22 + 0x330);
    }
    else {
      uVar3 = uVar4;
      func_0x000107c5fd5c();
      if ((uVar3 & 1) == 0) {
        uVar11 = *(undefined8 *)(unaff_x22 + 0x300);
        lVar7 = *(long *)(unaff_x22 + 0x2f8);
        uVar6 = *(undefined8 *)(unaff_x22 + 0x2f0);
        FUN_100fe4714((undefined8 *)(unaff_x22 + 0x1f0),(undefined8 *)(unaff_x22 + 400),uVar8,uVar10
                      ,uVar9,uVar1);
        *(undefined8 *)(unaff_x22 + 0x278) = *(undefined8 *)(unaff_x22 + 0x218);
        *(undefined8 *)(unaff_x22 + 0x270) = *(undefined8 *)(unaff_x22 + 0x210);
        *(undefined8 *)(unaff_x22 + 0x288) = *(undefined8 *)(unaff_x22 + 0x228);
        *(undefined8 *)(unaff_x22 + 0x280) = *(undefined8 *)(unaff_x22 + 0x220);
        *(undefined8 *)(unaff_x22 + 0x298) = *(undefined8 *)(unaff_x22 + 0x238);
        *(undefined8 *)(unaff_x22 + 0x290) = *(undefined8 *)(unaff_x22 + 0x230);
        *(undefined8 *)(unaff_x22 + 0x2a1) = *(undefined8 *)(unaff_x22 + 0x241);
        *(undefined8 *)(unaff_x22 + 0x299) = *(undefined8 *)(unaff_x22 + 0x239);
        *(undefined8 *)(unaff_x22 + 600) = *(undefined8 *)(unaff_x22 + 0x1f8);
        *(undefined8 *)(unaff_x22 + 0x250) = *(undefined8 *)(unaff_x22 + 0x1f0);
        *(undefined8 *)(unaff_x22 + 0x268) = *(undefined8 *)(unaff_x22 + 0x208);
        *(undefined8 *)(unaff_x22 + 0x260) = *(undefined8 *)(unaff_x22 + 0x200);
        uVar9 = 0x112d52f50;
        func_0x0001000285a8(0x112d52f50,&UNK_10d919830);
        func_0x000107c5fd28(uVar11,unaff_x22 + 0x250,uVar9);
        FUN_100fe33e8(uVar8,uVar10);
        func_0x000107c6142c(uVar1);
        func_0x000100fe29a8(unaff_x22 + 0x90);
        func_0x000107c61574(uVar4);
        (**(code **)(lVar7 + 8))(uVar11,uVar6);
        plVar5 = (long *)0x30;
        func_0x000107c615b8();
        *(long **)(unaff_x22 + 0x340) = plVar5;
        func_0x0001000285a8(0x112d531a8,&UNK_10d919a10);
        *plVar5 = unaff_x22;
        plVar5[1] = (long)FUN_100fe52a8;
        plVar5[2] = unaff_x22 + 0x10;
        plVar5[3] = unaff_x22 + 0x2c8;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_task_switch_110350130)(&UNK_10410b850,0,0);
        return;
      }
      func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x330));
    }
    func_0x000107c61574(uVar4);
    FUN_100fe33e8(uVar8,uVar10);
    func_0x000107c6142c(uVar1);
    func_0x000100fe29a8(unaff_x22 + 0x90);
  }
  uVar8 = *(undefined8 *)(unaff_x22 + 0x328);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x318);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x300);
  func_0x0001000285a8(0x112d52f50,&UNK_10d919830);
  func_0x000107c5fd2c();
  func_0x000107c615c0(uVar8);
  func_0x000107c615c0(uVar9);
  func_0x000107c615c0(uVar10);
                    /* WARNING: Could not recover jumptable at 0x000100fe5180. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100fe52a8; end: 100fe5307;  */

void FUN_100fe52a8(void)

{
  long unaff_x20;
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x340));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRelease_11034f318)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fe5034,0,0);
  return;
}



/* Entry: 100fe5308; end: 100fe53e7;  */

void FUN_100fe5308(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  long extraout_x8;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  long lVar4;
  
  lVar1 = 0x112d52f48;
  func_0x0001000285a8(0x112d52f48,&UNK_10d9199e0);
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar3 = *unaff_x20;
  puVar2 = &UNK_110374538;
  func_0x000107c613fc(&UNK_110374538,0x18,7);
  func_0x000107c61644(puVar2 + 0x10,uVar3);
  (**(code **)(lVar4 + 0x68))
            (&stack0xffffffffffffffc0 + -extraout_x8,
             *(undefined4 *)
              PTR___sScS12ContinuationV15BufferingPolicyO9unboundedyADyx__GAFmlFWC_11034fd20,lVar1);
  func_0x000107c5fd48(param_1,&UNK_110376078,&stack0xffffffffffffffc0 + -extraout_x8,FUN_100fe53e8,
                      puVar2,&UNK_110376078);
  func_0x000107c61574(puVar2);
  return;
}



/* Entry: 100fe53e8; end: 100fe53ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fe53e8(undefined8 param_1)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long extraout_x8;
  long extraout_x12;
  long lVar8;
  ulong uVar9;
  long unaff_x20;
  long lVar10;
  long lVar11;
  long lVar12;
  code *pcVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  long alStack_100 [2];
  undefined *puStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined1 auStack_c8 [40];
  undefined1 auStack_a0 [40];
  undefined1 auStack_78 [24];
  
  lVar3 = 0x112d52f50;
  uStack_d0 = param_1;
  func_0x0001000285a8(0x112d52f50,&UNK_10d919830);
  lVar11 = *(long *)(lVar3 + -8);
  lVar12 = *(long *)(lVar11 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)(lVar12 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0x112d50a30;
  lStack_d8 = (long)&puStack_f0 - extraout_x8;
  func_0x0001000285a8(0x112d50a30,&UNK_10d917400);
  lVar8 = *(long *)(lVar4 + -8);
  lVar16 = *(long *)(lVar8 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar15 = ((long)&puStack_f0 - extraout_x8) - (lVar16 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = lVar15 - extraout_x12;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_78,0,0);
  lVar5 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar5 == 0) {
    func_0x000107c5fd2c(lVar3);
  }
  else {
    pcVar13 = *(code **)(lVar8 + 0x10);
    lStack_e0 = lVar5;
    (*pcVar13)(lVar10,lVar5 + _DAT_112d530d0,lVar4);
    puVar6 = &UNK_110374538;
    func_0x000107c613fc(&UNK_110374538,0x18,7);
    puStack_f0 = puVar6;
    func_0x000107c61644(puVar6 + 0x10,lVar5);
    FUN_100fe27a4(lVar5 + 0x10,auStack_a0);
    FUN_100fe27e8(auStack_a0,auStack_c8);
    (*pcVar13)(lVar15,lVar10,lVar4);
    lVar5 = lStack_d8;
    lStack_e8 = lVar10;
    (**(code **)(lVar11 + 0x10))(lStack_d8,uStack_d0,lVar3);
    bVar1 = *(byte *)(lVar8 + 0x50);
    uVar14 = (ulong)bVar1 + 0x38 & ((ulong)bVar1 ^ 0xffffffffffffffff);
    uVar17 = lVar16 + uVar14 + 7 & 0xfffffffffffffff8;
    bVar2 = *(byte *)(lVar11 + 0x50);
    uVar9 = bVar2 + uVar17 + 8 & ((ulong)bVar2 ^ 0xffffffffffffffff);
    puVar6 = &UNK_110374560;
    func_0x000107c613fc(&UNK_110374560,uVar9 + lVar12,bVar1 | bVar2 | 7);
    FUN_100fe27e8(auStack_c8,puVar6 + 0x10);
    (**(code **)(lVar8 + 0x20))(puVar6 + uVar14,lVar15,lVar4);
    *(undefined **)(puVar6 + uVar17) = puStack_f0;
    (**(code **)(lVar11 + 0x20))(puVar6 + uVar9,lVar5,lVar3);
    *(undefined **)(lVar10 + -0x10) = PTR___sytN_11034f1b0 + 8;
    uVar7 = 0x41;
    func_0x0001001ca524(0x41,0,0x48,4,0,0,&UNK_10d9199f0,puVar6);
    func_0x000107c61574(puVar6);
    func_0x000107c5fd1c(FUN_100fe54fc,uVar7,lVar3);
    func_0x000107c61574(lStack_e0);
    (**(code **)(lVar8 + 8))(lStack_e8,lVar4);
  }
  return;
}



/* Entry: 100fe53f0; end: 100fe54bf;  */

void FUN_100fe53f0(void)

{
  long *plVar1;
  ulong uVar2;
  long unaff_x20;
  ulong uVar3;
  long lVar4;
  long unaff_x22;
  ulong uVar5;
  
  lVar4 = 0x112d50a30;
  func_0x0001000285a8(0x112d50a30,&UNK_10d917400);
  uVar2 = (ulong)*(byte *)(*(long *)(lVar4 + -8) + 0x50);
  uVar5 = uVar2 + 0x38 & (uVar2 ^ 0xffffffffffffffff);
  uVar3 = *(long *)(*(long *)(lVar4 + -8) + 0x40) + uVar5 + 7 & 0xfffffffffffffff8;
  lVar4 = 0x112d52f50;
  func_0x0001000285a8(0x112d52f50,&UNK_10d919830);
  uVar2 = (ulong)*(byte *)(*(long *)(lVar4 + -8) + 0x50);
  lVar4 = *(long *)(unaff_x20 + uVar3);
  plVar1 = (long *)0x350;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100fe54c0;
  plVar1[0x5d] = unaff_x20 + (uVar3 + uVar2 + 8 & (uVar2 ^ 0xffffffffffffffff));
  plVar1[0x5c] = lVar4;
  plVar1[0x5b] = unaff_x20 + uVar5;
  plVar1[0x5a] = unaff_x20 + 0x10;
  lVar4 = 0x112d52f60;
  func_0x0001000285a8(0x112d52f60,&UNK_10d919850);
  plVar1[0x5e] = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  plVar1[0x5f] = lVar4;
  uVar2 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[0x60] = uVar2;
  lVar4 = 0x112d52f68;
  func_0x0001000285a8(0x112d52f68,&UNK_10d919a00);
  plVar1[0x61] = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  plVar1[0x62] = lVar4;
  uVar2 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[99] = uVar2;
  lVar4 = 0x112d53198;
  func_0x0001000285a8(0x112d53198,&UNK_10d919a08);
  plVar1[100] = lVar4;
  uVar2 = *(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[0x65] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fe4e44,0,0);
  return;
}



/* Entry: 100fe54c0; end: 100fe54fb;  */

void FUN_100fe54c0(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000100fe54f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 100fe54fc; end: 100fe551f;  */

void FUN_100fe54fc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScT6cancelyyF_11034fdc8)();
  return;
}



/* Entry: 100fe5520; end: 100fe55ab;  */

void FUN_100fe5520(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    puVar1 = PTR___sScSyxGScisMc_11034fdb0;
    func_0x000107c61520(PTR___sScSyxGScisMc_11034fdb0,param_2);
    *param_1 = (long)puVar1;
  }
  return;
}



/* Entry: 100fe55ac; end: 100fe55e7;  */

int FUN_100fe55ac(ulong *param_1)

{
  ulong uVar1;
  
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 100fe55e8; end: 100fe5667;  */

void FUN_100fe55e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  long *plVar4;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar5;
  long unaff_x20;
  long lVar6;
  long unaff_x22;
  
  piVar2 = *(int **)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  lVar6 = *(long *)(unaff_x20 + 0x20);
  plVar5 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_100fe5668;
  plVar5[3] = lVar3;
  plVar5[4] = lVar6;
  plVar5[2] = (long)piVar2;
  if (piVar2 != (int *)0x0) {
    iVar1 = *piVar2;
    plVar4 = (long *)(ulong)(uint)piVar2[1];
    func_0x000107c6157c(lVar3);
    func_0x000107c615b8();
    plVar5[5] = (long)plVar4;
    *plVar4 = (long)plVar5;
    plVar4[1] = (long)FUN_100fe3348;
                    /* WARNING: Could not recover jumptable at 0x000100fe3310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)piVar2 + (long)iVar1))(param_1,param_2,param_3);
    return;
  }
  UNRECOVERED_JUMPTABLE = (code *)plVar5[1];
  func_0x000107c61174(lVar6);
                    /* WARNING: Could not recover jumptable at 0x000100fe3344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(lVar6);
  return;
}



/* Entry: 100fe5668; end: 100fe56ab;  */

void FUN_100fe5668(undefined8 param_1)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000100fe56a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(param_1);
  return;
}



/* Entry: 100fe56ac; end: 100fe56fb;  */

undefined8 FUN_100fe56ac(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112d52f90;
  func_0x0001000285a8(0x112d52f90,&UNK_10d919870);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 100fe56fc; end: 100fe5bf3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fe56fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  long lVar2;
  long lVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long unaff_x20;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined4 uStack_cc;
  long lStack_c8;
  undefined8 *puStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  lVar2 = _DAT_112d531b8;
  puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001000285a8(0x112d53330,&UNK_10d919ad8);
  func_0x000107c613fc();
  ppuVar1 = &puStack_68;
  func_0x00010006c248();
  *(undefined ***)(unaff_x20 + lVar2) = ppuVar1;
  lVar2 = _DAT_112d531c0;
  puStack_68 = (undefined *)0x0;
  func_0x0001000285a8(0x112d53338,&UNK_10d919ae0);
  func_0x000107c613fc();
  ppuVar1 = &puStack_68;
  func_0x00010006c248();
  *(undefined ***)(unaff_x20 + lVar2) = ppuVar1;
  lVar2 = _DAT_112d531c8;
  puStack_68 = (undefined *)((ulong)puStack_68 & 0xffffffffffffff00);
  func_0x0001000285a8(0x112d382e0,&UNK_10d91a6b0);
  func_0x000107c613fc();
  ppuVar1 = &puStack_68;
  func_0x00010006c248();
  *(undefined ***)(unaff_x20 + lVar2) = ppuVar1;
  *(undefined8 *)(unaff_x20 + _DAT_112d531e8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d531f0) = 0;
  uStack_70 = param_1;
  FUN_100fe27a4(param_1,unaff_x20 + 0x10);
  *(undefined8 *)(unaff_x20 + 0x38) = param_2;
  *(undefined8 *)(unaff_x20 + 0x40) = param_3;
  lVar3 = _DAT_112d531b0;
  lVar2 = 0x112d50c50;
  func_0x0001000285a8(0x112d50c50,&UNK_10d9175b8);
  lStack_a0 = *(long *)(lVar2 + -8);
  lStack_90 = lVar2;
  uStack_78 = param_4;
  (**(code **)(lStack_a0 + 0x10))(unaff_x20 + lVar3,param_4);
  lVar2 = 0x112d53328;
  func_0x0001000285a8(0x112d53328,&UNK_10d919ad0);
  lVar7 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = (long)&uStack_e0 - extraout_x8;
  lVar3 = 0x112d53320;
  func_0x0001000285a8(0x112d53320,&UNK_10d919ac0);
  lVar8 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = lVar9 - extraout_x8_00;
  lVar4 = 0x112d53340;
  func_0x0001000285a8(0x112d53340,&UNK_10d919af0);
  lVar5 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = (undefined8 *)(lVar10 - extraout_x8_01);
  *puVar6 = 1;
  uStack_cc = *(undefined4 *)
               PTR___sScS12ContinuationV15BufferingPolicyO15bufferingNewestyADyx__GSicAFmlFWC_11034fd18
  ;
  (**(code **)(lVar5 + 0x68))(puVar6,uStack_cc,lVar4);
  uStack_e0._4_4_ = 2;
  func_0x000100029b9c(2,0x11,0,0);
  if (uStack_e0._4_4_ == 0) {
    func_0x000100ffc8b0(lVar9,lVar10,puVar6);
  }
  else {
    func_0x000107c5fd10(lVar9,lVar10,&UNK_110376238,puVar6,&UNK_110376238);
  }
  (**(code **)(lVar5 + 8))(puVar6,lVar4);
  lStack_98 = lVar9;
  lStack_88 = lVar7;
  lStack_80 = lVar2;
  (**(code **)(lVar7 + 0x10))(unaff_x20 + _DAT_1137ff118,lVar9,lVar2);
  lStack_b8 = lVar10;
  lStack_b0 = lVar8;
  lStack_a8 = lVar3;
  (**(code **)(lVar8 + 0x10))(unaff_x20 + _DAT_112d531d0,lVar10,lVar3);
  lVar2 = 0x112d52f68;
  func_0x0001000285a8(0x112d52f68,&UNK_10d919a00);
  lVar9 = *(long *)(lVar2 + -8);
  lStack_c8 = lVar2;
  puStack_c0 = puVar6;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = (long)puVar6 - extraout_x8_02;
  lVar2 = 0x112d52f50;
  func_0x0001000285a8(0x112d52f50,&UNK_10d919830);
  lVar5 = *(long *)(lVar2 + -8);
  lStack_d8 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = lVar4 - extraout_x8_03;
  lVar3 = 0x112d52f48;
  func_0x0001000285a8(0x112d52f48,&UNK_10d9199e0);
  lVar8 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = (undefined8 *)(lVar7 - extraout_x8_04);
  *puVar6 = 1;
  (**(code **)(lVar8 + 0x68))(puVar6,uStack_cc,lVar3);
  if (uStack_e0._4_4_ == 0) {
    func_0x000100ffc690(lVar4,lVar7,puVar6);
  }
  else {
    func_0x000107c5fd10(lVar4,lVar7,&UNK_110376078,puVar6,&UNK_110376078);
  }
  (**(code **)(lVar8 + 8))(puVar6,lVar3);
  lVar3 = lStack_c8;
  (**(code **)(lVar9 + 0x10))(unaff_x20 + _DAT_112d531e0,lVar4,lStack_c8);
  (**(code **)(lVar5 + 0x10))(unaff_x20 + _DAT_112d531d8,lVar7,lVar2);
  FUN_100fe5bf4();
  FUN_100fe5ccc();
  (**(code **)(lStack_a0 + 8))(uStack_78,lStack_90);
  func_0x0001000834e4(uStack_70);
  (**(code **)(lVar5 + 8))(lVar7,lVar2);
  (**(code **)(lVar9 + 8))(lVar4,lVar3);
  (**(code **)(lStack_b0 + 8))(lStack_b8,lStack_a8);
  (**(code **)(lStack_88 + 8))(lStack_98,lStack_80);
  return;
}



/* Entry: 100fe5bf4; end: 100fe5ccb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fe5bf4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 auStack_58 [40];
  
  puVar1 = &UNK_1103745c8;
  func_0x000107c613fc(&UNK_1103745c8,0x18,7);
  func_0x000107c61644(puVar1 + 0x10);
  FUN_100fe27a4(unaff_x20 + 0x10,auStack_58);
  puVar2 = &UNK_110374618;
  func_0x000107c613fc(&UNK_110374618,0x40,7);
  FUN_100fe27e8(auStack_58,puVar2 + 0x10);
  *(undefined **)(puVar2 + 0x38) = puVar1;
  uVar3 = 0x41;
  func_0x0001001ca524(0x41,0,0x48,4,0,0,&UNK_10d919b28,puVar2,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar2);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112d531f0);
  *(undefined8 *)(unaff_x20 + _DAT_112d531f0) = uVar3;
  func_0x000107c61574(uVar4);
  return;
}



/* Entry: 100fe5ccc; end: 100fe5e27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fe5ccc(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long extraout_x8;
  ulong uVar6;
  long unaff_x20;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long alStack_60 [2];
  
  lVar1 = 0x112d50c50;
  func_0x0001000285a8(0x112d50c50,&UNK_10d9175b8);
  lVar8 = *(long *)(lVar1 + -8);
  lVar7 = *(long *)(lVar8 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)(lVar7 + 0xfU & 0xfffffffffffffff0);
  puVar2 = &UNK_1103745c8;
  func_0x000107c613fc(&UNK_1103745c8,0x18,7);
  func_0x000107c61644(puVar2 + 0x10);
  (**(code **)(lVar8 + 0x10))
            (&stack0xffffffffffffffb0 + -extraout_x8,unaff_x20 + _DAT_112d531b0,lVar1);
  uVar6 = (ulong)*(byte *)(lVar8 + 0x50);
  uVar9 = uVar6 + 0x10 & (uVar6 ^ 0xffffffffffffffff);
  uVar10 = lVar7 + uVar9 + 7 & 0xfffffffffffffff8;
  puVar3 = &UNK_1103745f0;
  func_0x000107c613fc(&UNK_1103745f0,uVar10 + 8,uVar6 | 7);
  (**(code **)(lVar8 + 0x20))(puVar3 + uVar9,&stack0xffffffffffffffb0 + -extraout_x8,lVar1);
  *(undefined **)(puVar3 + uVar10) = puVar2;
  *(undefined **)((long)alStack_60 + -extraout_x8) = PTR___sytN_11034f1b0 + 8;
  uVar4 = 0x41;
  func_0x0001001ca524(0x41,0,0x48,4,0,0,&UNK_10d919b08,puVar3);
  func_0x000107c61574(puVar3);
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112d531e8);
  *(undefined8 *)(unaff_x20 + _DAT_112d531e8) = uVar4;
  func_0x000107c61574(uVar5);
  return;
}



/* Entry: 100fe5e28; end: 100fe60d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fe5e28(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  code *pcVar4;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  long lVar10;
  undefined1 auStack_70 [8];
  long lStack_68;
  
  lVar2 = 0x112d52f50;
  func_0x0001000285a8(0x112d52f50,&UNK_10d919830);
  lVar10 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = auStack_70 + -extraout_x8;
  lVar3 = 0x112d53320;
  func_0x0001000285a8(0x112d53320,&UNK_10d919ac0);
  lVar8 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lStack_68 = _DAT_112d531e8;
  lVar6 = *(long *)(unaff_x20 + _DAT_112d531e8);
  if (lVar6 != 0) {
    func_0x000107c6157c(lVar6);
    func_0x000107c5fd50();
    func_0x000107c61574(lVar6);
  }
  lVar6 = _DAT_112d531f0;
  lVar7 = *(long *)(unaff_x20 + _DAT_112d531f0);
  if (lVar7 != 0) {
    func_0x000107c6157c(lVar7);
    func_0x000107c5fd50();
    func_0x000107c61574(lVar7);
  }
  lVar7 = _DAT_112d531d0;
  (**(code **)(lVar8 + 0x10))((long)puVar5 - extraout_x8_00,unaff_x20 + _DAT_112d531d0,lVar3);
  func_0x000107c5fd2c(lVar3);
  pcVar9 = *(code **)(lVar8 + 8);
  (*pcVar9)((long)puVar5 - extraout_x8_00,lVar3);
  lVar1 = _DAT_112d531d8;
  (**(code **)(lVar10 + 0x10))(puVar5,unaff_x20 + _DAT_112d531d8,lVar2);
  func_0x000107c5fd2c(lVar2);
  pcVar4 = *(code **)(lVar10 + 8);
  (*pcVar4)(puVar5,lVar2);
  func_0x0001000834e4(unaff_x20 + 0x10);
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x40));
  lVar10 = _DAT_112d531b0;
  lVar8 = 0x112d50c50;
  func_0x0001000285a8(0x112d50c50,&UNK_10d9175b8);
  (**(code **)(*(long *)(lVar8 + -8) + 8))(unaff_x20 + lVar10,lVar8);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + _DAT_112d531b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + _DAT_112d531c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + _DAT_112d531c8));
  (*pcVar9)(unaff_x20 + lVar7,lVar3);
  lVar8 = _DAT_1137ff118;
  lVar3 = 0x112d53328;
  func_0x0001000285a8(0x112d53328,&UNK_10d919ad0);
  (**(code **)(*(long *)(lVar3 + -8) + 8))(unaff_x20 + lVar8,lVar3);
  (*pcVar4)(unaff_x20 + lVar1,lVar2);
  lVar3 = _DAT_112d531e0;
  lVar2 = 0x112d52f68;
  func_0x0001000285a8(0x112d52f68,&UNK_10d919a00);
  (**(code **)(*(long *)(lVar2 + -8) + 8))(unaff_x20 + lVar3,lVar2);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + lStack_68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + lVar6));
  return;
}



/* Entry: 100fe60d4; end: 100fe60f7;  */

void FUN_100fe60d4(void)

{
  FUN_100fe5e28();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 100fe60f8; end: 100fe60ff;  */

void FUN_100fe60f8(void)

{
  if (lRam0000000112d53220 != 0) {
    return;
  }
  func_0x000107c614fc(0,&DAT_10e61d634);
  return;
}



/* Entry: 100fe6100; end: 100fe6137;  */

void FUN_100fe6100(undefined8 param_1)

{
  if (lRam0000000112d53220 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e61d634);
  return;
}



/* Entry: 100fe6138; end: 100fe62fb;  */

void FUN_100fe6138(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puStack_80 = &UNK_10d919a68;
  puStack_78 = &UNK_10d919a80;
  uVar2 = 0x112d50ad0;
  lVar1 = 0x13f;
  func_0x000100fe62b8(0x13f,0x112d50ad0,PTR___sSiN_11034deb0,PTR___sScSMa_11034fda0);
  if (uVar2 < 0x40) {
    lStack_70 = *(long *)(lVar1 + -8) + 0x40;
    puStack_68 = PTR___sBoWV_11034d678 + 0x40;
    uVar2 = 0x112d53230;
    lVar1 = 0x13f;
    puStack_60 = puStack_68;
    puStack_58 = puStack_68;
    func_0x000100fe62b8(0x13f,0x112d53230,&UNK_110376238,PTR___sScS12ContinuationVMa_11034fd50);
    if (uVar2 < 0x40) {
      lStack_50 = *(long *)(lVar1 + -8) + 0x40;
      uVar2 = 0x112d53238;
      lVar1 = 0x13f;
      func_0x000100fe62b8(0x13f,0x112d53238,&UNK_110376238,PTR___sScSMa_11034fda0);
      if (uVar2 < 0x40) {
        lStack_48 = *(long *)(lVar1 + -8) + 0x40;
        uVar2 = 0x112d53240;
        lVar1 = 0x13f;
        func_0x000100fe62b8(0x13f,0x112d53240,&UNK_110376078,PTR___sScS12ContinuationVMa_11034fd50);
        if (uVar2 < 0x40) {
          lStack_40 = *(long *)(lVar1 + -8) + 0x40;
          uVar2 = 0x112d53248;
          lVar1 = 0x13f;
          func_0x000100fe62b8(0x13f,0x112d53248,&UNK_110376078,PTR___sScSMa_11034fda0);
          if (uVar2 < 0x40) {
            lStack_38 = *(long *)(lVar1 + -8) + 0x40;
            puStack_30 = &UNK_10d919a98;
            puStack_28 = &UNK_10d919a98;
            func_0x000107c61630(param_1,0x100,0xc,&puStack_80,param_1 + 0x50);
          }
        }
      }
    }
  }
  return;
}



/* Entry: 100fe62fc; end: 100fe6407;  */

void FUN_100fe62fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x2a0) = param_3;
  *(undefined8 *)(unaff_x22 + 0x298) = param_2;
  lVar2 = 0x112d52f50;
  func_0x0001000285a8(0x112d52f50,&UNK_10d919830);
  *(long *)(unaff_x22 + 0x2a8) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x2b0) = lVar2;
  uVar1 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x2b8) = uVar1;
  lVar2 = 0x112d52f60;
  func_0x0001000285a8(0x112d52f60,&UNK_10d919850);
  *(long *)(unaff_x22 + 0x2c0) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x2c8) = lVar2;
  uVar1 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x2d0) = uVar1;
  lVar2 = 0x112d52f68;
  func_0x0001000285a8(0x112d52f68,&UNK_10d919a00);
  *(long *)(unaff_x22 + 0x2d8) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x2e0) = lVar2;
  uVar1 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x2e8) = uVar1;
  lVar2 = 0x112d53358;
  func_0x0001000285a8(0x112d53358,&UNK_10d91b4d0);
  *(long *)(unaff_x22 + 0x2f0) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x2f8) = lVar2;
  uVar1 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x300) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fe6408,0,0);
  return;
}



/* Entry: 100fe6408; end: 100fe64eb;  */

void FUN_100fe6408(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x22;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0x300);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x2e8);
  lVar8 = *(long *)(unaff_x22 + 0x2e0);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x2d8);
  lVar9 = *(long *)(unaff_x22 + 0x2a0);
  lVar3 = *(long *)(unaff_x22 + 0x298);
  uVar1 = *(undefined8 *)(lVar3 + 0x18);
  lVar2 = *(long *)(lVar3 + 0x20);
  func_0x0001000a8868(lVar3,uVar1);
  (**(code **)(lVar2 + 8))(uVar6,uVar1,lVar2);
  func_0x000107c5fd34(uVar5,uVar7);
  (**(code **)(lVar8 + 8))(uVar6,uVar7);
  func_0x000107c61428(lVar9 + 0x10,unaff_x22 + 0x268,0,0);
  *(undefined8 *)(unaff_x22 + 0x308) = 0;
  plVar4 = (long *)(ulong)*(uint *)(PTR___sScS8IteratorV4nextxSgyYaFTu_11034fd80 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x310) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_100fe64ec;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScS8IteratorV4nextxSgyYaF_11034fd78)
            (plVar4,unaff_x22 + 0xe8,*(undefined8 *)(unaff_x22 + 0x2f0));
  return;
}



/* Entry: 100fe64ec; end: 100fe6533;  */

void FUN_100fe64ec(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x310));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fe6534,0,0);
  return;
}



/* Entry: 100fe6534; end: 100fe683f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fe6534(void)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x22;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  *(undefined8 *)(unaff_x22 + 0x90) = *(undefined8 *)(unaff_x22 + 0xf0);
  *(undefined8 *)(unaff_x22 + 0x88) = *(undefined8 *)(unaff_x22 + 0xe8);
  *(undefined8 *)(unaff_x22 + 0xa0) = *(undefined8 *)(unaff_x22 + 0x100);
  *(undefined8 *)(unaff_x22 + 0x98) = *(undefined8 *)(unaff_x22 + 0xf8);
  *(undefined8 *)(unaff_x22 + 0xb0) = *(undefined8 *)(unaff_x22 + 0x110);
  *(undefined8 *)(unaff_x22 + 0xa8) = *(undefined8 *)(unaff_x22 + 0x108);
  *(undefined8 *)(unaff_x22 + 0xc0) = *(undefined8 *)(unaff_x22 + 0x120);
  *(undefined8 *)(unaff_x22 + 0xb8) = *(undefined8 *)(unaff_x22 + 0x118);
  *(undefined8 *)(unaff_x22 + 0xd0) = *(undefined8 *)(unaff_x22 + 0x130);
  *(undefined8 *)(unaff_x22 + 200) = *(undefined8 *)(unaff_x22 + 0x128);
  *(undefined8 *)(unaff_x22 + 0xd9) = *(undefined8 *)(unaff_x22 + 0x139);
  *(undefined8 *)(unaff_x22 + 0xd1) = *(undefined8 *)(unaff_x22 + 0x131);
  if (*(long *)(unaff_x22 + 0x88) == 0) {
    (**(code **)(*(long *)(unaff_x22 + 0x2f8) + 8))
              (*(undefined8 *)(unaff_x22 + 0x300),*(undefined8 *)(unaff_x22 + 0x2f0));
  }
  else {
    puVar1 = (undefined8 *)(unaff_x22 + 0x28);
    *(undefined8 *)(unaff_x22 + 0x50) = *(undefined8 *)(unaff_x22 + 0xb0);
    *(undefined8 *)(unaff_x22 + 0x48) = *(undefined8 *)(unaff_x22 + 0xa8);
    *(undefined8 *)(unaff_x22 + 0x60) = *(undefined8 *)(unaff_x22 + 0xc0);
    *(undefined8 *)(unaff_x22 + 0x58) = *(undefined8 *)(unaff_x22 + 0xb8);
    *(undefined8 *)(unaff_x22 + 0x70) = *(undefined8 *)(unaff_x22 + 0xd0);
    *(undefined8 *)(unaff_x22 + 0x68) = *(undefined8 *)(unaff_x22 + 200);
    *(undefined8 *)(unaff_x22 + 0x79) = *(undefined8 *)(unaff_x22 + 0xd9);
    *(undefined8 *)(unaff_x22 + 0x71) = *(undefined8 *)(unaff_x22 + 0xd1);
    *(undefined8 *)(unaff_x22 + 0x30) = *(undefined8 *)(unaff_x22 + 0x90);
    *puVar1 = *(undefined8 *)(unaff_x22 + 0x88);
    *(undefined8 *)(unaff_x22 + 0x40) = *(undefined8 *)(unaff_x22 + 0xa0);
    *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0x98);
    uVar2 = *(long *)(unaff_x22 + 0x2a0) + 0x10;
    func_0x000107c61648();
    if (uVar2 == 0) {
      (**(code **)(*(long *)(unaff_x22 + 0x2f8) + 8))
                (*(undefined8 *)(unaff_x22 + 0x300),*(undefined8 *)(unaff_x22 + 0x2f0));
      FUN_100fe7128(unaff_x22 + 0x88);
    }
    else {
      uVar3 = uVar2;
      func_0x000107c5fd5c();
      if ((uVar3 & 1) == 0) {
        uVar8 = *(undefined8 *)(unaff_x22 + 0x308);
        uVar10 = *(undefined8 *)(unaff_x22 + 0x2d0);
        lVar6 = *(long *)(unaff_x22 + 0x2c8);
        uVar5 = *(undefined8 *)(unaff_x22 + 0x2c0);
        uVar11 = *(undefined8 *)(unaff_x22 + 0x2a8);
        uVar7 = *(undefined8 *)(uVar2 + _DAT_112d531b8);
        *(undefined8 **)(unaff_x22 + 0x20) = puVar1;
        func_0x000107c6157c(uVar7);
        func_0x000100075034(FUN_100fe7170,unaff_x22 + 0x10,PTR___sytN_11034f1b0 + 8);
        func_0x000107c61574(uVar7);
        *(undefined8 *)(unaff_x22 + 0x1d0) = *(undefined8 *)(unaff_x22 + 0x50);
        *(undefined8 *)(unaff_x22 + 0x1c8) = *(undefined8 *)(unaff_x22 + 0x48);
        *(undefined8 *)(unaff_x22 + 0x1e0) = *(undefined8 *)(unaff_x22 + 0x60);
        *(undefined8 *)(unaff_x22 + 0x1d8) = *(undefined8 *)(unaff_x22 + 0x58);
        *(undefined8 *)(unaff_x22 + 0x1f0) = *(undefined8 *)(unaff_x22 + 0x70);
        *(undefined8 *)(unaff_x22 + 0x1e8) = *(undefined8 *)(unaff_x22 + 0x68);
        *(undefined8 *)(unaff_x22 + 0x1f9) = *(undefined8 *)(unaff_x22 + 0x79);
        *(undefined8 *)(unaff_x22 + 0x1f1) = *(undefined8 *)(unaff_x22 + 0x71);
        *(undefined8 *)(unaff_x22 + 0x1b0) = *(undefined8 *)(unaff_x22 + 0x30);
        *(undefined8 *)(unaff_x22 + 0x1a8) = *puVar1;
        *(undefined8 *)(unaff_x22 + 0x1c0) = *(undefined8 *)(unaff_x22 + 0x40);
        *(undefined8 *)(unaff_x22 + 0x1b8) = *(undefined8 *)(unaff_x22 + 0x38);
        *(undefined8 *)(unaff_x22 + 0x170) = *(undefined8 *)(unaff_x22 + 0xb0);
        *(undefined8 *)(unaff_x22 + 0x168) = *(undefined8 *)(unaff_x22 + 0xa8);
        *(undefined8 *)(unaff_x22 + 0x180) = *(undefined8 *)(unaff_x22 + 0xc0);
        *(undefined8 *)(unaff_x22 + 0x178) = *(undefined8 *)(unaff_x22 + 0xb8);
        *(undefined8 *)(unaff_x22 + 400) = *(undefined8 *)(unaff_x22 + 0xd0);
        *(undefined8 *)(unaff_x22 + 0x188) = *(undefined8 *)(unaff_x22 + 200);
        *(undefined8 *)(unaff_x22 + 0x199) = *(undefined8 *)(unaff_x22 + 0xd9);
        *(undefined8 *)(unaff_x22 + 0x191) = *(undefined8 *)(unaff_x22 + 0xd1);
        *(undefined8 *)(unaff_x22 + 0x150) = *(undefined8 *)(unaff_x22 + 0x90);
        *(undefined8 *)(unaff_x22 + 0x148) = *(undefined8 *)(unaff_x22 + 0x88);
        *(undefined8 *)(unaff_x22 + 0x160) = *(undefined8 *)(unaff_x22 + 0xa0);
        *(undefined8 *)(unaff_x22 + 0x158) = *(undefined8 *)(unaff_x22 + 0x98);
        func_0x000100fe29dc((undefined8 *)(unaff_x22 + 0x148),unaff_x22 + 0x208);
        func_0x000107c5fd28(uVar10,(undefined8 *)(unaff_x22 + 0x1a8),uVar11);
        (**(code **)(lVar6 + 8))(uVar10,uVar5);
        FUN_100fe6840();
        func_0x000107c61574(uVar2);
        FUN_100fe7128(unaff_x22 + 0x88);
        *(undefined8 *)(unaff_x22 + 0x308) = uVar8;
        plVar4 = (long *)(ulong)*(uint *)(PTR___sScS8IteratorV4nextxSgyYaFTu_11034fd80 + 4);
        func_0x000107c615b8();
        *(long **)(unaff_x22 + 0x310) = plVar4;
        *plVar4 = unaff_x22;
        plVar4[1] = (long)FUN_100fe64ec;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___sScS8IteratorV4nextxSgyYaF_11034fd78)
                  (plVar4,unaff_x22 + 0xe8,*(undefined8 *)(unaff_x22 + 0x2f0));
        return;
      }
      (**(code **)(*(long *)(unaff_x22 + 0x2f8) + 8))
                (*(undefined8 *)(unaff_x22 + 0x300),*(undefined8 *)(unaff_x22 + 0x2f0));
      FUN_100fe7128(unaff_x22 + 0x88);
      func_0x000107c61574(uVar2);
    }
  }
  lVar6 = *(long *)(unaff_x22 + 0x2a0);
  func_0x000107c61428(lVar6 + 0x10,unaff_x22 + 0x280,0,0);
  lVar6 = lVar6 + 0x10;
  func_0x000107c61648();
  if (lVar6 != 0) {
    uVar7 = *(undefined8 *)(unaff_x22 + 0x2b8);
    lVar9 = *(long *)(unaff_x22 + 0x2b0);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x2a8);
    (**(code **)(lVar9 + 0x10))(uVar7,lVar6 + _DAT_112d531d8,uVar5);
    func_0x000107c61574(lVar6);
    func_0x000107c5fd2c(uVar5);
    (**(code **)(lVar9 + 8))(uVar7,uVar5);
  }
  uVar7 = *(undefined8 *)(unaff_x22 + 0x2e8);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x2d0);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x2b8);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x300));
  func_0x000107c615c0(uVar7);
  func_0x000107c615c0(uVar5);
  func_0x000107c615c0(uVar8);
                    /* WARNING: Could not recover jumptable at 0x000100fe66f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100fe6840; end: 100fe6ac3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fe6840(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long extraout_x8;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  char *pcStack_80;
  ulong uStack_78;
  char cStack_61;
  
  lVar10 = 0x112d53350;
  func_0x0001000285a8(0x112d53350,&UNK_10d919b18);
  lVar9 = *(long *)(lVar10 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112d531c0);
  func_0x000107c6157c(uVar6);
  func_0x0001000c74f0(&uStack_90);
  func_0x000107c61574(uVar6);
  if (uStack_90 == 1) {
    uVar1 = *(ulong *)(unaff_x20 + 0x38);
    uVar3 = *(ulong *)(unaff_x20 + 0x40);
    uVar2 = uVar1 & 0xffffffffffff;
    if ((uVar3 & 0x2000000000000000) != 0) {
      uVar2 = uVar3 >> 0x38 & 0xf;
    }
    if (uVar2 != 0) {
      uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112d531b8);
      lStack_b0 = (long)&lStack_b0 - extraout_x8;
      lStack_a8 = lVar9;
      lStack_a0 = lVar10;
      func_0x000107c6157c(uVar6);
      func_0x0001000c74f0(&uStack_90);
      func_0x000107c61574(uVar6);
      uStack_98 = uStack_90;
      lVar10 = *(long *)(uStack_90 + 0x10);
      if (lVar10 != 0) {
        puVar7 = (undefined8 *)(uStack_90 + 0x38);
        do {
          if ((*(byte *)(puVar7 + 7) & 1) == 0) {
            uVar2 = puVar7[-3];
            uVar4 = puVar7[-2];
            if (uVar2 != uVar1 || uVar4 != uVar3) {
              uVar11 = *puVar7;
              uVar12 = puVar7[4];
              uVar6 = puVar7[6];
              uVar5 = uVar2;
              func_0x000107c605b8(uVar2,uVar4,uVar1,uVar3,0);
              if ((uVar5 & 1) == 0) {
                func_0x000107c61434(uVar4);
                func_0x000107c61434(uVar11);
                func_0x000107c61434(uVar12);
                func_0x000107c6157c(uVar6);
                func_0x000107c6142c(uStack_98);
                cStack_61 = '\0';
                uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112d531c8);
                pcStack_80 = &cStack_61;
                func_0x000107c6157c(uVar8);
                func_0x000100075034(0x100fe706c,&uStack_90,PTR___sytN_11034f1b0 + 8);
                func_0x000107c61574(uVar8);
                if (cStack_61 == '\x01') {
                  uStack_90 = uVar2;
                  uStack_88 = uVar4;
                  pcStack_80 = (char *)uVar1;
                  uStack_78 = uVar3;
                  func_0x000107c61434(uVar4);
                  func_0x000107c61434(uVar3);
                  uVar8 = 0x112d53320;
                  func_0x0001000285a8(0x112d53320,&UNK_10d919ac0);
                  lVar10 = lStack_b0;
                  func_0x000107c5fd28(lStack_b0,&uStack_90,uVar8);
                  func_0x000107c61574(uVar6);
                  func_0x000107c6142c(uVar12);
                  func_0x000107c6142c(uVar11);
                  func_0x000107c6142c(uVar4);
                  (**(code **)(lStack_a8 + 8))(lVar10,lStack_a0);
                  return;
                }
                func_0x000107c61574(uVar6);
                func_0x000107c6142c(uVar12);
                func_0x000107c6142c(uVar11);
                uStack_90 = uVar4;
                break;
              }
            }
          }
          puVar7 = puVar7 + 0xb;
          lVar10 = lVar10 + -1;
          uStack_90 = uStack_98;
        } while (lVar10 != 0);
      }
      func_0x000107c6142c(uStack_90);
    }
  }
  return;
}



/* Entry: 100fe6ac4; end: 100fe6b2f;  */

void FUN_100fe6ac4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x50) = param_2;
  *(undefined8 *)(unaff_x22 + 0x58) = param_3;
  lVar2 = 0x112d53348;
  func_0x0001000285a8(0x112d53348,&UNK_10d919b10);
  *(long *)(unaff_x22 + 0x60) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x68) = lVar2;
  uVar1 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x70) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fe6b30,0,0);
  return;
}



/* Entry: 100fe6b30; end: 100fe6bc7;  */

void FUN_100fe6b30(void)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x70);
  lVar1 = *(long *)(unaff_x22 + 0x58);
  func_0x0001000285a8(0x112d50c50,&UNK_10d9175b8);
  func_0x000107c5fd34(uVar3);
  func_0x000107c61428(lVar1 + 0x10,unaff_x22 + 0x28,0,0);
  plVar2 = (long *)(ulong)*(uint *)(PTR___sScS8IteratorV4nextxSgyYaFTu_11034fd80 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x78) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_100fe6bc8;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScS8IteratorV4nextxSgyYaF_11034fd78)
            (plVar2,unaff_x22 + 0x40,*(undefined8 *)(unaff_x22 + 0x60));
  return;
}



/* Entry: 100fe6bc8; end: 100fe6c0f;  */

void FUN_100fe6bc8(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x78));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fe6c10,0,0);
  return;
}



/* Entry: 100fe6c10; end: 100fe6d97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fe6c10(void)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  long unaff_x22;
  undefined8 uVar5;
  long lVar6;
  
  lVar6 = *(long *)(unaff_x22 + 0x40);
  if (*(char *)(unaff_x22 + 0x48) != '\x01') {
    uVar2 = *(long *)(unaff_x22 + 0x58) + 0x10;
    func_0x000107c61648();
    if (uVar2 != 0) {
      uVar3 = uVar2;
      func_0x000107c5fd5c();
      if ((uVar3 & 1) == 0) {
        uVar5 = *(undefined8 *)(uVar2 + _DAT_112d531c0);
        *(long *)(unaff_x22 + 0x20) = lVar6;
        func_0x000107c6157c(uVar5);
        puVar1 = PTR___sytN_11034f1b0;
        func_0x000100075034(FUN_100fe7060,unaff_x22 + 0x10,PTR___sytN_11034f1b0 + 8);
        func_0x000107c61574(uVar5);
        if (lVar6 != 1) {
          uVar5 = *(undefined8 *)(uVar2 + _DAT_112d531c8);
          func_0x000107c6157c(uVar5);
          func_0x000100075034(FUN_100fe6f68,0,puVar1 + 8);
          func_0x000107c61574(uVar5);
        }
        *(undefined8 *)(unaff_x22 + 0x80) = 0;
        FUN_100fe6840();
        func_0x000107c61574(uVar2);
        plVar4 = (long *)(ulong)*(uint *)(PTR___sScS8IteratorV4nextxSgyYaFTu_11034fd80 + 4);
        func_0x000107c615b8();
        *(long **)(unaff_x22 + 0x88) = plVar4;
        *plVar4 = unaff_x22;
        plVar4[1] = (long)FUN_100fe6d98;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___sScS8IteratorV4nextxSgyYaF_11034fd78)
                  (plVar4,(long *)(unaff_x22 + 0x40),*(undefined8 *)(unaff_x22 + 0x60));
        return;
      }
      (**(code **)(*(long *)(unaff_x22 + 0x68) + 8))
                (*(undefined8 *)(unaff_x22 + 0x70),*(undefined8 *)(unaff_x22 + 0x60));
      func_0x000107c61574(uVar2);
      goto LAB_100fe6c8c;
    }
  }
  (**(code **)(*(long *)(unaff_x22 + 0x68) + 8))
            (*(undefined8 *)(unaff_x22 + 0x70),*(undefined8 *)(unaff_x22 + 0x60));
LAB_100fe6c8c:
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x70));
                    /* WARNING: Could not recover jumptable at 0x000100fe6cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100fe6d98; end: 100fe6ddf;  */

void FUN_100fe6d98(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x88));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fe6de0,0,0);
  return;
}



/* Entry: 100fe6de0; end: 100fe6f67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fe6de0(void)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  long unaff_x22;
  undefined8 uVar6;
  long lVar7;
  
  lVar7 = *(long *)(unaff_x22 + 0x40);
  if (*(char *)(unaff_x22 + 0x48) != '\x01') {
    uVar5 = *(undefined8 *)(unaff_x22 + 0x80);
    uVar2 = *(long *)(unaff_x22 + 0x58) + 0x10;
    func_0x000107c61648();
    if (uVar2 != 0) {
      uVar3 = uVar2;
      func_0x000107c5fd5c();
      if ((uVar3 & 1) == 0) {
        uVar6 = *(undefined8 *)(uVar2 + _DAT_112d531c0);
        *(long *)(unaff_x22 + 0x20) = lVar7;
        func_0x000107c6157c(uVar6);
        puVar1 = PTR___sytN_11034f1b0;
        func_0x000100075034(FUN_100fe7060,unaff_x22 + 0x10,PTR___sytN_11034f1b0 + 8);
        func_0x000107c61574(uVar6);
        if (lVar7 != 1) {
          uVar6 = *(undefined8 *)(uVar2 + _DAT_112d531c8);
          func_0x000107c6157c(uVar6);
          func_0x000100075034(FUN_100fe6f68,0,puVar1 + 8);
          func_0x000107c61574(uVar6);
        }
        *(undefined8 *)(unaff_x22 + 0x80) = uVar5;
        FUN_100fe6840();
        func_0x000107c61574(uVar2);
        plVar4 = (long *)(ulong)*(uint *)(PTR___sScS8IteratorV4nextxSgyYaFTu_11034fd80 + 4);
        func_0x000107c615b8();
        *(long **)(unaff_x22 + 0x88) = plVar4;
        *plVar4 = unaff_x22;
        plVar4[1] = (long)FUN_100fe6d98;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___sScS8IteratorV4nextxSgyYaF_11034fd78)
                  (plVar4,(long *)(unaff_x22 + 0x40),*(undefined8 *)(unaff_x22 + 0x60));
        return;
      }
      (**(code **)(*(long *)(unaff_x22 + 0x68) + 8))
                (*(undefined8 *)(unaff_x22 + 0x70),*(undefined8 *)(unaff_x22 + 0x60));
      func_0x000107c61574(uVar2);
      goto LAB_100fe6e60;
    }
  }
  (**(code **)(*(long *)(unaff_x22 + 0x68) + 8))
            (*(undefined8 *)(unaff_x22 + 0x70),*(undefined8 *)(unaff_x22 + 0x60));
LAB_100fe6e60:
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x70));
                    /* WARNING: Could not recover jumptable at 0x000100fe6e84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100fe6f68; end: 100fe6f6f;  */

void FUN_100fe6f68(undefined1 *param_1)

{
  *param_1 = 0;
  return;
}



/* Entry: 100fe6f70; end: 100fe6fc7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fe6f70(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *unaff_x20;
  long lVar3;
  
  lVar1 = _DAT_112d531e0;
  lVar3 = *unaff_x20;
  lVar2 = 0x112d52f68;
  func_0x0001000285a8(0x112d52f68,&UNK_10d919a00);
                    /* WARNING: Could not recover jumptable at 0x000100fe6fc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 0x10))(param_1,lVar3 + lVar1,lVar2);
  return;
}



/* Entry: 100fe6fc8; end: 100fe705f;  */

void FUN_100fe6fc8(void)

{
  long *plVar1;
  ulong uVar2;
  long unaff_x20;
  long lVar3;
  long unaff_x22;
  
  lVar3 = 0x112d50c50;
  func_0x0001000285a8(0x112d50c50,&UNK_10d9175b8);
  uVar2 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  uVar2 = uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff);
  lVar3 = *(long *)(unaff_x20 +
                   (*(long *)(*(long *)(lVar3 + -8) + 0x40) + uVar2 + 7 & 0xffffffffffffff8));
  plVar1 = (long *)0x90;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100fe71b4;
  plVar1[10] = unaff_x20 + uVar2;
  plVar1[0xb] = lVar3;
  lVar3 = 0x112d53348;
  func_0x0001000285a8(0x112d53348,&UNK_10d919b10);
  plVar1[0xc] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar1[0xd] = lVar3;
  uVar2 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[0xe] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fe6b30,0,0);
  return;
}



/* Entry: 100fe7060; end: 100fe7087;  */

void FUN_100fe7060(undefined8 *param_1)

{
  long unaff_x20;
  
  *param_1 = *(undefined8 *)(unaff_x20 + 0x10);
  return;
}



/* Entry: 100fe7088; end: 100fe70eb;  */

void FUN_100fe7088(void)

{
  ulong uVar1;
  long *plVar2;
  long unaff_x20;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x20 + 0x38);
  plVar2 = (long *)0x320;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_100fe70ec;
  plVar2[0x54] = lVar3;
  plVar2[0x53] = unaff_x20 + 0x10;
  lVar3 = 0x112d52f50;
  func_0x0001000285a8(0x112d52f50,&UNK_10d919830);
  plVar2[0x55] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar2[0x56] = lVar3;
  uVar1 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar2[0x57] = uVar1;
  lVar3 = 0x112d52f60;
  func_0x0001000285a8(0x112d52f60,&UNK_10d919850);
  plVar2[0x58] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar2[0x59] = lVar3;
  uVar1 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar2[0x5a] = uVar1;
  lVar3 = 0x112d52f68;
  func_0x0001000285a8(0x112d52f68,&UNK_10d919a00);
  plVar2[0x5b] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar2[0x5c] = lVar3;
  uVar1 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar2[0x5d] = uVar1;
  lVar3 = 0x112d53358;
  func_0x0001000285a8(0x112d53358,&UNK_10d91b4d0);
  plVar2[0x5e] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar2[0x5f] = lVar3;
  uVar1 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar2[0x60] = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fe6408,0,0);
  return;
}



/* Entry: 100fe70ec; end: 100fe7127;  */

void FUN_100fe70ec(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000100fe7124. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 100fe7128; end: 100fe716f;  */

undefined8 FUN_100fe7128(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112d53360;
  func_0x0001000285a8(0x112d53360,&UNK_10d919b30);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 100fe7170; end: 100fe71b3;  */

void FUN_100fe7170(undefined8 *param_1)

{
  long unaff_x20;
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(unaff_x20 + 0x10);
  func_0x000107c6142c(*param_1);
  *param_1 = *puVar1;
  func_0x000107c61434();
  return;
}



/* Entry: 100fe71b4; end: 100fe71b7;  */

void FUN_100fe71b4(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000100fe7124. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 100fe71b8; end: 100fe7203;  */

void FUN_100fe71b8(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61470();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_defaultActor_deallocate_110350098)();
  return;
}



/* Entry: 100fe7204; end: 100fe7227;  */

void FUN_100fe7204(void)

{
  return;
}



/* Entry: 100fe7228; end: 100fe73db;  */

void FUN_100fe7228(undefined8 param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long unaff_x22;
  undefined8 uVar6;
  long lVar7;
  
  lVar7 = *(long *)(unaff_x22 + 0x50);
  lVar5 = *(long *)(lVar7 + 0x70);
  *(long *)(unaff_x22 + 0x58) = lVar5;
  if (lVar5 == 0) {
    uVar6 = 0;
LAB_100fe72e4:
                    /* WARNING: Could not recover jumptable at 0x000100fe72fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(uVar6);
    return;
  }
  lVar1 = lVar5;
  func_0x000107c615f0();
  func_0x000107c5ed70();
  *(long *)(unaff_x22 + 0x60) = lVar1;
  *(ulong *)(unaff_x22 + 0x68) = param_2;
  func_0x000107c61428(lVar7 + 0x78,unaff_x22 + 0x10,0,0);
  lVar7 = *(long *)(lVar7 + 0x78);
  if (*(long *)(lVar7 + 0x10) != 0) {
    func_0x000107c61438(lVar7,2);
    lVar2 = lVar1;
    uVar4 = param_2;
    func_0x000100029284();
    if ((uVar4 & 1) != 0) {
      uVar6 = *(undefined8 *)(*(long *)(lVar7 + 0x38) + lVar2 * 8);
      func_0x000107c61174(uVar6);
      func_0x000107c61430(lVar7,2);
      func_0x000107c615e8(lVar5);
      func_0x000107c6142c(param_2);
      goto LAB_100fe72e4;
    }
    func_0x000107c61430(lVar7,2);
  }
  func_0x0001000285a8(0x112d4f920,&UNK_10d92c9e0);
  lVar7 = lVar1;
  func_0x000107c5fadc(lVar1,param_2);
  func_0x000107c5fadc(lVar1,param_2);
  func_0x000107c45094();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  func_0x000107c61170(lVar7);
  lVar7 = lVar5;
  func_0x000100759c94(lVar5,0);
  *(long *)(unaff_x22 + 0x70) = lVar7;
  func_0x000107c61170(lVar5);
  plVar3 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x78) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100fe73dc;
                    /* WARNING: Could not recover jumptable at 0x000100fe73d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_100f96304();
  return;
}



/* Entry: 100fe73dc; end: 100fe742f;  */

void FUN_100fe73dc(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x80) = param_1;
  *(undefined1 *)(lVar1 + 0x88) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x78));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fe7430,0,0);
  return;
}



/* Entry: 100fe7430; end: 100fe74ef;  */

void FUN_100fe7430(void)

{
  int iVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  if (*(char *)(unaff_x22 + 0x88) == '\x01') {
    *(undefined8 *)(unaff_x22 + 0x40) = *(undefined8 *)(unaff_x22 + 0x80);
    iVar1 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar1 != 0) {
      uVar3 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0x40,uVar3,PTR___ss5ErrorWS_11034ee10);
    }
    uVar4 = *(undefined8 *)(unaff_x22 + 0x80);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x50);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x70));
    FUN_100f838dc(uVar4,1);
    pcVar2 = FUN_100fe7628;
  }
  else {
    uVar3 = *(undefined8 *)(unaff_x22 + 0x50);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x70));
    pcVar2 = FUN_100fe74f0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,uVar3,0);
  return;
}



/* Entry: 100fe74f0; end: 100fe7627;  */

void FUN_100fe74f0(ulong param_1)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x22;
  undefined8 uVar8;
  long lVar9;
  
  if (*(long *)(unaff_x22 + 0x80) == 0) {
    uVar7 = *(undefined8 *)(unaff_x22 + 0x58);
    func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x68));
    func_0x000107c615e8(uVar7);
  }
  else {
    func_0x000107c5fd5c();
    uVar2 = *(undefined1 *)(unaff_x22 + 0x88);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x80);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x68);
    if ((param_1 & 1) == 0) {
      uVar6 = *(undefined8 *)(unaff_x22 + 0x58);
      uVar1 = *(undefined8 *)(unaff_x22 + 0x60);
      lVar9 = *(long *)(unaff_x22 + 0x50);
      func_0x000107c61428(lVar9 + 0x78,unaff_x22 + 0x28,0x21,0);
      FUN_100f96518(uVar7,uVar2);
      uVar3 = uVar7;
      func_0x000107c61174(uVar7);
      uVar4 = *(undefined8 *)(lVar9 + 0x78);
      func_0x000107c61558(uVar4);
      uVar5 = *(undefined8 *)(lVar9 + 0x78);
      *(undefined8 *)(lVar9 + 0x78) = 0x8000000000000000;
      func_0x000100fdaeac(uVar3,uVar1,uVar8,uVar4);
      func_0x000107c6142c(uVar8);
      *(undefined8 *)(lVar9 + 0x78) = uVar5;
      func_0x000107c614a8(unaff_x22 + 0x28);
      func_0x000107c615e8(uVar6);
      FUN_100f838dc(uVar7,uVar2);
      uVar7 = *(undefined8 *)(unaff_x22 + 0x80);
      goto LAB_100fe7604;
    }
    uVar6 = *(undefined8 *)(unaff_x22 + 0x58);
    func_0x000107c6142c(uVar8);
    func_0x000107c615e8(uVar6);
    FUN_100f838dc(uVar7,uVar2);
  }
  uVar7 = 0;
LAB_100fe7604:
                    /* WARNING: Could not recover jumptable at 0x000100fe7624. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar7);
  return;
}



/* Entry: 100fe7628; end: 100fe76cb;  */

void FUN_100fe7628(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
  func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x68));
  func_0x000107c615e8(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000100fe7664. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}



/* Entry: 100fe76cc; end: 100fe773b;  */

void FUN_100fe76cc(undefined8 param_1,undefined1 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0x60) = param_2;
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  *(undefined8 *)(unaff_x22 + 0x30) = unaff_x20;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x38) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x40) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x48) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fe773c,uVar1,uVar2);
  return;
}



/* Entry: 100fe773c; end: 100fe788f;  */

void FUN_100fe773c(void)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar6 = *(long *)(unaff_x22 + 0x30);
  uVar2 = *(undefined1 *)(unaff_x22 + 0x60);
  func_0x0001000a8868(lVar6 + 0x10,*(undefined8 *)(lVar6 + 0x28));
  uVar3 = 0;
  FUN_100fda79c(0);
  FUN_100fda138(uVar1,uVar2,uVar3,&PTR_DAT_110373a50);
  lVar6 = lVar6 + 0x78;
  func_0x000107c61618();
  if (lVar6 == 0) {
    lVar6 = *(long *)(unaff_x22 + 0x28);
    FUN_100fe7920();
    *(long *)(unaff_x22 + 0x50) = lVar6;
    if (lVar6 == 0) {
      func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x38));
      goto LAB_100fe77bc;
    }
    lVar5 = *(long *)(unaff_x22 + 0x30);
    func_0x000107c59bc8();
    func_0x000107c61428(lVar5 + 0x40,unaff_x22 + 0x10,0,0);
    if (*(long *)(lVar5 + 0x58) != 0) {
      plVar4 = (long *)(lVar5 + 0x40);
      func_0x0001000a8868();
      lVar5 = *plVar4;
      plVar4 = (long *)0x50;
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x58) = plVar4;
      *plVar4 = unaff_x22;
      plVar4[1] = (long)FUN_100fe7890;
      *(undefined1 *)((long)plVar4 + 0x41) = 1;
      *(undefined1 *)(plVar4 + 8) = 0;
      plVar4[2] = lVar6;
      plVar4[3] = lVar5;
      lVar5 = 0;
      func_0x000107c5fcec();
      lVar6 = lVar5;
      func_0x000107c5fce8();
      plVar4[4] = lVar6;
      func_0x000100eea164();
      func_0x000107c5fca8();
      plVar4[5] = lVar5;
      plVar4[6] = lVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_task_switch_110350130)(FUN_100fdc7ac,lVar5,lVar6);
      return;
    }
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x38));
    lVar6 = *(long *)(unaff_x22 + 0x50);
    func_0x000107c61604(*(long *)(unaff_x22 + 0x30) + 0x78,lVar6);
  }
  else {
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x38));
  }
  func_0x000107c61170(lVar6);
LAB_100fe77bc:
                    /* WARNING: Could not recover jumptable at 0x000100fe77d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100fe7890; end: 100fe791f;  */

void FUN_100fe7890(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x58));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (0x100fe78d4,*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x48));
  return;
}



/* Entry: 100fe7920; end: 100fe818b;  */

void FUN_100fe7920(undefined8 param_1)

{
  uint uVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined **ppuVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [8];
  ulong uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  
  ppuVar2 = &puStack_c0;
  ppuVar3 = &puStack_c0;
  ppuVar5 = &puStack_c0;
  ppuVar8 = &puStack_c0;
  ppuVar9 = &puStack_c0;
  ppuVar10 = &puStack_c0;
  ppuVar14 = &puStack_c0;
  func_0x000107c614cc(param_1,auStack_78,auStack_90);
  FUN_101010328(uStack_88,uStack_80);
  uVar1 = (uint)uStack_88 & 0xff;
  if (uVar1 == 1 || (uStack_88 & 0xff) == 0) {
    if ((uStack_88 & 0xff) == 0) {
      return;
    }
    uVar11 = uStack_88;
    uVar18 = uStack_80;
    FUN_1010008e4();
    puVar12 = &UNK_110374680;
    func_0x000107c613fc(&UNK_110374680,0x18,7);
    func_0x000107c61644(puVar12 + 0x10);
    puVar13 = &UNK_110374888;
    func_0x000107c613fc(&UNK_110374888,0x1a,7);
    *(undefined **)(puVar13 + 0x10) = puVar12;
    *(undefined2 *)(puVar13 + 0x18) = 0;
    func_0x000107c6157c(puVar12);
    uVar19 = uVar18;
    func_0x000107c5fadc(uVar11,uVar18);
    pcStack_a0 = (code *)0x100fe8a0c;
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0x42000000;
    pcStack_b0 = FUN_100de205c;
    puStack_a8 = &UNK_1103748a0;
    puStack_98 = puVar13;
    func_0x000107c60bc4(&puStack_c0);
    puVar15 = PTR_PTR_1126aed70;
    func_0x000107c61168();
    func_0x000107c3dac4();
    func_0x000107c61180();
    func_0x000107c6142c(uVar18);
    func_0x000107c60bd0(ppuVar14);
    func_0x000107c61170(uVar11);
    puVar13 = puStack_98;
    func_0x000107c61574(puVar12);
    func_0x000107c61574();
    FUN_1010008f8();
    puVar12 = puVar13;
    uVar18 = uVar19;
    func_0x0001010009c4();
    puVar16 = puVar12;
    FUN_100de9c28();
    func_0x000107c613fc();
    *(undefined8 *)(puVar16 + 0x18) = 3;
    *(undefined8 *)(puVar16 + 0x10) = 1;
    *(undefined **)(puVar16 + 0x20) = puVar15;
  }
  else {
    if (uVar1 == 2) {
      uVar11 = uStack_88;
      uVar18 = uStack_80;
      func_0x000101000a90();
      puVar12 = &UNK_110374680;
      puVar4 = puVar12;
      func_0x000107c613fc(&UNK_110374680,0x18,7);
      func_0x000107c61644(puVar4 + 0x10);
      puVar13 = &UNK_1103747e8;
      func_0x000107c613fc(&UNK_1103747e8,0x1a,7);
      *(undefined **)(puVar13 + 0x10) = puVar4;
      *(undefined2 *)(puVar13 + 0x18) = 0x101;
      func_0x000107c6157c(puVar4);
      uVar17 = uVar18;
      func_0x000107c5fadc(uVar11,uVar18);
      puVar15 = PTR___NSConcreteStackBlock_11034bd00;
      pcStack_a0 = (code *)0x100fe8a04;
      puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b8 = 0x42000000;
      pcStack_b0 = FUN_100de205c;
      puStack_a8 = &UNK_110374800;
      puStack_98 = puVar13;
      func_0x000107c60bc4(&puStack_c0);
      puVar6 = PTR_PTR_1126aed70;
      func_0x000107c61168();
      puVar7 = puVar6;
      func_0x000107c3dac4();
      func_0x000107c61180();
      func_0x000107c6142c(uVar18);
      func_0x000107c60bd0(ppuVar5);
      func_0x000107c61170(uVar11);
      puVar16 = puStack_98;
      func_0x000107c61574(puVar4);
      func_0x000107c61574(puVar16);
      FUN_101000b58();
      func_0x000107c613fc(&UNK_110374680,0x18,7);
      func_0x000107c61644(puVar12 + 0x10);
      puVar13 = &UNK_110374838;
      func_0x000107c613fc(&UNK_110374838,0x1a,7);
      *(undefined **)(puVar13 + 0x10) = puVar12;
      *(undefined2 *)(puVar13 + 0x18) = 0;
      func_0x000107c6157c(puVar12);
      uVar19 = uVar17;
      func_0x000107c5fadc(puVar16,uVar17);
      pcStack_a0 = (code *)0x100fe8a08;
      puStack_c0 = puVar15;
      uStack_b8 = 0x42000000;
      pcStack_b0 = FUN_100de205c;
      puStack_a8 = &UNK_110374850;
      puStack_98 = puVar13;
      func_0x000107c60bc4(&puStack_c0);
      func_0x000107c3dac4();
      func_0x000107c61180();
      func_0x000107c6142c(uVar17);
      func_0x000107c60bd0(ppuVar8);
      func_0x000107c61170(puVar16);
      puVar13 = puStack_98;
      func_0x000107c61574(puVar12);
      func_0x000107c61574();
      FUN_1010008f8();
      puVar12 = puVar13;
      uVar18 = uVar19;
      func_0x000101000c30();
    }
    else if (uVar1 == 3) {
      uVar11 = uStack_88;
      uVar18 = uStack_80;
      func_0x000101000cfc();
      puVar12 = &UNK_110374680;
      puVar4 = puVar12;
      func_0x000107c613fc(&UNK_110374680,0x18,7);
      func_0x000107c61644(puVar4 + 0x10);
      puVar13 = &UNK_110374748;
      func_0x000107c613fc(&UNK_110374748,0x1a,7);
      *(undefined **)(puVar13 + 0x10) = puVar4;
      *(undefined2 *)(puVar13 + 0x18) = 0x201;
      func_0x000107c6157c(puVar4);
      uVar17 = uVar18;
      func_0x000107c5fadc(uVar11,uVar18);
      puVar15 = PTR___NSConcreteStackBlock_11034bd00;
      pcStack_a0 = (code *)0x100fe89fc;
      puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b8 = 0x42000000;
      pcStack_b0 = FUN_100de205c;
      puStack_a8 = &UNK_110374760;
      puStack_98 = puVar13;
      func_0x000107c60bc4(&puStack_c0);
      puVar6 = PTR_PTR_1126aed70;
      func_0x000107c61168();
      puVar7 = puVar6;
      func_0x000107c3dac4();
      func_0x000107c61180();
      func_0x000107c6142c(uVar18);
      func_0x000107c60bd0(ppuVar2);
      func_0x000107c61170(uVar11);
      puVar16 = puStack_98;
      func_0x000107c61574(puVar4);
      func_0x000107c61574(puVar16);
      FUN_101000b58();
      func_0x000107c613fc(&UNK_110374680,0x18,7);
      func_0x000107c61644(puVar12 + 0x10);
      puVar13 = &UNK_110374798;
      func_0x000107c613fc(&UNK_110374798,0x1a,7);
      *(undefined **)(puVar13 + 0x10) = puVar12;
      *(undefined2 *)(puVar13 + 0x18) = 0;
      func_0x000107c6157c(puVar12);
      uVar19 = uVar17;
      func_0x000107c5fadc(puVar16,uVar17);
      pcStack_a0 = (code *)0x100fe8a00;
      puStack_c0 = puVar15;
      uStack_b8 = 0x42000000;
      pcStack_b0 = FUN_100de205c;
      puStack_a8 = &UNK_1103747b0;
      puStack_98 = puVar13;
      func_0x000107c60bc4(&puStack_c0);
      func_0x000107c3dac4();
      func_0x000107c61180();
      func_0x000107c6142c(uVar17);
      func_0x000107c60bd0(ppuVar3);
      func_0x000107c61170(puVar16);
      puVar13 = puStack_98;
      func_0x000107c61574(puVar12);
      func_0x000107c61574();
      func_0x000101000dc8();
      puVar12 = puVar13;
      uVar18 = uVar19;
      func_0x000101000e94();
    }
    else {
      uVar11 = uStack_88;
      uVar18 = uStack_80;
      func_0x000101000f60();
      puVar12 = &UNK_110374680;
      puVar4 = puVar12;
      func_0x000107c613fc(&UNK_110374680,0x18,7);
      func_0x000107c61644(puVar4 + 0x10);
      puVar13 = &UNK_1103746a8;
      func_0x000107c613fc(&UNK_1103746a8,0x1a,7);
      *(undefined **)(puVar13 + 0x10) = puVar4;
      *(undefined2 *)(puVar13 + 0x18) = 0x301;
      func_0x000107c6157c(puVar4);
      uVar17 = uVar18;
      func_0x000107c5fadc(uVar11,uVar18);
      puVar15 = PTR___NSConcreteStackBlock_11034bd00;
      pcStack_a0 = FUN_100fe8840;
      puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b8 = 0x42000000;
      pcStack_b0 = FUN_100de205c;
      puStack_a8 = &UNK_1103746c0;
      puStack_98 = puVar13;
      func_0x000107c60bc4(&puStack_c0);
      puVar6 = PTR_PTR_1126aed70;
      func_0x000107c61168();
      puVar7 = puVar6;
      func_0x000107c3dac4();
      func_0x000107c61180();
      func_0x000107c6142c(uVar18);
      func_0x000107c60bd0(ppuVar9);
      func_0x000107c61170(uVar11);
      puVar16 = puStack_98;
      func_0x000107c61574(puVar4);
      func_0x000107c61574(puVar16);
      FUN_101000b58();
      func_0x000107c613fc(&UNK_110374680,0x18,7);
      func_0x000107c61644(puVar12 + 0x10);
      puVar13 = &UNK_1103746f8;
      func_0x000107c613fc(&UNK_1103746f8,0x1a,7);
      *(undefined **)(puVar13 + 0x10) = puVar12;
      *(undefined2 *)(puVar13 + 0x18) = 0;
      func_0x000107c6157c(puVar12);
      uVar19 = uVar17;
      func_0x000107c5fadc(puVar16,uVar17);
      pcStack_a0 = (code *)0x100fe89f8;
      puStack_c0 = puVar15;
      uStack_b8 = 0x42000000;
      pcStack_b0 = FUN_100de205c;
      puStack_a8 = &UNK_110374710;
      puStack_98 = puVar13;
      func_0x000107c60bc4(&puStack_c0);
      func_0x000107c3dac4();
      func_0x000107c61180();
      func_0x000107c6142c(uVar17);
      func_0x000107c60bd0(ppuVar10);
      func_0x000107c61170(puVar16);
      puVar13 = puStack_98;
      func_0x000107c61574(puVar12);
      func_0x000107c61574();
      FUN_1010008f8();
      puVar12 = puVar13;
      uVar18 = uVar19;
      func_0x00010100102c();
    }
    puVar16 = puVar12;
    FUN_100de9c28();
    func_0x000107c613fc();
    *(undefined8 *)(puVar16 + 0x18) = 5;
    *(undefined8 *)(puVar16 + 0x10) = 2;
    *(undefined **)(puVar16 + 0x20) = puVar7;
    *(undefined **)(puVar16 + 0x28) = puVar6;
  }
  puVar15 = PTR_PTR_1126aed78;
  func_0x000107c610f8(PTR_PTR_1126aed78);
  FUN_100fe8774(puVar13,uVar19,puVar12,uVar18,puVar16,puVar15);
  return;
}



/* Entry: 100fe818c; end: 100fe827b;  */

void FUN_100fe818c(undefined8 param_1,long param_2,undefined1 param_3,undefined1 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [24];
  
  puVar1 = &UNK_110374680;
  func_0x000107c613fc(&UNK_110374680,0x18,7);
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648(param_2);
  func_0x000107c61644(puVar1 + 0x10,param_2);
  func_0x000107c61574(param_2);
  puVar2 = &UNK_1103748d8;
  func_0x000107c613fc(&UNK_1103748d8,0x21,7);
  puVar2[0x10] = param_3;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  puVar2[0x20] = param_4;
  uVar3 = 0x41;
  func_0x0001001ca524(0x41,0,0x48,3,0,0,&UNK_10d919c80,puVar2,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar3);
  return;
}



/* Entry: 100fe827c; end: 100fe82ef;  */

void FUN_100fe827c(undefined8 param_1,undefined1 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0xb9) = param_4;
  *(undefined8 *)(unaff_x22 + 0x80) = param_3;
  *(undefined1 *)(unaff_x22 + 0xb8) = param_2;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x88) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x90) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x98) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fe82f0,uVar1,uVar2);
  return;
}



/* Entry: 100fe82f0; end: 100fe845f;  */

void FUN_100fe82f0(void)

{
  undefined8 uVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  long unaff_x22;
  
  if (*(char *)(unaff_x22 + 0xb8) == '\x01') {
    lVar4 = *(long *)(unaff_x22 + 0x80);
    func_0x000107c61428(lVar4 + 0x10,unaff_x22 + 0x50,0,0);
    lVar4 = lVar4 + 0x10;
    func_0x000107c61648();
    *(long *)(unaff_x22 + 0xa0) = lVar4;
    if (lVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_task_switch_110350130)(FUN_100fe8460,0,0);
      return;
    }
  }
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x88));
  lVar4 = *(long *)(unaff_x22 + 0x80);
  func_0x000107c61428(lVar4 + 0x10,unaff_x22 + 0x38,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61648();
  if (lVar4 != 0) {
    lVar3 = lVar4 + 0x68;
    func_0x000107c61618();
    func_0x000107c61574(lVar4);
    if (lVar3 != 0) {
      bVar2 = *(byte *)(unaff_x22 + 0xb9);
      if (bVar2 < 2) {
        if (bVar2 == 0) {
          FUN_100ff9eb4();
        }
      }
      else if (bVar2 == 2) {
        uVar1 = *(undefined8 *)(lVar3 + 0x60);
        lVar4 = *(long *)(lVar3 + 0x68);
        func_0x0001000a8868(lVar3 + 0x48,uVar1);
        (**(code **)(*(long *)(lVar4 + 0x28) + 0x10))(1,0xd000000000000047,0x800000010ef1ea10,uVar1)
        ;
        lVar4 = *(long *)(lVar3 + 0xd0);
        if (lVar4 != 0) {
          func_0x000107c61174();
          FUN_100ff675c();
          func_0x000107c61170(lVar4);
        }
      }
      else {
        FUN_100ffbdfc();
      }
      func_0x000107c615e8(lVar3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000100fe845c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100fe8460; end: 100fe8533;  */

void FUN_100fe8460(void)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
  long lVar4;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0xa0) + 0x78;
  func_0x000107c61618();
  *(long *)(unaff_x22 + 0xa8) = lVar1;
  if (lVar1 == 0) {
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xa0));
  }
  else {
    lVar4 = *(long *)(unaff_x22 + 0xa0);
    func_0x000107c61428(lVar4 + 0x40,unaff_x22 + 0x68,0,0);
    if (*(long *)(lVar4 + 0x58) != 0) {
      FUN_100fe8918(lVar4 + 0x40,unaff_x22 + 0x10);
      plVar2 = (long *)(unaff_x22 + 0x10);
      func_0x0001000a8868(plVar2,*(undefined8 *)(unaff_x22 + 0x28));
      lVar4 = *plVar2;
      plVar2 = (long *)0x40;
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0xb0) = plVar2;
      *plVar2 = unaff_x22;
      plVar2[1] = (long)FUN_100fe8534;
      plVar2[2] = lVar1;
      plVar2[3] = lVar4;
      lVar1 = 0;
      func_0x000107c5fcec();
      lVar4 = lVar1;
      func_0x000107c5fce8();
      plVar2[4] = lVar4;
      func_0x000100eea164();
      func_0x000107c5fca8();
      plVar2[5] = lVar1;
      plVar2[6] = lVar4;
      pcVar3 = FUN_100fdcba8;
      goto LAB_107c615e0;
    }
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xa0));
    func_0x000107c61170(lVar1);
  }
  lVar1 = *(long *)(unaff_x22 + 0x90);
  lVar4 = *(long *)(unaff_x22 + 0x98);
  pcVar3 = FUN_100fe85c4;
LAB_107c615e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar3,lVar1,lVar4);
  return;
}



/* Entry: 100fe8534; end: 100fe85c3;  */

void FUN_100fe8534(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0xb0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x100fe857c,0,0);
  return;
}



/* Entry: 100fe85c4; end: 100fe86d7;  */

void FUN_100fe85c4(void)

{
  undefined8 uVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x88));
  lVar4 = *(long *)(unaff_x22 + 0x80);
  func_0x000107c61428(lVar4 + 0x10,unaff_x22 + 0x38,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61648();
  if (lVar4 != 0) {
    lVar3 = lVar4 + 0x68;
    func_0x000107c61618();
    func_0x000107c61574(lVar4);
    if (lVar3 != 0) {
      bVar2 = *(byte *)(unaff_x22 + 0xb9);
      if (bVar2 < 2) {
        if (bVar2 == 0) {
          FUN_100ff9eb4();
        }
      }
      else if (bVar2 == 2) {
        uVar1 = *(undefined8 *)(lVar3 + 0x60);
        lVar4 = *(long *)(lVar3 + 0x68);
        func_0x0001000a8868(lVar3 + 0x48,uVar1);
        (**(code **)(*(long *)(lVar4 + 0x28) + 0x10))(1,0xd000000000000047,0x800000010ef1ea10,uVar1)
        ;
        lVar4 = *(long *)(lVar3 + 0xd0);
        if (lVar4 != 0) {
          func_0x000107c61174();
          FUN_100ff675c();
          func_0x000107c61170(lVar4);
        }
      }
      else {
        FUN_100ffbdfc();
      }
      func_0x000107c615e8(lVar3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000100fe86d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100fe86d8; end: 100fe8737;  */

void FUN_100fe86d8(long param_1,undefined1 param_2)

{
  long lVar1;
  long *plVar2;
  long *unaff_x20;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *unaff_x20;
  plVar2 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_100fe8738;
  *(undefined1 *)(plVar2 + 0xc) = param_2;
  plVar2[5] = param_1;
  plVar2[6] = lVar3;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar3 = lVar1;
  func_0x000107c5fce8();
  plVar2[7] = lVar3;
  func_0x000100eea164();
  func_0x000107c5fca8();
  plVar2[8] = lVar1;
  plVar2[9] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fe773c,lVar1,lVar3);
  return;
}



/* Entry: 100fe8738; end: 100fe8773;  */

void FUN_100fe8738(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000100fe8770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 100fe8774; end: 100fe883f;  */

undefined8
FUN_100fe8774(undefined8 param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 unaff_x20;
  
  if (param_2 == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c5fadc();
    func_0x000107c6142c(param_2);
  }
  if (param_4 == 0) {
    param_3 = 0;
  }
  else {
    func_0x000107c5fadc(param_3,param_4);
    func_0x000107c6142c(param_4);
  }
  uVar1 = 0;
  FUN_100dfe1a0(0);
  uVar2 = param_5;
  func_0x000107c5fc48(param_5,uVar1);
  func_0x000107c6142c(param_5);
  func_0x000107c48d50();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar2);
  return unaff_x20;
}



/* Entry: 100fe8840; end: 100fe886b;  */

void FUN_100fe8840(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar6 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined1 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined1 *)(unaff_x20 + 0x19);
  puVar3 = &UNK_110374680;
  func_0x000107c613fc(&UNK_110374680,0x18,7);
  func_0x000107c61428(lVar6 + 0x10,auStack_48,0,0);
  lVar6 = lVar6 + 0x10;
  func_0x000107c61648(lVar6);
  func_0x000107c61644(puVar3 + 0x10,lVar6);
  func_0x000107c61574(lVar6);
  puVar4 = &UNK_1103748d8;
  func_0x000107c613fc(&UNK_1103748d8,0x21,7);
  puVar4[0x10] = uVar1;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  puVar4[0x20] = uVar2;
  uVar5 = 0x41;
  func_0x0001001ca524(0x41,0,0x48,3,0,0,&UNK_10d919c80,puVar4,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar4);
  func_0x000107c61574(uVar5);
  return;
}



/* Entry: 100fe886c; end: 100fe88db;  */

void FUN_100fe886c(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  long lVar3;
  long *plVar4;
  long unaff_x20;
  long unaff_x22;
  long lVar5;
  
  uVar1 = *(undefined1 *)(unaff_x20 + 0x10);
  lVar5 = *(long *)(unaff_x20 + 0x18);
  plVar4 = (long *)0xc0;
  uVar2 = *(undefined1 *)(unaff_x20 + 0x20);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_100fe88dc;
  *(undefined1 *)((long)plVar4 + 0xb9) = uVar2;
  plVar4[0x10] = lVar5;
  *(undefined1 *)(plVar4 + 0x17) = uVar1;
  lVar3 = 0;
  func_0x000107c5fcec();
  lVar5 = lVar3;
  func_0x000107c5fce8();
  plVar4[0x11] = lVar5;
  func_0x000100eea164();
  func_0x000107c5fca8();
  plVar4[0x12] = lVar3;
  plVar4[0x13] = lVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fe82f0,lVar3,lVar5);
  return;
}



/* Entry: 100fe88dc; end: 100fe8917;  */

void FUN_100fe88dc(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000100fe8914. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 100fe8918; end: 100fe89c7;  */

long FUN_100fe8918(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 100fe89c8; end: 100fe8a0f;  */

void FUN_100fe89c8(long param_1,long param_2)

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



/* Entry: 100fe8a10; end: 100fe8ba7;  */

/* WARNING: Possible PIC construction at 0x000100fe8af0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100fe8af4) */

void FUN_100fe8a10(void)

{
  long *plVar1;
  undefined *puVar2;
  code *pcVar3;
  code *pcVar4;
  undefined *puVar5;
  long unaff_x20;
  long *plVar6;
  
  func_0x0001000285a8(0x112d51030,&UNK_10d917a40);
  plVar6 = *(long **)(unaff_x20 + 0x10);
  func_0x000107c41b80();
  func_0x000107c61180();
  plVar1 = plVar6;
  func_0x0001000b637c();
  func_0x000107c61170(plVar6);
  puVar2 = &UNK_110374960;
  func_0x000107c613fc(&UNK_110374960,0x18,7);
  func_0x000107c61644(puVar2 + 0x10);
  pcVar3 = FUN_100fe91a0;
  puVar5 = puVar2;
  (**(code **)(*plVar1 + 0x60))(FUN_100fe91a0);
  func_0x000107c61574(plVar1);
  func_0x000107c61574(puVar2);
  pcVar4 = pcVar3;
  func_0x000107c614f0(pcVar3);
  (**(code **)(puVar5 + 0x18))(*(undefined8 *)(unaff_x20 + 0xa0),pcVar4,puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(pcVar3);
  return;
}



/* Entry: 100fe8ba8; end: 100fe8dd3;  */

void FUN_100fe8ba8(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_98 [24];
  undefined8 uStack_80;
  long lStack_78;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    uVar1 = *(undefined8 *)(param_2 + 0x30);
    lVar2 = *(long *)(param_2 + 0x38);
    func_0x0001000a8868(param_2 + 0x18,uVar1);
    (**(code **)(lVar2 + 0x10))(1,0xd000000000000033,0x800000010ef1eba0,uVar1,lVar2);
    func_0x000107c61428(param_2 + 0x78,auStack_70,0,0);
    if (*(long *)(param_2 + 0x90) == 0) {
      func_0x000107c61574(param_2);
    }
    else {
      FUN_100fe9114(param_2 + 0x78,auStack_98);
      func_0x0001000a8868(auStack_98,uStack_80);
      (**(code **)(lStack_78 + 0x18))(uStack_80,lStack_78);
      func_0x000107c61574(param_2);
      func_0x0001000834e4(auStack_98);
    }
  }
  return;
}



/* Entry: 100fe8dd4; end: 100fe8e47;  */

void FUN_100fe8dd4(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x0001000834e4(unaff_x20 + 0x18);
  func_0x0001000834e4(unaff_x20 + 0x40);
  func_0x0001004ecf54(*(undefined8 *)(unaff_x20 + 0x68),*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000100fe9158(unaff_x20 + 0x78);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 100fe8e48; end: 100fe8fd7;  */

void FUN_100fe8e48(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_80 [24];
  undefined8 uStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  lVar2 = *(long *)(unaff_x20 + 0x38);
  func_0x0001000a8868(unaff_x20 + 0x18,uVar1);
  (**(code **)(lVar2 + 0x10))(1,0xd000000000000032,0x800000010ef1eaa0,uVar1,lVar2);
  func_0x000107c61428(unaff_x20 + 0x78,auStack_58,0,0);
  if (*(long *)(unaff_x20 + 0x90) != 0) {
    FUN_100fe9114(unaff_x20 + 0x78,auStack_80);
    func_0x0001000a8868(auStack_80,uStack_68);
    (**(code **)(lStack_60 + 0x20))(uStack_68,lStack_60);
    func_0x0001000834e4(auStack_80);
  }
  return;
}



/* Entry: 100fe8fd8; end: 100fe8fdf;  */

void FUN_100fe8fd8(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_80 [24];
  undefined8 uStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  lVar2 = *(long *)(unaff_x20 + 0x38);
  func_0x0001000a8868(unaff_x20 + 0x18,uVar1);
  (**(code **)(lVar2 + 0x10))(1,0xd000000000000032,0x800000010ef1eaa0,uVar1,lVar2);
  func_0x000107c61428(unaff_x20 + 0x78,auStack_58,0,0);
  if (*(long *)(unaff_x20 + 0x90) != 0) {
    FUN_100fe9114(unaff_x20 + 0x78,auStack_80);
    func_0x0001000a8868(auStack_80,uStack_68);
    (**(code **)(lStack_60 + 0x20))(uStack_68,lStack_60);
    func_0x0001000834e4(auStack_80);
  }
  return;
}



/* Entry: 100fe8fe0; end: 100fe910f;  */

void FUN_100fe8fe0(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 uStack_41;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  lVar2 = *(long *)(unaff_x20 + 0x38);
  func_0x0001000a8868(unaff_x20 + 0x18,uVar1);
  (**(code **)(lVar2 + 0x10))(1,0xd000000000000034,0x800000010ef1eae0,uVar1,lVar2);
  uStack_41 = 0;
  func_0x000100087c34(&uStack_41);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x58);
  lVar2 = *(long *)(unaff_x20 + 0x60);
  func_0x0001000a8868(unaff_x20 + 0x40,uVar1);
  (**(code **)(lVar2 + 0x28))(uVar1,lVar2);
  return;
}



/* Entry: 100fe9110; end: 100fe9113;  */

void FUN_100fe9110(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 uStack_41;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  lVar2 = *(long *)(unaff_x20 + 0x38);
  func_0x0001000a8868(unaff_x20 + 0x18,uVar1);
  (**(code **)(lVar2 + 0x10))(1,0xd000000000000034,0x800000010ef1eae0,uVar1,lVar2);
  uStack_41 = 0;
  func_0x000100087c34(&uStack_41);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x58);
  lVar2 = *(long *)(unaff_x20 + 0x60);
  func_0x0001000a8868(unaff_x20 + 0x40,uVar1);
  (**(code **)(lVar2 + 0x28))(uVar1,lVar2);
  return;
}



/* Entry: 100fe9114; end: 100fe919f;  */

long FUN_100fe9114(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 100fe91a0; end: 100fe91af;  */

void FUN_100fe91a0(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_98 [24];
  undefined8 uStack_80;
  long lStack_78;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  lVar3 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar3 != 0) {
    uVar1 = *(undefined8 *)(lVar3 + 0x30);
    lVar2 = *(long *)(lVar3 + 0x38);
    func_0x0001000a8868(lVar3 + 0x18,uVar1);
    (**(code **)(lVar2 + 0x10))(1,0xd000000000000033,0x800000010ef1eba0,uVar1,lVar2);
    func_0x000107c61428(lVar3 + 0x78,auStack_70,0,0);
    if (*(long *)(lVar3 + 0x90) == 0) {
      func_0x000107c61574(lVar3);
    }
    else {
      FUN_100fe9114(lVar3 + 0x78,auStack_98);
      func_0x0001000a8868(auStack_98,uStack_80);
      (**(code **)(lStack_78 + 0x18))(uStack_80,lStack_78);
      func_0x000107c61574(lVar3);
      func_0x0001000834e4(auStack_98);
    }
  }
  return;
}



/* Entry: 100fe91b0; end: 100fe92db;  */

void FUN_100fe91b0(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*param_1);
  return;
}



/* Entry: 100fe92dc; end: 100fe958f;  */

int FUN_100fe92dc(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfd < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 2) {
      iVar2 = 4;
    }
    if (param_2 + 2 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_100fe9358;
        goto LAB_100fe933c;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_100fe933c:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_100fe9358:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 100fe9590; end: 100fe95ff;  */

ulong * FUN_100fe9590(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  func_0x000107c614b0(uVar2 & 0x7fffffffffffffff);
  uVar1 = *param_1;
  *param_1 = uVar2;
  func_0x000107c614ac(uVar1 & 0x7fffffffffffffff);
  return param_1;
}



/* Entry: 100fe9600; end: 100fe972b;  */

int FUN_100fe9600(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7e < param_2) && ((char)param_1[2] != '\0')) {
    return *param_1 + 0x7f;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)param_1 >> 0x20);
  uVar1 = (uVar1 >> 0x1f | (uVar1 >> 0x19 & 0x38 | (uint)*(undefined8 *)param_1 & 7) << 1) ^ 0x7f;
  if (0x7d < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}


