/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10889dc40; end: 10889dd4f;  */

/* WARNING: Removing unreachable block (ram,0x00010889dd18) */

void FUN_10889dc40(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_70 [23];
  undefined1 uStack_59;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  uStack_50 = param_6;
  uStack_48 = param_5;
  uStack_40 = param_4;
  uStack_38 = param_3;
  uStack_30 = param_2;
  lStack_28 = param_1;
  FUN_1088954f0();
  uStack_59 = 0;
  uStack_58 = param_2;
  FUN_10889cc28(param_2);
  FUN_10889cc58(auStack_70,uStack_58);
  func_0x00010889cca0(param_1,param_2,auStack_70);
  FUN_10889cd18(param_1);
  FUN_10889cce4();
  uVar1 = uStack_58;
  lVar2 = param_1;
  FUN_10889cb20(param_1);
  func_0x000108895568();
  func_0x000108895554();
  FUN_10889dd50(uVar1,lVar2,uStack_40,uStack_48,uStack_50);
  FUN_10889cd60();
  *(undefined1 *)(param_1 + 8) = 1;
  return;
}



/* Entry: 10889dd50; end: 10889de0b;  */

void FUN_10889dd50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x00010889dd90(param_2,param_3,param_4,param_5);
  return;
}



/* Entry: 10889de0c; end: 10889dedf;  */

undefined8 FUN_10889de0c(undefined8 param_1,undefined8 param_2)

{
  undefined1 uStack_31;
  undefined8 auStack_30 [2];
  
  auStack_30[0] = param_2;
  func_0x00010889de4c(param_1,auStack_30,&uStack_31);
  return param_1;
}



/* Entry: 10889dee0; end: 10889def3;  */

undefined8 FUN_10889dee0(undefined8 param_1)

{
  return param_1;
}



/* Entry: 10889def4; end: 10889df27;  */

undefined8 FUN_10889def4(undefined8 param_1)

{
  FUN_10889df28(param_1);
  return param_1;
}



/* Entry: 10889df28; end: 10889df6f;  */

long FUN_10889df28(long param_1)

{
  FUN_10889df70(param_1);
  *(undefined8 *)(param_1 + 0x10) = 0;
  func_0x00010889dfa4(param_1 + 0x10);
  return param_1;
}



/* Entry: 10889df70; end: 10889e01b;  */

undefined8 FUN_10889df70(undefined8 param_1)

{
  func_0x00010889dfd8(param_1);
  return param_1;
}



/* Entry: 10889e01c; end: 10889e03f;  */

void FUN_10889e01c(undefined8 param_1)

{
  FUN_1088915c8(param_1);
  return;
}



/* Entry: 10889e040; end: 10889e073;  */

undefined8 FUN_10889e040(undefined8 param_1)

{
  FUN_10889e074(param_1);
  return param_1;
}



/* Entry: 10889e074; end: 10889e087;  */

undefined8 FUN_10889e074(undefined8 param_1)

{
  return param_1;
}



/* Entry: 10889e088; end: 10889e0f7;  */

undefined8 FUN_10889e088(undefined8 param_1,undefined8 param_2)

{
  func_0x00010889e280(param_1,param_2);
  return param_1;
}



/* Entry: 10889e0f8; end: 10889e157;  */

undefined8 FUN_10889e0f8(undefined8 param_1)

{
  undefined1 auStack_18 [8];
  
  func_0x00010889e2bc(auStack_18);
  return param_1;
}



/* Entry: 10889e158; end: 10889e24b;  */

void FUN_10889e158(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long *plVar2;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  long *plStack_70;
  long *plStack_68;
  long *plStack_60;
  long alStack_58 [3];
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_40 = 2;
  uStack_38 = param_3;
  uStack_30 = param_2;
  uStack_28 = param_1;
  func_0x000107c28874(alStack_58);
  plVar1 = alStack_58;
  FUN_1088948d8();
  plVar2 = alStack_58;
  plStack_60 = plVar1;
  func_0x0001088948fc();
  plVar1 = alStack_58;
  plStack_68 = plVar2;
  func_0x000108894924();
  plStack_70 = plVar1;
  func_0x000107c28878(auStack_78,2);
  FUN_10889494c(*plStack_70 + 0x18,auStack_78);
  func_0x000108894998(auStack_78);
  *(undefined8 *)(*plStack_70 + 8) = 2;
  func_0x000107c2887c(*plStack_70,plStack_68);
  FUN_10889e320(*plStack_70,uStack_30,uStack_38);
  func_0x00010888e0d4(auStack_80,plStack_60);
  func_0x0001088949cc(param_1,auStack_80);
  func_0x000107c27f9c(auStack_80);
  func_0x000108894a08(alStack_58);
  return;
}



/* Entry: 10889e24c; end: 10889e2ef;  */

undefined8 FUN_10889e24c(undefined8 param_1)

{
  FUN_10889e56c(param_1);
  return param_1;
}



/* Entry: 10889e2f0; end: 10889e31f;  */

void FUN_10889e2f0(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}



/* Entry: 10889e320; end: 10889e37f;  */

