/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1028b539c; end: 1028b53af; -[SCSnapMeReplyOriginalStoryResolver cancel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028b539c(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_112ec7b18) = 1;
  return;
}



/* Entry: 1028b53b0; end: 1028b5873;  */

/* WARNING: Possible PIC construction at 0x0001028b5560: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028b55b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028b56c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028b5650: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028b56a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001028b5654) */
/* WARNING: Removing unreachable block (ram,0x0001028b56c4) */
/* WARNING: Removing unreachable block (ram,0x0001028b55b4) */
/* WARNING: Removing unreachable block (ram,0x0001028b5564) */
/* WARNING: Removing unreachable block (ram,0x0001028b56a4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028b53b0(ulong param_1,ulong param_2,ulong param_3,code *param_4,undefined8 param_5)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar4 = &puStack_80;
  if ((param_3 & 1) == 0) {
    uVar5 = param_1;
    if (param_2 != 0) {
      uVar1 = param_1 & 0xffffffffffff;
      if ((param_2 & 0x2000000000000000) != 0) {
        uVar1 = param_2 >> 0x38 & 0xf;
      }
      if (uVar1 != 0) {
        func_0x000107c61434(param_2);
        func_0x0001000d224c(&puStack_80);
        puVar6 = puStack_80;
        if (puStack_80 != (undefined *)0x0) {
          uVar5 = 0;
          FUN_1028b6790(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
          func_0x000107c5ffdc();
          puVar2 = &UNK_110561d28;
          func_0x000107c613fc(&UNK_110561d28,0x18,7);
          func_0x000107c61614(puVar2 + 0x10);
          puVar3 = &UNK_110561d50;
          func_0x000107c613fc(&UNK_110561d50,0x38,7);
          *(undefined **)(puVar3 + 0x10) = puVar2;
          *(ulong *)(puVar3 + 0x18) = param_1;
          *(ulong *)(puVar3 + 0x20) = param_2;
          *(code **)(puVar3 + 0x28) = param_4;
          *(undefined8 *)(puVar3 + 0x30) = param_5;
          pcStack_60 = FUN_1028b6374;
          puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_78 = 0x42000000;
          pcStack_70 = FUN_1028b5c68;
          puStack_68 = &UNK_110561d68;
          puStack_58 = puVar3;
          func_0x000107c60bc4(&puStack_80);
          puVar2 = puStack_58;
          func_0x000107c6157c(param_5);
          func_0x000107c61574(puVar2);
          func_0x000107c4f738(puVar6);
          func_0x000107c60bd0(ppuVar4);
          func_0x000107c615e8(puVar6);
          goto code_r0x000107c61170;
        }
        func_0x000107c6142c();
        uVar5 = param_2;
      }
    }
    FUN_1028b5d7c();
    if (uVar5 == 0) {
      puVar6 = PTR_PTR_1126ae6c0;
      func_0x000107c61168(PTR_PTR_1126ae6c0);
      uVar5 = 0;
      func_0x000107c5fadc(0,0xe000000000000000);
      func_0x000107c5c094(puVar6);
      func_0x000107c61180();
    }
    else {
      (*param_4)(uVar5);
    }
  }
  else {
    FUN_1028b5d7c();
    if (param_1 == 0) {
      puVar6 = PTR_PTR_1126ae6c0;
      func_0x000107c61168(PTR_PTR_1126ae6c0);
      uVar5 = 0;
      func_0x000107c5fadc(0,0xe000000000000000);
      func_0x000107c5c094(puVar6);
      func_0x000107c61180();
    }
    else {
      (*param_4)(param_1);
      uVar5 = param_1;
    }
  }
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 1028b5874; end: 1028b5c67;  */

undefined * FUN_1028b5874(ulong param_1,undefined *param_2,undefined *param_3)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  ulong uVar13;
  undefined *puVar14;
  undefined *puVar15;
  
  puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_3 != (undefined *)0x0) {
    puVar9 = param_3;
  }
  puVar4 = param_2;
  if ((ulong)puVar9 >> 0x3e == 0) {
    puVar14 = *(undefined **)(((ulong)puVar9 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar14 = (undefined *)((ulong)puVar9 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar9) {
      puVar14 = puVar9;
    }
    func_0x000107c60480();
  }
  func_0x000107c61434(param_3);
  if (puVar14 != (undefined *)0x0) {
    puVar12 = (undefined *)0x0;
    do {
      if (((ulong)puVar9 & 0xc000000000000001) == 0) {
        if (*(undefined **)(((ulong)puVar9 & 0xffffffffffffff8) + 0x10) <= puVar12) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1028b5c50);
          (*pcVar2)();
        }
        puVar3 = *(undefined **)(puVar9 + (long)puVar12 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        puVar3 = puVar12;
        puVar4 = puVar9;
        FUN_1028b4b84();
      }
      if (SCARRY8((long)puVar12,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1028b5aa8);
        (*pcVar2)();
      }
      puVar12 = puVar12 + 1;
      puVar15 = puVar3;
      func_0x000107c5c068();
      func_0x000107c61180();
      if (puVar15 == (undefined *)0x0) {
        puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
        if ((ulong)PTR___swiftEmptyArrayStorage_11034f1c8 >> 0x3e != 0) goto LAB_1028b5a74;
LAB_1028b5988:
        puVar15 = *(undefined **)(((ulong)puVar5 & 0xffffffffffffff8) + 0x10);
      }
      else {
        puVar4 = (undefined *)0x0;
        FUN_1028b6790(0,0x112d56e50,&PTR_PTR_1126cc4e0);
        puVar5 = puVar15;
        func_0x000107c5fc54();
        func_0x000107c61170(puVar15);
        if ((ulong)puVar5 >> 0x3e == 0) goto LAB_1028b5988;
LAB_1028b5a74:
        puVar15 = (undefined *)((ulong)puVar5 & 0xffffffffffffff8);
        if ((undefined *)0x7fffffffffffffff < puVar5) {
          puVar15 = puVar5;
        }
        func_0x000107c60480();
      }
      if (puVar15 != (undefined *)0x0) {
        uVar13 = 0;
        do {
          if (((ulong)puVar5 & 0xc000000000000001) == 0) {
            if (*(ulong *)(((ulong)puVar5 & 0xffffffffffffff8) + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1028b5c4c);
              (*pcVar2)();
            }
            uVar6 = *(ulong *)(puVar5 + uVar13 * 8 + 0x20);
            func_0x000107c61174();
          }
          else {
            uVar6 = uVar13;
            puVar4 = puVar5;
            func_0x000101059128();
          }
          puVar1 = (undefined *)(uVar13 + 1);
          if (SCARRY8(uVar13,1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1028b5c48);
            (*pcVar2)();
          }
          uVar7 = uVar6;
          func_0x000107c51fa4();
          func_0x000107c61180();
          if (uVar7 != 0) {
            uVar8 = uVar7;
            func_0x000107c5faec();
            func_0x000107c61170(uVar7);
            if ((uVar8 == param_1) && (puVar4 == param_2)) {
              func_0x000107c6142c(puVar9);
              func_0x000107c6142c(puVar5);
              func_0x000107c6142c(puVar4);
              func_0x000107c61170(uVar6);
            }
            else {
              puVar11 = puVar4;
              func_0x000107c605b8(uVar8,puVar4,param_1,param_2,0);
              func_0x000107c6142c(puVar4);
              func_0x000107c61170(uVar6);
              puVar4 = puVar11;
              if ((uVar8 & 1) == 0) goto LAB_1028b59ac;
              func_0x000107c6142c(puVar9);
              func_0x000107c6142c(puVar5);
            }
            func_0x000107c61174();
            puVar9 = puVar3;
            func_0x000107c5c080();
            if ((long)puVar9 < 2) {
              if ((puVar9 != (undefined *)0x0) && (puVar9 == (undefined *)0x1)) goto LAB_1028b5b2c;
            }
            else {
              if (puVar9 == (undefined *)0x2) {
                puVar9 = puVar3;
                FUN_1028b6040(puVar3);
                func_0x000107c61170(puVar3);
                func_0x000107c61170(puVar3);
                return puVar9;
              }
              if ((puVar9 != (undefined *)0x3) && (puVar9 == (undefined *)0x4)) {
LAB_1028b5b2c:
                puVar9 = PTR_PTR_1126ae6c0;
                func_0x000107c61168(PTR_PTR_1126ae6c0);
                uVar10 = 0;
                func_0x000107c5fadc(0,0xe000000000000000);
                func_0x000107c5c094(puVar9);
                func_0x000107c61180();
                func_0x000107c61170(uVar10);
                puVar4 = PTR_PTR_1126ae6d0;
                func_0x000107c610f8(PTR_PTR_1126ae6d0);
                func_0x000107c4831c();
                puVar14 = PTR_PTR_1126b1bb0;
                func_0x000107c61168(PTR_PTR_1126b1bb0);
                func_0x000107c3e6c4();
                func_0x000107c61180();
                func_0x000107c61170(puVar3);
                func_0x000107c61170(puVar3);
                func_0x000107c61170(puVar9);
                func_0x000107c61170(puVar4);
                return puVar14;
              }
            }
            func_0x000107c61170(puVar3);
            func_0x000107c61170(puVar3);
            return (undefined *)0x0;
          }
          func_0x000107c61170(uVar6);
LAB_1028b59ac:
          uVar13 = uVar13 + 1;
        } while (puVar1 != puVar15);
      }
      func_0x000107c61170(puVar3);
      func_0x000107c6142c(puVar5);
    } while (puVar12 != puVar14);
  }
  func_0x000107c6142c(puVar9);
  return (undefined *)0x0;
}



/* Entry: 1028b5c68; end: 1028b5cd7;  */

