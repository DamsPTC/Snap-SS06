/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103ae7264; end: 103ae72d3;  */

void FUN_103ae7264(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x360));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0x388) = *(undefined8 *)(lVar2 + 0x290);
    *(undefined8 *)(lVar2 + 0x380) = 0;
    pcVar1 = FUN_103ae7330;
  }
  else {
    func_0x000107c6142c(*(undefined8 *)(lVar2 + 0x308));
    *(long *)(lVar2 + 0x390) = unaff_x20;
    pcVar1 = FUN_103ae79fc;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 103ae72d4; end: 103ae732f;  */

void FUN_103ae72d4(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x378) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x370));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_103ae7a94;
  }
  else {
    pcVar1 = (code *)0x103ae7ae0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 103ae7330; end: 103ae79fb;  */

void FUN_103ae7330(void)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 uVar13;
  long unaff_x22;
  undefined8 uVar14;
  undefined8 uVar15;
  
  lVar12 = *(long *)(unaff_x22 + 0x380);
  func_0x000107c5fd64();
  if (lVar12 != 0) {
    func_0x000107c614ac(lVar12);
  }
  uVar9 = *(ulong *)(unaff_x22 + 0x388);
  puVar3 = PTR_PTR_1126affe8;
  func_0x000107c61168();
  *(undefined **)(unaff_x22 + 0x398) = puVar3;
  func_0x000107c44410();
  func_0x000107c61180();
  *(code **)(unaff_x22 + 200) = FUN_103ae6340;
  *(undefined8 *)(unaff_x22 + 0xd0) = 0;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined **)(unaff_x22 + 0xa8) = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined8 *)(unaff_x22 + 0xb0) = 0x42000000;
  *(undefined **)(unaff_x22 + 0xb8) = &UNK_100ff0b04;
  *(undefined **)(unaff_x22 + 0xc0) = &UNK_1106ce2f8;
  lVar12 = unaff_x22 + 0xa8;
  func_0x000107c60bc4(lVar12);
  func_0x000107c4e918();
  func_0x000107c61180();
  func_0x000107c60bd0(lVar12);
  func_0x000107c61170(puVar3);
  if (uVar9 == 0) {
    uVar4 = *(undefined8 *)(unaff_x22 + 0x308);
LAB_103ae7618:
    func_0x000107c6142c(uVar4);
  }
  else {
    uVar4 = 0;
    FUN_103ae874c(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar5 = uVar9;
    func_0x000107c5fc54(uVar9,uVar4);
    func_0x000107c61170(uVar9);
    if (uVar5 >> 0x3e == 0) {
      uVar9 = *(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar9 = uVar5 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar5) {
        uVar9 = uVar5;
      }
      func_0x000107c60480();
    }
    if (uVar9 == 0) {
      uVar4 = *(undefined8 *)(unaff_x22 + 0x308);
      func_0x000107c6142c(uVar5);
      goto LAB_103ae7618;
    }
    if ((uVar5 & 0xc000000000000001) == 0) {
      if (*(long *)((uVar5 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103ae79d8);
        (*pcVar2)();
      }
      uVar4 = *(undefined8 *)(uVar5 + 0x20);
      func_0x000107c61174();
    }
    else {
      uVar4 = 0;
      FUN_103ae6458(0,uVar5,&PTR__OBJC_CLASS___NSNumber_1126ae570,0x112d38c88);
    }
    *(undefined8 *)(unaff_x22 + 0x3a0) = uVar4;
    lVar12 = *(long *)(unaff_x22 + 0x388);
    func_0x000107c6142c(uVar5);
    func_0x000107c4e924();
    func_0x000107c61180();
    if (lVar12 != 0) {
      lVar6 = lVar12;
      func_0x000107c4c930();
      func_0x000107c61180();
      func_0x000107c61170(lVar12);
      if (lVar6 != 0) {
        lVar12 = lVar6;
        func_0x000107c4c99c();
        func_0x000107c61180();
        *(long *)(unaff_x22 + 0x3a8) = lVar12;
        func_0x000107c61170(lVar6);
        if (lVar12 != 0) {
          uVar13 = *(undefined8 *)(unaff_x22 + 0x388);
          puVar10 = *(undefined8 **)(unaff_x22 + 0x310);
          uVar14 = *(undefined8 *)(unaff_x22 + 0x308);
          uVar15 = *(undefined8 *)(unaff_x22 + 0x300);
          func_0x000107c61428(puVar10,unaff_x22 + 0x1c8,0,0);
          uVar4 = *puVar10;
          func_0x000107c61174(uVar4);
          func_0x000107c602fc(0x14);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(0xd000000000000012,0x800000010f19d200);
          func_0x000100029b28(uVar15,uVar14);
          *(undefined8 *)(unaff_x22 + 0x3b0) = uVar15;
          func_0x000107c6142c(uVar14);
          func_0x000107c61170(uVar4);
          func_0x0001000285a8(0x112d555b0,&UNK_10d91c610);
          func_0x000107c4ca84();
          func_0x000107c61180();
          uVar4 = uVar13;
          func_0x000100759c94();
          *(undefined8 *)(unaff_x22 + 0x3b8) = uVar4;
          func_0x000107c61170(uVar13);
          plVar8 = (long *)0x80;
          func_0x000107c615b8();
          *(long **)(unaff_x22 + 0x3c0) = plVar8;
          pcVar2 = (code *)0x103ae7b30;
          goto LAB_103ae78a0;
        }
      }
    }
    func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x308));
    func_0x000107c61170(uVar4);
  }
  *(undefined8 *)(unaff_x22 + 0x3d0) = 0;
  puVar10 = *(undefined8 **)(unaff_x22 + 0x398);
  puVar11 = *(undefined8 **)(unaff_x22 + 0x388);
  func_0x000107c4b838();
  func_0x000107c61180();
  *(undefined8 *)(unaff_x22 + 0x98) = 0x103ae6384;
  *(undefined8 *)(unaff_x22 + 0xa0) = 0;
  *(undefined **)(unaff_x22 + 0x78) = puVar1;
  *(undefined8 *)(unaff_x22 + 0x80) = 0x42000000;
  *(undefined **)(unaff_x22 + 0x88) = &UNK_100ff0b04;
  *(undefined **)(unaff_x22 + 0x90) = &UNK_1106ce320;
  lVar12 = unaff_x22 + 0x78;
  func_0x000107c60bc4(lVar12);
  func_0x000107c4e918();
  func_0x000107c61180();
  func_0x000107c60bd0(lVar12);
  func_0x000107c61170();
  if (puVar11 != (undefined8 *)0x0) {
    uVar4 = 0;
    FUN_103ae874c(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    puVar10 = puVar11;
    func_0x000107c5fc54(puVar11,uVar4);
    func_0x000107c61170(puVar11);
    if ((ulong)puVar10 >> 0x3e == 0) {
      puVar11 = *(undefined8 **)(((ulong)puVar10 & 0xffffffffffffff8) + 0x10);
    }
    else {
      puVar11 = (undefined8 *)((ulong)puVar10 & 0xffffffffffffff8);
      if ((undefined8 *)0x7fffffffffffffff < puVar10) {
        puVar11 = puVar10;
      }
      func_0x000107c60480();
    }
    if (puVar11 != (undefined8 *)0x0) {
      if (((ulong)puVar10 & 0xc000000000000001) == 0) {
        if (*(long *)(((ulong)puVar10 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x103ae79fc);
          (*pcVar2)();
        }
        uVar4 = puVar10[4];
        func_0x000107c61174();
      }
      else {
        uVar4 = 0;
        FUN_103ae6458(0,puVar10,&PTR__OBJC_CLASS___NSNumber_1126ae570,0x112d38c88);
      }
      *(undefined8 *)(unaff_x22 + 0x3d8) = uVar4;
      puVar11 = *(undefined8 **)(unaff_x22 + 0x388);
      func_0x000107c6142c(puVar10);
      func_0x000107c4e924();
      func_0x000107c61180();
      if (puVar11 != (undefined8 *)0x0) {
        puVar10 = puVar11;
        func_0x000107c4c930();
        func_0x000107c61180();
        func_0x000107c61170();
        if (puVar10 != (undefined8 *)0x0) {
          puVar7 = puVar10;
          func_0x000107c4c99c();
          func_0x000107c61180();
          *(undefined8 **)(unaff_x22 + 0x3e0) = puVar7;
          func_0x000107c61170();
          puVar11 = puVar10;
          if (puVar7 != (undefined8 *)0x0) {
            lVar12 = *(long *)(unaff_x22 + 0x388);
            func_0x000107c4e924();
            func_0x000107c61180();
            if (lVar12 == 0) {
LAB_103ae7820:
              uVar4 = 0xffffffffffffffff;
            }
            else {
              lVar6 = lVar12;
              func_0x000107c4c930();
              func_0x000107c61180();
              func_0x000107c61170(lVar12);
              if (lVar6 == 0) goto LAB_103ae7820;
              lVar12 = lVar6;
              func_0x000107c5d0f0();
              func_0x000107c61170(lVar6);
              uVar15 = 0xffffffffffffffff;
              if ((int)lVar12 == 1) {
                uVar15 = 1;
              }
              uVar4 = 0;
              if ((int)lVar12 != 0) {
                uVar4 = uVar15;
              }
            }
            *(undefined8 *)(unaff_x22 + 1000) = uVar4;
            uVar15 = *(undefined8 *)(unaff_x22 + 0x388);
            func_0x0001000285a8(0x112d555b0,&UNK_10d91c610);
            func_0x000107c4ca84();
            func_0x000107c61180();
            uVar4 = uVar15;
            func_0x000100759c94();
            *(undefined8 *)(unaff_x22 + 0x3f0) = uVar4;
            func_0x000107c61170(uVar15);
            plVar8 = (long *)0x80;
            func_0x000107c615b8();
            *(long **)(unaff_x22 + 0x3f8) = plVar8;
            pcVar2 = FUN_103ae80a8;
LAB_103ae78a0:
            *plVar8 = unaff_x22;
            plVar8[1] = (long)pcVar2;
                    /* WARNING: Could not recover jumptable at 0x000103ae78c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)&UNK_101a155f0)();
            return;
          }
        }
      }
      lVar12 = unaff_x22 + 0x1f8;
      uVar13 = *(undefined8 *)(unaff_x22 + 0x388);
      uVar15 = *(undefined8 *)(unaff_x22 + 0x358);
      uVar14 = *(undefined8 *)(unaff_x22 + 0x350);
      FUN_103addd84();
      func_0x000107c613f8(&UNK_1106cd970,puVar11,0,0);
      *puVar11 = 4;
      *(undefined1 *)(puVar11 + 1) = 2;
      func_0x000107c61654();
      func_0x000107c61170(uVar4);
      goto LAB_103ae7930;
    }
    func_0x000107c6142c();
  }
  lVar12 = unaff_x22 + 0x1e0;
  uVar13 = *(undefined8 *)(unaff_x22 + 0x388);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x358);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x350);
  FUN_103addd84();
  func_0x000107c613f8(&UNK_1106cd970,puVar10,0,0);
  *puVar10 = 3;
  *(undefined1 *)(puVar10 + 1) = 2;
  func_0x000107c61654();
LAB_103ae7930:
  func_0x000107c615e8(uVar13);
  func_0x000107c42194(uVar15);
  func_0x000107c615ec(uVar14,2);
  func_0x000107c61170(uVar15);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x318);
  puVar10 = *(undefined8 **)(unaff_x22 + 0x310);
  func_0x000107c61428(puVar10,lVar12,0,0);
  uVar4 = *puVar10;
  func_0x000107c61174(uVar4);
  func_0x000100069b5c(uVar15);
  func_0x000107c61170(uVar4);
                    /* WARNING: Could not recover jumptable at 0x000103ae79b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103ae79fc; end: 103ae7a93;  */

void FUN_103ae79fc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x358);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x350);
  func_0x000107c42194(uVar2);
  func_0x000107c615ec(uVar1,2);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x318);
  puVar3 = *(undefined8 **)(unaff_x22 + 0x310);
  func_0x000107c61428(puVar3,unaff_x22 + 0x198,0,0);
  uVar1 = *puVar3;
  func_0x000107c61174(uVar1);
  func_0x000100069b5c(uVar2);
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000103ae7a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103ae7a94; end: 103ae7b83;  */

void FUN_103ae7a94(void)

{
  long unaff_x22;
  
  func_0x000107c615d8(*(undefined8 *)(unaff_x22 + 0x368));
  *(undefined8 *)(unaff_x22 + 0x388) = *(undefined8 *)(unaff_x22 + 0x288);
  *(undefined8 *)(unaff_x22 + 0x380) = *(undefined8 *)(unaff_x22 + 0x378);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103ae7330,0,0);
  return;
}



/* Entry: 103ae7b84; end: 103ae80a7;  */

void FUN_103ae7b84(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x22;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if (*(char *)(unaff_x22 + 0x40d) == '\x01') {
    lVar4 = unaff_x22 + 0x180;
    *(undefined8 *)(unaff_x22 + 0x278) = *(undefined8 *)(unaff_x22 + 0x3c8);
    if (*(int *)(unaff_x22 + 0x408) != 0) {
      uVar2 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0x278,uVar2,PTR___ss5ErrorWS_11034ee10);
    }
    uVar8 = *(undefined8 *)(unaff_x22 + 0x3b0);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x3a8);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x3a0);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x388);
    uStack_58 = *(undefined8 *)(unaff_x22 + 0x358);
    uStack_60 = *(undefined8 *)(unaff_x22 + 0x350);
    puVar12 = *(undefined8 **)(unaff_x22 + 0x310);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x3b8));
    func_0x000107c61428(puVar12,unaff_x22 + 0x1b0,0,0);
    uVar2 = *puVar12;
    func_0x000107c61174(uVar2);
    func_0x000100069b5c(uVar8);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar9);
    func_0x000107c61170(uVar10);
    func_0x000107c615e8(uVar11);
    goto LAB_103ae7ffc;
  }
  uVar9 = *(undefined8 *)(unaff_x22 + 0x3b0);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x3a8);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x3a0);
  puVar12 = *(undefined8 **)(unaff_x22 + 0x310);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x3b8));
  func_0x000107c61428(puVar12,unaff_x22 + 0x168,0,0);
  uVar2 = *puVar12;
  func_0x000107c61174(uVar2);
  func_0x000100069b5c(uVar9);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x3c8);
  *(undefined8 *)(unaff_x22 + 0x3d0) = uVar2;
  puVar12 = *(undefined8 **)(unaff_x22 + 0x398);
  puVar7 = *(undefined8 **)(unaff_x22 + 0x388);
  func_0x000107c4b838();
  func_0x000107c61180();
  puVar3 = (undefined8 *)(unaff_x22 + 0x78);
  *puVar3 = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined8 *)(unaff_x22 + 0x98) = 0x103ae6384;
  *(undefined8 *)(unaff_x22 + 0xa0) = 0;
  *(undefined8 *)(unaff_x22 + 0x80) = 0x42000000;
  *(undefined **)(unaff_x22 + 0x88) = &UNK_100ff0b04;
  *(undefined **)(unaff_x22 + 0x90) = &UNK_1106ce320;
  func_0x000107c60bc4();
  func_0x000107c4e918();
  func_0x000107c61180();
  func_0x000107c60bd0(puVar3);
  func_0x000107c61170();
  if (puVar7 == (undefined8 *)0x0) {
LAB_103ae7fa4:
    lVar4 = unaff_x22 + 0x1e0;
    uVar8 = *(undefined8 *)(unaff_x22 + 0x388);
    uStack_58 = *(undefined8 *)(unaff_x22 + 0x358);
    uStack_60 = *(undefined8 *)(unaff_x22 + 0x350);
    FUN_103addd84();
    func_0x000107c613f8(&UNK_1106cd970,puVar12,0,0);
    *puVar12 = 3;
    *(undefined1 *)(puVar12 + 1) = 2;
    func_0x000107c61654();
  }
  else {
    uVar8 = 0;
    FUN_103ae874c(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    puVar12 = puVar7;
    func_0x000107c5fc54(puVar7,uVar8);
    func_0x000107c61170(puVar7);
    if ((ulong)puVar12 >> 0x3e == 0) {
      puVar3 = *(undefined8 **)(((ulong)puVar12 & 0xffffffffffffff8) + 0x10);
    }
    else {
      puVar3 = (undefined8 *)((ulong)puVar12 & 0xffffffffffffff8);
      if ((undefined8 *)0x7fffffffffffffff < puVar12) {
        puVar3 = puVar12;
      }
      func_0x000107c60480();
    }
    if (puVar3 == (undefined8 *)0x0) {
      func_0x000107c6142c();
      goto LAB_103ae7fa4;
    }
    if (((ulong)puVar12 & 0xc000000000000001) == 0) {
      if (*(long *)(((ulong)puVar12 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103ae80a8);
        (*pcVar1)();
      }
      uVar9 = puVar12[4];
      func_0x000107c61174();
    }
    else {
      uVar9 = 0;
      FUN_103ae6458(0,puVar12,&PTR__OBJC_CLASS___NSNumber_1126ae570,0x112d38c88);
    }
    *(undefined8 *)(unaff_x22 + 0x3d8) = uVar9;
    puVar3 = *(undefined8 **)(unaff_x22 + 0x388);
    func_0x000107c6142c(puVar12);
    func_0x000107c4e924();
    func_0x000107c61180();
    if (puVar3 != (undefined8 *)0x0) {
      puVar12 = puVar3;
      func_0x000107c4c930();
      func_0x000107c61180();
      func_0x000107c61170();
      if (puVar12 != (undefined8 *)0x0) {
        puVar7 = puVar12;
        func_0x000107c4c99c();
        func_0x000107c61180();
        *(undefined8 **)(unaff_x22 + 0x3e0) = puVar7;
        func_0x000107c61170();
        puVar3 = puVar12;
        if (puVar7 != (undefined8 *)0x0) {
          lVar4 = *(long *)(unaff_x22 + 0x388);
          func_0x000107c4e924();
          func_0x000107c61180();
          if (lVar4 != 0) {
            lVar5 = lVar4;
            func_0x000107c4c930();
            func_0x000107c61180();
            func_0x000107c61170(lVar4);
            if (lVar5 != 0) {
              lVar4 = lVar5;
              func_0x000107c5d0f0();
              func_0x000107c61170(lVar5);
              uVar2 = 0xffffffffffffffff;
              if ((int)lVar4 == 1) {
                uVar2 = 1;
              }
              uVar8 = 0;
              if ((int)lVar4 != 0) {
                uVar8 = uVar2;
              }
              goto LAB_103ae7ee4;
            }
          }
          uVar8 = 0xffffffffffffffff;
LAB_103ae7ee4:
          *(undefined8 *)(unaff_x22 + 1000) = uVar8;
          uVar8 = *(undefined8 *)(unaff_x22 + 0x388);
          func_0x0001000285a8(0x112d555b0,&UNK_10d91c610);
          func_0x000107c4ca84();
          func_0x000107c61180();
          uVar2 = uVar8;
          func_0x000100759c94();
          *(undefined8 *)(unaff_x22 + 0x3f0) = uVar2;
          func_0x000107c61170(uVar8);
          plVar6 = (long *)0x80;
          func_0x000107c615b8();
          *(long **)(unaff_x22 + 0x3f8) = plVar6;
          *plVar6 = unaff_x22;
          plVar6[1] = (long)FUN_103ae80a8;
                    /* WARNING: Could not recover jumptable at 0x000103ae7f84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)&UNK_101a155f0)();
          return;
        }
      }
    }
    lVar4 = unaff_x22 + 0x1f8;
    uVar8 = *(undefined8 *)(unaff_x22 + 0x388);
    uStack_58 = *(undefined8 *)(unaff_x22 + 0x358);
    uStack_60 = *(undefined8 *)(unaff_x22 + 0x350);
    FUN_103addd84();
    func_0x000107c613f8(&UNK_1106cd970,puVar3,0,0);
    *puVar3 = 4;
    *(undefined1 *)(puVar3 + 1) = 2;
    func_0x000107c61654();
    func_0x000107c61170(uVar9);
  }
  func_0x000107c615e8(uVar8);
  func_0x000107c61170(uVar2);
LAB_103ae7ffc:
  func_0x000107c42194(uStack_60,uStack_58);
  func_0x000107c615ec(uStack_60,2);
  func_0x000107c61170(uStack_58);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x318);
  puVar12 = *(undefined8 **)(unaff_x22 + 0x310);
  func_0x000107c61428(puVar12,lVar4,0,0);
  uVar2 = *puVar12;
  func_0x000107c61174(uVar2);
  func_0x000100069b5c(uVar8);
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000103ae8080. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103ae80a8; end: 103ae80fb;  */

void FUN_103ae80a8(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x400) = param_1;
  *(undefined1 *)(lVar1 + 0x40e) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x3f8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103ae80fc,0,0);
  return;
}



/* Entry: 103ae80fc; end: 103ae854b;  */

void FUN_103ae80fc(void)

{
  undefined1 uVar1;
  char cVar2;
  uint uVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long unaff_x22;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  lVar8 = *(long *)(unaff_x22 + 0x400);
  if (*(char *)(unaff_x22 + 0x40e) == '\x01') {
    lVar13 = unaff_x22 + 0x228;
    *(long *)(unaff_x22 + 0x2b8) = lVar8;
    if (*(int *)(unaff_x22 + 0x408) != 0) {
      uVar9 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0x2b8,uVar9,PTR___ss5ErrorWS_11034ee10);
    }
    uVar12 = *(undefined8 *)(unaff_x22 + 0x3e0);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x3d8);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x3d0);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x388);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x358);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x350);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x3f0));
    func_0x000107c61170(uVar12);
    func_0x000107c61170(uVar14);
    func_0x000107c615e8(uVar16);
    func_0x000107c61170(uVar15);
  }
  else {
    puVar11 = *(undefined8 **)(unaff_x22 + 0x3f0);
    func_0x000107c61574();
    if (lVar8 == 0) {
      uVar9 = *(undefined8 *)(unaff_x22 + 0x3e0);
      uVar10 = *(undefined8 *)(unaff_x22 + 0x3d8);
      uVar12 = *(undefined8 *)(unaff_x22 + 0x3d0);
      uVar14 = *(undefined8 *)(unaff_x22 + 0x388);
      FUN_103addd84();
      func_0x000107c613f8(&UNK_1106cd970,puVar11,0,0);
      *puVar11 = 5;
      *(undefined1 *)(puVar11 + 1) = 2;
      func_0x000107c61654();
      func_0x000107c61170(uVar9);
      func_0x000107c61170(uVar10);
      func_0x000107c615e8(uVar14);
      func_0x000107c61170(uVar12);
    }
    else {
      lVar5 = *(long *)(unaff_x22 + 0x400);
      func_0x000107c61174();
      lVar8 = lVar5;
      func_0x000107c600dc();
      lVar13 = lVar8;
      func_0x000107c600e0();
      lVar6 = lVar13;
      func_0x000107c600dc();
      lVar7 = lVar6;
      func_0x000107c600e0();
      if (lVar8 < lVar6 || lVar7 < lVar8) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x103ae8540);
        (*pcVar4)();
      }
      func_0x000107c600dc();
      lVar6 = lVar7;
      func_0x000107c600e0();
      if ((lVar13 < lVar7) || (lVar6 < lVar13)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x103ae8544);
        (*pcVar4)();
      }
      if (SBORROW8(lVar13,lVar8)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x103ae8548);
        (*pcVar4)();
      }
      uVar1 = *(undefined1 *)(unaff_x22 + 0x40e);
      uVar9 = *(undefined8 *)(unaff_x22 + 0x400);
      if (lVar13 != lVar8) {
        lVar13 = *(long *)(unaff_x22 + 1000);
        cVar2 = *(char *)(unaff_x22 + 0x40c);
        func_0x0001027aa354(uVar9,uVar1);
        lVar8 = 0;
        if ((cVar2 == '\x01') && (lVar13 == 1)) {
          lVar8 = *(long *)(unaff_x22 + 0x388);
          func_0x000107c4e924();
          func_0x000107c61180();
          if (lVar8 != 0) {
            lVar13 = lVar8;
            func_0x000107c4c930();
            func_0x000107c61180();
            func_0x000107c61170(lVar8);
            if (lVar13 != 0) {
              lVar8 = lVar13;
              func_0x000107c44c20();
              if ((int)lVar8 == 0) {
                lVar8 = 0;
              }
              else {
                lVar8 = lVar13;
                func_0x000107c5dd50();
                func_0x000107c61180();
                if (lVar8 == 0) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x103ae854c);
                  (*pcVar4)();
                }
                lVar6 = lVar8;
                func_0x000107c3fccc();
                func_0x000107c61170(lVar8);
                uVar3 = (int)lVar6 - 1;
                lVar8 = 0;
                if (uVar3 < 3) {
                  lVar8 = (ulong)uVar3 + 1;
                }
                func_0x000107c5a4f8(lVar13);
              }
              func_0x000107c61170(lVar13);
              goto LAB_103ae8488;
            }
          }
          lVar8 = 0;
        }