void FUN_10889e320(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c28894(param_1,0,param_2);
  func_0x000107c28898(param_1,1,param_3);
  return;
}



/* Entry: 10889e380; end: 10889e437;  */

undefined8 FUN_10889e380(undefined8 param_1)

{
  FUN_10889e458();
  return param_1;
}



/* Entry: 10889e438; end: 10889e457;  */

void FUN_10889e438(long *param_1)

{
  *param_1 = *(long *)(*param_1 + 8);
  return;
}



/* Entry: 10889e458; end: 10889e487;  */

undefined8 FUN_10889e458(long param_1)

{
  undefined8 uStack_18;
  
  FUN_10889e488(&uStack_18,*(undefined8 *)(param_1 + 8));
  return uStack_18;
}



/* Entry: 10889e488; end: 10889e4c3;  */

undefined8 FUN_10889e488(undefined8 param_1,undefined8 param_2)

{
  FUN_10889e4c4(param_1,param_2);
  return param_1;
}



/* Entry: 10889e4c4; end: 10889e4e3;  */

void FUN_10889e4c4(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}



/* Entry: 10889e4e4; end: 10889e517;  */

undefined8 FUN_10889e4e4(undefined8 param_1)

{
  undefined8 uStack_18;
  
  FUN_108891544(param_1);
  FUN_10889e488(&uStack_18,param_1);
  return uStack_18;
}



/* Entry: 10889e518; end: 10889e547;  */