void FUN_1028b5c68(long param_1,long param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  if (param_2 != 0) {
    uVar3 = 0;
    FUN_1028b6790(0,0x112ec7b00,&PTR_PTR_1126b1338);
    func_0x000107c5fc54(param_2,uVar3);
  }
  func_0x000107c6157c(uVar2);
  (*pcVar1)(param_2);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1028b5cd8; end: 1028b5d7b; -[SCSnapMeReplyOriginalStoryResolver resolveReplyConfigurationForOriginalSnapId:isPublicStoryReply:completion:] */

void FUN_1028b5cd8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c60bc4(param_5);
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_3);
  }
  func_0x000107c60bc4(param_5);
  func_0x000107c61174(param_1);
  FUN_1028b63b4(param_3,param_2,param_4,param_1,param_5);
  func_0x000107c60bd0(param_5);
  func_0x000107c60bd0(param_5);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1028b5d7c; end: 1028b603f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_1028b5d7c(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uStack_68;
  
  func_0x0001000d224c(&uStack_68);
  uVar10 = uStack_68;
  if (uStack_68 != 0) {
    uVar4 = uStack_68;
    func_0x000107c4f38c();
    func_0x000107c61180();
    func_0x000107c615e8(uVar10);
    if (uVar4 != 0) {
      uVar3 = uVar4;
      func_0x000107c5faec();
      func_0x000107c61170(uVar4);
      uVar10 = uVar3 & 0xffffffffffff;
      if ((param_2 & 0x2000000000000000) != 0) {
        uVar10 = param_2 >> 0x38 & 0xf;
      }
      if ((uVar10 != 0) && (func_0x0001000d224c(&uStack_68), uStack_68 != 0)) {
        uVar10 = uStack_68;
        func_0x000107c4c244();
        func_0x000107c61180();
        func_0x000107c615e8(uStack_68);
        if (uVar10 != 0) {
          uVar4 = 0;
          FUN_1028b6790(0,0x112d4c900,&PTR_PTR_1126d4dd8);
          uVar5 = uVar10;
          func_0x000107c5fc54();
          func_0x000107c61170(uVar10);
          if (uVar5 >> 0x3e == 0) {
            uVar10 = *(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10);
          }
          else {
            uVar10 = uVar5 & 0xffffffffffffff8;
            if (0x7fffffffffffffff < uVar5) {
              uVar10 = uVar5;
            }
            func_0x000107c60480();
          }
          if (uVar10 != 0) {
            uVar11 = 0;
            do {
              if ((uVar5 & 0xc000000000000001) == 0) {
                if (*(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x1028b6018);
                  (*pcVar2)();
                }
                uVar6 = *(ulong *)(uVar5 + uVar11 * 8 + 0x20);
                func_0x000107c61174();
                uVar9 = uVar4;
              }
              else {
                uVar6 = uVar11;
                uVar9 = uVar5;
                func_0x000100f32930();
              }
              uVar1 = uVar11 + 1;
              if (SCARRY8(uVar11,1)) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x1028b6014);
                (*pcVar2)();
              }
              uVar4 = uVar6;
              func_0x000107c4f348();
              func_0x000107c61180();
              uVar7 = uVar4;
              func_0x000107c4f38c();
              func_0x000107c61180();
              func_0x000107c61170(uVar4);
              uVar8 = uVar7;
              func_0x000107c5faec();
              func_0x000107c61170(uVar7);
              if ((uVar8 == uVar3) && (uVar9 == param_2)) {
                func_0x000107c6142c(uVar5);
                uVar5 = uVar9;
LAB_1028b5fa8:
                func_0x000107c6142c(uVar5);
                func_0x000107c61174();
                uVar10 = uVar6;
                func_0x000107c3f408();
                if ((uVar10 & 1) == 0) {
                  func_0x000107c6142c(param_2);
                  func_0x000107c61170(uVar6);
                  func_0x000107c61170(uVar6);
                  return 0;
                }
                FUN_1028b24ec(uVar3,param_2);
                func_0x000107c61170(uVar6);
                func_0x000107c61170(uVar6);
                func_0x000107c6142c(param_2);
                return uVar3;
              }
              uVar4 = uVar9;
              func_0x000107c605b8(uVar8,uVar9,uVar3,param_2,0);
              func_0x000107c6142c(uVar9);
              if ((uVar8 & 1) != 0) goto LAB_1028b5fa8;
              func_0x000107c61170(uVar6);
              uVar11 = uVar11 + 1;
            } while (uVar1 != uVar10);
          }
          func_0x000107c6142c(param_2);
          param_2 = uVar5;
        }
      }
      func_0x000107c6142c(param_2);
    }
  }
  return 0;
}



/* Entry: 1028b6040; end: 1028b6197;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028b6040(ulong param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uStack_48;
  
  func_0x000107c5bfec();
  func_0x000107c61180();
  if (param_1 == 0) {
    return;
  }
  uVar1 = param_1;
  func_0x000107c5faec();
  uVar2 = uVar1 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar2 = param_2 >> 0x38 & 0xf;
  }
  if (uVar2 == 0) {
    func_0x000107c6142c(param_2);
    func_0x000107c61170(param_1);
    return;
  }
  uVar4 = param_2;
  func_0x0001000d224c(&uStack_48);
  uVar2 = param_1;
  if (uStack_48 != 0) {
    uVar2 = uStack_48;
    func_0x000107c41140();
    func_0x000107c61180();
    func_0x000107c615e8(uStack_48);
    func_0x000107c61170(param_1);
    if (uVar2 == 0) goto LAB_1028b6134;
    uVar3 = uVar2;
    func_0x000107c4103c();
    if ((uVar3 & 1) != 0) {
      uVar3 = uVar2;
      func_0x000107c42120();
      func_0x000107c61180();
      if (uVar3 == 0) {
        uVar5 = 0;
        uVar4 = 0;
      }
      else {
        uVar5 = uVar3;
        func_0x000107c5faec();
        func_0x000107c61170(uVar3);
      }
      FUN_1028b23a4(uVar1,param_2,uVar5,uVar4);
      func_0x000107c61170(uVar2);
      func_0x000107c6142c(param_2);
      func_0x000107c6142c(uVar4);
      return;
    }
  }
  func_0x000107c61170(uVar2);
LAB_1028b6134:
  func_0x000107c6142c(param_2);
  return;
}



/* Entry: 1028b6198; end: 1028b61f7; -[SCSnapMeReplyOriginalStoryResolver init] */

void FUN_1028b6198(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SnapMeReplyUtils.SCSnapMeReplyOriginalStoryResolver",0x33,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1028b61c4);
  (*pcVar1)();
}



/* Entry: 1028b61f8; end: 1028b624f; -[SCSnapMeReplyOriginalStoryResolver .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001028b6214: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028b6234: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001028b6218) */
/* WARNING: Removing unreachable block (ram,0x0001028b6238) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028b61f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ec7b20));
  return;
}



/* Entry: 1028b6250; end: 1028b6373;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028b6250(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined1 *)(unaff_x20 + _DAT_112ec7b18) = 0;
  uVar1 = 0x112e93988;
  func_0x0001000285a8(0x112e93988,&UNK_10daea040);
  func_0x0001000bda74(param_1,uVar1);
  *(undefined8 *)(unaff_x20 + _DAT_112ec7b20) = param_1;
  func_0x0001000285a8(0x112d56780,&UNK_10da9f4a0);
  func_0x0001000bda74();
  *(undefined8 *)(unaff_x20 + _DAT_112ec7b28) = param_2;
  func_0x0001000285a8(0x112e93990,&UNK_10daea050);
  func_0x0001000bda74();
  *(undefined8 *)(unaff_x20 + _DAT_112ec7b30) = param_3;
  func_0x0001000285a8(0x112ec7b38,&UNK_10daea058);
  func_0x0001000bda74();
  *(undefined8 *)(unaff_x20 + _DAT_112ec7b40) = param_4;
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1028b6374; end: 1028b6393;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028b6374(undefined8 param_1)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long unaff_x20;
  undefined1 auStack_68 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  puVar4 = *(undefined **)(unaff_x20 + 0x18);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
  pcVar2 = *(code **)(unaff_x20 + 0x28);
  func_0x000107c61428(lVar1 + 0x10,auStack_68,0,0,pcVar2,*(undefined8 *)(unaff_x20 + 0x30));
  puVar3 = (undefined *)(lVar1 + 0x10);
  func_0x000107c61618();
  if (puVar3 != (undefined *)0x0) {
    if ((puVar3[_DAT_112ec7b18] & 1) == 0) {
      FUN_1028b5874(puVar4,uVar7,param_1);
      puVar5 = puVar4;
      if ((puVar4 == (undefined *)0x0) && (FUN_1028b5d7c(), puVar5 == (undefined *)0x0)) {
        puVar6 = PTR_PTR_1126ae6c0;
        func_0x000107c61168(PTR_PTR_1126ae6c0);
        uVar7 = 0;
        func_0x000107c5fadc(0,0xe000000000000000);
        func_0x000107c5c094(puVar6);
        func_0x000107c61180();
        func_0x000107c61170(uVar7);
        puVar8 = PTR_PTR_1126ae6d0;
        func_0x000107c610f8(PTR_PTR_1126ae6d0);
        func_0x000107c4831c();
        puVar5 = PTR_PTR_1126b1bb0;
        func_0x000107c61168(PTR_PTR_1126b1bb0);
        func_0x000107c3e6c4();
        func_0x000107c61180();
        func_0x000107c61170(puVar6);
        func_0x000107c61170(puVar8);
      }
      func_0x000107c61174();
      (*pcVar2)(puVar5);
      func_0x000107c61170(puVar5);
      func_0x000107c61170(puVar3);
      puVar3 = puVar4;
    }
    func_0x000107c61170(puVar3);
  }
  return;
}



/* Entry: 1028b6394; end: 1028b63b3;  */

void FUN_1028b6394(void)

{
  func_0x000107c61168(&PTR_PTR_11286ab98);
  return;
}



/* Entry: 1028b63b4; end: 1028b673b;  */

/* WARNING: Possible PIC construction at 0x0001028b65bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028b660c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028b6710: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028b6698: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028b66e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001028b669c) */
/* WARNING: Removing unreachable block (ram,0x0001028b6714) */
/* WARNING: Removing unreachable block (ram,0x0001028b6610) */
/* WARNING: Removing unreachable block (ram,0x0001028b65c0) */
/* WARNING: Removing unreachable block (ram,0x0001028b66ec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028b63b4(ulong param_1,ulong param_2,ulong param_3,undefined8 param_4,ulong param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  ppuVar6 = &puStack_80;
  puVar2 = &UNK_110561da0;
  func_0x000107c613fc(&UNK_110561da0,0x18,7);
  *(ulong *)(puVar2 + 0x10) = param_5;
  if ((param_3 & 1) != 0) {
    param_2 = param_5;
    func_0x000107c60bc4();
    FUN_1028b5d7c();
    if (param_2 == 0) {
      puVar2 = PTR_PTR_1126ae6c0;
      func_0x000107c61168(PTR_PTR_1126ae6c0);
      param_2 = 0;
      func_0x000107c5fadc(0,0xe000000000000000);
      func_0x000107c5c094(puVar2);
      func_0x000107c61180();
    }
    else {
      (**(code **)(param_5 + 0x10))(param_5,param_2);
      func_0x000107c61574(puVar2);
    }
    goto code_r0x000107c61170;
  }
  if (param_2 == 0) {
LAB_1028b6558:
    param_2 = param_5;
    func_0x000107c60bc4();
  }
  else {
    uVar3 = param_1 & 0xffffffffffff;
    if ((param_2 & 0x2000000000000000) != 0) {
      uVar3 = param_2 >> 0x38 & 0xf;
    }
    if (uVar3 == 0) goto LAB_1028b6558;
    func_0x000107c60bc4(param_5);
    func_0x000107c61434(param_2);
    func_0x0001000d224c(&puStack_80);
    puVar1 = puStack_80;
    if (puStack_80 != (undefined *)0x0) {
      uVar3 = 0;
      FUN_1028b6790(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
      func_0x000107c5ffdc();
      puVar4 = &UNK_110561d28;
      func_0x000107c613fc(&UNK_110561d28,0x18,7);
      func_0x000107c61614(puVar4 + 0x10,param_4);
      puVar5 = &UNK_110561dc8;
      func_0x000107c613fc(&UNK_110561dc8,0x38,7);
      *(undefined **)(puVar5 + 0x10) = puVar4;
      *(ulong *)(puVar5 + 0x18) = param_1;
      *(ulong *)(puVar5 + 0x20) = param_2;
      *(code **)(puVar5 + 0x28) = FUN_1028b673c;
      *(undefined **)(puVar5 + 0x30) = puVar2;
      uStack_60 = 0x1028b67d8;
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0x42000000;
      pcStack_70 = FUN_1028b5c68;
      puStack_68 = &UNK_110561de0;
      puStack_58 = puVar5;
      func_0x000107c60bc4(&puStack_80);
      puVar4 = puStack_58;
      func_0x000107c6157c(puVar2);
      func_0x000107c61574(puVar4);
      func_0x000107c4f738(puVar1);
      func_0x000107c60bd0(ppuVar6);
      func_0x000107c61574(puVar2);
      func_0x000107c615e8(puVar1);
      param_2 = uVar3;
      goto code_r0x000107c61170;
    }
    func_0x000107c6142c();
  }
  FUN_1028b5d7c();
  if (param_2 == 0) {
    puVar2 = PTR_PTR_1126ae6c0;
    func_0x000107c61168(PTR_PTR_1126ae6c0);
    param_2 = 0;
    func_0x000107c5fadc(0,0xe000000000000000);
    func_0x000107c5c094(puVar2);
    func_0x000107c61180();
  }
  else {
    (**(code **)(param_5 + 0x10))(param_5,param_2);
    func_0x000107c61574(puVar2);
  }
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1028b673c; end: 1028b674b;  */