LAB_103ae8488:
        uVar9 = *(undefined8 *)(unaff_x22 + 0x3d8);
        uVar10 = *(undefined8 *)(unaff_x22 + 0x388);
        uVar12 = *(undefined8 *)(unaff_x22 + 0x358);
        uVar14 = *(undefined8 *)(unaff_x22 + 0x350);
        uVar15 = *(undefined8 *)(unaff_x22 + 0x318);
        puVar11 = *(undefined8 **)(unaff_x22 + 0x310);
        func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x3e0));
        func_0x000107c61170(uVar9);
        func_0x000107c615e8(uVar10);
        func_0x000107c42194(uVar12);
        func_0x000107c615ec(uVar14,2);
        func_0x000107c61170(uVar12);
        func_0x000107c61428(puVar11,unaff_x22 + 0xf0,0,0);
        uVar9 = *puVar11;
        func_0x000107c61174(uVar9);
        func_0x000100069b5c(uVar15);
        func_0x000107c61170(uVar9);
                    /* WARNING: Could not recover jumptable at 0x000103ae8538. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(unaff_x22 + 8))
                  (lVar5,*(undefined8 *)(unaff_x22 + 0x3d0),*(undefined8 *)(unaff_x22 + 1000),lVar8)
        ;
        return;
      }
      uVar14 = *(undefined8 *)(unaff_x22 + 0x3e0);
      uVar15 = *(undefined8 *)(unaff_x22 + 0x3d8);
      uVar12 = *(undefined8 *)(unaff_x22 + 0x3d0);
      uVar10 = *(undefined8 *)(unaff_x22 + 0x388);
      puVar11 = (undefined8 *)PTR_PTR_1126ad8c8;
      func_0x000107c610f8();
      func_0x000107c453e4();
      func_0x000106f47708();
      func_0x000107c61170();
      FUN_103addd84();
      func_0x000107c613f8(&UNK_1106cd970,puVar11,0,0);
      *puVar11 = 5;
      *(undefined1 *)(puVar11 + 1) = 2;
      func_0x000107c61654();
      func_0x000107c61170(uVar14);
      func_0x000107c61170(uVar15);
      func_0x000107c61170(uVar12);
      func_0x0001027aa354(uVar9,uVar1);
      func_0x000107c615e8(uVar10);
      func_0x0001027aa354(uVar9,uVar1);
    }
    lVar13 = unaff_x22 + 0x240;
    uVar9 = *(undefined8 *)(unaff_x22 + 0x358);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x350);
  }
  func_0x000107c42194(uVar9);
  func_0x000107c615ec(uVar10,2);
  func_0x000107c61170(uVar9);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x318);
  puVar11 = *(undefined8 **)(unaff_x22 + 0x310);
  func_0x000107c61428(puVar11,lVar13,0,0);
  uVar9 = *puVar11;
  func_0x000107c61174(uVar9);
  func_0x000100069b5c(uVar10);
  func_0x000107c61170(uVar9);
                    /* WARNING: Could not recover jumptable at 0x000103ae83c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103ae854c; end: 103ae85eb;  */

void FUN_103ae854c(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  puVar1 = *(undefined8 **)(unaff_x22 + 0x330);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x2f0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x298);
  func_0x000107c613f8(&UNK_1107a6f08,puVar1,0,0);
  *puVar1 = uVar3;
  func_0x000107c61170(uVar2);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x318);
  puVar1 = *(undefined8 **)(unaff_x22 + 0x310);
  func_0x000107c61428(puVar1,unaff_x22 + 0x210,0,0);
  uVar2 = *puVar1;
  func_0x000107c61174(uVar2);
  func_0x000100069b5c(uVar3);
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000103ae85e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103ae85ec; end: 103ae867f;  */

void FUN_103ae85ec(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  puVar1 = *(undefined8 **)(unaff_x22 + 0x348);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x2b0);
  func_0x000107c613f8(&UNK_1107a6f08,puVar1,0,0);
  *puVar1 = uVar2;
  uVar3 = *(undefined8 *)(unaff_x22 + 0x318);
  puVar1 = *(undefined8 **)(unaff_x22 + 0x310);
  func_0x000107c61428(puVar1,unaff_x22 + 600,0,0);
  uVar2 = *puVar1;
  func_0x000107c61174(uVar2);
  func_0x000100069b5c(uVar3);
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000103ae867c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103ae8680; end: 103ae86e3;  */

void FUN_103ae8680(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0xa0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_103ae86e4;
  plVar3[0xd] = lVar1;
  plVar3[0xe] = lVar2;
  plVar3[0xc] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103ae60d0,0,0);
  return;
}



/* Entry: 103ae86e4; end: 103ae871f;  */

void FUN_103ae86e4(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000103ae871c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 103ae8720; end: 103ae874b;  */

void FUN_103ae8720(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf2dbb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_cancel_1125a9090);
  return;
}



/* Entry: 103ae874c; end: 103ae881b;  */

void FUN_103ae874c(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 103ae881c; end: 103ae8887;  */

undefined8 * FUN_103ae881c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  return param_1;
}



/* Entry: 103ae8888; end: 103ae88cb;  */

undefined8 * FUN_103ae8888(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61170(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c61170(uVar1);
  uVar1 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar1;
  return param_1;
}



/* Entry: 103ae88cc; end: 103ae8977;  */

int FUN_103ae88cc(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[4] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103ae8978; end: 103ae89f3;  */

void FUN_103ae8978(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  *(undefined8 *)(unaff_x20 + 0x28) = param_5;
  *(undefined8 *)(unaff_x20 + 0x30) = param_6;
  *(undefined8 *)(unaff_x20 + 0x38) = param_7;
  *(undefined8 *)(unaff_x20 + 0x40) = param_8;
  *(undefined8 *)(unaff_x20 + 0x48) = param_9;
  return;
}



/* Entry: 103ae89f4; end: 103ae8ab3;  */

/* WARNING: Possible PIC construction at 0x000103ae8a00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103ae8a10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103ae8a20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103ae8a30: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103ae8a24) */
/* WARNING: Removing unreachable block (ram,0x000103ae8a14) */
/* WARNING: Removing unreachable block (ram,0x000103ae8a04) */
/* WARNING: Removing unreachable block (ram,0x000103ae8a34) */

void FUN_103ae89f4(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103ae8ab4; end: 103ae8ad7;  */

void FUN_103ae8ab4(undefined8 *param_1,undefined8 param_2)

{
  func_0x000100724f64();
  *param_1 = param_2;
  return;
}



/* Entry: 103ae8ad8; end: 103ae8adf;  */

void FUN_103ae8ad8(void)

{
  if (lRam0000000112fe9078 != 0) {
    return;
  }
  func_0x000107c614fc(0,&DAT_10e7ab200);
  return;
}



/* Entry: 103ae8ae0; end: 103ae8bc7;  */

void FUN_103ae8ae0(ulong param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uVar6;
  
  (**(code **)(unaff_x20 + 0x30))();
  uVar5 = *(undefined8 *)(unaff_x20 + 0x40);
  func_0x000107c4b940(uVar5);
  if ((*(byte *)(unaff_x20 + 0x50) & 1) != 0) goto LAB_103ae8ba8;
  if (param_1 - 8 < 2) {
LAB_103ae8b40:
    uVar6 = *(undefined8 *)(unaff_x20 + 0x48);
LAB_103ae8b58:
    *(undefined1 *)(unaff_x20 + 0x50) = 1;
  }
  else {
    if (param_1 == 7) {
      uVar6 = 0x3ff0000000000000;
      goto LAB_103ae8b58;
    }
    if (param_1 == 6) goto LAB_103ae8b40;
    uVar6 = 0;
    if (5 < param_1) goto LAB_103ae8b58;
  }
  *(undefined8 *)(unaff_x20 + 0x48) = uVar6;
  pcVar1 = *(code **)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  puVar4 = PTR_PTR_1126da000;
  func_0x000107c610f8(PTR_PTR_1126da000);
  func_0x000107c47e80(uVar6);
  (*pcVar1)(uVar2,uVar3,puVar4);
  func_0x000107c61170(puVar4);
LAB_103ae8ba8:
                    /* WARNING: Could not recover jumptable at 0x00010c280b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar5,PTR_s_unlock_11267dcf8);
  return;
}



/* Entry: 103ae8bc8; end: 103ae8c53;  */

void FUN_103ae8bc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_4 + 0x10,auStack_48,0,0);
  param_4 = param_4 + 0x10;
  func_0x000107c61618();
  if (param_4 != 0) {
    func_0x000107c5fadc(param_1,param_2);
    func_0x000107c5ceec(param_4);
    func_0x000107c615e8(param_4);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 103ae8c54; end: 103ae8d2f;  */

long FUN_103ae8c54(double param_1)

{
  code *pcVar1;
  long lVar2;
  long extraout_x8;
  long lVar3;
  
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar3 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
  func_0x000107c5eea0(&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000107c5ee8c();
  (**(code **)(lVar3 + 8))
            (&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2);
  param_1 = param_1 * 1000.0;
  if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103ae8d28);
    (*pcVar1)();
  }
  if (-9.223372036854778e+18 < param_1) {
    if (param_1 < 9.223372036854776e+18) {
      return (long)param_1;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103ae8d30);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103ae8d2c);
  (*pcVar1)();
}



/* Entry: 103ae8d30; end: 103ae8d8b;  */

void FUN_103ae8d30(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103ae8d8c; end: 103ae8eab;  */

undefined8 FUN_103ae8d8c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long *plVar5;
  long extraout_x8;
  undefined1 *puVar6;
  long lVar7;
  undefined1 auStack_60 [8];
  long lStack_58;
  char cStack_50;
  long lStack_48;
  
  uVar1 = 0;
  func_0x000107c5fcbc();
  lVar7 = *(long *)(uVar1 - 8);
  uVar2 = uVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  puVar6 = auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5fd5c();
  if ((uVar2 & 1) == 0) {
    lStack_58 = param_1;
    func_0x000107c614b0(param_1);
    uVar3 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    puVar4 = puVar6;
    func_0x000107c6147c(puVar6,&lStack_58,uVar3,uVar1,6);
    if ((int)puVar4 != 0) {
      (**(code **)(lVar7 + 8))(puVar6,uVar1);
      return 9;
    }
    lStack_48 = param_1;
    func_0x000107c614b0(param_1);
    plVar5 = &lStack_58;
    func_0x000107c6147c(plVar5,&lStack_48,uVar3,&UNK_1106cd970,6);
    if ((int)plVar5 != 0) {
      if ((cStack_50 == '\x02') && (lStack_58 == 8)) goto LAB_103ae8de8;
      func_0x000103addd68();
    }
    uVar3 = 8;
  }
  else {
LAB_103ae8de8:
    uVar3 = 9;
  }
  return uVar3;
}



/* Entry: 103ae8eac; end: 103ae8ebb; -[_TtC40SCCrossPostToStorySnapDocBuilderServices40SCCrossPostToStorySnapDocBuilderServices crossPostToStorySnapDocBuilder] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ae8eac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fe9238));
  return;
}



/* Entry: 103ae8ebc; end: 103ae8f07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ae8ebc(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fe9238) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103ae8f08; end: 103ae8f5f; -[_TtC40SCCrossPostToStorySnapDocBuilderServices40SCCrossPostToStorySnapDocBuilderServices initWithCrossPostToStorySnapDocBuilder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ae8f08(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112fe9238) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 103ae8f60; end: 103ae8f93;  */

void FUN_103ae8f60(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103ae8f94; end: 103ae8fa3; -[_TtC40SCCrossPostToStorySnapDocBuilderServices40SCCrossPostToStorySnapDocBuilderServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ae8f94(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fe9238));
  return;
}



/* Entry: 103ae8fa4; end: 103ae8ffb;  */

uint FUN_103ae8fa4(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined5 uStack_78;
  undefined3 uStack_73;
  undefined5 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined5 uStack_28;
  undefined3 uStack_23;
  undefined5 uStack_20;
  
  uVar1 = 0;
  uStack_88 = param_1[5];
  uStack_90 = param_1[4];
  uStack_80 = param_1[6];
  uStack_78 = (undefined5)param_1[7];
  uStack_73 = (undefined3)*(undefined8 *)((long)param_1 + 0x3d);
  uStack_70 = (undefined5)((ulong)*(undefined8 *)((long)param_1 + 0x3d) >> 0x18);
  uStack_a8 = param_1[1];
  uStack_b0 = *param_1;
  uStack_98 = param_1[3];
  uStack_a0 = param_1[2];
  uStack_38 = param_2[5];
  uStack_40 = param_2[4];
  uStack_30 = param_2[6];
  uStack_28 = (undefined5)param_2[7];
  uStack_23 = (undefined3)*(undefined8 *)((long)param_2 + 0x3d);
  uStack_20 = (undefined5)((ulong)*(undefined8 *)((long)param_2 + 0x3d) >> 0x18);
  uStack_58 = param_2[1];
  uStack_60 = *param_2;
  uStack_48 = param_2[3];
  uStack_50 = param_2[2];
  FUN_103aead28(&uStack_b0,&uStack_60);
  return uVar1 & 1;
}



/* Entry: 103ae8ffc; end: 103ae92b7;  */

undefined *
FUN_103ae8ffc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 unaff_x20;
  undefined *puVar7;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar3 = &puStack_90;
  FUN_103aeadfc(param_4,param_5);
  func_0x000107c5b078(param_3);
  uVar6 = 0x5a;
  func_0x000108eb5cc8(param_3,0x5a);
  func_0x000107c61180();
  if (param_3 == 0) {
    func_0x0001000285a8(0x112d51130,&UNK_10d9b85a0);
    uVar6 = 0xd000000000000016;
    func_0x000107c5fadc(0xd000000000000016,0x800000010f19d2b0);
    uVar4 = 0x706a207974706d65;
    func_0x000107c5fadc(0x706a207974706d65,0xef61746164206765);
    puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c61168(PTR__OBJC_CLASS___NSError_1126ae858);
    func_0x000107c42a5c();
    func_0x000107c61180();
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar6);
    puVar7 = puVar5;
    func_0x00010488904c(puVar5);
    func_0x000107c61170(puVar5);
  }
  else {
    lVar1 = param_3;
    func_0x000107c5ee30();
    func_0x000107c61170(param_3);
    puVar7 = PTR_PTR_1126b3080;
    func_0x000107c61168(PTR_PTR_1126b3080);
    lVar2 = lVar1;
    func_0x000107c5ee20(lVar1,uVar6);
    func_0x000107c412fc(puVar7);
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    func_0x0001000285a8(0x112dec310,&UNK_10dc50b70);
    func_0x000107c613fc();
    lVar2 = 0;
    func_0x00010095c380();
    uVar4 = param_4;
    func_0x000107c3d764(param_4);
    func_0x000107c61180();
    puVar5 = &UNK_1106ce718;
    func_0x000107c613fc(&UNK_1106ce718,0x50,7);
    *(long *)(puVar5 + 0x10) = lVar2;
    *(undefined4 *)(puVar5 + 0x18) = 0;
    *(undefined8 *)(puVar5 + 0x20) = param_1;
    *(undefined8 *)(puVar5 + 0x28) = param_2;
    *(undefined4 *)(puVar5 + 0x30) = 0;
    *(undefined8 *)(puVar5 + 0x38) = unaff_x20;
    *(undefined8 *)(puVar5 + 0x40) = 0;
    *(undefined8 *)(puVar5 + 0x48) = param_4;
    pcStack_70 = FUN_103aeb330;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    pcStack_80 = FUN_103aeabd8;
    puStack_78 = &UNK_1106ce730;
    puStack_68 = puVar5;
    func_0x000107c60bc4(&puStack_90);
    puVar5 = puStack_68;
    func_0x000107c6157c(lVar2);
    func_0x000107c615f0(param_4);
    func_0x000107c61574(puVar5);
    func_0x000107c5dc64(uVar4);
    func_0x000107c61170(puVar7);
    func_0x00010006c090(lVar1,uVar6);
    func_0x000107c61170(uVar4);
    func_0x000107c60bd0(ppuVar3);
    puVar7 = *(undefined **)(lVar2 + 0x10);
    func_0x000107c6157c(puVar7);
    func_0x000107c61574(lVar2);
  }
  func_0x000107c615e8(param_4);
  return puVar7;
}



/* Entry: 103ae92b8; end: 103ae95d3;  */

undefined8
FUN_103ae92b8(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uStack_68;
  
  FUN_103aeadfc(param_4,param_5);
  FUN_103ae95d4(param_1,param_4,param_6);
  uVar8 = 0x112dec310;
  func_0x0001000285a8(0x112dec310,&UNK_10dc50b70);
  func_0x000107c613fc();
  lVar1 = 0;
  func_0x00010095c380();
  if (param_3 >> 0x3c < 0xf) {
    puVar2 = PTR_PTR_1126b3080;
    func_0x000107c61168(PTR_PTR_1126b3080);
    func_0x00010006c00c(param_2,param_3);
    uVar9 = param_2;
    func_0x000107c5ee20(param_2,param_3);
    func_0x000107c412fc(puVar2);
    func_0x000107c61180();
    func_0x000107c61170(uVar9);
    func_0x0001000285a8(0x112dc6618,&UNK_10dc50b80);
    uVar9 = param_4;
    func_0x000107c3d764(param_4);
    func_0x000107c61180();
    uVar3 = uVar9;
    func_0x000100759c94();
    func_0x000107c61170(uVar9);
    puVar4 = &UNK_1106ce5f0;
    func_0x000107c613fc(&UNK_1106ce5f0,0x18,7);
    *(undefined8 *)(puVar4 + 0x10) = param_4;
    func_0x000107c615f0(param_4);
    uVar9 = 0x112d51138;
    func_0x0001000285a8(0x112d51138,&UNK_10dc50a50);
    uVar5 = 0;
    func_0x000100775264(0,1,FUN_103aeb014,puVar4,uVar9);
    func_0x000107c61574(uVar3);
    func_0x000107c61574(puVar4);
    func_0x000104889c84(0,1,lVar1);
    func_0x000107c61170(puVar2);
    func_0x000107c61574(uVar5);
    func_0x0001000b44c0(param_2,param_3);
  }
  else {
    uStack_68 = param_4;
    func_0x000100b60084(&uStack_68);
  }
  uVar9 = *(undefined8 *)(lVar1 + 0x10);
  func_0x000107c6157c(uVar9);
  func_0x000107c61574(lVar1);
  func_0x000107c613fc(uVar8,0x18,7);
  lVar6 = 0;
  func_0x00010095c380();
  lVar1 = 0x112d51130;
  func_0x0001000285a8(0x112d51130,&UNK_10d9b85a0);
  func_0x000103aeacc0();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 5;
  *(undefined8 *)(lVar1 + 0x10) = 2;
  *(undefined8 *)(lVar1 + 0x20) = param_1;
  *(undefined8 *)(lVar1 + 0x28) = uVar9;
  func_0x000107c6157c(uVar9);
  func_0x000107c6157c(param_1);
  lVar7 = lVar1;
  func_0x00010488813c(lVar1);
  func_0x000107c61574(lVar1);
  puVar4 = &UNK_1106ce5c8;
  func_0x000107c613fc(&UNK_1106ce5c8,0x20,7);
  *(long *)(puVar4 + 0x10) = lVar6;
  *(undefined8 *)(puVar4 + 0x18) = param_4;
  func_0x000107c615f0(param_4);
  func_0x000107c6157c(lVar6);
  func_0x00010075a04c(0,1,FUN_103aeafc4,puVar4);
  func_0x000107c61574(lVar7);
  func_0x000107c61574(puVar4);
  func_0x000107c615e8(param_4);
  func_0x000107c61574(uVar9);
  func_0x000107c61574(param_1);
  uVar8 = *(undefined8 *)(lVar6 + 0x10);
  func_0x000107c6157c(uVar8);
  func_0x000107c61574(lVar6);
  return uVar8;
}



/* Entry: 103ae95d4; end: 103ae9a53;  */

void FUN_103ae95d4(double param_1,double param_2,undefined8 param_3,undefined *param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined **ppuVar9;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 unaff_x20;
  undefined1 *puVar10;
  long lVar11;
  long lVar12;
  double dVar13;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined *puStack_a0;
  double dStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar10 = auStack_b0 + -extraout_x8;
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar12 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  lVar11 = (long)puVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000100029394(param_3,puVar10);
  puVar3 = puVar10;
  (**(code **)(lVar12 + 0x30))(puVar10,1,lVar2);
  if ((int)puVar3 == 1) {
    func_0x0001000293e4(puVar10);
    func_0x0001000285a8(0x112d51130,&UNK_10d9b85a0);
    puStack_a0 = param_4;
    func_0x000104888f7c(&puStack_a0);
    return;
  }
  lVar8 = lVar11;
  (**(code **)(lVar12 + 0x20))(lVar11,puVar10,lVar2);
  func_0x000107c5ed90();
  puVar4 = PTR__OBJC_CLASS___AVAsset_1126aff38;
  func_0x000107c61168();
  func_0x000107c3e250();
  func_0x000107c61180();
  func_0x000107c61170(lVar8);
  puVar7 = puVar4;
  func_0x000107c5ce80();
  func_0x000107c61180();
  uVar5 = 0;
  FUN_103aeb2d4(0,0x112d4f340,&PTR__OBJC_CLASS___AVAssetTrack_1126a60e0);
  puVar6 = puVar7;
  func_0x000107c5fc54(puVar7,uVar5);
  func_0x000107c61170(puVar7);
  if ((ulong)puVar6 >> 0x3e == 0) {
    puVar7 = *(undefined **)(((ulong)puVar6 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar7 = (undefined *)((ulong)puVar6 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar6) {
      puVar7 = puVar6;
    }
    func_0x000107c60480();
  }
  if (puVar7 == (undefined *)0x0) {
    param_1 = *(double *)PTR__CGSizeZero_110347620;
    param_2 = *(double *)((long)PTR__CGSizeZero_110347620 + 8);
    func_0x000107c6142c(puVar6);
  }
  else {
    if (((ulong)puVar6 & 0xc000000000000001) == 0) {
      if (*(long *)(((ulong)puVar6 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103ae9a54);
        (*pcVar1)();
      }
      uVar5 = *(undefined8 *)(puVar6 + 0x20);
      func_0x000107c61174(uVar5);
    }
    else {
      uVar5 = 0;
      func_0x000100f95fe8(0,puVar6);
    }
    func_0x000107c6142c(puVar6);
    func_0x000107c4d49c(uVar5);
    func_0x000107c4ecc4(&puStack_a0,uVar5);
    func_0x000107c609f8(&puStack_a0);
    func_0x000107c61170(uVar5);
    param_1 = ABS(param_1);
    param_2 = ABS(param_2);
  }
  func_0x000107c42378(&puStack_a0,puVar4);
  func_0x000107c60a3c(&puStack_a0);
  dVar13 = dStack_98 * 1000.0;
  if (0x7fefffffffffffff < (ulong)ABS(dVar13)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103ae9a38);
    (*pcVar1)();
  }
  if (dVar13 <= -1.0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103ae9a3c);
    (*pcVar1)();
  }
  if (4294967296.0 <= dVar13) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103ae9a40);
    (*pcVar1)();
  }
  puVar7 = PTR_PTR_1126b3080;
  puStack_a8 = puVar4;
  func_0x000107c61168(PTR_PTR_1126b3080);
  puVar4 = puVar7;
  func_0x000107c5ed90();
  func_0x000107c43480(puVar7);
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  func_0x0001000285a8(0x112dec310,&UNK_10dc50b70);
  func_0x000107c613fc();
  lVar8 = 0;
  func_0x00010095c380();
  puVar6 = param_4;
  func_0x000107c3d764(param_4);
  func_0x000107c61180();
  puVar4 = &UNK_1106ce6c8;
  func_0x000107c613fc(&UNK_1106ce6c8,0x50,7);
  *(long *)(puVar4 + 0x10) = lVar8;
  *(undefined4 *)(puVar4 + 0x18) = 1;
  *(double *)(puVar4 + 0x20) = param_1;
  *(double *)(puVar4 + 0x28) = param_2;
  *(int *)(puVar4 + 0x30) = (int)dVar13;
  *(undefined8 *)(puVar4 + 0x38) = unaff_x20;
  *(undefined8 *)(puVar4 + 0x40) = param_5;
  *(undefined **)(puVar4 + 0x48) = param_4;
  pcStack_80 = FUN_103aeb270;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  dStack_98 = 5.47077039858234e-315;
  pcStack_90 = FUN_103aeabd8;
  puStack_88 = &UNK_1106ce6e0;
  ppuVar9 = &puStack_a0;
  puStack_78 = puVar4;
  func_0x000107c60bc4(ppuVar9);
  puVar4 = puStack_78;
  func_0x000107c6157c(lVar8);
  func_0x000107c615f0(param_4);
  func_0x000107c61574(puVar4);
  func_0x000107c5dc64(puVar6);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar7);
  func_0x000107c60bd0(ppuVar9);
  func_0x000107c61170(puStack_a8);
  (**(code **)(lVar12 + 8))(lVar11,lVar2);
  func_0x000107c6157c(*(undefined8 *)(lVar8 + 0x10));
  func_0x000107c61574(lVar8);
  return;
}