bool FUN_10889e518(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 10889e548; end: 10889e56b;  */

void FUN_10889e548(undefined8 param_1)

{
  FUN_1088915c8(param_1);
  return;
}



/* Entry: 10889e56c; end: 10889e59f;  */

undefined8 FUN_10889e56c(undefined8 param_1)

{
  func_0x000107c27fb8(param_1);
  return param_1;
}



/* Entry: 10889e5a0; end: 10889e60f;  */

void FUN_10889e5a0(undefined8 param_1,undefined8 param_2)

{
  FUN_10889e610(param_1,param_2);
  return;
}



/* Entry: 10889e610; end: 10889e623;  */

void FUN_10889e610(void)

{
  return;
}



/* Entry: 10889e624; end: 10889e737;  */

void FUN_10889e624(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uStack_78;
  undefined8 auStack_70 [2];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  uStack_38 = param_1;
  uStack_30 = param_3;
  uStack_28 = param_2;
  FUN_10888c300();
  uVar2 = param_1;
  uStack_40 = uVar1;
  func_0x00010888c32c();
  uStack_48 = uVar2;
  while( true ) {
    puVar3 = &uStack_28;
    func_0x00010889e3d8(puVar3,&uStack_30);
    puVar4 = (undefined8 *)0x0;
    if (((ulong)puVar3 & 1) != 0) {
      puVar4 = &uStack_40;
      func_0x00010888c358(puVar4,&uStack_48);
    }
    if (((ulong)puVar4 & 1) == 0) break;
    func_0x00010889e40c(&uStack_28);
    func_0x00010888c38c(&uStack_40);
    FUN_10865a52c();
    FUN_10889e438(&uStack_28);
    FUN_10888c5bc(&uStack_40);
  }
  puVar3 = &uStack_40;
  FUN_10889e738(puVar3,&uStack_48);
  if (((ulong)puVar3 & 1) == 0) {
    FUN_10889e938(auStack_70,&uStack_40);
    FUN_10889e938(&uStack_78,&uStack_48);
    func_0x00010889e974(param_1,auStack_70[0],uStack_78);
  }
  else {
    FUN_10889e938(&uStack_50,&uStack_48);
    uStack_58 = uStack_28;
    uStack_60 = uStack_30;
    FUN_10889e768(param_1,uStack_50,uStack_28,uStack_30);
  }
  return;
}



/* Entry: 10889e738; end: 10889e767;  */

bool FUN_10889e738(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 10889e768; end: 10889e937;  */

long FUN_10889e768(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_48 = param_1;
  uStack_40 = param_4;
  uStack_38 = param_3;
  uStack_30 = param_2;
  func_0x00010889ea1c(&lStack_28,param_2);
  puVar1 = &uStack_38;
  func_0x00010889e3d8(puVar1,&uStack_40);
  if (((ulong)puVar1 & 1) != 0) {
    lStack_50 = 0;
    puVar1 = &uStack_38;
    func_0x00010889e40c(puVar1);
    lVar2 = param_1;
    FUN_10865b644(param_1,0,0,puVar1);
    lStack_50 = lStack_50 + 1;
    lStack_58 = lVar2;
    FUN_10889e548(lVar2);
    func_0x00010889ea1c(&lStack_60,lVar2);
    lStack_28 = lStack_60;
    lStack_68 = lStack_60;
    FUN_10889e438(&uStack_38);
    while( true ) {
      puVar1 = &uStack_38;
      func_0x00010889e3d8(puVar1,&uStack_40);
      lVar2 = lStack_68;
      if (((ulong)puVar1 & 1) == 0) break;
      puVar1 = &uStack_38;
      func_0x00010889e40c(puVar1);
      lVar3 = param_1;
      FUN_10865b644(param_1,lVar2,0,puVar1);
      FUN_10889e548();
      *(long *)(lStack_68 + 8) = lVar3;
      FUN_10889e438(&uStack_38);
      FUN_10888c5bc(&lStack_68);
      lStack_50 = lStack_50 + 1;
    }
    FUN_10889ea58(uStack_30,lStack_28,lStack_68);
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + lStack_50;
  }
  return lStack_28;
}



/* Entry: 10889e938; end: 10889ea57;  */

undefined8 FUN_10889e938(undefined8 param_1,undefined8 param_2)

{
  func_0x00010889eac8(param_1,param_2);
  return param_1;
}



/* Entry: 10889ea58; end: 10889eaa7;  */

void FUN_10889ea58(long *param_1,long *param_2,long param_3)

{
  *(long **)(*param_1 + 8) = param_2;
  *param_2 = *param_1;
  *param_1 = param_3;
  *(long **)(param_3 + 8) = param_1;
  return;
}



/* Entry: 10889eaa8; end: 10889eaeb;  */

void FUN_10889eaa8(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}



/* Entry: 10889eaec; end: 10889eb4f;  */

undefined8 FUN_10889eaec(long param_1)

{
  undefined8 uStack_18;
  
  func_0x00010889ea1c(&uStack_18,*(undefined8 *)(param_1 + 8));
  return uStack_18;
}



/* Entry: 10889eb50; end: 10889eeb7;  */

undefined1  [16]
FUN_10889eb50(float *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  unkuint9 Var1;
  bool bVar2;
  float *pfVar3;
  float *pfVar4;
  ulong *puVar5;
  undefined8 uVar6;
  long lVar7;
  float fVar8;
  undefined1 auStack_d0 [8];
  float *pfStack_c8;
  long lStack_b0;
  ulong uStack_a8;
  float afStack_a0 [6];
  float *pfStack_88;
  float *pfStack_80;
  undefined1 uStack_71;
  float *pfStack_70;
  float *pfStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  float *pfStack_48;
  undefined1 auStack_40 [16];
  
  pfVar3 = param_1;
  uStack_60 = param_4;
  uStack_58 = param_3;
  uStack_50 = param_2;
  pfStack_48 = param_1;
  FUN_10889c970();
  FUN_10889b39c();
  pfVar4 = param_1;
  pfStack_68 = pfVar3;
  FUN_10889b344();
  uStack_71 = 0;
  pfStack_70 = pfVar4;
  if (pfVar4 != (float *)0x0) {
    pfVar3 = pfStack_68;
    func_0x000108890eb8(pfStack_68,pfVar4);
    pfVar4 = param_1;
    pfStack_88 = pfVar3;
    FUN_10889b3c8(param_1,pfVar3);
    pfStack_80 = *(float **)pfVar4;
    if (pfStack_80 != (float *)0x0) {
      pfStack_80 = *(float **)pfStack_80;
      do {
        bVar2 = false;
        if (pfStack_80 != (float *)0x0) {
          pfVar3 = pfStack_80;
          func_0x00010889b3f0();
          bVar2 = true;
          if (pfVar3 != pfStack_68) {
            pfVar3 = pfStack_80;
            func_0x00010889b3f0();
            func_0x000108890eb8();
            bVar2 = pfVar3 == pfStack_88;
          }
        }
        if (!bVar2) break;
        pfVar3 = pfStack_80;
        func_0x00010889b3f0();
        if (pfVar3 == pfStack_68) {
          pfVar3 = param_1;
          func_0x00010889c988();
          pfVar4 = pfStack_80;
          FUN_108895508(pfStack_80);
          func_0x000108895568();
          FUN_10889b420(pfVar3,pfVar4,uStack_50);
          if (((ulong)pfVar3 & 1) != 0) goto LAB_10889ee78;
        }
        pfStack_80 = *(float **)pfStack_80;
      } while( true );
    }
  }
  FUN_10889eee4(afStack_a0,param_1,pfStack_68,uStack_58,uStack_60);
  pfVar3 = param_1;
  FUN_10889caa0();
  lVar7 = *(long *)pfVar3;
  Var1 = ZEXT89(pfStack_70);
  pfVar4 = param_1;
  func_0x00010889cab8();
  pfVar3 = pfStack_70;
  if (((float)(unkint9)Var1 * *pfVar4 < (float)(lVar7 + 1)) || (pfStack_70 == (float *)0x0)) {
    pfVar4 = pfStack_70;
    FUN_108892ac0();
    uStack_a8 = (ulong)((uint)pfVar4 ^ 1) | (long)pfVar3 << 1;
    pfVar3 = param_1;
    FUN_10889caa0();
    lVar7 = *(long *)pfVar3;
    pfVar3 = param_1;
    func_0x00010889cab8();
    fVar8 = (float)(lVar7 + 1) / *pfVar3;
    func_0x000108892b00();
    lStack_b0 = (long)fVar8;
    puVar5 = &uStack_a8;
    FUN_108891270(puVar5,&lStack_b0);
    FUN_10889cad0(param_1,*puVar5);
    pfVar3 = param_1;
    FUN_10889b344();
    pfVar4 = pfStack_68;
    pfStack_70 = pfVar3;
    func_0x000108890eb8(pfStack_68,pfVar3);
    pfStack_88 = pfVar4;
  }
  pfVar3 = param_1;
  FUN_10889b3c8(param_1,pfStack_88);
  pfStack_c8 = *(float **)pfVar3;
  if (pfStack_c8 == (float *)0x0) {
    pfVar3 = param_1 + 4;
    func_0x00010889cafc();
    lVar7 = *(long *)pfVar3;
    pfVar4 = afStack_a0;
    pfStack_c8 = pfVar3;
    FUN_10889cb20();
    *(long *)pfVar4 = lVar7;
    pfVar3 = afStack_a0;
    func_0x00010889cb38();
    func_0x00010889cafc();
    pfVar4 = pfStack_c8;
    *(float **)pfStack_c8 = pfVar3;
    pfVar3 = param_1;
    FUN_10889b3c8(param_1,pfStack_88);
    *(float **)pfVar3 = pfVar4;
    pfVar3 = afStack_a0;
    FUN_10889cb20();
    if (*(long *)pfVar3 != 0) {
      pfVar3 = afStack_a0;
      func_0x00010889cb38();
      func_0x00010889cafc();
      pfVar4 = afStack_a0;
      FUN_10889cb20();
      uVar6 = *(undefined8 *)pfVar4;
      func_0x00010889b3f0(uVar6);
      func_0x000108890eb8();
      pfVar4 = param_1;
      FUN_10889b3c8(param_1,uVar6);
      *(float **)pfVar4 = pfVar3;
    }
  }
  else {
    lVar7 = *(long *)pfStack_c8;
    pfVar3 = afStack_a0;
    FUN_10889cb20();
    *(long *)pfVar3 = lVar7;
    pfVar3 = afStack_a0;
    func_0x00010889cb38();
    *(float **)pfStack_c8 = pfVar3;
  }
  pfVar3 = afStack_a0;
  func_0x00010889cb50();
  pfStack_80 = pfVar3;
  FUN_10889caa0();
  *(long *)param_1 = *(long *)param_1 + 1;
  uStack_71 = 1;
  func_0x00010889cb74(afStack_a0);
LAB_10889ee78:
  func_0x00010889cba8(auStack_d0,pfStack_80);
  func_0x00010889cbe4(auStack_40,auStack_d0,&uStack_71);
  return auStack_40;
}



/* Entry: 10889eeb8; end: 10889eee3;  */

void FUN_10889eeb8(undefined8 param_1,undefined8 param_2)

{
  func_0x00010889f08c(param_1,param_2);
  return;
}



/* Entry: 10889eee4; end: 10889efeb;  */

/* WARNING: Removing unreachable block (ram,0x00010889efb4) */

void FUN_10889eee4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_68 [23];
  undefined1 uStack_51;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  uStack_48 = param_5;
  uStack_40 = param_4;
  uStack_38 = param_3;
  uStack_30 = param_2;
  lStack_28 = param_1;
  FUN_1088954f0();
  uStack_51 = 0;
  uStack_50 = param_2;
  FUN_10889cc28(param_2);
  FUN_10889cc58(auStack_68,uStack_50);
  func_0x00010889cca0(param_1,param_2,auStack_68);
  FUN_10889cd18(param_1);
  FUN_10889cce4();
  uVar1 = uStack_50;
  lVar2 = param_1;
  FUN_10889cb20(param_1);
  func_0x000108895568();
  func_0x000108895554();
  FUN_10889efec(uVar1,lVar2,uStack_40,uStack_48);
  FUN_10889cd60();
  *(undefined1 *)(param_1 + 8) = 1;
  return;
}



/* Entry: 10889efec; end: 10889f0b7;  */

void FUN_10889efec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x00010889f024(param_2,param_3,param_4);
  return;
}



