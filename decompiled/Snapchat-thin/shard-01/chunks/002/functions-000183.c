/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100e3ad84; end: 100e3aeab;  */

/* WARNING: Possible PIC construction at 0x000100e3ae48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e3ae88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e3ae4c) */
/* WARNING: Removing unreachable block (ram,0x000100e3ae8c) */

void FUN_100e3ad84(long param_1)

{
  long lVar1;
  long unaff_x20;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = *(long *)(unaff_x20 + 0x20);
  lVar1 = lVar3;
  func_0x000107c4dec4();
  func_0x000107c61180();
  if (lVar1 == 0) {
    return;
  }
  func_0x000107c4dee8();
  func_0x000107c61180();
  if (lVar3 != 0) {
    uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
    lVar1 = *(long *)(param_1 + 0x18);
    if (lVar1 == 0) {
      uVar2 = 0;
      lVar1 = -0x2000000000000000;
    }
    else {
      uVar2 = *(undefined8 *)(param_1 + 0x10);
    }
    func_0x000107c61434();
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
    func_0x000107c5cd88(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
  return;
}



/* Entry: 100e3aeac; end: 100e3aff7;  */

undefined8 FUN_100e3aeac(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 100e3aff8; end: 100e3b13b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_100e3aff8(undefined8 param_1,long param_2,long param_3,long param_4,long param_5)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uVar5;
  
  func_0x000107c613fc();
  uVar5 = *(undefined8 *)(param_3 + _DAT_113012e20);
  *(undefined8 *)(unaff_x20 + 0x10) = *(undefined8 *)(param_2 + _DAT_112f962c0);
  *(undefined8 *)(unaff_x20 + 0x18) = uVar5;
  func_0x000107c6157c();
  func_0x000107c6157c(uVar5);
  lVar2 = param_4;
  func_0x000107c5d2e4();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x0001000285a8(0x112d3b138,&UNK_10d9049a0);
    lVar3 = lVar2;
    func_0x0001000bda74();
    func_0x000107c61170(lVar2);
    *(long *)(unaff_x20 + 0x20) = lVar3;
    func_0x0001000285a8(0x112d39420,&UNK_10d979900);
    uVar4 = *(undefined8 *)(param_5 + _DAT_113083868);
    func_0x000107c61174();
    uVar5 = uVar4;
    func_0x0001000bda74();
    func_0x000107c61170(uVar4);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_4);
    *(undefined8 *)(unaff_x20 + 0x28) = uVar5;
    return unaff_x20;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100e3b13c);
  (*pcVar1)();
}



/* Entry: 100e3b13c; end: 100e3b33f;  */

void FUN_100e3b13c(long *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lStack_108;
  long alStack_100 [3];
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [40];
  undefined1 auStack_a8 [24];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [40];
  
  func_0x000107c61428(param_2 + 0x10,auStack_a8,0,0);
  lVar1 = param_2 + 0x10;
  func_0x000107c61648();
  if (lVar1 == 0) {
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    lStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 0x10);
    func_0x000107c6157c(uVar2);
    func_0x000107c61574(lVar1);
    func_0x0001000d224c(&uStack_90);
    func_0x000107c61574(uVar2);
    if (lStack_78 != 0) {
      FUN_100c98448(&uStack_90,auStack_68);
      func_0x000107c61428(param_2 + 0x10,auStack_e8,0,0);
      lVar1 = param_2 + 0x10;
      func_0x000107c61648();
      if (lVar1 != 0) {
        uVar2 = *(undefined8 *)(lVar1 + 0x18);
        func_0x000107c6157c(uVar2);
        func_0x000107c61574(lVar1);
        func_0x0001000d224c(auStack_d0);
        func_0x000107c61574(uVar2);
        FUN_100c98448(auStack_d0,&uStack_90);
        func_0x000107c61428(param_2 + 0x10,auStack_d0,0,0);
        lVar1 = param_2 + 0x10;
        func_0x000107c61648();
        if (lVar1 != 0) {
          uVar2 = *(undefined8 *)(lVar1 + 0x20);
          func_0x000107c6157c(uVar2);
          func_0x000107c61574(lVar1);
          func_0x0001000d224c(alStack_100);
          func_0x000107c61574(uVar2);
          if (alStack_100[0] != 0) {
            func_0x000107c61428(param_2 + 0x10,alStack_100,0,0);
            param_2 = param_2 + 0x10;
            func_0x000107c61648();
            if (param_2 != 0) {
              uVar2 = *(undefined8 *)(param_2 + 0x28);
              func_0x000107c6157c(uVar2);
              func_0x000107c61574(param_2);
              func_0x0001000d224c(&lStack_108);
              func_0x000107c61574(uVar2);
              if (lStack_108 != 0) {
                lVar1 = 0;
                func_0x000100e3a27c();
                func_0x000107c613fc();
                *(undefined8 *)(lVar1 + 0x78) = 0;
                *(undefined8 *)(lVar1 + 0x70) = 0;
                *(undefined8 *)(lVar1 + 0x88) = 0;
                *(undefined8 *)(lVar1 + 0x80) = 0;
                *(undefined8 *)(lVar1 + 0x90) = 0;
                *(long *)(lVar1 + 0x10) = alStack_100[0];
                *(long *)(lVar1 + 0x18) = lStack_108;
                FUN_100c98448(auStack_68,lVar1 + 0x20);
                FUN_100c98448(&uStack_90,lVar1 + 0x48);
                *param_1 = lVar1;
                return;
              }
            }
            func_0x000107c615e8(alStack_100[0]);
          }
        }
        func_0x0001000834e4(&uStack_90);
      }
      func_0x0001000834e4(auStack_68);
      goto LAB_100e3b324;
    }
  }
  FUN_100e3b4f0(&uStack_90);
LAB_100e3b324:
  *param_1 = 0;
  return;
}



/* Entry: 100e3b340; end: 100e3b347;  */

void FUN_100e3b340(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lStack_108;
  long alStack_100 [3];
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [40];
  undefined1 auStack_a8 [24];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [40];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_a8,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 == 0) {
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    lStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 0x10);
    func_0x000107c6157c(uVar2);
    func_0x000107c61574(lVar1);
    func_0x0001000d224c(&uStack_90);
    func_0x000107c61574(uVar2);
    if (lStack_78 != 0) {
      FUN_100c98448(&uStack_90,auStack_68);
      func_0x000107c61428(unaff_x20 + 0x10,auStack_e8,0,0);
      lVar1 = unaff_x20 + 0x10;
      func_0x000107c61648();
      if (lVar1 != 0) {
        uVar2 = *(undefined8 *)(lVar1 + 0x18);
        func_0x000107c6157c(uVar2);
        func_0x000107c61574(lVar1);
        func_0x0001000d224c(auStack_d0);
        func_0x000107c61574(uVar2);
        FUN_100c98448(auStack_d0,&uStack_90);
        func_0x000107c61428(unaff_x20 + 0x10,auStack_d0,0,0);
        lVar1 = unaff_x20 + 0x10;
        func_0x000107c61648();
        if (lVar1 != 0) {
          uVar2 = *(undefined8 *)(lVar1 + 0x20);
          func_0x000107c6157c(uVar2);
          func_0x000107c61574(lVar1);
          func_0x0001000d224c(alStack_100);
          func_0x000107c61574(uVar2);
          if (alStack_100[0] != 0) {
            func_0x000107c61428(unaff_x20 + 0x10,alStack_100,0,0);
            lVar1 = unaff_x20 + 0x10;
            func_0x000107c61648();
            if (lVar1 != 0) {
              uVar2 = *(undefined8 *)(lVar1 + 0x28);
              func_0x000107c6157c(uVar2);
              func_0x000107c61574(lVar1);
              func_0x0001000d224c(&lStack_108);
              func_0x000107c61574(uVar2);
              if (lStack_108 != 0) {
                lVar1 = 0;
                func_0x000100e3a27c();
                func_0x000107c613fc();
                *(undefined8 *)(lVar1 + 0x78) = 0;
                *(undefined8 *)(lVar1 + 0x70) = 0;
                *(undefined8 *)(lVar1 + 0x88) = 0;
                *(undefined8 *)(lVar1 + 0x80) = 0;
                *(undefined8 *)(lVar1 + 0x90) = 0;
                *(long *)(lVar1 + 0x10) = alStack_100[0];
                *(long *)(lVar1 + 0x18) = lStack_108;
                FUN_100c98448(auStack_68,lVar1 + 0x20);
                FUN_100c98448(&uStack_90,lVar1 + 0x48);
                *param_1 = lVar1;
                return;
              }
            }
            func_0x000107c615e8(alStack_100[0]);
          }
        }
        func_0x0001000834e4(&uStack_90);
      }
      func_0x0001000834e4(auStack_68);
      goto LAB_100e3b324;
    }
  }
  FUN_100e3b4f0(&uStack_90);
LAB_100e3b324:
  *param_1 = 0;
  return;
}



/* Entry: 100e3b348; end: 100e3b373;  */

/* WARNING: Possible PIC construction at 0x000100e3b354: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e3b364: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e3b358) */
/* WARNING: Removing unreachable block (ram,0x000100e3b368) */