/* Entry: 103ae9a54; end: 103ae9c2b;  */

undefined8 FUN_103ae9a54(undefined8 param_1,ulong param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_58;
  
  func_0x0001000285a8(0x112dec310,&UNK_10dc50b70);
  func_0x000107c613fc();
  lVar1 = 0;
  func_0x00010095c380();
  if (param_2 >> 0x3c < 0xf) {
    puVar2 = PTR_PTR_1126b3080;
    func_0x000107c61168(PTR_PTR_1126b3080);
    func_0x00010006c00c(param_1,param_2);
    uVar6 = param_1;
    func_0x000107c5ee20(param_1,param_2);
    func_0x000107c412fc(puVar2);
    func_0x000107c61180();
    func_0x000107c61170(uVar6);
    func_0x0001000285a8(0x112dc6618,&UNK_10dc50b80);
    uVar6 = param_3;
    func_0x000107c3d764(param_3);
    func_0x000107c61180();
    uVar3 = uVar6;
    func_0x000100759c94();
    func_0x000107c61170(uVar6);
    puVar4 = &UNK_1106ce618;
    func_0x000107c613fc(&UNK_1106ce618,0x18,7);
    *(undefined8 *)(puVar4 + 0x10) = param_3;
    func_0x000107c615f0(param_3);
    uVar6 = 0x112d51138;
    func_0x0001000285a8(0x112d51138,&UNK_10dc50a50);
    uVar5 = 0;
    func_0x000100775264(0,1,FUN_103aeb31c,puVar4,uVar6);
    func_0x000107c61574(uVar3);
    func_0x000107c61574(puVar4);
    func_0x000104889c84(0,1,lVar1);
    func_0x000107c61170(puVar2);
    func_0x000107c61574(uVar5);
    func_0x0001000b44c0(param_1,param_2);
  }
  else {
    uStack_58 = param_3;
    func_0x000100b60084(&uStack_58);
  }
  uVar6 = *(undefined8 *)(lVar1 + 0x10);
  func_0x000107c6157c(uVar6);
  func_0x000107c61574(lVar1);
  return uVar6;
}



/* Entry: 103ae9c2c; end: 103ae9d4b;  */

void FUN_103ae9c2c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar2 = PTR_PTR_1126b25d0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar3 = puVar2;
  func_0x000107c4c930();
  func_0x000107c61180();
  if (puVar3 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103ae9d44);
    (*pcVar1)();
  }
  func_0x000107c56420();
  func_0x000107c61170(puVar3);
  puVar3 = puVar2;
  func_0x000107c4c930();
  func_0x000107c61180();
  if (puVar3 != (undefined *)0x0) {
    func_0x000107c5293c();
    func_0x000107c61170(puVar3);
    puVar3 = puVar2;
    func_0x000107c4c930();
    func_0x000107c61180();
    if (puVar3 != (undefined *)0x0) {
      func_0x000107c5a0f8();
      func_0x000107c61170(puVar3);
      puVar3 = PTR_PTR_1126affe8;
      func_0x000107c61168(PTR_PTR_1126affe8);
      func_0x000107c44410();
      func_0x000107c61180();
      uVar4 = param_3;
      func_0x000107c3d7f4(param_3);
      func_0x000107c61180();
      func_0x000107c61170(puVar3);
      func_0x000107c61170(uVar4);
      func_0x000107c61170(puVar2);
      *param_1 = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_unknownObjectRetain_11034f540)(param_3);
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103ae9d4c);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103ae9d48);
  (*pcVar1)();
}



/* Entry: 103ae9d4c; end: 103aea58b;  */

void FUN_103ae9d4c(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long extraout_x8;
  long extraout_x12;
  long extraout_x12_00;
  undefined *puVar16;
  undefined *puVar17;
  code *pcVar18;
  long lVar19;
  long lVar20;
  undefined8 *puStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  undefined4 uStack_19c;
  undefined *puStack_198;
  undefined8 uStack_190;
  ulong uStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  ulong uStack_170;
  long lStack_168;
  long lStack_160;
  ulong uStack_158;
  undefined1 auStack_150 [32];
  ulong auStack_130 [4];
  undefined1 auStack_110 [24];
  long lStack_f8;
  long alStack_f0 [4];
  undefined1 auStack_d0 [24];
  long lStack_b8;
  undefined1 auStack_b0 [36];
  undefined2 uStack_8c;
  undefined1 uStack_8a;
  undefined1 auStack_88 [24];
  long lStack_70;
  
  lVar4 = 0;
  func_0x000107c5ed50();
  lStack_160 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_160 + 0x40));
  lVar19 = (long)&puStack_1c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar20 = lVar19 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_1a8 = lVar20 - extraout_x12_00;
  func_0x000107c4e8d8();
  func_0x000107c61180();
  if (param_2 == 0) {
                    /* WARNING: Does not return */
    pcVar18 = (code *)SoftwareBreakpoint(1,0x103aea57c);
    (*pcVar18)();
  }
  lVar5 = param_2;
  func_0x000107c4c97c();
  func_0x000107c61180();
  func_0x000107c61170(param_2);
  if (lVar5 == 0) {
                    /* WARNING: Does not return */
    pcVar18 = (code *)SoftwareBreakpoint(1,0x103aea580);
    (*pcVar18)();
  }
  lVar6 = lVar5;
  func_0x000107c500bc();
  func_0x000107c61180();
  func_0x000107c61170(lVar5);
  if (lVar6 == 0) {
                    /* WARNING: Does not return */
    pcVar18 = (code *)SoftwareBreakpoint(1,0x103aea584);
    (*pcVar18)();
  }
  lVar5 = lVar6;
  puStack_1c0 = param_1;
  func_0x000107c500c0();
  func_0x000107c61180();
  func_0x000107c61170(lVar6);
  if (lVar5 == 0) {
                    /* WARNING: Does not return */
    pcVar18 = (code *)SoftwareBreakpoint(1,0x103aea588);
    (*pcVar18)();
  }
  func_0x000107c600f4(lStack_1a8);
  func_0x000107c61170(lVar5);
  func_0x000107c5ed4c(auStack_88);
  puVar16 = PTR___sypN_11034f1a8;
  lVar2 = lVar20;
  lVar3 = lVar4;
  lVar5 = lStack_1b0;
  lVar6 = lStack_168;
  do {
    lStack_1b0 = lVar3;
    lStack_168 = lVar2;
    if (lStack_70 == 0) {
      lStack_1b0 = lVar5;
      lStack_168 = lVar6;
      (**(code **)(lStack_160 + 8))(lStack_1a8,lVar4);
      uStack_170 = 0;
      uStack_178 = 0;
      puStack_180 = (undefined *)0x0;
      uStack_19c = 0;
      puVar16 = (undefined *)0x0;
      puVar17 = (undefined *)0x0;
      uStack_188 = 0;
      uStack_190 = 0;
      puStack_198 = (undefined *)0x0;
      uStack_8a = 0;
      uStack_8c = 0;
LAB_103aea3b8:
      *puStack_1c0 = puVar16;
      puStack_1c0[1] = puVar17;
      puStack_1c0[2] = uStack_188;
      puStack_1c0[3] = uStack_190;
      puStack_1c0[4] = puStack_198;
      *(char *)(puStack_1c0 + 5) = (char)uStack_19c;
      *(undefined2 *)((long)puStack_1c0 + 0x29) = uStack_8c;
      *(undefined1 *)((long)puStack_1c0 + 0x2b) = uStack_8a;
      *(ulong *)((long)puStack_1c0 + 0x2c) = uStack_170;
      *(undefined8 *)((long)puStack_1c0 + 0x34) = uStack_178;
      *(undefined **)((long)puStack_1c0 + 0x3c) = puStack_180;
      *(char *)((long)puStack_1c0 + 0x44) = (char)uStack_19c;
      return;
    }
    func_0x000100102924(auStack_88,auStack_b0);
    func_0x0001000bb420(auStack_b0,auStack_d0);
    uVar7 = 0;
    FUN_103aeb2d4(0,0x112df41a0,&PTR_PTR_1126bceb0);
    plVar8 = alStack_f0;
    func_0x000107c6147c(plVar8,auStack_d0,puVar16 + 8,uVar7,6);
    lVar5 = alStack_f0[0];
    if ((int)plVar8 == 0) {
LAB_103ae9f00:
      func_0x000100183ab8(auStack_b0);
    }
    else {
      lVar6 = alStack_f0[0];
      func_0x000107c518b0();
      if ((int)lVar6 == 2) {
        lStack_1b8 = lVar5;
        func_0x000107c500b4();
        func_0x000107c61180();
        if (lVar5 == 0) {
                    /* WARNING: Does not return */
          pcVar18 = (code *)SoftwareBreakpoint(1,0x103aea578);
          (*pcVar18)();
        }
        func_0x000107c600f4(lVar20);
        func_0x000107c61170(lVar5);
LAB_103ae9fbc:
        func_0x000107c5ed4c(auStack_d0);
        if (lStack_b8 != 0) {
          func_0x000100102924(auStack_d0,alStack_f0);
          func_0x0001000bb420(alStack_f0,auStack_110);
          uVar7 = 0;
          FUN_103aeb2d4(0,0x112df41b0,&PTR_PTR_1126bceb8);
          puVar9 = auStack_130;
          puVar17 = puVar16 + 8;
          func_0x000107c6147c(puVar9,auStack_110,puVar17,uVar7,6);
          uVar1 = auStack_130[0];
          if ((int)puVar9 != 0) {
            uVar10 = auStack_130[0];
            func_0x000107c44b44();
            if (((int)uVar10 != 0) && (uVar10 = uVar1, func_0x000107c44834(), (int)uVar10 != 0)) {
              uVar10 = uVar1;
              func_0x000107c5bbf0();
              func_0x000107c61180();
              if (uVar10 != 0) {
                uVar11 = uVar1;
                func_0x000107c42380();
                func_0x000107c61180();
                if (uVar11 != 0) {
                  uVar12 = uVar10;
                  func_0x000107c5c9d0();
                  uVar7 = 1000;
                  func_0x000107c600c8();
                  uVar13 = uVar11;
                  puStack_198 = puVar17;
                  uStack_190 = uVar7;
                  uStack_188 = uVar12;
                  func_0x000107c5c9d0();
                  uVar7 = 1000;
                  func_0x000107c600c8();
                  puStack_180 = puVar17;
                  uStack_178 = uVar7;
                  uStack_170 = uVar13;
                  func_0x000107c61170(uVar11);
                  func_0x000107c61170(uVar10);
                  uStack_19c = 0;
                  goto LAB_103aea114;
                }
                func_0x000107c61170(uVar10);
              }
            }
            uStack_170 = 0;
            uStack_178 = 0;
            puStack_180 = (undefined *)0x0;
            uStack_188 = 0;
            uStack_190 = 0;
            puStack_198 = (undefined *)0x0;
            uStack_19c = 1;
LAB_103aea114:
            uVar10 = uVar1;
            func_0x000107c500b8();
            func_0x000107c61180();
            if (uVar10 == 0) {
                    /* WARNING: Does not return */
              pcVar18 = (code *)SoftwareBreakpoint(1,0x103aea574);
              (*pcVar18)();
            }
            func_0x000107c600f4(lVar19);
LAB_103aea148:
            func_0x000107c61170(uVar10);
            do {
              while( true ) {
                func_0x000107c5ed4c(auStack_110);
                if (lStack_f8 == 0) {
                  func_0x000107c61170(uVar1);
                  (**(code **)(lStack_160 + 8))(lVar19,lVar4);
                  func_0x000100183ab8(alStack_f0);
                  lVar20 = lStack_168;
                  goto LAB_103ae9fbc;
                }
                func_0x000100102924(auStack_110,auStack_130);
                func_0x0001000bb420(auStack_130,auStack_150);
                uVar7 = 0;
                FUN_103aeb2d4(0,0x112df41c0,&PTR_PTR_1126bcd28);
                puVar9 = &uStack_158;
                func_0x000107c6147c(puVar9,auStack_150,puVar16 + 8,uVar7,6);
                uVar10 = uStack_158;
                if (((ulong)puVar9 & 1) != 0) break;
                func_0x000100183ab8(auStack_130);
              }
              uVar11 = uStack_158;
              func_0x000107c42444();
              if ((int)uVar11 != 1) {
LAB_103aea13c:
                func_0x000100183ab8(auStack_130);
                goto LAB_103aea148;
              }
              uVar11 = uVar10;
              func_0x000107c40dc8();
              func_0x000107c61180();
              if (uVar11 == 0) goto LAB_103aea13c;
              uVar12 = uVar11;
              func_0x000107c44904();
              if ((uVar12 & 1) == 0) {
LAB_103aea2d8:
                func_0x000100183ab8(auStack_130);
                func_0x000107c61170(uVar10);
                uVar10 = uVar11;
                goto LAB_103aea148;
              }
              uVar12 = uVar11;
              func_0x000107c4a764();
              func_0x000107c61180();
              if (uVar12 == 0) goto LAB_103aea2d8;
              uVar13 = uVar12;
              func_0x000107c44864();
              if ((uVar13 & 1) == 0) goto LAB_103aea2f0;
              uVar13 = uVar12;
              func_0x000107c42924();
              func_0x000107c61180();
              if (uVar13 == 0) {
                func_0x000100183ab8(auStack_130);
                func_0x000107c61170(uVar10);
                func_0x000107c61170(uVar11);
              }
              else {
                uVar14 = uVar13;
                func_0x000107c42930();
                if ((int)uVar14 == 0x1b) {
                  uVar14 = uVar13;
                  func_0x000107c4b410();
                  func_0x000107c61180();
                  if (uVar14 == 0) goto LAB_103aea2a4;
                  uVar15 = uVar14;
                  func_0x000107c44920();
                  if ((uVar15 & 1) != 0) {
                    uVar15 = uVar14;
                    func_0x000107c4adb4();
                    func_0x000107c61180();
                    if (uVar15 != 0) {
                      func_0x000107c44fd8();
                      puVar16 = PTR___ss5Int64VN_11034ee50;
                      puVar17 = PTR___ss5Int64Vs23CustomStringConvertiblesWP_11034ee68;
                      func_0x000107c6057c();
                      func_0x000107c61170(uVar15);
                      func_0x000107c61170(uVar14);
                      goto LAB_103aea4a0;
                    }
                  }
                  func_0x000100183ab8(auStack_130);
                  func_0x000107c61170(uVar13);
                }
                else {
                  if ((int)uVar14 == 0x19) {
                    uVar14 = uVar13;
                    func_0x000107c4adb4();
                    func_0x000107c61180();
                    if (uVar14 == 0) {
                    /* WARNING: Does not return */
                      pcVar18 = (code *)SoftwareBreakpoint(1,0x103aea58c);
                      (*pcVar18)();
                    }
                    func_0x000107c4b1dc();
                    func_0x000107c61170(uVar14);
                    puVar16 = PTR___ss5Int64VN_11034ee50;
                    puVar17 = PTR___ss5Int64Vs23CustomStringConvertiblesWP_11034ee68;
                    func_0x000107c6057c();
LAB_103aea4a0:
                    func_0x000107c61170(lStack_1b8);
                    func_0x000107c61170(uVar1);
                    func_0x000107c61170(uVar13);
                    func_0x000107c61170(uVar12);
                    func_0x000107c61170(uVar11);
                    func_0x000107c61170(uVar10);
                    func_0x000100183ab8(auStack_130);
                    lVar20 = lStack_1b0;
                    pcVar18 = *(code **)(lStack_160 + 8);
                    (*pcVar18)(lVar19,lStack_1b0);
                    func_0x000100183ab8(alStack_f0);
                    (*pcVar18)(lStack_168,lVar20);
                    func_0x000100183ab8(auStack_b0);
                    (*pcVar18)(lStack_1a8,lVar20);
                    goto LAB_103aea3b8;
                  }
LAB_103aea2a4:
                  func_0x000100183ab8(auStack_130);
                  uVar14 = uVar13;
                }
                func_0x000107c61170(uVar14);
                func_0x000107c61170(uVar12);
                func_0x000107c61170(uVar11);
                uVar12 = uVar10;
              }
              func_0x000107c61170(uVar12);
              lVar4 = lStack_1b0;
            } while( true );
          }
          func_0x000100183ab8(alStack_f0);
          goto LAB_103ae9fbc;
        }
        func_0x000107c61170(lStack_1b8);
        (**(code **)(lStack_160 + 8))(lVar20,lVar4);
        goto LAB_103ae9f00;
      }
      func_0x000100183ab8(auStack_b0);
      func_0x000107c61170(lVar5);
    }
    func_0x000107c5ed4c(auStack_88);
    lVar2 = lStack_168;
    lVar3 = lStack_1b0;
    lVar5 = lStack_1b0;
    lVar6 = lStack_168;
  } while( true );