/* Entry: 10889f0b8; end: 10889f20b;  */

void FUN_10889f0b8(long *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  FUN_10889f20c(param_1);
  plVar1 = param_2;
  FUN_108890fb0(param_2);
  FUN_10889f2a4(param_1,plVar1);
  plVar1 = param_2;
  func_0x000108890fd4();
  FUN_108891070();
  lVar3 = *plVar1;
  plVar1 = param_1;
  func_0x000108890fd4();
  FUN_108891070();
  *plVar1 = lVar3;
  plVar1 = param_2;
  func_0x000108890fd4();
  FUN_108891070();
  *plVar1 = 0;
  func_0x00010889f2ec(param_1,param_2);
  plVar1 = param_2;
  FUN_108890e54();
  lVar3 = *plVar1;
  plVar1 = param_1;
  FUN_108890e54();
  *plVar1 = lVar3;
  FUN_10889f318(param_2);
  FUN_10889f318(param_1);
  plVar1 = param_2;
  func_0x00010889f330();
  lVar3 = *plVar1;
  plVar1 = param_1;
  func_0x00010889f330();
  *(int *)plVar1 = (int)lVar3;
  func_0x00010889f348(param_2);
  func_0x00010889f348(param_1);
  param_1[2] = param_2[2];
  plVar1 = param_1;
  FUN_108890e54();
  if (*plVar1 != 0) {
    plVar1 = param_1 + 2;
    FUN_108890e6c();
    lVar3 = param_1[2];
    func_0x000108890f1c(lVar3);
    plVar2 = param_1;
    FUN_108890f34(param_1);
    func_0x000108890eb8(lVar3,plVar2);
    func_0x000108890e90(param_1,lVar3);
    *param_1 = (long)plVar1;
    param_2[2] = 0;
    FUN_108890e54();
    *param_2 = 0;
  }
  return;
}