void FUN_1028b673c(undefined8 param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0001028b6748. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1);
  return;
}



/* Entry: 1028b674c; end: 1028b677f;  */

void FUN_1028b674c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1028b6780; end: 1028b678f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028b6780(undefined8 param_1)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long unaff_x20;
  undefined1 auStack_68 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  puVar4 = *(undefined **)(unaff_x20 + 0x18);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
  pcVar2 = *(code **)(unaff_x20 + 0x28);
  func_0x000107c61428(lVar1 + 0x10,auStack_68,0,0,pcVar2,*(undefined8 *)(unaff_x20 + 0x30));
  puVar3 = (undefined *)(lVar1 + 0x10);
  func_0x000107c61618();
  if (puVar3 != (undefined *)0x0) {
    if ((puVar3[_DAT_112ec7b18] & 1) == 0) {
      FUN_1028b5874(puVar4,uVar7,param_1);
      puVar5 = puVar4;
      if ((puVar4 == (undefined *)0x0) && (FUN_1028b5d7c(), puVar5 == (undefined *)0x0)) {
        puVar6 = PTR_PTR_1126ae6c0;
        func_0x000107c61168(PTR_PTR_1126ae6c0);
        uVar7 = 0;
        func_0x000107c5fadc(0,0xe000000000000000);
        func_0x000107c5c094(puVar6);
        func_0x000107c61180();
        func_0x000107c61170(uVar7);
        puVar8 = PTR_PTR_1126ae6d0;
        func_0x000107c610f8(PTR_PTR_1126ae6d0);
        func_0x000107c4831c();
        puVar5 = PTR_PTR_1126b1bb0;
        func_0x000107c61168(PTR_PTR_1126b1bb0);
        func_0x000107c3e6c4();
        func_0x000107c61180();
        func_0x000107c61170(puVar6);
        func_0x000107c61170(puVar8);
      }
      func_0x000107c61174();
      (*pcVar2)(puVar5);
      func_0x000107c61170(puVar5);
      func_0x000107c61170(puVar3);
      puVar3 = puVar4;
    }
    func_0x000107c61170(puVar3);
  }
  return;
}



/* Entry: 1028b6790; end: 1028b67cf;  */

void FUN_1028b6790(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1028b67d0; end: 1028b67db;  */

void FUN_1028b67d0(long param_1,long param_2)

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



/* Entry: 1028b67dc; end: 1028b683f;  */

void FUN_1028b67dc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x000107c61168();
  puVar2 = puVar1;
  func_0x000107c4179c(0x4028000000000000);
  func_0x000107c61180();
  if (puVar2 == (undefined *)0x0) {
    func_0x000107c5c600(0x4028000000000000,*(undefined8 *)PTR__UIFontWeightSemibold_110345c48);
    func_0x000107c61180();
    puVar2 = puVar1;
  }
  puRam0000000113804c58 = puVar2;
  return;
}



/* Entry: 1028b6840; end: 1028b6a77;  */

/* WARNING: Possible PIC construction at 0x0001028b6998: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028b69a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001028b699c) */
/* WARNING: Removing unreachable block (ram,0x0001028b69ac) */
/* WARNING: Removing unreachable block (ram,0x0001028b6a74) */
/* WARNING: Removing unreachable block (ram,0x0001028b6a24) */

void FUN_1028b6840(double param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 unaff_x20;
  double dVar3;
  double dVar4;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  func_0x000107c5b078();
  if ((0.0 < param_1) && (func_0x000107c5b078(param_3), 0.0 < param_2)) {
    func_0x000107c5b078(param_3);
    dVar4 = 1.0;
    if (200.0 < param_1) {
      func_0x000107c5b078(param_3);
      dVar4 = 200.0 / param_1;
    }
    dVar3 = 200.0;
    func_0x000107c5b078(param_3);
    func_0x000107c5b078(param_3);
    func_0x000107c610f8(PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08);
    func_0x000107c486f8(dVar4 * param_1,dVar4 * dVar3);
    puVar1 = &UNK_110561e18;
    func_0x000107c613fc(&UNK_110561e18,0x58,7);
    *(double *)(puVar1 + 0x10) = dVar4 * param_1;
    *(double *)(puVar1 + 0x18) = dVar4 * dVar3;
    *(undefined8 *)(puVar1 + 0x20) = param_3;
    *(undefined8 *)(puVar1 + 0x28) = param_4;
    *(undefined8 *)(puVar1 + 0x30) = param_5;
    *(undefined8 *)(puVar1 + 0x38) = unaff_x20;
    *(undefined8 *)(puVar1 + 0x40) = param_6;
    *(undefined8 *)(puVar1 + 0x48) = param_7;
    *(undefined8 *)(puVar1 + 0x50) = param_8;
    puVar2 = &UNK_110561e40;
    func_0x000107c613fc(&UNK_110561e40,0x20,7);
    *(code **)(puVar2 + 0x10) = FUN_1028b6b5c;
    *(undefined **)(puVar2 + 0x18) = puVar1;
    pcStack_80 = FUN_1028b6b74;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_100f9148c;
    puStack_88 = &UNK_110561e58;
    puStack_78 = puVar2;
    func_0x000107c60bc4(&puStack_a0);
    param_3 = param_8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_3);
  return;
}



/* Entry: 1028b6a78; end: 1028b6b5b;  */

void FUN_1028b6a78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,ulong param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  ulong uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x000107c61168(PTR__OBJC_CLASS___UIBezierPath_1126aec18);
  func_0x000107c3e8b0(0,0,param_1,param_2,0x4028000000000000);
  func_0x000107c61180();
  func_0x000107c3d618();
  func_0x000107c422bc(0,0,param_1,param_2,param_4);
  if (param_6 != 0) {
    uVar1 = param_5 & 0xffffffffffff;
    if ((param_6 & 0x2000000000000000) != 0) {
      uVar1 = param_6 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      FUN_1028b717c(param_1,param_3,param_5,param_6,param_8,param_9,param_10);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1028b6b5c; end: 1028b6b73;  */

void FUN_1028b6b5c(undefined8 param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar9 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(ulong *)(unaff_x20 + 0x28);
  uVar3 = *(ulong *)(unaff_x20 + 0x30);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x50);
  puVar7 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x000107c61168(PTR__OBJC_CLASS___UIBezierPath_1126aec18);
  func_0x000107c3e8b0(0,0,uVar9,uVar10,0x4028000000000000);
  func_0x000107c61180();
  func_0x000107c3d618();
  func_0x000107c422bc(0,0,uVar9,uVar10,uVar2);
  if (uVar3 != 0) {
    uVar1 = uVar5 & 0xffffffffffff;
    if ((uVar3 & 0x2000000000000000) != 0) {
      uVar1 = uVar3 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      FUN_1028b717c(uVar9,param_1,uVar5,uVar3,uVar4,uVar6,uVar8);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar7);
  return;
}



/* Entry: 1028b6b74; end: 1028b6b93;  */

void FUN_1028b6b74(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1028b6b94; end: 1028b6baf;  */

void FUN_1028b6b94(long param_1,long param_2)

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



/* Entry: 1028b6bb0; end: 1028b6c97; +[SCSnapMeReplyTileRenderer quickStickerImageFromImage:replierName:replierEmoji:avatarImage:] */

void FUN_1028b6bb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_4 == 0) {
    param_4 = 0;
    uVar1 = 0;
  }
  else {
    func_0x000107c5faec(param_4);
    uVar1 = param_2;
  }
  if (param_5 == 0) {
    param_5 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_5);
  }
  func_0x000107c614ec(param_1);
  func_0x000107c61174(param_3);
  uVar2 = param_6;
  func_0x000107c61174(param_6);
  uVar3 = param_3;
  FUN_1028b6840(param_3,param_4,uVar1,param_5,param_2,param_6);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar2);
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1028b6c98; end: 1028b6cd3; -[SCSnapMeReplyTileRenderer init] */

void FUN_1028b6c98(undefined8 param_1)

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



/* Entry: 1028b6cd4; end: 1028b6d27;  */

void FUN_1028b6cd4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1028b6d28; end: 1028b6d3b;  */

void FUN_1028b6d28(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ec7be8 == (undefined *)0x0 || ((ulong)puRam0000000112ec7be8 & 1) != 0) {
    puVar1 = &UNK_10e92d84c;
    func_0x000107c61518(&UNK_10e92d84c,0x18,0,0);
    puRam0000000112ec7be8 = puVar1;
  }
  return;
}



/* Entry: 1028b6d3c; end: 1028b6d97;  */

void FUN_1028b6d3c(void)

{
  int iVar1;
  ulong *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar4 = 0;
    func_0x000100ef8bfc();
    if (lVar4 != 0) {
      puVar2 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
      goto SUB_1000285a8;
    }
  }
  puVar2 = (ulong *)0x112ec7be0;
  plVar5 = (long *)&UNK_10dbbf240;
SUB_1000285a8:
  if (*puVar2 == 0 || (*puVar2 & 1) != 0) {
    puVar3 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar3,*plVar5 >> 0x20,0,0);
    *puVar2 = (ulong)puVar3;
  }
  return;
}



/* Entry: 1028b6d98; end: 1028b717b;  */

void FUN_1028b6d98(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,ulong param_6,ulong param_7,ulong param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  uVar6 = param_8;
  func_0x000107c61168();
  puVar2 = puVar1;
  func_0x000107c5af88();
  func_0x000107c61180();
  puVar3 = puVar2;
  func_0x000107c3fdd0(0x3feccccccccccccd);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  func_0x000107c549b0(puVar3);
  func_0x000107c61170(puVar3);
  puVar2 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x000107c61168(PTR__OBJC_CLASS___UIBezierPath_1126aec18);
  func_0x000107c3e8a4(param_1,param_2,param_3,param_4);
  func_0x000107c61180();
  func_0x000107c43484();
  func_0x000107c61170(puVar2);
  if (param_8 != 0) {
    uVar7 = param_7 & 0xffffffffffff;
    if ((param_8 & 0x2000000000000000) != 0) {
      uVar7 = param_8 >> 0x38 & 0xf;
    }
    if (uVar7 != 0) {
      func_0x000107c61434(param_8);
      goto LAB_1028b6f28;
    }
  }
  uVar7 = param_5 & 0xffffffffffff;
  if ((param_6 & 0x2000000000000000) != 0) {
    uVar7 = param_6 >> 0x38 & 0xf;
  }
  if (uVar7 == 0) {
    param_7 = 0;
    param_8 = 0xe000000000000000;
  }
  else {
    func_0x000107c61434(param_6);
    param_7 = 1;
    uVar7 = param_6;
    func_0x000101297580(1,param_5,param_6);
    func_0x000107c6142c(param_6);
    func_0x000107c5fb2c(param_7,param_5,uVar7,uVar6);
    func_0x000107c6142c(uVar6);
    param_8 = param_5;
    func_0x000107c5fb24(param_7,param_5);
    func_0x000107c6142c(param_5);
  }
LAB_1028b6f28:
  lVar4 = 0x112d48380;
  func_0x0001000285a8(0x112d48380,&UNK_10d910f10);
  func_0x000107c61534();
  *(undefined8 *)(lVar4 + 0x18) = 4;
  *(undefined8 *)(lVar4 + 0x10) = 2;
  uVar9 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
  *(undefined8 *)(lVar4 + 0x20) = uVar9;
  puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x000107c61168();
  dVar12 = *(double *)PTR__UIFontWeightSemibold_110345c48;
  func_0x000107c61174(uVar9);
  dVar10 = 12.0;
  func_0x000107c5c600(0x4028000000000000,dVar12);
  func_0x000107c61180();
  uVar9 = 0;
  FUN_1028b7760(0,0x112d48388,&PTR__OBJC_CLASS___UIFont_1126aec38);
  *(undefined **)(lVar4 + 0x28) = puVar2;
  uVar8 = *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8;
  *(undefined8 *)(lVar4 + 0x40) = uVar9;
  *(undefined8 *)(lVar4 + 0x48) = uVar8;
  func_0x000107c61174(uVar8);
  func_0x000107c5af88();
  func_0x000107c61180();
  uVar9 = 0;
  FUN_1028b7760(0,0x112d48390,&PTR__OBJC_CLASS___UIColor_1126aea70);
  *(undefined8 *)(lVar4 + 0x68) = uVar9;
  *(undefined **)(lVar4 + 0x50) = puVar1;
  lVar5 = lVar4;
  func_0x000100ecbca8(lVar4);
  func_0x000107c61588(lVar4);
  uVar9 = 0x112d48398;
  func_0x0001000285a8(0x112d48398,&UNK_10d90f130);
  func_0x000107c61408((undefined8 *)(lVar4 + 0x20),2,uVar9);
  uVar6 = param_7;
  func_0x000107c5fadc(param_7,param_8);
  uVar8 = 0;
  func_0x000100eca28c(0);
  uVar9 = uVar8;
  func_0x000100ecbdec();
  puVar1 = PTR___sypN_11034f1a8;
  lVar4 = lVar5;
  func_0x000107c5f9dc(lVar5,uVar8,PTR___sypN_11034f1a8 + 8,uVar9);
  func_0x000107c5b0a0(uVar6);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(lVar4);
  func_0x000107c5fadc(param_7,param_8);
  func_0x000107c6142c(param_8);
  dVar11 = param_1;
  func_0x000107c609bc(param_1,param_2,param_3,param_4);
  func_0x000107c609c0(param_1,param_2,param_3,param_4);
  lVar4 = lVar5;
  func_0x000107c5f9dc(lVar5,uVar8,puVar1 + 8,uVar9);
  func_0x000107c6142c(lVar5);
  func_0x000107c422b8(dVar11 - dVar10 * 0.5,param_1 - dVar12 * 0.5,param_7);
  func_0x000107c61170(param_7);
  func_0x000107c61170(lVar4);
  return;
}



