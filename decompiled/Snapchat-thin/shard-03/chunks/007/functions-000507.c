/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102c861cc; end: 102c862cb;  */

undefined8 FUN_102c861cc(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 102c862cc; end: 102c8631f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c862cc(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  long unaff_x20;
  undefined8 uVar11;
  undefined1 auStack_68 [24];
  
  lVar7 = 0;
  func_0x000100b91584();
  uVar9 = (ulong)*(byte *)(*(long *)(lVar7 + -8) + 0x50);
  uVar10 = uVar9 + 0x18 & (uVar9 ^ 0xffffffffffffffff);
  uVar9 = *(long *)(*(long *)(lVar7 + -8) + 0x40) + uVar10 + 7 & 0xfffffffffffffff8;
  lVar7 = *(long *)(unaff_x20 + 0x10);
  uVar8 = *(undefined8 *)(unaff_x20 + uVar9);
  puVar1 = (undefined8 *)(unaff_x20 + uVar9 + 8);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  lVar6 = unaff_x20 + uVar10;
  func_0x000107c61428(lVar7 + 0x10,auStack_68,0,0);
  lVar7 = lVar7 + 0x10;
  func_0x000107c61618();
  if (lVar7 != 0) {
    uVar11 = *(undefined8 *)(lVar7 + _DAT_112f07b88);
    uVar4 = uVar11;
    func_0x000107c614f0(uVar11);
    func_0x000107c615f0(uVar11);
    lVar5 = lVar7;
    func_0x000107c61174();
    func_0x00010418bbf4(lVar6,uVar8,uVar2,uVar3,lVar7,0,0,uVar4);
    func_0x000107c615e8(uVar11);
    func_0x000107c61170(lVar5);
    func_0x000107c42c1c(*(undefined8 *)(lVar5 + _DAT_112f07b80));
    func_0x000107c61170(lVar5);
    func_0x000107c61170(lVar6);
  }
  return;
}



/* Entry: 102c86320; end: 102c8635b;  */

undefined8 FUN_102c86320(undefined8 param_1,code *param_2)

{
  long lVar1;
  
  lVar1 = 0;
  (*param_2)();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 102c8635c; end: 102c86363;  */

void FUN_102c8635c(long param_1,long param_2)

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



/* Entry: 102c86364; end: 102c86913;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c86364(long param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
                  long param_7,long param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 uVar10;
  code *pcVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long alStack_b0 [3];
  long lStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined1 auStack_80 [32];
  
  func_0x000107c613fc();
  uVar8 = *(undefined8 *)(param_1 + _DAT_113068e88);
  uVar1 = *(undefined8 *)(param_1 + _DAT_113068e80);
  uVar2 = ((undefined8 *)(param_1 + _DAT_113068e80))[1];
  uVar12 = *(undefined8 *)(param_4 + _DAT_11304a478);
  func_0x0001000285a8(0x112dbe6f8,&UNK_10d9798f0);
  uVar9 = *(undefined8 *)(param_5 + _DAT_11308b850);
  func_0x000107c615f0(uVar8);
  func_0x000107c61434(uVar2);
  func_0x000107c6157c(uVar12);
  func_0x000107c61174();
  uVar4 = uVar9;
  func_0x0001000bda74();
  func_0x000107c61170(uVar9);
  uVar14 = *(undefined8 *)(param_6 + _DAT_112f0ded0);
  uVar13 = *(undefined8 *)(param_2 + _DAT_113078b50);
  func_0x0001000285a8(0x112d39420,&UNK_10d979900);
  uVar10 = *(undefined8 *)(param_8 + _DAT_113083868);
  func_0x000107c6157c(uVar14);
  func_0x000107c615f0(uVar13);
  func_0x000107c61174();
  uVar9 = uVar10;
  func_0x0001000bda74();
  func_0x000107c61170(uVar10);
  lVar5 = _DAT_113069018;
  func_0x000107c61428(param_7 + _DAT_113069018,auStack_80,0,0);
  lVar5 = param_7 + lVar5;
  func_0x000107c61618(lVar5);
  lVar6 = 0;
  func_0x000102c86fd0();
  lVar7 = lVar6;
  func_0x000107c613fc();
  func_0x000107c61614(lVar7 + 0x50,0);
  uVar10 = 0;
  func_0x0001005f60b4();
  func_0x000107c613fc();
  func_0x0001005f60d4();
  *(undefined8 *)(lVar7 + 0x58) = uVar10;
  *(undefined1 *)(lVar7 + 0x60) = 2;
  *(undefined8 *)(lVar7 + 0x10) = uVar8;
  *(undefined8 *)(lVar7 + 0x18) = uVar1;
  *(undefined8 *)(lVar7 + 0x20) = uVar2;
  *(undefined8 *)(lVar7 + 0x28) = uVar12;
  *(undefined8 *)(lVar7 + 0x30) = uVar4;
  *(undefined8 *)(lVar7 + 0x38) = uVar14;
  func_0x000107c61604(lVar7 + 0x50,lVar5);
  func_0x000107c615e8(lVar5);
  *(undefined8 *)(lVar7 + 0x40) = uVar13;
  *(undefined8 *)(lVar7 + 0x48) = uVar9;
  lVar5 = param_3 + _DAT_113068e50;
  uVar1 = *(undefined8 *)(lVar5 + 0x18);
  lVar3 = *(long *)(lVar5 + 0x20);
  func_0x0001000a8868(lVar5,uVar1);
  ppuStack_90 = &PTR_DAT_1105bae18;
  ppuStack_88 = &PTR_DAT_1105badf0;
  pcVar11 = *(code **)(lVar3 + 0x10);
  alStack_b0[0] = lVar7;
  lStack_98 = lVar6;
  func_0x000107c6157c(lVar7);
  (*pcVar11)(alStack_b0,uVar1,lVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_3);
  func_0x000100dd2718(alStack_b0);
  *(long *)(unaff_x20 + 0x10) = lVar7;
  return;
}



/* Entry: 102c86914; end: 102c86933;  */

void FUN_102c86914(void)

{
  FUN_102c869a4();
  return;
}



/* Entry: 102c86934; end: 102c86957;  */

void FUN_102c86934(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102c86958; end: 102c8697b;  */

void FUN_102c86958(void)

{
  FUN_102c869a4();
  return;
}



/* Entry: 102c8697c; end: 102c86983;  */

undefined8 FUN_102c8697c(void)

{
  return 0;
}



/* Entry: 102c86984; end: 102c869a3;  */

void FUN_102c86984(void)

{
  func_0x000107c61168(&PTR_PTR_112f07cc0);
  return;
}



/* Entry: 102c869a4; end: 102c86a8f;  */

void FUN_102c869a4(void)

{
  long *plVar1;
  undefined *puVar2;
  code *pcVar3;
  code *pcVar4;
  undefined *puVar5;
  long unaff_x20;
  undefined1 auStack_68 [24];
  long *plStack_50;
  long lStack_48;
  
  func_0x0001000d224c(auStack_68);
  func_0x0001000a8868(auStack_68,plStack_50);
  plVar1 = plStack_50;
  (**(code **)(lStack_48 + 8))(plStack_50,lStack_48);
  puVar2 = &UNK_1105bae38;
  func_0x000107c613fc(&UNK_1105bae38,0x18,7);
  func_0x000107c61644(puVar2 + 0x10);
  pcVar3 = FUN_102c87c04;
  puVar5 = puVar2;
  (**(code **)(*plVar1 + 0x60))(FUN_102c87c04);
  func_0x000107c61574(plVar1);
  func_0x000107c61574(puVar2);
  func_0x0001000834e4(auStack_68);
  pcVar4 = pcVar3;
  func_0x000107c614f0(pcVar3);
  (**(code **)(puVar5 + 0x18))(*(undefined8 *)(unaff_x20 + 0x58),pcVar4,puVar5);
  func_0x000107c615e8(pcVar3);
  return;
}



/* Entry: 102c86a90; end: 102c86eeb;  */

void FUN_102c86a90(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 uStack_48;
  undefined4 uStack_44;
  long lStack_40;
  long lStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  lVar3 = param_1;
  func_0x0001000a8868(param_1,uVar1);
  FUN_102d24050(&uStack_48,&UNK_1105c4038,uVar1,&UNK_1105c4038,uVar2,&PTR_DAT_1105c3388,lVar3);
  if (lStack_38 == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    lVar3 = param_1;
    func_0x0001000a8868(param_1,uVar1);
    FUN_102d24050(&uStack_48,&UNK_1105c3ed8,uVar1,&UNK_1105c3ed8,uVar2,&PTR_DAT_1105c3360,lVar3);
    if (lStack_38 == 0) {
      uVar1 = *(undefined8 *)(param_1 + 0x18);
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      lVar3 = param_1;
      func_0x0001000a8868(param_1,uVar1);
      FUN_102d24050(&uStack_48,&UNK_1105c3f00,uVar1,&UNK_1105c3f00,uVar2,&PTR_DAT_1105c3368,lVar3);
      if (lStack_40 == 0) {
        uVar1 = *(undefined8 *)(param_1 + 0x18);
        uVar2 = *(undefined8 *)(param_1 + 0x20);
        lVar3 = param_1;
        func_0x0001000a8868(param_1,uVar1);
        FUN_102d24050(&uStack_48,&UNK_1105c3f20,uVar1,&UNK_1105c3f20,uVar2,&PTR_DAT_1105c3370,lVar3)
        ;
        if (lStack_40 != 0) {
          func_0x000107c6142c();
          func_0x000107c61428(param_2 + 0x10,&uStack_48,0,0);
          param_2 = param_2 + 0x10;
          func_0x000107c61648();
          if (param_2 == 0) {
            return;
          }
          FUN_102c86eec();
          goto LAB_102c86ccc;
        }
        uVar1 = *(undefined8 *)(param_1 + 0x18);
        uVar2 = *(undefined8 *)(param_1 + 0x20);
        lVar3 = param_1;
        func_0x0001000a8868(param_1,uVar1);
        FUN_102d24050(&uStack_48,&UNK_1105c3f40,uVar1,&UNK_1105c3f40,uVar2,&PTR_DAT_1105c3378,lVar3)
        ;
        if (lStack_40 == 0) {
          uVar1 = *(undefined8 *)(param_1 + 0x18);
          uVar2 = *(undefined8 *)(param_1 + 0x20);
          lVar3 = param_1;
          func_0x0001000a8868(param_1,uVar1);
          FUN_102d24050(&uStack_48,&UNK_1105c3fb8,uVar1,&UNK_1105c3fb8,uVar2,&PTR_DAT_1105c3380,
                        lVar3);
          if (lStack_38 != 0) {
            func_0x000107c61428(param_2 + 0x10,&uStack_48,0,0);
            param_2 = param_2 + 0x10;
            func_0x000107c61648();
            if (param_2 != 0) {
              lVar3 = *(long *)(param_2 + 0x40);
              func_0x000107c5df08();
              func_0x000107c61180();
              if (lVar3 != 0) {
                func_0x000107c5615c();
                func_0x000107c615e8(lVar3);
              }
              func_0x000107c61574(param_2);
            }
            goto LAB_102c86bac;
          }
          uVar1 = *(undefined8 *)(param_1 + 0x18);
          uVar2 = *(undefined8 *)(param_1 + 0x20);
          func_0x0001000a8868(param_1,uVar1);
          FUN_102d24050(&uStack_48,&UNK_1105c4060,uVar1,&UNK_1105c4060,uVar2,&PTR_DAT_1105c3390,
                        param_1);
          if (lStack_40 == 0) {
            return;
          }
          func_0x000107c6142c();
          func_0x000107c61428(param_2 + 0x10,&uStack_48,0,0);
          param_2 = param_2 + 0x10;
          func_0x000107c61648();
          if (param_2 == 0) {
            return;
          }
          FUN_102c87078();
          goto LAB_102c86ccc;
        }
        func_0x000107c6142c();
        func_0x000107c61428(param_2 + 0x10,&uStack_48,0,0);
        param_2 = param_2 + 0x10;
        func_0x000107c61648();
        if (param_2 == 0) {
          return;
        }
        lVar3 = param_2 + 0x50;
        func_0x000107c61618();
        if (lVar3 == 0) goto LAB_102c86ccc;
        func_0x000107c50724();
      }
      else {
        func_0x000107c6142c();
        func_0x000107c61428(param_2 + 0x10,&uStack_48,0,0);
        param_2 = param_2 + 0x10;
        func_0x000107c61648();
        if (param_2 == 0) {
          return;
        }
        lVar3 = param_2 + 0x50;
        func_0x000107c61618();
        if (lVar3 == 0) goto LAB_102c86ccc;
        func_0x000107c4e470();
      }
      func_0x000107c615e8(lVar3);
LAB_102c86ccc:
      func_0x000107c61574(param_2);
      return;
    }
    func_0x000107c61428(param_2 + 0x10,&uStack_48,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61648();
    if (param_2 == 0) goto LAB_102c86bac;
    func_0x000102c86e74(CONCAT44(uStack_44,uStack_48));
  }
  else {
    func_0x000107c61428(param_2 + 0x10,&uStack_48,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61648();
    if (param_2 == 0) goto LAB_102c86bac;
    *(byte *)(param_2 + 0x60) = (byte)uStack_48 & 1;
    FUN_102c86ff0();
  }
  func_0x000107c61574(param_2);
LAB_102c86bac:
  func_0x000107c6142c(lStack_38);
  return;
}



/* Entry: 102c86eec; end: 102c86f53;  */

/* WARNING: Possible PIC construction at 0x000102c86f1c: Changing call to branch */

void FUN_102c86eec(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x40);
  func_0x000107c5df08();
  func_0x000107c61180();
  if (lVar1 == 0) {
    lVar1 = unaff_x20 + 0x50;
    func_0x000107c61618();
    if (lVar1 == 0) {
      return;
    }
    func_0x000107c50724();
  }
  else {
    func_0x000107c51bd8(0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
  return;
}



/* Entry: 102c86f54; end: 102c86fef;  */

void FUN_102c86f54(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  FUN_102c62b64(unaff_x20 + 0x50);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  return;
}



/* Entry: 102c86ff0; end: 102c87077;  */

/* WARNING: Possible PIC construction at 0x000102c8702c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c87030) */
/* WARNING: Removing unreachable block (ram,0x000102c87068) */
/* WARNING: Removing unreachable block (ram,0x000102c87034) */
/* WARNING: Removing unreachable block (ram,0x000102c87040) */
/* WARNING: Removing unreachable block (ram,0x000102c87054) */

void FUN_102c86ff0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c5fadc(uVar2,*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c4a784(uVar1);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 102c87078; end: 102c872d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c87078(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uVar6;
  long lStack_58;
  
  func_0x0001000d224c(&lStack_58);
  if (lStack_58 != 0) {
    puVar1 = *(undefined **)(unaff_x20 + 0x10);
    lVar3 = *(long *)(unaff_x20 + 0x18);
    func_0x000107c5fadc(lVar3,*(undefined8 *)(unaff_x20 + 0x20));
    func_0x000107c3d368();
    func_0x000107c61180();
    func_0x000107c61170();
    if (puVar1 == (undefined *)0x0) {
      func_0x000107c615e8(lStack_58);
    }
    else {
      func_0x0001041f3970();
      if (lVar3 == 0) {
        func_0x000107c615e8(lStack_58);
      }
      else {
        puVar4 = *(undefined **)(lVar3 + _DAT_113068f40);
        func_0x000107c61174();
        func_0x000107c61170();
        func_0x0001041f3970();
        if (lVar3 == 0) {
          func_0x000107c615e8(lStack_58);
          func_0x000107c61170(puVar1);
          puVar1 = puVar4;
        }
        else {
          uVar5 = *(undefined8 *)(lVar3 + _DAT_113068f48);
          func_0x000107c61174();
          func_0x000107c61170(lVar3);
          puVar2 = PTR_PTR_1126ac198;
          func_0x000107c610f8(PTR_PTR_1126ac198);
          func_0x000107c453e4();
          lVar3 = *(long *)((long)(puVar4 + _DAT_11308f138) + 8);
          if (lVar3 == 0) {
            uVar6 = 0;
            lVar3 = -0x2000000000000000;
          }
          else {
            uVar6 = *(undefined8 *)(puVar4 + _DAT_11308f138);
          }
          func_0x000107c61434();
          func_0x000107c5fadc(uVar6,lVar3);
          func_0x000107c6142c(lVar3);
          func_0x000107c522e0(puVar2);
          func_0x000107c61170(uVar6);
          func_0x0001084baa08(*(undefined8 *)(puVar4 + _DAT_113815200));
          func_0x000107c52444(puVar2);
          func_0x0001084b952c(*(undefined8 *)(puVar4 + _DAT_11308f128));
          func_0x000107c52384(puVar2);
          func_0x000107c56498(puVar2);
          func_0x000107c4bfb0(lStack_58);
          func_0x000107c615e8(lStack_58);
          func_0x000107c61170(puVar1);
          func_0x000107c61170(puVar4);
          func_0x000107c61170(uVar5);
          puVar1 = puVar2;
        }
      }
      func_0x000107c61170(puVar1);
    }
  }
  return;
}



/* Entry: 102c872d4; end: 102c874df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102c872d4(long param_1)

{
  code *pcVar1;
  long lVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  byte bVar7;
  long unaff_x20;
  undefined *puVar8;
  long lStack_e8;
  undefined1 auStack_e0 [176];
  
  lVar2 = 0x112efcf38;
  func_0x0001000285a8(0x112efcf38,&UNK_10db2ebd8);
  puVar6 = auStack_e0;
  func_0x000107c61534();
  *(undefined8 *)(lVar2 + 0x18) = 6;
  *(undefined8 *)(lVar2 + 0x10) = 3;
  ppuVar3 = &PTR____CFConstantStringClassReference_110f0bc98;
  func_0x000107c5faec();
  *(undefined8 *)(lVar2 + 0x20) = ppuVar3;
  *(undefined1 **)(lVar2 + 0x28) = puVar6;
  lVar4 = param_1;
  FUN_102c874e0();
  puVar8 = PTR___sSdN_11034dd90;
  if (((uint)puVar6 & 0xff) == 1) {
    lVar4 = 0;
    *(undefined8 *)(lVar2 + 0x38) = 0;
    *(undefined8 *)(lVar2 + 0x40) = 0;
    puVar8 = (undefined *)0x0;
  }
  *(long *)(lVar2 + 0x30) = lVar4;
  *(undefined **)(lVar2 + 0x48) = puVar8;
  ppuVar3 = &PTR____CFConstantStringClassReference_110f0bc78;
  func_0x000107c5faec();
  *(undefined ***)(lVar2 + 0x50) = ppuVar3;
  *(undefined1 **)(lVar2 + 0x58) = puVar6;
  bVar7 = *(byte *)(unaff_x20 + 0x60);
  if (bVar7 == 2) {
    lStack_e8 = *(long *)(*(long *)(*(long *)(*(long *)(*(long *)(param_1 + _DAT_113068f48) +
                                                       _DAT_11308f298) + _DAT_11308f538) +
                                   _DAT_11308f3f0) + _DAT_11308f498);
    if (lStack_e8 == 0) {
      *(undefined8 *)(lVar2 + 0x68) = 0;
      *(undefined8 *)(lVar2 + 0x60) = 0;
      *(undefined8 *)(lVar2 + 0x78) = 0;
      *(undefined8 *)(lVar2 + 0x70) = 0;
      goto LAB_102c87408;
    }
    if (lStack_e8 != 1) {
      func_0x000107c60614(&UNK_110797010,&lStack_e8,&UNK_110797010,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102c874e0);
      (*pcVar1)();
    }
    bVar7 = 0;
  }
  *(undefined **)(lVar2 + 0x78) = PTR___sSbN_11034dd40;
  *(byte *)(lVar2 + 0x60) = bVar7 & 1;
LAB_102c87408:
  ppuVar3 = &PTR____CFConstantStringClassReference_110f0c258;
  func_0x000107c5faec();
  *(undefined ***)(lVar2 + 0x80) = ppuVar3;
  *(undefined1 **)(lVar2 + 0x88) = puVar6;
  FUN_102c879d0(param_1);
  if (((uint)puVar6 & 0xff) == 1) {
    puVar8 = (undefined *)0x0;
    uVar5 = 0;
    *(undefined8 *)(lVar2 + 0x98) = 0;
    *(undefined8 *)(lVar2 + 0xa0) = 0;
  }
  else {
    puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8();
    func_0x000107c490d4();
    uVar5 = 0;
    func_0x0001002ed07c();
  }
  *(undefined **)(lVar2 + 0x90) = puVar8;
  *(undefined8 *)(lVar2 + 0xa8) = uVar5;
  lVar4 = lVar2;
  FUN_102bcb3b0(lVar2);
  func_0x000107c61588(lVar2);
  uVar5 = 0x112efcf40;
  func_0x0001000285a8(0x112efcf40,&UNK_10db2ebe0);
  func_0x000107c61408((undefined8 *)(lVar2 + 0x20),3,uVar5);
  return lVar4;
}



/* Entry: 102c874e0; end: 102c87657;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c874e0(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined *puVar7;
  long lVar8;
  ulong uStack_58;
  
  lVar3 = *(long *)(param_1 + _DAT_113068f48);
  func_0x000107c5cc0c();
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar8 = *(long *)(lVar3 + _DAT_113090678);
    lVar4 = lVar8;
    func_0x000107c61174();
    func_0x000107c61170(lVar3);
    if (lVar8 != 0) {
      lVar8 = *(long *)(lVar4 + _DAT_1130903d0);
      lVar3 = lVar8;
      func_0x000107c61174(lVar8);
      func_0x000107c61170(lVar4);
      if (lVar8 != 0) {
        func_0x0001000d224c(&uStack_58);
        if (uStack_58 != 0) {
          puVar1 = (undefined8 *)(*(long *)(param_1 + _DAT_113068f40) + _DAT_11308f130);
          uVar5 = *puVar1;
          uVar2 = puVar1[1];
          func_0x000107c61434(uVar2);
          func_0x000107c5fadc(uVar5,uVar2);
          func_0x000107c6142c(uVar2);
          uVar6 = uStack_58;
          func_0x000107c5df18();
          func_0x000107c615e8(uStack_58);
          func_0x000107c61170(uVar5);
          if (uVar6 < 2) {
            puVar7 = PTR_PTR_1126afec0;
            func_0x000107c61168(PTR_PTR_1126afec0);
            func_0x000107c4223c(lVar3);
            func_0x000107c4cec4(puVar7);
            func_0x000107c61170(lVar3);
            return;
          }
        }
        func_0x000107c61170(lVar3);
      }
    }
  }
  return;
}



/* Entry: 102c87658; end: 102c8795f;  */

undefined * FUN_102c87658(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong *puVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  undefined1 auStack_130 [24];
  long lStack_118;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 auStack_d8 [32];
  undefined1 auStack_b8 [32];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [40];
  
  puVar3 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puVar14 = (ulong *)(param_1 + 0x40);
  uVar12 = -1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar17 = 0xffffffffffffffff;
  if (-uVar12 < 0x40) {
    uVar17 = ~(-1L << (-uVar12 & 0x3f));
  }
  uVar17 = uVar17 & *puVar14;
  func_0x000107c61434();
  lVar15 = 0;
  lVar16 = lVar15;
  while( true ) {
    for (; uVar17 != 0; uVar17 = uVar17 - 1 & uVar17) {
      uVar9 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | lVar15 << 6;
      puVar1 = (undefined8 *)(*(long *)(param_1 + 0x30) + uVar9 * 0x10);
      uStack_98 = *puVar1;
      uVar2 = puVar1[1];
      uStack_90 = uVar2;
      func_0x000102c87bbc(*(long *)(param_1 + 0x38) + uVar9 * 0x20,auStack_88,0x112d387f8,
                          &UNK_10d902650);
      func_0x000102c87bbc(auStack_88,auStack_130,0x112d387f8,&UNK_10d902650);
      if (lStack_118 == 0) {
        func_0x000107c61434(uVar2);
        puVar8 = auStack_130;
      }
      else {
        func_0x000100102924(auStack_130,auStack_b8);
        func_0x000102c87bbc(&uStack_98,&uStack_e8,0x112efcf20,&UNK_10db2ebc0);
        uVar5 = uStack_e0;
        uVar4 = uStack_e8;
        uVar9 = *(ulong *)(puVar3 + 0x10);
        if (uVar9 < *(ulong *)(puVar3 + 0x18)) {
          func_0x000107c61434(uVar2);
        }
        else {
          func_0x000107c61434(uVar2);
          func_0x000100102b0c(uVar9 + 1,1);
        }
        func_0x000107c6068c(auStack_130,*(undefined8 *)(puVar3 + 0x28));
        puVar8 = auStack_130;
        func_0x000107c5fb58(puVar8,uVar4,uVar5);
        func_0x000107c606a8();
        uVar13 = -1L << ((ulong)(byte)puVar3[0x20] & 0x3f);
        uVar11 = (ulong)puVar8 & (uVar13 ^ 0xffffffffffffffff);
        uVar10 = uVar11 >> 6;
        uVar9 = -1L << (uVar11 & 0x3f) &
                (*(ulong *)(puVar3 + uVar10 * 8 + 0x40) ^ 0xffffffffffffffff);
        if (uVar9 == 0) {
          bVar7 = false;
          uVar9 = 0x3f - uVar13 >> 6;
          do {
            uVar11 = uVar10 + 1;
            if ((uVar11 == uVar9) && (bVar7)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x102c87960);
              (*pcVar6)();
            }
            uVar10 = 0;
            if (uVar11 != uVar9) {
              uVar10 = uVar11;
            }
            bVar7 = (bool)(uVar11 == uVar9 | bVar7);
          } while (*(ulong *)(puVar3 + uVar10 * 8 + 0x40) == 0xffffffffffffffff);
          uVar9 = ~*(ulong *)(puVar3 + uVar10 * 8 + 0x40);
          uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
          uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
          uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
          uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
          uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar10 << 6;
        }
        else {
          uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
          uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
          uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
          uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
          uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar11 & 0x7fffffffffffffc0;
        }
        uVar10 = uVar9 >> 3 & 0x1ffffffffffffff8;
        *(ulong *)(puVar3 + uVar10 + 0x40) =
             1L << (uVar9 & 0x3f) | *(ulong *)(puVar3 + uVar10 + 0x40);
        puVar1 = (undefined8 *)(*(long *)(puVar3 + 0x30) + uVar9 * 0x10);
        *puVar1 = uVar4;
        puVar1[1] = uVar5;
        func_0x000100102924(auStack_b8,*(long *)(puVar3 + 0x38) + uVar9 * 0x20);
        *(long *)(puVar3 + 0x10) = *(long *)(puVar3 + 0x10) + 1;
        puVar8 = auStack_d8;
      }
      func_0x000102c87b7c(puVar8,0x112d387f8,&UNK_10d902650);
      func_0x000102c87b7c(&uStack_98,0x112efcf20,&UNK_10db2ebc0);
      lVar16 = lVar15;
    }
    bVar7 = SCARRY8(lVar15,1);
    lVar15 = lVar15 + 1;
    if (bVar7) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x102c8795c);
      (*pcVar6)();
    }
    if ((long)(0x3f - uVar12 >> 6) <= lVar15) break;
    uVar17 = puVar14[lVar15];
  }
  FUN_102bcb314(param_1,puVar14,~uVar12,lVar16,0);
  return puVar3;
}



/* Entry: 102c87960; end: 102c8799b;  */

void FUN_102c87960(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f07e08;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f07e08,&UNK_10db3af00);
  func_0x000107c5fb18(&uStack_18,uVar1);
  return;
}



/* Entry: 102c8799c; end: 102c879bb;  */

void FUN_102c8799c(void)

{
  FUN_102c87abc();
  return;
}



/* Entry: 102c879bc; end: 102c879cf;  */

undefined * FUN_102c879bc(void)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uStack_80;
  ulong uStack_78;
  undefined1 auStack_70 [32];
  
  puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar8 = *(undefined **)(PTR___swiftEmptyArrayStorage_11034f1c8 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar8 != (undefined *)0x0) {
    func_0x0001000285a8(0x112d4b5f8,&UNK_10d9121b0);
    puVar5 = puVar8;
    func_0x000107c60498();
    puVar9 = puVar9 + 0x20;
    func_0x000107c6157c();
    do {
      func_0x000100216788(puVar9,&uStack_80);
      uVar3 = uStack_78;
      uVar2 = uStack_80;
      uVar6 = uStack_80;
      uVar7 = uStack_78;
      func_0x000100029284();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100214b8c);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      func_0x000100102924(auStack_70,*(long *)(puVar5 + 0x38) + uVar6 * 0x20);
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100214b90);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      puVar9 = puVar9 + 0x30;
      puVar8 = puVar8 + -1;
    } while (puVar8 != (undefined *)0x0);
    func_0x000107c61574(puVar5);
  }
  return puVar5;
}