LAB_103aea2f0:
  func_0x000100183ab8(auStack_130);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar11);
  uVar10 = uVar12;
  goto LAB_103aea148;
}



/* Entry: 103aea58c; end: 103aea8a7;  */

undefined1  [16] FUN_103aea58c(double param_1,double param_2,ulong param_3,ulong param_4)

{
  uint uVar1;
  code *pcVar2;
  long lVar3;
  ulong *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  long in_x5;
  undefined8 in_x6;
  uint uVar10;
  long extraout_x8;
  int iVar11;
  ulong uVar12;
  ulong *puVar13;
  int iVar14;
  ulong unaff_x21;
  undefined1 *puVar15;
  ulong *unaff_x23;
  undefined1 *unaff_x24;
  long lVar16;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  ulong auStack_c8 [13];
  undefined1 auStack_60 [8];
  ulong uStack_58;
  ulong uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = 0;
  func_0x000107c5fb10();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar3 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar9 = auStack_60 + lVar3;
  uVar12 = param_3;
  func_0x000107c4050c();
  func_0x000107c61180();
  if (uVar12 == 0) {
    puVar13 = (ulong *)0x0;
    puVar15 = (undefined1 *)0x0;
    goto LAB_103aea858;
  }
  unaff_x21 = uVar12;
  func_0x000107c5ee30();
  func_0x000107c61170(uVar12);
  uStack_58 = unaff_x21;
  uStack_50 = param_4;
  func_0x000107c5fb04(puVar9);
  func_0x000102f1c1d8();
  puVar13 = &uStack_58;
  func_0x000107c5faf4(puVar13,puVar9,PTR___s10Foundation4DataVN_110350ae0,uVar12);
  puVar4 = puVar13;
  puVar15 = puVar9;
  param_3 = param_4;
  if ((puVar9 == (undefined1 *)0x0) || (func_0x000107c5fb5c(), (long)puVar4 < 0x11)) {
    uVar1 = (uint)(param_4 >> 0x20);
    uVar10 = uVar1 >> 0x1e;
    iVar14 = (int)unaff_x21;
    iVar11 = (int)(unaff_x21 >> 0x20);
    if (uVar1 >> 0x1e < 2) {
      if (uVar10 == 0) {
        uVar12 = param_4 >> 0x30 & 0xff;
        goto joined_r0x000103aea6a4;
      }
      if (SBORROW4(iVar11,iVar14)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103aea898);
        (*pcVar2)();
      }
      if (iVar11 - iVar14 != 0x10) goto LAB_103aea72c;
LAB_103aea6a8:
      if (uVar10 == 2) {
        lVar16 = *(long *)(unaff_x21 + 0x10);
        func_0x000107c5ec30();
        if ((puVar4 != (ulong *)0x0) && (func_0x000107c5ec3c(), SBORROW8(lVar16,(long)puVar4))) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x103aea8a0);
          (*pcVar2)();
        }
        func_0x000107c5ec38();
        puVar13 = (ulong *)PTR__OBJC_CLASS___NSUUID_1126b0270;
        func_0x000107c610f8();
        func_0x000107c48ff4();
        unaff_x23 = puVar13;
        func_0x000107c3ac54();
      }
      else if (uVar10 == 1) {
        if ((long)unaff_x21 >> 0x20 < (long)iVar14) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x103aea89c);
          (*pcVar2)();
        }
        func_0x000107c5ec30();
        if ((puVar4 != (ulong *)0x0) && (func_0x000107c5ec3c(), SBORROW8((long)iVar14,(long)puVar4))
           ) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x103aea8a4);
          (*pcVar2)();
        }
        func_0x000107c5ec38();
        puVar13 = (ulong *)PTR__OBJC_CLASS___NSUUID_1126b0270;
        func_0x000107c610f8();
        func_0x000107c48ff4();
        unaff_x23 = puVar13;
        func_0x000107c3ac54();
      }
      else {
        uStack_50._0_6_ = (undefined6)param_4;
        puVar13 = (ulong *)PTR__OBJC_CLASS___NSUUID_1126b0270;
        uStack_58 = unaff_x21;
        func_0x000107c610f8();
        func_0x000107c48ff4();
        unaff_x23 = puVar13;
        func_0x000107c3ac54();
      }
      func_0x000107c61180();
      func_0x000107c61170(puVar13);
      puVar13 = unaff_x23;
      func_0x000107c5faec();
      func_0x000107c61170(unaff_x23);
      func_0x000107c6142c(puVar9);
      func_0x00010006c090(unaff_x21);
      unaff_x24 = puVar15;
      goto LAB_103aea858;
    }
    if (uVar10 == 2) {
      uVar12 = *(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10);
      if (SBORROW8(*(long *)(unaff_x21 + 0x18),*(long *)(unaff_x21 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103aea894);
        (*pcVar2)();
      }
joined_r0x000103aea6a4:
      if (uVar12 == 0x10) goto LAB_103aea6a8;
    }
  }
LAB_103aea72c:
  func_0x00010006c090(unaff_x21);
  puVar15 = puVar9;
LAB_103aea858:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    auVar17._8_8_ = puVar15;
    auVar17._0_8_ = puVar13;
    return auVar17;
  }
  func_0x000107c60e78();
  *(undefined8 *)((long)auStack_c8 + lVar3 + 8) = unaff_d9;
  *(undefined8 *)((long)auStack_c8 + lVar3 + 0x10) = unaff_d8;
  *(undefined8 *)((long)auStack_c8 + lVar3 + 0x18) = unaff_x26;
  *(undefined8 *)((long)auStack_c8 + lVar3 + 0x20) = unaff_x25;
  *(undefined1 **)((long)auStack_c8 + lVar3 + 0x28) = unaff_x24;
  *(ulong **)((long)auStack_c8 + lVar3 + 0x30) = unaff_x23;
  *(undefined1 **)((long)auStack_c8 + lVar3 + 0x38) = puVar15;
  *(ulong *)((long)auStack_c8 + lVar3 + 0x40) = unaff_x21;
  *(ulong **)((long)auStack_c8 + lVar3 + 0x48) = puVar13;
  *(ulong *)((long)auStack_c8 + lVar3 + 0x50) = param_3;
  *(undefined1 **)((long)auStack_c8 + lVar3 + 0x58) = &stack0xfffffffffffffff0;
  *(code **)((long)auStack_c8 + lVar3 + 0x60) = FUN_103aea8a8;
  if (param_4 != 0) {
    uVar12 = param_4;
    func_0x000107c614b0(param_4);
    func_0x00010488ade0(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRelease_11034f318)(param_4);
    auVar19._8_8_ = uVar12;
    auVar19._0_8_ = param_4;
    return auVar19;
  }
  puVar5 = PTR_PTR_1126b25d0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar6 = puVar5;
  func_0x000107c4c930();
  func_0x000107c61180();
  if (puVar6 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x103aeabb4);
    (*pcVar2)();
  }
  func_0x000107c56420();
  func_0x000107c61170(puVar6);
  puVar6 = puVar5;
  func_0x000107c4c930();
  func_0x000107c61180();
  if (puVar6 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x103aeabb8);
    (*pcVar2)();
  }
  func_0x000107c5293c();
  func_0x000107c61170(puVar6);
  puVar6 = puVar5;
  func_0x000107c4c930();
  func_0x000107c61180();
  if (puVar6 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x103aeabbc);
    (*pcVar2)();
  }
  func_0x000107c5a0f8();
  func_0x000107c61170(puVar6);
  puVar6 = puVar5;
  func_0x000107c4c930();
  func_0x000107c61180();
  if (puVar6 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x103aeabc0);
    (*pcVar2)();
  }
  puVar7 = puVar6;
  func_0x000107c41e40();
  func_0x000107c61180();
  func_0x000107c61170(puVar6);
  if (puVar7 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x103aeabc4);
    (*pcVar2)();
  }
  if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x103aeab9c);
    (*pcVar2)();
  }
  if (param_1 <= -1.0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x103aeaba0);
    (*pcVar2)();
  }
  if (4294967296.0 <= param_1) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x103aeaba4);
    (*pcVar2)();
  }
  func_0x000107c5a724(puVar7);
  func_0x000107c61170(puVar7);
  puVar6 = puVar5;
  func_0x000107c4c930();
  func_0x000107c61180();
  if (puVar6 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x103aeabc8);
    (*pcVar2)();
  }
  puVar7 = puVar6;
  func_0x000107c41e40();
  func_0x000107c61180();
  func_0x000107c61170(puVar6);
  if (puVar7 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x103aeabcc);
    (*pcVar2)();
  }
  if (0x7fefffffffffffff < (ulong)ABS(param_2)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x103aeaba8);
    (*pcVar2)();
  }
  if (param_2 <= -1.0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x103aeabac);
    (*pcVar2)();
  }
  if (4294967296.0 <= param_2) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x103aeabb0);
    (*pcVar2)();
  }
  func_0x000107c550b8(puVar7);
  func_0x000107c61170(puVar7);
  puVar6 = puVar5;
  func_0x000107c4c930();
  func_0x000107c61180();
  if (puVar6 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x103aeabd0);
    (*pcVar2)();
  }
  func_0x000107c56408();
  func_0x000107c61170(puVar6);
  if (in_x5 - 1U < 3) {
    puVar6 = puVar5;
    func_0x000107c4c930();
    func_0x000107c61180();
    if (puVar6 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103aeabd4);
      (*pcVar2)();
    }
    puVar7 = puVar6;
    func_0x000107c5dd50();
    func_0x000107c61180();
    func_0x000107c61170(puVar6);
    if (puVar7 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103aeabd8);
      (*pcVar2)();
    }
    func_0x000107c5352c(puVar7);
    func_0x000107c61170(puVar7);
  }
  puVar6 = PTR_PTR_1126affe8;
  func_0x000107c61168(PTR_PTR_1126affe8);
  func_0x000107c4b838();
  func_0x000107c61180();
  uVar8 = in_x6;
  func_0x000107c3d7f4(in_x6);
  func_0x000107c61180();
  func_0x000107c61170(puVar6);
  func_0x000107c61170(uVar8);
  *(undefined8 *)((long)auStack_c8 + lVar3) = in_x6;
  func_0x000100b60084((long)auStack_c8 + lVar3);
  func_0x000107c61170(puVar5);
  auVar18._8_8_ = param_4;
  auVar18._0_8_ = puVar5;
  return auVar18;
}



/* Entry: 103aea8a8; end: 103aeabd7;  */

void FUN_103aea8a8(double param_1,double param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long in_x5;
  undefined8 in_x6;
  undefined8 uStack_68;
  
  if (param_4 != 0) {
    func_0x000107c614b0(param_4);
    func_0x00010488ade0(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRelease_11034f318)(param_4);
    return;
  }
  puVar2 = PTR_PTR_1126b25d0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar3 = puVar2;
  func_0x000107c4c930();
  func_0x000107c61180();
  if (puVar3 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103aeabb4);
    (*pcVar1)();
  }
  func_0x000107c56420();
  func_0x000107c61170(puVar3);
  puVar3 = puVar2;
  func_0x000107c4c930();
  func_0x000107c61180();
  if (puVar3 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103aeabb8);
    (*pcVar1)();
  }
  func_0x000107c5293c();
  func_0x000107c61170(puVar3);
  puVar3 = puVar2;
  func_0x000107c4c930();
  func_0x000107c61180();
  if (puVar3 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103aeabbc);
    (*pcVar1)();
  }
  func_0x000107c5a0f8();
  func_0x000107c61170(puVar3);
  puVar3 = puVar2;
  func_0x000107c4c930();
  func_0x000107c61180();
  if (puVar3 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103aeabc0);
    (*pcVar1)();
  }
  puVar4 = puVar3;
  func_0x000107c41e40();
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  if (puVar4 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103aeabc4);
    (*pcVar1)();
  }
  if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103aeab9c);
    (*pcVar1)();
  }
  if (-1.0 < param_1) {
    if (4294967296.0 <= param_1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103aeaba4);
      (*pcVar1)();
    }
    func_0x000107c5a724(puVar4);
    func_0x000107c61170(puVar4);
    puVar3 = puVar2;
    func_0x000107c4c930();
    func_0x000107c61180();
    if (puVar3 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103aeabc8);
      (*pcVar1)();
    }
    puVar4 = puVar3;
    func_0x000107c41e40();
    func_0x000107c61180();
    func_0x000107c61170(puVar3);
    if (puVar4 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103aeabcc);
      (*pcVar1)();
    }
    if ((ulong)ABS(param_2) < 0x7ff0000000000000) {
      if (param_2 <= -1.0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103aeabac);
        (*pcVar1)();
      }
      if (4294967296.0 <= param_2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103aeabb0);
        (*pcVar1)();
      }
      func_0x000107c550b8(puVar4);
      func_0x000107c61170(puVar4);
      puVar3 = puVar2;
      func_0x000107c4c930();
      func_0x000107c61180();
      if (puVar3 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103aeabd0);
        (*pcVar1)();
      }
      func_0x000107c56408();
      func_0x000107c61170(puVar3);
      if (in_x5 - 1U < 3) {
        puVar3 = puVar2;
        func_0x000107c4c930();
        func_0x000107c61180();
        if (puVar3 == (undefined *)0x0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x103aeabd4);
          (*pcVar1)();
        }
        puVar4 = puVar3;
        func_0x000107c5dd50();
        func_0x000107c61180();
        func_0x000107c61170(puVar3);
        if (puVar4 == (undefined *)0x0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x103aeabd8);
          (*pcVar1)();
        }
        func_0x000107c5352c(puVar4);
        func_0x000107c61170(puVar4);
      }
      puVar3 = PTR_PTR_1126affe8;
      func_0x000107c61168(PTR_PTR_1126affe8);
      func_0x000107c4b838();
      func_0x000107c61180();
      uVar5 = in_x6;
      func_0x000107c3d7f4(in_x6);
      func_0x000107c61180();
      func_0x000107c61170(puVar3);
      func_0x000107c61170(uVar5);
      uStack_68 = in_x6;
      func_0x000100b60084(&uStack_68);
      func_0x000107c61170(puVar2);
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103aeaba8);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103aeaba0);
  (*pcVar1)();
}



/* Entry: 103aeabd8; end: 103aeac4f;  */

/* WARNING: Possible PIC construction at 0x000103aeac34: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103aeac38) */