/* Entry: 10889f20c; end: 10889f2a3;  */

void FUN_10889f20c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plStack_38;
  
  plVar1 = param_1;
  FUN_108890e54();
  if (*plVar1 != 0) {
    FUN_10889c0f8(param_1,param_1[2]);
    param_1[2] = 0;
    plVar1 = param_1;
    FUN_108890f34();
    for (plStack_38 = (long *)0x0; plStack_38 < plVar1; plStack_38 = (long *)((long)plStack_38 + 1))
    {
      plVar2 = param_1;
      FUN_108890e90(param_1,plStack_38);
      *plVar2 = 0;
    }
    FUN_108890e54();
    *param_1 = 0;
  }
  return;
}



/* Entry: 10889f2a4; end: 10889f317;  */

void FUN_10889f2a4(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    FUN_10889c3c8(param_1 + 1,lVar1);
  }
  return;
}



/* Entry: 10889f318; end: 10889f35f;  */

long FUN_10889f318(long param_1)

{
  return param_1 + 0x18;
}



/* Entry: 10889f360; end: 10889f3b3;  */

void FUN_10889f360(undefined8 param_1,undefined8 param_2)

{
  func_0x000108890fd4(param_2);
  FUN_10889c458();
  func_0x000108890fd4(param_1);
  FUN_10889c458();
  FUN_10889c1c4(param_2);
  FUN_10889c1c4(param_1);
  return;
}



/* Entry: 10889f3b4; end: 10889f41b;  */

undefined8 FUN_10889f3b4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_18;
  
  FUN_10889f41c(param_1,param_2);
  FUN_10889be64(&uStack_18,param_1);
  return uStack_18;
}



/* Entry: 10889f41c; end: 10889f573;  */

ulong * FUN_10889f41c(ulong *param_1,undefined8 param_2)

{
  bool bVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puStack_58;
  ulong *puStack_28;
  
  puVar2 = param_1;
  func_0x000108896a5c();
  if ((puVar2 != (ulong *)0x0) && (puVar3 = param_1, FUN_10889f574(), puVar3 != (ulong *)0x0)) {
    puVar3 = param_1;
    func_0x00010889f58c();
    func_0x000108896a30();
    puVar4 = puVar3;
    func_0x000108890eb8(puVar3,puVar2);
    puVar2 = param_1;
    FUN_108896a84(param_1,puVar4);
    if ((ulong *)*puVar2 != (ulong *)0x0) {
      puStack_58 = *(ulong **)*puVar2;
      while( true ) {
        bVar1 = false;
        if (puStack_58 != (ulong *)0x0) {
          puVar2 = puStack_58;
          func_0x000108896aac();
          bVar1 = true;
          if (puVar3 != puVar2) {
            puVar2 = puStack_58;
            func_0x000108896aac();
            func_0x000108890eb8();
            bVar1 = puVar2 == puVar4;
          }
        }
        if (!bVar1) break;
        puVar2 = puStack_58;
        func_0x000108896aac();
        if (puVar2 == puVar3) {
          puVar2 = param_1;
          func_0x00010889f5a4();
          puVar5 = puStack_58;
          FUN_1088960a4(puStack_58);
          func_0x000108896104();
          FUN_108896adc(puVar2,puVar5,param_2);
          if (((ulong)puVar2 & 1) != 0) {
            func_0x00010889bea0(&puStack_28,puStack_58);
            return puStack_28;
          }
        }
        puStack_58 = (ulong *)*puStack_58;
      }
    }
  }
  FUN_10889bf1c();
  return param_1;
}



/* Entry: 10889f574; end: 10889f5cf;  */