/* Entry: 102c879d0; end: 102c87abb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_102c879d0(long param_1)

{
  undefined1 auVar1 [16];
  code *pcVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lStack_28;
  
  lVar4 = *(long *)(param_1 + _DAT_113068f48);
  lVar3 = lVar4;
  func_0x000107c5cc0c();
  func_0x000107c61180();
  if (lVar3 == 0) {
    uVar5 = 1;
  }
  else {
    if ((*(int *)(lVar3 + _DAT_1130905d8) == 2) &&
       (lStack_28 = *(long *)(*(long *)(*(long *)(*(long *)(lVar4 + _DAT_11308f298) + _DAT_11308f538
                                                 ) + _DAT_11308f3f0) + _DAT_11308f4a0),
       lStack_28 != 0)) {
      if (lStack_28 != 1) {
        func_0x000107c60614(&UNK_110797e18,&lStack_28,&UNK_110797e18,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102c87abc);
        (*pcVar2)();
      }
      uVar5 = 0;
    }
    else {
      uVar5 = 1;
    }
    func_0x000107c61170();
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar5;
  return auVar1 << 0x40;
}



/* Entry: 102c87abc; end: 102c87b7b;  */

undefined * FUN_102c87abc(void)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined *puVar9;
  long unaff_x20;
  long lVar10;
  ulong uStack_80;
  ulong uStack_78;
  undefined1 auStack_70 [32];
  
  lVar10 = *(long *)(unaff_x20 + 0x10);
  puVar7 = *(undefined **)(unaff_x20 + 0x18);
  func_0x000107c5fadc(puVar7,*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c3d368();
  func_0x000107c61180();
  func_0x000107c61170();
  if (lVar10 != 0) {
    func_0x0001041f3970();
    func_0x000107c61170(lVar10);
    if (puVar7 != (undefined *)0x0) {
      puVar9 = puVar7;
      FUN_102c872d4(puVar7);
      puVar5 = puVar9;
      FUN_102c87658();
      func_0x000107c61170(puVar7);
      func_0x000107c6142c(puVar9);
      return puVar5;
    }
  }
  puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar9 = *(undefined **)(PTR___swiftEmptyArrayStorage_11034f1c8 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar9 != (undefined *)0x0) {
    func_0x0001000285a8(0x112d4b5f8,&UNK_10d9121b0);
    puVar5 = puVar9;
    func_0x000107c60498();
    puVar7 = puVar7 + 0x20;
    func_0x000107c6157c();
    do {
      func_0x000100216788(puVar7,&uStack_80);
      uVar3 = uStack_78;
      uVar2 = uStack_80;
      uVar6 = uStack_80;
      uVar8 = uStack_78;
      func_0x000100029284();
      if ((uVar8 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100214b8c);
        (*pcVar4)();
      }
      uVar8 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar8 + 0x40) = *(ulong *)(puVar5 + uVar8 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      func_0x000100102924(auStack_70,*(long *)(puVar5 + 0x38) + uVar6 * 0x20);
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100214b90);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      puVar7 = puVar7 + 0x30;
      puVar9 = puVar9 + -1;
    } while (puVar9 != (undefined *)0x0);
    func_0x000107c61574(puVar5);
  }
  return puVar5;
}



/* Entry: 102c87b7c; end: 102c87c03;  */