void FUN_103aeabd8(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  uVar3 = param_2;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  (*pcVar1)(param_2,param_3);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 103aeac50; end: 103aeac8b; -[_TtC22SCSnapTranscoderHelper20SnapTranscoderHelper init] */

void FUN_103aeac50(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103aeac8c; end: 103aead27;  */

void FUN_103aeac8c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103aead28; end: 103aeadfb;  */

/* WARNING: Possible PIC construction at 0x000103aead94: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103aead98) */

ulong FUN_103aead28(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  
  uVar1 = *param_1;
  if ((uVar1 == *param_2 && param_1[1] == param_2[1]) || (func_0x000107c605b8(), (uVar1 & 1) != 0))
  {
    if ((char)param_1[5] == '\x01') {
      if ((char)param_2[5] == '\x01') {
        uVar7 = 0;
        if (*(char *)((long)param_2 + 0x44) == '\x01') {
          uVar7 = (uint)(*(char *)((long)param_1 + 0x44) == '\x01');
        }
        if (*(char *)((long)param_1 + 0x44) == '\x01') {
          return (ulong)uVar7;
        }
        if (*(char *)((long)param_2 + 0x44) == '\x01') {
          return (ulong)uVar7;
        }
        uVar6 = *(ulong *)((long)param_2 + 0x3c);
        uVar5 = *(ulong *)((long)param_2 + 0x34);
        uVar4 = *(ulong *)((long)param_2 + 0x2c);
        uVar3 = *(ulong *)((long)param_1 + 0x3c);
        uVar2 = *(ulong *)((long)param_1 + 0x34);
        uVar1 = *(ulong *)((long)param_1 + 0x2c);
code_r0x000107c600bc:
                    /* WARNING: Could not recover jumptable at 0x00010bdb89fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___sSo6CMTimea9CoreMediaE2eeoiySbAB_ABtFZ_11034f700)
                  (uVar1,uVar2,uVar3,uVar4,uVar5,uVar6);
        return uVar1;
      }
    }
    else if ((char)param_2[5] != '\x01') {
      uVar1 = param_1[2];
      uVar2 = param_1[3];
      uVar3 = param_1[4];
      uVar4 = param_2[2];
      uVar5 = param_2[3];
      uVar6 = param_2[4];
      goto code_r0x000107c600bc;
    }
  }
  return 0;
}



/* Entry: 103aeadfc; end: 103aeafc3;  */

undefined8 FUN_103aeadfc(long param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puStack_58;
  undefined1 auStack_50 [32];
  
  lVar2 = param_1;
  func_0x000107c40794();
  func_0x000107c60234(auStack_50);
  func_0x000107c615e8(lVar2);
  uVar3 = 0;
  FUN_103aeb2d4(0,0x112d50c78,&PTR_PTR_1126b25c0);
  ppuVar4 = &puStack_58;
  func_0x000107c6147c(ppuVar4,auStack_50,PTR___sypN_11034f1a8 + 8,uVar3,6);
  if ((int)ppuVar4 == 0) {
    puVar5 = PTR_PTR_1126b25c0;
    func_0x000107c610f8(PTR_PTR_1126b25c0);
    func_0x000107c453e4();
    func_0x000107c61180();
    lVar2 = param_1;
    func_0x000107c444cc(param_1);
    func_0x000107c61180();
    func_0x000107c54f48(puVar5);
    func_0x000107c61170(lVar2);
    lVar2 = param_1;
    func_0x000107c3f5f8(param_1);
    func_0x000107c61180();
    func_0x000107c53200(puVar5);
    func_0x000107c61170(lVar2);
    lVar2 = param_1;
    func_0x000107c3e324(param_1);
    func_0x000107c61180();
    func_0x000107c5299c(puVar5);
    func_0x000107c61170(lVar2);
  }
  else {
    puVar5 = puStack_58;
    func_0x000107c61174(puStack_58);
    func_0x000107c56478();
    func_0x000107c574b4(puVar5);
    func_0x000107c543d8(puVar5);
    func_0x000107c5643c(puVar5);
  }
  func_0x000107c42428(param_2);
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  func_0x000107c4e8d8();
  func_0x000107c61180();
  if (param_1 != 0) {
    lVar2 = param_1;
    func_0x000107c4e8ec();
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    func_0x000107c574c8(param_2);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(puVar5);
    return param_2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103aeafc4);
  (*pcVar1)();
}



/* Entry: 103aeafc4; end: 103aeb013;  */

void FUN_103aeafc4(undefined8 *param_1)

{
  long unaff_x20;
  undefined8 uStack_28;
  
  if (*(char *)(param_1 + 1) == '\x01') {
    func_0x00010488ade0(*param_1);
  }
  else {
    uStack_28 = *(undefined8 *)(unaff_x20 + 0x18);
    func_0x000100b60084(&uStack_28);
  }
  return;
}



/* Entry: 103aeb014; end: 103aeb03b;  */

void FUN_103aeb014(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_103ae9c2c(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103aeb03c; end: 103aeb067;  */

long FUN_103aeb03c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103aeb068; end: 103aeb06f;  */

void FUN_103aeb068(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 103aeb070; end: 103aeb0bb;  */

undefined8 * FUN_103aeb070(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar1;
  uVar1 = *(undefined8 *)((long)param_2 + 0x19);
  *(undefined8 *)((long)param_1 + 0x21) = *(undefined8 *)((long)param_2 + 0x21);
  *(undefined8 *)((long)param_1 + 0x19) = uVar1;
  uVar1 = *(undefined8 *)((long)param_2 + 0x2c);
  *(undefined8 *)((long)param_1 + 0x34) = *(undefined8 *)((long)param_2 + 0x34);
  *(undefined8 *)((long)param_1 + 0x2c) = uVar1;
  uVar1 = *(undefined8 *)((long)param_2 + 0x35);
  *(undefined8 *)((long)param_1 + 0x3d) = *(undefined8 *)((long)param_2 + 0x3d);
  *(undefined8 *)((long)param_1 + 0x35) = uVar1;
  func_0x000107c61434();
  return param_1;
}



/* Entry: 103aeb0bc; end: 103aeb127;  */

undefined8 * FUN_103aeb0bc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  uVar2 = param_2[3];
  uVar1 = param_2[2];
  uVar3 = *(undefined8 *)((long)param_2 + 0x19);
  *(undefined8 *)((long)param_1 + 0x21) = *(undefined8 *)((long)param_2 + 0x21);
  *(undefined8 *)((long)param_1 + 0x19) = uVar3;
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  uVar2 = *(undefined8 *)((long)param_2 + 0x34);
  uVar1 = *(undefined8 *)((long)param_2 + 0x2c);
  uVar3 = *(undefined8 *)((long)param_2 + 0x35);
  *(undefined8 *)((long)param_1 + 0x3d) = *(undefined8 *)((long)param_2 + 0x3d);
  *(undefined8 *)((long)param_1 + 0x35) = uVar3;
  *(undefined8 *)((long)param_1 + 0x34) = uVar2;
  *(undefined8 *)((long)param_1 + 0x2c) = uVar1;
  return param_1;
}



/* Entry: 103aeb128; end: 103aeb14b;  */

void FUN_103aeb128(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  uVar2 = param_2[3];
  uVar1 = param_2[2];
  uVar4 = param_2[5];
  uVar3 = param_2[4];
  uVar6 = param_2[7];
  uVar5 = param_2[6];
  *(undefined8 *)((long)param_1 + 0x3d) = *(undefined8 *)((long)param_2 + 0x3d);
  param_1[5] = uVar4;
  param_1[4] = uVar3;
  param_1[7] = uVar6;
  param_1[6] = uVar5;
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  return;
}



/* Entry: 103aeb14c; end: 103aeb19f;  */

undefined8 * FUN_103aeb14c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  uVar2 = *(undefined8 *)((long)param_2 + 0x19);
  *(undefined8 *)((long)param_1 + 0x21) = *(undefined8 *)((long)param_2 + 0x21);
  *(undefined8 *)((long)param_1 + 0x19) = uVar2;
  uVar2 = *(undefined8 *)((long)param_2 + 0x2c);
  *(undefined8 *)((long)param_1 + 0x34) = *(undefined8 *)((long)param_2 + 0x34);
  *(undefined8 *)((long)param_1 + 0x2c) = uVar2;
  uVar2 = *(undefined8 *)((long)param_2 + 0x35);
  *(undefined8 *)((long)param_1 + 0x3d) = *(undefined8 *)((long)param_2 + 0x3d);
  *(undefined8 *)((long)param_1 + 0x35) = uVar2;
  return param_1;
}



/* Entry: 103aeb1a0; end: 103aeb24f;  */

int FUN_103aeb1a0(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x45) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103aeb250; end: 103aeb26f;  */

void FUN_103aeb250(void)

{
  func_0x000107c61168(&PTR_PTR_112925648);
  return;
}



/* Entry: 103aeb270; end: 103aeb28f;  */

void FUN_103aeb270(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long unaff_x20;
  double dVar8;
  double dVar9;
  undefined8 uStack_68;
  
  dVar8 = *(double *)(unaff_x20 + 0x20);
  dVar9 = *(double *)(unaff_x20 + 0x28);
  lVar1 = *(long *)(unaff_x20 + 0x40);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x48);
  if (param_2 != 0) {
    func_0x000107c614b0(param_2);
    func_0x00010488ade0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRelease_11034f318)(param_2);
    return;
  }
  puVar4 = PTR_PTR_1126b25d0;
  func_0x000107c610f8(PTR_PTR_1126b25d0,0,*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c453e4();
  puVar5 = puVar4;
  func_0x000107c4c930();
  func_0x000107c61180();
  if (puVar5 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x103aeabb4);
    (*pcVar3)();
  }
  func_0x000107c56420();
  func_0x000107c61170(puVar5);
  puVar5 = puVar4;
  func_0x000107c4c930();
  func_0x000107c61180();
  if (puVar5 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x103aeabb8);
    (*pcVar3)();
  }
  func_0x000107c5293c();
  func_0x000107c61170(puVar5);
  puVar5 = puVar4;
  func_0x000107c4c930();
  func_0x000107c61180();
  if (puVar5 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x103aeabbc);
    (*pcVar3)();
  }
  func_0x000107c5a0f8();
  func_0x000107c61170(puVar5);
  puVar5 = puVar4;
  func_0x000107c4c930();
  func_0x000107c61180();
  if (puVar5 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x103aeabc0);
    (*pcVar3)();
  }
  puVar6 = puVar5;
  func_0x000107c41e40();
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  if (puVar6 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x103aeabc4);
    (*pcVar3)();
  }
  if (0x7fefffffffffffff < (ulong)ABS(dVar8)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x103aeab9c);
    (*pcVar3)();
  }
  if (-1.0 < dVar8) {
    if (4294967296.0 <= dVar8) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x103aeaba4);
      (*pcVar3)();
    }
    func_0x000107c5a724(puVar6);
    func_0x000107c61170(puVar6);
    puVar5 = puVar4;
    func_0x000107c4c930();
    func_0x000107c61180();
    if (puVar5 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x103aeabc8);
      (*pcVar3)();
    }
    puVar6 = puVar5;
    func_0x000107c41e40();
    func_0x000107c61180();
    func_0x000107c61170(puVar5);
    if (puVar6 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x103aeabcc);
      (*pcVar3)();
    }
    if ((ulong)ABS(dVar9) < 0x7ff0000000000000) {
      if (dVar9 <= -1.0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x103aeabac);
        (*pcVar3)();
      }
      if (4294967296.0 <= dVar9) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x103aeabb0);
        (*pcVar3)();
      }
      func_0x000107c550b8(puVar6);
      func_0x000107c61170(puVar6);
      puVar5 = puVar4;
      func_0x000107c4c930();
      func_0x000107c61180();
      if (puVar5 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x103aeabd0);
        (*pcVar3)();
      }
      func_0x000107c56408();
      func_0x000107c61170(puVar5);
      if (lVar1 - 1U < 3) {
        puVar5 = puVar4;
        func_0x000107c4c930();
        func_0x000107c61180();
        if (puVar5 == (undefined *)0x0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x103aeabd4);
          (*pcVar3)();
        }
        puVar6 = puVar5;
        func_0x000107c5dd50();
        func_0x000107c61180();
        func_0x000107c61170(puVar5);
        if (puVar6 == (undefined *)0x0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x103aeabd8);
          (*pcVar3)();
        }
        func_0x000107c5352c(puVar6);
        func_0x000107c61170(puVar6);
      }
      puVar5 = PTR_PTR_1126affe8;
      func_0x000107c61168(PTR_PTR_1126affe8);
      func_0x000107c4b838();
      func_0x000107c61180();
      uVar7 = uVar2;
      func_0x000107c3d7f4(uVar2);
      func_0x000107c61180();
      func_0x000107c61170(puVar5);
      func_0x000107c61170(uVar7);
      uStack_68 = uVar2;
      func_0x000100b60084(&uStack_68);
      func_0x000107c61170(puVar4);
      return;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x103aeaba8);
    (*pcVar3)();
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x103aeaba0);
  (*pcVar3)();
}



/* Entry: 103aeb290; end: 103aeb2bb;  */

void FUN_103aeb290(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 103aeb2bc; end: 103aeb2d3;  */

void FUN_103aeb2bc(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long unaff_x20;
  double dVar8;
  double dVar9;
  undefined8 uStack_68;
  
  dVar8 = *(double *)(unaff_x20 + 0x20);
  dVar9 = *(double *)(unaff_x20 + 0x28);
  lVar1 = *(long *)(unaff_x20 + 0x40);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x48);
  if (param_2 != 0) {
    func_0x000107c614b0(param_2);
    func_0x00010488ade0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRelease_11034f318)(param_2);
    return;
  }
  puVar4 = PTR_PTR_1126b25d0;
  func_0x000107c610f8(PTR_PTR_1126b25d0,0,*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c453e4();
  puVar5 = puVar4;
  func_0x000107c4c930();
  func_0x000107c61180();
  if (puVar5 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x103aeabb4);
    (*pcVar3)();
  }
  func_0x000107c56420();
  func_0x000107c61170(puVar5);
  puVar5 = puVar4;
  func_0x000107c4c930();
  func_0x000107c61180();
  if (puVar5 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x103aeabb8);
    (*pcVar3)();
  }
  func_0x000107c5293c();
  func_0x000107c61170(puVar5);
  puVar5 = puVar4;
  func_0x000107c4c930();
  func_0x000107c61180();
  if (puVar5 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x103aeabbc);
    (*pcVar3)();
  }
  func_0x000107c5a0f8();
  func_0x000107c61170(puVar5);
  puVar5 = puVar4;
  func_0x000107c4c930();
  func_0x000107c61180();
  if (puVar5 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x103aeabc0);
    (*pcVar3)();
  }
  puVar6 = puVar5;
  func_0x000107c41e40();
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  if (puVar6 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x103aeabc4);
    (*pcVar3)();
  }
  if (0x7fefffffffffffff < (ulong)ABS(dVar8)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x103aeab9c);
    (*pcVar3)();
  }
  if (-1.0 < dVar8) {
    if (4294967296.0 <= dVar8) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x103aeaba4);
      (*pcVar3)();
    }
    func_0x000107c5a724(puVar6);
    func_0x000107c61170(puVar6);
    puVar5 = puVar4;
    func_0x000107c4c930();
    func_0x000107c61180();
    if (puVar5 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x103aeabc8);
      (*pcVar3)();
    }
    puVar6 = puVar5;
    func_0x000107c41e40();
    func_0x000107c61180();
    func_0x000107c61170(puVar5);
    if (puVar6 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x103aeabcc);
      (*pcVar3)();
    }
    if ((ulong)ABS(dVar9) < 0x7ff0000000000000) {
      if (dVar9 <= -1.0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x103aeabac);
        (*pcVar3)();
      }
      if (4294967296.0 <= dVar9) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x103aeabb0);
        (*pcVar3)();
      }
      func_0x000107c550b8(puVar6);
      func_0x000107c61170(puVar6);
      puVar5 = puVar4;
      func_0x000107c4c930();
      func_0x000107c61180();
      if (puVar5 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x103aeabd0);
        (*pcVar3)();
      }
      func_0x000107c56408();
      func_0x000107c61170(puVar5);
      if (lVar1 - 1U < 3) {
        puVar5 = puVar4;
        func_0x000107c4c930();
        func_0x000107c61180();
        if (puVar5 == (undefined *)0x0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x103aeabd4);
          (*pcVar3)();
        }
        puVar6 = puVar5;
        func_0x000107c5dd50();
        func_0x000107c61180();
        func_0x000107c61170(puVar5);
        if (puVar6 == (undefined *)0x0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x103aeabd8);
          (*pcVar3)();
        }
        func_0x000107c5352c(puVar6);
        func_0x000107c61170(puVar6);
      }
      puVar5 = PTR_PTR_1126affe8;
      func_0x000107c61168(PTR_PTR_1126affe8);
      func_0x000107c4b838();
      func_0x000107c61180();
      uVar7 = uVar2;
      func_0x000107c3d7f4(uVar2);
      func_0x000107c61180();
      func_0x000107c61170(puVar5);
      func_0x000107c61170(uVar7);
      uStack_68 = uVar2;
      func_0x000100b60084(&uStack_68);
      func_0x000107c61170(puVar4);
      return;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x103aeaba8);
    (*pcVar3)();
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x103aeaba0);
  (*pcVar3)();
}



/* Entry: 103aeb2d4; end: 103aeb313;  */

void FUN_103aeb2d4(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 103aeb314; end: 103aeb31b;  */

void FUN_103aeb314(long param_1,long param_2)

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



/* Entry: 103aeb31c; end: 103aeb32f;  */

void FUN_103aeb31c(void)

{
  FUN_103aeb014();
  return;
}



/* Entry: 103aeb330; end: 103aeb333;  */

void FUN_103aeb330(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long unaff_x20;
  double dVar8;
  double dVar9;
  undefined8 uStack_68;
  
  dVar8 = *(double *)(unaff_x20 + 0x20);
  dVar9 = *(double *)(unaff_x20 + 0x28);
  lVar1 = *(long *)(unaff_x20 + 0x40);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x48);
  if (param_2 != 0) {
    func_0x000107c614b0(param_2);
    func_0x00010488ade0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRelease_11034f318)(param_2);
    return;
  }
  puVar4 = PTR_PTR_1126b25d0;
  func_0x000107c610f8(PTR_PTR_1126b25d0,0,*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c453e4();
  puVar5 = puVar4;
  func_0x000107c4c930();
  func_0x000107c61180();
  if (puVar5 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x103aeabb4);
    (*pcVar3)();
  }
  func_0x000107c56420();
  func_0x000107c61170(puVar5);
  puVar5 = puVar4;
  func_0x000107c4c930();
  func_0x000107c61180();
  if (puVar5 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x103aeabb8);
    (*pcVar3)();
  }
  func_0x000107c5293c();
  func_0x000107c61170(puVar5);
  puVar5 = puVar4;
  func_0x000107c4c930();
  func_0x000107c61180();
  if (puVar5 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x103aeabbc);
    (*pcVar3)();
  }
  func_0x000107c5a0f8();
  func_0x000107c61170(puVar5);
  puVar5 = puVar4;
  func_0x000107c4c930();
  func_0x000107c61180();
  if (puVar5 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x103aeabc0);
    (*pcVar3)();
  }
  puVar6 = puVar5;
  func_0x000107c41e40();
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  if (puVar6 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x103aeabc4);
    (*pcVar3)();
  }
  if (0x7fefffffffffffff < (ulong)ABS(dVar8)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x103aeab9c);
    (*pcVar3)();
  }
  if (-1.0 < dVar8) {
    if (4294967296.0 <= dVar8) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x103aeaba4);
      (*pcVar3)();
    }
    func_0x000107c5a724(puVar6);
    func_0x000107c61170(puVar6);
    puVar5 = puVar4;
    func_0x000107c4c930();
    func_0x000107c61180();
    if (puVar5 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x103aeabc8);
      (*pcVar3)();
    }
    puVar6 = puVar5;
    func_0x000107c41e40();
    func_0x000107c61180();
    func_0x000107c61170(puVar5);
    if (puVar6 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x103aeabcc);
      (*pcVar3)();
    }
    if ((ulong)ABS(dVar9) < 0x7ff0000000000000) {
      if (dVar9 <= -1.0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x103aeabac);
        (*pcVar3)();
      }
      if (4294967296.0 <= dVar9) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x103aeabb0);
        (*pcVar3)();
      }
      func_0x000107c550b8(puVar6);
      func_0x000107c61170(puVar6);
      puVar5 = puVar4;
      func_0x000107c4c930();
      func_0x000107c61180();
      if (puVar5 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x103aeabd0);
        (*pcVar3)();
      }
      func_0x000107c56408();
      func_0x000107c61170(puVar5);
      if (lVar1 - 1U < 3) {
        puVar5 = puVar4;
        func_0x000107c4c930();
        func_0x000107c61180();
        if (puVar5 == (undefined *)0x0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x103aeabd4);
          (*pcVar3)();
        }
        puVar6 = puVar5;
        func_0x000107c5dd50();
        func_0x000107c61180();
        func_0x000107c61170(puVar5);
        if (puVar6 == (undefined *)0x0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x103aeabd8);
          (*pcVar3)();
        }
        func_0x000107c5352c(puVar6);
        func_0x000107c61170(puVar6);
      }
      puVar5 = PTR_PTR_1126affe8;
      func_0x000107c61168(PTR_PTR_1126affe8);
      func_0x000107c4b838();
      func_0x000107c61180();
      uVar7 = uVar2;
      func_0x000107c3d7f4(uVar2);
      func_0x000107c61180();
      func_0x000107c61170(puVar5);
      func_0x000107c61170(uVar7);
      uStack_68 = uVar2;
      func_0x000100b60084(&uStack_68);
      func_0x000107c61170(puVar4);
      return;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x103aeaba8);
    (*pcVar3)();
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x103aeaba0);
  (*pcVar3)();
}