undefined8 FUN_10889f574(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10889f5d0; end: 10889f5fb;  */

void FUN_10889f5d0(undefined8 *param_1)

{
  FUN_108895508(*param_1);
  func_0x000108895568();
  return;
}



/* Entry: 10889f5fc; end: 10889f68b;  */

long FUN_10889f5fc(long param_1,undefined8 param_2)

{
  FUN_10889f68c(param_1,0x10889f648);
  FUN_10889f6ac(param_1 + 8,param_2);
  return param_1;
}



/* Entry: 10889f68c; end: 10889f6ab;  */

void FUN_10889f68c(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}



/* Entry: 10889f6ac; end: 10889f6e7;  */

undefined8 FUN_10889f6ac(undefined8 param_1,undefined8 param_2)

{
  FUN_1088a02e0(param_1,param_2);
  return param_1;
}



/* Entry: 10889f6e8; end: 10889f70f;  */

void FUN_10889f6e8(undefined8 param_1)

{
  FUN_10888ea64(param_1);
  FUN_10889fa48();
  return;
}



/* Entry: 10889f710; end: 10889fa47;  */

void FUN_10889f710(undefined8 param_1,long *param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 **ppuVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined1 *puStack_4c8;
  undefined4 uStack_4bc;
  undefined1 auStack_4b8 [80];
  undefined1 auStack_468 [344];
  undefined1 **ppuStack_310;
  undefined1 *puStack_308;
  undefined1 *puStack_300;
  undefined1 *puStack_2f8;
  undefined1 auStack_2f0 [448];
  undefined1 auStack_130 [24];
  undefined1 auStack_118 [24];
  undefined1 auStack_100 [40];
  undefined1 auStack_d8 [40];
  undefined1 auStack_b0 [80];
  long *plStack_60;
  undefined8 uStack_58;
  
  lVar7 = param_2[1];
  plStack_60 = param_2;
  uStack_58 = param_1;
  FUN_108885a44(auStack_d8,0x240);
  FUN_108681bac(auStack_b0,lVar7 + 0x1a0,auStack_d8,1,1);
  FUN_108657130(auStack_d8);
  FUN_10889fa84(auStack_100);
  FUN_10889fa84(auStack_118);
  do {
    func_0x000108885a88(lVar7 + 0x180);
    FUN_108863ac0(auStack_2f0);
    FUN_10867b070(auStack_130,auStack_2f0);
    func_0x00010889fab8(auStack_118,auStack_130);
    func_0x00010888e928(auStack_130);
    func_0x00010889faf4(auStack_2f0);
    puVar2 = auStack_118;
    puStack_2f8 = puVar2;
    FUN_108886a54();
    puVar3 = puStack_2f8;
    puStack_300 = puVar2;
    func_0x000108886a98();
    puStack_308 = puVar3;
    while( true ) {
      ppuVar4 = &puStack_300;
      func_0x000108886adc(ppuVar4,&puStack_308);
      if ((((uint)ppuVar4 ^ 1) & 1) == 0) break;
      ppuVar4 = &puStack_300;
      FUN_108886b24();
      ppuStack_310 = ppuVar4;
      FUN_10889fb28(lVar7 + 0x180);
      FUN_1086a125c(auStack_4b8);
      uVar5 = 0;
      FUN_108889770();
      func_0x000108889794();
      FUN_10889fb40();
      if ((uVar5 & 1) == 0) {
LAB_10889f874:
        uStack_4bc = 5;
      }
      else {
        uVar5 = 0;
        FUN_108886b3c();
        func_0x000108886b60();
        func_0x00010889fb70();
        if ((uVar5 & 1) != 0) goto LAB_10889f874;
        puVar2 = auStack_468;
        FUN_108886b3c();
        func_0x000108886b60();
        puStack_4c8 = puVar2;
        FUN_10889fb98(&uStack_4d8,lVar7 + 0x5c);
        FUN_108667ea0(puVar2,lVar7 + 0x10,uStack_4d8,uStack_4d0);
        if (((ulong)puVar2 & 1) == 0) {
          FUN_10889fbd4(auStack_100,auStack_4b8);
          uStack_4bc = 0;
        }
        else {
          uStack_4bc = 5;
        }
      }
      func_0x00010888e95c(auStack_4b8);
      func_0x000108886e20(&puStack_300);
    }
    uVar5 = 0;
    FUN_10889fc00();
    if ((uVar5 & 1) == 0) {
      puVar2 = auStack_118;
      func_0x00010889fc28();
      plVar6 = (long *)(puVar2 + 0x20);
      FUN_10889fc44();
      *param_2 = *plVar6 + 1;
    }
    uVar5 = 0;
    FUN_10889fc00();
    uVar1 = 0;
    if ((uVar5 & 1) != 0) {
      uVar1 = 0;
      FUN_10889fc00();
      uVar1 = uVar1 ^ 1;
    }
    if ((uVar1 & 1) == 0) {
      uVar5 = 0;
      FUN_10889fc00();
      if ((uVar5 & 1) == 0) {
        FUN_10889fc9c(param_1,auStack_100);
      }
      else {
        FUN_10889fc68(param_1);
      }
      uStack_4bc = 1;
      func_0x00010888e928(auStack_118);
      func_0x00010888e928(auStack_100);
      FUN_108681bac(auStack_b0);
      return;
    }
  } while( true );
}



/* Entry: 10889fa48; end: 10889fa6f;  */

void FUN_10889fa48(long param_1)

{
  FUN_10889fa70(param_1 + 8);
  return;
}



/* Entry: 10889fa70; end: 10889fa83;  */

undefined8 FUN_10889fa70(undefined8 param_1)

{
  return param_1;
}



/* Entry: 10889fa84; end: 10889fb27;  */

undefined8 FUN_10889fa84(undefined8 param_1)

{
  FUN_10889fcc8(param_1);
  return param_1;
}



/* Entry: 10889fb28; end: 10889fb3f;  */

undefined8 FUN_10889fb28(undefined8 *param_1)

{
  return *param_1;
}



/* Entry: 10889fb40; end: 10889fb97;  */

bool FUN_10889fb40(undefined8 param_1)

{
  FUN_10888f724(param_1);
  return (int)param_1 == 5;
}



/* Entry: 10889fb98; end: 10889fbd3;  */

undefined8 FUN_10889fb98(undefined8 param_1,undefined8 param_2)

{
  func_0x00010889fe84(param_1,param_2);
  return param_1;
}



/* Entry: 10889fbd4; end: 10889fbff;  */

void FUN_10889fbd4(undefined8 param_1,undefined8 param_2)

{
  FUN_10867b444(param_1,param_2);
  return;
}



/* Entry: 10889fc00; end: 10889fc43;  */

bool FUN_10889fc00(long *param_1)

{
  return *param_1 == param_1[1];
}



/* Entry: 10889fc44; end: 10889fc67;  */

void FUN_10889fc44(undefined8 param_1)

{
  func_0x00010889fef4(param_1);
  return;
}



/* Entry: 10889fc68; end: 10889fc9b;  */

undefined8 FUN_10889fc68(undefined8 param_1)

{
  FUN_10889ff08(param_1);
  return param_1;
}



/* Entry: 10889fc9c; end: 10889fcc7;  */

void FUN_10889fc9c(undefined8 param_1,undefined8 param_2)

{
  FUN_1088a005c(param_1,param_2);
  return;
}



/* Entry: 10889fcc8; end: 10889fd6f;  */

undefined8 * FUN_10889fcc8(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  func_0x00010889fd08(param_1 + 2);
  return param_1;
}



/* Entry: 10889fd70; end: 10889fd83;  */

undefined8 FUN_10889fd70(undefined8 param_1)

{
  return param_1;
}



/* Entry: 10889fd84; end: 10889fdef;  */

undefined1  [16] FUN_10889fd84(undefined4 *param_1)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  undefined1 uStack_4d;
  undefined4 uStack_4c;
  undefined4 *puStack_48;
  undefined1 auStack_40 [16];
  
  puVar1 = &uStack_4d;
  puStack_48 = param_1;
  func_0x00010889fe04(puVar1,*param_1);
  uStack_4c = SUB84(puVar1,0);
  puVar2 = &uStack_4c;
  func_0x00010889fdf0();
                    /* WARNING: Ignoring partial resolution of indirect */
  auStack_40._0_4_ = *puVar2;
  return auStack_40;
}