undefined8 FUN_102c87b7c(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 102c87c04; end: 102c87c0b;  */

void FUN_102c87c04(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined4 uStack_48;
  undefined4 uStack_44;
  long lStack_40;
  long lStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  lVar3 = param_1;
  func_0x0001000a8868(param_1,uVar1);
  FUN_102d24050(&uStack_48,&UNK_1105c4038,uVar1,&UNK_1105c4038,uVar2,&PTR_DAT_1105c3388,lVar3);
  if (lStack_38 == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    lVar3 = param_1;
    func_0x0001000a8868(param_1,uVar1);
    FUN_102d24050(&uStack_48,&UNK_1105c3ed8,uVar1,&UNK_1105c3ed8,uVar2,&PTR_DAT_1105c3360,lVar3);
    if (lStack_38 == 0) {
      uVar1 = *(undefined8 *)(param_1 + 0x18);
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      lVar3 = param_1;
      func_0x0001000a8868(param_1,uVar1);
      FUN_102d24050(&uStack_48,&UNK_1105c3f00,uVar1,&UNK_1105c3f00,uVar2,&PTR_DAT_1105c3368,lVar3);
      if (lStack_40 == 0) {
        uVar1 = *(undefined8 *)(param_1 + 0x18);
        uVar2 = *(undefined8 *)(param_1 + 0x20);
        lVar3 = param_1;
        func_0x0001000a8868(param_1,uVar1);
        FUN_102d24050(&uStack_48,&UNK_1105c3f20,uVar1,&UNK_1105c3f20,uVar2,&PTR_DAT_1105c3370,lVar3)
        ;
        if (lStack_40 != 0) {
          func_0x000107c6142c();
          func_0x000107c61428(unaff_x20 + 0x10,&uStack_48,0,0);
          lVar3 = unaff_x20 + 0x10;
          func_0x000107c61648();
          if (lVar3 == 0) {
            return;
          }
          FUN_102c86eec();
          goto LAB_102c86ccc;
        }
        uVar1 = *(undefined8 *)(param_1 + 0x18);
        uVar2 = *(undefined8 *)(param_1 + 0x20);
        lVar3 = param_1;
        func_0x0001000a8868(param_1,uVar1);
        FUN_102d24050(&uStack_48,&UNK_1105c3f40,uVar1,&UNK_1105c3f40,uVar2,&PTR_DAT_1105c3378,lVar3)
        ;
        if (lStack_40 == 0) {
          uVar1 = *(undefined8 *)(param_1 + 0x18);
          uVar2 = *(undefined8 *)(param_1 + 0x20);
          lVar3 = param_1;
          func_0x0001000a8868(param_1,uVar1);
          FUN_102d24050(&uStack_48,&UNK_1105c3fb8,uVar1,&UNK_1105c3fb8,uVar2,&PTR_DAT_1105c3380,
                        lVar3);
          if (lStack_38 != 0) {
            func_0x000107c61428(unaff_x20 + 0x10,&uStack_48,0,0);
            lVar3 = unaff_x20 + 0x10;
            func_0x000107c61648();
            if (lVar3 != 0) {
              lVar4 = *(long *)(lVar3 + 0x40);
              func_0x000107c5df08();
              func_0x000107c61180();
              if (lVar4 != 0) {
                func_0x000107c5615c();
                func_0x000107c615e8(lVar4);
              }
              func_0x000107c61574(lVar3);
            }
            goto LAB_102c86bac;
          }
          uVar1 = *(undefined8 *)(param_1 + 0x18);
          uVar2 = *(undefined8 *)(param_1 + 0x20);
          func_0x0001000a8868(param_1,uVar1);
          FUN_102d24050(&uStack_48,&UNK_1105c4060,uVar1,&UNK_1105c4060,uVar2,&PTR_DAT_1105c3390,
                        param_1);
          if (lStack_40 == 0) {
            return;
          }
          func_0x000107c6142c();
          func_0x000107c61428(unaff_x20 + 0x10,&uStack_48,0,0);
          lVar3 = unaff_x20 + 0x10;
          func_0x000107c61648();
          if (lVar3 == 0) {
            return;
          }
          FUN_102c87078();
          goto LAB_102c86ccc;
        }
        func_0x000107c6142c();
        func_0x000107c61428(unaff_x20 + 0x10,&uStack_48,0,0);
        lVar3 = unaff_x20 + 0x10;
        func_0x000107c61648();
        if (lVar3 == 0) {
          return;
        }
        lVar4 = lVar3 + 0x50;
        func_0x000107c61618();
        if (lVar4 == 0) goto LAB_102c86ccc;
        func_0x000107c50724();
      }
      else {
        func_0x000107c6142c();
        func_0x000107c61428(unaff_x20 + 0x10,&uStack_48,0,0);
        lVar3 = unaff_x20 + 0x10;
        func_0x000107c61648();
        if (lVar3 == 0) {
          return;
        }
        lVar4 = lVar3 + 0x50;
        func_0x000107c61618();
        if (lVar4 == 0) goto LAB_102c86ccc;
        func_0x000107c4e470();
      }
      func_0x000107c615e8(lVar4);
LAB_102c86ccc:
      func_0x000107c61574(lVar3);
      return;
    }
    func_0x000107c61428(unaff_x20 + 0x10,&uStack_48,0,0);
    lVar3 = unaff_x20 + 0x10;
    func_0x000107c61648();
    if (lVar3 == 0) goto LAB_102c86bac;
    func_0x000102c86e74(CONCAT44(uStack_44,uStack_48));
  }
  else {
    func_0x000107c61428(unaff_x20 + 0x10,&uStack_48,0,0);
    lVar3 = unaff_x20 + 0x10;
    func_0x000107c61648();
    if (lVar3 == 0) goto LAB_102c86bac;
    *(byte *)(lVar3 + 0x60) = (byte)uStack_48 & 1;
    FUN_102c86ff0();
  }
  func_0x000107c61574(lVar3);
LAB_102c86bac:
  func_0x000107c6142c(lStack_38);
  return;
}



/* Entry: 102c87c0c; end: 102c87d53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c87c0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long unaff_x20;
  
  func_0x000107c614f0();
  lVar3 = _DAT_112f07e28;
  puVar4 = (undefined8 *)0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c613fc();
  puVar4[3] = 0x10;
  puVar4[2] = 8;
  puVar5 = puVar4;
  func_0x000103bb9ca8();
  puVar6 = (undefined8 *)puVar5[1];
  puVar4[4] = *puVar5;
  puVar4[5] = puVar6;
  func_0x000107c61434();
  func_0x000103bb9fc4();
  puVar5 = (undefined8 *)puVar6[1];
  puVar4[6] = *puVar6;
  puVar4[7] = puVar5;
  func_0x000107c61434();
  func_0x000103bba0a4();
  puVar6 = (undefined8 *)puVar5[1];
  puVar4[8] = *puVar5;
  puVar4[9] = puVar6;
  func_0x000107c61434();
  func_0x000103bb9ce4();
  puVar5 = (undefined8 *)puVar6[1];
  puVar4[10] = *puVar6;
  puVar4[0xb] = puVar5;
  func_0x000107c61434();
  func_0x000103bb9f1c();
  puVar6 = (undefined8 *)puVar5[1];
  puVar4[0xc] = *puVar5;
  puVar4[0xd] = puVar6;
  func_0x000107c61434();
  func_0x000103bba06c();
  puVar5 = (undefined8 *)puVar6[1];
  puVar4[0xe] = *puVar6;
  puVar4[0xf] = puVar5;
  func_0x000107c61434();
  func_0x000103bb9ea8();
  puVar6 = (undefined8 *)puVar5[1];
  puVar4[0x10] = *puVar5;
  puVar4[0x11] = puVar6;
  func_0x000107c61434();
  func_0x000103bb9ee0();
  uVar1 = puVar6[1];
  puVar4[0x12] = *puVar6;
  puVar4[0x13] = uVar1;
  *(undefined8 **)(unaff_x20 + lVar3) = puVar4;
  *(undefined8 *)(unaff_x20 + _DAT_112f07e10) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f07e18) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112f07e20) = param_3;
  puVar2 = PTR_s_init_1125d9248;
  func_0x000107c61434();
  func_0x000107c61154(&stack0xffffffffffffffa0,puVar2);
  return;
}



/* Entry: 102c87d54; end: 102c87db3; -[_TtC24AdPlaybackImplementation26AdOperaPlayerEventListener init] */

void FUN_102c87d54(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdPlaybackImplementation.AdOperaPlayerEventListener",0x33,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102c87d80);
  (*pcVar1)();
}



/* Entry: 102c87db4; end: 102c87e0b; -[_TtC24AdPlaybackImplementation26AdOperaPlayerEventListener .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c87db4(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f07e10));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f07e18));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f07e20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112f07e28));
  return;
}



/* Entry: 102c87e0c; end: 102c87e2b;  */

void FUN_102c87e0c(void)

{
  func_0x000107c61168(&PTR_PTR_11289b1a8);
  return;
}



/* Entry: 102c87e2c; end: 102c87f0b;  */

/* WARNING: Removing unreachable block (ram,0x000102c87e88) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c87e2c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined1 auStack_98 [24];
  undefined8 uStack_80;
  long lStack_78;
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  
  if ((param_3 == 0) || (lVar1 = param_3, func_0x000107c499b8(), (int)lVar1 != 0)) {
    FUN_102c87f0c(auStack_68,param_1,param_2,param_3,param_4);
    func_0x0001000d224c(auStack_98);
    func_0x0001000a8868(auStack_98,uStack_80);
    func_0x0001000a8868(auStack_68,uStack_50);
    (**(code **)(lStack_78 + 0x10))();
    func_0x0001000834e4(auStack_98);
    func_0x0001000834e4(auStack_68);
  }
  return;
}



/* Entry: 102c87f0c; end: 102c886b7;  */

void FUN_102c87f0c(long *param_1,long *param_2,long param_3,long param_4,undefined8 *param_5)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 **ppuVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined *puVar15;
  undefined **ppuVar16;
  undefined8 **ppuVar17;
  undefined1 uStack_68;
  undefined7 uStack_67;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  plVar4 = param_2;
  func_0x000103bb9ca8();
  plVar2 = (long *)*plVar4;
  if ((plVar2 != param_2 || plVar4[1] != param_3) &&
     (func_0x000107c605b8(plVar2,plVar4[1],param_2,param_3,0), ((ulong)plVar2 & 1) == 0)) {
    func_0x000103bb9fc4();
    plVar4 = (long *)*plVar2;
    if ((plVar4 == param_2 && plVar2[1] == param_3) ||
       (func_0x000107c605b8(plVar4,plVar2[1],param_2,param_3,0), ((ulong)plVar4 & 1) != 0)) {
      puVar15 = &UNK_1105bbba8;
      ppuVar16 = &PTR_DAT_1105bbb00;
LAB_102c88068:
      param_1[3] = (long)puVar15;
      param_1[4] = (long)ppuVar16;
      return;
    }
    func_0x000103bba0a4();
    plVar2 = (long *)*plVar4;
    if (((plVar2 == param_2) && (plVar4[1] == param_3)) ||
       (func_0x000107c605b8(plVar2,plVar4[1],param_2,param_3,0), ((ulong)plVar2 & 1) != 0)) {
      puVar15 = &UNK_1105bbbc8;
      ppuVar16 = &PTR_DAT_1105bbb08;
      goto LAB_102c88068;
    }
    func_0x000103bb9ce4();
    plVar4 = (long *)*plVar2;
    lVar14 = plVar2[1];
    if (((plVar4 == param_2) && (lVar14 == param_3)) ||
       (func_0x000107c605b8(plVar4,lVar14,param_2,param_3,0), ((ulong)plVar4 & 1) != 0)) {
      if (param_4 != 0) {
        func_0x000107c3b9ac();
        func_0x000107c61180();
        lVar5 = param_4;
        func_0x000107c5faec();
        func_0x000107c61170(param_4);
        lVar6 = 0x112f07e58;
        func_0x0001000285a8(0x112f07e58,&UNK_10db3af58);
        param_1[3] = lVar6;
        param_1[4] = (long)&PTR_DAT_1105c4558;
        *param_1 = lVar5;
        param_1[1] = lVar14;
        return;
      }
      puStack_60 = (undefined8 *)0x0;
      uStack_58 = 0xe000000000000000;
      func_0x000107c602fc(0x1d);
      func_0x000107c6142c(uStack_58);
      puStack_60 = (undefined8 *)0xd00000000000001b;
      uStack_58 = 0x800000010f105080;
      func_0x000107c5fb78(param_2,param_3);
      uVar13 = 0x54;
      puVar10 = puStack_60;
      uVar3 = uStack_58;
LAB_102c88204:
      func_0x0001048db000(puVar10,uVar3,0xd000000000000064,0x800000010f105010,uVar13);
      puVar7 = puVar10;
      func_0x0001018e0ad8();
      func_0x000107c613f8(&UNK_1107b6098,puVar7,0,0);
      *puVar7 = puVar10;
      puVar7[1] = uVar3;
      func_0x000107c61654();
      return;
    }
    func_0x000103bb9f1c();
    plVar2 = (long *)*plVar4;
    if (((plVar2 == param_2) && (plVar4[1] == param_3)) ||
       (func_0x000107c605b8(plVar2,plVar4[1],param_2,param_3,0), ((ulong)plVar2 & 1) != 0)) {
      puVar15 = &UNK_1105bbbe8;
      ppuVar16 = &PTR_DAT_1105bbb10;
      goto LAB_102c88068;
    }
    func_0x000103bba06c();
    plVar4 = (long *)*plVar2;
    if (((plVar4 != param_2) || (plVar2[1] != param_3)) &&
       (func_0x000107c605b8(plVar4,plVar2[1],param_2,param_3,0), ((ulong)plVar4 & 1) == 0)) {
      func_0x000103bb9ea8();
      plVar2 = (long *)*plVar4;
      if (((plVar2 != param_2) || (plVar4[1] != param_3)) &&
         (func_0x000107c605b8(plVar2,plVar4[1],param_2,param_3,0), ((ulong)plVar2 & 1) == 0)) {
        func_0x000103bb9ee0();
        plVar4 = (long *)*plVar2;
        if (((plVar4 != param_2) || (plVar2[1] != param_3)) &&
           (func_0x000107c605b8(plVar4,plVar2[1],param_2,param_3,0), ((ulong)plVar4 & 1) == 0)) {
          puVar10 = (undefined8 *)0xd000000000000016;
          uVar3 = 0x800000010f1034a0;
          uVar13 = 0x6a;
          goto LAB_102c88204;
        }
        if ((param_5 == (undefined8 *)0x0) || (func_0x000103bba37c(), param_5[2] == 0)) {
          uStack_58 = 0;
          puStack_60 = (undefined8 *)0x0;
          lStack_48 = 0;
          uStack_50 = 0;
LAB_102c88698:
          func_0x00010006e7f4(&puStack_60);
LAB_102c886a0:
          uStack_68 = 0;
        }
        else {
          lVar14 = *plVar4;
          uVar1 = plVar4[1];
          func_0x000107c61434(param_5);
          func_0x000107c61434(uVar1);
          uVar12 = uVar1;
          func_0x000100029284(lVar14);
          if ((uVar12 & 1) == 0) {
            func_0x000107c6142c(param_5);
            uStack_58 = 0;
            puStack_60 = (undefined8 *)0x0;
            lStack_48 = 0;
            uStack_50 = 0;
            func_0x000107c6142c(uVar1);
            goto LAB_102c88698;
          }
          func_0x0001000bb420(param_5[7] + lVar14 * 0x20,&puStack_60);
          func_0x000107c6142c(uVar1);
          func_0x000107c6142c(param_5);
          if (lStack_48 == 0) goto LAB_102c88698;
          puVar9 = &uStack_68;
          func_0x000107c6147c(puVar9,&puStack_60,PTR___sypN_11034f1a8 + 8,PTR___sSbN_11034dd40,6);
          if ((int)puVar9 == 0) goto LAB_102c886a0;
        }
        puVar15 = &UNK_1105bbd60;
        ppuVar16 = &PTR_DAT_1105bbb28;
        goto LAB_102c8862c;
      }
      if ((param_5 == (undefined8 *)0x0) || (func_0x000103bba37c(), param_5[2] == 0)) {
        uStack_58 = 0;
        puStack_60 = (undefined8 *)0x0;
        lStack_48 = 0;
        uStack_50 = 0;
LAB_102c88610:
        func_0x00010006e7f4(&puStack_60);
LAB_102c88618:
        uStack_68 = 0;
      }
      else {
        lVar14 = *plVar2;
        uVar1 = plVar2[1];
        func_0x000107c61434(param_5);
        func_0x000107c61434(uVar1);
        uVar12 = uVar1;
        func_0x000100029284(lVar14);
        if ((uVar12 & 1) == 0) {
          func_0x000107c6142c(param_5);
          uStack_58 = 0;
          puStack_60 = (undefined8 *)0x0;
          lStack_48 = 0;
          uStack_50 = 0;
          func_0x000107c6142c(uVar1);
          goto LAB_102c88610;
        }
        func_0x0001000bb420(param_5[7] + lVar14 * 0x20,&puStack_60);
        func_0x000107c6142c(uVar1);
        func_0x000107c6142c(param_5);
        if (lStack_48 == 0) goto LAB_102c88610;
        puVar9 = &uStack_68;
        func_0x000107c6147c(puVar9,&puStack_60,PTR___sypN_11034f1a8 + 8,PTR___sSbN_11034dd40,6);
        if ((int)puVar9 == 0) goto LAB_102c88618;
      }
      puVar15 = &UNK_1105bbce0;
      ppuVar16 = &PTR_DAT_1105bbb20;
LAB_102c8862c:
      param_1[3] = (long)puVar15;
      param_1[4] = (long)ppuVar16;
      *(undefined1 *)param_1 = uStack_68;
      return;
    }
    if (param_5 == (undefined8 *)0x0) {
      uStack_58 = 0;
      puStack_60 = (undefined8 *)0x0;
      lStack_48 = 0;
      uStack_50 = 0;
      func_0x00010006e7f4(&puStack_60);
      ppuVar17 = (undefined8 **)0x0;
LAB_102c884a8:
      uStack_58 = 0;
      puStack_60 = (undefined8 *)0x0;
      lStack_48 = 0;
      uStack_50 = 0;
LAB_102c884b0:
      func_0x00010006e7f4(&puStack_60);
    }
    else {
      func_0x000103bb7274();
      if (param_5[2] == 0) {
        uStack_58 = 0;
        puStack_60 = (undefined8 *)0x0;
        lStack_48 = 0;
        uStack_50 = 0;
LAB_102c8844c:
        ppuVar8 = &puStack_60;
        func_0x00010006e7f4();
LAB_102c88454:
        ppuVar17 = (undefined8 **)0x0;
      }
      else {
        lVar14 = *plVar4;
        uVar1 = plVar4[1];
        func_0x000107c61434(param_5);
        func_0x000107c61434(uVar1);
        uVar12 = uVar1;
        func_0x000100029284(lVar14);
        if ((uVar12 & 1) == 0) {
          func_0x000107c6142c(param_5);
          uStack_58 = 0;
          puStack_60 = (undefined8 *)0x0;
          lStack_48 = 0;
          uStack_50 = 0;
          func_0x000107c6142c(uVar1);
          goto LAB_102c8844c;
        }
        func_0x0001000bb420(param_5[7] + lVar14 * 0x20,&puStack_60);
        func_0x000107c6142c(uVar1);
        func_0x000107c6142c(param_5);
        if (lStack_48 == 0) goto LAB_102c8844c;
        ppuVar8 = (undefined8 **)&uStack_68;
        func_0x000107c6147c(ppuVar8,&puStack_60,PTR___sypN_11034f1a8 + 8,&UNK_11076f038,6);
        if (((ulong)ppuVar8 & 1) == 0) goto LAB_102c88454;
        ppuVar8 = (undefined8 **)CONCAT71(uStack_67,uStack_68);
        FUN_102c88774();
        ppuVar17 = ppuVar8;
      }
      func_0x000103bba2d8();
      if (param_5[2] == 0) goto LAB_102c884a8;
      puVar10 = *ppuVar8;
      puVar7 = ppuVar8[1];
      func_0x000107c61434(param_5);
      func_0x000107c61434(puVar7);
      puVar11 = puVar7;
      func_0x000100029284(puVar10);
      if (((ulong)puVar11 & 1) == 0) {
        func_0x000107c6142c(param_5);
        uStack_58 = 0;
        puStack_60 = (undefined8 *)0x0;
        lStack_48 = 0;
        uStack_50 = 0;
      }
      else {
        func_0x0001000bb420(param_5[7] + (long)puVar10 * 0x20,&puStack_60);
        func_0x000107c6142c(puVar7);
        puVar7 = param_5;
      }
      func_0x000107c6142c(puVar7);
      if (lStack_48 == 0) goto LAB_102c884b0;
      puVar9 = &uStack_68;
      func_0x000107c6147c(puVar9,&puStack_60,PTR___sypN_11034f1a8 + 8,PTR___sSbN_11034dd40,6);
      if ((int)puVar9 != 0) goto LAB_102c884bc;
    }
    uStack_68 = 0;
LAB_102c884bc:
    param_1[3] = (long)&UNK_1105bbc60;
    param_1[4] = (long)&PTR_DAT_1105bbb18;
    *param_1 = (long)ppuVar17;
    *(undefined1 *)(param_1 + 1) = uStack_68;
    return;
  }
  if ((param_5 == (undefined8 *)0x0) || (func_0x000103bba248(), param_5[2] == 0)) {
    uStack_58 = 0;
    puStack_60 = (undefined8 *)0x0;
    lStack_48 = 0;
    uStack_50 = 0;
LAB_102c88088:
    func_0x00010006e7f4(&puStack_60);
  }
  else {
    lVar14 = *plVar2;
    uVar1 = plVar2[1];
    func_0x000107c61434(uVar1);
    func_0x000107c61434(param_5);
    uVar12 = uVar1;
    func_0x000100029284(lVar14);
    if ((uVar12 & 1) == 0) {
      func_0x000107c6142c(param_5);
      uStack_58 = 0;
      puStack_60 = (undefined8 *)0x0;
      lStack_48 = 0;
      uStack_50 = 0;
      func_0x000107c6142c(uVar1);
      goto LAB_102c88088;
    }
    func_0x0001000bb420(param_5[7] + lVar14 * 0x20,&puStack_60);
    func_0x000107c6142c(uVar1);
    func_0x000107c6142c(param_5);
    if (lStack_48 == 0) goto LAB_102c88088;
    uVar3 = 0;
    func_0x0001002ed07c(0);
    puVar9 = &uStack_68;
    func_0x000107c6147c(puVar9,&puStack_60,PTR___sypN_11034f1a8 + 8,uVar3,6);
    if (((ulong)puVar9 & 1) != 0) {
      lVar14 = CONCAT71(uStack_67,uStack_68);
      func_0x000107c49820();
      func_0x000107c61170(CONCAT71(uStack_67,uStack_68));
      if (lVar14 == 1) {
        lVar14 = 1;
        goto LAB_102c88094;
      }
    }
  }
  lVar14 = 0;
LAB_102c88094:
  param_1[3] = (long)&UNK_1105bbb80;
  param_1[4] = (long)&PTR_DAT_1105bbaf8;
  *param_1 = lVar14;
  return;
}