/* Entry: 103aeb334; end: 103aeb37f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103aeb334(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fe92a0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103aeb380; end: 103aeb51f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_103aeb380(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined **ppuVar6;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar1 = param_3;
  func_0x000107c614f0(param_3);
  uVar2 = param_4;
  uStack_68 = param_3;
  func_0x000107c614f0(param_4);
  puVar3 = PTR_PTR_1126a9a60;
  uStack_70 = param_4;
  func_0x000107c610f8();
  func_0x000107c615f0(param_3);
  func_0x000107c615f0(param_4);
  puVar4 = &uStack_68;
  func_0x000107c605b0(puVar4,uVar1);
  puVar5 = &uStack_70;
  func_0x000107c605b0(puVar5,uVar2);
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  pcStack_90 = FUN_103aeb680;
  puStack_88 = &UNK_1106ce810;
  ppuVar6 = &puStack_a0;
  uStack_80 = param_7;
  uStack_78 = param_8;
  func_0x000107c60bc4();
  func_0x000107c6157c(param_8);
  func_0x000107c48e70();
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c615e8(puVar4);
  func_0x000107c615e8(puVar5);
  uVar1 = uStack_78;
  func_0x000107c615e8(param_3);
  func_0x000107c615e8(param_4);
  func_0x000107c61574(uVar1);
  puStack_a0 = puVar3;
  func_0x00010008a7c8(&uStack_68,&puStack_a0);
  uVar1 = uStack_68;
  func_0x000100083b20(&puStack_a0);
  func_0x000107c61574(uVar1);
  func_0x000107c615e8(puStack_a0);
  return puVar3;
}



/* Entry: 103aeb520; end: 103aeb63b; -[_TtC38SCSpectaclesClientControllerScopeProxy41SCSpectaclesClientControllerScopeServices buildWithTransferChannel:device:peripheralResponseHandler:connectionHub:bluetoothCentralManager:delegate:clientControllerPlugin:] */

void FUN_103aeb520(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  
  func_0x000107c60bc4();
  puVar1 = &UNK_1106ce890;
  func_0x000107c613fc(&UNK_1106ce890,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_9;
  func_0x000107c615f0(param_4);
  func_0x000107c615f0(param_5);
  func_0x000107c615f0(param_6);
  func_0x000107c615f0(param_7);
  func_0x000107c615f0(param_8);
  func_0x000107c61174(param_1);
  FUN_103aeb380(param_3,param_4,param_5,param_6,param_7,param_8,0x103aeb730,puVar1);
  func_0x000107c615e8(param_4);
  func_0x000107c615e8(param_5);
  func_0x000107c615e8(param_6);
  func_0x000107c615e8(param_7);
  func_0x000107c615e8(param_8);
  func_0x000107c61170(param_1);
  func_0x000107c61574(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 103aeb63c; end: 103aeb66f;  */

void FUN_103aeb63c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103aeb670; end: 103aeb67f; -[_TtC38SCSpectaclesClientControllerScopeProxy41SCSpectaclesClientControllerScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103aeb670(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fe92a0));
  return;
}



/* Entry: 103aeb680; end: 103aeb6f3;  */

void FUN_103aeb680(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  func_0x000107c615f0(param_3);
  (*pcVar1)(param_2,param_3);
  func_0x000107c61574(uVar2);
  func_0x000107c61170(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_3);
  return;
}



/* Entry: 103aeb6f4; end: 103aeb743;  */

void FUN_103aeb6f4(long param_1,long param_2)

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



/* Entry: 103aeb744; end: 103aeb7c3; -[SCSpectaclesECBPacketEncryptor init] */

undefined1 * FUN_103aeb744(undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e3260;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar2 = 0xe0;
    func_0x000107c610a0();
    *(long *)((long)puVar1 + 8) = lVar2;
    if (lVar2 == 0) {
      puVar3 = (undefined1 *)0x0;
      goto LAB_103aeb7a8;
    }
    FUN_103af01b8();
  }
  puVar3 = (undefined1 *)puVar1;
  func_0x000107c61174(puVar1);
LAB_103aeb7a8:
  func_0x000107c61170(puVar1);
  return puVar3;
}



/* Entry: 103aeb7c4; end: 103aeb80b; -[SCSpectaclesECBPacketEncryptor dealloc] */

void FUN_103aeb7c4(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x000107c427d8();
  func_0x000107c60fd0();
  puStack_28 = PTR_PTR_1126e3260;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103aeb80c; end: 103aeb877; -[SCSpectaclesECBPacketEncryptor setEncryptionKey:] */

undefined8 FUN_103aeb80c(undefined2 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  func_0x000107c61174();
  func_0x000107c427d8();
  puVar1 = param_3;
  func_0x000107c61178();
  func_0x000107c3eea8();
  func_0x000107c4adac(param_3);
  func_0x000107c61170(param_3);
  if (((*(byte *)(param_1 + 1) & 1) == 0) && (*(char *)((long)param_1 + 5) != '\x01')) {
    uVar2 = *puVar1;
    *(undefined8 *)(param_1 + 0x6c) = puVar1[1];
    *(undefined8 *)(param_1 + 0x68) = uVar2;
    FUN_103aee3b0(param_1 + 4,param_1 + 0x68,*(undefined8 *)(param_1 + 100));
    FUN_103aee3b0(param_1 + 0x34,param_1 + 0x68,*(undefined8 *)(param_1 + 100));
    uVar2 = 1;
    *(undefined1 *)(param_1 + 1) = 1;
    *(undefined1 *)((long)param_1 + 5) = 1;
  }
  else {
    uVar2 = 0;
    *(undefined8 *)(param_1 + 0x68) = 0;
    *(undefined8 *)(param_1 + 0x6c) = 0;
    *param_1 = 0;
    *(undefined1 *)(param_1 + 1) = 0;
    *(undefined2 *)((long)param_1 + 3) = 0;
    *(undefined1 *)((long)param_1 + 5) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x34) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x3c) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0x44) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0x4c) = 0;
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined8 *)(param_1 + 0x54) = 0;
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined8 *)(param_1 + 0x5c) = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 4) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0xc) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x14) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x1c) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x24) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x2c) = 0;
  }
  return uVar2;
}



/* Entry: 103aeb878; end: 103aeb8e3; -[SCSpectaclesECBPacketEncryptor setTxNonce:] */

undefined8 FUN_103aeb878(undefined2 *param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  func_0x000107c61174();
  func_0x000107c427d8();
  uVar1 = param_3;
  func_0x000107c61178(param_3);
  func_0x000107c3eea8();
  uVar2 = param_3;
  func_0x000107c4adac();
  func_0x000107c61170(param_3);
  if (((*(char *)((long)param_1 + 5) == '\x01') && (0xf < uVar2)) &&
     ((*(byte *)((long)param_1 + 3) & 1) == 0)) {
    func_0x000103aee3c4(param_1 + 4,uVar1);
    uVar3 = 1;
    *(undefined1 *)((long)param_1 + 3) = 1;
  }
  else {
    uVar3 = 0;
    *(undefined8 *)(param_1 + 0x68) = 0;
    *(undefined8 *)(param_1 + 0x6c) = 0;
    *param_1 = 0;
    *(undefined1 *)(param_1 + 1) = 0;
    *(undefined2 *)((long)param_1 + 3) = 0;
    *(undefined1 *)((long)param_1 + 5) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x34) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x3c) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0x44) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0x4c) = 0;
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined8 *)(param_1 + 0x54) = 0;
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined8 *)(param_1 + 0x5c) = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 4) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0xc) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x14) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x1c) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x24) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x2c) = 0;
  }
  return uVar3;
}



/* Entry: 103aeb8e4; end: 103aeb94f; -[SCSpectaclesECBPacketEncryptor setRxNonce:] */

undefined8 FUN_103aeb8e4(byte *param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  func_0x000107c61174();
  func_0x000107c427d8();
  uVar1 = param_3;
  func_0x000107c61178(param_3);
  func_0x000107c3eea8();
  uVar2 = param_3;
  func_0x000107c4adac();
  func_0x000107c61170(param_3);
  if (((param_1[2] == 1) && (0xf < uVar2)) && ((*param_1 & 1) == 0)) {
    func_0x000103aee3c4(param_1 + 0x68,uVar1);
    uVar3 = 1;
    *param_1 = 1;
  }
  else {
    uVar3 = 0;
    param_1[0xd0] = 0;
    param_1[0xd1] = 0;
    param_1[0xd2] = 0;
    param_1[0xd3] = 0;
    param_1[0xd4] = 0;
    param_1[0xd5] = 0;
    param_1[0xd6] = 0;
    param_1[0xd7] = 0;
    param_1[0xd8] = 0;
    param_1[0xd9] = 0;
    param_1[0xda] = 0;
    param_1[0xdb] = 0;
    param_1[0xdc] = 0;
    param_1[0xdd] = 0;
    param_1[0xde] = 0;
    param_1[0xdf] = 0;
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[0x70] = 0;
    param_1[0x71] = 0;
    param_1[0x72] = 0;
    param_1[0x73] = 0;
    param_1[0x74] = 0;
    param_1[0x75] = 0;
    param_1[0x76] = 0;
    param_1[0x77] = 0;
    param_1[0x68] = 0;
    param_1[0x69] = 0;
    param_1[0x6a] = 0;
    param_1[0x6b] = 0;
    param_1[0x6c] = 0;
    param_1[0x6d] = 0;
    param_1[0x6e] = 0;
    param_1[0x6f] = 0;
    param_1[0x80] = 0;
    param_1[0x81] = 0;
    param_1[0x82] = 0;
    param_1[0x83] = 0;
    param_1[0x84] = 0;
    param_1[0x85] = 0;
    param_1[0x86] = 0;
    param_1[0x87] = 0;
    param_1[0x78] = 0;
    param_1[0x79] = 0;
    param_1[0x7a] = 0;
    param_1[0x7b] = 0;
    param_1[0x7c] = 0;
    param_1[0x7d] = 0;
    param_1[0x7e] = 0;
    param_1[0x7f] = 0;
    param_1[0x90] = 0;
    param_1[0x91] = 0;
    param_1[0x92] = 0;
    param_1[0x93] = 0;
    param_1[0x94] = 0;
    param_1[0x95] = 0;
    param_1[0x96] = 0;
    param_1[0x97] = 0;
    param_1[0x88] = 0;
    param_1[0x89] = 0;
    param_1[0x8a] = 0;
    param_1[0x8b] = 0;
    param_1[0x8c] = 0;
    param_1[0x8d] = 0;
    param_1[0x8e] = 0;
    param_1[0x8f] = 0;
    param_1[0xa0] = 0;
    param_1[0xa1] = 0;
    param_1[0xa2] = 0;
    param_1[0xa3] = 0;
    param_1[0xa4] = 0;
    param_1[0xa5] = 0;
    param_1[0xa6] = 0;
    param_1[0xa7] = 0;
    param_1[0x98] = 0;
    param_1[0x99] = 0;
    param_1[0x9a] = 0;
    param_1[0x9b] = 0;
    param_1[0x9c] = 0;
    param_1[0x9d] = 0;
    param_1[0x9e] = 0;
    param_1[0x9f] = 0;
    param_1[0xb0] = 0;
    param_1[0xb1] = 0;
    param_1[0xb2] = 0;
    param_1[0xb3] = 0;
    param_1[0xb4] = 0;
    param_1[0xb5] = 0;
    param_1[0xb6] = 0;
    param_1[0xb7] = 0;
    param_1[0xa8] = 0;
    param_1[0xa9] = 0;
    param_1[0xaa] = 0;
    param_1[0xab] = 0;
    param_1[0xac] = 0;
    param_1[0xad] = 0;
    param_1[0xae] = 0;
    param_1[0xaf] = 0;
    param_1[0xc0] = 0;
    param_1[0xc1] = 0;
    param_1[0xc2] = 0;
    param_1[0xc3] = 0;
    param_1[0xc4] = 0;
    param_1[0xc5] = 0;
    param_1[0xc6] = 0;
    param_1[199] = 0;
    param_1[0xb8] = 0;
    param_1[0xb9] = 0;
    param_1[0xba] = 0;
    param_1[0xbb] = 0;
    param_1[0xbc] = 0;
    param_1[0xbd] = 0;
    param_1[0xbe] = 0;
    param_1[0xbf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x20] = 0;
    param_1[0x21] = 0;
    param_1[0x22] = 0;
    param_1[0x23] = 0;
    param_1[0x24] = 0;
    param_1[0x25] = 0;
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
    param_1[0x1e] = 0;
    param_1[0x1f] = 0;
    param_1[0x30] = 0;
    param_1[0x31] = 0;
    param_1[0x32] = 0;
    param_1[0x33] = 0;
    param_1[0x34] = 0;
    param_1[0x35] = 0;
    param_1[0x36] = 0;
    param_1[0x37] = 0;
    param_1[0x28] = 0;
    param_1[0x29] = 0;
    param_1[0x2a] = 0;
    param_1[0x2b] = 0;
    param_1[0x2c] = 0;
    param_1[0x2d] = 0;
    param_1[0x2e] = 0;
    param_1[0x2f] = 0;
    param_1[0x40] = 0;
    param_1[0x41] = 0;
    param_1[0x42] = 0;
    param_1[0x43] = 0;
    param_1[0x44] = 0;
    param_1[0x45] = 0;
    param_1[0x46] = 0;
    param_1[0x47] = 0;
    param_1[0x38] = 0;
    param_1[0x39] = 0;
    param_1[0x3a] = 0;
    param_1[0x3b] = 0;
    param_1[0x3c] = 0;
    param_1[0x3d] = 0;
    param_1[0x3e] = 0;
    param_1[0x3f] = 0;
    param_1[0x50] = 0;
    param_1[0x51] = 0;
    param_1[0x52] = 0;
    param_1[0x53] = 0;
    param_1[0x54] = 0;
    param_1[0x55] = 0;
    param_1[0x56] = 0;
    param_1[0x57] = 0;
    param_1[0x48] = 0;
    param_1[0x49] = 0;
    param_1[0x4a] = 0;
    param_1[0x4b] = 0;
    param_1[0x4c] = 0;
    param_1[0x4d] = 0;
    param_1[0x4e] = 0;
    param_1[0x4f] = 0;
    param_1[0x60] = 0;
    param_1[0x61] = 0;
    param_1[0x62] = 0;
    param_1[99] = 0;
    param_1[100] = 0;
    param_1[0x65] = 0;
    param_1[0x66] = 0;
    param_1[0x67] = 0;
    param_1[0x58] = 0;
    param_1[0x59] = 0;
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    param_1[0x5d] = 0;
    param_1[0x5e] = 0;
    param_1[0x5f] = 0;
  }
  return uVar3;
}



/* Entry: 103aeb950; end: 103aeb9bb; -[SCSpectaclesECBPacketEncryptor setTxSalt:] */

void FUN_103aeb950(undefined2 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  
  func_0x000107c61174(param_3);
  func_0x000107c427d8();
  uVar1 = param_3;
  func_0x000107c61178(param_3);
  func_0x000107c3eea8();
  uVar2 = param_3;
  func_0x000107c4adac(param_3);
  func_0x000107c61170(param_3);
  puVar3 = param_1 + 0x68;
  FUN_103af0378(puVar3,(long)param_1 + 3,param_1 + 4,uVar1,uVar2);
  if (((ulong)puVar3 & 1) == 0) {
    *(undefined8 *)(param_1 + 0x68) = 0;
    *(undefined8 *)(param_1 + 0x6c) = 0;
    *param_1 = 0;
    *(undefined1 *)(param_1 + 1) = 0;
    *(undefined2 *)((long)param_1 + 3) = 0;
    *(undefined1 *)((long)param_1 + 5) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x34) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x3c) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0x44) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0x4c) = 0;
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined8 *)(param_1 + 0x54) = 0;
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined8 *)(param_1 + 0x5c) = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 4) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0xc) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x14) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x1c) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x24) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x2c) = 0;
  }
  return;
}



/* Entry: 103aeb9bc; end: 103aeba27; -[SCSpectaclesECBPacketEncryptor setRxSalt:] */

void FUN_103aeb9bc(undefined2 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  
  func_0x000107c61174(param_3);
  func_0x000107c427d8();
  uVar1 = param_3;
  func_0x000107c61178(param_3);
  func_0x000107c3eea8();
  uVar2 = param_3;
  func_0x000107c4adac(param_3);
  func_0x000107c61170(param_3);
  puVar3 = param_1 + 0x68;
  FUN_103af0378(puVar3,param_1,param_1 + 0x34,uVar1,uVar2);
  if (((ulong)puVar3 & 1) == 0) {
    *(undefined8 *)(param_1 + 0x68) = 0;
    *(undefined8 *)(param_1 + 0x6c) = 0;
    *param_1 = 0;
    *(undefined1 *)(param_1 + 1) = 0;
    *(undefined2 *)((long)param_1 + 3) = 0;
    *(undefined1 *)((long)param_1 + 5) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x34) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x3c) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0x44) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0x4c) = 0;
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined8 *)(param_1 + 0x54) = 0;
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined8 *)(param_1 + 0x5c) = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 4) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0xc) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x14) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x1c) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x24) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x2c) = 0;
  }
  return;
}



/* Entry: 103aeba28; end: 103aeba63; -[SCSpectaclesECBPacketEncryptor connectionReady] */

ulong FUN_103aeba28(ulong param_1)

{
  ulong uVar1;
  uint uVar2;
  
  uVar1 = param_1;
  func_0x000107c427d8();
  func_0x000103af0208();
  if ((int)uVar1 != 0) {
    func_0x000107c427d8();
    if ((*(char *)(param_1 + 3) == '\x01') && (*(char *)(param_1 + 4) == '\x01')) {
      uVar2 = (uint)*(byte *)(param_1 + 5);
    }
    else {
      uVar2 = 0;
    }
    return (ulong)(uVar2 & 1);
  }
  return uVar1;
}



/* Entry: 103aeba64; end: 103aebb6b; -[SCSpectaclesECBPacketEncryptor decryptMessage:] */