/* Entry: 10889fdf0; end: 10889fe1b;  */

undefined8 FUN_10889fdf0(undefined8 param_1)

{
  return param_1;
}



/* Entry: 10889fe1c; end: 10889fe47;  */

void FUN_10889fe1c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}



/* Entry: 10889fe48; end: 10889fecb;  */

undefined8 FUN_10889fe48(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c28a9c(param_1,param_2);
  return param_1;
}



/* Entry: 10889fecc; end: 10889ff07;  */

undefined8 FUN_10889fecc(undefined8 param_1)

{
  return param_1;
}



/* Entry: 10889ff08; end: 1088a003f;  */

undefined8 FUN_10889ff08(undefined8 param_1)

{
  func_0x00010889ff3c(param_1);
  return param_1;
}



/* Entry: 1088a0040; end: 1088a005b;  */

void FUN_1088a0040(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x18] = 0;
  return;
}



/* Entry: 1088a005c; end: 1088a027f;  */

undefined8 FUN_1088a005c(undefined8 param_1,undefined8 param_2)

{
  func_0x0001088a0098(param_1,param_2);
  return param_1;
}



/* Entry: 1088a0280; end: 1088a02df;  */

void FUN_1088a0280(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_2[2] = 0;
  param_2[1] = 0;
  *param_2 = 0;
  return;
}



/* Entry: 1088a02e0; end: 1088a0383;  */

undefined8 FUN_1088a02e0(undefined8 param_1,undefined8 param_2)

{
  func_0x0001088a031c(param_1,param_2);
  return param_1;
}



/* Entry: 1088a0384; end: 1088a03af;  */

undefined8 FUN_1088a0384(undefined8 param_1)

{
  return param_1;
}



/* Entry: 1088a03b0; end: 1088a03eb;  */

undefined8 FUN_1088a03b0(undefined8 param_1,undefined8 param_2)

{
  FUN_1088a0400(param_1,param_2);
  return param_1;
}



/* Entry: 1088a03ec; end: 1088a03ff;  */

void FUN_1088a03ec(void)

{
  return;
}



/* Entry: 1088a0400; end: 1088a044b;  */

undefined8 FUN_1088a0400(undefined8 param_1,undefined8 param_2)

{
  FUN_1088a060c(param_1,&PTR_FUN_110a802e0,param_2);
  return param_1;
}



/* Entry: 1088a044c; end: 1088a047f;  */

void FUN_1088a044c(undefined8 param_1)

{
  FUN_1088a04dc(param_1);
  FUN_10889fa48(param_1);
  return;
}



/* Entry: 1088a0480; end: 1088a04db;  */

void FUN_1088a0480(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  FUN_10889fa48(param_2);
  FUN_1088a03b0(param_1,uVar1);
  FUN_1088a056c(param_2,param_1);
  return;
}