/* Entry: 102c886b8; end: 102c88773; -[_TtC24AdPlaybackImplementation26AdOperaPlayerEventListener operaViewDidSendEvent:page:params:] */

/* WARNING: Possible PIC construction at 0x000102c88758: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c8875c) */

void FUN_102c886b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_3);
  if (param_5 != 0) {
    func_0x000107c5f9e8(param_5,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,
                        PTR___sSSSHsWP_11034da90);
  }
  uVar1 = param_4;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_102c87e2c(param_3,param_2,param_4,param_5);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 102c88774; end: 102c887bb;  */

undefined8 FUN_102c88774(ulong param_1)

{
  code *pcVar1;
  ulong uStack_18;
  
  if (param_1 < 0x15) {
    return *(undefined8 *)(&UNK_10db3af60 + param_1 * 8);
  }
  uStack_18 = param_1;
  func_0x000107c60614(&UNK_11076f038,&uStack_18,&UNK_11076f038,PTR___sSuN_11034e220);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102c887bc);
  (*pcVar1)();
}



/* Entry: 102c887bc; end: 102c88993;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102c887bc(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_113078b60);
  uVar2 = *(undefined8 *)(param_3 + _DAT_112f0dfa8);
  uVar3 = *(undefined8 *)(param_4 + _DAT_11304a478);
  FUN_102c87e0c(0);
  func_0x000107c610f8();
  func_0x000107c615f0(uVar1);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar3);
  FUN_102c87c0c(uVar1,uVar2,uVar3);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 102c88994; end: 102c889f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c88994(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112f07e10);
  uVar1 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112f07e28);
  func_0x000107c5fc48(uVar1,PTR___sSSN_11034da80);
  func_0x000107c3d744(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 102c889f8; end: 102c88a43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102c889f8(void)

{
  long unaff_x20;
  
  func_0x000107c4ff64(*(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112f07e10));
  return 0;
}



/* Entry: 102c88a44; end: 102c88aab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c88a44(void)

{
  undefined8 uVar1;
  long *unaff_x20;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(*(long *)(*unaff_x20 + 0x10) + _DAT_112f07e10);
  uVar1 = *(undefined8 *)(*(long *)(*unaff_x20 + 0x10) + _DAT_112f07e28);
  func_0x000107c5fc48(uVar1,PTR___sSSN_11034da80);
  func_0x000107c3d744(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 102c88aac; end: 102c88af7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102c88aac(void)

{
  long *unaff_x20;
  
  func_0x000107c4ff64(*(undefined8 *)(*(long *)(*unaff_x20 + 0x10) + _DAT_112f07e10));
  return 0;
}



/* Entry: 102c88af8; end: 102c89327;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c88af8(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  char *pcVar13;
  long *plVar14;
  undefined8 uVar15;
  long unaff_x20;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  code *pcVar19;
  long lStack_70;
  long lStack_68;
  
  func_0x000107c613fc();
  uVar3 = *(undefined8 *)(param_1 + _DAT_113068e80);
  uVar4 = ((undefined8 *)(param_1 + _DAT_113068e80))[1];
  uVar16 = *(undefined8 *)(param_1 + _DAT_113068e88);
  func_0x0001000285a8(0x112d53a88,&UNK_10d91a690);
  func_0x000107c61434(uVar4);
  func_0x000107c615f0(uVar16);
  uVar5 = param_3;
  func_0x000107c4d80c();
  func_0x000107c61180();
  uVar6 = uVar5;
  func_0x0001000bda74();
  func_0x000107c61170(uVar5);
  uVar17 = *(undefined8 *)(param_1 + _DAT_113068ea0);
  lVar1 = param_1 + _DAT_113068e98;
  uVar5 = *(undefined8 *)(lVar1 + 0x18);
  lVar11 = *(long *)(lVar1 + 0x20);
  func_0x0001000a8868(lVar1,uVar5);
  pcVar19 = *(code **)(lVar11 + 0x28);
  func_0x000107c615f0(uVar17);
  (*pcVar19)(uVar5,lVar11);
  func_0x0001000285a8(0x112f07f00,&UNK_10db3b058);
  uVar7 = param_4;
  func_0x000107c44588();
  func_0x000107c61180();
  uVar8 = uVar7;
  func_0x0001000bda74();
  func_0x000107c61170(uVar7);
  func_0x0001000285a8(0x112d3b7c0,&UNK_10d904cb0);
  uVar7 = param_6;
  func_0x000107c5dbd4();
  func_0x000107c61180();
  uVar9 = uVar7;
  func_0x0001000bda74();
  func_0x000107c61170(uVar7);
  uVar15 = *(undefined8 *)(param_2 + _DAT_113083f78);
  func_0x0001000285a8(0x112d39420,&UNK_10d979900);
  uVar18 = *(undefined8 *)(param_7 + _DAT_113083868);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar7 = uVar18;
  func_0x0001000bda74();
  func_0x000107c61170(uVar18);
  lVar10 = 0;
  FUN_102c8c18c();
  lVar11 = lVar10;
  func_0x000107c610f8();
  lVar1 = _DAT_112f07fd0;
  uVar18 = 0;
  func_0x0001005f60b4();
  func_0x000107c613fc();
  func_0x0001005f60d4();
  *(undefined8 *)(lVar11 + lVar1) = uVar18;
  lVar1 = _DAT_112f07fd8;
  puVar12 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar11 + lVar1) = puVar12;
  *(undefined8 *)(lVar11 + _DAT_112f08000) = 0;
  lVar1 = _DAT_112f08008;
  pcVar13 = "AdReminderWorkflow";
  func_0x0001000c10c0();
  func_0x000107c61180();
  *(char **)(lVar11 + lVar1) = pcVar13;
  *(undefined1 *)(lVar11 + _DAT_112f08018) = 0;
  puVar2 = (undefined8 *)(lVar11 + _DAT_112f07fa8);
  *puVar2 = uVar3;
  puVar2[1] = uVar4;
  *(undefined8 *)(lVar11 + _DAT_112f07fb0) = uVar16;
  *(undefined8 *)(lVar11 + _DAT_112f07fb8) = uVar6;
  *(undefined8 *)(lVar11 + _DAT_112f07fc0) = uVar17;
  *(undefined8 *)(lVar11 + _DAT_112f07fc8) = uVar5;
  *(undefined8 *)(lVar11 + _DAT_112f07fe0) = uVar8;
  *(undefined8 *)(lVar11 + _DAT_112f07fe8) = param_5;
  *(undefined8 *)(lVar11 + _DAT_112f07ff0) = uVar9;
  *(undefined8 *)(lVar11 + _DAT_112f07ff8) = uVar15;
  *(undefined8 *)(lVar11 + _DAT_112f08010) = uVar7;
  puVar12 = PTR_s_init_1125d9248;
  lStack_70 = lVar11;
  lStack_68 = lVar10;
  func_0x000107c615f0();
  func_0x000107c615f0(uVar17);
  func_0x000107c61174();
  func_0x000107c6157c(uVar6);
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(uVar8);
  func_0x000107c61174();
  func_0x000107c6157c(uVar9);
  func_0x000107c6157c(uVar7);
  plVar14 = &lStack_70;
  func_0x000107c61154(plVar14,puVar12);
  func_0x000107c615e8(uVar16);
  func_0x000107c61574(uVar6);
  func_0x000107c615e8(uVar17);
  func_0x000107c61574(uVar5);
  func_0x000107c61574(uVar8);
  func_0x000107c61170(param_5);
  func_0x000107c61574(uVar9);
  func_0x000107c61170(uVar15);
  func_0x000107c61574(uVar7);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_6);
  *(long **)(unaff_x20 + 0x10) = plVar14;
  return;
}



/* Entry: 102c89328; end: 102c893df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c89328(void)

{
  undefined *puVar1;
  code *pcVar2;
  code *pcVar3;
  undefined *puVar4;
  long lVar5;
  long unaff_x20;
  long *plVar6;
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  plVar6 = *(long **)(lVar5 + _DAT_112f07fc8);
  if (plVar6 != (long *)0x0) {
    puVar1 = &UNK_1105bae90;
    func_0x000107c613fc(&UNK_1105bae90,0x18,7);
    func_0x000107c61614(puVar1 + 0x10,lVar5);
    pcVar2 = FUN_102c894a8;
    puVar4 = puVar1;
    (**(code **)(*plVar6 + 0x60))(FUN_102c894a8);
    func_0x000107c61574(puVar1);
    pcVar3 = pcVar2;
    func_0x000107c614f0(pcVar2);
    (**(code **)(puVar4 + 0x18))(*(undefined8 *)(lVar5 + _DAT_112f07fd0),pcVar3,puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(pcVar2);
    return;
  }
  return;
}



/* Entry: 102c893e0; end: 102c8941f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102c893e0(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000100c82230();
  func_0x000107c42194(*(undefined8 *)(lVar1 + _DAT_112f07fd8));
  return 0;
}



/* Entry: 102c89420; end: 102c89443;  */