void FUN_100e3b348(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 100e3b374; end: 100e3b3cf;  */

void FUN_100e3b374(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c61574();
  func_0x000107c61574(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 100e3b3d0; end: 100e3b44f;  */

void FUN_100e3b3d0(undefined8 param_1)

{
  if (lRam0000000112d3b170 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e6113dc);
  return;
}



/* Entry: 100e3b450; end: 100e3b4ef;  */

void FUN_100e3b450(undefined8 *param_1)

{
  undefined *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  
  puVar1 = &UNK_110358ae8;
  func_0x000107c613fc(&UNK_110358ae8,0x18,7);
  func_0x000107c61644(puVar1 + 0x10);
  func_0x0001000285a8(0x112d3b140,&UNK_10d9049b0);
  func_0x000107c613fc();
  pcVar2 = FUN_100e3b538;
  func_0x0001000bdd8c(FUN_100e3b538,puVar1);
  uVar3 = 0;
  FUN_1013c14cc(0);
  func_0x000107c610f8();
  func_0x0001013c13ec(pcVar2,uVar3);
  *param_1 = pcVar2;
  return;
}



/* Entry: 100e3b4f0; end: 100e3b537;  */

undefined8 FUN_100e3b4f0(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112d3b238;
  func_0x0001000285a8(0x112d3b238,&UNK_10d904a10);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 100e3b538; end: 100e3b53b;  */

void FUN_100e3b538(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lStack_108;
  long alStack_100 [3];
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [40];
  undefined1 auStack_a8 [24];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [40];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_a8,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 == 0) {
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    lStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 0x10);
    func_0x000107c6157c(uVar2);
    func_0x000107c61574(lVar1);
    func_0x0001000d224c(&uStack_90);
    func_0x000107c61574(uVar2);
    if (lStack_78 != 0) {
      FUN_100c98448(&uStack_90,auStack_68);
      func_0x000107c61428(unaff_x20 + 0x10,auStack_e8,0,0);
      lVar1 = unaff_x20 + 0x10;
      func_0x000107c61648();
      if (lVar1 != 0) {
        uVar2 = *(undefined8 *)(lVar1 + 0x18);
        func_0x000107c6157c(uVar2);
        func_0x000107c61574(lVar1);
        func_0x0001000d224c(auStack_d0);
        func_0x000107c61574(uVar2);
        FUN_100c98448(auStack_d0,&uStack_90);
        func_0x000107c61428(unaff_x20 + 0x10,auStack_d0,0,0);
        lVar1 = unaff_x20 + 0x10;
        func_0x000107c61648();
        if (lVar1 != 0) {
          uVar2 = *(undefined8 *)(lVar1 + 0x20);
          func_0x000107c6157c(uVar2);
          func_0x000107c61574(lVar1);
          func_0x0001000d224c(alStack_100);
          func_0x000107c61574(uVar2);
          if (alStack_100[0] != 0) {
            func_0x000107c61428(unaff_x20 + 0x10,alStack_100,0,0);
            lVar1 = unaff_x20 + 0x10;
            func_0x000107c61648();
            if (lVar1 != 0) {
              uVar2 = *(undefined8 *)(lVar1 + 0x28);
              func_0x000107c6157c(uVar2);
              func_0x000107c61574(lVar1);
              func_0x0001000d224c(&lStack_108);
              func_0x000107c61574(uVar2);
              if (lStack_108 != 0) {
                lVar1 = 0;
                func_0x000100e3a27c();
                func_0x000107c613fc();
                *(undefined8 *)(lVar1 + 0x78) = 0;
                *(undefined8 *)(lVar1 + 0x70) = 0;
                *(undefined8 *)(lVar1 + 0x88) = 0;
                *(undefined8 *)(lVar1 + 0x80) = 0;
                *(undefined8 *)(lVar1 + 0x90) = 0;
                *(long *)(lVar1 + 0x10) = alStack_100[0];
                *(long *)(lVar1 + 0x18) = lStack_108;
                FUN_100c98448(auStack_68,lVar1 + 0x20);
                FUN_100c98448(&uStack_90,lVar1 + 0x48);
                *param_1 = lVar1;
                return;
              }
            }
            func_0x000107c615e8(alStack_100[0]);
          }
        }
        func_0x0001000834e4(&uStack_90);
      }
      func_0x0001000834e4(auStack_68);
      goto LAB_100e3b324;
    }
  }
  FUN_100e3b4f0(&uStack_90);
LAB_100e3b324:
  *param_1 = 0;
  return;
}



/* Entry: 100e3b53c; end: 100e3b597; -[_TtC35SponsoredLensContextCardCtaProvider38SponsoredLensContextCardCtaUIContainer uiContainer] */

void FUN_100e3b53c(long param_1)

{
  func_0x000107c61618(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100e3b598; end: 100e3b5bb;  */

undefined8 FUN_100e3b598(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 100e3b5bc; end: 100e3b5c7; -[SCSponsoredLensContextCardCtaServiceProvider systemScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e3b5bc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d3b300;
  func_0x000107c61428(param_1 + _DAT_112d3b300,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100e3b5c8; end: 100e3b5d3; -[SCSponsoredLensContextCardCtaServiceProvider setSystemScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e3b5c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d3b300;
  func_0x000107c61428(param_1 + _DAT_112d3b300,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100e3b5d4; end: 100e3b5df; -[SCSponsoredLensContextCardCtaServiceProvider sponsoredAttachmentServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e3b5d4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d3b308;
  func_0x000107c61428(param_1 + _DAT_112d3b308,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100e3b5e0; end: 100e3b5eb; -[SCSponsoredLensContextCardCtaServiceProvider setSponsoredAttachmentServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e3b5e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d3b308;
  func_0x000107c61428(param_1 + _DAT_112d3b308,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100e3b5ec; end: 100e3b5f7; -[SCSponsoredLensContextCardCtaServiceProvider adRenderDataMapperFactoryServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e3b5ec(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d3b310;
  func_0x000107c61428(param_1 + _DAT_112d3b310,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100e3b5f8; end: 100e3b603; -[SCSponsoredLensContextCardCtaServiceProvider setAdRenderDataMapperFactoryServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e3b5f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d3b310;
  func_0x000107c61428(param_1 + _DAT_112d3b310,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100e3b604; end: 100e3b60f; -[SCSponsoredLensContextCardCtaServiceProvider unlockableMetricsServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e3b604(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d3b318;
  func_0x000107c61428(param_1 + _DAT_112d3b318,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100e3b610; end: 100e3b61b; -[SCSponsoredLensContextCardCtaServiceProvider setUnlockableMetricsServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e3b610(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d3b318;
  func_0x000107c61428(param_1 + _DAT_112d3b318,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100e3b61c; end: 100e3b627; -[SCSponsoredLensContextCardCtaServiceProvider userBlizzardServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e3b61c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d3b320;
  func_0x000107c61428(param_1 + _DAT_112d3b320,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100e3b628; end: 100e3b66b;  */

void FUN_100e3b628(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100e3b66c; end: 100e3b677; -[SCSponsoredLensContextCardCtaServiceProvider setUserBlizzardServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e3b66c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d3b320;
  func_0x000107c61428(param_1 + _DAT_112d3b320,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100e3b678; end: 100e3b6cb;  */

void FUN_100e3b678(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100e3b6cc; end: 100e3b9e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e3b6cc(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined *puVar11;
  long unaff_x20;
  undefined8 uVar12;
  
  lVar2 = unaff_x20;
  func_0x000107c5c634();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c5b7a4();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = unaff_x20;
      func_0x000107c3d408();
      func_0x000107c61180();
      if (lVar4 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar5 = unaff_x20;
        func_0x000107c5d2b8();
        func_0x000107c61180();
        if (lVar5 == 0) {
          func_0x000107c61170(lVar2);
          func_0x000107c61170(lVar3);
          lVar2 = lVar4;
        }
        else {
          lVar6 = unaff_x20;
          func_0x000107c5d900();
          func_0x000107c61180();
          if (lVar6 != 0) {
            lVar7 = 0;
            FUN_100e3b3d0();
            func_0x000107c613fc();
            *(undefined8 *)(lVar7 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112f962c0);
            uVar12 = *(undefined8 *)(lVar4 + _DAT_113012e20);
            *(undefined8 *)(lVar7 + 0x18) = uVar12;
            func_0x000107c6157c();
            func_0x000107c6157c(uVar12);
            func_0x000107c61174();
            func_0x000107c61174();
            func_0x000107c61174(lVar4);
            func_0x000107c61174(lVar3);
            func_0x000107c61174(lVar2);
            lVar8 = lVar5;
            func_0x000107c5d2e4();
            func_0x000107c61180();
            if (lVar8 != 0) {
              func_0x0001000285a8(0x112d3b138,&UNK_10d9049a0);
              lVar9 = lVar8;
              func_0x0001000bda74();
              func_0x000107c61170(lVar8);
              *(long *)(lVar7 + 0x20) = lVar9;
              func_0x0001000285a8(0x112d39420,&UNK_10d979900);
              uVar10 = *(undefined8 *)(lVar6 + _DAT_113083868);
              func_0x000107c61174();
              uVar12 = uVar10;
              func_0x0001000bda74();
              func_0x000107c61170(uVar10);
              func_0x000107c61170(lVar3);
              func_0x000107c61170(lVar4);
              func_0x000107c61170(lVar6);
              func_0x000107c61170(lVar2);
              func_0x000107c61170(lVar5);
              *(undefined8 *)(lVar7 + 0x28) = uVar12;
              uVar12 = *(undefined8 *)(unaff_x20 + _DAT_112d3b328);
              *(long *)(unaff_x20 + _DAT_112d3b328) = lVar7;
              func_0x000107c6157c(lVar7);
              func_0x000107c61574(uVar12);
              puVar11 = &UNK_110358b28;
              func_0x000107c613fc(&UNK_110358b28,0x18,7);
              func_0x000107c61644(puVar11 + 0x10,lVar7);
              func_0x0001000285a8(0x112d3b140,&UNK_10d9049b0);
              func_0x000107c613fc();
              pcVar1 = FUN_100e3b9e4;
              func_0x0001000bdd8c(FUN_100e3b9e4,puVar11);
              FUN_1013c14cc(0);
              func_0x000107c610f8();
              func_0x0001013c13ec(pcVar1);
              func_0x000107c61170(lVar2);
              func_0x000107c61170(lVar3);
              func_0x000107c61170(lVar4);
              func_0x000107c61170(lVar5);
              func_0x000107c61170(lVar6);
              func_0x000107c61574(lVar7);
              return;
            }
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x100e3b9e4);
            (*pcVar1)();
          }
          func_0x000107c61170(lVar2);
          func_0x000107c61170(lVar3);
          func_0x000107c61170(lVar4);
          lVar2 = lVar5;
        }
      }
    }
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 100e3b9e4; end: 100e3b9eb;  */

void FUN_100e3b9e4(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lStack_108;
  long alStack_100 [3];
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [40];
  undefined1 auStack_a8 [24];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [40];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_a8,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 == 0) {
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    lStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 0x10);
    func_0x000107c6157c(uVar2);
    func_0x000107c61574(lVar1);
    func_0x0001000d224c(&uStack_90);
    func_0x000107c61574(uVar2);
    if (lStack_78 != 0) {
      FUN_100c98448(&uStack_90,auStack_68);
      func_0x000107c61428(unaff_x20 + 0x10,auStack_e8,0,0);
      lVar1 = unaff_x20 + 0x10;
      func_0x000107c61648();
      if (lVar1 != 0) {
        uVar2 = *(undefined8 *)(lVar1 + 0x18);
        func_0x000107c6157c(uVar2);
        func_0x000107c61574(lVar1);
        func_0x0001000d224c(auStack_d0);
        func_0x000107c61574(uVar2);
        FUN_100c98448(auStack_d0,&uStack_90);
        func_0x000107c61428(unaff_x20 + 0x10,auStack_d0,0,0);
        lVar1 = unaff_x20 + 0x10;
        func_0x000107c61648();
        if (lVar1 != 0) {
          uVar2 = *(undefined8 *)(lVar1 + 0x20);
          func_0x000107c6157c(uVar2);
          func_0x000107c61574(lVar1);
          func_0x0001000d224c(alStack_100);
          func_0x000107c61574(uVar2);
          if (alStack_100[0] != 0) {
            func_0x000107c61428(unaff_x20 + 0x10,alStack_100,0,0);
            lVar1 = unaff_x20 + 0x10;
            func_0x000107c61648();
            if (lVar1 != 0) {
              uVar2 = *(undefined8 *)(lVar1 + 0x28);
              func_0x000107c6157c(uVar2);
              func_0x000107c61574(lVar1);
              func_0x0001000d224c(&lStack_108);
              func_0x000107c61574(uVar2);
              if (lStack_108 != 0) {
                lVar1 = 0;
                func_0x000100e3a27c();
                func_0x000107c613fc();
                *(undefined8 *)(lVar1 + 0x78) = 0;
                *(undefined8 *)(lVar1 + 0x70) = 0;
                *(undefined8 *)(lVar1 + 0x88) = 0;
                *(undefined8 *)(lVar1 + 0x80) = 0;
                *(undefined8 *)(lVar1 + 0x90) = 0;
                *(long *)(lVar1 + 0x10) = alStack_100[0];
                *(long *)(lVar1 + 0x18) = lStack_108;
                FUN_100c98448(auStack_68,lVar1 + 0x20);
                FUN_100c98448(&uStack_90,lVar1 + 0x48);
                *param_1 = lVar1;
                return;
              }
            }
            func_0x000107c615e8(alStack_100[0]);
          }
        }
        func_0x0001000834e4(&uStack_90);
      }
      func_0x0001000834e4(auStack_68);
      goto LAB_100e3b324;
    }
  }
  FUN_100e3b4f0(&uStack_90);
LAB_100e3b324:
  *param_1 = 0;
  return;
}



/* Entry: 100e3b9ec; end: 100e3ba77; -[SCSponsoredLensContextCardCtaServiceProvider provide] */

void FUN_100e3b9ec(long param_1)

{
  code *pcVar1;
  long lVar2;
  
  func_0x000107c61174();
  lVar2 = param_1;
  FUN_100e3b6cc();
  if (lVar2 != 0) {
    func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
    return;
  }
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000021,0x800000010ef118a0,
                      "SponsoredLensContextCardCtaProvider/SCSponsoredLensContextCardCtaServiceProvider.swift"
                      ,0x56,2,0x23,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100e3ba78);
  (*pcVar1)();
}



/* Entry: 100e3ba78; end: 100e3baab; -[SCSponsoredLensContextCardCtaServiceProvider __safeProvide] */

void FUN_100e3ba78(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_100e3b6cc();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100e3baac; end: 100e3baef; -[SCSponsoredLensContextCardCtaServiceProvider end] */

void FUN_100e3baac(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100e3baf0; end: 100e3bdcf;  */

void FUN_100e3baf0(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0x63536d6574737973;
  if ((param_2 == 0x63536d6574737973 && param_3 == -0x14ffffffff9a8f91) ||
     (func_0x000107c605b8(0x63536d6574737973,0xeb0000000065706f,param_2,param_3,0), (uVar2 & 1) != 0
     )) {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c59b6c();
  }
  else {
    uVar2 = 0xd00000000000001b;
    if (((param_2 == -0x2fffffffffffffe5) && (param_3 == -0x7ffffffef10ed0a0)) ||
       (func_0x000107c605b8(0xd00000000000001b,0x800000010ef12f60,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c59640();
    }
    else {
      uVar2 = 0xd000000000000021;
      if (((param_2 == -0x2fffffffffffffdf) && (param_3 == -0x7ffffffef10ed080)) ||
         (func_0x000107c605b8(0xd000000000000021,0x800000010ef12f80,param_2,param_3,0),
         (uVar2 & 1) != 0)) {
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c523a0();
      }
      else {
        uVar2 = 0xd000000000000019;
        if (((param_2 == -0x2fffffffffffffe7) && (param_3 == -0x7ffffffef10ed050)) ||
           (func_0x000107c605b8(0xd000000000000019,0x800000010ef12fb0,param_2,param_3,0),
           (uVar2 & 1) != 0)) {
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c5a1a8();
        }
        else {
          if ((param_2 != -0x2fffffffffffffec) || (param_3 != -0x7ffffffef10ef610)) {
            uVar2 = 0;
            func_0x000107c605b8(0xd000000000000014,0x800000010ef109f0,param_2,param_3,0);
            if ((uVar2 & 1) == 0) {
              func_0x000107c602fc(0x15);
              func_0x000107c6142c(0xe000000000000000);
              func_0x000107c5fb78(param_2,param_3);
              func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                  "SponsoredLensContextCardCtaProvider/SCSponsoredLensContextCardCtaServiceProvider.swift"
                                  ,0x56,2,0x3e,0);
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x100e3bdd0);
              (*pcVar1)();
            }
          }
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c5a2fc();
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100e3bdd0; end: 100e3be7b; -[SCSponsoredLensContextCardCtaServiceProvider setValue:forIvarName:] */

void FUN_100e3bdd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_100e3baf0(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 100e3be7c; end: 100e3bf2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e3be7c(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112d3b300,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d3b308,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d3b310,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d3b318,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d3b320,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d3b328) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100e3bf2c; end: 100e3bf4b; -[SCSponsoredLensContextCardCtaServiceProvider init] */

void FUN_100e3bf2c(void)

{
  FUN_100e3be7c();
  return;
}



/* Entry: 100e3bf4c; end: 100e3bf7f;  */

void FUN_100e3bf4c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 100e3bf80; end: 100e3bff7; -[SCSponsoredLensContextCardCtaServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e3bf80(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d3b300);
  func_0x000107c61610(param_1 + _DAT_112d3b308);
  func_0x000107c61610(param_1 + _DAT_112d3b310);
  func_0x000107c61610(param_1 + _DAT_112d3b318);
  func_0x000107c61610(param_1 + _DAT_112d3b320);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d3b328));
  return;
}



/* Entry: 100e3bff8; end: 100e3c017;  */

void FUN_100e3bff8(void)

{
  func_0x000107c61168(&PTR_PTR_112d3b370);
  return;
}



/* Entry: 100e3c018; end: 100e3c4cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_100e3c018(undefined8 param_1,long param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7,long param_8)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x20;
  long lVar8;
  undefined8 uVar9;
  undefined1 auStack_d0 [24];
  long lStack_b8;
  undefined1 auStack_a8 [40];
  undefined1 auStack_80 [32];
  
  func_0x000107c613fc();
  plVar1 = (long *)(unaff_x20 + 0x10);
  *plVar1 = 0;
  lVar2 = _DAT_112f95ef0;
  lVar8 = *(long *)(param_3 + _DAT_112f95f38);
  func_0x000107c61428(lVar8 + _DAT_112f95ef0,auStack_80,0,0);
  lVar2 = *(long *)(lVar8 + lVar2);
  if (lVar2 == 0) {
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_8);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_6);
  }
  else {
    lVar8 = *(long *)(param_5 + _DAT_1130385c0);
    func_0x000107c61174();
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar8 == 0) {
      func_0x000107c61170(param_3);
      func_0x000107c61170(param_5);
      func_0x000107c61170(param_2);
      func_0x000107c61170(param_8);
      func_0x000107c61170(param_4);
      func_0x000107c61170(param_1);
      func_0x000107c61170(param_6);
      func_0x000107c61170(param_7);
      param_7 = lVar2;
    }
    else {
      uVar9 = *(undefined8 *)(param_2 + _DAT_112f962c0);
      func_0x000107c6157c(uVar9);
      func_0x0001000d224c(auStack_d0);
      func_0x000107c61574(uVar9);
      if (lStack_b8 == 0) {
        func_0x000107c61170(param_3);
        func_0x000107c61170(param_5);
        func_0x000107c61170(param_2);
        func_0x000107c61170(param_8);
        func_0x000107c61170(param_4);
        func_0x000107c61170(param_1);
        func_0x000107c61170(param_6);
        func_0x000107c61170(param_7);
        func_0x000107c615e8(lVar8);
        func_0x000107c61170(lVar2);
        FUN_100e3b4f0(auStack_d0);
        return unaff_x20;
      }
      FUN_100e3c4d0(auStack_d0,auStack_a8);
      lVar4 = param_6;
      func_0x000107c4af30();
      func_0x000107c61180();
      lVar3 = lVar4;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(lVar4);
      if (lVar3 == 0) {
        func_0x0001000834e4(auStack_a8);
        func_0x000107c61170(param_3);
        func_0x000107c61170(param_5);
        func_0x000107c61170(param_2);
        func_0x000107c61170(param_8);
      }
      else {
        lVar4 = *(long *)(param_8 + _DAT_113074f68);
        func_0x000107c5c734();
        func_0x000107c61180();
        if (lVar4 != 0) {
          func_0x0001000285a8(0x112d3b3f0,&UNK_10d904a98);
          func_0x000107c61174();
          func_0x000107c615f0(lVar8);
          lVar7 = lVar3;
          func_0x000107c4b3fc();
          func_0x000107c61180();
          lVar5 = lVar7;
          func_0x0001000b637c();
          func_0x000107c61170(lVar7);
          func_0x0001000285a8(0x112d3b3f8,&UNK_10d904aa0);
          uVar6 = *(undefined8 *)(param_4 + _DAT_113082480);
          func_0x000107c61174();
          uVar9 = uVar6;
          func_0x0001000b637c();
          func_0x000107c61170(uVar6);
          lVar7 = 0;
          func_0x000100e3eb04();
          func_0x000107c613fc();
          uVar6 = 0;
          func_0x0001005f60b4();
          *(undefined8 *)(lVar7 + 0x50) = 0;
          *(undefined8 *)(lVar7 + 0x48) = 0;
          *(undefined8 *)(lVar7 + 0x60) = 0;
          *(undefined8 *)(lVar7 + 0x58) = 0;
          *(undefined8 *)(lVar7 + 0x70) = 0;
          *(undefined8 *)(lVar7 + 0x68) = 0;
          func_0x000107c613fc();
          func_0x0001005f60d4();
          *(long *)(lVar7 + 0x80) = lVar5;
          *(undefined8 *)(lVar7 + 0x88) = uVar6;
          *(undefined1 *)(lVar7 + 0x90) = 0;
          *(undefined8 *)(lVar7 + 0x98) = 0;
          *(undefined8 *)(lVar7 + 0xa0) = 0;
          *(long *)(lVar7 + 0x10) = lVar2;
          *(long *)(lVar7 + 0x78) = lVar8;
          func_0x000100e3c5c4(auStack_a8,lVar7 + 0x18);
          *(undefined8 *)(lVar7 + 0x40) = uVar9;
          func_0x000107c61428(plVar1,auStack_d0,1,0);
          *plVar1 = lVar7;
          func_0x000107c6157c(lVar7);
          FUN_100e3db00();
          func_0x000107c61170(lVar2);
          func_0x000107c615e8(lVar8);
          func_0x000107c61170(param_3);
          func_0x000107c61170(param_5);
          func_0x000107c61170(param_2);
          func_0x000107c61170(param_8);
          func_0x000107c615e8(lVar3);
          func_0x000107c61170(param_4);
          func_0x000107c61170(param_1);
          func_0x000107c61170(param_6);
          func_0x000107c61170(param_7);
          func_0x000107c61574(lVar7);
          func_0x000107c615e8(lVar4);
          func_0x0001000834e4(auStack_a8);
          return unaff_x20;
        }
        func_0x0001000834e4(auStack_a8);
        func_0x000107c61170(param_3);
        func_0x000107c61170(param_5);
        func_0x000107c61170(param_2);
        func_0x000107c61170(param_8);
        func_0x000107c615e8(lVar3);
      }
      func_0x000107c61170(param_4);
      func_0x000107c61170(param_1);
      func_0x000107c61170(param_6);
      func_0x000107c61170(param_7);
      func_0x000107c615e8(lVar8);
      param_7 = lVar2;
    }
  }
  func_0x000107c61170(param_7);
  return unaff_x20;
}



/* Entry: 100e3c4d0; end: 100e3c4e7;  */

undefined8 * FUN_100e3c4d0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_1[1];
  uVar1 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  param_2[4] = param_1[4];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  param_2[3] = uVar4;
  param_2[2] = uVar3;
  return param_2;
}



/* Entry: 100e3c4e8; end: 100e3c577;  */

undefined8 FUN_100e3c4e8(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_70 [24];
  undefined8 uStack_58;
  long lStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (lVar1 != 0) {
    func_0x000107c6157c(lVar1);
    FUN_100e3dc3c(auStack_70);
    func_0x0001000a8868(auStack_70,uStack_58);
    (**(code **)(lStack_50 + 0x10))(uStack_58,lStack_50);
    func_0x000107c61574(lVar1);
    func_0x0001000834e4(auStack_70);
  }
  return 0;
}



/* Entry: 100e3c578; end: 100e3c59b;  */

void FUN_100e3c578(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 100e3c59c; end: 100e3c59f;  */

void FUN_100e3c59c(void)

{
  return;
}



/* Entry: 100e3c5a0; end: 100e3c607;  */

undefined8 FUN_100e3c5a0(void)

{
  FUN_100e3c4e8();
  return 0;
}



/* Entry: 100e3c608; end: 100e3c66b;  */

void FUN_100e3c608(void)

{
  func_0x000107c61168(&PTR_PTR_112d3b440);
  return;
}



/* Entry: 100e3c66c; end: 100e3c683;  */

void FUN_100e3c66c(void)

{
  return;
}



/* Entry: 100e3c684; end: 100e3c6ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_100e3c684(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112d3b580;
  puVar2 = *(undefined **)(unaff_x20 + _DAT_112d3b580);
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    func_0x000107c610f8();
    func_0x000107c48c2c();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar3;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    puVar2 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar2);
  return puVar3;
}



/* Entry: 100e3c700; end: 100e3c733; -[_TtC26SponsoredLensNorthstarImpl19NorthstarUIProvider uiContainer] */

void FUN_100e3c700(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_100e3c734();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100e3c734; end: 100e3c79f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_100e3c734(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112d3b588;
  lVar3 = *(long *)(unaff_x20 + _DAT_112d3b588);
  lVar2 = lVar3;
  if (lVar3 == 1) {
    lVar2 = unaff_x20;
    FUN_100e3c7ec();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar2;
    func_0x000107c61174();
    FUN_100e3da34(uVar4);
  }
  func_0x000100e3da44(lVar3);
  return lVar2;
}



/* Entry: 100e3c7a0; end: 100e3c7eb; -[_TtC26SponsoredLensNorthstarImpl19NorthstarUIProvider setUiContainer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e3c7a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112d3b588);
  *(undefined8 *)(param_1 + _DAT_112d3b588) = param_3;
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  FUN_100e3da34(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100e3c7ec; end: 100e3c953;  */

undefined * FUN_100e3c7ec(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  ppuVar6 = &puStack_b0;
  puVar3 = &UNK_110358d08;
  puVar2 = puVar3;
  func_0x000107c613fc(&UNK_110358d08,0x18,7);
  func_0x000107c61614(puVar2 + 0x10,param_1);
  func_0x000107c613fc(&UNK_110358d08,0x18,7);
  func_0x000107c61614(puVar3 + 0x10,param_1);
  puVar4 = PTR_PTR_1126aeaf8;
  func_0x000107c610f8(PTR_PTR_1126aeaf8);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0x100e3da54;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  uStack_70 = 0x100e1779c;
  puStack_68 = &UNK_110358d20;
  ppuVar5 = &puStack_80;
  puStack_58 = puVar2;
  func_0x000107c60bc4(ppuVar5);
  uStack_90 = 0x100e3da5c;
  puStack_b0 = puVar1;
  uStack_a8 = 0x42000000;
  uStack_a0 = 0x100e17304;
  puStack_98 = &UNK_110358d48;
  puStack_88 = puVar3;
  func_0x000107c60bc4(&puStack_b0);
  func_0x000107c6157c(puVar2);
  func_0x000107c6157c(puVar3);
  func_0x000107c47be0(puVar4);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61574(puStack_88);
  puVar1 = puStack_58;
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(puVar1);
  return puVar4;
}



/* Entry: 100e3c954; end: 100e3cb67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e3c954(undefined8 param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  ppuVar6 = &puStack_b0;
  func_0x000107c61428(param_2 + 0x10,auStack_68,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  lVar1 = _DAT_11380bb68;
  if (param_2 != 0) {
    lVar8 = *(long *)(param_2 + _DAT_112d3b550);
    func_0x000107c61428(lVar8 + _DAT_11380bb68,auStack_80,0,0);
    lVar8 = lVar8 + lVar1;
    func_0x000107c61618();
    if (lVar8 != 0) {
      if ((*(byte *)(param_2 + _DAT_112d3b540) & 1) == 0) {
        *(undefined1 *)(param_2 + _DAT_112d3b540) = 1;
        FUN_100e3cb68();
        puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
        func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
        puVar4 = &UNK_110358d80;
        func_0x000107c613fc(&UNK_110358d80,0x28,7);
        *(undefined8 *)(puVar4 + 0x10) = param_1;
        *(long *)(puVar4 + 0x18) = lVar8;
        *(long *)(puVar4 + 0x20) = param_2;
        puVar5 = &UNK_110358da8;
        func_0x000107c613fc(&UNK_110358da8,0x20,7);
        *(code **)(puVar5 + 0x10) = FUN_100e3da64;
        *(undefined **)(puVar5 + 0x18) = puVar4;
        pcStack_90 = FUN_100e3dabc;
        puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a8 = 0x42000000;
        puStack_a0 = &UNK_10006eb60;
        puStack_98 = &UNK_110358dc0;
        puStack_88 = puVar5;
        func_0x000107c60bc4(&puStack_b0);
        puVar7 = puStack_88;
        func_0x000107c61174();
        func_0x000107c61174(lVar8);
        func_0x000107c61174();
        func_0x000107c6157c(puVar5);
        func_0x000107c61574(puVar7);
        func_0x000107c4e5fc(puVar3);
        func_0x000107c61170(lVar8);
        func_0x000107c60bd0(ppuVar6);
        puVar7 = puVar5;
        func_0x000107c61544(puVar5,"",0x5a,0x2a,0x30,1);
        func_0x000107c61574(puVar5);
        if (((ulong)puVar7 & 1) != 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100e3cb68);
          (*pcVar2)();
        }
        lVar8 = *(long *)(param_2 + _DAT_112d3b568);
        *(undefined8 *)(param_2 + _DAT_112d3b568) = param_1;
        func_0x000107c61574(puVar4);
      }
      func_0x000107c61170(param_2);
      param_2 = lVar8;
    }
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 100e3cb68; end: 100e3ccef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_100e3cb68(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  
  lVar3 = param_1;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar3 != 0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c5e2ac();
    func_0x000107c61180();
    func_0x000107c52b50(lVar3);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(puVar2);
    func_0x000107c5677c(param_1);
    lVar3 = 0;
    FUN_100e3fcec();
    func_0x000107c614e8();
    func_0x000107c610f8();
    func_0x000107c453e4();
    *(byte *)(lVar3 + _DAT_112d3b718) = (*(byte *)(unaff_x20 + _DAT_112d3b548) ^ 0xff) & 1;
    FUN_100e3f740(param_1);
    func_0x000107c61604(unaff_x20 + _DAT_112d3b560,lVar3);
    puVar2 = PTR_PTR_1126b0a08;
    func_0x000107c610f8(PTR_PTR_1126b0a08);
    func_0x000107c48e8c();
    func_0x000107c52684();
    func_0x000107c5921c(puVar2);
    func_0x000107c52aa4(puVar2);
    func_0x000107c57250(puVar2);
    func_0x000107c5a05c(puVar2);
    func_0x000107c54d20(0x3feccccccccccccd,puVar2);
    func_0x000107c5a074(puVar2);
    func_0x000107c5a070(puVar2);
    func_0x000107c61170(lVar3);
    return puVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100e3ccf0);
  (*pcVar1)();
}



/* Entry: 100e3ccf0; end: 100e3cda3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e3ccf0(code *param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_48,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    if (*(char *)(param_3 + _DAT_112d3b540) == '\x01') {
      *(undefined1 *)(param_3 + _DAT_112d3b540) = 0;
      if (*(long *)(param_3 + _DAT_112d3b568) != 0) {
        func_0x000107c42018(*(long *)(param_3 + _DAT_112d3b568));
      }
      if (param_1 != (code *)0x0) {
        (*param_1)();
      }
      func_0x000107c61170();
      return;
    }
    func_0x000107c61170();
  }
  if (param_1 != (code *)0x0) {
    (*param_1)();
  }
  return;
}



/* Entry: 100e3cda4; end: 100e3ce7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_100e3cda4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined8 uVar5;
  
  lVar1 = _DAT_112d3b590;
  puVar2 = *(undefined **)(unaff_x20 + _DAT_112d3b590);
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x000107c610f8();
    func_0x000107c453e4();
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c3ea80();
    func_0x000107c61180();
    puVar4 = puVar2;
    func_0x000107c3fdd0(0x3fd3333333333333);
    func_0x000107c61180();
    func_0x000107c61170(puVar2);
    func_0x000107c52b50(puVar3,param_2,puVar4);
    func_0x000107c61170(puVar4);
    func_0x000107c5a050(puVar3,param_2,0);
    uVar5 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar3;
    func_0x000107c61174(puVar3);
    func_0x000107c61170(uVar5);
    puVar2 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar2);
  return puVar3;
}



/* Entry: 100e3ce80; end: 100e3cfb7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e3ce80(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_68 [24];
  
  func_0x000107c614f0();
  *(undefined1 *)(unaff_x20 + _DAT_112d3b540) = 0;
  func_0x000107c61614(unaff_x20 + _DAT_112d3b560,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d3b568) = 0;
  lVar2 = _DAT_112d3b578;
  uVar3 = 0;
  FUN_100e3f720();
  func_0x000107c610f8();
  func_0x000107c47ac0();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112d3b580) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d3b588) = 1;
  *(undefined8 *)(unaff_x20 + _DAT_112d3b590) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d3b570) = param_1;
  lVar2 = _DAT_11380bb60;
  func_0x000107c61428(param_2 + _DAT_11380bb60,auStack_68,0,0);
  *(undefined1 *)(unaff_x20 + _DAT_112d3b548) = *(undefined1 *)(param_2 + lVar2);
  *(long *)(unaff_x20 + _DAT_112d3b550) = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d3b558);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  func_0x000107c61154(&stack0xffffffffffffff88,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100e3cfb8; end: 100e3d36b;  */

/* WARNING: Possible PIC construction at 0x000100e3d038: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e3d074: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e3d0f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e3d148: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e3d19c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e3d1f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e3d218: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e3d278: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e3d2a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e3d2d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e3d314: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e3d324: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e3d318) */
/* WARNING: Removing unreachable block (ram,0x000100e3d2d8) */
/* WARNING: Removing unreachable block (ram,0x000100e3d2a4) */
/* WARNING: Removing unreachable block (ram,0x000100e3d27c) */
/* WARNING: Removing unreachable block (ram,0x000100e3d21c) */
/* WARNING: Removing unreachable block (ram,0x000100e3d244) */
/* WARNING: Removing unreachable block (ram,0x000100e3d248) */
/* WARNING: Removing unreachable block (ram,0x000100e3d1f4) */
/* WARNING: Removing unreachable block (ram,0x000100e3d1a0) */
/* WARNING: Removing unreachable block (ram,0x000100e3d14c) */
/* WARNING: Removing unreachable block (ram,0x000100e3d0f8) */
/* WARNING: Removing unreachable block (ram,0x000100e3d078) */
/* WARNING: Removing unreachable block (ram,0x000100e3d03c) */
/* WARNING: Removing unreachable block (ram,0x000100e3d328) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e3cfb8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112d3b570);
  func_0x000107c403cc();
  func_0x000107c61180();
  if (lVar1 != 0) {
    uVar2 = 0;
    FUN_100e3f580(0);
    func_0x000107c614e8();
    func_0x000107c610f8();
    func_0x000107c453e4();
    uVar3 = uVar2;
    FUN_100e3cda4();
    func_0x000107c61174(uVar2);
    func_0x000107c61174();
    func_0x000107c3d89c(uVar3,param_2,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar3);
    return;
  }
  return;
}



/* Entry: 100e3d36c; end: 100e3d387; -[_TtC26SponsoredLensNorthstarImpl19NorthstarUIProvider handleTap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e3d36c(long param_1)

{
  if (*(long *)(param_1 + _DAT_112d3b568) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c1dee90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(param_1 + _DAT_112d3b568),PTR_s_setPosition__1126555c8,8);
    return;
  }
  return;
}



/* Entry: 100e3d388; end: 100e3d3e7; -[_TtC26SponsoredLensNorthstarImpl19NorthstarUIProvider init] */

void FUN_100e3d388(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SponsoredLensNorthstarImpl.NorthstarUIProvider",0x2e,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100e3d3b4);
  (*pcVar1)();
}



/* Entry: 100e3d3e8; end: 100e3d493; -[_TtC26SponsoredLensNorthstarImpl19NorthstarUIProvider .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100e3d404: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e3d438: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e3d458: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e3d43c) */
/* WARNING: Removing unreachable block (ram,0x000100e3d408) */
/* WARNING: Removing unreachable block (ram,0x000100e3d45c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e3d3e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d3b550));
  return;
}



/* Entry: 100e3d494; end: 100e3d4b3;  */

void FUN_100e3d494(void)

{
  func_0x000107c61168(&PTR_PTR_11279aed8);
  return;
}



/* Entry: 100e3d4b4; end: 100e3d4b7; -[_TtC26SponsoredLensNorthstarImpl19NorthstarUIProvider tray:animateAuxiliaryViewsForTrayPosition:] */

void FUN_100e3d4b4(void)

{
  return;
}



/* Entry: 100e3d4b8; end: 100e3d50b; -[_TtC26SponsoredLensNorthstarImpl19NorthstarUIProvider tray:positionDidChange:] */

/* WARNING: Possible PIC construction at 0x000100e3d4f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e3d4f8) */

void FUN_100e3d4b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_100e3d568(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100e3d50c; end: 100e3d567; -[_TtC26SponsoredLensNorthstarImpl19NorthstarUIProvider tray:heightDidChange:] */

/* WARNING: Possible PIC construction at 0x000100e3d54c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e3d550) */

void FUN_100e3d50c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_2);
  FUN_100e3d908(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 100e3d568; end: 100e3d907;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e3d568(long param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined **ppuVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  long lVar9;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  ppuVar8 = &puStack_70;
  if (param_1 == 8) {
    puVar6 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
    puVar7 = &UNK_110358c68;
    func_0x000107c613fc(&UNK_110358c68,0x19,7);
    *(long *)(puVar7 + 0x10) = unaff_x20;
    puVar7[0x18] = 1;
    pcStack_50 = FUN_100e3d9c8;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_1000f6b44;
    puStack_58 = &UNK_110358c80;
    puStack_48 = puVar7;
    func_0x000107c60bc4(&puStack_70);
    puVar7 = puStack_48;
    func_0x000107c61174();
    func_0x000107c61574(puVar7);
    func_0x000107c3dccc(0x3fc3333333333333,puVar6);
    func_0x000107c60bd0(ppuVar8);
    *(undefined1 *)(unaff_x20 + _DAT_112d3b548) = 0;
    lVar9 = _DAT_112d3b560;
    lVar4 = unaff_x20 + _DAT_112d3b560;
    func_0x000107c61618();
    if (lVar4 != 0) {
      *(undefined1 *)(lVar4 + _DAT_112d3b718) = 1;
      func_0x000107c61170();
    }
    lVar9 = unaff_x20 + lVar9;
    func_0x000107c61618();
    if (lVar9 == 0) goto LAB_100e3d844;
    lVar4 = lVar9 + _DAT_112d3b720;
    func_0x000107c61618();
    func_0x000107c61170(lVar9);
    if (lVar4 == 0) goto LAB_100e3d844;
    lVar9 = lVar4;
    func_0x000107c5de64();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    if (lVar9 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100e3d904);
      (*pcVar2)();
    }
  }
  else {
    if (param_1 != 0x10) {
      lVar4 = *(long *)(unaff_x20 + _DAT_112d3b570);
      func_0x000107c403cc();
      func_0x000107c61180();
      if (lVar4 != 0) {
        lVar9 = lVar4;
        func_0x000107c3f250();
        func_0x000107c61180();
        if (lVar9 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100e3d900);
          (*pcVar2)();
        }
        func_0x000107c526c0(0x3ff0000000000000);
        func_0x000107c61170(lVar4);
        func_0x000107c61170(lVar9);
      }
      if (*(long *)(unaff_x20 + _DAT_112d3b568) == 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00010c201b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(long *)(unaff_x20 + _DAT_112d3b568),PTR_s_setShowHandle__11265e100,1);
      return;
    }
    puVar6 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
    puVar7 = &UNK_110358cb8;
    func_0x000107c613fc(&UNK_110358cb8,0x19,7);
    *(long *)(puVar7 + 0x10) = unaff_x20;
    puVar7[0x18] = 0;
    pcStack_50 = (code *)0x100e3dafc;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_1000f6b44;
    puStack_58 = &UNK_110358cd0;
    puStack_48 = puVar7;
    func_0x000107c60bc4(&puStack_70);
    puVar7 = puStack_48;
    func_0x000107c61174();
    func_0x000107c61574(puVar7);
    func_0x000107c3dccc(0x3fc3333333333333,puVar6);
    func_0x000107c60bd0(ppuVar3);
    *(undefined1 *)(unaff_x20 + _DAT_112d3b548) = 1;
    lVar4 = *(long *)(unaff_x20 + _DAT_112d3b570);
    func_0x000107c403cc();
    func_0x000107c61180();
    if (lVar4 != 0) {
      lVar9 = lVar4;
      func_0x000107c3f250();
      func_0x000107c61180();
      if (lVar9 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100e3d8fc);
        (*pcVar2)();
      }
      func_0x000107c526c0(0);
      func_0x000107c61170(lVar4);
      func_0x000107c61170(lVar9);
    }
    lVar4 = unaff_x20 + _DAT_112d3b560;
    func_0x000107c61618();
    if (lVar4 == 0) goto LAB_100e3d844;
    lVar5 = lVar4 + _DAT_112d3b720;
    func_0x000107c61618();
    func_0x000107c61170(lVar4);
    if (lVar5 == 0) goto LAB_100e3d844;
    lVar9 = lVar5;
    func_0x000107c5de64();
    func_0x000107c61180();
    func_0x000107c61170(lVar5);
    if (lVar9 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100e3d908);
      (*pcVar2)();
    }
  }
  func_0x000107c5a378(lVar9);
  func_0x000107c61170(lVar9);
LAB_100e3d844:
  pcVar2 = *(code **)(unaff_x20 + _DAT_112d3b558);
  uVar1 = ((undefined8 *)(unaff_x20 + _DAT_112d3b558))[1];
  func_0x000107c6157c(uVar1);
  (*pcVar2)();
  func_0x000107c61574(uVar1);
  return;
}



/* Entry: 100e3d908; end: 100e3d9c7;  */

/* WARNING: Possible PIC construction at 0x000100e3d950: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e3d980: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e3d954) */
/* WARNING: Removing unreachable block (ram,0x000100e3d984) */

void FUN_100e3d908(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x000107c61168(PTR__OBJC_CLASS___UIScreen_1126aea10);
  func_0x000107c4c194();
  func_0x000107c61180();
  func_0x000107c3ec60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 100e3d9c8; end: 100e3d9e7;  */

void FUN_100e3d9c8(undefined8 param_1)

{
  char cVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  cVar1 = *(char *)(unaff_x20 + 0x18);
  FUN_100e3cda4(*(undefined8 *)(unaff_x20 + 0x10));
  uVar2 = 0;
  if (cVar1 == '\0') {
    uVar2 = 0x3ff0000000000000;
  }
  func_0x000107c526c0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100e3d9e8; end: 100e3da33;  */

void FUN_100e3d9e8(undefined8 param_1)

{
  char cVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  cVar1 = *(char *)(unaff_x20 + 0x18);
  FUN_100e3cda4(*(undefined8 *)(unaff_x20 + 0x10));
  uVar2 = 0;
  if (cVar1 == '\0') {
    uVar2 = 0x3ff0000000000000;
  }
  func_0x000107c526c0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100e3da34; end: 100e3da63;  */

void FUN_100e3da34(long param_1)

{
  if (param_1 == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)();
  return;
}



/* Entry: 100e3da64; end: 100e3dabb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e3da64(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar3 = *(long *)(unaff_x20 + 0x20);
  func_0x000107c4ef28(0x3fc999999999999a,*(undefined8 *)(unaff_x20 + 0x10),param_2,uVar1,1);
  lVar2 = _DAT_112d3b578;
  func_0x000107c3d614(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bf77e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(lVar3 + lVar2),PTR_s_didMoveToParentViewController__1125bb948,uVar1);
  return;
}



/* Entry: 100e3dabc; end: 100e3dadb;  */

void FUN_100e3dabc(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 100e3dadc; end: 100e3daff;  */

void FUN_100e3dadc(long param_1,long param_2)

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



/* Entry: 100e3db00; end: 100e3dc3b;  */

/* WARNING: Possible PIC construction at 0x000100e3dba4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e3dba8) */

void FUN_100e3db00(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long unaff_x20;
  long *plVar5;
  code *pcVar6;
  
  plVar5 = *(long **)(unaff_x20 + 0x80);
  puVar1 = &UNK_110358df8;
  func_0x000107c613fc(&UNK_110358df8,0x18,7);
  func_0x000107c61644(puVar1 + 0x10);
  pcVar6 = *(code **)(*plVar5 + 0x60);
  func_0x000107c6157c(plVar5);
  uVar2 = 0x100e3ec80;
  puVar4 = puVar1;
  (*pcVar6)(0x100e3ec80);
  func_0x000107c61574(plVar5);
  func_0x000107c61574(puVar1);
  uVar3 = uVar2;
  func_0x000107c614f0(uVar2);
  (**(code **)(puVar4 + 0x18))(*(undefined8 *)(unaff_x20 + 0x88),uVar3,puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar2);
  return;
}



/* Entry: 100e3dc3c; end: 100e3dceb;  */

void FUN_100e3dc3c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_88 [24];
  long lStack_70;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [40];
  
  func_0x000107c61428(unaff_x20 + 0x48,auStack_60,0,0);
  func_0x000100e3eb6c(unaff_x20 + 0x48,auStack_88);
  if (lStack_70 == 0) {
    func_0x000100e3eb24(auStack_88);
    FUN_100e3dcec(param_1);
    FUN_100e3ec24(param_1,auStack_48);
    func_0x000107c61428(unaff_x20 + 0x48,auStack_88,0x21,0);
    func_0x000100e3ebbc(auStack_48,unaff_x20 + 0x48);
    func_0x000107c614a8(auStack_88);
  }
  else {
    FUN_100e3ec0c(auStack_88,auStack_48);
    FUN_100e3ec0c(auStack_48,param_1);
  }
  return;
}



/* Entry: 100e3dcec; end: 100e3de37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e3dcec(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  code *pcVar6;
  long alStack_c8 [3];
  long lStack_b0;
  undefined **ppuStack_a8;
  undefined1 auStack_a0 [24];
  undefined8 uStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  puVar1 = (undefined8 *)(*(long *)(param_2 + 0x10) + _DAT_11380bb58);
  func_0x000107c61428(puVar1,auStack_78,0,0);
  uVar5 = *puVar1;
  uVar2 = puVar1[1];
  lVar3 = 0;
  func_0x000100e3c64c();
  lVar4 = lVar3;
  func_0x000107c613fc();
  *(undefined8 *)(lVar4 + 0x10) = uVar5;
  *(undefined8 *)(lVar4 + 0x18) = uVar2;
  FUN_100e3ec24(param_2 + 0x18,auStack_a0);
  func_0x0001000a8868(auStack_a0,uStack_88);
  FUN_100e3ec68(uVar5,uVar2);
  FUN_100e3de38();
  ppuStack_a8 = &PTR_DAT_110358c38;
  pcVar6 = *(code **)(lStack_80 + 8);
  alStack_c8[0] = lVar4;
  lStack_b0 = lVar3;
  func_0x000107c6157c(lVar4);
  (*pcVar6)(param_1,uVar5,alStack_c8,4,uStack_88,lStack_80);
  func_0x000107c61170(uVar5);
  func_0x0001000834e4(alStack_c8);
  func_0x0001000834e4(auStack_a0);
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  lVar3 = *(long *)(param_1 + 0x20);
  func_0x0001000c6518(param_1,uVar5);
  (**(code **)(lVar3 + 0x30))(0,uVar5,lVar3);
  func_0x000107c61574(lVar4);
  return;
}



/* Entry: 100e3de38; end: 100e3deff;  */

long FUN_100e3de38(void)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = *(long *)(unaff_x20 + 0x70);
  lVar3 = lVar1;
  if (lVar1 == 0) {
    lVar3 = *(long *)(unaff_x20 + 0x78);
    uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
    puVar2 = &UNK_110358df8;
    func_0x000107c613fc(&UNK_110358df8,0x18,7);
    func_0x000107c61644(puVar2 + 0x10);
    FUN_100e3d494(0);
    func_0x000107c610f8();
    func_0x000107c615f0(lVar3);
    func_0x000107c61174(uVar4);
    FUN_100e3ce80(lVar3,uVar4,0x100e3ec78,puVar2);
    uVar4 = *(undefined8 *)(unaff_x20 + 0x70);
    *(long *)(unaff_x20 + 0x70) = lVar3;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar1 = 0;
  }
  func_0x000107c61174(lVar1);
  return lVar3;
}



/* Entry: 100e3df00; end: 100e3df53;  */

void FUN_100e3df00(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    FUN_100e3df54();
    func_0x000107c61574(param_1);
  }
  return;
}



/* Entry: 100e3df54; end: 100e3e05b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e3df54(long param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_48 [24];
  
  FUN_100e3de38();
  cVar1 = *(char *)(param_1 + _DAT_112d3b548);
  func_0x000107c61170();
  lVar2 = _DAT_11380bb50;
  if (cVar1 == '\x01') {
    lVar3 = *(long *)(unaff_x20 + 0x10);
    func_0x000107c61428(lVar3 + _DAT_11380bb50,auStack_48,0,0);
    lVar3 = lVar3 + lVar2;
    func_0x000107c61618();
    if (lVar3 != 0) {
      func_0x000107c5b7c8();
      func_0x000107c615e8(lVar3);
    }
  }
  else {
    lVar3 = *(long *)(unaff_x20 + 0xa0);
    if (lVar3 != 0) {
      uVar5 = *(undefined8 *)(unaff_x20 + 0x98);
      lVar4 = *(long *)(unaff_x20 + 0x10);
      func_0x000107c61428(lVar4 + _DAT_11380bb50,auStack_48,0,0);
      lVar4 = lVar4 + lVar2;
      func_0x000107c61618();
      if (lVar4 != 0) {
        func_0x000107c61434(lVar3);
        func_0x000107c5fadc(uVar5,lVar3);
        func_0x000107c6142c(lVar3);
        func_0x000107c5b7d0(lVar4);
        func_0x000107c615e8(lVar4);
        func_0x000107c61170(uVar5);
      }
    }
  }
  return;
}



/* Entry: 100e3e05c; end: 100e3e167;  */

void FUN_100e3e05c(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined1 auStack_58 [24];
  
  puVar3 = &UNK_110358df8;
  puVar1 = puVar3;
  func_0x000107c613fc(&UNK_110358df8,0x18,7);
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  lVar2 = param_2 + 0x10;
  func_0x000107c61648(lVar2);
  func_0x000107c61644(puVar1 + 0x10,lVar2);
  func_0x000107c613fc(&UNK_110358df8,0x18,7);
  param_2 = param_2 + 0x10;
  func_0x000107c61648(param_2);
  func_0x000107c61574(lVar2);
  func_0x000107c61644(puVar3 + 0x10,param_2);
  func_0x000107c61574(param_2);
  func_0x0001008546f4(FUN_100e3e168,0,0x100e3ec90,puVar1,0x100e3ec98,puVar3,FUN_100e3e708,0,
                      0x100e3e70c,0);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar3);
  return;
}



/* Entry: 100e3e168; end: 100e3e16b;  */

void FUN_100e3e168(void)

{
  return;
}



/* Entry: 100e3e16c; end: 100e3e253;  */

void FUN_100e3e16c(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  lVar1 = param_2 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    if ((*(byte *)(lVar1 + 0x90) & 1) == 0) {
      *(undefined1 *)(lVar1 + 0x90) = 1;
      FUN_100e3e710();
      FUN_100e3de38();
      FUN_100e3cfb8();
      func_0x000107c61170(lVar1);
    }
    func_0x000107c61574();
  }
  func_0x000107c61428(param_2 + 0x10,auStack_60,0,0);
  lVar1 = param_2 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    FUN_100e3e254();
    func_0x000107c61574(lVar1);
  }
  func_0x000107c61428(param_2 + 0x10,auStack_78,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    FUN_100e3df54();
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 100e3e254; end: 100e3e5ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e3e254(void)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 *puVar16;
  long extraout_x8;
  long unaff_x20;
  undefined8 *puVar17;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uStack_250;
  undefined1 *apuStack_248 [6];
  long alStack_210 [14];
  undefined1 auStack_1a0 [24];
  undefined1 auStack_188 [24];
  undefined1 auStack_170 [24];
  undefined1 auStack_158 [24];
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
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
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  lVar13 = 0;
  func_0x0001037c76fc();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar13 + -8) + 0x40));
  lVar8 = _DAT_112f95ff0;
  lVar7 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar17 = (undefined8 *)((long)&uStack_250 + lVar7);
  lVar18 = *(long *)(unaff_x20 + 0x10);
  puVar16 = auStack_f8;
  func_0x000107c61428(lVar18 + _DAT_112f95ff0,puVar16,0,0);
  uVar14 = *(undefined8 *)(lVar18 + lVar8);
  func_0x000107c4b1dc();
  func_0x000107c61180();
  uVar15 = uVar14;
  func_0x000107c5faec();
  apuStack_248[4] = puVar16;
  apuStack_248[5] = (undefined1 *)uVar15;
  func_0x000107c61170(uVar14);
  lVar8 = _DAT_11380bb48;
  lVar19 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c61428(lVar19 + _DAT_11380bb48,auStack_110,0,0);
  iVar6 = *(int *)(lVar13 + 0x14);
  lVar18 = 0;
  func_0x000107c5ede0();
  (**(code **)(*(long *)(lVar18 + -8) + 0x10))((long)puVar17 + (long)iVar6,lVar19 + lVar8,lVar18);
  puVar1 = (undefined8 *)(lVar19 + _DAT_112f95ff8);
  func_0x000107c61428(puVar1,auStack_128,0,0);
  uStack_d8 = puVar1[1];
  uStack_e0 = *puVar1;
  uStack_c8 = puVar1[3];
  uStack_d0 = puVar1[2];
  uStack_b8 = puVar1[5];
  uStack_c0 = puVar1[4];
  uStack_a8 = puVar1[7];
  uStack_b0 = puVar1[6];
  uStack_98 = puVar1[9];
  uStack_a0 = puVar1[8];
  uStack_88 = puVar1[0xb];
  uStack_90 = puVar1[10];
  uStack_78 = puVar1[0xd];
  uStack_80 = puVar1[0xc];
  puVar1 = (undefined8 *)(lVar19 + _DAT_11380bb58);
  func_0x000107c61428(puVar1,auStack_140,0,0);
  apuStack_248[3] = (undefined1 *)*puVar1;
  apuStack_248[2] = (undefined1 *)puVar1[1];
  puVar1 = (undefined8 *)(lVar19 + _DAT_11380bb70);
  func_0x000107c61428(puVar1,auStack_158,0,0);
  uVar15 = *puVar1;
  uVar3 = puVar1[1];
  uVar14 = puVar1[2];
  uVar4 = puVar1[3];
  puVar1 = (undefined8 *)(lVar19 + _DAT_11380bb78);
  func_0x000107c61428(puVar1,auStack_170,0,0);
  lVar8 = _DAT_11380bb80;
  apuStack_248[1] = (undefined1 *)*puVar1;
  uVar5 = puVar1[1];
  func_0x000107c61428(lVar19 + _DAT_11380bb80,auStack_188,0,0);
  uStack_250._4_4_ = (uint)*(byte *)(lVar19 + lVar8);
  puVar1 = (undefined8 *)(lVar19 + _DAT_11380bb88);
  func_0x000107c61428(puVar1,auStack_1a0,0,0);
  puVar16 = apuStack_248[4];
  iVar6 = *(int *)(lVar13 + 0x18);
  apuStack_248[0] = (undefined1 *)puVar1[1];
  uVar21 = puVar1[1];
  uVar20 = *puVar1;
  *puVar17 = apuStack_248[5];
  *(undefined1 **)((long)apuStack_248 + lVar7) = puVar16;
  *(undefined8 *)((long)puVar17 + (long)iVar6) = 0;
  puVar2 = (undefined4 *)((long)puVar17 + (long)*(int *)(lVar13 + 0x1c));
  *puVar2 = 0x10101;
  *(undefined8 *)(puVar2 + 4) = 0;
  *(undefined8 *)(puVar2 + 2) = 0;
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 6) = 0;
  *(undefined8 *)(puVar2 + 0xc) = 0;
  *(undefined8 *)(puVar2 + 10) = 0;
  *(undefined8 *)((long)puVar2 + 0x39) = 0;
  *(undefined8 *)((long)puVar2 + 0x31) = 0;
  uVar12 = uStack_88;
  uVar11 = uStack_90;
  uVar10 = uStack_a0;
  puVar1 = (undefined8 *)((long)puVar17 + (long)*(int *)(lVar13 + 0x20));
  puVar1[9] = uStack_98;
  puVar1[8] = uVar10;
  puVar1[0xb] = uVar12;
  puVar1[10] = uVar11;
  uVar10 = uStack_80;
  puVar1[0xd] = uStack_78;
  puVar1[0xc] = uVar10;
  uVar12 = uStack_c8;
  uVar11 = uStack_d0;
  uVar10 = uStack_e0;
  puVar1[1] = uStack_d8;
  *puVar1 = uVar10;
  puVar1[3] = uVar12;
  puVar1[2] = uVar11;
  uVar12 = uStack_a8;
  uVar11 = uStack_b0;
  uVar10 = uStack_c0;
  puVar16 = apuStack_248[2];
  puVar1[5] = uStack_b8;
  puVar1[4] = uVar10;
  puVar9 = apuStack_248[3];
  puVar1[7] = uVar12;
  puVar1[6] = uVar11;
  puVar1 = (undefined8 *)((long)puVar17 + (long)*(int *)(lVar13 + 0x24));
  *puVar1 = apuStack_248[3];
  puVar1[1] = puVar16;
  puVar1 = (undefined8 *)((long)puVar17 + (long)*(int *)(lVar13 + 0x28));
  *puVar1 = uVar15;
  puVar1[1] = uVar3;
  puVar1[2] = uVar14;
  puVar1[3] = uVar4;
  puVar1 = (undefined8 *)((long)puVar17 + (long)*(int *)(lVar13 + 0x2c));
  *puVar1 = apuStack_248[1];
  puVar1[1] = uVar5;
  *(char *)((long)puVar17 + (long)*(int *)(lVar13 + 0x30)) = (char)uStack_250._4_4_;
  puVar1 = (undefined8 *)((long)puVar17 + (long)*(int *)(lVar13 + 0x34));
  puVar1[1] = uVar21;
  *puVar1 = uVar20;
  FUN_100e3eca0(&uStack_e0,alStack_210);
  FUN_100e3ec68(puVar9,puVar16);
  func_0x000100e3ecdc(uVar15,uVar3,uVar14,uVar4);
  func_0x000107c61434(apuStack_248[0]);
  func_0x000107c61434(uVar5);
  FUN_100e3dc3c(alStack_210);
  func_0x0001000a8868(alStack_210,alStack_210[3]);
  (**(code **)(alStack_210[4] + 8))(puVar17,alStack_210[3],alStack_210[4]);
  func_0x000100e3ed0c(puVar17);
  func_0x0001000834e4(alStack_210);
  return;
}



/* Entry: 100e3e5ac; end: 100e3e707;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e3e5ac(undefined8 param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  lVar2 = param_2 + 0x10;
  func_0x000107c61648();
  if (lVar2 != 0) {
    lVar4 = lVar2;
    FUN_100e3de38();
    func_0x000107c61574(lVar2);
    if (*(char *)(lVar4 + _DAT_112d3b548) == '\x01') {
      lVar2 = *(long *)(lVar4 + _DAT_112d3b570);
      func_0x000107c403cc();
      func_0x000107c61180();
      if (lVar2 != 0) {
        lVar3 = lVar2;
        func_0x000107c3f250();
        func_0x000107c61180();
        if (lVar3 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100e3e708);
          (*pcVar1)();
        }
        func_0x000107c526c0(0);
        func_0x000107c61170(lVar2);
        func_0x000107c61170(lVar3);
      }
    }
    func_0x000107c61170(lVar4);
  }
  func_0x000107c61428(param_2 + 0x10,auStack_60,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    lVar4 = *(long *)(param_2 + 0x10);
    func_0x000107c61174();
    func_0x000107c61574(param_2);
    lVar2 = _DAT_11380bb50;
    func_0x000107c61428(lVar4 + _DAT_11380bb50,auStack_78,0,0);
    lVar2 = lVar4 + lVar2;
    func_0x000107c61618();
    func_0x000107c61170(lVar4);
    if (lVar2 != 0) {
      func_0x000107c5b7cc(lVar2);
      func_0x000107c615e8(lVar2);
    }
  }
  return;
}



/* Entry: 100e3e708; end: 100e3e70f;  */

void FUN_100e3e708(void)

{
  return;
}



/* Entry: 100e3e710; end: 100e3e8ef;  */

/* WARNING: Possible PIC construction at 0x000100e3e774: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e3e7cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e3e804: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e3e8a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e3e808) */
/* WARNING: Removing unreachable block (ram,0x000100e3e7d0) */
/* WARNING: Removing unreachable block (ram,0x000100e3e778) */
/* WARNING: Removing unreachable block (ram,0x000100e3e8ec) */
/* WARNING: Removing unreachable block (ram,0x000100e3e798) */
/* WARNING: Removing unreachable block (ram,0x000100e3e8a8) */

void FUN_100e3e710(void)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x78);
  func_0x000107c403cc();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c438d4();
    puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x000107c61168(PTR__OBJC_CLASS___UIScreen_1126aea10);
    func_0x000107c4c194();
    func_0x000107c61180();
    func_0x000107c3ec60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 100e3e8f0; end: 100e3ea87;  */

void FUN_100e3e8f0(long *param_1,long param_2)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined1 auStack_48 [24];
  
  lVar3 = *param_1;
  lVar1 = lVar3;
  func_0x000107c5bcc0();
  if (lVar1 == 1) {
    puVar2 = auStack_48;
    func_0x000107c61428(param_2 + 0x10,puVar2,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61648();
    if (param_2 != 0) {
      func_0x000107c52060(lVar3);
      func_0x000107c61180();
      lVar1 = lVar3;
      func_0x000107c5faec();
      func_0x000107c61170(lVar3);
      func_0x000100e3e998(lVar1,puVar2);
      func_0x000107c61574(param_2);
      func_0x000107c6142c(puVar2);
    }
  }
  return;
}



/* Entry: 100e3ea88; end: 100e3eb23;  */

void FUN_100e3ea88(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x0001000834e4(unaff_x20 + 0x18);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  FUN_100e3eb24(unaff_x20 + 0x48);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0xa0));
  return;
}



/* Entry: 100e3eb24; end: 100e3ec0b;  */

undefined8 FUN_100e3eb24(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112d3b6a8;
  func_0x0001000285a8(0x112d3b6a8,&UNK_10d904be8);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 100e3ec0c; end: 100e3ec23;  */

undefined8 * FUN_100e3ec0c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_1[1];
  uVar1 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  param_2[4] = param_1[4];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  param_2[3] = uVar4;
  param_2[2] = uVar3;
  return param_2;
}



/* Entry: 100e3ec24; end: 100e3ec67;  */

long FUN_100e3ec24(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 100e3ec68; end: 100e3ec9f;  */

void FUN_100e3ec68(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_retain_11034f4d0)(param_2);
    return;
  }
  return;
}



/* Entry: 100e3eca0; end: 100e3ed47;  */

undefined8 FUN_100e3eca0(undefined8 param_1,undefined8 param_2)

{
  (*(code *)&DAT_104191310)(param_2,param_1);
  return param_2;
}



/* Entry: 100e3ed48; end: 100e3ed5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_100e3ed48(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112d3b6b0;
  lVar2 = *(long *)(unaff_x20 + _DAT_112d3b6b0);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    FUN_100e3ed5c();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar2;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar3 = 0;
  }
  func_0x000107c61174(lVar3);
  return lVar2;
}



/* Entry: 100e3ed5c; end: 100e3ee27;  */

undefined * FUN_100e3ed5c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126aea58;
  func_0x000107c610f8(PTR_PTR_1126aea58);
  func_0x000107c453e4();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c61174(puVar1);
  func_0x000107c5af88(puVar2);
  func_0x000107c61180();
  func_0x000107c59c78(puVar1);
  func_0x000107c61170(puVar2);
  func_0x000107c5a050(puVar1);
  puVar2 = puVar1;
  func_0x000107c56ba8(puVar1);
  FUN_100e3fdc4();
  func_0x000107c5fadc();
  func_0x000107c6142c(param_2);
  func_0x000107c59c6c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar2);
  return puVar1;
}



/* Entry: 100e3ee28; end: 100e3ee3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_100e3ee28(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112d3b6b8;
  lVar2 = *(long *)(unaff_x20 + _DAT_112d3b6b8);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    (*(code *)0x100e3ee98)();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar2;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar3 = 0;
  }
  func_0x000107c61174(lVar3);
  return lVar2;
}



/* Entry: 100e3ee3c; end: 100e3f0cf;  */

long FUN_100e3ee3c(long *param_1,code *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar3 = *param_1;
  lVar1 = *(long *)(unaff_x20 + lVar3);
  lVar2 = lVar1;
  if (lVar1 == 0) {
    (*param_2)();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar3);
    *(long *)(unaff_x20 + lVar3) = lVar1;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar2 = 0;
  }
  func_0x000107c61174(lVar2);
  return lVar1;
}



/* Entry: 100e3f0d0; end: 100e3f46b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_100e3f0d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long unaff_x20;
  
  puVar2 = &stack0xffffffffffffff70;
  *(undefined8 *)(unaff_x20 + _DAT_112d3b6b0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d3b6b8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d3b6c0) = 0;
  FUN_100e3f580();
  func_0x000107c61154(param_1,param_2,param_3,param_4,&stack0xffffffffffffff70,
                      PTR_s_initWithFrame__1125e2948);
  func_0x000107c61180();
  func_0x000107c61174();
  puVar3 = puVar2;
  func_0x000107c5a050();
  func_0x000100e3ef64();
  func_0x000107c3d89c(puVar2);
  func_0x000107c61170(puVar3);
  puVar4 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c61168();
  puVar5 = puVar4;
  func_0x0001008478a8();
  func_0x000107c613fc();
  *(undefined8 *)(puVar5 + 0x18) = 0xf;
  *(undefined8 *)(puVar5 + 0x10) = 7;
  lVar1 = _DAT_112d3b6c0;
  uVar6 = *(undefined8 *)(puVar2 + _DAT_112d3b6c0);
  func_0x000107c5cbe4();
  func_0x000107c61180();
  puVar3 = puVar2;
  func_0x000107c5cbe4(puVar2);
  func_0x000107c61180();
  uVar8 = uVar6;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar6);
  func_0x000107c61170(puVar3);
  *(undefined8 *)(puVar5 + 0x20) = uVar8;
  uVar6 = *(undefined8 *)(puVar2 + lVar1);
  func_0x000107c4ace0();
  func_0x000107c61180();
  puVar3 = puVar2;
  func_0x000107c4ace0(puVar2);
  func_0x000107c61180();
  uVar8 = uVar6;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar6);
  func_0x000107c61170(puVar3);
  *(undefined8 *)(puVar5 + 0x28) = uVar8;
  uVar6 = *(undefined8 *)(puVar2 + lVar1);
  func_0x000107c50890();
  func_0x000107c61180();
  puVar3 = puVar2;
  func_0x000107c50890(puVar2);
  func_0x000107c61180();
  uVar8 = uVar6;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar6);
  func_0x000107c61170(puVar3);
  *(undefined8 *)(puVar5 + 0x30) = uVar8;
  uVar6 = *(undefined8 *)(puVar2 + lVar1);
  func_0x000107c3f75c();
  func_0x000107c61180();
  puVar3 = puVar2;
  func_0x000107c3f75c(puVar2);
  func_0x000107c61180();
  uVar8 = uVar6;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar6);
  func_0x000107c61170(puVar3);
  *(undefined8 *)(puVar5 + 0x38) = uVar8;
  uVar6 = *(undefined8 *)(puVar2 + lVar1);
  func_0x000107c3ec1c();
  func_0x000107c61180();
  puVar3 = puVar2;
  func_0x000107c3ec1c();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  uVar8 = uVar6;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar6);
  func_0x000107c61170();
  *(undefined8 *)(puVar5 + 0x40) = uVar8;
  FUN_100e3ee28();
  puVar7 = puVar3;
  func_0x000107c44d9c();
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  puVar3 = puVar7;
  func_0x000107c40290(0x4034000000000000);
  func_0x000107c61180();
  func_0x000107c61170(puVar7);
  *(undefined1 **)(puVar5 + 0x48) = puVar3;
  uVar6 = *(undefined8 *)(puVar2 + _DAT_112d3b6b8);
  func_0x000107c5e308();
  func_0x000107c61180();
  uVar8 = uVar6;
  func_0x000107c40290(0x4034000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar6);
  *(undefined8 *)(puVar5 + 0x50) = uVar8;
  uVar8 = 0;
  FUN_100e3f5a0(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  puVar9 = puVar5;
  func_0x000107c5fc48(puVar5,uVar8);
  func_0x000107c61574(puVar5);
  func_0x000107c3d048(puVar4);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar9);
  return puVar2;
}



/* Entry: 100e3f46c; end: 100e3f48b; -[_TtC26SponsoredLensNorthstarImpl14TapToTryOnView initWithFrame:] */

void FUN_100e3f46c(void)

{
  FUN_100e3f0d0();
  return;
}



/* Entry: 100e3f48c; end: 100e3f537; -[_TtC26SponsoredLensNorthstarImpl14TapToTryOnView initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e3f48c(long param_1)

{
  code *pcVar1;
  
  *(undefined8 *)(param_1 + _DAT_112d3b6b0) = 0;
  *(undefined8 *)(param_1 + _DAT_112d3b6b8) = 0;
  *(undefined8 *)(param_1 + _DAT_112d3b6c0) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "SponsoredLensNorthstarImpl/TapToTryOnView.swift",0x2f,2,0x3e,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100e3f508);
  (*pcVar1)();
}



/* Entry: 100e3f538; end: 100e3f57f; -[_TtC26SponsoredLensNorthstarImpl14TapToTryOnView .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100e3f554: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e3f558) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e3f538(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d3b6b0));
  return;
}



/* Entry: 100e3f580; end: 100e3f59f;  */

void FUN_100e3f580(void)

{
  func_0x000107c61168(&PTR_PTR_11279afe8);
  return;
}