void FUN_103aeba64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined1 auStack_48 [8];
  
  puVar1 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
  func_0x000107c61174(param_3);
  func_0x000107c610f4(puVar1);
  func_0x000107c4adac(param_3);
  func_0x000107c47194(puVar1);
  uVar2 = param_3;
  func_0x000107c4d2d4(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c427d8();
  uVar3 = uVar2;
  func_0x000107c61178(uVar2);
  func_0x000107c4d2d0();
  uVar4 = uVar2;
  func_0x000107c4adac(uVar2);
  puVar5 = puVar1;
  func_0x000107c61178(puVar1);
  func_0x000107c4d2d0();
  FUN_103af0610(param_1,uVar3,uVar4,puVar5,auStack_48);
  if ((int)param_1 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = puVar1;
    func_0x000107c5c27c(puVar1);
    func_0x000107c61180();
  }
  func_0x000107c61170(uVar2);
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 103aebb6c; end: 103aebc87; -[SCSpectaclesECBPacketEncryptor encryptMessage:] */

void FUN_103aebb6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined1 auStack_48 [8];
  
  puVar1 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
  func_0x000107c61174(param_3);
  func_0x000107c610f4(puVar1);
  func_0x000107c4adac(param_3);
  func_0x000107c47194(puVar1);
  uVar2 = param_3;
  func_0x000107c4d2d4(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c4adac(puVar1);
  func_0x000107c504fc(puVar1);
  func_0x000107c427d8();
  uVar3 = uVar2;
  func_0x000107c61178(uVar2);
  func_0x000107c4d2d0();
  uVar4 = uVar2;
  func_0x000107c4adac(uVar2);
  puVar5 = puVar1;
  func_0x000107c61178(puVar1);
  func_0x000107c4d2d0();
  FUN_103af0688(param_1,uVar3,uVar4,puVar5,auStack_48);
  puVar5 = (undefined *)0x0;
  if ((int)param_1 != 0) {
    puVar5 = puVar1;
    func_0x000107c5c27c(puVar1);
    func_0x000107c61180();
  }
  func_0x000107c61170(uVar2);
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 103aebc88; end: 103aebc8f; -[SCSpectaclesECBPacketEncryptor encryptorContext] */

undefined8 FUN_103aebc88(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 103aebc90; end: 103aebdb7; -[SCSpectaclesECBPacketEncryptor setEncryptorContext:] */

void FUN_103aebc90(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 103aebdb8; end: 103aebe5f;  */

undefined8 * FUN_103aebdb8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_28;
  
  puVar1 = (undefined8 *)0x0;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((param_1 != (undefined8 *)0x0) && (param_2 != (undefined8 *)0x0)) {
    uStack_58 = param_2[1];
    uStack_60 = *param_2;
    uStack_48 = *(undefined8 *)((long)param_2 + 0x2c);
    uStack_50 = *(undefined8 *)((long)param_2 + 0x24);
    uStack_38 = *(undefined8 *)((long)param_2 + 0x3c);
    uStack_40 = *(undefined8 *)((long)param_2 + 0x34);
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    puVar2 = &uStack_60;
    param_2 = (undefined8 *)0x30;
    func_0x000100237f68(puVar2,0x30,&uStack_80);
    puVar1 = (undefined8 *)(ulong)(puVar2 != (undefined8 *)0x0);
    if (puVar2 != (undefined8 *)0x0) {
      param_1[1] = uStack_78;
      *param_1 = uStack_80;
      *(undefined4 *)(param_1 + 2) = (undefined4)uStack_70;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar1;
  }
  func_0x000107c60e78();
  if (puVar1 != (undefined8 *)0x0 && param_2 != (undefined8 *)0x0) {
    uVar3 = *param_2;
    puVar1[1] = param_2[1];
    *puVar1 = uVar3;
    uVar3 = *(undefined8 *)((long)param_2 + 0x24);
    uVar5 = *(undefined8 *)((long)param_2 + 0x3c);
    uVar4 = *(undefined8 *)((long)param_2 + 0x34);
    puVar1[3] = *(undefined8 *)((long)param_2 + 0x2c);
    puVar1[2] = uVar3;
    puVar1[5] = uVar5;
    puVar1[4] = uVar4;
  }
  return (undefined8 *)(ulong)(puVar1 != (undefined8 *)0x0 && param_2 != (undefined8 *)0x0);
}



/* Entry: 103aebe60; end: 103aebe8b;  */

bool FUN_103aebe60(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_1 != (undefined8 *)0x0 && param_2 != (undefined8 *)0x0) {
    uVar1 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar1;
    uVar1 = *(undefined8 *)((long)param_2 + 0x24);
    uVar3 = *(undefined8 *)((long)param_2 + 0x3c);
    uVar2 = *(undefined8 *)((long)param_2 + 0x34);
    param_1[3] = *(undefined8 *)((long)param_2 + 0x2c);
    param_1[2] = uVar1;
    param_1[5] = uVar3;
    param_1[4] = uVar2;
  }
  return param_1 != (undefined8 *)0x0 && param_2 != (undefined8 *)0x0;
}



/* Entry: 103aebe8c; end: 103aebff3; -[SCSpectaclesWhiteboxAuthenticator initWithAppNonce:eyewearNonce:sharedSecret:protocolVersion:callback:] */

undefined1 *
FUN_103aebe8c(undefined1 *param_1,undefined8 param_2,long param_3,long param_4,long param_5,
             undefined8 param_6,long param_7)

{
  undefined1 **ppuVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 *puVar8;
  undefined1 *puStack_70;
  undefined *puStack_68;
  
  ppuVar1 = &puStack_70;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  puVar8 = (undefined1 *)0x0;
  if ((((param_3 != 0) && (param_4 != 0)) && (param_5 != 0)) && (param_7 != 0)) {
    puStack_68 = PTR_PTR_1126e3268;
    puStack_70 = param_1;
    func_0x000107c61154(&puStack_70,PTR_s_init_1125d9248);
    if (ppuVar1 != (undefined1 **)0x0) {
      *(undefined8 *)((long)ppuVar1 + 0x10) = param_6;
      lVar2 = param_3;
      func_0x000107c61178();
      func_0x000107c3eea8();
      lVar3 = param_3;
      func_0x000107c4adac(param_3);
      lVar4 = param_4;
      func_0x000107c61178(param_4);
      func_0x000107c3eea8();
      lVar5 = param_4;
      func_0x000107c4adac(param_4);
      lVar6 = param_5;
      func_0x000107c61178(param_5);
      func_0x000107c3eea8();
      lVar7 = param_5;
      func_0x000107c4adac(param_5);
      FUN_103af0cf4(lVar2,lVar3,lVar4,lVar5,lVar6,lVar7,param_7);
      *(long *)((long)ppuVar1 + 8) = lVar2;
      if (lVar2 == 0) {
        puVar8 = (undefined1 *)0x0;
        param_1 = (undefined1 *)ppuVar1;
        goto LAB_103aebfb0;
      }
    }
    func_0x000107c61174(ppuVar1);
    param_1 = (undefined1 *)ppuVar1;
    puVar8 = (undefined1 *)ppuVar1;
  }
LAB_103aebfb0:
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return puVar8;
}



/* Entry: 103aebff4; end: 103aec047; -[SCSpectaclesWhiteboxAuthenticator dealloc] */

void FUN_103aebff4(long param_1)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  lVar1 = param_1;
  func_0x000107c40e40();
  if (lVar1 != 0) {
    func_0x000107c40e40(param_1);
    FUN_103af1698();
  }
  puStack_28 = PTR_PTR_1126e3268;
  lStack_30 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103aec048; end: 103aec17b; -[SCSpectaclesWhiteboxAuthenticator generateVerificationRequest:tag:] */

long FUN_103aec048(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 auStack_48 [2];
  long lStack_38;
  
  lVar2 = 0;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = param_3;
  puVar10 = param_4;
  if ((param_3 != (undefined8 *)0x0) && (param_4 != (undefined8 *)0x0)) {
    lVar2 = param_1;
    func_0x000107c4f568();
    if (lVar2 == 2) {
      func_0x000107c40e40();
      puVar4 = auStack_48;
      func_0x000103af0f44();
      iVar1 = (int)param_1;
      lVar2 = param_1;
      puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
    }
    else {
      lVar2 = param_1;
      func_0x000107c4f568();
      if (lVar2 == 1) {
        func_0x000107c40e40();
        puVar4 = auStack_48;
        func_0x000103af0e5c();
        iVar1 = (int)param_1;
        lVar2 = param_1;
        puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
      }
      else {
        func_0x000107c40e40();
        puVar4 = auStack_48;
        func_0x000103af0d80();
        iVar1 = (int)param_1;
        lVar2 = param_1;
        puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
      }
    }
    PTR__OBJC_CLASS___NSData_1126ae778 = puVar3;
    if (iVar1 != 0) {
      func_0x000107c412e4();
      func_0x000107c61180();
      func_0x000107c61104();
      *param_3 = puVar3;
      puVar4 = auStack_48;
      puVar10 = (undefined8 *)0x10;
      puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
      func_0x000107c412e4();
      func_0x000107c61180();
      func_0x000107c61104();
      *param_4 = puVar3;
      lVar2 = 1;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return lVar2;
  }
  func_0x000107c60e78();
  func_0x000107c61174();
  func_0x000107c61174();
  lVar5 = 0;
  if ((puVar4 != (undefined8 *)0x0) && (puVar10 != (undefined8 *)0x0)) {
    lVar5 = lVar2;
    func_0x000107c4f568();
    if (lVar5 == 2) {
      func_0x000107c40e40(lVar2);
      puVar6 = puVar4;
      func_0x000107c61178(puVar4);
      func_0x000107c3eea8();
      puVar7 = puVar4;
      func_0x000107c4adac(puVar4);
      puVar8 = puVar10;
      func_0x000107c61178(puVar10);
      func_0x000107c3eea8();
      puVar9 = puVar10;
      func_0x000107c4adac(puVar10);
      FUN_103af130c(lVar2,puVar6,puVar7,puVar8,puVar9);
      lVar5 = lVar2;
    }
    else {
      lVar5 = lVar2;
      func_0x000107c4f568();
      func_0x000107c40e40(lVar2);
      puVar6 = puVar4;
      func_0x000107c61178(puVar4);
      func_0x000107c3eea8();
      puVar7 = puVar4;
      func_0x000107c4adac(puVar4);
      puVar8 = puVar10;
      func_0x000107c61178(puVar10);
      func_0x000107c3eea8();
      puVar9 = puVar10;
      func_0x000107c4adac(puVar10);
      if (lVar5 == 1) {
        FUN_103af117c();
        lVar5 = lVar2;
      }
      else {
        FUN_103af102c(lVar2,puVar6,puVar7,puVar8,puVar9);
        lVar5 = lVar2;
      }
    }
  }
  func_0x000107c61170(puVar10);
  func_0x000107c61170(puVar4);
  return lVar5;
}



/* Entry: 103aec17c; end: 103aec2cf; -[SCSpectaclesWhiteboxAuthenticator parseVerificationResponse:tag:] */

long FUN_103aec17c(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  func_0x000107c61174();
  func_0x000107c61174();
  lVar1 = 0;
  if ((param_3 != 0) && (param_4 != 0)) {
    lVar1 = param_1;
    func_0x000107c4f568();
    if (lVar1 == 2) {
      func_0x000107c40e40(param_1);
      lVar1 = param_3;
      func_0x000107c61178(param_3);
      func_0x000107c3eea8();
      lVar2 = param_3;
      func_0x000107c4adac(param_3);
      lVar3 = param_4;
      func_0x000107c61178(param_4);
      func_0x000107c3eea8();
      lVar4 = param_4;
      func_0x000107c4adac(param_4);
      FUN_103af130c(param_1,lVar1,lVar2,lVar3,lVar4);
      lVar1 = param_1;
    }
    else {
      lVar1 = param_1;
      func_0x000107c4f568();
      func_0x000107c40e40(param_1);
      lVar2 = param_3;
      func_0x000107c61178(param_3);
      func_0x000107c3eea8();
      lVar3 = param_3;
      func_0x000107c4adac(param_3);
      lVar4 = param_4;
      func_0x000107c61178(param_4);
      func_0x000107c3eea8();
      lVar5 = param_4;
      func_0x000107c4adac(param_4);
      if (lVar1 == 1) {
        FUN_103af117c();
        lVar1 = param_1;
      }
      else {
        FUN_103af102c(param_1,lVar2,lVar3,lVar4,lVar5);
        lVar1 = param_1;
      }
    }
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return lVar1;
}



/* Entry: 103aec2d0; end: 103aec2f7; -[SCSpectaclesWhiteboxAuthenticator keyVersion] */

int FUN_103aec2d0(int param_1)

{
  int iVar1;
  
  func_0x000107c40e40();
  FUN_103af130c();
  iVar1 = 0;
  if (param_1 - 2U < 5) {
    iVar1 = (param_1 - 2U & 0xff) + 1;
  }
  return iVar1;
}



/* Entry: 103aec2f8; end: 103aec3cb; -[SCSpectaclesWhiteboxAuthenticator verifyAuthenticityWithCert:] */

undefined * FUN_103aec2f8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined1 auStack_58 [32];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_3 != 0) {
    func_0x000107c61174(param_3);
    func_0x000107c40e40();
    lVar1 = param_3;
    func_0x000107c61178(param_3);
    func_0x000107c3eea8();
    lVar2 = param_3;
    func_0x000107c4adac(param_3);
    func_0x000107c61170(param_3);
    FUN_103af132c(param_1,lVar1,lVar2,auStack_58);
    if ((int)param_1 != 0) {
      puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
      func_0x000107c412e4();
      func_0x000107c61180();
      goto LAB_103aec39c;
    }
  }
  puVar3 = (undefined *)0x0;
LAB_103aec39c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return puVar3;
  }
  func_0x000107c60e78();
  return *(undefined **)(puVar3 + 8);
}



/* Entry: 103aec3cc; end: 103aec3d3; -[SCSpectaclesWhiteboxAuthenticator ctx] */

undefined8 FUN_103aec3cc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 103aec3d4; end: 103aec3db; -[SCSpectaclesWhiteboxAuthenticator setCtx:] */

void FUN_103aec3d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 103aec3dc; end: 103aec3e3; -[SCSpectaclesWhiteboxAuthenticator protocolVersion] */

undefined8 FUN_103aec3dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 103aec3e4; end: 103aec3eb; -[SCSpectaclesWhiteboxAuthenticator setProtocolVersion:] */

void FUN_103aec3e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 103aec3ec; end: 103aec69f; -[SCSpectaclesWhiteboxAuthenticator verifyAuthenticityWithTranscript:trustedChain:] */

undefined * FUN_103aec3ec(undefined8 param_1,undefined8 param_2,undefined1 *param_3,ulong param_4)

{
  undefined1 *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined1 *puVar17;
  long lVar18;
  long lVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined1 *puVar22;
  long lVar23;
  undefined1 *puVar24;
  ulong uVar25;
  long lVar26;
  ulong uStack_90;
  undefined1 *puStack_88;
  ulong uStack_80;
  undefined1 *puStack_78;
  undefined1 *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174();
  func_0x000107c61174();
  puVar22 = param_3;
  func_0x000107c51708();
  func_0x000107c61180();
  puStack_70 = puVar22;
  func_0x000107c40808();
  lVar18 = (long)&uStack_90 - ((long)puVar22 * 8 + 0xfU & 0xfffffffffffffff0);
  puVar22 = param_3;
  puStack_78 = (undefined1 *)&uStack_90;
  func_0x000107c51708();
  func_0x000107c61180();
  puVar17 = puVar22;
  func_0x000107c40808();
  func_0x000107c61170(puVar22);
  if (puVar17 != (undefined1 *)0x0) {
    puVar22 = (undefined1 *)0x0;
    do {
      puVar17 = param_3;
      func_0x000107c51708();
      func_0x000107c61180();
      puVar1 = puVar17;
      func_0x000107c4d9a4();
      func_0x000107c61180();
      puVar24 = puVar1;
      func_0x000107c61178();
      func_0x000107c3ac4c();
      *(undefined1 **)(lVar18 + (long)puVar22 * 8) = puVar24;
      func_0x000107c61170(puVar1);
      func_0x000107c61170(puVar17);
      puVar22 = puVar22 + 1;
      puVar17 = param_3;
      func_0x000107c51708();
      func_0x000107c61180();
      puVar1 = puVar17;
      func_0x000107c40808();
      func_0x000107c61170(puVar17);
    } while (puVar22 < puVar1);
  }
  uVar25 = param_4;
  func_0x000107c40808();
  lVar23 = lVar18 - (uVar25 * 8 + 0xf & 0xfffffffffffffff0);
  uVar25 = param_4;
  func_0x000107c40808();
  if (uVar25 != 0) {
    uVar25 = 0;
    do {
      uVar2 = param_4;
      func_0x000107c4d9a4();
      func_0x000107c61180();
      uVar3 = uVar2;
      func_0x000107c61178();
      func_0x000107c3ac4c();
      *(ulong *)(lVar23 + uVar25 * 8) = uVar3;
      func_0x000107c61170(uVar2);
      uVar25 = uVar25 + 1;
      uVar2 = param_4;
      func_0x000107c40808();
    } while (uVar25 < uVar2);
  }
  puVar17 = param_3;
  func_0x000107c5af68();
  func_0x000107c61180();
  puVar1 = param_3;
  func_0x000107c3ab64();
  func_0x000107c61180();
  uVar25 = param_4;
  func_0x000107c40808();
  puVar24 = param_3;
  uStack_80 = uVar25;
  func_0x000107c51708();
  func_0x000107c61180();
  puVar22 = puVar24;
  func_0x000107c40808();
  puVar4 = puVar1;
  puStack_88 = puVar22;
  func_0x000107c61178();
  func_0x000107c3eea8();
  puVar5 = puVar1;
  func_0x000107c4adac();
  puVar6 = puVar17;
  func_0x000107c61178();
  func_0x000107c3eea8();
  puVar22 = puVar17;
  func_0x000107c4adac(puVar17);
  lVar26 = lVar23;
  FUN_103aedf70(lVar23,uStack_80,lVar18,puStack_88,puVar4,(int)(short)puVar5,puVar6,
                (int)(short)puVar22);
  puVar20 = (undefined *)(ulong)((int)lVar26 == 1);
  func_0x000107c61170(puVar24);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar17);
  puVar22 = puStack_78;
  func_0x000107c61170(puStack_70);
  func_0x000107c61170(param_4);
  puVar7 = param_3;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    func_0x000107c60e78();
    *(undefined1 **)(puVar22 + -0x60) = puVar6;
    *(undefined1 **)(puVar22 + -0x58) = puVar24;
    *(undefined1 **)(puVar22 + -0x50) = puVar5;
    *(undefined1 **)(puVar22 + -0x48) = puVar1;
    *(undefined1 **)(puVar22 + -0x40) = puVar17;
    *(long *)(puVar22 + -0x38) = lVar23;
    *(undefined **)(puVar22 + -0x30) = puVar20;
    *(undefined1 **)(puVar22 + -0x28) = puVar4;
    *(ulong *)(puVar22 + -0x20) = param_4;
    *(undefined1 **)(puVar22 + -0x18) = param_3;
    *(undefined1 **)(puVar22 + -0x10) = &stack0xfffffffffffffff0;
    *(code **)(puVar22 + -8) = FUN_103aec6a0;
    *(undefined8 *)(puVar22 + -0x70) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    puVar20 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
    func_0x000107c610f4();
    func_0x000107c47194();
    *(undefined **)(puVar22 + -0x78) = puVar20;
    puVar17 = puVar7;
    func_0x000107c51708();
    func_0x000107c61180();
    *(undefined1 **)(puVar22 + -0x80) = puVar17;
    func_0x000107c40808();
    *(undefined1 **)(puVar22 + -0x90) = puVar17;
    *(undefined1 **)(puVar22 + -0x88) = puVar22 + -0x150;
    lVar18 = (long)puVar17 * 8;
    puVar24 = puVar22 + (-0x150 - (lVar18 + 0xfU & 0xfffffffffffffff0));
    func_0x000107c60ee4(puVar24,lVar18);
    puVar17 = puVar7;
    func_0x000107c51708();
    func_0x000107c61180();
    *(undefined1 **)(puVar22 + -0x98) = puVar17;
    func_0x000107c40808();
    lVar26 = (long)puVar24 - ((long)puVar17 * 8 + 0xfU & 0xfffffffffffffff0);
    puVar17 = puVar7;
    func_0x000107c51708();
    func_0x000107c61180();
    *(undefined1 **)(puVar22 + -0xa0) = puVar17;
    func_0x000107c40808();
    lVar23 = lVar26 - ((long)puVar17 * 2 + 0xfU & 0xfffffffffffffff0);
    puVar17 = puVar7;
    func_0x000107c51708();
    func_0x000107c61180();
    puVar1 = puVar17;
    func_0x000107c40808();
    func_0x000107c61170(puVar17);
    if (puVar1 != (undefined1 *)0x0) {
      puVar17 = (undefined1 *)0x0;
      do {
        puVar1 = puVar7;
        func_0x000107c51708();
        func_0x000107c61180();
        puVar4 = puVar1;
        func_0x000107c4d9a4();
        func_0x000107c61180();
        puVar5 = puVar4;
        func_0x000107c412d4();
        func_0x000107c61180();
        uVar8 = *(undefined8 *)(puVar24 + (long)puVar17 * 8);
        *(undefined1 **)(puVar24 + (long)puVar17 * 8) = puVar5;
        func_0x000107c61170(uVar8);
        func_0x000107c61170(puVar4);
        func_0x000107c61170(puVar1);
        puVar1 = puVar5;
        func_0x000107c61178();
        func_0x000107c3eea8();
        *(undefined1 **)(lVar26 + (long)puVar17 * 8) = puVar1;
        func_0x000107c4adac();
        *(short *)(lVar23 + (long)puVar17 * 2) = (short)puVar5;
        puVar17 = puVar17 + 1;
        puVar1 = puVar7;
        func_0x000107c51708();
        func_0x000107c61180();
        puVar4 = puVar1;
        func_0x000107c40808();
        func_0x000107c61170(puVar1);
      } while (puVar17 < puVar4);
    }
    puVar17 = puVar7;
    func_0x000107c3de10();
    func_0x000107c61180();
    *(undefined1 **)(puVar22 + -0xa8) = puVar17;
    func_0x000107c61178();
    func_0x000107c3eea8();
    *(undefined1 **)(puVar22 + -200) = puVar17;
    puVar17 = puVar7;
    func_0x000107c3de10();
    func_0x000107c61180();
    *(undefined1 **)(puVar22 + -0xb0) = puVar17;
    func_0x000107c4adac();
    *(undefined1 **)(puVar22 + -0xe0) = puVar17;
    puVar17 = puVar7;
    func_0x000107c3de2c();
    func_0x000107c61180();
    *(undefined1 **)(puVar22 + -0xb8) = puVar17;
    func_0x000107c61178();
    func_0x000107c3eea8();
    *(undefined1 **)(puVar22 + -0xe8) = puVar17;
    puVar17 = puVar7;
    func_0x000107c3de2c();
    func_0x000107c61180();
    *(undefined1 **)(puVar22 + -0xc0) = puVar17;
    func_0x000107c4adac();
    *(undefined1 **)(puVar22 + -0xf8) = puVar17;
    puVar17 = puVar7;
    func_0x000107c4e4c0();
    func_0x000107c61180();
    *(undefined1 **)(puVar22 + -0xd0) = puVar17;
    func_0x000107c61178();
    func_0x000107c3eea8();
    *(undefined1 **)(puVar22 + -0x100) = puVar17;
    puVar17 = puVar7;
    func_0x000107c4e4c0();
    func_0x000107c61180();
    *(undefined1 **)(puVar22 + -0xd8) = puVar17;
    func_0x000107c4adac();
    *(undefined1 **)(puVar22 + -0x110) = puVar17;
    puVar17 = puVar7;
    func_0x000107c4e4c4();
    func_0x000107c61180();
    *(undefined1 **)(puVar22 + -0xf0) = puVar17;
    func_0x000107c61178();
    func_0x000107c3eea8();
    *(undefined1 **)(puVar22 + -0x118) = puVar17;
    puVar17 = puVar7;
    func_0x000107c4e4c4();
    func_0x000107c61180();
    *(undefined1 **)(puVar22 + -0x108) = puVar17;
    func_0x000107c4adac();
    *(undefined1 **)(puVar22 + -0x130) = puVar17;
    puVar17 = puVar7;
    func_0x000107c3de8c();
    func_0x000107c61180();
    *(undefined1 **)(puVar22 + -0x120) = puVar17;
    func_0x000107c61178();
    func_0x000107c3eea8();
    *(undefined1 **)(puVar22 + -0x138) = puVar17;
    puVar17 = puVar7;
    func_0x000107c3de8c();
    func_0x000107c61180();
    *(undefined1 **)(puVar22 + -0x128) = puVar17;
    func_0x000107c4adac();
    *(undefined1 **)(puVar22 + -0x140) = puVar17;
    puVar17 = puVar7;
    func_0x000107c5af68();
    func_0x000107c61180();
    puVar1 = puVar17;
    func_0x000107c61178();
    func_0x000107c3eea8();
    *(undefined1 **)(puVar22 + -0x148) = puVar1;
    puVar1 = puVar7;
    func_0x000107c5af68();
    func_0x000107c61180();
    puVar4 = puVar1;
    func_0x000107c4adac();
    func_0x000107c51708();
    func_0x000107c61180();
    puVar5 = puVar7;
    func_0x000107c40808();
    puVar21 = *(undefined **)(puVar22 + -0x78);
    puVar20 = puVar21;
    func_0x000107c61178();
    func_0x000107c4d2d0();
    *(undefined1 **)(lVar23 + -0x10) = puVar5;
    *(undefined **)(lVar23 + -8) = puVar20;
    uVar8 = *(undefined8 *)(puVar22 + -0xe0);
    uVar14 = *(undefined8 *)(puVar22 + -0xf8);
    uVar15 = *(undefined8 *)(puVar22 + -0x110);
    *(long *)(lVar23 + -0x20) = lVar26;
    *(long *)(lVar23 + -0x18) = lVar23;
    uVar16 = *(undefined8 *)(puVar22 + -0x130);
    *(short *)(lVar23 + -0x28) = (short)puVar4;
    *(undefined8 *)(lVar23 + -0x30) = *(undefined8 *)(puVar22 + -0x148);
    *(short *)(lVar23 + -0x38) = (short)*(undefined8 *)(puVar22 + -0x140);
    *(undefined8 *)(lVar23 + -0x40) = *(undefined8 *)(puVar22 + -0x138);
    FUN_103aedc70(*(undefined8 *)(puVar22 + -200),(int)(short)uVar8,*(undefined8 *)(puVar22 + -0xe8)
                  ,(int)(short)uVar14,*(undefined8 *)(puVar22 + -0x100),(int)(short)uVar15,
                  *(undefined8 *)(puVar22 + -0x118),(int)(short)uVar16);
    func_0x000107c61170(puVar7);
    func_0x000107c61170(puVar1);
    func_0x000107c61170(puVar17);
    func_0x000107c61170(*(undefined8 *)(puVar22 + -0x128));
    func_0x000107c61170(*(undefined8 *)(puVar22 + -0x120));
    func_0x000107c61170(*(undefined8 *)(puVar22 + -0x108));
    func_0x000107c61170(*(undefined8 *)(puVar22 + -0xf0));
    func_0x000107c61170(*(undefined8 *)(puVar22 + -0xd8));
    func_0x000107c61170(*(undefined8 *)(puVar22 + -0xd0));
    func_0x000107c61170(*(undefined8 *)(puVar22 + -0xc0));
    func_0x000107c61170(*(undefined8 *)(puVar22 + -0xb8));
    func_0x000107c61170(*(undefined8 *)(puVar22 + -0xb0));
    func_0x000107c61170(*(undefined8 *)(puVar22 + -0xa8));
    puVar20 = puVar21;
    func_0x000107c40794();
    func_0x000107c61170(*(undefined8 *)(puVar22 + -0xa0));
    func_0x000107c61170(*(undefined8 *)(puVar22 + -0x98));
    if (*(long *)(puVar22 + -0x90) != 0) {
      puVar17 = puVar24 + -8;
      lVar19 = lVar18;
      do {
        func_0x000107c61170(*(undefined8 *)(puVar17 + lVar19));
        lVar19 = lVar19 + -8;
        lVar18 = 0;
      } while (lVar19 != 0);
    }
    lVar19 = *(long *)(puVar22 + -0x88);
    func_0x000107c61170(*(undefined8 *)(puVar22 + -0x80));
    uVar8 = *(undefined8 *)(puVar22 + -0x78);
    func_0x000107c61170();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)(puVar22 + -0x70)) {
      func_0x000107c60e78();
      *(undefined1 **)(lVar19 + -0x60) = puVar1;
      *(long *)(lVar19 + -0x58) = lVar26;
      *(undefined1 **)(lVar19 + -0x50) = puVar7;
      *(long *)(lVar19 + -0x48) = lVar23;
      *(undefined1 **)(lVar19 + -0x40) = puVar4;
      *(undefined1 **)(lVar19 + -0x38) = puVar24;
      *(undefined **)(lVar19 + -0x30) = puVar21;
      *(long *)(lVar19 + -0x28) = lVar18;
      *(undefined1 **)(lVar19 + -0x20) = puVar17;
      *(undefined **)(lVar19 + -0x18) = puVar20;
      *(undefined1 **)(lVar19 + -0x10) = puVar22 + -0x10;
      *(code **)(lVar19 + -8) = FUN_103aecb80;
      puVar21 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
      func_0x000107c610f4(PTR__OBJC_CLASS___NSMutableData_1126b4958);
      func_0x000107c47194();
      uVar14 = uVar8;
      func_0x000107c3de10();
      func_0x000107c61180();
      uVar15 = uVar14;
      func_0x000107c61178();
      func_0x000107c3eea8();
      *(undefined8 *)(lVar19 + -0x70) = uVar15;
      uVar15 = uVar8;
      func_0x000107c3de10();
      func_0x000107c61180();
      *(undefined8 *)(lVar19 + -0x68) = uVar15;
      func_0x000107c4adac();
      *(undefined8 *)(lVar19 + -0x78) = uVar15;
      uVar15 = uVar8;
      func_0x000107c4e4c0(uVar8);
      func_0x000107c61180();
      uVar16 = uVar15;
      func_0x000107c61178();
      func_0x000107c3eea8();
      uVar9 = uVar8;
      func_0x000107c4e4c0(uVar8);
      func_0x000107c61180();
      uVar10 = uVar9;
      func_0x000107c4adac();
      uVar11 = uVar8;
      func_0x000107c5aa30(uVar8);
      func_0x000107c61180();
      uVar12 = uVar11;
      func_0x000107c61178();
      func_0x000107c3eea8();
      func_0x000107c5aa30(uVar8);
      func_0x000107c61180();
      uVar13 = uVar8;
      func_0x000107c4adac();
      puVar20 = puVar21;
      func_0x000107c61178(puVar21);
      func_0x000107c4d2d0();
      FUN_103aede7c(*(undefined8 *)(lVar19 + -0x70),(int)(short)*(undefined8 *)(lVar19 + -0x78),
                    uVar16,(int)(short)uVar10,uVar12,(int)(short)uVar13,puVar20);
      func_0x000107c61170(uVar8);
      func_0x000107c61170(uVar11);
      func_0x000107c61170(uVar9);
      func_0x000107c61170(uVar15);
      func_0x000107c61170(*(undefined8 *)(lVar19 + -0x68));
      func_0x000107c61170(uVar14);
      puVar20 = puVar21;
      func_0x000107c40794(puVar21);
      func_0x000107c61170(puVar21);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar20);
    return puVar20;
  }
  return puVar20;
}