/* Entry: 1028b717c; end: 1028b775f;  */

void FUN_1028b717c(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  
  lVar1 = param_2;
  FUN_1028b6d3c();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 5;
  *(undefined8 *)(lVar1 + 0x10) = 2;
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168();
  puVar3 = puVar2;
  func_0x000107c5af88();
  func_0x000107c61180();
  puVar4 = puVar3;
  func_0x000107c3fdd0(0x3fe3333333333333);
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  puVar3 = puVar4;
  func_0x000107c3ab24();
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  *(undefined **)(lVar1 + 0x20) = puVar3;
  puVar3 = puVar2;
  func_0x000107c5af88();
  func_0x000107c61180();
  puVar4 = puVar3;
  func_0x000107c3ab24();
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  *(undefined **)(lVar1 + 0x28) = puVar4;
  uVar5 = 0;
  func_0x000100ef8bfc(0);
  lVar6 = lVar1;
  func_0x000107c5fc48(lVar1,uVar5);
  func_0x000107c61574();
  func_0x000107c608bc();
  lVar7 = lVar1;
  func_0x000107c6094c();
  func_0x000107c61170(lVar1);
  if (lVar7 != 0) {
    lVar1 = param_2;
    func_0x000107c3ab28(param_2);
    func_0x000107c61180();
    func_0x000107c608e4(0,0,0,0x4046000000000000);
    func_0x000107c61170(lVar1);
    func_0x000107c61170(lVar6);
    lVar6 = lVar7;
  }
  func_0x000107c61170(lVar6);
  dVar10 = 8.0;
  func_0x000107c609cc(0x4020000000000000,0x4020000000000000,0x403c000000000000,0x403c000000000000);
  puVar3 = puVar2;
  func_0x000107c5af88(puVar2);
  func_0x000107c61180();
  func_0x000107c549b0();
  func_0x000107c61170(puVar3);
  puVar3 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x000107c61168(PTR__OBJC_CLASS___UIBezierPath_1126aec18);
  puVar4 = puVar3;
  func_0x000107c3e8a4(0x4018000000000000,0x4018000000000000,dVar10 + 4.0,dVar10 + 4.0);
  func_0x000107c61180();
  func_0x000107c43484();
  func_0x000107c61170(puVar4);
  if (param_7 == 0) {
    FUN_1028b6d98(0x4020000000000000,0x4020000000000000,0x403c000000000000,0x403c000000000000,
                  param_3,param_4,param_5,param_6);
  }
  else {
    func_0x000107c61174(param_7);
    lVar1 = param_2;
    func_0x000107c3ab28(param_2);
    func_0x000107c61180();
    func_0x000107c60904();
    func_0x000107c61170(lVar1);
    func_0x000107c3e8a4(0x4020000000000000,0x4020000000000000,0x403c000000000000,0x403c000000000000,
                        puVar3);
    func_0x000107c61180();
    func_0x000107c3d618();
    func_0x000107c61170(puVar3);
    func_0x000107c422bc(0x4020000000000000,0x4020000000000000,0x403c000000000000,0x403c000000000000,
                        param_7);
    func_0x000107c3ab28(param_2);
    func_0x000107c61180();
    func_0x000107c608fc();
    func_0x000107c61170(param_7);
    func_0x000107c61170(param_2);
  }
  puVar3 = PTR__OBJC_CLASS___NSMutableParagraphStyle_1126aec00;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c55f80();
  lVar1 = 0x112d48380;
  func_0x0001000285a8(0x112d48380,&UNK_10d910f10);
  func_0x000107c61534();
  *(undefined8 *)(lVar1 + 0x18) = 6;
  *(undefined8 *)(lVar1 + 0x10) = 3;
  *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
  lVar6 = lRam0000000112ec7bd0;
  func_0x000107c61174();
  if (lVar6 != -1) {
    func_0x000107c61568(0x112ec7bd0,FUN_1028b67dc);
  }
  uVar5 = uRam0000000113804c58;
  uVar8 = 0;
  FUN_1028b7760(0,0x112d48388,&PTR__OBJC_CLASS___UIFont_1126aec38);
  *(undefined8 *)(lVar1 + 0x28) = uVar5;
  uVar9 = *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8;
  *(undefined8 *)(lVar1 + 0x40) = uVar8;
  *(undefined8 *)(lVar1 + 0x48) = uVar9;
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar9);
  func_0x000107c5af88();
  func_0x000107c61180();
  uVar5 = 0;
  FUN_1028b7760(0,0x112d48390,&PTR__OBJC_CLASS___UIColor_1126aea70);
  *(undefined **)(lVar1 + 0x50) = puVar2;
  uVar8 = *(undefined8 *)PTR__NSParagraphStyleAttributeName_110345820;
  *(undefined8 *)(lVar1 + 0x68) = uVar5;
  *(undefined8 *)(lVar1 + 0x70) = uVar8;
  uVar5 = 0;
  FUN_1028b7760(0,0x112ec7bd8,&PTR__OBJC_CLASS___NSMutableParagraphStyle_1126aec00);
  *(undefined8 *)(lVar1 + 0x90) = uVar5;
  *(undefined **)(lVar1 + 0x78) = puVar3;
  func_0x000107c61174(uVar8);
  func_0x000107c61174(puVar3);
  lVar6 = lVar1;
  func_0x000100ecbca8(lVar1);
  func_0x000107c61588(lVar1);
  uVar5 = 0x112d48398;
  func_0x0001000285a8(0x112d48398,&UNK_10d90f130);
  func_0x000107c61408((undefined8 *)(lVar1 + 0x20),3,uVar5);
  dVar10 = 8.0;
  func_0x000107c609b4(0x4020000000000000,0x4020000000000000,0x403c000000000000,0x403c000000000000);
  dVar10 = dVar10 + 6.0;
  dVar11 = (param_1 - dVar10) + -8.0;
  if (dVar11 < 0.0) {
    dVar11 = 0.0;
  }
  uVar12 = 0x4020000000000000;
  dVar15 = 8.0;
  func_0x000107c609b0(0x4020000000000000,0x4020000000000000,0x403c000000000000,0x403c000000000000);
  uVar5 = param_3;
  func_0x000107c5fadc(param_3,param_4);
  uVar9 = 0;
  func_0x000100eca28c(0);
  uVar8 = uVar9;
  func_0x000100ecbdec();
  puVar2 = PTR___sypN_11034f1a8;
  lVar1 = lVar6;
  func_0x000107c5f9dc(lVar6,uVar9,PTR___sypN_11034f1a8 + 8,uVar8);
  func_0x000107c5b0a0(uVar5);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(lVar1);
  func_0x000107c5fadc(param_3,param_4);
  dVar13 = dVar10;
  func_0x000107c609c0(dVar10,0x4020000000000000,dVar11,uVar12);
  dVar14 = dVar10;
  func_0x000107c609cc(dVar10,0x4020000000000000,dVar11,uVar12);
  lVar1 = lVar6;
  func_0x000107c5f9dc(lVar6,uVar9,puVar2 + 8,uVar8);
  func_0x000107c6142c(lVar6);
  func_0x000107c422c4(dVar10,dVar13 + dVar15 * -0.5,dVar14,dVar15,param_3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(lVar1);
  return;
}



/* Entry: 1028b7760; end: 1028b779f;  */

void FUN_1028b7760(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1028b77a0; end: 1028b7ab3;  */

void FUN_1028b77a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ec2370,&UNK_10dae07b0);
  puVar1 = &UNK_110561f38;
  func_0x000107c613fc(&UNK_110561f38,0x48,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x0001000823a8(0x1028b7880,puVar1);
  return;
}



/* Entry: 1028b7ab4; end: 1028b7ac3;  */

undefined1  [16] FUN_1028b7ab4(void)

{
  return ZEXT816(0x110561f60);
}



/* Entry: 1028b7ac4; end: 1028b7ad3; -[_TtC23SCTinySnapMessagePlugin21TinySnapMessagePlugin activeConversationIdObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028b7ac4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ec7bf0));
  return;
}



/* Entry: 1028b7ad4; end: 1028b7b07; -[_TtC23SCTinySnapMessagePlugin21TinySnapMessagePlugin setActiveConversationIdObservable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028b7ad4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ec7bf0);
  *(undefined8 *)(param_1 + _DAT_112ec7bf0) = param_3;
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1028b7b08; end: 1028b7b17; -[_TtC23SCTinySnapMessagePlugin21TinySnapMessagePlugin activeConversationInformationObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028b7b08(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ec7bf8));
  return;
}



/* Entry: 1028b7b18; end: 1028b7b4b; -[_TtC23SCTinySnapMessagePlugin21TinySnapMessagePlugin setActiveConversationInformationObservable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028b7b18(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ec7bf8);
  *(undefined8 *)(param_1 + _DAT_112ec7bf8) = param_3;
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1028b7b4c; end: 1028b7b5b; -[_TtC23SCTinySnapMessagePlugin21TinySnapMessagePlugin messageViewEvents] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028b7b4c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ec7c00));
  return;
}



/* Entry: 1028b7b5c; end: 1028b7b8f; -[_TtC23SCTinySnapMessagePlugin21TinySnapMessagePlugin setMessageViewEvents:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028b7b5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ec7c00);
  *(undefined8 *)(param_1 + _DAT_112ec7c00) = param_3;
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1028b7b90; end: 1028b7c03; -[_TtC23SCTinySnapMessagePlugin21TinySnapMessagePlugin valdiContextParamsForMessage:conversationParticipants:] */