void FUN_102c89420(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102c89444; end: 102c894a7;  */

void FUN_102c89444(void)

{
  FUN_102c89328();
  return;
}



/* Entry: 102c894a8; end: 102c894af;  */

void FUN_102c894a8(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  uVar2 = *param_1;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_102c8952c(uVar2);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 102c894b0; end: 102c894cf;  */

void FUN_102c894b0(void)

{
  func_0x000107c61168(&PTR_PTR_112f07f48);
  return;
}



/* Entry: 102c894d0; end: 102c8952b;  */

void FUN_102c894d0(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  uVar1 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    FUN_102c8952c(uVar1);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 102c8952c; end: 102c8a19f;  */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c8952c(long param_1,undefined8 param_2)

{
  char *pcVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  long extraout_x8;
  long lVar12;
  long unaff_x20;
  undefined8 *puVar13;
  undefined *puVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long alStack_70 [2];
  
  lVar5 = 0;
  func_0x000104750be8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  lVar4 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar13 = (undefined8 *)((long)alStack_70 + lVar4);
  lVar6 = *(long *)(param_1 + _DAT_11308c3a0);
  func_0x000107c30bc4();
  if (lVar6 != 0) {
    return;
  }
  if ((*(byte *)(unaff_x20 + _DAT_112f08018) & 1) == 0) {
    puVar14 = *(undefined **)(param_1 + _DAT_11308c398);
    puVar8 = puVar14;
    func_0x000107c30ae8();
    func_0x000107c61180();
    if (puVar8 != (undefined *)0x0) {
      lVar6 = *(long *)(unaff_x20 + _DAT_112f07fb0);
      func_0x000107c3d368();
      func_0x000107c61180();
      func_0x000107c61170();
      if (lVar6 != 0) {
        func_0x0001041f3970();
        func_0x000107c61170(lVar6);
        lVar12 = _DAT_113068f48;
        lVar6 = _DAT_113068f40;
        if (puVar8 != (undefined *)0x0) {
          if (*(long *)(*(long *)(puVar8 + _DAT_113068f40) + _DAT_11308f138 + 8) != 0) {
            lVar9 = *(long *)(puVar8 + _DAT_113068f48);
            func_0x000107c3ec40();
            func_0x000107c61180();
            if (lVar9 != 0) {
              lVar15 = *(long *)(lVar9 + _DAT_113091020);
              lVar10 = lVar15;
              func_0x000107c61174();
              func_0x000107c61170(lVar9);
              if (lVar15 != 0) {
                if (((*(long *)(*(long *)(puVar8 + lVar12) + _DAT_11308f208) == 0) ||
                    (lVar12 = *(long *)(*(long *)(*(long *)(puVar8 + lVar12) + _DAT_11308f208) +
                                       _DAT_113091070), lVar12 == 0)) ||
                   (lVar12 = *(long *)(lVar12 + _DAT_113091020), lVar12 == 0)) {
LAB_102c898cc:
                  alStack_70[0] = 0;
                  param_2 = 0;
                }
                else {
                  lVar12 = *(long *)(lVar12 + _DAT_113090ca8);
                  func_0x000107c44fc0();
                  func_0x000107c61180();
                  if (lVar12 == 0) goto LAB_102c898cc;
                  lVar9 = lVar12;
                  func_0x000107c5faec();
                  alStack_70[0] = lVar9;
                  func_0x000107c61170(lVar12);
                }
                uVar16 = *(undefined8 *)(puVar8 + lVar6);
                puVar2 = (undefined8 *)(lVar10 + _DAT_113090c98);
                uVar7 = puVar2[1];
                uVar17 = *puVar2;
                *(undefined8 *)((long)alStack_70 + lVar4 + 8U) = puVar2[1];
                *puVar13 = uVar17;
                *(undefined8 *)(&stack0xffffffffffffffa0 + lVar4) =
                     *(undefined8 *)(lVar10 + _DAT_113090ca0);
                uVar17 = *(undefined8 *)(lVar10 + _DAT_113090ca8);
                iVar3 = *(int *)(lVar5 + 0x18);
                func_0x000107c61434(uVar7);
                func_0x000107c61174(uVar17);
                func_0x000107c61174();
                func_0x000104819444((long)puVar13 + (long)iVar3,uVar17);
                uVar7 = *(undefined8 *)(lVar10 + _DAT_113090cb0);
                uVar17 = ((undefined8 *)(lVar10 + _DAT_113090cb0))[1];
                func_0x00010006c00c(uVar7,uVar17);
                func_0x000107c61170(lVar10);
                puVar2 = (undefined8 *)((long)puVar13 + (long)*(int *)(lVar5 + 0x1c));
                *puVar2 = uVar7;
                puVar2[1] = uVar17;
                func_0x000107c30afc(puVar14);
                func_0x000102c899ac(alStack_70[0],param_2,uVar16,puVar13,puVar14);
                func_0x000107c61170(lVar10);
                func_0x000107c6142c(param_2);
                FUN_102c8c1ac(puVar13);
                goto LAB_102c897e4;
              }
            }
          }
          puVar14 = PTR_PTR_1126ac1a0;
          func_0x000107c610f8(PTR_PTR_1126ac1a0);
          func_0x000107c453e4();
          uVar7 = 0xd000000000000016;
          func_0x000107c5fadc(0xd000000000000016,0x800000010f105150);
          func_0x000107c5466c(puVar14);
          func_0x000107c61170(uVar7);
          func_0x000107c522e0(puVar14);
          func_0x000107c58f88(puVar14);
          func_0x000107c53a00(puVar14);
          func_0x0001000d224c(alStack_70 + 1);
          if (alStack_70[1] != 0) {
            puVar11 = puVar14;
            func_0x000107c61174(puVar14);
            func_0x000107c4bfb0(alStack_70[1]);
            func_0x000107c615e8(alStack_70[1]);
            func_0x000107c61170(puVar11);
          }
          func_0x000107c61170(puVar14);
          goto LAB_102c897e4;
        }
      }
    }
    pcVar1 = "fail_to_process_event";
    puVar8 = PTR_PTR_1126ac1a0;
    func_0x000107c610f8(PTR_PTR_1126ac1a0);
    func_0x000107c453e4();
    uVar7 = 0xd000000000000015;
  }
  else {
    pcVar1 = "already_in_flight";
    puVar8 = PTR_PTR_1126ac1a0;
    func_0x000107c610f8(PTR_PTR_1126ac1a0);
    func_0x000107c453e4();
    uVar7 = 0xd000000000000011;
  }
  func_0x000107c5fadc(uVar7,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000107c5466c(puVar8);
  func_0x000107c61170(uVar7);
  func_0x000107c522e0(puVar8);
  func_0x000107c58f88(puVar8);
  func_0x000107c53a00(puVar8);
  func_0x0001000d224c(alStack_70 + 1);
  if (alStack_70[1] != 0) {
    func_0x000107c4bfb0(alStack_70[1]);
    func_0x000107c615e8(alStack_70[1]);
  }
LAB_102c897e4:
  func_0x000107c61170(puVar8);
  return;
}



/* Entry: 102c8a1a0; end: 102c8a617;  */

/* WARNING: Removing unreachable block (ram,0x000102c8a304) */
/* WARNING: Removing unreachable block (ram,0x000102c8a364) */
/* WARNING: Removing unreachable block (ram,0x000102c8a374) */
/* WARNING: Removing unreachable block (ram,0x000102c8a3c4) */
/* WARNING: Removing unreachable block (ram,0x000102c8a390) */
/* WARNING: Removing unreachable block (ram,0x000102c8a3c8) */
/* WARNING: Removing unreachable block (ram,0x000102c8a43c) */
/* WARNING: Removing unreachable block (ram,0x000102c8a408) */
/* WARNING: Removing unreachable block (ram,0x000102c8a444) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_102c8a1a0(double param_1,undefined8 param_2,long param_3,long param_4,undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long lVar11;
  undefined *puVar12;
  long lVar13;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar14;
  double dVar15;
  
  lVar3 = 0;
  func_0x000107c5eea4();
  lVar13 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  puVar14 = &stack0xffffffffffffff60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar4 = PTR_PTR_1126ac1a8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  if (param_3 == 0) {
    param_2 = 0;
  }
  else {
    func_0x000107c5fadc(param_2,param_3);
  }
  func_0x000107c55200();
  func_0x000107c61170(param_2);
  puVar5 = PTR_PTR_1126ac1b0;
  func_0x000107c610f8(PTR_PTR_1126ac1b0);
  func_0x000107c453e4();
  uVar9 = *(undefined8 *)(param_4 + _DAT_11308f138);
  lVar6 = ((undefined8 *)(param_4 + _DAT_11308f138))[1];
  if (lVar6 == 0) {
    uVar9 = 0;
  }
  else {
    func_0x000107c5fadc(uVar9,lVar6);
  }
  func_0x000107c522e0(puVar5);
  func_0x000107c61170(uVar9);
  lVar6 = 0;
  func_0x000104750be8();
  puVar1 = (undefined8 *)((long)param_5 + (long)*(int *)(lVar6 + 0x1c));
  uVar9 = *puVar1;
  uVar2 = puVar1[1];
  func_0x000107c610f8(PTR_PTR_1126daf80);
  func_0x00010006c00c(uVar9,uVar2);
  uVar7 = uVar9;
  FUN_102c8c348(uVar9,uVar2);
  func_0x00010006c090(uVar9,uVar2);
  func_0x000107c52e28(puVar5);
  func_0x000107c61170(uVar7);
  func_0x000107c52394(puVar5);
  puVar8 = PTR_PTR_1126ac1b8;
  func_0x000107c610f8(PTR_PTR_1126ac1b8);
  func_0x000107c453e4();
  lVar6 = param_5[1];
  if (lVar6 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = *param_5;
    func_0x000107c5fadc(uVar9);
  }
  func_0x000107c56954(puVar8);
  func_0x000107c61170(uVar9);
  func_0x00010403f764();
  if (param_1 <= 0.0) {
    param_1 = (double)param_5[2];
  }
  else {
    func_0x000107c5eea0(puVar14);
    func_0x000107c5ee8c();
    lVar6 = lVar3;
    dVar15 = param_1;
    (**(code **)(lVar13 + 8))(puVar14,lVar3);
    func_0x00010403f764();
    param_1 = param_1 + dVar15;
  }
  puVar10 = PTR_PTR_1126b0458;
  func_0x000107c610f8(PTR_PTR_1126b0458);
  func_0x000107c48cfc(param_1);
  func_0x000107c597e4(puVar8);
  func_0x000107c61170(puVar10);
  lVar11 = *(long *)(unaff_x20 + _DAT_112f07ff8);
  func_0x000107c5d984();
  func_0x000107c61180();
  if (lVar11 == 0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(lVar6);
  }
  func_0x000107c53af8(puVar8);
  func_0x000107c61170(lVar11);
  func_0x000107c539fc(puVar8);
  puVar10 = PTR_PTR_1126ac1c0;
  func_0x000107c610f8(PTR_PTR_1126ac1c0);
  func_0x000107c453e4();
  func_0x000107c5eea0(puVar14);
  func_0x000107c5ee8c();
  (**(code **)(lVar13 + 8))(puVar14,lVar3);
  puVar12 = PTR_PTR_1126b0458;
  func_0x000107c610f8(PTR_PTR_1126b0458);
  func_0x000107c48cfc(param_1);
  func_0x000107c53a94(puVar10);
  func_0x000107c61170(puVar12);
  func_0x000107c53a04(puVar10);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar8);
  return puVar10;
}



/* Entry: 102c8a618; end: 102c8a92f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c8a618(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long in_stack_00000000;
  undefined8 in_stack_00000010;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_78,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 == 0) {
    return;
  }
  if (param_1 == 0) {
    uVar10 = *(undefined8 *)(in_stack_00000000 + _DAT_11308f138);
    lVar1 = ((undefined8 *)(in_stack_00000000 + _DAT_11308f138))[1];
    uVar9 = *(undefined8 *)(in_stack_00000000 + _DAT_11308f140);
    lVar2 = ((undefined8 *)(in_stack_00000000 + _DAT_11308f140))[1];
    puVar6 = PTR_PTR_1126ac1a0;
    func_0x000107c610f8(PTR_PTR_1126ac1a0);
    func_0x000107c453e4();
    uVar7 = 0xd000000000000014;
    func_0x000107c5fadc(0xd000000000000014,0x800000010f1051d0);
    func_0x000107c5466c(puVar6);
    func_0x000107c61170(uVar7);
    if (lVar1 == 0) {
      uVar10 = 0;
    }
    else {
      func_0x000107c5fadc(uVar10,lVar1);
    }
    func_0x000107c522e0(puVar6);
    func_0x000107c61170(uVar10);
    if (lVar2 == 0) {
      uVar9 = 0;
    }
    else {
      func_0x000107c5fadc(uVar9,lVar2);
    }
    func_0x000107c58f88(puVar6);
    func_0x000107c61170(uVar9);
    func_0x000107c53a00(puVar6);
    func_0x0001000d224c(&puStack_a8);
    puVar3 = puStack_a8;
    if (puStack_a8 == (undefined *)0x0) goto LAB_102c8a900;
    puVar8 = puVar6;
    func_0x000107c61174(puVar6);
    func_0x000107c4bfb0(puVar3);
    func_0x000107c615e8(puVar3);
  }
  else {
    *(undefined1 *)(param_2 + _DAT_112f08018) = 1;
    puVar3 = PTR_PTR_1126dedc0;
    func_0x000107c61168(PTR_PTR_1126dedc0);
    func_0x000107c615f0(param_1);
    func_0x000107c43be4(puVar3);
    func_0x000107c61180();
    func_0x000107c5ee20(param_3,param_4);
    puVar8 = puVar3;
    func_0x000107c40928(puVar3);
    func_0x000107c61180();
    func_0x000107c61170(param_3);
    puVar4 = puVar8;
    func_0x000107c5cb30(puVar8);
    func_0x000107c61180();
    puVar6 = &UNK_1105baf50;
    func_0x000107c613fc(&UNK_1105baf50,0x28,7);
    *(long *)(puVar6 + 0x10) = param_2;
    *(undefined8 *)(puVar6 + 0x18) = in_stack_00000010;
    *(long *)(puVar6 + 0x20) = in_stack_00000000;
    uStack_88 = 0x102c8c300;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0x42000000;
    puStack_98 = &UNK_100f152a0;
    puStack_90 = &UNK_1105baf68;
    ppuVar5 = &puStack_a8;
    puStack_80 = puVar6;
    func_0x000107c60bc4(ppuVar5);
    puVar6 = puStack_80;
    func_0x000107c61174();
    func_0x000107c61174(in_stack_00000000);
    func_0x000107c61574(puVar6);
    puVar6 = puVar4;
    func_0x000107c5c320(puVar4);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c61170(puVar4);
    func_0x000107c3e924(puVar6);
    func_0x000107c615e8(param_1);
    func_0x000107c61170(puVar3);
  }
  func_0x000107c61170(puVar8);
LAB_102c8a900:
  func_0x000107c61170(puVar6);
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 102c8a930; end: 102c8ab9f;  */

void FUN_102c8a930(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  ppuVar5 = &puStack_a0;
  ppuVar8 = &puStack_a0;
  puVar6 = &UNK_1105baed8;
  puVar3 = puVar6;
  func_0x000107c613fc(&UNK_1105baed8,0x18,7);
  func_0x000107c61614(puVar3 + 0x10,param_2);
  puVar4 = &UNK_1105bafa0;
  func_0x000107c613fc(&UNK_1105bafa0,0x28,7);
  *(undefined **)(puVar4 + 0x10) = puVar3;
  *(undefined8 *)(puVar4 + 0x18) = param_3;
  *(undefined8 *)(puVar4 + 0x20) = param_4;
  puVar3 = &UNK_1105bafc8;
  func_0x000107c613fc(&UNK_1105bafc8,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = 0x102c8c30c;
  *(undefined **)(puVar3 + 0x18) = puVar4;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_80 = FUN_102c8c318;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_100f15b68;
  puStack_88 = &UNK_1105bafe0;
  puStack_78 = puVar3;
  func_0x000107c60bc4(&puStack_a0);
  puVar7 = puStack_78;
  func_0x000107c61174();
  func_0x000107c6157c(puVar3);
  func_0x000107c61574(puVar7);
  func_0x000107c613fc(&UNK_1105baed8,0x18,7);
  func_0x000107c61614(puVar6 + 0x10,param_2);
  puVar7 = &UNK_1105bb018;
  func_0x000107c613fc(&UNK_1105bb018,0x20,7);
  *(undefined **)(puVar7 + 0x10) = puVar6;
  *(undefined8 *)(puVar7 + 0x18) = param_4;
  puVar6 = &UNK_1105bb040;
  func_0x000107c613fc(&UNK_1105bb040,0x20,7);
  *(code **)(puVar6 + 0x10) = FUN_102c8c338;
  *(undefined **)(puVar6 + 0x18) = puVar7;
  pcStack_80 = (code *)0x102c8c340;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_100e27b38;
  puStack_88 = &UNK_1105bb058;
  puStack_78 = puVar6;
  func_0x000107c60bc4(&puStack_a0);
  puVar1 = puStack_78;
  func_0x000107c61174(param_4);
  func_0x000107c6157c(puVar6);
  func_0x000107c61574(puVar1);
  func_0x000107c4c754(param_1);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61574(puVar4);
  puVar4 = puVar3;
  func_0x000107c61544(puVar3,"",0x58,0x118,0x25,1);
  func_0x000107c61574(puVar7);
  func_0x000107c61574(puVar3);
  if (((ulong)puVar4 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102c8ab9c);
    (*pcVar2)();
  }
  puVar4 = puVar6;
  func_0x000107c61544(puVar6,"",0x58,0x11f,0x1d,1);
  func_0x000107c61574(puVar6);
  if (((ulong)puVar4 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102c8aba0);
  (*pcVar2)();
}



/* Entry: 102c8aba0; end: 102c8ac17;  */

void FUN_102c8aba0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    FUN_102c8ac18(param_1,param_3,param_4);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 102c8ac18; end: 102c8b2e3;  */

/* WARNING: Removing unreachable block (ram,0x000102c8ac98) */
/* WARNING: Removing unreachable block (ram,0x000102c8ae60) */
/* WARNING: Removing unreachable block (ram,0x000102c8ad1c) */
/* WARNING: Removing unreachable block (ram,0x000102c8ae64) */
/* WARNING: Removing unreachable block (ram,0x000102c8ae90) */
/* WARNING: Removing unreachable block (ram,0x000102c8ae7c) */
/* WARNING: Removing unreachable block (ram,0x000102c8ae94) */
/* WARNING: Removing unreachable block (ram,0x000102c8af04) */
/* WARNING: Removing unreachable block (ram,0x000102c8aed0) */
/* WARNING: Removing unreachable block (ram,0x000102c8af0c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c8ac18(undefined *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  long unaff_x20;
  undefined8 uVar12;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  
  if (param_1 == (undefined *)0x0) {
    *(undefined1 *)(unaff_x20 + _DAT_112f08018) = 0;
    uVar11 = *(undefined8 *)(param_3 + _DAT_11308f138);
    lVar10 = ((undefined8 *)(param_3 + _DAT_11308f138))[1];
    uVar12 = *(undefined8 *)(param_3 + _DAT_11308f140);
    lVar1 = ((undefined8 *)(param_3 + _DAT_11308f140))[1];
    puVar3 = PTR_PTR_1126ac1a0;
    func_0x000107c610f8(PTR_PTR_1126ac1a0);
    func_0x000107c453e4();
    uVar9 = 0xd000000000000013;
    func_0x000107c5fadc(0xd000000000000013,0x800000010f105210);
    func_0x000107c5466c(puVar3);
    func_0x000107c61170(uVar9);
    if (lVar10 == 0) {
      uVar11 = 0;
    }
    else {
      func_0x000107c5fadc(uVar11,lVar10);
    }
    func_0x000107c522e0(puVar3);
    func_0x000107c61170(uVar11);
    if (lVar1 == 0) {
      uVar12 = 0;
    }
    else {
      func_0x000107c5fadc(uVar12,lVar1);
    }
    func_0x000107c58f88(puVar3);
    func_0x000107c61170(uVar12);
    func_0x000107c53a00(puVar3);
    func_0x0001000d224c(&puStack_98);
    puVar2 = puStack_98;
    if (puStack_98 != (undefined *)0x0) {
      func_0x000107c4bfb0(puStack_98);
      func_0x000107c615e8(puVar2);
    }
  }
  else {
    puVar2 = param_1;
    uVar11 = param_2;
    func_0x000107c61174();
    func_0x000107c5ee30();
    func_0x000107c610f8(PTR_PTR_1126b0b78);
    puVar3 = param_1;
    FUN_102c8c348(param_1,uVar11);
    func_0x00010006c090(param_1);
    puVar4 = puVar3;
    func_0x000107c40830();
    func_0x000107c61180();
    if (puVar4 == (undefined *)0x0) {
      *(undefined1 *)(unaff_x20 + _DAT_112f08018) = 0;
      uVar11 = *(undefined8 *)(param_3 + _DAT_11308f138);
      lVar10 = ((undefined8 *)(param_3 + _DAT_11308f138))[1];
      uVar12 = *(undefined8 *)(param_3 + _DAT_11308f140);
      lVar1 = ((undefined8 *)(param_3 + _DAT_11308f140))[1];
      puVar4 = PTR_PTR_1126ac1a0;
      func_0x000107c610f8(PTR_PTR_1126ac1a0);
      func_0x000107c453e4();
      uVar9 = 0xd000000000000012;
      func_0x000107c5fadc(0xd000000000000012,0x800000010f105250);
      func_0x000107c5466c(puVar4);
      func_0x000107c61170(uVar9);
      if (lVar10 == 0) {
        uVar11 = 0;
      }
      else {
        func_0x000107c5fadc(uVar11,lVar10);
      }
      func_0x000107c522e0(puVar4);
      func_0x000107c61170(uVar11);
      if (lVar1 == 0) {
        uVar12 = 0;
      }
      else {
        func_0x000107c5fadc(uVar12,lVar1);
      }
      func_0x000107c58f88(puVar4);
      func_0x000107c61170(uVar12);
      func_0x000107c53a00(puVar4);
      func_0x0001000d224c(&puStack_98);
      puVar5 = puStack_98;
      if (puStack_98 != (undefined *)0x0) {
        puVar8 = puVar4;
        func_0x000107c61174(puVar4);
        func_0x000107c4bfb0(puVar5);
        func_0x000107c615e8(puVar5);
        func_0x000107c61170(puVar8);
      }
      func_0x000107c61170(puVar4);
    }
    else {
      puVar5 = puVar4;
      func_0x000107c5faec();
      uVar12 = *(undefined8 *)(param_3 + _DAT_11308f138);
      lVar10 = ((undefined8 *)(param_3 + _DAT_11308f138))[1];
      uVar9 = *(undefined8 *)(param_3 + _DAT_11308f140);
      lVar1 = ((undefined8 *)(param_3 + _DAT_11308f140))[1];
      puVar8 = PTR_PTR_1126ac1a0;
      func_0x000107c610f8(PTR_PTR_1126ac1a0);
      func_0x000107c61434(uVar11);
      func_0x000107c453e4(puVar8);
      func_0x000107c5466c();
      if (lVar10 == 0) {
        uVar12 = 0;
      }
      else {
        func_0x000107c5fadc(uVar12,lVar10);
      }
      func_0x000107c522e0(puVar8);
      func_0x000107c61170(uVar12);
      if (lVar1 == 0) {
        uVar9 = 0;
      }
      else {
        func_0x000107c5fadc(uVar9,lVar1);
      }
      func_0x000107c58f88(puVar8);
      func_0x000107c61170(uVar9);
      puVar6 = puVar5;
      func_0x000107c5fadc(puVar5,uVar11);
      func_0x000107c53a00(puVar8);
      func_0x000107c61170(puVar6);
      func_0x0001000d224c(&puStack_98);
      if (puStack_98 != (undefined *)0x0) {
        puVar6 = puVar8;
        func_0x000107c61174(puVar8);
        func_0x000107c4bfb0(puStack_98);
        func_0x000107c615e8(puStack_98);
        func_0x000107c61170(puVar6);
      }
      func_0x000107c61170(puVar8);
      func_0x000107c6142c(uVar11);
      lVar10 = *(long *)(unaff_x20 + _DAT_112f07fc0);
      if (lVar10 != 0) {
        uVar12 = *(undefined8 *)(param_3 + _DAT_11308f130);
        func_0x000107c5fadc(uVar12,((undefined8 *)(param_3 + _DAT_11308f130))[1]);
        func_0x000107c4dce0(lVar10);
        func_0x000107c61170(uVar12);
      }
      func_0x000107c61170(puVar4);
      uVar12 = *(undefined8 *)(unaff_x20 + _DAT_112f08008);
      puVar4 = &UNK_1105baed8;
      func_0x000107c613fc(&UNK_1105baed8,0x18,7);
      func_0x000107c61614(puVar4 + 0x10);
      puVar8 = &UNK_1105bb090;
      func_0x000107c613fc(&UNK_1105bb090,0x38,7);
      *(undefined **)(puVar8 + 0x10) = puVar4;
      *(undefined **)(puVar8 + 0x18) = puVar5;
      *(undefined8 *)(puVar8 + 0x20) = uVar11;
      *(undefined8 *)(puVar8 + 0x28) = param_2;
      *(long *)(puVar8 + 0x30) = param_3;
      pcStack_78 = FUN_102c8c408;
      puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_90 = 0x42000000;
      puStack_88 = &UNK_1000f6b44;
      puStack_80 = &UNK_1105bb0a8;
      ppuVar7 = &puStack_98;
      puStack_70 = puVar8;
      func_0x000107c60bc4(ppuVar7);
      puVar4 = puStack_70;
      func_0x000107c61174(param_3);
      func_0x000107c61574(puVar4);
      func_0x000107c4e524(uVar12);
      func_0x000107c60bd0(ppuVar7);
    }
    func_0x000107c61170(puVar2);
  }
  func_0x000107c61170(puVar3);
  return;
}



/* Entry: 102c8b2e4; end: 102c8b58f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c8b2e4(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lStack_88;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_68,0,0);
  lVar2 = param_2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    *(undefined1 *)(lVar2 + _DAT_112f08018) = 0;
    func_0x000107c61170();
  }
  func_0x000107c61428(param_2 + 0x10,auStack_80,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    uVar7 = *(undefined8 *)(param_3 + _DAT_11308f138);
    lVar2 = ((undefined8 *)(param_3 + _DAT_11308f138))[1];
    uVar6 = *(undefined8 *)(param_3 + _DAT_11308f140);
    lVar1 = ((undefined8 *)(param_3 + _DAT_11308f140))[1];
    puVar3 = PTR_PTR_1126ac1a0;
    func_0x000107c610f8(PTR_PTR_1126ac1a0);
    func_0x000107c453e4();
    uVar4 = 0xd00000000000001f;
    func_0x000107c5fadc(0xd00000000000001f,0x800000010f1051f0);
    func_0x000107c5466c(puVar3);
    func_0x000107c61170(uVar4);
    if (lVar2 == 0) {
      uVar7 = 0;
    }
    else {
      func_0x000107c5fadc(uVar7,lVar2);
    }
    func_0x000107c522e0(puVar3);
    func_0x000107c61170(uVar7);
    if (lVar1 == 0) {
      uVar6 = 0;
    }
    else {
      func_0x000107c5fadc(uVar6,lVar1);
    }
    func_0x000107c58f88(puVar3);
    func_0x000107c61170(uVar6);
    func_0x000107c53a00(puVar3);
    func_0x0001000d224c(&lStack_88);
    if (lStack_88 != 0) {
      puVar5 = puVar3;
      func_0x000107c61174(puVar3);
      func_0x000107c4bfb0(lStack_88);
      func_0x000107c615e8(lStack_88);
      func_0x000107c61170(puVar5);
    }
    func_0x000107c61170(puVar3);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 102c8b590; end: 102c8ba43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c8b590(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  long unaff_x20;
  undefined *puVar14;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  
  puVar4 = PTR_PTR_1126c3378;
  func_0x000107c61168();
  puVar5 = PTR_PTR_1126ae558;
  func_0x000107c61168();
  puVar6 = puVar5;
  FUN_102c8ba44();
  puVar14 = puVar5;
  func_0x000107c451b0(puVar5);
  func_0x000107c61180();
  func_0x000107c61170(puVar6);
  func_0x000107c4a978();
  func_0x000107c61180();
  func_0x000107c61170(puVar14);
  puVar6 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c61168();
  func_0x000107c3ded4();
  func_0x000107c61180();
  func_0x000107c51d5c();
  func_0x000107c61170(puVar6);
  func_0x000107c5d9c4();
  uVar7 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010f105270);
  puVar6 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x000107c61168();
  func_0x000107c450cc();
  func_0x000107c61180();
  func_0x000107c61170(uVar7);
  if (puVar6 == (undefined *)0x0) {
    puVar14 = (undefined *)0x0;
  }
  else {
    puVar14 = puVar6;
    func_0x000107c4507c(puVar6);
    func_0x000107c61180();
    func_0x000107c61170(puVar6);
  }
  func_0x000107c451b0();
  func_0x000107c61180();
  func_0x000107c61170(puVar14);
  puVar6 = PTR_PTR_1126b15a0;
  func_0x000107c61168();
  func_0x000107c3ee70(0x4048000000000000,0x4048000000000000);
  func_0x000107c61180();
  func_0x000107c61170();
  func_0x000107c2bb78();
  func_0x000107c61180();
  if (puVar5 != (undefined *)0x0) {
    puVar8 = PTR_PTR_1126b0ae0;
    func_0x000107c61168();
    puVar9 = puVar8;
    func_0x000107c2bb7c();
    func_0x000107c61180();
    puVar14 = &UNK_1105baed8;
    func_0x000107c613fc(&UNK_1105baed8,0x18,7);
    func_0x000107c61614(puVar14 + 0x10);
    puVar10 = &UNK_1105bb0e0;
    func_0x000107c613fc(&UNK_1105bb0e0,0x50,7);
    *(undefined **)(puVar10 + 0x10) = puVar14;
    *(undefined8 *)(puVar10 + 0x18) = param_1;
    *(undefined8 *)(puVar10 + 0x20) = param_2;
    *(undefined8 *)(puVar10 + 0x28) = param_3;
    *(undefined8 *)(puVar10 + 0x30) = param_4;
    *(undefined8 *)(puVar10 + 0x38) = param_5;
    *(undefined8 *)(puVar10 + 0x40) = param_6;
    *(undefined8 *)(puVar10 + 0x48) = param_7;
    pcStack_88 = (code *)0x102c8c4cc;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0x42000000;
    puStack_98 = &UNK_1000f6b44;
    puStack_90 = &UNK_1105bb0f8;
    ppuVar11 = &puStack_a8;
    puStack_80 = puVar10;
    func_0x000107c60bc4(ppuVar11);
    puVar14 = puStack_80;
    func_0x000107c61434(param_2);
    func_0x000107c61434(param_5);
    func_0x000107c61434(param_7);
    func_0x000107c61574(puVar14);
    puVar14 = &UNK_1105baed8;
    func_0x000107c613fc(&UNK_1105baed8,0x18,7);
    func_0x000107c61614(puVar14 + 0x10);
    puVar10 = &UNK_1105bb130;
    func_0x000107c613fc(&UNK_1105bb130,0x50,7);
    *(undefined **)(puVar10 + 0x10) = puVar14;
    *(undefined8 *)(puVar10 + 0x18) = param_1;
    *(undefined8 *)(puVar10 + 0x20) = param_2;
    *(undefined8 *)(puVar10 + 0x28) = param_3;
    *(undefined8 *)(puVar10 + 0x30) = param_4;
    *(undefined8 *)(puVar10 + 0x38) = param_5;
    *(undefined8 *)(puVar10 + 0x40) = param_6;
    *(undefined8 *)(puVar10 + 0x48) = param_7;
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_88 = FUN_102c8c454;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0x42000000;
    puStack_98 = &UNK_1000f6b44;
    puStack_90 = &UNK_1105bb148;
    ppuVar12 = &puStack_a8;
    puStack_80 = puVar10;
    func_0x000107c60bc4();
    puVar14 = puStack_80;
    func_0x000107c61434(param_2);
    func_0x000107c61434(param_5);
    func_0x000107c61434(param_7);
    func_0x000107c61574(puVar14);
    puVar14 = &UNK_1105baed8;
    func_0x000107c613fc(&UNK_1105baed8,0x18,7);
    func_0x000107c61614(puVar14 + 0x10);
    pcStack_88 = FUN_102c8c47c;
    puStack_a8 = puVar1;
    uStack_a0 = 0x42000000;
    puStack_98 = &UNK_1000f6b44;
    puStack_90 = &UNK_1105bb170;
    ppuVar13 = &puStack_a8;
    puStack_80 = puVar14;
    func_0x000107c60bc4();
    func_0x000107c61574(puStack_80);
    func_0x000107c40b00();
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar13);
    func_0x000107c60bd0(ppuVar12);
    func_0x000107c60bd0(ppuVar11);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar9);
    lVar2 = _DAT_112f08000;
    uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112f08000);
    *(undefined **)(unaff_x20 + _DAT_112f08000) = puVar8;
    func_0x000107c61170(uVar7);
    func_0x0001000d224c(&puStack_a8);
    puVar5 = puStack_a8;
    if (puStack_a8 != (undefined *)0x0) {
      uVar7 = *(undefined8 *)(unaff_x20 + lVar2);
      func_0x000107c61174(uVar7);
      func_0x000107c5c2e0(puVar5);
      func_0x000107c615e8(puVar5);
      func_0x000107c61170(uVar7);
    }
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar6);
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x102c8ba44);
  (*pcVar3)();
}



/* Entry: 102c8ba44; end: 102c8bba7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102c8ba44(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined *puVar6;
  
  puVar6 = *(undefined **)(unaff_x20 + _DAT_112f07fb0);
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112f07fa8);
  uVar1 = ((undefined8 *)(unaff_x20 + _DAT_112f07fa8))[1];
  uVar3 = uVar5;
  func_0x000107c5fadc(uVar5,uVar1);
  puVar4 = puVar6;
  func_0x000107c4ee30();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  if (puVar4 != (undefined *)0x0) {
    uVar3 = *(undefined8 *)(puVar4 + _DAT_1138132f0);
    lVar2 = *(long *)((long)(puVar4 + _DAT_1138132f0) + 8);
    func_0x000107c61434(lVar2);
    func_0x000107c61170(puVar4);
    if (lVar2 != 0) {
      func_0x000107c5fadc(uVar5,uVar1);
      func_0x000107c3d34c();
      func_0x000107c61180();
      func_0x000107c61170(uVar5);
      if (puVar6 != (undefined *)0x0) {
        puVar4 = puVar6;
        func_0x000107c5c734();
        func_0x000107c61180();
        func_0x000107c61170(puVar6);
        if (puVar4 != (undefined *)0x0) {
          func_0x000107c5fadc(uVar3,lVar2);
          func_0x000107c6142c(lVar2);
          puVar6 = puVar4;
          func_0x000107c4508c();
          func_0x000107c61180();
          func_0x000107c61170(uVar3);
          func_0x000107c615e8(puVar4);
          if (puVar6 != (undefined *)0x0) {
            return puVar6;
          }
          goto LAB_102c8bb88;
        }
      }
      func_0x000107c6142c(lVar2);
    }
  }
LAB_102c8bb88:
  puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x000107c610f8(PTR__OBJC_CLASS___UIImage_1126aea68);
                    /* WARNING: Could not recover jumptable at 0x00010bfee210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return puVar4;
}



/* Entry: 102c8bba8; end: 102c8becb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c8bba8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  long extraout_x8;
  long extraout_x8_00;
  long lVar10;
  long lVar11;
  long unaff_x20;
  long lVar12;
  undefined1 *puVar13;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar13 = &stack0xffffffffffffff50 + -extraout_x8;
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar11 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar10 = (long)puVar13 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar12 = *(long *)(unaff_x20 + _DAT_112f07fc0);
  if (lVar12 != 0) {
    func_0x000107c5fadc(param_4,param_5);
    func_0x000107c4dce4(lVar12);
    func_0x000107c61170(param_4);
  }
  puStack_90 = (undefined *)0x0;
  uStack_88 = 0xe000000000000000;
  func_0x000107c602fc(0x34);
  func_0x000107c5fb78(0xd000000000000017,0x800000010f105290);
  func_0x000107c5fb78(param_1,param_2);
  func_0x000107c5fb78(0x3d64695f64613f,0xe700000000000000);
  func_0x000107c5fb78(param_6,param_7);
  func_0x000107c5fb78(0xd000000000000012,0x800000010f1052b0);
  uVar7 = uStack_88;
  func_0x000107c5edd0(puVar13,puStack_90,uStack_88);
  func_0x000107c6142c(uVar7);
  puVar2 = puVar13;
  (**(code **)(lVar11 + 0x30))(puVar13,1,lVar1);
  if ((int)puVar2 == 1) {
    func_0x0001000293e4(puVar13);
  }
  else {
    (**(code **)(lVar11 + 0x20))(lVar10,puVar13,lVar1);
    if (*(long *)(unaff_x20 + _DAT_112f08000) != 0) {
      func_0x000107c4207c();
    }
    puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x000107c61168(PTR__OBJC_CLASS___UIApplication_1126ae590);
    func_0x000107c5a9c4();
    func_0x000107c61180();
    puVar4 = puVar3;
    func_0x000107c5ed90();
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100dfa5c8(PTR___swiftEmptyArrayStorage_11034f1c8);
    uVar6 = 0;
    func_0x000100dfa6ec(0);
    uVar7 = uVar6;
    func_0x000100f33384();
    puVar8 = puVar5;
    func_0x000107c5f9dc(puVar5,uVar6,PTR___sypN_11034f1a8 + 8,uVar7);
    func_0x000107c6142c(puVar5);
    puVar5 = &UNK_1105baed8;
    func_0x000107c613fc(&UNK_1105baed8,0x18,7);
    func_0x000107c61614(puVar5 + 0x10,unaff_x20);
    uStack_70 = 0x102c8c484;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_100ab47f8;
    puStack_78 = &UNK_1105bb198;
    ppuVar9 = &puStack_90;
    puStack_68 = puVar5;
    func_0x000107c60bc4(ppuVar9);
    func_0x000107c61574(puStack_68);
    func_0x000107c4de70(puVar3);
    func_0x000107c60bd0(ppuVar9);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar8);
    (**(code **)(lVar11 + 8))(lVar10,lVar1);
  }
  return;
}



/* Entry: 102c8becc; end: 102c8bf73;  */

void FUN_102c8becc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_68,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_102c8bba8(param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 102c8bf74; end: 102c8c02f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c8bf74(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    *(undefined1 *)(param_1 + _DAT_112f08018) = 0;
    func_0x000107c61170();
  }
  return;
}



/* Entry: 102c8c030; end: 102c8c08f; -[SCAdReminderWorkflow init] */

void FUN_102c8c030(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdPlaybackImplementation.AdReminderWorkflow",0x2b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102c8c05c);
  (*pcVar1)();
}



/* Entry: 102c8c090; end: 102c8c18b; -[SCAdReminderWorkflow .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102c8c0d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c8c0f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c8c120: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c8c140: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c8c124) */
/* WARNING: Removing unreachable block (ram,0x000102c8c0f4) */
/* WARNING: Removing unreachable block (ram,0x000102c8c0d4) */
/* WARNING: Removing unreachable block (ram,0x000102c8c144) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c8c090(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112f07fa8 + 8));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f07fb0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f07fb8));
  return;
}



/* Entry: 102c8c18c; end: 102c8c1ab;  */

void FUN_102c8c18c(void)

{
  func_0x000107c61168(&PTR_PTR_11289b280);
  return;
}



/* Entry: 102c8c1ac; end: 102c8c2e3;  */

undefined8 FUN_102c8c1ac(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000104750be8();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 102c8c2e4; end: 102c8c317;  */

void FUN_102c8c2e4(long param_1,long param_2)

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



/* Entry: 102c8c318; end: 102c8c337;  */

void FUN_102c8c318(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 102c8c338; end: 102c8c347;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c8c338(void)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined8 uVar9;
  long lStack_88;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar4 + 0x10,auStack_68,0,0);
  lVar3 = lVar4 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    *(undefined1 *)(lVar3 + _DAT_112f08018) = 0;
    func_0x000107c61170();
  }
  func_0x000107c61428(lVar4 + 0x10,auStack_80,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61618();
  if (lVar4 != 0) {
    puVar1 = (undefined8 *)(lVar2 + _DAT_11308f138);
    uVar9 = *puVar1;
    lVar3 = puVar1[1];
    puVar1 = (undefined8 *)(lVar2 + _DAT_11308f140);
    uVar8 = *puVar1;
    lVar2 = puVar1[1];
    puVar5 = PTR_PTR_1126ac1a0;
    func_0x000107c610f8(PTR_PTR_1126ac1a0);
    func_0x000107c453e4();
    uVar6 = 0xd00000000000001f;
    func_0x000107c5fadc(0xd00000000000001f,0x800000010f1051f0);
    func_0x000107c5466c(puVar5);
    func_0x000107c61170(uVar6);
    if (lVar3 == 0) {
      uVar9 = 0;
    }
    else {
      func_0x000107c5fadc(uVar9,lVar3);
    }
    func_0x000107c522e0(puVar5);
    func_0x000107c61170(uVar9);
    if (lVar2 == 0) {
      uVar8 = 0;
    }
    else {
      func_0x000107c5fadc(uVar8,lVar2);
    }
    func_0x000107c58f88(puVar5);
    func_0x000107c61170(uVar8);
    func_0x000107c53a00(puVar5);
    func_0x0001000d224c(&lStack_88);
    if (lStack_88 != 0) {
      puVar7 = puVar5;
      func_0x000107c61174(puVar5);
      func_0x000107c4bfb0(lStack_88);
      func_0x000107c615e8(lStack_88);
      func_0x000107c61170(puVar7);
    }
    func_0x000107c61170(puVar5);
    func_0x000107c61170(lVar4);
  }
  return;
}



/* Entry: 102c8c348; end: 102c8c407;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102c8c348(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long unaff_x20;
  undefined8 uVar10;
  undefined1 auStack_a8 [24];
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c5ee20();
  func_0x000107c4636c();
  func_0x000107c61170(param_1);
  uVar7 = 0;
  if (unaff_x20 == 0) {
    func_0x000107c61174();
    func_0x000107c5ed30();
    func_0x000107c61170(uVar7);
    func_0x000107c61654();
  }
  else {
    func_0x000107c61174();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return unaff_x20;
  }
  func_0x000107c60e78();
  lVar9 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar8 = *(long *)(unaff_x20 + 0x30);
  func_0x000107c61428(lVar9 + 0x10,auStack_a8,0,0);
  lVar9 = lVar9 + 0x10;
  func_0x000107c61618();
  lVar6 = 0;
  if (lVar9 != 0) {
    puVar1 = (undefined8 *)(lVar8 + _DAT_11308f130);
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    puVar1 = (undefined8 *)(lVar8 + _DAT_11308f138);
    lVar6 = puVar1[1];
    if (lVar6 == 0) {
      uVar10 = 0;
      lVar6 = -0x2000000000000000;
    }
    else {
      uVar10 = *puVar1;
    }
    func_0x000107c61434();
    FUN_102c8b590(uVar4,uVar7,uVar5,uVar2,uVar3,uVar10,lVar6);
    func_0x000107c61170(lVar9);
    func_0x000107c6142c(lVar6);
  }
  return lVar6;
}



/* Entry: 102c8c408; end: 102c8c417;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c8c408(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined1 auStack_68 [24];
  
  lVar7 = *(long *)(unaff_x20 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar8 = *(long *)(unaff_x20 + 0x30);
  func_0x000107c61428(lVar7 + 0x10,auStack_68,0,0);
  lVar7 = lVar7 + 0x10;
  func_0x000107c61618();
  if (lVar7 != 0) {
    puVar1 = (undefined8 *)(lVar8 + _DAT_11308f130);
    uVar2 = *puVar1;
    uVar4 = puVar1[1];
    puVar1 = (undefined8 *)(lVar8 + _DAT_11308f138);
    lVar8 = puVar1[1];
    if (lVar8 == 0) {
      uVar9 = 0;
      lVar8 = -0x2000000000000000;
    }
    else {
      uVar9 = *puVar1;
    }
    func_0x000107c61434();
    FUN_102c8b590(uVar5,uVar3,uVar6,uVar2,uVar4,uVar9,lVar8);
    func_0x000107c61170(lVar7);
    func_0x000107c6142c(lVar8);
  }
  return;
}



/* Entry: 102c8c418; end: 102c8c453;  */

void FUN_102c8c418(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102c8c454; end: 102c8c457;  */

void FUN_102c8c454(void)

{
  long unaff_x20;
  
  FUN_102c8becc(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48));
  return;
}



/* Entry: 102c8c458; end: 102c8c47b;  */

void FUN_102c8c458(void)

{
  long unaff_x20;
  
  FUN_102c8becc(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48));
  return;
}



/* Entry: 102c8c47c; end: 102c8c4cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c8c47c(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + _DAT_112f08018) = 0;
    func_0x000107c61170();
  }
  return;
}



/* Entry: 102c8c4d0; end: 102c8c533;  */

void FUN_102c8c4d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  return;
}



/* Entry: 102c8c534; end: 102c8c6eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c8c534(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *pcVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined8 uVar10;
  long lStack_70;
  long lStack_68;
  
  plVar8 = &lStack_70;
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c4d374();
  func_0x000107c61180();
  uVar9 = 0x112d6eab0;
  func_0x0001000285a8(0x112d6eab0,&UNK_10d930880);
  func_0x00010451338c();
  uVar4 = uVar9;
  func_0x0001000bda74();
  func_0x000107c61170(uVar9);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x38);
  pcVar5 = "begin()";
  func_0x0001000c10c0();
  func_0x000107c61180();
  lVar6 = 0;
  FUN_102c8c988();
  lVar7 = lVar6;
  func_0x000107c610f8();
  func_0x000107c61614(lVar7 + _DAT_112f08110,0);
  *(undefined8 *)(lVar7 + _DAT_112f08148) = 0;
  func_0x000107c61614(lVar7 + _DAT_112f08150,0);
  *(undefined1 *)(lVar7 + _DAT_112f08158) = 0;
  *(undefined1 *)(lVar7 + _DAT_112f08160) = 0;
  *(undefined8 *)(lVar7 + _DAT_112f08118) = uVar3;
  *(undefined8 *)(lVar7 + _DAT_112f08120) = uVar4;
  *(undefined8 *)(lVar7 + _DAT_112f08128) = uVar9;
  *(undefined8 *)(lVar7 + _DAT_112f08130) = uVar1;
  *(undefined8 *)(lVar7 + _DAT_112f08138) = uVar10;
  *(char **)(lVar7 + _DAT_112f08140) = pcVar5;
  puVar2 = PTR_s_init_1125d9248;
  lStack_70 = lVar7;
  lStack_68 = lVar6;
  func_0x000107c61174(uVar9);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar10);
  func_0x000107c61154(&lStack_70,puVar2);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c4e9e4(uVar9);
  func_0x000107c61180();
  func_0x000107c4fba8();
  func_0x000107c61170(plVar8);
  func_0x000107c61170(uVar9);
  return;
}



/* Entry: 102c8c6ec; end: 102c8c737;  */

void FUN_102c8c6ec(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102c8c738; end: 102c8c757;  */

void FUN_102c8c738(void)

{
  FUN_102c8c534();
  return;
}



/* Entry: 102c8c758; end: 102c8c75f;  */

undefined8 FUN_102c8c758(void)

{
  return 0;
}



/* Entry: 102c8c760; end: 102c8c77f;  */

void FUN_102c8c760(void)

{
  func_0x000107c61168(&PTR_PTR_112f08088);
  return;
}



/* Entry: 102c8c780; end: 102c8c78f; -[_TtC24AdPlaybackImplementation27AdReminderDeepLinkProcessor identifier] */

void FUN_102c8c780(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (&PTR____CFConstantStringClassReference_110e5f338);
  return;
}



/* Entry: 102c8c790; end: 102c8c797; -[_TtC24AdPlaybackImplementation27AdReminderDeepLinkProcessor priority] */

undefined8 FUN_102c8c790(void)

{
  return 1000;
}



/* Entry: 102c8c798; end: 102c8c81f; -[_TtC24AdPlaybackImplementation27AdReminderDeepLinkProcessor canProvideProcessorForFeature:] */

uint FUN_102c8c798(undefined8 param_1,long param_2,undefined **param_3)

{
  uint uVar1;
  undefined **ppuVar2;
  long lVar3;
  
  func_0x000107c5faec();
  ppuVar2 = &PTR____CFConstantStringClassReference_110e5f338;
  lVar3 = param_2;
  func_0x000107c5faec();
  if (param_3 == ppuVar2 && param_2 == lVar3) {
    uVar1 = 1;
  }
  else {
    func_0x000107c605b8(param_3,param_2,ppuVar2,lVar3,0);
    uVar1 = (uint)param_3;
  }
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(lVar3);
  return uVar1 & 1;
}



/* Entry: 102c8c820; end: 102c8c87b; -[_TtC24AdPlaybackImplementation27AdReminderDeepLinkProcessor isValidDeepLink:] */

uint FUN_102c8c820(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_102c8db6c(param_3);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 102c8c87c; end: 102c8c87f; -[_TtC24AdPlaybackImplementation27AdReminderDeepLinkProcessor makeDeepLinkProcessor] */

void FUN_102c8c87c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 102c8c880; end: 102c8c8df; -[_TtC24AdPlaybackImplementation27AdReminderDeepLinkProcessor init] */

void FUN_102c8c880(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdPlaybackImplementation.AdReminderDeepLinkProcessor",0x34,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102c8c8ac);
  (*pcVar1)();
}



/* Entry: 102c8c8e0; end: 102c8c987; -[_TtC24AdPlaybackImplementation27AdReminderDeepLinkProcessor .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c8c8e0(long param_1)

{
  func_0x000100f21b00(param_1 + _DAT_112f08110);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f08118));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f08120));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f08128));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f08130));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f08138));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f08140));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f08148));
                    /* WARNING: Could not recover jumptable at 0x00010bdc05f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakDestroy_11034f580)(param_1 + _DAT_112f08150);
  return;
}



/* Entry: 102c8c988; end: 102c8c9a7;  */

void FUN_102c8c988(void)

{
  func_0x000107c61168(&PTR_PTR_11289b3b0);
  return;
}



/* Entry: 102c8c9a8; end: 102c8caeb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c8c9a8(void)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  ulong uStack_38;
  
  func_0x0001000d224c(&uStack_38);
  if (uStack_38 != 0) {
    uVar1 = uStack_38;
    func_0x000107c61150(uStack_38,PTR_s_respondsToSelector__11262c7e0,
                        PTR_s_topmostViewController_11267b0f0);
    if ((uVar1 & 1) != 0) {
      uVar1 = uStack_38;
      func_0x000107c5cc6c(uStack_38);
      func_0x000107c61180();
      func_0x000107c615e8(uStack_38);
      puVar2 = PTR_PTR_1126aff58;
      func_0x000107c610f8(PTR_PTR_1126aff58);
      func_0x000107c48080();
      puVar3 = PTR_PTR_1126b3550;
      func_0x000107c610f8(PTR_PTR_1126b3550);
      func_0x000107c49024();
      func_0x000107c61604(unaff_x20 + _DAT_112f08150,puVar3);
      func_0x000107c4ab34(*(undefined8 *)(unaff_x20 + _DAT_112f08118));
      func_0x000107c61170(uVar1);
      func_0x000107c61170(puVar2);
      func_0x000107c61170(puVar3);
      return;
    }
    func_0x000107c615e8(uStack_38);
  }
  FUN_102c8cb54(0xd000000000000028,0x800000010f105410);
  return;
}



/* Entry: 102c8caec; end: 102c8cb53; -[_TtC24AdPlaybackImplementation27AdReminderDeepLinkProcessor processDeepLinkURL:additionalInfo:delegate:] */

void FUN_102c8caec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c615f0(param_3);
  func_0x000107c615f0(param_5);
  func_0x000107c61174(param_1);
  FUN_102c8dc34(param_3,param_5);
  func_0x000107c615e8(param_3);
  func_0x000107c615e8(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102c8cb54; end: 102c8cd53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c8cb54(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  long unaff_x20;
  undefined1 auStack_a0 [80];
  
  puVar9 = auStack_a0;
  lVar1 = unaff_x20;
  func_0x000107c614f0();
  uVar8 = 0;
  func_0x000107c60714();
  lVar2 = 0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  func_0x000107c61534();
  *(undefined8 *)(lVar2 + 0x18) = 2;
  *(undefined8 *)(lVar2 + 0x10) = 1;
  uVar3 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
  func_0x000107c5faec();
  *(undefined8 *)(lVar2 + 0x20) = uVar3;
  puVar6 = PTR___sSSN_11034da80;
  *(undefined **)(lVar2 + 0x48) = PTR___sSSN_11034da80;
  *(undefined1 **)(lVar2 + 0x28) = puVar9;
  *(undefined8 *)(lVar2 + 0x30) = param_1;
  *(undefined8 *)(lVar2 + 0x38) = param_2;
  func_0x000107c61434(param_2);
  lVar4 = lVar2;
  func_0x000100214a84(lVar2);
  func_0x000107c61588(lVar2);
  FUN_102c8e0c8((undefined8 *)(lVar2 + 0x20),0x112d4b5f0,&UNK_10d9127d0);
  puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
  func_0x000107c5fadc(lVar1,uVar8);
  func_0x000107c6142c(uVar8);
  lVar2 = lVar4;
  func_0x000107c5f9dc(lVar4,puVar6,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(lVar4);
  func_0x000107c466bc(puVar5);
  func_0x000107c61170(lVar1);
  func_0x000107c61170(lVar2);
  lVar1 = _DAT_112f08110;
  lVar2 = unaff_x20 + _DAT_112f08110;
  func_0x000107c61618();
  if (lVar2 != 0) {
    puVar6 = puVar5;
    func_0x000107c61174(puVar5);
    puVar7 = puVar6;
    func_0x000107c5ed2c();
    func_0x000107c61170(puVar6);
    func_0x000107c4bb48(lVar2);
    func_0x000107c615e8(lVar2);
    func_0x000107c61170(puVar7);
  }
  lVar1 = unaff_x20 + lVar1;
  func_0x000107c61618();
  if (lVar1 != 0) {
    puVar6 = puVar5;
    func_0x000107c61174(puVar5);
    puVar7 = puVar6;
    func_0x000107c5ed2c();
    func_0x000107c61170(puVar6);
    func_0x000107c42808(lVar1);
    func_0x000107c615e8(lVar1);
    func_0x000107c61170(puVar7);
  }
  func_0x000107c61170(puVar5);
  return;
}



/* Entry: 102c8cd54; end: 102c8d05b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c8cd54(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  undefined1 *puVar11;
  long unaff_x20;
  undefined1 auStack_a0 [48];
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  
  ppuVar9 = &puStack_70;
  lVar6 = *(long *)(unaff_x20 + _DAT_112f08130);
  func_0x000107c5b4b0();
  func_0x000107c61180();
  if (lVar6 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102c8cef0);
    (*pcVar1)();
  }
  lVar7 = lVar6;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar6);
  if (lVar7 != 0) {
    lVar6 = *(long *)(unaff_x20 + _DAT_112f08138);
    func_0x000107c5d984();
    func_0x000107c61180();
    if (lVar6 == 0) {
      func_0x000107c5faec();
      func_0x000107c5fadc();
      func_0x000107c6142c(param_2);
    }
    lVar8 = *(long *)(unaff_x20 + _DAT_112f08140);
    func_0x000107c4f7c0();
    func_0x000107c61180();
    if (lVar8 != 0) {
      puVar4 = &UNK_1105bb1f0;
      func_0x000107c613fc(&UNK_1105bb1f0,0x18,7);
      func_0x000107c61614(puVar4 + 0x10);
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_68 = 0x42000000;
      puStack_60 = &UNK_101043a98;
      puStack_58 = &UNK_1105bb208;
      func_0x000107c60bc4(&puStack_70);
      func_0x000107c61574(puVar4);
      func_0x000107c5b49c(lVar7);
      func_0x000107c60bd0(ppuVar9);
      func_0x000107c615e8(lVar7);
      func_0x000107c61170(lVar6);
      func_0x000107c61170(lVar8);
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102c8cef4);
    (*pcVar1)();
  }
  puVar11 = auStack_a0;
  lVar7 = unaff_x20;
  func_0x000107c614f0(unaff_x20);
  uVar10 = 0;
  func_0x000107c60714();
  lVar6 = 0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  func_0x000107c61534();
  *(undefined8 *)(lVar6 + 0x18) = 2;
  *(undefined8 *)(lVar6 + 0x10) = 1;
  uVar2 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
  func_0x000107c5faec();
  *(undefined8 *)(lVar6 + 0x20) = uVar2;
  puVar4 = PTR___sSSN_11034da80;
  *(undefined **)(lVar6 + 0x48) = PTR___sSSN_11034da80;
  *(undefined1 **)(lVar6 + 0x28) = puVar11;
  *(undefined8 *)(lVar6 + 0x30) = 0xd000000000000037;
  *(undefined8 *)(lVar6 + 0x38) = 0x800000010f1052f0;
  func_0x000107c61434(0x800000010f1052f0);
  lVar8 = lVar6;
  func_0x000100214a84(lVar6);
  func_0x000107c61588(lVar6);
  FUN_102c8e0c8((undefined8 *)(lVar6 + 0x20),0x112d4b5f0,&UNK_10d9127d0);
  puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
  func_0x000107c5fadc(lVar7,uVar10);
  func_0x000107c6142c(uVar10);
  lVar6 = lVar8;
  func_0x000107c5f9dc(lVar8,puVar4,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(lVar8);
  func_0x000107c466bc(puVar3);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(lVar6);
  lVar7 = _DAT_112f08110;
  lVar6 = unaff_x20 + _DAT_112f08110;
  func_0x000107c61618();
  if (lVar6 != 0) {
    puVar4 = puVar3;
    func_0x000107c61174(puVar3);
    puVar5 = puVar4;
    func_0x000107c5ed2c();
    func_0x000107c61170(puVar4);
    func_0x000107c4bb48(lVar6);
    func_0x000107c615e8(lVar6);
    func_0x000107c61170(puVar5);
  }
  lVar7 = unaff_x20 + lVar7;
  func_0x000107c61618();
  if (lVar7 != 0) {
    puVar4 = puVar3;
    func_0x000107c61174(puVar3);
    puVar5 = puVar4;
    func_0x000107c5ed2c();
    func_0x000107c61170(puVar4);
    func_0x000107c42808(lVar7);
    func_0x000107c615e8(lVar7);
    func_0x000107c61170(puVar5);
  }
  func_0x000107c61170(puVar3);
  return;
}



/* Entry: 102c8d05c; end: 102c8d993;  */

undefined8 FUN_102c8d05c(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 unaff_x20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uStack_78;
  long lStack_70;
  
  lVar1 = param_2;
  func_0x000107c3e980();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 == 0) {
    lVar1 = 0;
    uVar21 = 0;
  }
  else {
    lVar1 = lVar2;
    func_0x000107c41050();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    if (lVar1 == 0) {
      lVar1 = 0;
      uVar21 = 0;
    }
    else {
      uStack_78 = 0;
      lStack_70 = 0;
      func_0x000107c5fae8(lVar1,&uStack_78);
      func_0x000107c61170(lVar1);
      lVar1 = lStack_70;
      uVar21 = 0;
      if (lStack_70 != 0) {
        uVar21 = uStack_78;
      }
    }
  }
  lVar2 = param_2;
  func_0x000107c3ea24();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar3 != 0) {
    lVar2 = lVar3;
    func_0x000107c41050();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    if (lVar2 != 0) {
      uStack_78 = 0;
      lStack_70 = 0;
      func_0x000107c5fae8(lVar2,&uStack_78);
      func_0x000107c61170(lVar2);
      uVar22 = 0;
      lVar2 = lStack_70;
      if (lStack_70 != 0) {
        uVar22 = uStack_78;
      }
      goto joined_r0x000102c8d190;
    }
  }
  uVar22 = 0;
  lVar2 = 0;
joined_r0x000102c8d190:
  if (lVar1 == 0) {
    uVar21 = 0;
  }
  else {
    func_0x000107c5fadc(uVar21,lVar1);
    func_0x000107c6142c(lVar1);
  }
  if (lVar2 == 0) {
    uVar22 = 0;
  }
  else {
    func_0x000107c5fadc(uVar22,lVar2);
    func_0x000107c6142c(lVar2);
  }
  puVar4 = PTR_PTR_1126b14b8;
  func_0x000107c610f8();
  func_0x000107c4598c();
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar22);
  func_0x000107c614e8();
  func_0x000107c610f8();
  uVar21 = param_1;
  func_0x000107c5d984();
  func_0x000107c61180();
  uVar22 = param_1;
  func_0x000107c5db08();
  func_0x000107c61180();
  uVar5 = param_1;
  func_0x000107c42120();
  func_0x000107c61180();
  func_0x000107c4a1e8();
  uVar6 = param_1;
  func_0x000107c43a60();
  func_0x000107c61180();
  func_0x000107c61174();
  uVar7 = param_1;
  func_0x000107c4252c();
  func_0x000107c61180();
  func_0x000107c49ac4();
  uVar8 = param_1;
  func_0x000107c439a8();
  func_0x000107c61180();
  uVar9 = param_1;
  func_0x000107c452e8();
  func_0x000107c61180();
  uVar10 = param_1;
  func_0x000107c5c3fc();
  func_0x000107c61180();
  uVar11 = param_1;
  func_0x000107c40328();
  func_0x000107c61180();
  uVar12 = param_1;
  func_0x000107c5b37c();
  func_0x000107c61180();
  uVar13 = param_1;
  func_0x000107c4d2ec();
  func_0x000107c61180();
  uVar14 = param_1;
  func_0x000107c4ad90();
  func_0x000107c61180();
  func_0x000107c4ea34();
  uVar15 = param_1;
  func_0x000107c4ebc8();
  func_0x000107c61180();
  uVar16 = param_1;
  func_0x000107c40cdc();
  func_0x000107c61180();
  uVar17 = param_1;
  func_0x000107c3d000();
  func_0x000107c61180();
  uVar18 = param_1;
  func_0x000107c4eba8();
  func_0x000107c61180();
  uVar19 = param_1;
  func_0x000107c4ea60();
  func_0x000107c61180();
  uVar20 = param_1;
  func_0x000107c51628();
  func_0x000107c61180();
  func_0x000107c499dc();
  func_0x000107c49278();
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar4);
  return unaff_x20;
}



/* Entry: 102c8d994; end: 102c8d9eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c8d994(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    *(undefined1 *)(param_1 + _DAT_112f08158) = 1;
    func_0x000107c61170();
  }
  return;
}



/* Entry: 102c8d9ec; end: 102c8d9f3; -[_TtC24AdPlaybackImplementation27AdReminderDeepLinkProcessor shouldForceNavigation] */

undefined8 FUN_102c8d9ec(void)

{
  return 1;
}



/* Entry: 102c8d9f4; end: 102c8d9f7; -[_TtC24AdPlaybackImplementation27AdReminderDeepLinkProcessor processDeepLinkResolutionResult:additionalInfo:delegate:] */

void FUN_102c8d9f4(void)

{
  return;
}



/* Entry: 102c8d9f8; end: 102c8da1f; -[_TtC24AdPlaybackImplementation27AdReminderDeepLinkProcessor myProfileWillAppear] */

void FUN_102c8d9f8(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102c8cd54();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102c8da20; end: 102c8da23; -[_TtC24AdPlaybackImplementation27AdReminderDeepLinkProcessor myProfileDidAppear:] */

void FUN_102c8da20(void)

{
  return;
}



/* Entry: 102c8da24; end: 102c8dad7;  */

/* WARNING: Possible PIC construction at 0x000102c8da9c: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c8da24(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  *(undefined1 *)(unaff_x20 + _DAT_112f08158) = 1;
  lVar1 = _DAT_112f08150;
  lVar2 = unaff_x20 + _DAT_112f08150;
  func_0x000107c61618();
  if (lVar2 != 0) {
    func_0x000107c61170();
    func_0x000107c4283c(*(undefined8 *)(unaff_x20 + _DAT_112f08118));
    func_0x000107c61604(unaff_x20 + lVar1,0);
  }
  lVar1 = _DAT_112f08110;
  lVar2 = unaff_x20 + _DAT_112f08110;
  func_0x000107c61618();
  if (lVar2 == 0) {
    lVar2 = unaff_x20 + lVar1;
    func_0x000107c61618();
    if (lVar2 == 0) {
      return;
    }
    func_0x000107c42804();
  }
  else {
    func_0x000107c4bb60();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar2);
  return;
}



/* Entry: 102c8dad8; end: 102c8daff; -[_TtC24AdPlaybackImplementation27AdReminderDeepLinkProcessor myProfileDidDismiss] */

void FUN_102c8dad8(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102c8da24();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102c8db00; end: 102c8db47; -[_TtC24AdPlaybackImplementation27AdReminderDeepLinkProcessor myProfileAskedLogOnScrollEventsForScrollViewDelegagte:] */

void FUN_102c8db00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c60234(auStack_40,param_3);
  func_0x000107c615e8(param_3);
  func_0x000100183ab8(auStack_40);
  return;
}



/* Entry: 102c8db48; end: 102c8db6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c8db48(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    if ((param_1 == 0) || (param_2 != 0)) {
      uVar3 = 0xe000000000000000;
      uStack_68 = 0;
      uStack_60 = 0xe000000000000000;
      func_0x000107c602fc(0x1d);
      func_0x000107c6142c(uStack_60);
      uStack_68 = 0xd00000000000001b;
      uStack_60 = 0x800000010f105330;
      if (param_2 != 0) {
        func_0x000107c614cc(param_2,auStack_70,auStack_88);
        func_0x000107c60640(uStack_80,uStack_78);
        uVar3 = uStack_78;
      }
      func_0x000107c5fb78();
      func_0x000107c6142c(uVar3);
      uVar3 = uStack_60;
      FUN_102c8cb54(uStack_68,uStack_60);
      func_0x000107c61170(lVar1);
      func_0x000107c6142c(uVar3);
    }
    else {
      func_0x000101994830(0);
      uVar3 = *(undefined8 *)(lVar1 + _DAT_112f08138);
      func_0x000107c61174(param_1);
      func_0x000107c61174();
      func_0x000107c61174(uVar3);
      lVar2 = param_1;
      FUN_102c8d05c(param_1,uVar3);
      func_0x000102c8d540();
      func_0x000107c61170(lVar1);
      func_0x000107c61170(param_1);
      func_0x000107c61170(lVar2);
    }
  }
  return;
}