/* Entry: 103aec6a0; end: 103aecb7f; -[SCSpectaclesPairingTranscriptV4 hashTranscript] */

void FUN_103aec6a0(ulong param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  ulong uVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  ulong uStack_190;
  undefined2 auStack_188 [4];
  ulong uStack_180;
  undefined2 auStack_178 [4];
  long alStack_170 [3];
  undefined8 uStack_158;
  ulong auStack_150 [4];
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  undefined1 *puStack_88;
  ulong uStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
  func_0x000107c610f4();
  func_0x000107c47194();
  uVar21 = param_1;
  puStack_78 = puVar6;
  func_0x000107c51708();
  func_0x000107c61180();
  uStack_80 = uVar21;
  func_0x000107c40808();
  lVar22 = uVar21 * 8;
  lVar23 = -(lVar22 + 0xfU & 0xfffffffffffffff0);
  lVar24 = (long)auStack_150 + lVar23;
  uStack_90 = uVar21;
  puStack_88 = (undefined1 *)auStack_150;
  func_0x000107c60ee4(lVar24,lVar22);
  uVar21 = param_1;
  func_0x000107c51708();
  func_0x000107c61180();
  uStack_98 = uVar21;
  func_0x000107c40808();
  lVar26 = lVar24 - (uVar21 * 8 + 0xf & 0xfffffffffffffff0);
  uVar21 = param_1;
  func_0x000107c51708();
  func_0x000107c61180();
  uStack_a0 = uVar21;
  func_0x000107c40808();
  lVar25 = lVar26 - (uVar21 * 2 + 0xf & 0xfffffffffffffff0);
  uVar21 = param_1;
  func_0x000107c51708();
  func_0x000107c61180();
  uVar7 = uVar21;
  func_0x000107c40808();
  func_0x000107c61170(uVar21);
  if (uVar7 != 0) {
    uVar21 = 0;
    do {
      uVar7 = param_1;
      func_0x000107c51708();
      func_0x000107c61180();
      uVar8 = uVar7;
      func_0x000107c4d9a4();
      func_0x000107c61180();
      uVar9 = uVar8;
      func_0x000107c412d4();
      func_0x000107c61180();
      uVar10 = *(undefined8 *)(lVar24 + uVar21 * 8);
      *(ulong *)(lVar24 + uVar21 * 8) = uVar9;
      func_0x000107c61170(uVar10);
      func_0x000107c61170(uVar8);
      func_0x000107c61170(uVar7);
      uVar7 = uVar9;
      func_0x000107c61178();
      func_0x000107c3eea8();
      *(ulong *)(lVar26 + uVar21 * 8) = uVar7;
      func_0x000107c4adac();
      *(short *)(lVar25 + uVar21 * 2) = (short)uVar9;
      uVar21 = uVar21 + 1;
      uVar7 = param_1;
      func_0x000107c51708();
      func_0x000107c61180();
      uVar8 = uVar7;
      func_0x000107c40808();
      func_0x000107c61170(uVar7);
    } while (uVar21 < uVar8);
  }
  uVar21 = param_1;
  func_0x000107c3de10();
  func_0x000107c61180();
  uStack_a8 = uVar21;
  func_0x000107c61178();
  func_0x000107c3eea8();
  uVar7 = param_1;
  uStack_c8 = uVar21;
  func_0x000107c3de10();
  func_0x000107c61180();
  uStack_b0 = uVar7;
  func_0x000107c4adac();
  uVar21 = param_1;
  uStack_e0 = uVar7;
  func_0x000107c3de2c();
  func_0x000107c61180();
  uStack_b8 = uVar21;
  func_0x000107c61178();
  func_0x000107c3eea8();
  uVar7 = param_1;
  uStack_e8 = uVar21;
  func_0x000107c3de2c();
  func_0x000107c61180();
  uStack_c0 = uVar7;
  func_0x000107c4adac();
  uVar21 = param_1;
  uStack_f8 = uVar7;
  func_0x000107c4e4c0();
  func_0x000107c61180();
  uStack_d0 = uVar21;
  func_0x000107c61178();
  func_0x000107c3eea8();
  uVar7 = param_1;
  uStack_100 = uVar21;
  func_0x000107c4e4c0();
  func_0x000107c61180();
  uStack_d8 = uVar7;
  func_0x000107c4adac();
  uVar21 = param_1;
  uStack_110 = uVar7;
  func_0x000107c4e4c4();
  func_0x000107c61180();
  uStack_f0 = uVar21;
  func_0x000107c61178();
  func_0x000107c3eea8();
  uVar7 = param_1;
  uStack_118 = uVar21;
  func_0x000107c4e4c4();
  func_0x000107c61180();
  uStack_108 = uVar7;
  func_0x000107c4adac();
  uVar21 = param_1;
  uStack_130 = uVar7;
  func_0x000107c3de8c();
  func_0x000107c61180();
  uStack_120 = uVar21;
  func_0x000107c61178();
  func_0x000107c3eea8();
  uVar7 = param_1;
  auStack_150[3] = uVar21;
  func_0x000107c3de8c();
  func_0x000107c61180();
  uStack_128 = uVar7;
  func_0x000107c4adac();
  uVar21 = param_1;
  auStack_150[2] = uVar7;
  func_0x000107c5af68();
  func_0x000107c61180();
  uVar7 = uVar21;
  func_0x000107c61178();
  func_0x000107c3eea8();
  uVar8 = param_1;
  auStack_150[1] = uVar7;
  func_0x000107c5af68();
  func_0x000107c61180();
  uVar7 = uVar8;
  func_0x000107c4adac();
  func_0x000107c51708();
  func_0x000107c61180();
  uVar9 = param_1;
  func_0x000107c40808();
  puVar6 = puStack_78;
  puVar11 = puStack_78;
  func_0x000107c61178();
  func_0x000107c4d2d0();
  *(ulong *)(lVar25 + -0x10) = uVar9;
  *(undefined **)(lVar25 + -8) = puVar11;
  sVar1 = (short)uStack_e0;
  sVar2 = (short)uStack_f8;
  sVar3 = (short)uStack_110;
  *(long *)(lVar25 + -0x20) = lVar26;
  *(long *)(lVar25 + -0x18) = lVar25;
  sVar4 = (short)uStack_130;
  *(short *)(lVar25 + -0x28) = (short)uVar7;
  *(ulong *)(lVar25 + -0x30) = auStack_150[1];
  *(short *)(lVar25 + -0x38) = (short)auStack_150[2];
  *(ulong *)(lVar25 + -0x40) = auStack_150[3];
  FUN_103aedc70(uStack_c8,(int)sVar1,uStack_e8,(int)sVar2,uStack_100,(int)sVar3,uStack_118,
                (int)sVar4);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uStack_128);
  func_0x000107c61170(uStack_120);
  func_0x000107c61170(uStack_108);
  func_0x000107c61170(uStack_f0);
  func_0x000107c61170(uStack_d8);
  func_0x000107c61170(uStack_d0);
  func_0x000107c61170(uStack_c0);
  func_0x000107c61170(uStack_b8);
  func_0x000107c61170(uStack_b0);
  func_0x000107c61170(uStack_a8);
  puVar11 = puVar6;
  func_0x000107c40794();
  func_0x000107c61170(uStack_a0);
  func_0x000107c61170(uStack_98);
  if (uStack_90 != 0) {
    uVar21 = (long)&uStack_158 + lVar23;
    lVar23 = lVar22;
    do {
      func_0x000107c61170(*(undefined8 *)(uVar21 + lVar23));
      lVar23 = lVar23 + -8;
      lVar22 = 0;
    } while (lVar23 != 0);
  }
  puVar5 = puStack_88;
  func_0x000107c61170(uStack_80);
  puVar12 = puStack_78;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    func_0x000107c60e78();
    *(ulong *)(puVar5 + -0x60) = uVar8;
    *(long *)(puVar5 + -0x58) = lVar26;
    *(ulong *)(puVar5 + -0x50) = param_1;
    *(long *)(puVar5 + -0x48) = lVar25;
    *(ulong *)(puVar5 + -0x40) = uVar7;
    *(long *)(puVar5 + -0x38) = lVar24;
    *(undefined **)(puVar5 + -0x30) = puVar6;
    *(long *)(puVar5 + -0x28) = lVar22;
    *(ulong *)(puVar5 + -0x20) = uVar21;
    *(undefined **)(puVar5 + -0x18) = puVar11;
    *(undefined1 **)(puVar5 + -0x10) = &stack0xfffffffffffffff0;
    *(code **)(puVar5 + -8) = FUN_103aecb80;
    puVar6 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
    func_0x000107c610f4(PTR__OBJC_CLASS___NSMutableData_1126b4958);
    func_0x000107c47194();
    puVar11 = puVar12;
    func_0x000107c3de10();
    func_0x000107c61180();
    puVar13 = puVar11;
    func_0x000107c61178();
    func_0x000107c3eea8();
    *(undefined **)(puVar5 + -0x70) = puVar13;
    puVar13 = puVar12;
    func_0x000107c3de10();
    func_0x000107c61180();
    *(undefined **)(puVar5 + -0x68) = puVar13;
    func_0x000107c4adac();
    *(undefined **)(puVar5 + -0x78) = puVar13;
    puVar13 = puVar12;
    func_0x000107c4e4c0(puVar12);
    func_0x000107c61180();
    puVar14 = puVar13;
    func_0x000107c61178();
    func_0x000107c3eea8();
    puVar15 = puVar12;
    func_0x000107c4e4c0(puVar12);
    func_0x000107c61180();
    puVar16 = puVar15;
    func_0x000107c4adac();
    puVar17 = puVar12;
    func_0x000107c5aa30(puVar12);
    func_0x000107c61180();
    puVar18 = puVar17;
    func_0x000107c61178();
    func_0x000107c3eea8();
    func_0x000107c5aa30(puVar12);
    func_0x000107c61180();
    puVar19 = puVar12;
    func_0x000107c4adac();
    puVar20 = puVar6;
    func_0x000107c61178(puVar6);
    func_0x000107c4d2d0();
    FUN_103aede7c(*(undefined8 *)(puVar5 + -0x70),(int)(short)*(undefined8 *)(puVar5 + -0x78),
                  puVar14,(int)(short)puVar16,puVar18,(int)(short)puVar19,puVar20);
    func_0x000107c61170(puVar12);
    func_0x000107c61170(puVar17);
    func_0x000107c61170(puVar15);
    func_0x000107c61170(puVar13);
    func_0x000107c61170(*(undefined8 *)(puVar5 + -0x68));
    func_0x000107c61170(puVar11);
    puVar11 = puVar6;
    func_0x000107c40794(puVar6);
    func_0x000107c61170(puVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 103aecb80; end: 103aecd03; -[SCSpectaclesPairingTranscriptV4 ECDSADigest] */

void FUN_103aecb80(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
  func_0x000107c610f4(PTR__OBJC_CLASS___NSMutableData_1126b4958);
  func_0x000107c47194();
  uVar2 = param_1;
  func_0x000107c3de10();
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c61178();
  func_0x000107c3eea8();
  uVar4 = param_1;
  func_0x000107c3de10();
  func_0x000107c61180();
  uVar5 = uVar4;
  func_0x000107c4adac();
  uVar6 = param_1;
  func_0x000107c4e4c0(param_1);
  func_0x000107c61180();
  uVar7 = uVar6;
  func_0x000107c61178();
  func_0x000107c3eea8();
  uVar8 = param_1;
  func_0x000107c4e4c0(param_1);
  func_0x000107c61180();
  uVar9 = uVar8;
  func_0x000107c4adac();
  uVar10 = param_1;
  func_0x000107c5aa30(param_1);
  func_0x000107c61180();
  uVar11 = uVar10;
  func_0x000107c61178();
  func_0x000107c3eea8();
  func_0x000107c5aa30(param_1);
  func_0x000107c61180();
  uVar12 = param_1;
  func_0x000107c4adac();
  puVar13 = puVar1;
  func_0x000107c61178(puVar1);
  func_0x000107c4d2d0();
  FUN_103aede7c(uVar3,(int)(short)uVar5,uVar7,(int)(short)uVar9,uVar11,(int)(short)uVar12,puVar13);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar2);
  puVar13 = puVar1;
  func_0x000107c40794(puVar1);
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
  return;
}



/* Entry: 103aecd04; end: 103aecd0b; -[SCSpectaclesPairingTranscriptV4 sharedSecret] */

undefined8 FUN_103aecd04(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 103aecd0c; end: 103aecd13; -[SCSpectaclesPairingTranscriptV4 setSharedSecret:] */

void FUN_103aecd0c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 103aecd14; end: 103aecd1b; -[SCSpectaclesPairingTranscriptV4 appNonce] */

undefined8 FUN_103aecd14(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 103aecd1c; end: 103aecd23; -[SCSpectaclesPairingTranscriptV4 setAppNonce:] */

void FUN_103aecd1c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}