void FUN_1028b7b90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_1028b7ea0(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1028b7c04; end: 1028b7c1b; -[_TtC23SCTinySnapMessagePlugin21TinySnapMessagePlugin identifier] */

/* WARNING: Removing unreachable block (ram,0x0001028b7c18) */

void FUN_1028b7c04(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1028b7c1c; end: 1028b7c23; -[_TtC23SCTinySnapMessagePlugin21TinySnapMessagePlugin pluginType] */

undefined8 FUN_1028b7c1c(void)

{
  return 0;
}



/* Entry: 1028b7c24; end: 1028b7c2b; -[_TtC23SCTinySnapMessagePlugin21TinySnapMessagePlugin quotedRenderingStyleForMessage:] */

undefined8 FUN_1028b7c24(void)

{
  return 0;
}



/* Entry: 1028b7c2c; end: 1028b7c9f; -[_TtC23SCTinySnapMessagePlugin21TinySnapMessagePlugin valdiContextParamsForQuotedMessage:conversationParticipants:] */

void FUN_1028b7c2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  func_0x0001028b8558(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1028b7ca0; end: 1028b7d13; -[_TtC23SCTinySnapMessagePlugin21TinySnapMessagePlugin valdiContextParamsForQuotedMessagePreview:conversationParticipants:] */

void FUN_1028b7ca0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  func_0x0001028b8c94(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1028b7d14; end: 1028b7d6f; -[_TtC23SCTinySnapMessagePlugin21TinySnapMessagePlugin init] */

void FUN_1028b7d14(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCTinySnapMessagePlugin.TinySnapMessagePlugin",0x2d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1028b7d40);
  (*pcVar1)();
}



/* Entry: 1028b7d70; end: 1028b7dd7; -[_TtC23SCTinySnapMessagePlugin21TinySnapMessagePlugin .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028b7d70(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec7bf0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec7bf8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec7c00));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec7c08));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112ec7c10));
  return;
}



/* Entry: 1028b7dd8; end: 1028b7df7;  */

void FUN_1028b7dd8(void)

{
  func_0x000107c61168(&PTR_PTR_11286ad28);
  return;
}



/* Entry: 1028b7df8; end: 1028b7e3f;  */

undefined8 FUN_1028b7df8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  func_0x000107c5fadc(param_2,param_3);
  func_0x0001070b30c4(uVar1,param_2);
  func_0x000107c61170(param_2);
  return uVar1;
}



/* Entry: 1028b7e40; end: 1028b7e9f;  */

void FUN_1028b7e40(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = *param_2;
  func_0x000107c453dc(uVar1);
  func_0x000107c61180();
  func_0x0001070b31f8();
  func_0x000107c61170(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c45a48();
  *param_1 = puVar2;
  return;
}



/* Entry: 1028b7ea0; end: 1028b9347;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1028b7ea0(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  long extraout_x8;
  long unaff_x20;
  long lVar17;
  long lVar18;
  undefined1 auStack_e0 [8];
  undefined *puStack_d8;
  undefined *puStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined *apuStack_a0 [3];
  undefined8 uStack_88;
  undefined *apuStack_80 [3];
  undefined8 uStack_68;
  
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar18 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar18 + 0x40));
  lVar3 = *(long *)(unaff_x20 + _DAT_112ec7c10);
  func_0x000107c4ce08();
  func_0x000107c61180();
  lVar4 = lVar3;
  func_0x000107c4051c();
  func_0x000107c61180();
  if (lVar4 != 0) {
    lVar5 = lVar4;
    func_0x000107c404a8();
    if ((int)lVar5 == 0x13) {
      lVar5 = lVar3;
      func_0x000107c4c930();
      func_0x000107c61180();
      if (lVar5 != 0) {
        lVar17 = lVar5;
        func_0x000107c4c99c();
        func_0x000107c61180();
        func_0x000107c61170(lVar5);
        if (lVar17 != 0) {
          func_0x000107c61174();
          lVar5 = lVar3;
          lStack_b8 = lVar17;
          func_0x000107c40674();
          func_0x000107c61180();
          func_0x000107c61174();
          puVar6 = (undefined *)lVar3;
          lStack_b0 = lVar5;
          func_0x000107c40258();
          func_0x000107c61180();
          lVar5 = (long)puVar6;
          func_0x000107c5faec();
          uStack_a8 = param_2;
          func_0x000107c61174();
          lVar17 = lVar3;
          func_0x000107c3dc7c();
          func_0x000107c61180();
          if (lVar17 == 0) {
            lStack_c8 = 0;
            uStack_c0 = 0xe000000000000000;
          }
          else {
            lVar7 = lVar17;
            func_0x000107c5faec();
            lStack_c8 = lVar7;
            uStack_c0 = param_2;
            func_0x000107c61170(lVar17);
          }
          puVar8 = PTR_PTR_1126ab690;
          func_0x000107c610f8();
          func_0x000107c453e4();
          lVar17 = *(long *)(unaff_x20 + _DAT_112ec7c00);
          if (lVar17 != 0) {
            func_0x0001000285a8(0x112ec2498,&UNK_10dae3650);
            puStack_d0 = puVar6;
            func_0x000107c61174();
            puStack_d8 = (undefined *)lVar17;
            func_0x0001000b637c();
            puVar9 = &UNK_110562078;
            func_0x000107c613fc(&UNK_110562078,0x20,7);
            *(long *)(puVar9 + 0x10) = lVar5;
            *(undefined8 *)(puVar9 + 0x18) = uStack_a8;
            func_0x000107c61434();
            uVar11 = 0x1028b9394;
            func_0x0001000c0ebc(0x1028b9394,puVar9);
            func_0x000107c61574(lVar17);
            puVar6 = puStack_d0;
            func_0x000107c61574(puVar9);
            uVar10 = 0;
            FUN_1028b9350(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
            pcVar1 = FUN_1028b7e40;
            func_0x0001000bfde0(FUN_1028b7e40,0,uVar10);
            func_0x000107c61574(uVar11);
            func_0x0001004575f0();
            func_0x000107c61574(pcVar1);
            uVar10 = uVar11;
            func_0x000107c421ac(uVar11);
            func_0x000107c61180();
            func_0x000107c61170(uVar11);
            uVar11 = uVar10;
            func_0x000107c5cb24(uVar10);
            func_0x000107c61180();
            func_0x000107c61170(uVar10);
            func_0x000107c56660(puVar8);
            func_0x000107c61170(puStack_d8);
            func_0x000107c61170(uVar11);
          }
          uVar11 = *(undefined8 *)(unaff_x20 + _DAT_112ec7c08);
          func_0x000107c5c734(uVar11);
          func_0x000107c61180();
          func_0x000107c54244(puVar8);
          func_0x000107c615e8(uVar11);
          puVar9 = PTR_PTR_1126ab698;
          func_0x000107c610f8();
          func_0x000107c453e4();
          lVar17 = lVar4;
          func_0x000107c5caa8();
          func_0x000107c61180();
          lVar5 = lStack_b8;
          if (lVar17 == 0) {
            func_0x000107c61170(lStack_b8);
            func_0x000107c61170(lVar5);
            lVar4 = lStack_b0;
            func_0x000107c61170(lStack_b0);
            func_0x000107c61170(lVar4);
            func_0x000107c61170(puVar6);
            func_0x000107c61170(puVar6);
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1028b84e0);
            (*pcVar1)();
          }
          lVar7 = lVar17;
          func_0x000107c5c82c();
          func_0x000107c61180();
          func_0x000107c61170(lVar17);
          lVar5 = lStack_b8;
          if (lVar7 == 0) {
            func_0x000107c61170(lStack_b8);
            func_0x000107c61170(lVar5);
            lVar4 = lStack_b0;
            func_0x000107c61170(lStack_b0);
            func_0x000107c61170(lVar4);
            func_0x000107c61170(puVar6);
            func_0x000107c61170(puVar6);
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1028b851c);
            (*pcVar1)();
          }
          lVar17 = lVar7;
          puStack_d0 = puVar8;
          func_0x000107c5c82c();
          func_0x000107c61180();
          func_0x000107c61170(lVar7);
          lVar5 = lStack_b8;
          if (lVar17 == 0) {
            func_0x000107c61170(lStack_b8);
            func_0x000107c61170(lVar5);
            lVar4 = lStack_b0;
            func_0x000107c61170(lStack_b0);
            func_0x000107c61170(lVar4);
            func_0x000107c61170(puVar6);
            func_0x000107c61170(puVar6);
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1028b8558);
            (*pcVar1)();
          }
          puVar8 = PTR_PTR_1126c6a98;
          func_0x000107c610f8(PTR_PTR_1126c6a98);
          func_0x000107c48c84();
          func_0x000107c61170(lVar17);
          func_0x000107c59ca8(puVar9);
          func_0x000107c61170(puVar8);
          lVar17 = lStack_b0;
          lVar5 = lStack_b8;
          lVar7 = lStack_b0;
          lVar16 = (long)puVar6;
          puStack_d8 = puVar9;
          func_0x000108543a00(lStack_b0,puVar6,lStack_b8,0,0);
          func_0x000107c61180();
          func_0x000107c61170(lVar17);
          func_0x000107c61170(puVar6);
          func_0x000107c61170(lVar5);
          func_0x000107c5edb4(auStack_e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar7);
          func_0x000107c61170(lVar7);
          func_0x000107c5ed70();
          func_0x000107c5fadc();
          func_0x000107c6142c(lVar16);
          (**(code **)(lVar18 + 8))(auStack_e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2);
          puVar8 = puStack_d8;
          func_0x000107c552bc(puStack_d8);
          func_0x000107c61170(lVar7);
          puVar9 = PTR_PTR_1126c6bc0;
          func_0x000107c610f8(PTR_PTR_1126c6bc0);
          func_0x000107c453e4();
          func_0x000107c56420();
          func_0x000107c61170(lVar5);
          puVar12 = PTR_PTR_1126c6bc8;
          func_0x000107c610f8(PTR_PTR_1126c6bc8);
          func_0x000107c61174(puVar9);
          uVar10 = uStack_c0;
          lVar2 = lStack_c8;
          func_0x000107c5fadc(lStack_c8,uStack_c0);
          func_0x000107c461a0(puVar12);
          func_0x000107c61170(puVar9);
          func_0x000107c61170(lVar17);
          func_0x000107c61170(puVar6);
          func_0x000107c61170(lVar2);
          func_0x000107c56424(puVar8);
          func_0x000107c61170(puVar12);
          uVar11 = 0x112ec7c40;
          uVar13 = 0;
          FUN_1028b9350(0,0x112ec7c40,&PTR_PTR_1126ab6a0);
          func_0x000107c614e8();
          func_0x000107c3ff48();
          func_0x000107c61180();
          uVar14 = uVar13;
          func_0x000107c5faec();
          func_0x000107c61170(uVar13);
          uVar13 = 0;
          FUN_1028b9350(0,0x112ec7c48,&PTR_PTR_1126ab698);
          apuStack_80[0] = puVar8;
          uVar15 = 0;
          uStack_68 = uVar13;
          FUN_1028b9350(0,0x112ec7c50,&PTR_PTR_1126ab690);
          puVar6 = puStack_d0;
          apuStack_a0[0] = puStack_d0;
          uStack_88 = uVar15;
          func_0x000107c610f8(PTR_PTR_1126c67d8);
          func_0x000107c61174(puVar8);
          func_0x000107c61174(puVar6);
          FUN_1027efbc4(uVar14,uVar11,apuStack_80,apuStack_a0);
          func_0x000107c61170(puVar6);
          func_0x000107c61170(puVar8);
          func_0x000107c61170(puVar9);
          func_0x000107c6142c(uStack_a8);
          func_0x000107c615e8(lVar3);
          func_0x000107c6142c(uVar10);
          func_0x000107c61170(lVar4);
          return uVar14;
        }
      }
      func_0x000107c615e8(lVar3);
      func_0x000107c61170(lVar4);
      return 0;
    }
    func_0x000107c61170(lVar4);
  }
  func_0x000107c615e8(lVar3);
  return 0;
}



/* Entry: 1028b9348; end: 1028b934f;  */

undefined8 FUN_1028b9348(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *param_1;
  func_0x000107c5fadc(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x0001070b30c4(uVar2,uVar1);
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 1028b9350; end: 1028b938f;  */

void FUN_1028b9350(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1028b9390; end: 1028b9397;  */

undefined8 FUN_1028b9390(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *param_1;
  func_0x000107c5fadc(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x0001070b30c4(uVar2,uVar1);
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 1028b9398; end: 1028b9517;  */

void FUN_1028b9398(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ec2370,&UNK_10dae07b0);
  puVar1 = &UNK_1105620a0;
  func_0x000107c613fc(&UNK_1105620a0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_1028b9518,puVar1);
  return;
}



/* Entry: 1028b9518; end: 1028b952f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028b9518(undefined8 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long unaff_x20;
  undefined8 uVar5;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_50;
  func_0x000100083b20(&lStack_38,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  uVar1 = *(undefined8 *)(lStack_38 + _DAT_112fdf698);
  func_0x000107c61174();
  func_0x000107c61170(lStack_38);
  func_0x000100083b20(&lStack_40);
  uVar5 = *(undefined8 *)(lStack_40 + _DAT_11301aef0);
  func_0x000107c615f0(uVar5);
  func_0x000107c61170(lStack_40);
  lVar2 = 0;
  FUN_1028b7dd8();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112ec7bf0) = 0;
  *(undefined8 *)(lVar3 + _DAT_112ec7bf8) = 0;
  *(undefined8 *)(lVar3 + _DAT_112ec7c00) = 0;
  *(undefined8 *)(lVar3 + _DAT_112ec7c08) = uVar1;
  *(undefined8 *)(lVar3 + _DAT_112ec7c10) = uVar5;
  lStack_50 = lVar3;
  lStack_48 = lVar2;
  func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
  *param_1 = plVar4;
  return;
}



/* Entry: 1028b9530; end: 1028b97f3;  */

void FUN_1028b9530(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ec2370,&UNK_10dae07b0);
  puVar1 = &UNK_110562190;
  func_0x000107c613fc(&UNK_110562190,0x48,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_1;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x0001000823a8(0x1028b9610,puVar1);
  return;
}



/* Entry: 1028b97f4; end: 1028b9803;  */

undefined1  [16] FUN_1028b97f4(void)

{
  return ZEXT816(0x1105621b8);
}



/* Entry: 1028b9804; end: 1028b9823; -[_TtC34SCSoundShareMessageRenderingPlugin23SoundShareMessagePlugin uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028b9804(long param_1)

{
  func_0x000107c61618(param_1 + _DAT_112ec7c58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1028b9824; end: 1028b9837; -[_TtC34SCSoundShareMessageRenderingPlugin23SoundShareMessagePlugin setUiContainer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028b9824(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)(param_1 + _DAT_112ec7c58,param_3);
  return;
}



/* Entry: 1028b9838; end: 1028b9857; -[_TtC34SCSoundShareMessageRenderingPlugin23SoundShareMessagePlugin forwardingDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028b9838(long param_1)

{
  func_0x000107c61618(param_1 + _DAT_112ec7c60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1028b9858; end: 1028b986b; -[_TtC34SCSoundShareMessageRenderingPlugin23SoundShareMessagePlugin setForwardingDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028b9858(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)(param_1 + _DAT_112ec7c60,param_3);
  return;
}



/* Entry: 1028b986c; end: 1028b987b; -[_TtC34SCSoundShareMessageRenderingPlugin23SoundShareMessagePlugin activeConversationIdObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028b986c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ec7c68));
  return;
}



/* Entry: 1028b987c; end: 1028b988f; -[_TtC34SCSoundShareMessageRenderingPlugin23SoundShareMessagePlugin setActiveConversationIdObservable:] */

/* WARNING: Possible PIC construction at 0x0001028b9b38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028b9b44: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001028b9b3c) */
/* WARNING: Removing unreachable block (ram,0x0001028b9b48) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028b987c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ec7c68);
  *(undefined8 *)(param_1 + _DAT_112ec7c68) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  func_0x000107c61174(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1028b9890; end: 1028b9a47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028b9890(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  long unaff_x20;
  long lVar6;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [40];
  
  lVar1 = _DAT_112ec7cb0;
  if (*(long *)(unaff_x20 + _DAT_112ec7cb0) != 0) {
    func_0x000107c4218c();
  }
  lVar2 = *(long *)(unaff_x20 + _DAT_112ec7c68);
  if (lVar2 == 0) {
    lVar6 = 0;
  }
  else {
    func_0x000107c421ac();
    func_0x000107c61180();
    FUN_1028bb4e8(unaff_x20 + _DAT_112ec7c90,auStack_68);
    puVar3 = &UNK_110562370;
    func_0x000107c613fc(&UNK_110562370,0x38,7);
    func_0x0001028bb54c(auStack_68,puVar3 + 0x10);
    uStack_78 = 0x1028bb56c;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0x42000000;
    puStack_88 = &UNK_100b6fe98;
    puStack_80 = &UNK_110562388;
    ppuVar4 = &puStack_98;
    puStack_70 = puVar3;
    func_0x000107c60bc4(ppuVar4);
    func_0x000107c61574(puStack_70);
    lVar6 = lVar2;
    func_0x000107c5c320();
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61170(lVar2);
  }
  uVar5 = *(undefined8 *)(unaff_x20 + lVar1);
  *(long *)(unaff_x20 + lVar1) = lVar6;
  func_0x000107c61170(uVar5);
  return;
}



/* Entry: 1028b9a48; end: 1028b9a57; -[_TtC34SCSoundShareMessageRenderingPlugin23SoundShareMessagePlugin activeConversationInformationObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028b9a48(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ec7c70));
  return;
}



/* Entry: 1028b9a58; end: 1028b9a8b; -[_TtC34SCSoundShareMessageRenderingPlugin23SoundShareMessagePlugin setActiveConversationInformationObservable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028b9a58(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ec7c70);
  *(undefined8 *)(param_1 + _DAT_112ec7c70) = param_3;
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1028b9a8c; end: 1028b9a9b; -[_TtC34SCSoundShareMessageRenderingPlugin23SoundShareMessagePlugin messageViewEvents] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028b9a8c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ec7c78));
  return;
}



/* Entry: 1028b9a9c; end: 1028b9acf; -[_TtC34SCSoundShareMessageRenderingPlugin23SoundShareMessagePlugin setMessageViewEvents:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028b9a9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ec7c78);
  *(undefined8 *)(param_1 + _DAT_112ec7c78) = param_3;
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1028b9ad0; end: 1028b9adf; -[_TtC34SCSoundShareMessageRenderingPlugin23SoundShareMessagePlugin visibleMessageIds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028b9ad0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ec7c80));
  return;
}



/* Entry: 1028b9ae0; end: 1028b9af3; -[_TtC34SCSoundShareMessageRenderingPlugin23SoundShareMessagePlugin setVisibleMessageIds:] */

/* WARNING: Possible PIC construction at 0x0001028b9b38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028b9b44: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001028b9b3c) */
/* WARNING: Removing unreachable block (ram,0x0001028b9b48) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028b9ae0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ec7c80);
  *(undefined8 *)(param_1 + _DAT_112ec7c80) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  func_0x000107c61174(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1028b9af4; end: 1028b9b5b;  */

/* WARNING: Possible PIC construction at 0x0001028b9b38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028b9b44: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001028b9b3c) */
/* WARNING: Removing unreachable block (ram,0x0001028b9b48) */

void FUN_1028b9af4(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + *param_4);
  *(undefined8 *)(param_1 + *param_4) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  func_0x000107c61174(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1028b9b5c; end: 1028b9c77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028b9b5c(void)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x20;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [40];
  
  lVar1 = _DAT_112ec7cb8;
  if (*(long *)(unaff_x20 + _DAT_112ec7cb8) != 0) {
    func_0x000107c4218c();
  }
  lVar6 = *(long *)(unaff_x20 + _DAT_112ec7c80);
  lVar4 = lVar6;
  if (lVar6 != 0) {
    FUN_1028bb4e8(unaff_x20 + _DAT_112ec7c90,auStack_68);
    puVar2 = &UNK_110562320;
    func_0x000107c613fc(&UNK_110562320,0x38,7);
    func_0x0001028bb54c(auStack_68,puVar2 + 0x10);
    uStack_78 = 0x1028bb564;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0x42000000;
    puStack_88 = &UNK_101114e88;
    puStack_80 = &UNK_110562338;
    ppuVar3 = &puStack_98;
    puStack_70 = puVar2;
    func_0x000107c60bc4(ppuVar3);
    puVar2 = puStack_70;
    func_0x000107c61174();
    func_0x000107c61574(puVar2);
    lVar4 = lVar6;
    func_0x000107c5c320();
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c61170(lVar6);
  }
  uVar5 = *(undefined8 *)(unaff_x20 + lVar1);
  *(long *)(unaff_x20 + lVar1) = lVar4;
  func_0x000107c61170(uVar5);
  return;
}



/* Entry: 1028b9c78; end: 1028b9cc7;  */

void FUN_1028b9c78(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x000107c40808();
  if (param_1 == 0) {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    lVar2 = *(long *)(param_2 + 0x20);
    FUN_1028bb4bc(param_2,uVar1);
    (**(code **)(lVar2 + 0x30))(uVar1,lVar2);
  }
  return;
}



/* Entry: 1028b9cc8; end: 1028b9e07;  */

void FUN_1028b9cc8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [40];
  
  FUN_1028bb4e8(param_2,auStack_68);
  puVar3 = &UNK_1105623c0;
  func_0x000107c613fc(&UNK_1105623c0,0x38,7);
  func_0x0001028bb54c(auStack_68,puVar3 + 0x10);
  puVar4 = &UNK_1105623e8;
  func_0x000107c613fc(&UNK_1105623e8,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_1028bb574;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  pcStack_78 = FUN_1028bb5bc;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0x42000000;
  pcStack_88 = FUN_1028b9e08;
  puStack_80 = &UNK_110562400;
  ppuVar5 = &puStack_98;
  puStack_70 = puVar4;
  func_0x000107c60bc4(ppuVar5);
  puVar1 = puStack_70;
  func_0x000107c6157c(puVar4);
  func_0x000107c61574(puVar1);
  func_0x000107c4c5b4(param_1);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61574(puVar3);
  puVar3 = puVar4;
  func_0x000107c61544(puVar4,"",0x62,0x69,0x38,1);
  func_0x000107c61574(puVar4);
  if (((ulong)puVar3 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1028b9e08);
  (*pcVar2)();
}



/* Entry: 1028b9e08; end: 1028b9e5f;  */

void FUN_1028b9e08(long param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  if (param_3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_2;
    func_0x000107c5faec(param_3);
  }
  (*pcVar1)(param_2,param_3,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
  return;
}



/* Entry: 1028b9e60; end: 1028b9ed7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028b9e60(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    lVar1 = param_2 + _DAT_112ec7c60;
    func_0x000107c61618();
    if (lVar1 != 0) {
      func_0x000107c4ea0c();
      func_0x000107c615e8(lVar1);
    }
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 1028b9ed8; end: 1028b9fcf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028b9ed8(void)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  long lStack_48;
  
  func_0x000107c614f0();
  if (*(long *)(unaff_x20 + _DAT_112ec7cb0) != 0) {
    func_0x000107c4218c();
  }
  if (*(long *)(unaff_x20 + _DAT_112ec7cb8) != 0) {
    func_0x000107c4218c();
  }
  FUN_1028bb4e8(unaff_x20 + _DAT_112ec7c90,auStack_68);
  FUN_1028bb4bc(auStack_68,uStack_50);
  (**(code **)(lStack_48 + 0x30))(uStack_50,lStack_48);
  FUN_1028bb52c(auStack_68);
  lVar1 = *(long *)(unaff_x20 + _DAT_112ec7ca0);
  lVar2 = *(long *)(lVar1 + _DAT_112ec7d10);
  if (lVar2 != 0) {
    *(undefined8 *)(lVar1 + _DAT_112ec7d10) = 0;
    func_0x000107c42838(*(undefined8 *)(lVar1 + _DAT_112ec7d00));
    func_0x000107c61170(lVar2);
  }
  func_0x000107c61154(&stack0xffffffffffffff88,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1028b9fd0; end: 1028b9ff3; -[_TtC34SCSoundShareMessageRenderingPlugin23SoundShareMessagePlugin dealloc] */

void FUN_1028b9fd0(void)

{
  func_0x000107c61174();
  FUN_1028b9ed8();
  return;
}



/* Entry: 1028b9ff4; end: 1028ba0db; -[_TtC34SCSoundShareMessageRenderingPlugin23SoundShareMessagePlugin .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001028ba030: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028ba050: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028ba090: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028ba0b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001028ba094) */
/* WARNING: Removing unreachable block (ram,0x0001028ba054) */
/* WARNING: Removing unreachable block (ram,0x0001028ba034) */
/* WARNING: Removing unreachable block (ram,0x0001028ba0b4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028b9ff4(long param_1)

{
  func_0x000100d0ded8(param_1 + _DAT_112ec7c58);
  func_0x000100d0ded8(param_1 + _DAT_112ec7c60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ec7c68));
  return;
}



/* Entry: 1028ba0dc; end: 1028ba173;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028ba0dc(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  lVar2 = unaff_x20 + _DAT_112ec7c90;
  uVar1 = *(undefined8 *)(lVar2 + 0x18);
  lVar3 = *(long *)(lVar2 + 0x20);
  FUN_1028bb4bc(lVar2,uVar1);
  (**(code **)(lVar3 + 0x30))(uVar1,lVar3);
  lVar2 = *(long *)(unaff_x20 + _DAT_112ec7ca0);
  lVar3 = *(long *)(lVar2 + _DAT_112ec7d10);
  if (lVar3 != 0) {
    *(undefined8 *)(lVar2 + _DAT_112ec7d10) = 0;
    func_0x000107c42838(*(undefined8 *)(lVar2 + _DAT_112ec7d00));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar3);
    return;
  }
  return;
}



/* Entry: 1028ba174; end: 1028ba19b; -[_TtC34SCSoundShareMessageRenderingPlugin23SoundShareMessagePlugin dismissPresentedView] */

void FUN_1028ba174(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1028ba0dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1028ba19c; end: 1028ba243;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028ba19c(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    lVar1 = param_2 + _DAT_112ec7c58;
    func_0x000107c61618();
    lVar2 = param_2;
    if (lVar1 != 0) {
      lVar2 = *(long *)(param_2 + _DAT_112ec7ca0);
      func_0x000107c61174(lVar2);
      FUN_1028bbc2c(param_1,lVar1);
      func_0x000107c61170(param_2);
      func_0x000107c615e8(lVar1);
    }
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 1028ba244; end: 1028ba2b7; -[_TtC34SCSoundShareMessageRenderingPlugin23SoundShareMessagePlugin valdiContextParamsForMessage:conversationParticipants:] */

void FUN_1028ba244(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_1028baa74(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1028ba2b8; end: 1028ba2bf; -[_TtC34SCSoundShareMessageRenderingPlugin23SoundShareMessagePlugin quotedRenderingStyleForMessage:] */

undefined8 FUN_1028ba2b8(void)

{
  return 0;
}



/* Entry: 1028ba2c0; end: 1028ba523;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1028ba2c0(undefined8 param_1,ulong param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 uVar12;
  long unaff_x20;
  long alStack_a0 [3];
  undefined8 uStack_88;
  undefined *apuStack_80 [3];
  undefined8 uStack_68;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112ec7c88);
  uVar11 = param_2;
  func_0x000107c4ce08(lVar2,param_2,param_1);
  func_0x000107c61180();
  lVar3 = lVar2;
  if ((param_2 & 1) == 0) {
    func_0x000107c4f858();
  }
  else {
    func_0x000107c4051c();
  }
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar4 = lVar3;
    func_0x000107c404a8();
    if ((int)lVar4 == 5) {
      lVar4 = lVar3;
      func_0x000107c5a934();
      func_0x000107c61180();
      if (lVar4 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1028ba51c);
        (*pcVar1)();
      }
      lVar5 = lVar4;
      func_0x000107c5a960();
      func_0x000107c61170(lVar4);
      if ((int)lVar5 == 0x28) {
        lVar4 = lVar3;
        func_0x000107c5a934();
        func_0x000107c61180();
        if (lVar4 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1028ba520);
          (*pcVar1)();
        }
        lVar5 = lVar4;
        func_0x000107c5b61c();
        func_0x000107c61180();
        func_0x000107c61170(lVar4);
        if (lVar5 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1028ba524);
          (*pcVar1)();
        }
        lVar4 = lVar5;
        func_0x000107c5b5f4();
        func_0x000107c61180();
        func_0x000107c61170(lVar5);
        if (lVar4 != 0) {
          lVar6 = lVar4;
          func_0x000107c5faec();
          uVar12 = 0x112ec7ce8;
          uVar7 = 0;
          FUN_1028bb47c(0,0x112ec7ce8,&PTR_PTR_1126ab6b0);
          func_0x000107c614e8();
          func_0x000107c3ff48();
          func_0x000107c61180();
          uVar8 = uVar7;
          func_0x000107c5faec();
          func_0x000107c61170(uVar7);
          puVar9 = PTR_PTR_1126ab6b8;
          func_0x000107c610f8();
          func_0x000107c48e14();
          func_0x000107c61170(lVar4);
          uVar10 = 0;
          FUN_1028bb47c(0,0x112ec7cf0,&PTR_PTR_1126ab6b8);
          lVar4 = unaff_x20 + _DAT_112ec7c90;
          uVar7 = *(undefined8 *)(lVar4 + 0x18);
          lVar5 = *(long *)(lVar4 + 0x20);
          apuStack_80[0] = puVar9;
          uStack_68 = uVar10;
          FUN_1028bb4bc(lVar4,uVar7);
          (**(code **)(lVar5 + 0x18))(lVar6,uVar11,uVar7,lVar5);
          func_0x000107c6142c(uVar11);
          uVar7 = 0;
          FUN_1028bb47c(0,0x112ec7cf8,&PTR_PTR_1126a8c88);
          alStack_a0[0] = lVar6;
          uStack_88 = uVar7;
          func_0x000107c610f8(PTR_PTR_1126c67d8);
          FUN_1027efbc4(uVar8,uVar12,apuStack_80,alStack_a0);
          func_0x000107c615e8(lVar2);
          func_0x000107c61170(lVar3);
          return uVar8;
        }
      }
    }
    func_0x000107c61170(lVar3);
  }
  func_0x000107c615e8(lVar2);
  return 0;
}



/* Entry: 1028ba524; end: 1028ba583; -[_TtC34SCSoundShareMessageRenderingPlugin23SoundShareMessagePlugin valdiContextParamsForQuotedMessage:conversationParticipants:] */

void FUN_1028ba524(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_1028ba2c0(param_3,0);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1028ba584; end: 1028ba5e3; -[_TtC34SCSoundShareMessageRenderingPlugin23SoundShareMessagePlugin valdiContextParamsForQuotedMessagePreview:conversationParticipants:] */

void FUN_1028ba584(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_1028ba2c0(param_3,1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1028ba5e4; end: 1028ba69f; -[_TtC34SCSoundShareMessageRenderingPlugin23SoundShareMessagePlugin canForwardMessageFromActionMenu:focusedMessageContent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1028ba5e4(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  uint uVar4;
  undefined8 uVar5;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  uVar5 = param_3;
  func_0x0001028ba75c(param_3);
  if (param_2 == 0) {
    uVar4 = 0;
  }
  else {
    lVar1 = param_1 + _DAT_112ec7c90;
    uVar2 = *(undefined8 *)(lVar1 + 0x18);
    lVar3 = *(long *)(lVar1 + 0x20);
    FUN_1028bb4bc(lVar1,uVar2);
    (**(code **)(lVar3 + 0x20))(uVar5,param_2,uVar2,lVar3);
    uVar4 = (uint)uVar5;
    func_0x000107c6142c(param_2);
  }
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return uVar4 & 1;
}



/* Entry: 1028ba6a0; end: 1028ba8b3; -[_TtC34SCSoundShareMessageRenderingPlugin23SoundShareMessagePlugin canForwardMessageFromCTA:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1028ba6a0(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  uint uVar4;
  undefined8 uVar5;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  uVar5 = param_3;
  func_0x0001028ba75c(param_3);
  if (param_2 == 0) {
    uVar4 = 0;
  }
  else {
    lVar1 = param_1 + _DAT_112ec7c90;
    uVar2 = *(undefined8 *)(lVar1 + 0x18);
    lVar3 = *(long *)(lVar1 + 0x20);
    FUN_1028bb4bc(lVar1,uVar2);
    (**(code **)(lVar3 + 0x20))(uVar5,param_2,uVar2,lVar3);
    uVar4 = (uint)uVar5;
    func_0x000107c6142c(param_2);
  }
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return uVar4 & 1;
}



/* Entry: 1028ba8b4; end: 1028ba947; -[_TtC34SCSoundShareMessageRenderingPlugin23SoundShareMessagePlugin forwardParamsForMessage:focusedMessageContent:conversationParticipants:] */

void FUN_1028ba8b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_1028bad9c(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1028ba948; end: 1028baa07; -[_TtC34SCSoundShareMessageRenderingPlugin23SoundShareMessagePlugin forwardMessage:focusedMessageContent:conversations:recipientCount:completion:] */

/* WARNING: Possible PIC construction at 0x0001028ba9dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028ba9ec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001028ba9e0) */
/* WARNING: Removing unreachable block (ram,0x0001028ba9f0) */

void FUN_1028ba948(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  func_0x000107c60bc4(param_7);
  func_0x000107c60bc4();
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_1);
  FUN_1028bae58(param_3,param_5,param_6,param_1,param_7);
  func_0x000107c60bd0(param_7);
  func_0x000107c60bd0(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1028baa08; end: 1028baa1f; -[_TtC34SCSoundShareMessageRenderingPlugin23SoundShareMessagePlugin identifier] */

/* WARNING: Removing unreachable block (ram,0x0001028baa1c) */

void FUN_1028baa08(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1028baa20; end: 1028baa27; -[_TtC34SCSoundShareMessageRenderingPlugin23SoundShareMessagePlugin pluginType] */

undefined8 FUN_1028baa20(void)

{
  return 0;
}



/* Entry: 1028baa28; end: 1028baa73; -[_TtC34SCSoundShareMessageRenderingPlugin23SoundShareMessagePlugin init] */

void FUN_1028baa28(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCSoundShareMessageRenderingPlugin.SoundShareMessagePlugin",0x3a,"init()",6,0
                     );
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1028baa54);
  (*pcVar1)();
}



/* Entry: 1028baa74; end: 1028bad9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1028baa74(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long unaff_x20;
  code *pcVar14;
  undefined *apuStack_a0 [3];
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_68;
  
  puVar4 = *(undefined **)(unaff_x20 + _DAT_112ec7c88);
  func_0x000107c4ce08(puVar4,param_2,param_1);
  func_0x000107c61180();
  puVar5 = puVar4;
  func_0x000107c4051c();
  func_0x000107c61180();
  if (puVar5 != (undefined *)0x0) {
    puVar6 = puVar5;
    func_0x000107c404a8();
    if ((int)puVar6 == 5) {
      puVar6 = puVar5;
      func_0x000107c5a934();
      func_0x000107c61180();
      if (puVar6 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar14 = (code *)SoftwareBreakpoint(1,0x1028bad94);
        (*pcVar14)();
      }
      puVar7 = puVar6;
      func_0x000107c5a960();
      func_0x000107c61170(puVar6);
      if ((int)puVar7 == 0x28) {
        puVar6 = puVar5;
        func_0x000107c5a934();
        func_0x000107c61180();
        if (puVar6 == (undefined *)0x0) {
                    /* WARNING: Does not return */
          pcVar14 = (code *)SoftwareBreakpoint(1,0x1028bad98);
          (*pcVar14)();
        }
        puVar7 = puVar6;
        func_0x000107c5b61c();
        func_0x000107c61180();
        func_0x000107c61170(puVar6);
        if (puVar7 == (undefined *)0x0) {
                    /* WARNING: Does not return */
          pcVar14 = (code *)SoftwareBreakpoint(1,0x1028bad9c);
          (*pcVar14)();
        }
        puVar6 = puVar7;
        func_0x000107c5b5f4();
        func_0x000107c61180();
        func_0x000107c61170(puVar7);
        if (puVar6 != (undefined *)0x0) {
          puVar8 = puVar6;
          func_0x000107c5faec();
          puVar7 = puVar4;
          uVar12 = param_2;
          func_0x000107c40674();
          func_0x000107c61180();
          puVar9 = puVar7;
          func_0x000107c5faec();
          func_0x000107c61170(puVar7);
          uVar13 = 0xe100000000000000;
          puStack_80 = puVar9;
          uStack_78 = uVar12;
          func_0x000107c5fb78(0x3a,0xe100000000000000);
          puVar7 = puVar4;
          func_0x000107c40258(puVar4);
          func_0x000107c61180();
          puVar9 = puVar7;
          func_0x000107c5faec();
          func_0x000107c61170(puVar7);
          func_0x000107c5fb78(puVar9,uVar13);
          func_0x000107c6142c(uVar13);
          uVar3 = uStack_78;
          puVar7 = puStack_80;
          uVar12 = 0x112ec7ce8;
          uVar13 = 0;
          FUN_1028bb47c(0,0x112ec7ce8,&PTR_PTR_1126ab6b0);
          func_0x000107c614e8();
          func_0x000107c3ff48();
          func_0x000107c61180();
          uVar10 = uVar13;
          func_0x000107c5faec();
          func_0x000107c61170(uVar13);
          puVar9 = PTR_PTR_1126ab6b8;
          func_0x000107c610f8();
          func_0x000107c48e14();
          func_0x000107c61170(puVar6);
          uVar11 = 0;
          FUN_1028bb47c(0,0x112ec7cf0,&PTR_PTR_1126ab6b8);
          lVar1 = unaff_x20 + _DAT_112ec7c90;
          uVar13 = *(undefined8 *)(lVar1 + 0x18);
          lVar2 = *(long *)(lVar1 + 0x20);
          puStack_80 = puVar9;
          uStack_68 = uVar11;
          FUN_1028bb4bc(lVar1,uVar13);
          puVar6 = &UNK_1105622f8;
          func_0x000107c613fc(&UNK_1105622f8,0x18,7);
          func_0x000107c61614(puVar6 + 0x10);
          pcVar14 = *(code **)(lVar2 + 8);
          func_0x000107c6157c(puVar6);
          (*pcVar14)(puVar8,param_2,puVar7,uVar3,0x1028bb4e0,puVar6,uVar13,lVar2);
          func_0x000107c6142c(param_2);
          func_0x000107c6142c(uVar3);
          func_0x000107c61578(puVar6,2);
          uVar13 = 0;
          FUN_1028bb47c(0,0x112ec7cf8,&PTR_PTR_1126a8c88);
          apuStack_a0[0] = puVar8;
          uStack_88 = uVar13;
          func_0x000107c610f8(PTR_PTR_1126c67d8);
          FUN_1027efbc4(uVar10,uVar12,&puStack_80,apuStack_a0);
          func_0x000107c615e8(puVar4);
          func_0x000107c61170(puVar5);
          return uVar10;
        }
      }
    }
    func_0x000107c61170(puVar5);
  }
  func_0x000107c615e8(puVar4);
  return 0;
}



/* Entry: 1028bad9c; end: 1028bae57;  */

undefined * FUN_1028bad9c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  FUN_1028ba2c0(param_1,1);
  if (param_1 == 0) {
    puVar3 = (undefined *)0x0;
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126c6898;
    func_0x000107c61168(PTR_PTR_1126c6898);
    func_0x000107c3fff0();
    func_0x000107c61180();
    puVar3 = PTR_PTR_1126c68a0;
    func_0x000107c61168(PTR_PTR_1126c68a0);
    func_0x000107c43b80();
    func_0x000107c61180();
  }
  puVar1 = PTR_PTR_1126c68a8;
  func_0x000107c610f8(PTR_PTR_1126c68a8);
  func_0x000107c480c8();
  func_0x000107c61170(param_1);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar3);
  return puVar1;
}



/* Entry: 1028bae58; end: 1028bb423;  */

/* WARNING: Possible PIC construction at 0x0001028bb374: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028bb3d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001028bb378) */
/* WARNING: Removing unreachable block (ram,0x0001028bb3dc) */
/* WARNING: Removing unreachable block (ram,0x0001028bb3fc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028bae58(undefined8 param_1,long param_2,long param_3,long param_4,long param_5)

{
  code *pcVar1;
  uint uVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = &UNK_110562280;
  lVar7 = 0x18;
  func_0x000107c613fc(&UNK_110562280,0x18,7);
  *(long *)(puVar3 + 0x10) = param_5;
  lVar10 = *(long *)(param_4 + _DAT_112ec7c98);
  func_0x000107c60bc4(param_5);
  func_0x000107c5c894();
  func_0x000107c61180();
  lVar4 = lVar10;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar10);
  if (lVar4 != 0) {
    func_0x0001028ba75c(param_1);
    if (lVar7 != 0) {
      func_0x000107c6142c(lVar7);
      lVar10 = *(long *)(param_4 + _DAT_112ec7c88);
      func_0x000107c4ce08();
      func_0x000107c61180();
      param_4 = lVar10;
      func_0x000107c4051c();
      func_0x000107c61180();
      func_0x000107c615e8(lVar10);
      if (param_4 != 0) {
        lVar10 = param_4;
        func_0x000107c41214();
        func_0x000107c61180();
        func_0x000107c61170(param_4);
        if (lVar10 != 0) {
          lVar4 = lVar10;
          func_0x000107c5ee30(lVar10);
          func_0x000107c61170(lVar10);
          if (param_3 < 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1028bb420);
            (*pcVar1)();
          }
          FUN_1029c67d8(*(undefined8 *)(param_2 + _DAT_11307fc80),param_3);
          puVar5 = PTR_PTR_1126b1a40;
          func_0x000107c610f8();
          func_0x000107c453e4();
          puVar9 = puVar5;
          func_0x000107c5e7ec();
          func_0x000107c61180();
          func_0x000107c61170(puVar5);
          puVar5 = puVar9;
          func_0x000107c5e4a4();
          func_0x000107c61180();
          func_0x000107c61170(puVar9);
          puVar9 = puVar5;
          func_0x000107c5e5cc();
          func_0x000107c61180();
          func_0x000107c61170();
          func_0x00010011df08();
          func_0x000107c61180();
          if (puVar5 == (undefined *)0x0) {
            func_0x000107c5faec();
            func_0x000107c5fadc();
            func_0x000107c6142c(param_3);
          }
          puVar6 = puVar9;
          func_0x000107c5e870();
          func_0x000107c61180();
          func_0x000107c61170(puVar9);
          func_0x000107c61170(puVar5);
          puVar5 = puVar6;
          func_0x000107c5e500();
          func_0x000107c61180();
          func_0x000107c61170(puVar6);
          puVar9 = puVar5;
          func_0x000107c3ecc8();
          func_0x000107c61180();
          func_0x000107c61170(puVar5);
          puVar5 = PTR_PTR_1126da7b8;
          func_0x000107c610f8(PTR_PTR_1126da7b8);
          func_0x000107c477f4();
          uVar8 = 0x112d4e810;
          FUN_1028bb47c(0,0x112d4e810,&PTR_PTR_1126b0cd8);
          func_0x000107c5db64();
          func_0x000107c61180();
          puVar6 = puVar9;
          func_0x000107c5faec();
          func_0x000107c61170(puVar9);
          func_0x000103c1912c(puVar6,uVar8);
          if (puVar6 == (undefined *)0x0) {
            puVar6 = PTR_PTR_1126b0cd8;
            func_0x000107c61168(PTR_PTR_1126b0cd8);
            func_0x000107c3abc0();
            func_0x000107c61180();
          }
          func_0x000107c529a4(puVar5);
          func_0x000107c61170(puVar6);
          puVar9 = PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0;
          func_0x000107c61168();
          puStack_a0 = (undefined *)0x0;
          func_0x000107c3e100();
          func_0x000107c61180();
          puVar6 = puStack_a0;
          func_0x000107c61174(puStack_a0);
          if (puVar9 == (undefined *)0x0) {
            puVar9 = puVar6;
            func_0x000107c5ed30();
            func_0x000107c61170(puVar6);
            func_0x000107c61654();
            func_0x000107c614ac(puVar9);
            puVar9 = (undefined *)0x0;
          }
          else {
            puVar6 = puVar9;
            func_0x000107c5ee30(puVar9);
            func_0x000107c61170(puVar9);
            puVar9 = puVar6;
            func_0x000107c5ee20(puVar6,uVar8);
            func_0x00010006c090(puVar6,uVar8);
          }
          func_0x000107c537f0(puVar5);
          func_0x000107c61170(puVar9);
          puVar9 = PTR_PTR_1126be6d0;
          func_0x000107c610f8(PTR_PTR_1126be6d0);
          func_0x00010006c00c(lVar4,lVar7);
          func_0x000107c61174(puVar5);
          lVar10 = lVar4;
          func_0x000107c5ee20(lVar4,lVar7);
          func_0x000107c46080(puVar9);
          func_0x000107c61170(puVar5);
          func_0x000107c61170(lVar10);
          func_0x00010006c090(lVar4,lVar7);
          func_0x000107c3ecc8(puVar9);
          func_0x000107c61180();
          func_0x000107c61170(puVar9);
          func_0x000107c5fc48(*(undefined8 *)(param_2 + _DAT_11307fc78),PTR___sSSN_11034da80);
          puVar5 = &UNK_1105622a8;
          func_0x000107c613fc(&UNK_1105622a8,0x20,7);
          *(code **)(puVar5 + 0x10) = FUN_1028bb424;
          *(undefined **)(puVar5 + 0x18) = puVar3;
          pcStack_80 = FUN_1028bb438;
          puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_98 = 0x42000000;
          puStack_90 = &UNK_100f5c588;
          puStack_88 = &UNK_1105622c0;
          puStack_78 = puVar5;
          func_0x000107c60bc4(&puStack_a0);
          puVar5 = puStack_78;
          func_0x000107c6157c(puVar3);
          puVar3 = puVar5;
          goto code_r0x000107c61574;
        }
      }
    }
    func_0x000107c615e8(lVar4);
  }
  (**(code **)(param_5 + 0x10))(param_5,0);
  uVar2 = (uint)param_5;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    func_0x000107c60e78();
                    /* WARNING: Could not recover jumptable at 0x0001028bb434. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_4 + 0x10) + 0x10))(*(long *)(param_4 + 0x10),uVar2 & 1);
    return;
  }
code_r0x000107c61574:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar3);
  return;
}



/* Entry: 1028bb424; end: 1028bb437;  */

void FUN_1028bb424(uint param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0001028bb434. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1 & 1);
  return;
}