/* Entry: 1088a04dc; end: 1088a052f;  */

void FUN_1088a04dc(undefined8 param_1)

{
  undefined8 uStack_48;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  undefined4 uStack_2c;
  undefined8 uStack_28;
  
  uStack_2c = SUB84(&uStack_38,0);
  uStack_38 = param_1;
  uStack_28 = param_1;
  func_0x0001088a0544();
  uStack_3c = SUB84(&uStack_48,0);
  uStack_48 = param_1;
  func_0x0001088a0558();
  func_0x0001088a0530(&uStack_2c,&uStack_3c);
  return;
}



/* Entry: 1088a0530; end: 1088a056b;  */

void FUN_1088a0530(void)

{
  return;
}



/* Entry: 1088a056c; end: 1088a05db;  */

void FUN_1088a056c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = &uStack_40;
  uStack_48 = param_2;
  uStack_40 = param_1;
  uStack_30 = param_2;
  uStack_28 = param_1;
  FUN_1088a05dc(puVar1,&uStack_48);
  uStack_34 = SUB84(puVar1,0);
  uStack_60 = uStack_30;
  puVar1 = &uStack_58;
  uStack_58 = param_1;
  func_0x0001088a05f4(puVar1,&uStack_60);
  uStack_4c = SUB84(puVar1,0);
  FUN_1088a0530(&uStack_34,&uStack_4c);
  return;
}



/* Entry: 1088a05dc; end: 1088a060b;  */

undefined8 FUN_1088a05dc(void)

{
  return 0;
}



/* Entry: 1088a060c; end: 1088a074b;  */

long FUN_1088a060c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  func_0x0001088a066c(param_1,param_2);
  func_0x0001088a06a8(param_1 + 8,param_3);
  lVar1 = param_1;
  FUN_10889fa48(param_1);
  func_0x0001088a06ec(param_1,lVar1);
  return param_1;
}



/* Entry: 1088a074c; end: 1088a07c7;  */

void FUN_1088a074c(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}



/* Entry: 1088a07c8; end: 1088a07fb;  */

undefined8 FUN_1088a07c8(undefined8 param_1)

{
  FUN_1088a07fc(param_1);
  return param_1;
}



/* Entry: 1088a07fc; end: 1088a0843;  */

long FUN_1088a07fc(long param_1)

{
  FUN_1088a0844(param_1);
  *(undefined8 *)(param_1 + 0x10) = 0;
  func_0x0001088a0878(param_1 + 0x10);
  return param_1;
}



/* Entry: 1088a0844; end: 1088a08ef;  */

undefined8 FUN_1088a0844(undefined8 param_1)

{
  func_0x0001088a08ac(param_1);
  return param_1;
}



/* Entry: 1088a08f0; end: 1088a0913;  */

void FUN_1088a08f0(undefined8 param_1)

{
  FUN_108891448(param_1);
  return;
}



/* Entry: 1088a0914; end: 1088a0947;  */

undefined8 FUN_1088a0914(undefined8 param_1)

{
  FUN_1088a0948(param_1);
  return param_1;
}



/* Entry: 1088a0948; end: 1088a095b;  */

undefined8 FUN_1088a0948(undefined8 param_1)

{
  return param_1;
}



/* Entry: 1088a095c; end: 1088a0a3b;  */

undefined1 * FUN_1088a095c(long param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_40 [24];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x0001088a0ac4(auStack_40);
  FUN_1088a0b38(auStack_40);
  FUN_1088a0b04();
  puVar1 = auStack_40;
  FUN_1088a0b38(puVar1);
  func_0x00010889145c();
  FUN_1088a0b50(param_1 + 0x10,puVar1,param_2);
  puVar1 = auStack_40;
  FUN_1088a0b80(puVar1);
  FUN_1088a0ba4(auStack_40);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 - lStack_28 != 0) {
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_11034bdc0 - lStack_28);
  }
  return puVar1;
}



/* Entry: 1088a0a3c; end: 1088a0a5f;  */

void FUN_1088a0a3c(undefined8 param_1)

{
  FUN_108891448(param_1);
  return;
}



/* Entry: 1088a0a60; end: 1088a0b03;  */

void FUN_1088a0a60(long *param_1,long *param_2,long param_3)

{
  long *plVar1;
  
  plVar1 = param_1;
  FUN_108891424();
  *(long **)(param_3 + 8) = plVar1;
  *param_2 = *param_1;
  *(long **)(*param_2 + 8) = param_2;
  *param_1 = param_3;
  return;
}



/* Entry: 1088a0b04; end: 1088a0b37;  */

void FUN_1088a0b04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1088a0bd8(param_1,param_2,param_3);
  return;
}



/* Entry: 1088a0b38; end: 1088a0b4f;  */

undefined8 FUN_1088a0b38(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1088a0b50; end: 1088a0b7f;  */

void FUN_1088a0b50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_108894f10(param_2,param_3);
  return;
}



/* Entry: 1088a0b80; end: 1088a0ba3;  */

undefined8 FUN_1088a0b80(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  return uVar1;
}


