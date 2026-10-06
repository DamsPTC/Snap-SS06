/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100729f64; end: 10072a01f; -[SCAFideliusIdentityInit setOperationTimeMs:] */

void FUN_100729f64(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d968(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c61180();
  func_0x000107c54984(param_1,param_2,&PTR____CFConstantStringClassReference_110fef438,6,puVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10072a020; end: 10072a3c7;  */

undefined8 FUN_10072a020(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  int iVar9;
  undefined8 *puVar10;
  ulong *puVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  undefined8 *puStack_68;
  undefined8 *puStack_60;
  long lStack_58;
  
  puStack_68 = (undefined8 *)0x0;
  puStack_60 = (undefined8 *)0x0;
  if ((*(long **)(param_1 + 0x90) == (long *)0x0) || (**(long **)(param_1 + 0x90) == 0)) {
    puVar10 = (undefined8 *)0x0;
LAB_10072a1ac:
    lVar12 = 0;
  }
  else {
    uVar5 = 0;
    FUN_1001e2bf4(0);
    FUN_10072a3c8(&puStack_60,uVar5);
    puVar10 = puStack_60;
    if (puStack_60 == (undefined8 *)0x0) {
      uVar5 = 0x11f;
LAB_10072a2b0:
      FUN_1004d2c58(0x10,0,0x41,&UNK_10f6d11cf,uVar5);
      lVar15 = lStack_58;
LAB_10072a2c8:
      lStack_58 = lVar15;
      uVar5 = 0;
      goto LAB_10072a2cc;
    }
    if ((*(byte *)(param_1 + 0x1b0) >> 4 & 1) != 0) {
      uVar5 = 0;
      FUN_1001e2bf4(0);
      FUN_10072a3c8(&puStack_68,uVar5);
      if (puStack_68 == (undefined8 *)0x0) {
        uVar5 = 0x127;
        goto LAB_10072a2b0;
      }
    }
    puVar11 = *(ulong **)(param_1 + 0x90);
    if ((puVar11 == (ulong *)0x0) || (uVar13 = *puVar11, uVar13 == 0)) goto LAB_10072a1ac;
    lVar12 = 0;
    lVar15 = 0;
    uVar14 = 0;
    do {
      if (uVar14 < *puVar11) {
        lVar6 = *(long *)(puVar11[1] + uVar14 * 8);
      }
      else {
        lVar6 = 0;
      }
      func_0x00010072a4a4();
      if (lVar6 == 0) {
        uVar5 = 0x89;
        uVar8 = 0x131;
LAB_10072a350:
        FUN_1004d2c58(0x10,0,uVar5,&UNK_10f6d11cf,uVar8);
        lVar15 = lStack_58;
joined_r0x00010072a3c0:
        lStack_58 = lVar12;
        if (lStack_58 != 0) {
          FUN_1004d164c(&lStack_58,&UNK_110c87868,0);
          lVar15 = lStack_58;
        }
        goto LAB_10072a2c8;
      }
      if (lVar15 != 0) {
        if (puStack_68 == (undefined8 *)0x0) goto LAB_10072a180;
        piVar1 = (int *)(lVar6 + 0x18);
        iVar9 = *piVar1;
        do {
          if (iVar9 == -1) break;
          iVar2 = *piVar1;
          if (iVar2 == iVar9) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar9 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            bVar4 = cVar3 == '\0';
          }
          else {
            bVar4 = false;
            ClearExclusiveLocal();
          }
          iVar9 = iVar2;
        } while (!bVar4);
        puVar10 = puStack_68;
        func_0x0001001e2c8c(puStack_68,lVar6,*puStack_68);
        if (puVar10 != (undefined8 *)0x0) goto LAB_10072a180;
        lStack_58 = lVar6;
        FUN_1004d164c(&lStack_58,&UNK_110c87868,0);
        FUN_1004d2c58(0x10,0,0x41,&UNK_10f6d11cf,0x138);
        lStack_58 = lVar6;
        FUN_1004d164c(&lStack_58,&UNK_110c87868,0);
        lVar15 = lStack_58;
        goto joined_r0x00010072a3c0;
      }
      piVar1 = (int *)(lVar6 + 0x18);
      iVar9 = *piVar1;
      do {
        lVar12 = lVar6;
        lVar15 = lVar6;
        if (iVar9 == -1) break;
        iVar2 = *piVar1;
        if (iVar2 == iVar9) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar9 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          bVar4 = cVar3 == '\0';
        }
        else {
          bVar4 = false;
          ClearExclusiveLocal();
        }
        iVar9 = iVar2;
      } while (!bVar4);
LAB_10072a180:
      puVar10 = puStack_60;
      puVar7 = puStack_60;
      func_0x0001001e2c8c(puStack_60,lVar6,*puStack_60);
      if (puVar7 == (undefined8 *)0x0) {
        lStack_58 = lVar6;
        FUN_1004d164c(&lStack_58,&UNK_110c87868,0);
        uVar5 = 0x41;
        uVar8 = 0x13c;
        goto LAB_10072a350;
      }
      uVar14 = uVar14 + 1;
    } while (uVar14 != uVar13);
  }
  puVar11 = *(ulong **)(param_1 + 0xa8);
  if (puVar11 != (ulong *)0x0) {
    uVar13 = *puVar11;
    if (uVar13 != 0) {
      uVar14 = 0;
      do {
        lVar15 = *(long *)(puVar11[1] + uVar14 * 8);
        if (lVar15 != 0) {
          lStack_58 = lVar15;
          FUN_1004d164c(&lStack_58,&UNK_110c87868,0);
          uVar13 = *puVar11;
        }
        uVar14 = uVar14 + 1;
      } while (uVar14 < uVar13);
    }
    FUN_1001e33e0(puVar11[1]);
    FUN_1001e33e0(puVar11);
  }
  puStack_60 = (undefined8 *)0x0;
  *(undefined8 **)(param_1 + 0xa8) = puVar10;
  puVar11 = *(ulong **)(param_1 + 0xb0);
  if (puVar11 != (ulong *)0x0) {
    uVar13 = *puVar11;
    if (uVar13 != 0) {
      uVar14 = 0;
      do {
        lVar15 = *(long *)(puVar11[1] + uVar14 * 8);
        if (lVar15 != 0) {
          lStack_58 = lVar15;
          FUN_1004d164c(&lStack_58,&UNK_110c87868,0);
          uVar13 = *puVar11;
        }
        uVar14 = uVar14 + 1;
      } while (uVar14 < uVar13);
    }
    FUN_1001e33e0(puVar11[1]);
    FUN_1001e33e0(puVar11);
  }
  puVar10 = puStack_68;
  puStack_68 = (undefined8 *)0x0;
  *(undefined8 **)(param_1 + 0xb0) = puVar10;
  lStack_58 = *(long *)(param_1 + 0xa0);
  FUN_1004d164c(&lStack_58,&UNK_110c87868,0);
  *(long *)(param_1 + 0xa0) = lVar12;
  uVar5 = 1;
LAB_10072a2cc:
  FUN_10072a3c8(&puStack_68,0);
  FUN_10072a3c8(&puStack_60,0);
  return uVar5;
}



/* Entry: 10072a3c8; end: 10072a44f;  */

void FUN_10072a3c8(undefined8 *param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  ulong *puVar3;
  ulong uVar4;
  long lStack_38;
  
  puVar3 = (ulong *)*param_1;
  *param_1 = param_2;
  if (puVar3 != (ulong *)0x0) {
    uVar1 = *puVar3;
    if (uVar1 != 0) {
      uVar4 = 0;
      do {
        lVar2 = *(long *)(puVar3[1] + uVar4 * 8);
        if (lVar2 != 0) {
          lStack_38 = lVar2;
          FUN_1004d164c(&lStack_38,&UNK_110c87868,0);
          uVar1 = *puVar3;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar1);
    }
    FUN_1001e33e0(puVar3[1]);
    FUN_1001e33e0(puVar3);
  }
  return;
}



/* Entry: 10072a450; end: 10072a613; -[SCAFideliusIdentityInit setPublicKeyId:] */

void FUN_10072a450(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d968(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c61180();
  func_0x000107c54984(param_1,param_2,&PTR____CFConstantStringClassReference_110fef938,0xb,puVar1,4)
  ;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10072a614; end: 10072a61b;  */

void FUN_10072a614(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x30);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10072a61c; end: 10072a66f;  */

void FUN_10072a61c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x30);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10072a670; end: 10072a67b;  */

void FUN_10072a670(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_58,lVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28));
  FUN_100083b20(&uStack_60);
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_100211308();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_60;
  *(undefined8 *)(lVar1 + 0x20) = uStack_68;
  *(undefined8 *)(lVar1 + 0x28) = uStack_70;
  FUN_10072a7e4(0);
  func_0x000107c613fc();
  uVar2 = uStack_60;
  func_0x000107c61174(uStack_60);
  uVar3 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar4 = uStack_70;
  func_0x000107c61174(uStack_70);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  uVar5 = uStack_58;
  func_0x000107c61174();
  uVar6 = uVar5;
  FUN_10072a864();
  *(undefined8 *)(lVar1 + 0x10) = uVar6;
  uVar7 = uVar6;
  func_0x000107c6157c();
  FUN_10072a8c4();
  func_0x000107c61574(uVar6);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  *(undefined8 *)(lVar1 + 0x30) = uVar7;
  *param_1 = lVar1;
  return;
}



/* Entry: 10072a67c; end: 10072a7e3;  */

void FUN_10072a67c(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  FUN_100083b20(&uStack_58);
  FUN_100083b20(&uStack_60);
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_100211308();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_60;
  *(undefined8 *)(param_2 + 0x20) = uStack_68;
  *(undefined8 *)(param_2 + 0x28) = uStack_70;
  FUN_10072a7e4(0);
  func_0x000107c613fc();
  uVar1 = uStack_60;
  func_0x000107c61174(uStack_60);
  uVar2 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar3 = uStack_70;
  func_0x000107c61174(uStack_70);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  uVar4 = uStack_58;
  func_0x000107c61174();
  uVar5 = uVar4;
  FUN_10072a864();
  *(undefined8 *)(param_2 + 0x10) = uVar5;
  uVar6 = uVar5;
  func_0x000107c6157c();
  FUN_10072a8c4();
  func_0x000107c61574(uVar5);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  *(undefined8 *)(param_2 + 0x30) = uVar6;
  *param_1 = param_2;
  return;
}



/* Entry: 10072a7e4; end: 10072a863;  */

void FUN_10072a7e4(undefined8 param_1)

{
  if (lRam0000000112dd10b8 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e6571d4);
  return;
}



/* Entry: 10072a864; end: 10072a8c3;  */

void FUN_10072a864(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long unaff_x20;
  
  puVar1 = PTR_PTR_1126aeea8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c61170(param_1);
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  *(undefined **)(unaff_x20 + 0x28) = puVar1;
  return;
}



/* Entry: 10072a8c4; end: 10072aa63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10072a8c4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar4 = *(undefined8 *)(*(long *)(unaff_x20 + 0x20) + _DAT_113093a98);
  puVar1 = &UNK_11040ed90;
  func_0x000107c613fc(&UNK_11040ed90,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar4;
  FUN_1000285a8(0x112d61fe0,&UNK_10d992300);
  func_0x000107c613fc();
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  puVar2 = &UNK_1018e9a60;
  FUN_1000bdd8c(&UNK_1018e9a60,puVar1);
  uVar6 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_11304a478);
  uVar7 = *(undefined8 *)(*(long *)(unaff_x20 + 0x18) + _DAT_113083908);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  puVar1 = &UNK_11040edb8;
  func_0x000107c613fc(&UNK_11040edb8,0x30,7);
  *(undefined **)(puVar1 + 0x10) = puVar2;
  *(undefined8 *)(puVar1 + 0x18) = uVar6;
  *(undefined8 *)(puVar1 + 0x20) = uVar7;
  *(undefined8 *)(puVar1 + 0x28) = uVar5;
  FUN_1000285a8(0x112dd1088,&UNK_10d992308);
  func_0x000107c613fc();
  func_0x000107c61580(uVar6,2);
  func_0x000107c61580(uVar7,2);
  func_0x000107c6157c(puVar2);
  func_0x000107c61174(uVar5);
  puVar3 = &UNK_1018e9b28;
  FUN_1000bdd8c(&UNK_1018e9b28,puVar1);
  uVar5 = 0;
  FUN_100211394(0);
  func_0x000107c610f8();
  FUN_10072aad0(puVar3,uVar5);
  func_0x000107c61574(uVar7);
  func_0x000107c61574(uVar6);
  func_0x000107c61574(puVar2);
  func_0x000107c61170(uVar4);
  return puVar3;
}



/* Entry: 10072aa64; end: 10072aac3;  */

void FUN_10072aa64(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10072aac4; end: 10072aacf; -[SCAFideliusIdentityInit getEventName] */

undefined ** FUN_10072aac4(void)

{
  return &PTR____CFConstantStringClassReference_110e0f758;
}



/* Entry: 10072aad0; end: 10072ab1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10072aad0(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112f0d258) = param_1;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10072ab1c; end: 10072ab57;  */

void FUN_10072ab1c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10072ab58; end: 10072ab5f;  */

void FUN_10072ab58(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x28);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10072ab60; end: 10072abb3;  */

void FUN_10072ab60(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x28);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10072abb4; end: 10072abbf;  */

void FUN_10072abb4(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_48,uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
               );
  FUN_100083b20(&uStack_50);
  FUN_100083b20(&uStack_58);
  FUN_1001b7e78();
  func_0x000107c613fc();
  FUN_10072ac8c(uStack_48,uStack_50,uStack_58);
  *param_1 = uVar1;
  return;
}



/* Entry: 10072abc0; end: 10072ac53;  */

void FUN_10072abc0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_100083b20(&uStack_50);
  FUN_100083b20(&uStack_58);
  FUN_1001b7e78();
  func_0x000107c613fc();
  FUN_10072ac8c(uStack_48,uStack_50,uStack_58);
  *param_1 = param_2;
  return;
}



/* Entry: 10072ac54; end: 10072ac8b;  */

void FUN_10072ac54(undefined8 param_1)

{
  if (lRam0000000112dd4628 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e658fdc);
  return;
}



/* Entry: 10072ac8c; end: 10072ad67;  */

void FUN_10072ac8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  FUN_10072ac54(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10072aeb8();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  FUN_10072aef4();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  *(undefined8 *)(unaff_x20 + 0x28) = uVar2;
  return;
}



/* Entry: 10072ad68; end: 10072adab;  */

void FUN_10072ad68(long param_1)

{
  undefined *puStack_18;
  
  puStack_18 = PTR___sBOWV_11034d658 + 0x40;
  func_0x000107c61524(param_1,0x100,1,&puStack_18,param_1 + 0x70);
  return;
}



/* Entry: 10072adac; end: 10072aeb7;  */

undefined8 FUN_10072adac(long *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  byte *pbVar4;
  long lVar5;
  uint uVar6;
  
  lVar3 = param_1[1];
  if (lVar3 == 0) {
    return 0;
  }
  pbVar4 = (byte *)*param_1;
  *param_1 = (long)(pbVar4 + 1);
  param_1[1] = lVar3 + -1;
  uVar1 = (uint)*pbVar4;
  if ((char)*pbVar4 < '\0') {
    if ((uVar1 & 0xe0) == 0xc0) {
      uVar2 = 0x80;
      uVar6 = 0x1f;
      lVar5 = 1;
    }
    else if ((uVar1 & 0xf0) == 0xe0) {
      uVar2 = 0x800;
      uVar6 = 0xf;
      lVar5 = 2;
    }
    else {
      if ((uVar1 & 0xf8) != 0xf0) {
        return 0;
      }
      uVar2 = 0x10000;
      uVar6 = 7;
      lVar5 = 3;
    }
    pbVar4 = pbVar4 + 2;
    lVar3 = lVar3 + -2;
    uVar1 = uVar6 & uVar1;
    do {
      uVar6 = uVar1;
      if (lVar3 == -1) {
        return 0;
      }
      *param_1 = (long)pbVar4;
      param_1[1] = lVar3;
      if ((pbVar4[-1] & 0xc0) != 0x80) {
        return 0;
      }
      uVar1 = uVar6 << 6 | pbVar4[-1] & 0x3f;
      pbVar4 = pbVar4 + 1;
      lVar3 = lVar3 + -1;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    if (((uVar6 & 0x7fe0) == 0x360) ||
       (((uVar1 - 0xfdd0 < 0x20 || 0x10 < (uVar6 & 0x3ffffff) >> 10) || (uVar1 & 0xfffe) == 0xfffe)
        || uVar1 < uVar2)) {
      return 0;
    }
  }
  *param_2 = uVar1;
  return 1;
}



/* Entry: 10072aeb8; end: 10072aef3;  */

void FUN_10072aeb8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = param_3;
  return;
}



/* Entry: 10072aef4; end: 10072af7f;  */

void FUN_10072aef4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = &UNK_110413048;
  func_0x000107c613fc(&UNK_110413048,0x18,7);
  func_0x000107c61644(puVar1 + 0x10);
  FUN_1000285a8(0x112dd45f8,&UNK_10d997070);
  func_0x000107c613fc();
  puVar2 = &UNK_1019255ec;
  FUN_1000bdd8c(&UNK_1019255ec,puVar1);
  FUN_1001b8238(0);
  func_0x000107c610f8();
  FUN_10072afa4(puVar2);
  return;
}



/* Entry: 10072af80; end: 10072afa3;  */

void FUN_10072af80(void)

{
  long unaff_x20;
  
  func_0x000107c61640(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10072afa4; end: 10072b027;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10072afa4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  long unaff_x20;
  
  puVar2 = &stack0xffffffffffffffc0;
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_113012fb8) = param_1;
  uVar1 = param_1;
  func_0x000107c6157c();
  FUN_1000bf56c();
  *(undefined8 *)(unaff_x20 + _DAT_113012fc0) = uVar1;
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_init_1125d9248);
  func_0x000107c61574(param_1);
  return puVar2;
}



/* Entry: 10072b028; end: 10072b0fb;  */

void FUN_10072b028(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10072b0fc; end: 10072b6cf;  */

void FUN_10072b0fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18)

{
  undefined8 uVar1;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = param_3;
  *(undefined8 *)(unaff_x20 + 0x18) = param_4;
  *(undefined8 *)(unaff_x20 + 0x20) = param_5;
  *(undefined8 *)(unaff_x20 + 0x28) = param_6;
  *(undefined8 *)(unaff_x20 + 0x30) = param_7;
  *(undefined8 *)(unaff_x20 + 0x38) = param_8;
  *(undefined8 *)(unaff_x20 + 0x40) = param_9;
  *(undefined8 *)(unaff_x20 + 0x48) = param_10;
  *(undefined8 *)(unaff_x20 + 0x50) = param_11;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  uVar1 = param_12;
  func_0x000107c4141c();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_12);
  *(undefined8 *)(unaff_x20 + 0x58) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x68) = param_14;
  *(undefined8 *)(unaff_x20 + 0x60) = param_13;
  *(undefined8 *)(unaff_x20 + 0x78) = param_16;
  *(undefined8 *)(unaff_x20 + 0x70) = param_15;
  *(undefined8 *)(unaff_x20 + 0x80) = param_17;
  *(undefined8 *)(unaff_x20 + 0x88) = param_18;
  return;
}



/* Entry: 10072b6d0; end: 10072b783;  */

void FUN_10072b6d0(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10072b784; end: 10072b78b; -[SCCommerceOperaServices showcaseLayerViewControllerProvider] */

undefined8 FUN_10072b784(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10072b78c; end: 10072b793; -[_TtC27SCDeckServiceImplementation25DeckServiceImplementation deckHierarchyFactory] */

void FUN_10072b78c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10072b794; end: 10072b7b3;  */

void FUN_10072b794(void)

{
  func_0x000107c61168(&PTR_PTR_11289f210);
  return;
}



/* Entry: 10072b7b4; end: 10072b7ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10072b7b4(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112ff24c0) = param_1;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10072b800; end: 10072b8ab;  */

void FUN_10072b800(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10072b8ac; end: 10072b913;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10072b8ac(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_1003656a0();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112ff0bc8) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 10072b914; end: 10072baef;  */

/* WARNING: Possible PIC construction at 0x00010072ba48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010072ba58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010072ba68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010072ba78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010072ba88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010072ba98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010072baa8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010072bab8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010072bac8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010072babc) */
/* WARNING: Removing unreachable block (ram,0x00010072baac) */
/* WARNING: Removing unreachable block (ram,0x00010072ba9c) */
/* WARNING: Removing unreachable block (ram,0x00010072ba8c) */
/* WARNING: Removing unreachable block (ram,0x00010072ba7c) */
/* WARNING: Removing unreachable block (ram,0x00010072ba6c) */
/* WARNING: Removing unreachable block (ram,0x00010072ba5c) */
/* WARNING: Removing unreachable block (ram,0x00010072ba4c) */
/* WARNING: Removing unreachable block (ram,0x00010072bacc) */

void FUN_10072b914(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = &UNK_1106b32c8;
  func_0x000107c613fc(&UNK_1106b32c8,0xa0,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  *(undefined8 *)(puVar1 + 0x38) = param_7;
  *(undefined8 *)(puVar1 + 0x40) = param_8;
  *(undefined8 *)(puVar1 + 0x48) = param_9;
  *(undefined8 *)(puVar1 + 0x50) = param_10;
  *(undefined8 *)(puVar1 + 0x58) = param_11;
  *(undefined8 *)(puVar1 + 0x60) = param_12;
  *(undefined8 *)(puVar1 + 0x68) = param_13;
  *(undefined8 *)(puVar1 + 0x70) = param_14;
  *(undefined8 *)(puVar1 + 0x78) = param_15;
  *(undefined8 *)(puVar1 + 0x80) = param_16;
  *(undefined8 *)(puVar1 + 0x88) = param_17;
  *(undefined8 *)(puVar1 + 0x90) = param_18;
  *(undefined8 *)(puVar1 + 0x98) = param_19;
  uVar2 = 0x112fba4f0;
  FUN_1000285a8(0x112fba4f0,&UNK_10dc2b788);
  func_0x000107c613fc();
  puVar3 = &UNK_103970cc8;
  FUN_1000841f8(&UNK_103970cc8,puVar1,uVar2);
  FUN_100084214(&UNK_10dc2b760,0x26,2);
  *param_1 = puVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 10072baf0; end: 10072baf3;  */

void FUN_10072baf0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10072baf4; end: 10072bb37;  */

void FUN_10072baf4(void)

{
  long unaff_x20;
  
  FUN_10072b914(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98));
  return;
}



/* Entry: 10072bb38; end: 10072bd93;  */

undefined8 FUN_10072bb38(long param_1,long *param_2,undefined1 *param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  
  *param_3 = 0x50;
  if ((*(long **)(param_1 + 0xa8) == (long *)0x0) || (**(long **)(param_1 + 0xa8) == 0)) {
    return 0;
  }
  uVar9 = 0;
  lVar5 = *param_2;
  lVar7 = *(long *)(lVar5 + 0x68);
  if ((*(byte *)(lVar5 + 0xa4) & 1) == 0) {
    lVar6 = *(long *)(*(long *)(lVar5 + 0x30) + 0x110);
    lVar8 = 0;
    if (lVar6 != 0) {
      if (*(int *)(*(long *)(lVar5 + 0x30) + 0xd0) == 2) {
        lVar8 = *(long *)(lVar6 + 0x5f0);
        uVar9 = *(undefined8 *)(lVar8 + 0x20);
        lVar8 = *(long *)(lVar8 + 0x28);
      }
      else {
        uVar9 = 0;
        lVar8 = 0;
      }
    }
  }
  else {
    lVar8 = 0;
  }
  lVar6 = param_1;
  FUN_10072bd94();
  if (lVar6 == 0) {
    FUN_1004d2c58(0x10,0,0xb,&UNK_10f6d11cf,0x18e);
    return 0;
  }
  lVar11 = lVar6;
  FUN_10072be20();
  if ((int)lVar11 != 0) {
    lVar11 = lVar6 + 0xe0;
    FUN_1001e6cec(lVar11,0,lVar5);
    if ((int)lVar11 != 0) {
      puVar1 = &UNK_10f6d123e;
      if ((*(byte *)(lVar5 + 0xa4) & 1) == 0) {
        puVar1 = &UNK_10f6d1249;
      }
      lVar5 = lVar6;
      FUN_10072c050(lVar6,puVar1);
      if ((int)lVar5 != 0) {
        lVar11 = *(long *)(lVar6 + 0x20);
        uVar3 = *(undefined8 *)(param_2[1] + 0x10);
        uVar10 = *(ulong *)(lVar11 + 0x10);
        *(ulong *)(lVar11 + 0x10) = uVar10 | 1;
        lVar5 = lVar11;
        FUN_1004dce44(lVar11,uVar3);
        *(ulong *)(lVar11 + 0x10) = uVar10;
        if ((int)lVar5 != 0) {
          if (lVar8 != 0) {
            lVar8 = *(long *)(lVar6 + 0x20);
            lVar5 = lVar8;
            func_0x000107c34fb4(lVar8,0,uVar9);
            if ((int)lVar5 == 0) {
              *(undefined1 *)(lVar8 + 0x70) = 1;
              goto LAB_10072bd28;
            }
          }
          if (*(long *)(param_2[1] + 0x28) != 0) {
            *(long *)(lVar6 + 0x38) = *(long *)(param_2[1] + 0x28);
          }
          pcVar4 = *(code **)(lVar7 + 0x148);
          if (pcVar4 == (code *)0x0) {
            lVar5 = lVar6;
            FUN_10072c0bc();
            iVar2 = (int)lVar5;
          }
          else {
            lVar5 = lVar6;
            (*pcVar4)(lVar6,*(undefined8 *)(lVar7 + 0x150));
            iVar2 = (int)lVar5;
          }
          lVar5 = (long)*(int *)(lVar6 + 0xb0);
          *(long *)(param_1 + 0xb8) = lVar5;
          if ((iVar2 < 1) && (*(char *)(param_2[1] + 0xe8) != '\0')) {
            func_0x000107c2b8b8();
            uVar9 = 0;
            *param_3 = (char)lVar5;
          }
          else {
            FUN_1001e83a0();
            uVar9 = 1;
          }
          goto LAB_10072bd48;
        }
      }
    }
  }
LAB_10072bd28:
  FUN_1004d2c58(0x10,0,0xb,&UNK_10f6d11cf,0x18e);
  uVar9 = 0;
LAB_10072bd48:
  FUN_100739200(lVar6);
  FUN_1001e33e0(lVar6);
  return uVar9;
}



/* Entry: 10072bd94; end: 10072be1f;  */

undefined8 * FUN_10072bd94(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0xf0;
  func_0x000107c610a0();
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0xe8;
    puVar1[4] = 0;
    puVar1[3] = 0;
    puVar1[6] = 0;
    puVar1[5] = 0;
    puVar1[8] = 0;
    puVar1[7] = 0;
    puVar1[10] = 0;
    puVar1[9] = 0;
    puVar1[0xc] = 0;
    puVar1[0xb] = 0;
    puVar1[0xe] = 0;
    puVar1[0xd] = 0;
    puVar1[0x10] = 0;
    puVar1[0xf] = 0;
    puVar1[0x12] = 0;
    puVar1[0x11] = 0;
    puVar1[0x14] = 0;
    puVar1[0x13] = 0;
    puVar1[0x16] = 0;
    puVar1[0x15] = 0;
    puVar1[0x18] = 0;
    puVar1[0x17] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x19] = 0;
    puVar1[0x1c] = 0;
    puVar1[0x1b] = 0;
    puVar1[0x1d] = 0;
    puVar1[2] = 0;
    puVar1[1] = 0;
    return puVar1 + 1;
  }
  FUN_1004d2c58(0xb,0,0x41,&UNK_10f6cdfd2,0x8c6);
  return (undefined8 *)0x0;
}



/* Entry: 10072be20; end: 10072c04f;  */

undefined8 FUN_10072be20(long *param_1,long param_2,long param_3,long param_4)

{
  code *pcVar1;
  code *pcVar2;
  undefined *puVar3;
  long *plVar4;
  undefined *puVar5;
  long lVar6;
  undefined **ppuVar7;
  long lVar8;
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[0x1c] = 0;
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  if (param_2 == 0) {
    FUN_1004d2c58(0xb,0,0x43,&UNK_10f6cdfd2,0x8e6);
  }
  else {
    plVar4 = param_1;
    func_0x0001004caedc();
    param_1[4] = (long)plVar4;
    if (plVar4 != (long *)0x0) {
      param_1[7] = *(long *)(param_2 + 0xf0);
      param_1[0x11] = *(long *)(param_2 + 0x138);
      FUN_1004dce44();
      if ((int)plVar4 != 0) {
        lVar6 = param_1[4];
        ppuVar7 = &PTR_DAT_110c86b68;
        lVar8 = 5;
        do {
          puVar5 = *ppuVar7;
          func_0x000107c613c0(puVar5,"default");
          if ((int)puVar5 == 0) goto LAB_10072bed4;
          ppuVar7 = ppuVar7 + 0xf;
          lVar8 = lVar8 + -1;
        } while (lVar8 != 0);
        ppuVar7 = (undefined **)0x0;
LAB_10072bed4:
        FUN_1004dce44(lVar6,ppuVar7);
        if ((int)lVar6 != 0) {
          pcVar2 = FUN_10072f880;
          if (*(code **)(param_2 + 0x100) != (code *)0x0) {
            pcVar2 = *(code **)(param_2 + 0x100);
          }
          lVar8 = 0x10072f46c;
          if (*(long *)(param_2 + 0xf8) != 0) {
            lVar8 = *(long *)(param_2 + 0xf8);
          }
          param_1[8] = lVar8;
          param_1[9] = (long)pcVar2;
          pcVar2 = FUN_100736864;
          if (*(code **)(param_2 + 0xf0) != (code *)0x0) {
            pcVar2 = *(code **)(param_2 + 0xf0);
          }
          pcVar1 = FUN_100735c8c;
          if (*(code **)(param_2 + 0xe8) != (code *)0x0) {
            pcVar1 = *(code **)(param_2 + 0xe8);
          }
          param_1[6] = (long)pcVar1;
          param_1[7] = (long)pcVar2;
          lVar8 = *(long *)(param_2 + 0x110);
          pcVar2 = FUN_10073573c;
          if (*(code **)(param_2 + 0x108) != (code *)0x0) {
            pcVar2 = *(code **)(param_2 + 0x108);
          }
          param_1[10] = (long)pcVar2;
          param_1[0xb] = lVar8;
          puVar5 = &UNK_10ae4c78c;
          if (*(undefined **)(param_2 + 0x118) != (undefined *)0x0) {
            puVar5 = *(undefined **)(param_2 + 0x118);
          }
          puVar3 = &UNK_10ae4cac8;
          if (*(undefined **)(param_2 + 0x120) != (undefined *)0x0) {
            puVar3 = *(undefined **)(param_2 + 0x120);
          }
          param_1[0xc] = (long)puVar5;
          param_1[0xd] = (long)puVar3;
          puVar5 = &UNK_10ae4bcf8;
          if (*(undefined **)(param_2 + 0x128) != (undefined *)0x0) {
            puVar5 = *(undefined **)(param_2 + 0x128);
          }
          puVar3 = &UNK_10ae4bef0;
          if (*(undefined **)(param_2 + 0x130) != (undefined *)0x0) {
            puVar3 = *(undefined **)(param_2 + 0x130);
          }
          param_1[0xf] = (long)puVar5;
          param_1[0x10] = (long)puVar3;
          param_1[0xe] = (long)&UNK_10ae4cb8c;
          return 1;
        }
      }
    }
  }
  FUN_10021f290(0x113311308,param_1,param_1 + 0x1c);
  lVar8 = param_1[4];
  if (lVar8 != 0) {
    FUN_1004caf34(lVar8);
    FUN_1001e33e0(lVar8);
  }
  param_1[0x1c] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  FUN_1004d2c58(0xb,0,0x41,&UNK_10f6cdfd2,0x938);
  return 0;
}



/* Entry: 10072c050; end: 10072c0bb;  */

long FUN_10072c050(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  undefined1 uVar4;
  int iVar5;
  ulong uVar6;
  ulong *puVar7;
  undefined **ppuVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  
  lVar11 = 5;
  ppuVar8 = &PTR_DAT_110c86b68;
  while( true ) {
    puVar3 = *ppuVar8;
    func_0x000107c613c0(puVar3,param_2);
    if ((int)puVar3 == 0) break;
    ppuVar8 = ppuVar8 + 0xf;
    lVar11 = lVar11 + -1;
    if (lVar11 == 0) {
      return 0;
    }
  }
  lVar11 = *(long *)(param_1 + 0x20);
  if (ppuVar8 == (undefined **)0x0) {
    return 1;
  }
  uVar10 = (ulong)ppuVar8[2] | *(ulong *)(lVar11 + 0x10);
  uVar9 = (uint)uVar10;
  if ((uVar9 >> 4 & 1) != 0) {
    *(undefined8 *)(lVar11 + 0x10) = 0;
  }
  if ((uVar9 >> 3 & 1) != 0) {
    return 1;
  }
  iVar5 = *(int *)(ppuVar8 + 4);
  if ((uVar9 >> 1 & 1) == 0) {
    if (iVar5 == 0) {
LAB_1004dcec8:
      iVar5 = *(int *)((long)ppuVar8 + 0x24);
      if (iVar5 != 0) {
        if ((uVar10 & 1) == 0) goto LAB_1004dced4;
LAB_1004dcedc:
        *(int *)(lVar11 + 0x24) = iVar5;
      }
    }
    else {
      if (((uVar10 & 1) != 0) || (*(int *)(lVar11 + 0x20) == 0)) {
        *(int *)(lVar11 + 0x20) = iVar5;
        goto LAB_1004dcec8;
      }
      iVar5 = *(int *)((long)ppuVar8 + 0x24);
      if (iVar5 != 0) {
LAB_1004dced4:
        if (*(int *)(lVar11 + 0x24) == 0) goto LAB_1004dcedc;
      }
    }
    if ((*(int *)(ppuVar8 + 5) != -1) && (((uVar10 & 1) != 0 || (*(int *)(lVar11 + 0x28) == -1)))) {
      *(int *)(lVar11 + 0x28) = *(int *)(ppuVar8 + 5);
    }
    uVar6 = *(ulong *)(lVar11 + 0x18);
    if (((uint)uVar6 >> 1 & 1) == 0) goto LAB_1004dcf08;
  }
  else {
    *(int *)(lVar11 + 0x20) = iVar5;
    *(undefined8 *)(lVar11 + 0x24) = *(undefined8 *)((long)ppuVar8 + 0x24);
    uVar6 = *(ulong *)(lVar11 + 0x18);
LAB_1004dcf08:
    *(undefined **)(lVar11 + 8) = ppuVar8[1];
    uVar6 = uVar6 & 0xfffffffffffffffd;
    *(ulong *)(lVar11 + 0x18) = uVar6;
  }
  if ((uVar9 >> 2 & 1) != 0) {
    uVar6 = 0;
    *(undefined8 *)(lVar11 + 0x18) = 0;
  }
  *(ulong *)(lVar11 + 0x18) = (ulong)ppuVar8[3] | uVar6;
  if ((uVar9 >> 1 & 1) == 0) {
    if (ppuVar8[6] == (undefined *)0x0) {
LAB_1004dcf70:
      if (ppuVar8[7] != (undefined *)0x0) {
        if ((uVar10 & 1) == 0) goto LAB_1004dcf7c;
        goto LAB_1004dcf84;
      }
    }
    else {
      if (((uVar10 & 1) != 0) || (*(long *)(lVar11 + 0x30) == 0)) {
        lVar2 = lVar11;
        func_0x000107c2b624();
        if ((int)lVar2 == 0) {
          return lVar2;
        }
        goto LAB_1004dcf70;
      }
      if (ppuVar8[7] != (undefined *)0x0) {
LAB_1004dcf7c:
        if (*(long *)(lVar11 + 0x38) == 0) goto LAB_1004dcf84;
      }
    }
LAB_1004dd034:
    if (ppuVar8[10] == (undefined *)0x0) {
LAB_1004dd064:
      if (ppuVar8[0xc] != (undefined *)0x0) {
        if ((uVar10 & 1) == 0) goto LAB_1004dd070;
        goto LAB_1004dd08c;
      }
    }
    else {
      if (((uVar10 & 1) != 0) || (*(long *)(lVar11 + 0x50) == 0)) {
        lVar2 = lVar11;
        func_0x000107c2b628(lVar11,ppuVar8[10],ppuVar8[0xb]);
        if ((int)lVar2 == 0) {
          return lVar2;
        }
        goto LAB_1004dd064;
      }
      if (ppuVar8[0xc] != (undefined *)0x0) {
LAB_1004dd070:
        if (*(long *)(lVar11 + 0x60) == 0) goto LAB_1004dd08c;
      }
    }
LAB_1004dd0b4:
    uVar4 = *(undefined1 *)(ppuVar8 + 0xe);
    lVar2 = 1;
  }
  else {
    lVar2 = lVar11;
    func_0x000107c2b624();
    if ((int)lVar2 == 0) {
      return lVar2;
    }
LAB_1004dcf84:
    puVar7 = *(ulong **)(lVar11 + 0x38);
    if (puVar7 != (ulong *)0x0) {
      uVar6 = *puVar7;
      if (uVar6 != 0) {
        uVar12 = 0;
        do {
          if (*(long *)(puVar7[1] + uVar12 * 8) != 0) {
            FUN_1001e33e0();
            uVar6 = *puVar7;
          }
          uVar12 = uVar12 + 1;
        } while (uVar12 < uVar6);
      }
      FUN_1001e33e0(puVar7[1]);
      FUN_1001e33e0(puVar7);
      *(undefined8 *)(lVar11 + 0x38) = 0;
    }
    puVar7 = (ulong *)ppuVar8[7];
    if (puVar7 != (ulong *)0x0) {
      FUN_100229de4();
      if (puVar7 == (ulong *)0x0) {
LAB_1004dd104:
        *(undefined8 *)(lVar11 + 0x38) = 0;
        return 0;
      }
      uVar6 = *puVar7;
      if (uVar6 != 0) {
        uVar12 = 0;
        uVar1 = puVar7[1];
        do {
          lVar2 = *(long *)(uVar1 + uVar12 * 8);
          if (lVar2 != 0) {
            func_0x0001001e6ec8();
            *(long *)(puVar7[1] + uVar12 * 8) = lVar2;
            uVar1 = puVar7[1];
            if (*(long *)(uVar1 + uVar12 * 8) == 0) {
              if (uVar12 != 0) {
                uVar10 = 0;
                do {
                  if (*(long *)(puVar7[1] + uVar10 * 8) != 0) {
                    FUN_1001e33e0();
                  }
                  uVar10 = uVar10 + 1;
                } while (uVar12 != uVar10);
                uVar1 = puVar7[1];
              }
              FUN_1001e33e0(uVar1);
              FUN_1001e33e0(puVar7);
              goto LAB_1004dd104;
            }
            uVar6 = *puVar7;
          }
          uVar12 = uVar12 + 1;
        } while (uVar12 < uVar6);
      }
      *(ulong **)(lVar11 + 0x38) = puVar7;
      *(undefined4 *)(lVar11 + 0x40) = *(undefined4 *)(ppuVar8 + 8);
    }
    if ((uVar9 >> 1 & 1) == 0) goto LAB_1004dd034;
    lVar2 = lVar11;
    func_0x000107c2b628(lVar11,ppuVar8[10],ppuVar8[0xb]);
    if ((int)lVar2 == 0) {
      return lVar2;
    }
LAB_1004dd08c:
    if ((ppuVar8[0xd] == (undefined *)0x10) || (ppuVar8[0xd] == (undefined *)0x4)) {
      lVar2 = lVar11 + 0x60;
      func_0x000107c2b630(lVar2,lVar11 + 0x68,ppuVar8[0xc]);
      if ((int)lVar2 != 0) goto LAB_1004dd0b4;
    }
    else {
      lVar2 = 0;
    }
    uVar4 = 1;
  }
  *(undefined1 *)(lVar11 + 0x70) = uVar4;
  return lVar2;
}



/* Entry: 10072c0bc; end: 10072cb2b;  */

/* WARNING: Type propagation algorithm not settling */

ulong ** FUN_10072c0bc(ulong **param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  ulong *puVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  ulong *puVar13;
  ulong *puVar14;
  int iVar15;
  ulong *puVar16;
  code *pcVar17;
  ulong *puVar18;
  int iVar19;
  ulong uVar20;
  ulong uVar21;
  ulong **ppuVar22;
  ulong uVar23;
  ulong *puVar24;
  uint uVar25;
  code *pcVar26;
  ulong *puStack_70;
  ulong *puStack_68;
  
  if (param_1[1] == (ulong *)0x0) {
    uVar10 = 0x7a;
    uVar11 = 0xc4;
  }
  else {
    if (param_1[0x13] == (ulong *)0x0) {
      puVar16 = param_1[4];
      pcVar17 = (code *)param_1[7];
      puVar7 = (ulong *)0x0;
      FUN_1001e2bf4();
      param_1[0x13] = puVar7;
      if ((puVar7 == (ulong *)0x0) || (func_0x0001001e2c8c(), puVar7 == (ulong *)0x0)) {
        uVar10 = 0xda;
LAB_10072c214:
        FUN_1004d2c58(0xb,0,0x41,&UNK_10f6cdfd2,uVar10);
        ppuVar22 = (ulong **)0x0;
        uVar12 = 0x11;
        goto LAB_10072c130;
      }
      puVar7 = param_1[1] + 3;
      iVar15 = (int)*puVar7;
      do {
        if (iVar15 == -1) break;
        uVar20 = *puVar7;
        if ((int)uVar20 == iVar15) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar7,0x10);
          if (bVar4) {
            *(int *)puVar7 = iVar15 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          bVar4 = cVar3 == '\0';
        }
        else {
          bVar4 = false;
          ClearExclusiveLocal();
        }
        iVar15 = (int)uVar20;
      } while (!bVar4);
      *(undefined4 *)((long)param_1 + 0x94) = 1;
      puVar7 = param_1[2];
      if (puVar7 == (ulong *)0x0) {
        puVar7 = (ulong *)0x0;
      }
      else {
        FUN_100229de4();
        if (puVar7 == (ulong *)0x0) {
          uVar10 = 0xe4;
          goto LAB_10072c214;
        }
      }
      puVar13 = param_1[0x13];
      if (puVar13 == (ulong *)0x0) {
        uVar20 = 0;
        iVar15 = (int)puVar16[5];
        if (iVar15 < 0) goto LAB_10072c380;
LAB_10072c268:
        puVar16 = (ulong *)0x0;
      }
      else {
        uVar20 = *puVar13;
        iVar15 = (int)puVar16[5];
        if (iVar15 < (int)uVar20) {
LAB_10072c380:
          uVar25 = iVar15 + 1;
LAB_10072c388:
          ppuVar22 = (ulong **)0x0;
          uVar21 = uVar20;
          goto LAB_10072c398;
        }
        iVar6 = (int)uVar20 + -1;
        if (uVar20 <= (ulong)(long)iVar6) goto LAB_10072c268;
        puVar16 = *(ulong **)(puVar13[1] + (long)iVar6 * 8);
      }
      uVar25 = iVar15 + 1;
      uVar21 = uVar20;
      do {
        puVar13 = puVar16;
        FUN_10072cbdc();
        if ((int)puVar13 == 0) {
          puVar16 = (ulong *)0x0;
          ppuVar22 = (ulong **)0x0;
LAB_10072c9a8:
          uVar12 = 0x29;
LAB_10072c9ac:
          *(undefined4 *)(param_1 + 0x16) = uVar12;
joined_r0x00010072ca1c:
          if (puVar7 != (ulong *)0x0) {
LAB_10072ca40:
            FUN_1001e33e0(puVar7[1]);
            FUN_1001e33e0(puVar7);
          }
          if (puVar16 != (ulong *)0x0) {
            puStack_68 = puVar16;
            FUN_1004d164c(&puStack_68,&UNK_110c87868,0);
          }
          if (0 < (int)ppuVar22) {
            return ppuVar22;
          }
          if (*(int *)(param_1 + 0x16) != 0) {
            return ppuVar22;
          }
          uVar12 = 1;
          goto LAB_10072c130;
        }
        if ((*(byte *)((long)puVar16 + 0x39) >> 5 & 1) != 0) {
LAB_10072c998:
          ppuVar22 = (ulong **)0x0;
          goto LAB_10072c398;
        }
        if (*(char *)((long)param_1[4] + 0x19) < '\0') {
          ppuVar22 = &puStack_70;
          (*(code *)param_1[8])(ppuVar22,param_1,puVar16);
          if ((int)ppuVar22 < 0) {
            puVar16 = (ulong *)0x0;
LAB_10072ca34:
            *(undefined4 *)(param_1 + 0x16) = 0x42;
            goto joined_r0x00010072ca1c;
          }
          if ((int)ppuVar22 != 0) {
            puStack_68 = puStack_70;
            FUN_1004d164c(&puStack_68,&UNK_110c87868,0);
            goto LAB_10072c398;
          }
        }
        if (puVar7 == (ulong *)0x0) goto LAB_10072c388;
        uVar23 = 0;
        do {
          if (*puVar7 <= uVar23) {
            ppuVar22 = (ulong **)0x0;
            puStack_70 = (ulong *)0x0;
            goto LAB_10072c398;
          }
          puVar13 = *(ulong **)(puVar7[1] + uVar23 * 8);
          ppuVar22 = param_1;
          (*(code *)param_1[9])(param_1,puVar16,puVar13);
          uVar23 = uVar23 + 1;
        } while ((int)ppuVar22 == 0);
        puStack_70 = puVar13;
        if (puVar13 == (ulong *)0x0) goto LAB_10072c998;
        puVar16 = param_1[0x13];
        func_0x0001001e2c8c(puVar16,puVar13,*puVar16);
        if (puVar16 == (ulong *)0x0) {
          FUN_1004d2c58(0xb,0,0x41,&UNK_10f6cdfd2,0x116);
          ppuVar22 = (ulong **)0x0;
          puVar16 = (ulong *)0x0;
          *(undefined4 *)(param_1 + 0x16) = 0x11;
          goto LAB_10072ca40;
        }
        puVar16 = puStack_70 + 3;
        iVar6 = (int)*puVar16;
        do {
          if (iVar6 == -1) break;
          uVar23 = *puVar16;
          if ((int)uVar23 == iVar6) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar16,0x10);
            if (bVar4) {
              *(int *)puVar16 = iVar6 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            bVar4 = cVar3 == '\0';
          }
          else {
            bVar4 = false;
            ClearExclusiveLocal();
          }
          iVar6 = (int)uVar23;
        } while (!bVar4);
        FUN_10073459c(puVar7,puStack_70);
        *(int *)((long)param_1 + 0x94) = *(int *)((long)param_1 + 0x94) + 1;
        iVar6 = (int)uVar21;
        uVar21 = (ulong)(iVar6 + 1);
        puVar16 = puStack_70;
      } while (iVar6 != iVar15);
      ppuVar22 = (ulong **)0x0;
      uVar21 = (ulong)uVar25;
LAB_10072c398:
      bVar4 = false;
      puVar16 = (ulong *)0x0;
      puVar13 = param_1[0x13];
      uVar20 = uVar21;
      if (puVar13 == (ulong *)0x0) goto LAB_10072c3dc;
LAB_10072c3b4:
      iVar6 = (int)*puVar13 + -1;
      uVar23 = (ulong)iVar6;
      if ((ulong)(long)iVar6 < *puVar13) {
        puVar13 = *(ulong **)(puVar13[1] + uVar23 * 8);
      }
      else {
        puVar13 = (ulong *)0x0;
      }
      do {
        puVar14 = puVar13;
        FUN_10072cbdc();
        if ((int)puVar14 == 0) goto LAB_10072c9a8;
        if ((*(byte *)((long)puVar13 + 0x39) >> 5 & 1) != 0) {
          puVar14 = param_1[0x13];
          if ((puVar14 == (ulong *)0x0) || (*puVar14 == 0)) {
            puVar16 = (ulong *)0x0;
            puVar13 = puVar14;
          }
          else {
            lVar9 = *puVar14 - 1;
            if (lVar9 == 0) {
              ppuVar22 = &puStack_70;
              (*(code *)param_1[8])(ppuVar22,param_1,puVar13);
              if ((int)ppuVar22 < 1) {
                param_1[0x17] = puVar13;
                *(int *)((long)param_1 + 0xac) = iVar6;
                *(undefined4 *)(param_1 + 0x16) = 0x12;
              }
              else {
                puVar14 = puVar13;
                func_0x000107c2b5d8(puVar13,puStack_70);
                if ((int)puVar14 == 0) {
                  puStack_68 = puVar13;
                  FUN_1004d164c(&puStack_68,&UNK_110c87868,0);
                  puVar13 = param_1[0x13];
                  if ((puVar13 != (ulong *)0x0) && (uVar23 < *puVar13)) {
                    *(ulong **)(puVar13[1] + uVar23 * 8) = puStack_70;
                  }
                  *(undefined4 *)((long)param_1 + 0x94) = 0;
                  puVar13 = puStack_70;
                  goto LAB_10072c4d8;
                }
                param_1[0x17] = puVar13;
                *(int *)((long)param_1 + 0xac) = iVar6;
                *(undefined4 *)(param_1 + 0x16) = 0x12;
                if ((int)ppuVar22 == 1) {
                  puStack_68 = puStack_70;
                  FUN_1004d164c(&puStack_68,&UNK_110c87868,0);
                }
              }
              ppuVar22 = (ulong **)0x0;
              (*pcVar17)(0,param_1);
              if ((int)ppuVar22 != 0) {
                bVar4 = true;
                goto LAB_10072c4d8;
              }
              goto joined_r0x00010072ca1c;
            }
            FUN_1007345d8(puVar14,lVar9);
            puVar13 = param_1[0x13];
            puVar16 = puVar14;
          }
          *(int *)((long)param_1 + 0x94) = *(int *)((long)param_1 + 0x94) + -1;
          iVar6 = (int)uVar20;
          uVar20 = (ulong)(iVar6 - 1);
          uVar21 = (ulong)((int)uVar21 - 1);
          if ((puVar13 == (ulong *)0x0) || (uVar23 = (ulong)(iVar6 + -2), *puVar13 <= uVar23)) {
            puVar13 = (ulong *)0x0;
          }
          else {
            puVar13 = *(ulong **)(puVar13[1] + uVar23 * 8);
          }
        }
LAB_10072c4d8:
        if ((int)uVar20 <= iVar15) {
          puVar14 = puVar13;
          FUN_10072cbdc();
          iVar6 = (int)puVar14;
          while( true ) {
            if (iVar6 == 0) goto LAB_10072c9a8;
            if ((*(byte *)((long)puVar13 + 0x39) >> 5 & 1) != 0) goto LAB_10072c4e0;
            ppuVar22 = &puStack_70;
            (*(code *)param_1[8])(ppuVar22,param_1,puVar13);
            puVar14 = puStack_70;
            if ((int)ppuVar22 < 0) goto LAB_10072ca34;
            if ((int)ppuVar22 == 0) goto LAB_10072c4e0;
            puVar13 = param_1[0x13];
            func_0x0001001e2c8c(puVar13,puStack_70,*puVar13);
            if (puVar13 == (ulong *)0x0) {
              puStack_68 = puStack_70;
              FUN_1004d164c(&puStack_68,&UNK_110c87868,0);
              FUN_1004d2c58(0xb,0,0x41,&UNK_10f6cdfd2,0x17d);
              ppuVar22 = (ulong **)0x0;
              uVar12 = 0x11;
              goto LAB_10072c9ac;
            }
            puVar13 = puVar14;
            if (uVar25 - 1 == (int)uVar20) break;
            FUN_10072cbdc();
            uVar20 = (ulong)((int)uVar20 + 1);
            iVar6 = (int)puVar14;
          }
          uVar20 = (ulong)uVar25;
        }
LAB_10072c4e0:
        iVar6 = (int)uVar20;
        puVar14 = param_1[0x13];
        if (puVar14 != (ulong *)0x0) {
          pcVar26 = (code *)param_1[7];
          uVar23 = (ulong)*(int *)((long)param_1 + 0x94);
          while (uVar23 < *puVar14) {
            puVar24 = *(ulong **)(puVar14[1] + uVar23 * 8);
            puVar14 = puVar24;
            FUN_100735108(puVar24,*(undefined4 *)((long)param_1[4] + 0x24),0);
            if ((int)puVar14 == 2) {
              param_1[0x17] = puVar24;
              *(int *)((long)param_1 + 0xac) = (int)uVar23;
              *(undefined4 *)(param_1 + 0x16) = 0x1c;
              iVar19 = 0;
              (*pcVar26)(0,param_1);
              if (iVar19 != 0) goto LAB_10072c548;
              goto LAB_10072ca24;
            }
            if ((int)puVar14 == 1) goto LAB_10072c92c;
LAB_10072c548:
            uVar23 = uVar23 + 1;
            puVar14 = param_1[0x13];
            if (puVar14 == (ulong *)0x0) goto LAB_10072c554;
          }
          if ((*(byte *)((long)param_1[4] + 0x1a) >> 3 & 1) == 0) goto LAB_10072c560;
          if (*(int *)((long)param_1 + 0x94) < (int)*puVar14) goto LAB_10072c92c;
          puVar14 = *(ulong **)puVar14[1];
          ppuVar22 = param_1;
          (*(code *)param_1[0xf])(param_1,*(undefined8 *)(*puVar14 + 0x28));
          if (ppuVar22 == (ulong **)0x0) goto LAB_10072c560;
          puVar24 = *ppuVar22;
          if (puVar24 == (ulong *)0x0) goto LAB_10072c7f4;
          puVar18 = (ulong *)0x0;
          do {
            if (puVar18 < puVar24) {
              uVar23 = ppuVar22[1][(long)puVar18];
            }
            else {
              uVar23 = 0;
            }
            uVar8 = uVar23;
            func_0x000107c2b5d8(uVar23,puVar14);
            puVar24 = *ppuVar22;
          } while (((int)uVar8 != 0) && (puVar18 = (ulong *)((long)puVar18 + 1), puVar18 < puVar24))
          ;
          if (puVar24 <= puVar18) {
LAB_10072c7f4:
            FUN_1004d1b04(ppuVar22,&UNK_10ae4d674,FUN_1004d22bc);
            goto LAB_10072c560;
          }
          piVar1 = (int *)(uVar23 + 0x18);
          iVar19 = *piVar1;
          do {
            if (iVar19 == -1) break;
            iVar2 = *piVar1;
            if (iVar2 == iVar19) {
              cVar3 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = iVar19 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
              bVar5 = cVar3 == '\0';
            }
            else {
              bVar5 = false;
              ClearExclusiveLocal();
            }
            iVar19 = iVar2;
          } while (!bVar5);
          FUN_1004d1b04(ppuVar22,&UNK_10ae4d674,FUN_1004d22bc);
          if (uVar23 == 0) goto LAB_10072c560;
          puVar13 = param_1[0x13];
          if ((puVar13 != (ulong *)0x0) && (*puVar13 != 0)) {
            *(ulong *)puVar13[1] = uVar23;
          }
          puStack_68 = puVar14;
          FUN_1004d164c(&puStack_68,&UNK_110c87868,0);
          *(undefined4 *)((long)param_1 + 0x94) = 0;
          goto LAB_10072c92c;
        }
LAB_10072c554:
        if ((*(byte *)((long)param_1[4] + 0x1a) >> 3 & 1) != 0) {
LAB_10072c92c:
          ppuVar22 = param_1;
          FUN_100735220();
          if ((((int)ppuVar22 != 0) && (ppuVar22 = param_1, FUN_1007355a8(), (int)ppuVar22 != 0)) &&
             (ppuVar22 = param_1, (*(code *)param_1[10])(), (int)ppuVar22 != 0)) {
            lVar9 = (long)param_1 + 0xac;
            FUN_100735ab8(lVar9,0,param_1[0x13],param_1[4][3]);
            if ((int)lVar9 != 0) {
              *(int *)(param_1 + 0x16) = (int)lVar9;
              puVar14 = param_1[0x13];
              puVar13 = (ulong *)0x0;
              if (puVar14 != (ulong *)0x0) {
                if ((ulong)(long)*(int *)((long)param_1 + 0xac) < *puVar14) {
                  puVar13 = *(ulong **)(puVar14[1] + (long)*(int *)((long)param_1 + 0xac) * 8);
                }
                else {
                  puVar13 = (ulong *)0x0;
                }
              }
              param_1[0x17] = puVar13;
              iVar15 = 0;
              (*pcVar17)(0,param_1);
              if (iVar15 == 0) goto LAB_10072ca24;
            }
            if ((code *)param_1[6] == (code *)0x0) {
              ppuVar22 = param_1;
              FUN_100735c8c();
              iVar15 = (int)ppuVar22;
            }
            else {
              ppuVar22 = param_1;
              (*(code *)param_1[6])();
              iVar15 = (int)ppuVar22;
            }
            if (iVar15 != 0) {
              ppuVar22 = param_1;
              FUN_100739000();
              if (((int)ppuVar22 != 0) && (!bVar4)) {
                if ((char)param_1[4][3] < '\0') {
                  ppuVar22 = param_1;
                  (*(code *)param_1[0xe])();
                }
                else {
                  ppuVar22 = (ulong **)0x1;
                }
              }
              goto joined_r0x00010072ca1c;
            }
          }
LAB_10072ca24:
          ppuVar22 = (ulong **)0x0;
          goto joined_r0x00010072ca1c;
        }
LAB_10072c560:
        if ((*(ushort *)((long)param_1[4] + 0x19) & 0x1080) != 0) {
LAB_10072c850:
          if (bVar4) {
LAB_10072c928:
            bVar4 = true;
            goto LAB_10072c92c;
          }
          if ((puVar16 == (ulong *)0x0) ||
             (ppuVar22 = param_1, (*(code *)param_1[9])(param_1,puVar13,puVar16), (int)ppuVar22 == 0
             )) {
            uVar12 = 2;
            if (iVar6 <= *(int *)((long)param_1 + 0x94)) {
              uVar12 = 0x14;
            }
            *(undefined4 *)(param_1 + 0x16) = uVar12;
            param_1[0x17] = puVar13;
            iVar6 = iVar6 + -1;
          }
          else {
            func_0x0001001e2c8c(param_1[0x13],puVar16,*param_1[0x13]);
            *(int *)((long)param_1 + 0x94) = iVar6 + 1;
            param_1[0x17] = puVar16;
            *(undefined4 *)(param_1 + 0x16) = 0x13;
            puVar16 = (ulong *)0x0;
          }
          *(int *)((long)param_1 + 0xac) = iVar6;
          iVar15 = 0;
          (*pcVar17)(0,param_1);
          if (iVar15 != 0) goto LAB_10072c928;
          goto LAB_10072ca24;
        }
        uVar23 = (uVar21 & 0xffffffff) - 2;
        do {
          iVar19 = (int)uVar21;
          if (iVar19 < 2) goto LAB_10072c850;
          puVar14 = param_1[0x13];
          if ((puVar14 == (ulong *)0x0) || (*puVar14 <= uVar23)) {
            uVar10 = 0;
          }
          else {
            uVar10 = *(undefined8 *)(puVar14[1] + uVar23 * 8);
          }
          ppuVar22 = &puStack_70;
          (*(code *)param_1[8])(ppuVar22,param_1,uVar10);
          if ((int)ppuVar22 < 0) goto joined_r0x00010072ca1c;
          uVar23 = uVar23 - 1;
          uVar21 = (ulong)(iVar19 - 1);
        } while ((int)ppuVar22 == 0);
        puStack_68 = puStack_70;
        FUN_1004d164c(&puStack_68,&UNK_110c87868,0);
        if (iVar19 <= iVar6) {
          iVar6 = iVar6 + 1;
          do {
            puVar13 = param_1[0x13];
            if (puVar13 != (ulong *)0x0) {
              if (*puVar13 == 0) {
                puVar13 = (ulong *)0x0;
              }
              else {
                FUN_1007345d8(puVar13,*puVar13 - 1);
              }
            }
            puStack_70 = puVar13;
            puStack_68 = puVar13;
            FUN_1004d164c(&puStack_68,&UNK_110c87868,0);
            iVar6 = iVar6 + -1;
            uVar20 = uVar21;
          } while (iVar19 < iVar6);
        }
        puVar13 = param_1[0x13];
        if (puVar13 == (ulong *)0x0) {
          uVar12 = 0;
        }
        else {
          uVar12 = (undefined4)*puVar13;
        }
        *(undefined4 *)((long)param_1 + 0x94) = uVar12;
        if (puVar13 != (ulong *)0x0) goto LAB_10072c3b4;
LAB_10072c3dc:
        puVar13 = (ulong *)0x0;
        iVar6 = -1;
        uVar23 = 0xffffffffffffffff;
      } while( true );
    }
    uVar10 = 0x42;
    uVar11 = 0xcd;
  }
  FUN_1004d2c58(0xb,0,uVar10,&UNK_10f6cdfd2,uVar11);
  ppuVar22 = (ulong **)0xffffffff;
  uVar12 = 0x41;
LAB_10072c130:
  *(undefined4 *)(param_1 + 0x16) = uVar12;
  return ppuVar22;
}



/* Entry: 10072cb2c; end: 10072cb2f;  */

void FUN_10072cb2c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10072cb30; end: 10072cbdb;  */

void FUN_10072cb30(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10072cbdc; end: 10072d3bb;  */

ulong FUN_10072cbdc(long *param_1)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  int *piVar7;
  byte *pbVar8;
  ulong *puVar9;
  undefined8 uVar10;
  long **pplVar11;
  uint uVar12;
  ulong uVar13;
  undefined8 *extraout_x8;
  int iVar14;
  int *piVar15;
  undefined *unaff_x20;
  ulong uVar16;
  undefined8 *puVar17;
  bool bVar18;
  undefined8 uStack_88;
  undefined *puStack_80;
  long *plStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  int iStack_4c;
  long *plStack_48;
  
  iVar2 = (int)param_1;
  iVar14 = iVar2 + 0xb0;
  func_0x000107c61288();
  if (iVar14 != 0) goto LAB_10072d3b8;
  unaff_x20 = (undefined *)param_1[7];
  iVar14 = iVar2 + 0xb0;
  func_0x000107c6128c();
  if (iVar14 != 0) goto LAB_10072d3b8;
  if (((uint)unaff_x20 >> 8 & 1) != 0) goto LAB_10072d394;
  plVar4 = param_1 + 0x16;
  func_0x000107c61290();
  if ((int)plVar4 != 0) goto LAB_10072d3b8;
  if ((*(byte *)((long)param_1 + 0x39) & 1) != 0) goto LAB_10072d388;
  FUN_10072d3bc();
  iVar14 = 0x10c87868;
  FUN_10072d53c(&UNK_110c87868,plVar4,param_1,param_1 + 0x11,0);
  if (iVar14 == 0) {
    param_1[7] = param_1[7] | 0x80;
  }
  lVar3 = *(long *)*param_1;
  if ((lVar3 == 0) || (func_0x0001004d1e5c(lVar3,2), lVar3 == 0)) {
    param_1[7] = param_1[7] | 0x40;
  }
  plVar4 = *(long **)(*param_1 + 0x48);
  FUN_10072eb20(plVar4,0x57,&iStack_4c,0);
  if (plVar4 == (long *)0x0) {
    if (iStack_4c != -1) {
      uVar13 = 0x80;
      goto LAB_10072cd24;
    }
  }
  else {
    lVar3 = *plVar4;
    if ((int)lVar3 != 0) {
      param_1[7] = param_1[7] | 0x10;
    }
    lVar5 = plVar4[1];
    if (lVar5 == 0) {
      lVar5 = -1;
    }
    else if (((int)lVar3 == 0) || (*(int *)(lVar5 + 4) == 0x102)) {
      lVar5 = 0;
      param_1[7] = param_1[7] | 0x80;
    }
    else {
      func_0x0001004d1e5c(lVar5,2);
    }
    param_1[5] = lVar5;
    plStack_48 = plVar4;
    FUN_1004d164c(&plStack_48,&DAT_110c87bf0,0);
    uVar13 = 1;
LAB_10072cd24:
    param_1[7] = param_1[7] | uVar13;
  }
  plVar4 = *(long **)(*param_1 + 0x48);
  FUN_10072eb20(plVar4,0x297,&iStack_4c,0);
  if (plVar4 == (long *)0x0) {
    if (iStack_4c == -1) goto LAB_10072cde4;
    uVar13 = 0x80;
  }
  else {
    if ((((*(byte *)(param_1 + 7) >> 4 & 1) != 0) ||
        (plVar6 = param_1, func_0x000107c2b5e4(param_1,0x55,0xffffffff), -1 < (int)plVar6)) ||
       (plVar6 = param_1, func_0x000107c2b5e4(param_1,0x56,0xffffffff), -1 < (int)plVar6)) {
      param_1[7] = param_1[7] | 0x80;
    }
    lVar3 = *plVar4;
    if (lVar3 == 0) {
      lVar3 = -1;
    }
    else {
      func_0x0001004d1e5c(lVar3,2);
    }
    param_1[6] = lVar3;
    plStack_48 = plVar4;
    FUN_1004d164c(&plStack_48,&DAT_110c89850,0);
    uVar13 = 0x400;
  }
  param_1[7] = param_1[7] | uVar13;
LAB_10072cde4:
  piVar7 = *(int **)(*param_1 + 0x48);
  FUN_10072eb20(piVar7,0x53,&iStack_4c,0);
  if (piVar7 == (int *)0x0) {
    if (iStack_4c != -1) {
      param_1[7] = param_1[7] | 0x80;
    }
  }
  else {
    iVar14 = *piVar7;
    if (iVar14 < 1) {
      param_1[8] = 0;
      pbVar8 = *(byte **)(piVar7 + 2);
    }
    else {
      pbVar8 = *(byte **)(piVar7 + 2);
      bVar1 = *pbVar8;
      param_1[8] = (ulong)bVar1;
      if (iVar14 != 1) {
        param_1[8] = (ulong)CONCAT11(pbVar8[1],bVar1);
      }
    }
    param_1[7] = param_1[7] | 2;
    FUN_1001e33e0(pbVar8);
    FUN_1001e33e0(piVar7);
  }
  param_1[9] = 0;
  puVar9 = *(ulong **)(*param_1 + 0x48);
  FUN_10072eb20(puVar9,0x7e,&iStack_4c,0);
  if (puVar9 == (ulong *)0x0) {
    if (iStack_4c != -1) {
      param_1[7] = param_1[7] | 0x80;
    }
  }
  else {
    param_1[7] = param_1[7] | 4;
    uVar13 = *puVar9;
    if (uVar13 != 0) {
      uVar16 = 0;
      do {
        if (uVar16 < uVar13) {
          iVar14 = (int)*(undefined8 *)(puVar9[1] + uVar16 * 8);
        }
        else {
          iVar14 = 0;
        }
        FUN_10072ec28();
        if (iVar14 < 0x89) {
          if (iVar14 < 0x83) {
            if (iVar14 == 0x81) {
              uVar13 = 1;
            }
            else {
              if (iVar14 != 0x82) goto LAB_10072cf80;
              uVar13 = 2;
            }
          }
          else if (iVar14 == 0x83) {
            uVar13 = 8;
          }
          else if (iVar14 == 0x84) {
            uVar13 = 4;
          }
          else {
            if (iVar14 != 0x85) goto LAB_10072cf80;
            uVar13 = 0x40;
          }
LAB_10072cf74:
          param_1[9] = param_1[9] | uVar13;
        }
        else {
          if (0xb3 < iVar14) {
            if (iVar14 == 0xb4) {
              uVar13 = 0x20;
            }
            else if (iVar14 == 0x129) {
              uVar13 = 0x80;
            }
            else {
              if (iVar14 != 0x38e) goto LAB_10072cf80;
              uVar13 = 0x100;
            }
            goto LAB_10072cf74;
          }
          if ((iVar14 == 0x89) || (iVar14 == 0x8b)) {
            uVar13 = 0x10;
            goto LAB_10072cf74;
          }
        }
LAB_10072cf80:
        uVar16 = uVar16 + 1;
        uVar13 = *puVar9;
      } while (uVar16 < uVar13);
      if (uVar13 != 0) {
        uVar16 = 0;
        do {
          if (*(long *)(puVar9[1] + uVar16 * 8) != 0) {
            FUN_1004d1a84();
            uVar13 = *puVar9;
          }
          uVar16 = uVar16 + 1;
        } while (uVar16 < uVar13);
      }
    }
    FUN_1001e33e0(puVar9[1]);
    FUN_1001e33e0(puVar9);
  }
  piVar7 = *(int **)(*param_1 + 0x48);
  FUN_10072eb20(piVar7,0x47,&iStack_4c,0);
  if (piVar7 == (int *)0x0) {
    if (iStack_4c != -1) {
      param_1[7] = param_1[7] | 0x80;
    }
  }
  else {
    if (*piVar7 < 1) {
      uVar13 = 0;
    }
    else {
      uVar13 = (ulong)**(byte **)(piVar7 + 2);
    }
    param_1[10] = uVar13;
    param_1[7] = param_1[7] | 8;
    FUN_1001e33e0();
    FUN_1001e33e0(piVar7);
  }
  lVar3 = *(long *)(*param_1 + 0x48);
  FUN_10072eb20(lVar3,0x52,&iStack_4c,0);
  param_1[0xb] = lVar3;
  if (lVar3 == 0 && iStack_4c != -1) {
    param_1[7] = param_1[7] | 0x80;
  }
  lVar3 = *(long *)(*param_1 + 0x48);
  FUN_10072eb20(lVar3,0x5a,&iStack_4c,0);
  param_1[0xc] = lVar3;
  if ((lVar3 == 0) && (iStack_4c != -1)) {
    param_1[7] = param_1[7] | 0x80;
  }
  uVar10 = *(undefined8 *)(*param_1 + 0x28);
  FUN_1004d23d0(uVar10,*(undefined8 *)(*param_1 + 0x18));
  if ((int)uVar10 == 0) {
    param_1[7] = param_1[7] | 0x20;
    plVar4 = param_1;
    FUN_1007344e4(param_1,param_1[0xc]);
    if (((int)plVar4 == 0) &&
       ((((uint)param_1[7] >> 1 & 1) == 0 || ((*(byte *)(param_1 + 8) >> 2 & 1) != 0)))) {
      param_1[7] = param_1[7] | 0x2000;
    }
  }
  lVar3 = *(long *)(*param_1 + 0x48);
  FUN_10072eb20(lVar3,0x55,&iStack_4c,0);
  param_1[0xf] = lVar3;
  if ((lVar3 == 0) && (iStack_4c != -1)) {
    param_1[7] = param_1[7] | 0x80;
  }
  lVar3 = *(long *)(*param_1 + 0x48);
  FUN_10072eb20(lVar3,0x29a,&iStack_4c,0);
  param_1[0x10] = lVar3;
  if ((lVar3 == 0) && (iStack_4c != -1)) {
    param_1[7] = param_1[7] | 0x80;
  }
  puVar9 = *(ulong **)(*param_1 + 0x48);
  FUN_10072eb20(puVar9,0x67,&plStack_48,0);
  param_1[0xe] = (long)puVar9;
  if ((puVar9 != (ulong *)0x0) || ((int)plStack_48 == -1)) {
    uVar13 = 0;
    if (puVar9 == (ulong *)0x0) goto LAB_10072d2ac;
LAB_10072d2a4:
    uVar16 = *puVar9;
    do {
      if (uVar16 <= uVar13) goto LAB_10072d1b8;
      puVar17 = *(undefined8 **)(puVar9[1] + uVar13 * 8);
      piVar7 = (int *)puVar17[1];
      if (piVar7 == (int *)0x0) {
        *(undefined4 *)(puVar17 + 3) = 0x807f;
      }
      else {
        iVar14 = *piVar7;
        if (iVar14 < 1) {
          uVar12 = *(uint *)(puVar17 + 3);
        }
        else {
          pbVar8 = *(byte **)(piVar7 + 2);
          bVar1 = *pbVar8;
          uVar12 = (uint)bVar1;
          *(uint *)(puVar17 + 3) = (uint)bVar1;
          if (iVar14 != 1) {
            uVar12 = (uint)CONCAT11(pbVar8[1],bVar1);
          }
        }
        *(uint *)(puVar17 + 3) = uVar12 & 0x807f;
      }
      piVar7 = (int *)*puVar17;
      if ((piVar7 != (int *)0x0) && (*piVar7 == 1)) {
        plVar4 = (long *)puVar17[2];
        if (plVar4 == (long *)0x0) {
LAB_10072d354:
          lVar3 = *(long *)(*param_1 + 0x18);
        }
        else {
          lVar3 = 0;
          do {
            if (*plVar4 == lVar3) goto LAB_10072d354;
            piVar15 = *(int **)(plVar4[1] + lVar3 * 8);
            lVar3 = lVar3 + 1;
          } while (*piVar15 != 4);
          lVar3 = *(long *)(piVar15 + 2);
          if (lVar3 == 0) goto LAB_10072d354;
        }
        func_0x000107c2b65c(piVar7,lVar3);
        if ((int)piVar7 == 0) break;
        puVar9 = (ulong *)param_1[0xe];
      }
      uVar13 = uVar13 + 1;
      if (puVar9 != (ulong *)0x0) goto LAB_10072d2a4;
LAB_10072d2ac:
      uVar16 = 0;
    } while( true );
  }
  param_1[7] = param_1[7] | 0x80;
LAB_10072d1b8:
  uVar13 = 0;
  unaff_x20 = &UNK_10e52ac40;
  do {
    iStack_4c = (int)uVar13;
    puVar9 = *(ulong **)(*param_1 + 0x48);
    if (puVar9 == (ulong *)0x0) {
      iVar14 = 0;
    }
    else {
      iVar14 = (int)*puVar9;
    }
    if (iVar14 <= iStack_4c) {
      uVar13 = param_1[7];
      goto LAB_10072d380;
    }
    puVar17 = (undefined8 *)0x0;
    bVar18 = true;
    iVar14 = 0;
    if ((-1 < iStack_4c) && (puVar9 != (ulong *)0x0)) {
      if (uVar13 < *puVar9) {
        puVar17 = *(undefined8 **)(puVar9[1] + uVar13 * 8);
        if (puVar17 != (undefined8 *)0x0) {
          bVar18 = false;
          iVar14 = (int)*puVar17;
          goto LAB_10072d230;
        }
      }
      else {
        puVar17 = (undefined8 *)0x0;
      }
      iVar14 = 0;
    }
LAB_10072d230:
    FUN_10072ec28();
    if (iVar14 == 0x359) {
      param_1[7] = param_1[7] | 0x1000;
    }
    if ((!bVar18) && (0 < *(int *)(puVar17 + 1))) {
      iVar14 = (int)*puVar17;
      FUN_10072ec28();
      plStack_48 = (long *)CONCAT44(plStack_48._4_4_,iVar14);
      if (iVar14 == 0) break;
      pplVar11 = &plStack_48;
      func_0x000107c60ee0(pplVar11,&UNK_10e52ac40,0xb,4,FUN_10072f324);
      if (pplVar11 == (long **)0x0) break;
    }
    uVar13 = (ulong)(iStack_4c + 1);
  } while( true );
  uVar13 = param_1[7] | 0x200;
LAB_10072d380:
  param_1[7] = uVar13 | 0x100;
LAB_10072d388:
  iVar2 = iVar2 + 0xb0;
  func_0x000107c6128c();
  if (iVar2 == 0) {
LAB_10072d394:
    return (ulong)((param_1[7] & 0x80U) == 0);
  }
LAB_10072d3b8:
  func_0x000107c60ebc();
  pcStack_58 = FUN_10072d3bc;
  uVar13 = 0x113310b08;
  puStack_60 = &stack0xfffffffffffffff0;
  func_0x000107c6127c(0x113310b08,0x10072d3f4);
  if ((int)uVar13 == 0) {
    return 0x113836e60;
  }
  func_0x000107c60ebc();
  pcStack_68 = FUN_10072d3f0;
  puStack_80 = unaff_x20;
  plStack_78 = param_1;
  puStack_70 = (undefined1 *)&puStack_60;
  FUN_100083b20(&uStack_88);
  *extraout_x8 = uStack_88;
  return uVar13;
}



/* Entry: 10072d3bc; end: 10072d3ef;  */

undefined8 FUN_10072d3bc(void)

{
  undefined8 uVar1;
  undefined8 *extraout_x8;
  undefined8 uStack_38;
  
  uVar1 = 0x113310b08;
  func_0x000107c6127c(0x113310b08,0x10072d3f4);
  if ((int)uVar1 == 0) {
    return 0x113836e60;
  }
  func_0x000107c60ebc();
  FUN_100083b20(&uStack_38);
  *extraout_x8 = uStack_38;
  return uVar1;
}



/* Entry: 10072d3f0; end: 10072d43b;  */

void FUN_10072d3f0(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  FUN_100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 10072d43c; end: 10072d53b;  */

undefined8 * FUN_10072d43c(undefined8 param_1,long *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  ulong *puStack_50;
  undefined8 uStack_48;
  
  uStack_48 = param_1;
  if ((param_2 == (long *)0x0) || (*param_2 != 0)) {
    puVar3 = &uStack_48;
    FUN_1004d0778(puVar3,param_2,param_3,0xffffffff,0,0);
  }
  else {
    puVar1 = &uStack_48;
    FUN_1004d0778(puVar1,0,param_3,0xffffffff,0,0);
    puVar3 = puVar1;
    if (0 < (int)puVar1) {
      puVar2 = (ulong *)(((ulong)puVar1 & 0xffffffff) + 8);
      func_0x000107c610a0();
      if (puVar2 == (ulong *)0x0) {
        FUN_1004d2c58(0xc,0,0x41,&UNK_10f6c4ee2,0x61);
        puVar3 = (undefined8 *)0xffffffff;
      }
      else {
        *puVar2 = (ulong)puVar1 & 0xffffffff;
        puVar3 = &uStack_48;
        puStack_50 = puVar2 + 1;
        FUN_1004d0778(puVar3,&puStack_50,param_3,0xffffffff,0,0);
        if (0 < (int)puVar3) {
          *param_2 = (long)(puVar2 + 1);
          puVar3 = puVar1;
        }
      }
    }
  }
  return puVar3;
}



/* Entry: 10072d53c; end: 10072d5c3;  */

long FUN_10072d53c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lStack_38;
  
  lStack_38 = 0;
  FUN_10072d43c(param_3,&lStack_38,param_1);
  if (lStack_38 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = lStack_38;
    FUN_1001fd670(lStack_38,(long)(int)param_3,param_4,param_5,param_2,0);
    FUN_1001e33e0(lStack_38);
  }
  return lVar1;
}



/* Entry: 10072d5c4; end: 10072d63b;  */

void FUN_10072d5c4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1000285a8(0x112d9e970,&UNK_10d93f570);
  func_0x000107c613fc();
  uVar1 = 1;
  FUN_10008747c();
  *param_1 = uVar1;
  return;
}



/* Entry: 10072d63c; end: 10072d6eb;  */

int FUN_10072d63c(ulong param_1,long *param_2)

{
  int iVar1;
  ulong uVar2;
  int iVar3;
  byte *pbVar4;
  byte bStack_51;
  
  if (param_1 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = param_1;
    FUN_10072d5c4(param_1,&bStack_51);
    iVar1 = (int)uVar2;
    iVar3 = iVar1 + 1;
    if (param_2 != (long *)0x0) {
      pbVar4 = (byte *)*param_2 + 1;
      *(byte *)*param_2 = bStack_51;
      if ((iVar1 != 0) &&
         (func_0x000107c610b4(pbVar4,*(undefined8 *)(param_1 + 8),(long)iVar1), 0 < iVar1)) {
        pbVar4[(uVar2 & 0xffffffff) - 1] =
             pbVar4[(uVar2 & 0xffffffff) - 1] & (byte)(0xff << (ulong)(bStack_51 & 0x1f));
      }
      *param_2 = (long)(pbVar4 + iVar1);
    }
  }
  return iVar3;
}



/* Entry: 10072d6ec; end: 10072d71f;  */

void FUN_10072d6ec(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[1] = 0x1032547698badcfe;
  *puVar1 = 0xefcdab8967452301;
  puVar1[3] = 0;
  puVar1[2] = 0;
  *(undefined4 *)(puVar1 + 2) = 0xc3d2e1f0;
  return;
}



/* Entry: 10072d720; end: 10072d83f;  */

undefined8 FUN_10072d720(long param_1,long param_2,ulong param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  
  if (param_3 != 0) {
    puVar2 = (undefined8 *)(param_1 + 0x1c);
    uVar3 = *(uint *)(param_1 + 0x14);
    uVar1 = (int)param_3 * 8;
    *(uint *)(param_1 + 0x14) = uVar3 + uVar1;
    *(uint *)(param_1 + 0x18) =
         (int)(param_3 >> 0x1d) + *(int *)(param_1 + 0x18) + (uint)CARRY4(uVar3,uVar1);
    uVar1 = *(uint *)(param_1 + 0x5c);
    uVar4 = (ulong)uVar1;
    if (uVar1 != 0) {
      if ((param_3 < 0x40) && (param_3 + uVar4 < 0x40)) {
        func_0x000107c610b4((long)puVar2 + uVar4,param_2,param_3);
        *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + (int)param_3;
        return 1;
      }
      lVar5 = 0x40 - uVar4;
      if (uVar1 != 0x40) {
        func_0x000107c610b4((long)puVar2 + uVar4,param_2,lVar5);
      }
      FUN_10072d840(param_1,puVar2,1);
      param_2 = param_2 + lVar5;
      param_3 = param_3 - lVar5;
      *(undefined4 *)(param_1 + 0x5c) = 0;
      *(undefined8 *)(param_1 + 0x24) = 0;
      *puVar2 = 0;
      *(undefined8 *)(param_1 + 0x34) = 0;
      *(undefined8 *)(param_1 + 0x2c) = 0;
      *(undefined8 *)(param_1 + 0x44) = 0;
      *(undefined8 *)(param_1 + 0x3c) = 0;
      *(undefined8 *)(param_1 + 0x54) = 0;
      *(undefined8 *)(param_1 + 0x4c) = 0;
    }
    if (0x3f < param_3) {
      FUN_10072d840(param_1,param_2,param_3 >> 6);
      param_2 = param_2 + (param_3 & 0xffffffffffffffc0);
      param_3 = param_3 & 0x3f;
    }
    if (param_3 != 0) {
      *(int *)(param_1 + 0x5c) = (int)param_3;
      func_0x000107c610b4(puVar2,param_2,param_3);
    }
  }
  return 1;
}



/* Entry: 10072d840; end: 10072ea0b;  */

void FUN_10072d840(undefined1 (*param_1) [16],undefined1 (*param_2) [16],long param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 (*pauVar18) [16];
  uint uVar21;
  ulong uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  int iVar46;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 (*pauVar19) [16];
  undefined1 (*pauVar20) [16];
  
  if ((uRam0000000113836a78 & 8) == 0) {
    uVar38 = *(uint *)*param_1;
    uVar41 = *(uint *)(*param_1 + 4);
    uVar39 = *(uint *)(*param_1 + 8);
    uVar40 = *(uint *)(*param_1 + 0xc);
    iVar46 = *(int *)param_1[1];
    do {
      param_3 = param_3 + -1;
      uVar22 = (*(ulong *)*param_2 & 0xff00ff00ff00ff00) >> 8 |
               (*(ulong *)*param_2 & 0xff00ff00ff00ff) << 8;
      uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 | (uVar22 & 0xffff0000ffff) << 0x10;
      uVar21 = (uint)uVar22;
      uVar1 = uVar41 >> 2 | uVar41 << 0x1e;
      uVar23 = (uint)(uVar22 >> 0x20);
      uVar41 = iVar46 + 0x5a827999 + uVar21 + (uVar38 >> 0x1b | uVar38 << 5) +
               (uVar40 & (uVar41 ^ 0xffffffff) | uVar39 & uVar41);
      uVar22 = (*(ulong *)(*param_2 + 8) & 0xff00ff00ff00ff00) >> 8 |
               (*(ulong *)(*param_2 + 8) & 0xff00ff00ff00ff) << 8;
      uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 | (uVar22 & 0xffff0000ffff) << 0x10;
      uVar2 = uVar38 >> 2 | uVar38 << 0x1e;
      uVar24 = (uint)uVar22;
      uVar38 = uVar40 + 0x5a827999 + uVar23 + (uVar41 >> 0x1b | uVar41 * 0x20) +
               (uVar39 & (uVar38 ^ 0xffffffff) | uVar1 & uVar38);
      uVar40 = uVar41 >> 2 | uVar41 * 0x40000000;
      uVar25 = (uint)(uVar22 >> 0x20);
      uVar41 = uVar39 + 0x5a827999 + uVar24 + (uVar38 >> 0x1b | uVar38 * 0x20) +
               (uVar1 & (uVar41 ^ 0xffffffff) | uVar2 & uVar41);
      uVar22 = (*(ulong *)param_2[1] & 0xff00ff00ff00ff00) >> 8 |
               (*(ulong *)param_2[1] & 0xff00ff00ff00ff) << 8;
      uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 | (uVar22 & 0xffff0000ffff) << 0x10;
      uVar3 = uVar38 >> 2 | uVar38 * 0x40000000;
      uVar26 = (uint)uVar22;
      uVar39 = uVar1 + 0x5a827999 + uVar25 + (uVar41 >> 0x1b | uVar41 * 0x20) +
               (uVar2 & (uVar38 ^ 0xffffffff) | uVar40 & uVar38);
      uVar38 = uVar41 >> 2 | uVar41 * 0x40000000;
      uVar27 = (uint)(uVar22 >> 0x20);
      uVar41 = uVar2 + 0x5a827999 + uVar26 + (uVar39 >> 0x1b | uVar39 * 0x20) +
               (uVar40 & (uVar41 ^ 0xffffffff) | uVar3 & uVar41);
      uVar22 = (*(ulong *)(param_2[1] + 8) & 0xff00ff00ff00ff00) >> 8 |
               (*(ulong *)(param_2[1] + 8) & 0xff00ff00ff00ff) << 8;
      uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 | (uVar22 & 0xffff0000ffff) << 0x10;
      uVar1 = uVar39 >> 2 | uVar39 * 0x40000000;
      uVar28 = (uint)uVar22;
      uVar39 = uVar40 + 0x5a827999 + uVar27 + (uVar41 >> 0x1b | uVar41 * 0x20) +
               (uVar3 & (uVar39 ^ 0xffffffff) | uVar38 & uVar39);
      uVar40 = uVar41 >> 2 | uVar41 * 0x40000000;
      uVar29 = (uint)(uVar22 >> 0x20);
      uVar41 = uVar3 + 0x5a827999 + uVar28 + (uVar39 >> 0x1b | uVar39 * 0x20) +
               (uVar38 & (uVar41 ^ 0xffffffff) | uVar1 & uVar41);
      uVar22 = (*(ulong *)param_2[2] & 0xff00ff00ff00ff00) >> 8 |
               (*(ulong *)param_2[2] & 0xff00ff00ff00ff) << 8;
      uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 | (uVar22 & 0xffff0000ffff) << 0x10;
      uVar2 = uVar39 >> 2 | uVar39 * 0x40000000;
      uVar30 = (uint)uVar22;
      uVar39 = uVar38 + 0x5a827999 + uVar29 + (uVar41 >> 0x1b | uVar41 * 0x20) +
               (uVar1 & (uVar39 ^ 0xffffffff) | uVar40 & uVar39);
      uVar38 = uVar41 >> 2 | uVar41 * 0x40000000;
      uVar31 = (uint)(uVar22 >> 0x20);
      uVar41 = uVar1 + 0x5a827999 + uVar30 + (uVar39 >> 0x1b | uVar39 * 0x20) +
               (uVar40 & (uVar41 ^ 0xffffffff) | uVar2 & uVar41);
      uVar22 = (*(ulong *)(param_2[2] + 8) & 0xff00ff00ff00ff00) >> 8 |
               (*(ulong *)(param_2[2] + 8) & 0xff00ff00ff00ff) << 8;
      uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 | (uVar22 & 0xffff0000ffff) << 0x10;
      uVar1 = uVar39 >> 2 | uVar39 * 0x40000000;
      uVar32 = (uint)uVar22;
      uVar39 = uVar40 + 0x5a827999 + uVar31 + (uVar41 >> 0x1b | uVar41 * 0x20) +
               (uVar2 & (uVar39 ^ 0xffffffff) | uVar38 & uVar39);
      uVar40 = uVar41 >> 2 | uVar41 * 0x40000000;
      uVar33 = (uint)(uVar22 >> 0x20);
      uVar41 = uVar2 + 0x5a827999 + uVar32 + (uVar39 >> 0x1b | uVar39 * 0x20) +
               (uVar38 & (uVar41 ^ 0xffffffff) | uVar1 & uVar41);
      uVar22 = (*(ulong *)param_2[3] & 0xff00ff00ff00ff00) >> 8 |
               (*(ulong *)param_2[3] & 0xff00ff00ff00ff) << 8;
      uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 | (uVar22 & 0xffff0000ffff) << 0x10;
      uVar2 = uVar39 >> 2 | uVar39 * 0x40000000;
      uVar34 = (uint)uVar22;
      uVar39 = uVar38 + 0x5a827999 + uVar33 + (uVar41 >> 0x1b | uVar41 * 0x20) +
               (uVar1 & (uVar39 ^ 0xffffffff) | uVar40 & uVar39);
      uVar3 = uVar41 >> 2 | uVar41 * 0x40000000;
      uVar35 = (uint)(uVar22 >> 0x20);
      uVar41 = uVar1 + 0x5a827999 + uVar34 + (uVar39 >> 0x1b | uVar39 * 0x20) +
               (uVar40 & (uVar41 ^ 0xffffffff) | uVar2 & uVar41);
      uVar22 = (*(ulong *)(param_2[3] + 8) & 0xff00ff00ff00ff00) >> 8 |
               (*(ulong *)(param_2[3] + 8) & 0xff00ff00ff00ff) << 8;
      uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 | (uVar22 & 0xffff0000ffff) << 0x10;
      uVar1 = uVar39 >> 2 | uVar39 * 0x40000000;
      uVar36 = (uint)uVar22;
      uVar39 = uVar40 + 0x5a827999 + uVar35 + (uVar41 >> 0x1b | uVar41 * 0x20) +
               (uVar2 & (uVar39 ^ 0xffffffff) | uVar3 & uVar39);
      uVar38 = uVar21 ^ uVar24 ^ uVar30 ^ uVar35;
      uVar40 = uVar41 >> 2 | uVar41 * 0x40000000;
      uVar37 = (uint)(uVar22 >> 0x20);
      uVar41 = uVar2 + 0x5a827999 + uVar36 + (uVar39 >> 0x1b | uVar39 * 0x20) +
               (uVar3 & (uVar41 ^ 0xffffffff) | uVar1 & uVar41);
      uVar2 = uVar38 >> 0x1f | uVar38 << 1;
      uVar38 = uVar23 ^ uVar25 ^ uVar31 ^ uVar36;
      uVar21 = uVar39 >> 2 | uVar39 * 0x40000000;
      uVar39 = uVar3 + 0x5a827999 + uVar37 + (uVar41 >> 0x1b | uVar41 * 0x20) +
               (uVar1 & (uVar39 ^ 0xffffffff) | uVar40 & uVar39);
      uVar3 = uVar38 >> 0x1f | uVar38 << 1;
      uVar38 = uVar24 ^ uVar26 ^ uVar32 ^ uVar37;
      uVar23 = uVar41 >> 2 | uVar41 * 0x40000000;
      uVar41 = uVar1 + 0x5a827999 + uVar2 + (uVar39 >> 0x1b | uVar39 * 0x20) +
               (uVar40 & (uVar41 ^ 0xffffffff) | uVar21 & uVar41);
      uVar1 = uVar38 >> 0x1f | uVar38 << 1;
      uVar38 = uVar25 ^ uVar27 ^ uVar33 ^ uVar2;
      uVar24 = uVar39 >> 2 | uVar39 * 0x40000000;
      uVar39 = uVar40 + 0x5a827999 + uVar3 + (uVar41 >> 0x1b | uVar41 * 0x20) +
               (uVar21 & (uVar39 ^ 0xffffffff) | uVar23 & uVar39);
      uVar40 = uVar38 >> 0x1f | uVar38 << 1;
      uVar38 = uVar26 ^ uVar28 ^ uVar34 ^ uVar3;
      uVar25 = uVar41 >> 2 | uVar41 * 0x40000000;
      uVar41 = uVar21 + 0x5a827999 + uVar1 + (uVar39 >> 0x1b | uVar39 * 0x20) +
               (uVar23 & (uVar41 ^ 0xffffffff) | uVar24 & uVar41);
      uVar21 = uVar38 >> 0x1f | uVar38 << 1;
      uVar38 = uVar27 ^ uVar29 ^ uVar35 ^ uVar1;
      uVar26 = uVar39 >> 2 | uVar39 * 0x40000000;
      uVar39 = uVar23 + 0x5a827999 + uVar40 + (uVar41 >> 0x1b | uVar41 * 0x20) +
               (uVar24 & (uVar39 ^ 0xffffffff) | uVar25 & uVar39);
      uVar23 = uVar38 >> 0x1f | uVar38 << 1;
      uVar27 = uVar41 >> 2 | uVar41 * 0x40000000;
      uVar38 = uVar28 ^ uVar30 ^ uVar36 ^ uVar40;
      uVar41 = uVar24 + 0x6ed9eba1 + uVar21 + (uVar39 >> 0x1b | uVar39 * 0x20) +
               (uVar25 ^ uVar41 ^ uVar26);
      uVar24 = uVar38 >> 0x1f | uVar38 << 1;
      uVar28 = uVar39 >> 2 | uVar39 * 0x40000000;
      uVar38 = uVar29 ^ uVar31 ^ uVar37 ^ uVar21;
      uVar39 = uVar25 + 0x6ed9eba1 + uVar23 + (uVar41 >> 0x1b | uVar41 * 0x20) +
               (uVar26 ^ uVar39 ^ uVar27);
      uVar25 = uVar38 >> 0x1f | uVar38 << 1;
      uVar29 = uVar41 >> 2 | uVar41 * 0x40000000;
      uVar38 = uVar30 ^ uVar32 ^ uVar2 ^ uVar23;
      uVar41 = uVar26 + 0x6ed9eba1 + uVar24 + (uVar39 >> 0x1b | uVar39 * 0x20) +
               (uVar27 ^ uVar41 ^ uVar28);
      uVar26 = uVar38 >> 0x1f | uVar38 << 1;
      uVar30 = uVar39 >> 2 | uVar39 * 0x40000000;
      uVar38 = uVar31 ^ uVar33 ^ uVar3 ^ uVar24;
      uVar39 = uVar27 + 0x6ed9eba1 + uVar25 + (uVar41 >> 0x1b | uVar41 * 0x20) +
               (uVar28 ^ uVar39 ^ uVar29);
      uVar27 = uVar38 >> 0x1f | uVar38 << 1;
      uVar31 = uVar41 >> 2 | uVar41 * 0x40000000;
      uVar38 = uVar32 ^ uVar34 ^ uVar1 ^ uVar25;
      uVar41 = uVar28 + 0x6ed9eba1 + uVar26 + (uVar39 >> 0x1b | uVar39 * 0x20) +
               (uVar29 ^ uVar41 ^ uVar30);
      uVar28 = uVar38 >> 0x1f | uVar38 << 1;
      uVar32 = uVar39 >> 2 | uVar39 * 0x40000000;
      uVar38 = uVar33 ^ uVar35 ^ uVar40 ^ uVar26;
      uVar39 = uVar29 + 0x6ed9eba1 + uVar27 + (uVar41 >> 0x1b | uVar41 * 0x20) +
               (uVar30 ^ uVar39 ^ uVar31);
      uVar29 = uVar38 >> 0x1f | uVar38 << 1;
      uVar33 = uVar41 >> 2 | uVar41 * 0x40000000;
      uVar38 = uVar34 ^ uVar36 ^ uVar21 ^ uVar27;
      uVar41 = uVar30 + 0x6ed9eba1 + uVar28 + (uVar39 >> 0x1b | uVar39 * 0x20) +
               (uVar31 ^ uVar41 ^ uVar32);
      uVar30 = uVar38 >> 0x1f | uVar38 << 1;
      uVar34 = uVar39 >> 2 | uVar39 * 0x40000000;
      uVar38 = uVar35 ^ uVar37 ^ uVar23 ^ uVar28;
      uVar39 = uVar31 + 0x6ed9eba1 + uVar29 + (uVar41 >> 0x1b | uVar41 * 0x20) +
               (uVar32 ^ uVar39 ^ uVar33);
      uVar31 = uVar38 >> 0x1f | uVar38 << 1;
      uVar35 = uVar41 >> 2 | uVar41 * 0x40000000;
      uVar38 = uVar36 ^ uVar2 ^ uVar24 ^ uVar29;
      uVar41 = uVar32 + 0x6ed9eba1 + uVar30 + (uVar39 >> 0x1b | uVar39 * 0x20) +
               (uVar33 ^ uVar41 ^ uVar34);
      uVar32 = uVar38 >> 0x1f | uVar38 << 1;
      uVar36 = uVar39 >> 2 | uVar39 * 0x40000000;
      uVar38 = uVar37 ^ uVar3 ^ uVar25 ^ uVar30;
      uVar39 = uVar33 + 0x6ed9eba1 + uVar31 + (uVar41 >> 0x1b | uVar41 * 0x20) +
               (uVar34 ^ uVar39 ^ uVar35);
      uVar33 = uVar38 >> 0x1f | uVar38 << 1;
      uVar37 = uVar41 >> 2 | uVar41 * 0x40000000;
      uVar38 = uVar2 ^ uVar1 ^ uVar26 ^ uVar31;
      uVar41 = uVar34 + 0x6ed9eba1 + uVar32 + (uVar39 >> 0x1b | uVar39 * 0x20) +
               (uVar35 ^ uVar41 ^ uVar36);
      uVar2 = uVar38 >> 0x1f | uVar38 << 1;
      uVar34 = uVar39 >> 2 | uVar39 * 0x40000000;
      uVar38 = uVar3 ^ uVar40 ^ uVar27 ^ uVar32;
      uVar39 = uVar35 + 0x6ed9eba1 + uVar33 + (uVar41 >> 0x1b | uVar41 * 0x20) +
               (uVar36 ^ uVar39 ^ uVar37);
      uVar3 = uVar38 >> 0x1f | uVar38 << 1;
      uVar35 = uVar41 >> 2 | uVar41 * 0x40000000;
      uVar38 = uVar1 ^ uVar21 ^ uVar28 ^ uVar33;
      uVar41 = uVar36 + 0x6ed9eba1 + uVar2 + (uVar39 >> 0x1b | uVar39 * 0x20) +
               (uVar37 ^ uVar41 ^ uVar34);
      uVar1 = uVar38 >> 0x1f | uVar38 << 1;
      uVar36 = uVar39 >> 2 | uVar39 * 0x40000000;
      uVar38 = uVar40 ^ uVar23 ^ uVar29 ^ uVar2;
      uVar39 = uVar37 + 0x6ed9eba1 + uVar3 + (uVar41 >> 0x1b | uVar41 * 0x20) +
               (uVar34 ^ uVar39 ^ uVar35);
      uVar40 = uVar38 >> 0x1f | uVar38 << 1;
      uVar37 = uVar41 >> 2 | uVar41 * 0x40000000;
      uVar38 = uVar21 ^ uVar24 ^ uVar30 ^ uVar3;
      uVar41 = uVar34 + 0x6ed9eba1 + uVar1 + (uVar39 >> 0x1b | uVar39 * 0x20) +
               (uVar35 ^ uVar41 ^ uVar36);
      uVar21 = uVar38 >> 0x1f | uVar38 << 1;
      uVar34 = uVar39 >> 2 | uVar39 * 0x40000000;
      uVar38 = uVar23 ^ uVar25 ^ uVar31 ^ uVar1;
      uVar39 = uVar35 + 0x6ed9eba1 + uVar40 + (uVar41 >> 0x1b | uVar41 * 0x20) +
               (uVar36 ^ uVar39 ^ uVar37);
      uVar23 = uVar38 >> 0x1f | uVar38 << 1;
      uVar35 = uVar41 >> 2 | uVar41 * 0x40000000;
      uVar38 = uVar24 ^ uVar26 ^ uVar32 ^ uVar40;
      uVar41 = uVar36 + 0x6ed9eba1 + uVar21 + (uVar39 >> 0x1b | uVar39 * 0x20) +
               (uVar37 ^ uVar41 ^ uVar34);
      uVar24 = uVar38 >> 0x1f | uVar38 << 1;
      uVar36 = uVar39 >> 2 | uVar39 * 0x40000000;
      uVar38 = uVar25 ^ uVar27 ^ uVar33 ^ uVar21;
      uVar39 = uVar37 + 0x6ed9eba1 + uVar23 + (uVar41 >> 0x1b | uVar41 * 0x20) +
               (uVar34 ^ uVar39 ^ uVar35);
      uVar25 = uVar38 >> 0x1f | uVar38 << 1;
      uVar37 = uVar41 >> 2 | uVar41 * 0x40000000;
      uVar38 = uVar26 ^ uVar28 ^ uVar2 ^ uVar23;
      uVar41 = uVar34 + 0x6ed9eba1 + uVar24 + (uVar39 >> 0x1b | uVar39 * 0x20) +
               (uVar35 ^ uVar41 ^ uVar36);
      uVar26 = uVar38 >> 0x1f | uVar38 << 1;
      uVar34 = uVar39 >> 2 | uVar39 * 0x40000000;
      uVar38 = uVar27 ^ uVar29 ^ uVar3 ^ uVar24;
      uVar39 = uVar35 + 0x6ed9eba1 + uVar25 + (uVar41 >> 0x1b | uVar41 * 0x20) +
               (uVar36 ^ uVar39 ^ uVar37);
      uVar27 = uVar38 >> 0x1f | uVar38 << 1;
      uVar35 = uVar41 >> 2 | uVar41 * 0x40000000;
      uVar38 = uVar28 ^ uVar30 ^ uVar1 ^ uVar25;
      uVar41 = uVar36 + 0x8f1bbcdc + uVar26 + (uVar39 >> 0x1b | uVar39 * 0x20) +
               ((uVar41 | uVar34) & uVar37 | uVar41 & uVar34);
      uVar28 = uVar38 >> 0x1f | uVar38 << 1;
      uVar36 = uVar39 >> 2 | uVar39 * 0x40000000;
      uVar38 = uVar29 ^ uVar31 ^ uVar40 ^ uVar26;
      uVar39 = uVar37 + 0x8f1bbcdc + uVar27 + (uVar41 >> 0x1b | uVar41 * 0x20) +
               ((uVar39 | uVar35) & uVar34 | uVar39 & uVar35);
      uVar29 = uVar38 >> 0x1f | uVar38 << 1;
      uVar37 = uVar41 >> 2 | uVar41 * 0x40000000;
      uVar38 = uVar30 ^ uVar32 ^ uVar21 ^ uVar27;
      uVar41 = uVar34 + 0x8f1bbcdc + uVar28 + (uVar39 >> 0x1b | uVar39 * 0x20) +
               ((uVar41 | uVar36) & uVar35 | uVar41 & uVar36);
      uVar30 = uVar38 >> 0x1f | uVar38 << 1;
      uVar34 = uVar39 >> 2 | uVar39 * 0x40000000;
      uVar38 = uVar31 ^ uVar33 ^ uVar23 ^ uVar28;
      uVar39 = uVar35 + 0x8f1bbcdc + uVar29 + (uVar41 >> 0x1b | uVar41 * 0x20) +
               ((uVar39 | uVar37) & uVar36 | uVar39 & uVar37);
      uVar31 = uVar38 >> 0x1f | uVar38 << 1;
      uVar35 = uVar41 >> 2 | uVar41 * 0x40000000;
      uVar38 = uVar32 ^ uVar2 ^ uVar24 ^ uVar29;
      uVar41 = uVar36 + 0x8f1bbcdc + uVar30 + (uVar39 >> 0x1b | uVar39 * 0x20) +
               ((uVar41 | uVar34) & uVar37 | uVar41 & uVar34);
      uVar32 = uVar38 >> 0x1f | uVar38 << 1;
      uVar36 = uVar39 >> 2 | uVar39 * 0x40000000;
      uVar38 = uVar33 ^ uVar3 ^ uVar25 ^ uVar30;
      uVar39 = uVar37 + 0x8f1bbcdc + uVar31 + (uVar41 >> 0x1b | uVar41 * 0x20) +
               ((uVar39 | uVar35) & uVar34 | uVar39 & uVar35);
      uVar33 = uVar38 >> 0x1f | uVar38 << 1;
      uVar37 = uVar41 >> 2 | uVar41 * 0x40000000;
      uVar38 = uVar2 ^ uVar1 ^ uVar26 ^ uVar31;
      uVar41 = uVar34 + 0x8f1bbcdc + uVar32 + (uVar39 >> 0x1b | uVar39 * 0x20) +
               ((uVar41 | uVar36) & uVar35 | uVar41 & uVar36);
      uVar2 = uVar38 >> 0x1f | uVar38 << 1;
      uVar34 = uVar39 >> 2 | uVar39 * 0x40000000;
      uVar38 = uVar3 ^ uVar40 ^ uVar27 ^ uVar32;
      uVar39 = uVar35 + 0x8f1bbcdc + uVar33 + (uVar41 >> 0x1b | uVar41 * 0x20) +
               ((uVar39 | uVar37) & uVar36 | uVar39 & uVar37);
      uVar3 = uVar38 >> 0x1f | uVar38 << 1;
      uVar35 = uVar41 >> 2 | uVar41 * 0x40000000;
      uVar38 = uVar1 ^ uVar21 ^ uVar28 ^ uVar33;
      uVar41 = uVar36 + 0x8f1bbcdc + uVar2 + (uVar39 >> 0x1b | uVar39 * 0x20) +
               ((uVar41 | uVar34) & uVar37 | uVar41 & uVar34);
      uVar1 = uVar38 >> 0x1f | uVar38 << 1;
      uVar36 = uVar39 >> 2 | uVar39 * 0x40000000;
      uVar38 = uVar40 ^ uVar23 ^ uVar29 ^ uVar2;
      uVar39 = uVar37 + 0x8f1bbcdc + uVar3 + (uVar41 >> 0x1b | uVar41 * 0x20) +
               ((uVar39 | uVar35) & uVar34 | uVar39 & uVar35);
      uVar40 = uVar38 >> 0x1f | uVar38 << 1;
      uVar37 = uVar41 >> 2 | uVar41 * 0x40000000;
      uVar38 = uVar21 ^ uVar24 ^ uVar30 ^ uVar3;
      uVar41 = uVar34 + 0x8f1bbcdc + uVar1 + (uVar39 >> 0x1b | uVar39 * 0x20) +
               ((uVar41 | uVar36) & uVar35 | uVar41 & uVar36);
      uVar21 = uVar38 >> 0x1f | uVar38 << 1;
      uVar34 = uVar39 >> 2 | uVar39 * 0x40000000;
      uVar38 = uVar23 ^ uVar25 ^ uVar31 ^ uVar1;
      uVar39 = uVar35 + 0x8f1bbcdc + uVar40 + (uVar41 >> 0x1b | uVar41 * 0x20) +
               ((uVar39 | uVar37) & uVar36 | uVar39 & uVar37);
      uVar23 = uVar38 >> 0x1f | uVar38 << 1;
      uVar35 = uVar41 >> 2 | uVar41 * 0x40000000;
      uVar38 = uVar24 ^ uVar26 ^ uVar32 ^ uVar40;
      uVar41 = uVar36 + 0x8f1bbcdc + uVar21 + (uVar39 >> 0x1b | uVar39 * 0x20) +
               ((uVar41 | uVar34) & uVar37 | uVar41 & uVar34);
      uVar24 = uVar38 >> 0x1f | uVar38 << 1;
      uVar36 = uVar39 >> 2 | uVar39 * 0x40000000;
      uVar38 = uVar25 ^ uVar27 ^ uVar33 ^ uVar21;
      uVar39 = uVar37 + 0x8f1bbcdc + uVar23 + (uVar41 >> 0x1b | uVar41 * 0x20) +
               ((uVar39 | uVar35) & uVar34 | uVar39 & uVar35);
      uVar25 = uVar38 >> 0x1f | uVar38 << 1;
      uVar37 = uVar41 >> 2 | uVar41 * 0x40000000;
      uVar38 = uVar26 ^ uVar28 ^ uVar2 ^ uVar23;
      uVar41 = uVar34 + 0x8f1bbcdc + uVar24 + (uVar39 >> 0x1b | uVar39 * 0x20) +
               ((uVar41 | uVar36) & uVar35 | uVar41 & uVar36);
      uVar26 = uVar38 >> 0x1f | uVar38 << 1;
      uVar34 = uVar39 >> 2 | uVar39 * 0x40000000;
      uVar38 = uVar27 ^ uVar29 ^ uVar3 ^ uVar24;
      uVar39 = uVar35 + 0x8f1bbcdc + uVar25 + (uVar41 >> 0x1b | uVar41 * 0x20) +
               ((uVar39 | uVar37) & uVar36 | uVar39 & uVar37);
      uVar27 = uVar38 >> 0x1f | uVar38 << 1;
      uVar35 = uVar41 >> 2 | uVar41 * 0x40000000;
      uVar38 = uVar28 ^ uVar30 ^ uVar1 ^ uVar25;
      uVar41 = uVar36 + 0x8f1bbcdc + uVar26 + (uVar39 >> 0x1b | uVar39 * 0x20) +
               ((uVar41 | uVar34) & uVar37 | uVar41 & uVar34);
      uVar28 = uVar38 >> 0x1f | uVar38 << 1;
      uVar36 = uVar39 >> 2 | uVar39 * 0x40000000;
      uVar38 = uVar29 ^ uVar31 ^ uVar40 ^ uVar26;
      uVar39 = uVar37 + 0x8f1bbcdc + uVar27 + (uVar41 >> 0x1b | uVar41 * 0x20) +
               ((uVar39 | uVar35) & uVar34 | uVar39 & uVar35);
      uVar29 = uVar38 >> 0x1f | uVar38 << 1;
      uVar37 = uVar41 >> 2 | uVar41 * 0x40000000;
      uVar38 = uVar30 ^ uVar32 ^ uVar21 ^ uVar27;
      uVar41 = uVar34 + 0x8f1bbcdc + uVar28 + (uVar39 >> 0x1b | uVar39 * 0x20) +
               ((uVar41 | uVar36) & uVar35 | uVar41 & uVar36);
      uVar30 = uVar38 >> 0x1f | uVar38 << 1;
      uVar34 = uVar39 >> 2 | uVar39 * 0x40000000;
      uVar38 = uVar31 ^ uVar33 ^ uVar23 ^ uVar28;
      uVar39 = uVar35 + 0x8f1bbcdc + uVar29 + (uVar41 >> 0x1b | uVar41 * 0x20) +
               ((uVar39 | uVar37) & uVar36 | uVar39 & uVar37);
      uVar31 = uVar38 >> 0x1f | uVar38 << 1;
      uVar35 = uVar41 >> 2 | uVar41 * 0x40000000;
      uVar38 = uVar32 ^ uVar2 ^ uVar24 ^ uVar29;
      uVar41 = uVar36 + 0xca62c1d6 + uVar30 + (uVar39 >> 0x1b | uVar39 * 0x20) +
               (uVar37 ^ uVar41 ^ uVar34);
      uVar32 = uVar38 >> 0x1f | uVar38 << 1;
      uVar36 = uVar39 >> 2 | uVar39 * 0x40000000;
      uVar38 = uVar33 ^ uVar3 ^ uVar25 ^ uVar30;
      uVar39 = uVar37 + 0xca62c1d6 + uVar31 + (uVar41 >> 0x1b | uVar41 * 0x20) +
               (uVar34 ^ uVar39 ^ uVar35);
      uVar33 = uVar38 >> 0x1f | uVar38 << 1;
      uVar37 = uVar41 >> 2 | uVar41 * 0x40000000;
      uVar38 = uVar2 ^ uVar1 ^ uVar26 ^ uVar31;
      uVar41 = uVar34 + 0xca62c1d6 + uVar32 + (uVar39 >> 0x1b | uVar39 * 0x20) +
               (uVar35 ^ uVar41 ^ uVar36);
      uVar34 = uVar38 >> 0x1f | uVar38 << 1;
      uVar2 = uVar39 >> 2 | uVar39 * 0x40000000;
      uVar38 = uVar3 ^ uVar40 ^ uVar27 ^ uVar32;
      uVar39 = uVar35 + 0xca62c1d6 + uVar33 + (uVar41 >> 0x1b | uVar41 * 0x20) +
               (uVar36 ^ uVar39 ^ uVar37);
      uVar35 = uVar38 >> 0x1f | uVar38 << 1;
      uVar3 = uVar41 >> 2 | uVar41 * 0x40000000;
      uVar38 = uVar1 ^ uVar21 ^ uVar28 ^ uVar33;
      uVar41 = uVar36 + 0xca62c1d6 + uVar34 + (uVar39 >> 0x1b | uVar39 * 0x20) +
               (uVar37 ^ uVar41 ^ uVar2);
      uVar36 = uVar38 >> 0x1f | uVar38 << 1;
      uVar1 = uVar39 >> 2 | uVar39 * 0x40000000;
      uVar38 = uVar40 ^ uVar23 ^ uVar29 ^ uVar34;
      uVar39 = uVar37 + 0xca62c1d6 + uVar35 + (uVar41 >> 0x1b | uVar41 * 0x20) +
               (uVar2 ^ uVar39 ^ uVar3);
      uVar37 = uVar38 >> 0x1f | uVar38 << 1;
      uVar40 = uVar41 >> 2 | uVar41 * 0x40000000;
      uVar38 = uVar21 ^ uVar24 ^ uVar30 ^ uVar35;
      uVar41 = uVar2 + 0xca62c1d6 + uVar36 + (uVar39 >> 0x1b | uVar39 * 0x20) +
               (uVar3 ^ uVar41 ^ uVar1);
      uVar21 = uVar38 >> 0x1f | uVar38 << 1;
      uVar2 = uVar39 >> 2 | uVar39 * 0x40000000;
      uVar38 = uVar23 ^ uVar25 ^ uVar31 ^ uVar36;
      uVar39 = uVar3 + 0xca62c1d6 + uVar37 + (uVar41 >> 0x1b | uVar41 * 0x20) +
               (uVar1 ^ uVar39 ^ uVar40);
      uVar23 = uVar38 >> 0x1f | uVar38 << 1;
      uVar3 = uVar41 >> 2 | uVar41 * 0x40000000;
      uVar38 = uVar24 ^ uVar26 ^ uVar32 ^ uVar37;
      uVar41 = uVar1 + 0xca62c1d6 + uVar21 + (uVar39 >> 0x1b | uVar39 * 0x20) +
               (uVar40 ^ uVar41 ^ uVar2);
      uVar24 = uVar38 >> 0x1f | uVar38 << 1;
      uVar4 = uVar39 >> 2 | uVar39 * 0x40000000;
      uVar38 = uVar25 ^ uVar27 ^ uVar33 ^ uVar21;
      uVar39 = uVar40 + 0xca62c1d6 + uVar23 + (uVar41 >> 0x1b | uVar41 * 0x20) +
               (uVar2 ^ uVar39 ^ uVar3);
      uVar25 = uVar38 >> 0x1f | uVar38 << 1;
      uVar5 = uVar41 >> 2 | uVar41 * 0x40000000;
      uVar38 = uVar26 ^ uVar28 ^ uVar34 ^ uVar23;
      uVar41 = uVar2 + 0xca62c1d6 + uVar24 + (uVar39 >> 0x1b | uVar39 * 0x20) +
               (uVar3 ^ uVar41 ^ uVar4);
      uVar40 = uVar38 >> 0x1f | uVar38 << 1;
      uVar26 = uVar39 >> 2 | uVar39 * 0x40000000;
      uVar38 = uVar27 ^ uVar29 ^ uVar35 ^ uVar24;
      uVar39 = uVar3 + 0xca62c1d6 + uVar25 + (uVar41 >> 0x1b | uVar41 * 0x20) +
               (uVar4 ^ uVar39 ^ uVar5);
      uVar1 = uVar38 >> 0x1f | uVar38 << 1;
      uVar27 = uVar41 >> 2 | uVar41 * 0x40000000;
      uVar38 = uVar28 ^ uVar30 ^ uVar36 ^ uVar25;
      uVar41 = uVar4 + 0xca62c1d6 + uVar40 + (uVar39 >> 0x1b | uVar39 * 0x20) +
               (uVar5 ^ uVar41 ^ uVar26);
      uVar38 = uVar38 >> 0x1f | uVar38 << 1;
      uVar28 = uVar39 >> 2 | uVar39 * 0x40000000;
      uVar40 = uVar29 ^ uVar31 ^ uVar37 ^ uVar40;
      uVar39 = uVar5 + 0xca62c1d6 + uVar1 + (uVar41 >> 0x1b | uVar41 * 0x20) +
               (uVar26 ^ uVar39 ^ uVar27);
      uVar2 = uVar40 >> 0x1f | uVar40 << 1;
      uVar40 = uVar41 >> 2 | uVar41 * 0x40000000;
      uVar1 = uVar30 ^ uVar32 ^ uVar21 ^ uVar1;
      uVar41 = uVar26 + 0xca62c1d6 + uVar38 + (uVar39 >> 0x1b | uVar39 * 0x20) +
               (uVar27 ^ uVar41 ^ uVar28);
      uVar3 = uVar1 >> 0x1f | uVar1 << 1;
      uVar1 = uVar39 >> 2 | uVar39 * 0x40000000;
      uVar38 = uVar31 ^ uVar33 ^ uVar23 ^ uVar38;
      uVar39 = uVar27 + 0xca62c1d6 + uVar2 + (uVar41 >> 0x1b | uVar41 * 0x20) +
               (uVar28 ^ uVar39 ^ uVar40);
      uVar21 = uVar41 >> 2 | uVar41 * 0x40000000;
      uVar2 = uVar32 ^ uVar34 ^ uVar24 ^ uVar2;
      uVar41 = uVar28 + 0xca62c1d6 + uVar3 + (uVar39 >> 0x1b | uVar39 * 0x20) +
               (uVar40 ^ uVar41 ^ uVar1);
      uVar23 = uVar39 >> 2 | uVar39 * 0x40000000;
      uVar3 = uVar33 ^ uVar35 ^ uVar25 ^ uVar3;
      uVar38 = uVar40 + 0xca62c1d6 + (uVar38 >> 0x1f | uVar38 << 1) +
               (uVar41 >> 0x1b | uVar41 * 0x20) + (uVar1 ^ uVar39 ^ uVar21);
      uVar40 = uVar41 >> 2 | uVar41 * 0x40000000;
      uVar1 = uVar1 + 0xca62c1d6 + (uVar2 >> 0x1f | uVar2 << 1) + (uVar38 >> 0x1b | uVar38 * 0x20) +
              (uVar21 ^ uVar41 ^ uVar23);
      uVar41 = uVar1 + *(int *)(*param_1 + 4);
      uVar39 = (uVar38 >> 2 | uVar38 * 0x40000000) + *(int *)(*param_1 + 8);
      uVar38 = uVar21 + 0xca62c1d6 + (uVar3 >> 0x1f | uVar3 << 1) + (uVar1 >> 0x1b | uVar1 * 0x20) +
               (uVar23 ^ uVar38 ^ uVar40) + *(int *)*param_1;
      uVar40 = uVar40 + *(int *)(*param_1 + 0xc);
      iVar46 = uVar23 + *(int *)param_1[1];
      *(uint *)*param_1 = uVar38;
      *(uint *)(*param_1 + 4) = uVar41;
      *(uint *)(*param_1 + 8) = uVar39;
      *(uint *)(*param_1 + 0xc) = uVar40;
      *(int *)param_1[1] = iVar46;
      param_2 = param_2 + 4;
    } while (param_3 != 0);
    return;
  }
  iVar46 = *(int *)param_1[1];
  auVar42 = *param_1;
  do {
    auVar43 = *param_2;
    pauVar18 = param_2 + 1;
    pauVar19 = param_2 + 2;
    pauVar20 = param_2 + 3;
    param_2 = param_2 + 4;
    param_3 = param_3 + -1;
    auVar47 = NEON_rev32(auVar43,1);
    auVar49 = NEON_rev32(*pauVar18,1);
    auVar50 = NEON_rev32(*pauVar19,1);
    auVar51 = NEON_rev32(*pauVar20,1);
    uVar41 = auVar42._0_4_;
    auVar43._4_4_ = auVar47._4_4_ + 0x5a827999;
    auVar43._0_4_ = auVar47._0_4_ + 0x5a827999;
    auVar43._8_4_ = auVar47._8_4_ + 0x5a827999;
    auVar43._12_4_ = auVar47._12_4_ + 0x5a827999;
    auVar43 = NEON_sha1c(auVar42,iVar46,auVar43,4);
    auVar47 = NEON_sha1su0(auVar47,auVar49,auVar50,4);
    auVar8._4_4_ = auVar49._4_4_ + 0x5a827999;
    auVar8._0_4_ = auVar49._0_4_ + 0x5a827999;
    auVar8._8_4_ = auVar49._8_4_ + 0x5a827999;
    auVar8._12_4_ = auVar49._12_4_ + 0x5a827999;
    auVar44 = NEON_sha1c(auVar43,uVar41 << 0x1e | uVar41 >> 2,auVar8,4);
    auVar48 = NEON_sha1su1(auVar47,auVar51,4);
    auVar49 = NEON_sha1su0(auVar49,auVar50,auVar51,4);
    auVar47._4_4_ = auVar50._4_4_ + 0x5a827999;
    auVar47._0_4_ = auVar50._0_4_ + 0x5a827999;
    auVar47._8_4_ = auVar50._8_4_ + 0x5a827999;
    auVar47._12_4_ = auVar50._12_4_ + 0x5a827999;
    auVar43 = NEON_sha1c(auVar44,auVar43._0_4_ << 0x1e | auVar43._0_4_ >> 2,auVar47,4);
    auVar49 = NEON_sha1su1(auVar49,auVar48,4);
    auVar50 = NEON_sha1su0(auVar50,auVar51,auVar48,4);
    auVar9._4_4_ = auVar51._4_4_ + 0x5a827999;
    auVar9._0_4_ = auVar51._0_4_ + 0x5a827999;
    auVar9._8_4_ = auVar51._8_4_ + 0x5a827999;
    auVar9._12_4_ = auVar51._12_4_ + 0x5a827999;
    auVar47 = NEON_sha1c(auVar43,auVar44._0_4_ << 0x1e | auVar44._0_4_ >> 2,auVar9,4);
    auVar50 = NEON_sha1su1(auVar50,auVar49,4);
    auVar51 = NEON_sha1su0(auVar51,auVar48,auVar49,4);
    auVar44._4_4_ = auVar48._4_4_ + 0x5a827999;
    auVar44._0_4_ = auVar48._0_4_ + 0x5a827999;
    auVar44._8_4_ = auVar48._8_4_ + 0x5a827999;
    auVar44._12_4_ = auVar48._12_4_ + 0x5a827999;
    auVar43 = NEON_sha1c(auVar47,auVar43._0_4_ << 0x1e | auVar43._0_4_ >> 2,auVar44,4);
    auVar52 = NEON_sha1su1(auVar51,auVar50,4);
    auVar44 = NEON_sha1su0(auVar48,auVar49,auVar50,4);
    auVar10._4_4_ = auVar49._4_4_ + 0x6ed9eba1;
    auVar10._0_4_ = auVar49._0_4_ + 0x6ed9eba1;
    auVar10._8_4_ = auVar49._8_4_ + 0x6ed9eba1;
    auVar10._12_4_ = auVar49._12_4_ + 0x6ed9eba1;
    auVar47 = NEON_sha1p(auVar43,auVar47._0_4_ << 0x1e | auVar47._0_4_ >> 2,auVar10,4);
    auVar44 = NEON_sha1su1(auVar44,auVar52,4);
    auVar49 = NEON_sha1su0(auVar49,auVar50,auVar52,4);
    auVar48._4_4_ = auVar50._4_4_ + 0x6ed9eba1;
    auVar48._0_4_ = auVar50._0_4_ + 0x6ed9eba1;
    auVar48._8_4_ = auVar50._8_4_ + 0x6ed9eba1;
    auVar48._12_4_ = auVar50._12_4_ + 0x6ed9eba1;
    auVar43 = NEON_sha1p(auVar47,auVar43._0_4_ << 0x1e | auVar43._0_4_ >> 2,auVar48,4);
    auVar48 = NEON_sha1su1(auVar49,auVar44,4);
    auVar49 = NEON_sha1su0(auVar50,auVar52,auVar44,4);
    auVar11._4_4_ = auVar52._4_4_ + 0x6ed9eba1;
    auVar11._0_4_ = auVar52._0_4_ + 0x6ed9eba1;
    auVar11._8_4_ = auVar52._8_4_ + 0x6ed9eba1;
    auVar11._12_4_ = auVar52._12_4_ + 0x6ed9eba1;
    auVar47 = NEON_sha1p(auVar43,auVar47._0_4_ << 0x1e | auVar47._0_4_ >> 2,auVar11,4);
    auVar51 = NEON_sha1su1(auVar49,auVar48,4);
    auVar50 = NEON_sha1su0(auVar52,auVar44,auVar48,4);
    auVar49._4_4_ = auVar44._4_4_ + 0x6ed9eba1;
    auVar49._0_4_ = auVar44._0_4_ + 0x6ed9eba1;
    auVar49._8_4_ = auVar44._8_4_ + 0x6ed9eba1;
    auVar49._12_4_ = auVar44._12_4_ + 0x6ed9eba1;
    auVar43 = NEON_sha1p(auVar47,auVar43._0_4_ << 0x1e | auVar43._0_4_ >> 2,auVar49,4);
    auVar52 = NEON_sha1su1(auVar50,auVar51,4);
    auVar44 = NEON_sha1su0(auVar44,auVar48,auVar51,4);
    auVar12._4_4_ = auVar48._4_4_ + 0x6ed9eba1;
    auVar12._0_4_ = auVar48._0_4_ + 0x6ed9eba1;
    auVar12._8_4_ = auVar48._8_4_ + 0x6ed9eba1;
    auVar12._12_4_ = auVar48._12_4_ + 0x6ed9eba1;
    auVar47 = NEON_sha1p(auVar43,auVar47._0_4_ << 0x1e | auVar47._0_4_ >> 2,auVar12,4);
    auVar44 = NEON_sha1su1(auVar44,auVar52,4);
    auVar48 = NEON_sha1su0(auVar48,auVar51,auVar52,4);
    auVar50._4_4_ = auVar51._4_4_ + -0x70e44324;
    auVar50._0_4_ = auVar51._0_4_ + -0x70e44324;
    auVar50._8_4_ = auVar51._8_4_ + -0x70e44324;
    auVar50._12_4_ = auVar51._12_4_ + -0x70e44324;
    auVar43 = NEON_sha1m(auVar47,auVar43._0_4_ << 0x1e | auVar43._0_4_ >> 2,auVar50,4);
    auVar48 = NEON_sha1su1(auVar48,auVar44,4);
    auVar49 = NEON_sha1su0(auVar51,auVar52,auVar44,4);
    auVar13._4_4_ = auVar52._4_4_ + -0x70e44324;
    auVar13._0_4_ = auVar52._0_4_ + -0x70e44324;
    auVar13._8_4_ = auVar52._8_4_ + -0x70e44324;
    auVar13._12_4_ = auVar52._12_4_ + -0x70e44324;
    auVar47 = NEON_sha1m(auVar43,auVar47._0_4_ << 0x1e | auVar47._0_4_ >> 2,auVar13,4);
    auVar49 = NEON_sha1su1(auVar49,auVar48,4);
    auVar50 = NEON_sha1su0(auVar52,auVar44,auVar48,4);
    auVar51._4_4_ = auVar44._4_4_ + -0x70e44324;
    auVar51._0_4_ = auVar44._0_4_ + -0x70e44324;
    auVar51._8_4_ = auVar44._8_4_ + -0x70e44324;
    auVar51._12_4_ = auVar44._12_4_ + -0x70e44324;
    auVar43 = NEON_sha1m(auVar47,auVar43._0_4_ << 0x1e | auVar43._0_4_ >> 2,auVar51,4);
    auVar50 = NEON_sha1su1(auVar50,auVar49,4);
    auVar44 = NEON_sha1su0(auVar44,auVar48,auVar49,4);
    auVar14._4_4_ = auVar48._4_4_ + -0x70e44324;
    auVar14._0_4_ = auVar48._0_4_ + -0x70e44324;
    auVar14._8_4_ = auVar48._8_4_ + -0x70e44324;
    auVar14._12_4_ = auVar48._12_4_ + -0x70e44324;
    auVar47 = NEON_sha1m(auVar43,auVar47._0_4_ << 0x1e | auVar47._0_4_ >> 2,auVar14,4);
    auVar44 = NEON_sha1su1(auVar44,auVar50,4);
    auVar48 = NEON_sha1su0(auVar48,auVar49,auVar50,4);
    auVar52._4_4_ = auVar49._4_4_ + -0x70e44324;
    auVar52._0_4_ = auVar49._0_4_ + -0x70e44324;
    auVar52._8_4_ = auVar49._8_4_ + -0x70e44324;
    auVar52._12_4_ = auVar49._12_4_ + -0x70e44324;
    auVar43 = NEON_sha1m(auVar47,auVar43._0_4_ << 0x1e | auVar43._0_4_ >> 2,auVar52,4);
    auVar48 = NEON_sha1su1(auVar48,auVar44,4);
    auVar49 = NEON_sha1su0(auVar49,auVar50,auVar44,4);
    auVar15._4_4_ = auVar50._4_4_ + -0x359d3e2a;
    auVar15._0_4_ = auVar50._0_4_ + -0x359d3e2a;
    auVar15._8_4_ = auVar50._8_4_ + -0x359d3e2a;
    auVar15._12_4_ = auVar50._12_4_ + -0x359d3e2a;
    auVar47 = NEON_sha1p(auVar43,auVar47._0_4_ << 0x1e | auVar47._0_4_ >> 2,auVar15,4);
    auVar49 = NEON_sha1su1(auVar49,auVar48,4);
    auVar50 = NEON_sha1su0(auVar50,auVar44,auVar48,4);
    auVar6._4_4_ = auVar44._4_4_ + -0x359d3e2a;
    auVar6._0_4_ = auVar44._0_4_ + -0x359d3e2a;
    auVar6._8_4_ = auVar44._8_4_ + -0x359d3e2a;
    auVar6._12_4_ = auVar44._12_4_ + -0x359d3e2a;
    auVar43 = NEON_sha1p(auVar47,auVar43._0_4_ << 0x1e | auVar43._0_4_ >> 2,auVar6,4);
    auVar44 = NEON_sha1su1(auVar50,auVar49,4);
    auVar16._4_4_ = auVar48._4_4_ + -0x359d3e2a;
    auVar16._0_4_ = auVar48._0_4_ + -0x359d3e2a;
    auVar16._8_4_ = auVar48._8_4_ + -0x359d3e2a;
    auVar16._12_4_ = auVar48._12_4_ + -0x359d3e2a;
    auVar47 = NEON_sha1p(auVar43,auVar47._0_4_ << 0x1e | auVar47._0_4_ >> 2,auVar16,4);
    auVar7._4_4_ = auVar49._4_4_ + -0x359d3e2a;
    auVar7._0_4_ = auVar49._0_4_ + -0x359d3e2a;
    auVar7._8_4_ = auVar49._8_4_ + -0x359d3e2a;
    auVar7._12_4_ = auVar49._12_4_ + -0x359d3e2a;
    auVar43 = NEON_sha1p(auVar47,auVar43._0_4_ << 0x1e | auVar43._0_4_ >> 2,auVar7,4);
    auVar17._4_4_ = auVar44._4_4_ + -0x359d3e2a;
    auVar17._0_4_ = auVar44._0_4_ + -0x359d3e2a;
    auVar17._8_4_ = auVar44._8_4_ + -0x359d3e2a;
    auVar17._12_4_ = auVar44._12_4_ + -0x359d3e2a;
    auVar47 = NEON_sha1p(auVar43,auVar47._0_4_ << 0x1e | auVar47._0_4_ >> 2,auVar17,4);
    iVar46 = iVar46 + (auVar43._0_4_ << 0x1e | auVar43._0_4_ >> 2);
    auVar45._0_4_ = auVar47._0_4_ + uVar41;
    auVar45._4_4_ = auVar47._4_4_ + auVar42._4_4_;
    auVar45._8_4_ = auVar47._8_4_ + auVar42._8_4_;
    auVar45._12_4_ = auVar47._12_4_ + auVar42._12_4_;
    auVar42 = auVar45;
  } while (param_3 != 0);
  *(int *)*param_1 = auVar45._0_4_;
  *(int *)(*param_1 + 4) = auVar45._4_4_;
  *(int *)(*param_1 + 8) = auVar45._8_4_;
  *(int *)(*param_1 + 0xc) = auVar45._12_4_;
  *(int *)param_1[1] = iVar46;
  return;
}



/* Entry: 10072ea0c; end: 10072ea1b;  */

undefined8 FUN_10072ea0c(long param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  puVar3 = *(uint **)(param_1 + 8);
  puVar1 = puVar3 + 7;
  uVar6 = *(undefined8 *)(puVar3 + 5);
  uVar2 = puVar3[0x17];
  uVar5 = (ulong)uVar2;
  *(undefined1 *)((long)puVar1 + uVar5) = 0x80;
  lVar4 = uVar5 + 1;
  if (uVar2 < 0x38) {
    if (lVar4 == 0x38) goto LAB_10072eaa0;
  }
  else {
    if (uVar2 != 0x3f) {
      func_0x000107c60ee4((long)puVar1 + lVar4,0x3f - uVar5);
    }
    FUN_10072d840(puVar3,puVar1,1);
    lVar4 = 0;
  }
  func_0x000107c60ee4((long)puVar1 + lVar4,0x38 - lVar4);
LAB_10072eaa0:
  uVar6 = NEON_rev32(uVar6,1);
  uVar6 = NEON_rev64(uVar6,4);
  *(undefined8 *)(puVar3 + 0x15) = uVar6;
  FUN_10072d840(puVar3,puVar1,1);
  puVar3[0x17] = 0;
  puVar3[9] = 0;
  puVar3[10] = 0;
  puVar1[0] = 0;
  puVar1[1] = 0;
  puVar3[0xd] = 0;
  puVar3[0xe] = 0;
  puVar3[0xb] = 0;
  puVar3[0xc] = 0;
  puVar3[0x11] = 0;
  puVar3[0x12] = 0;
  puVar3[0xf] = 0;
  puVar3[0x10] = 0;
  puVar3[0x15] = 0;
  puVar3[0x16] = 0;
  puVar3[0x13] = 0;
  puVar3[0x14] = 0;
  uVar2 = (*puVar3 & 0xff00ff00) >> 8 | (*puVar3 & 0xff00ff) << 8;
  *param_2 = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar2 = (puVar3[1] & 0xff00ff00) >> 8 | (puVar3[1] & 0xff00ff) << 8;
  param_2[1] = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar2 = (puVar3[2] & 0xff00ff00) >> 8 | (puVar3[2] & 0xff00ff) << 8;
  param_2[2] = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar2 = (puVar3[3] & 0xff00ff00) >> 8 | (puVar3[3] & 0xff00ff) << 8;
  param_2[3] = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar2 = (puVar3[4] & 0xff00ff00) >> 8 | (puVar3[4] & 0xff00ff) << 8;
  param_2[4] = uVar2 >> 0x10 | uVar2 << 0x10;
  return 1;
}



/* Entry: 10072ea1c; end: 10072eb1f;  */

undefined8 FUN_10072ea1c(uint *param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  puVar1 = param_2 + 7;
  uVar5 = *(undefined8 *)(param_2 + 5);
  uVar2 = param_2[0x17];
  uVar4 = (ulong)uVar2;
  *(undefined1 *)((long)puVar1 + uVar4) = 0x80;
  lVar3 = uVar4 + 1;
  if (uVar2 < 0x38) {
    if (lVar3 == 0x38) goto LAB_10072eaa0;
  }
  else {
    if (uVar2 != 0x3f) {
      func_0x000107c60ee4((long)puVar1 + lVar3,0x3f - uVar4);
    }
    FUN_10072d840(param_2,puVar1,1);
    lVar3 = 0;
  }
  func_0x000107c60ee4((long)puVar1 + lVar3,0x38 - lVar3);
LAB_10072eaa0:
  uVar5 = NEON_rev32(uVar5,1);
  uVar5 = NEON_rev64(uVar5,4);
  *(undefined8 *)(param_2 + 0x15) = uVar5;
  FUN_10072d840(param_2,puVar1,1);
  param_2[0x17] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  puVar1[0] = 0;
  puVar1[1] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  param_2[0x15] = 0;
  param_2[0x16] = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  uVar2 = (*param_2 & 0xff00ff00) >> 8 | (*param_2 & 0xff00ff) << 8;
  *param_1 = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar2 = (param_2[1] & 0xff00ff00) >> 8 | (param_2[1] & 0xff00ff) << 8;
  param_1[1] = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar2 = (param_2[2] & 0xff00ff00) >> 8 | (param_2[2] & 0xff00ff) << 8;
  param_1[2] = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar2 = (param_2[3] & 0xff00ff00) >> 8 | (param_2[3] & 0xff00ff) << 8;
  param_1[3] = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar2 = (param_2[4] & 0xff00ff00) >> 8 | (param_2[4] & 0xff00ff) << 8;
  param_1[4] = uVar2 >> 0x10 | uVar2 << 0x10;
  return 1;
}



/* Entry: 10072eb20; end: 10072ec27;  */

long FUN_10072eb20(ulong *param_1,int param_2,uint *param_3,int *param_4)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  int *piVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  
  if (param_1 != (ulong *)0x0) {
    if (param_4 == (int *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *param_4 + 1;
    }
    uVar8 = (ulong)(uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU));
    if (uVar8 < *param_1) {
      puVar9 = (undefined8 *)0x0;
      do {
        puVar7 = *(undefined8 **)(param_1[1] + uVar8 * 8);
        iVar2 = (int)*puVar7;
        FUN_10072ec28();
        if (iVar2 == param_2) {
          if (param_4 != (int *)0x0) {
            *param_4 = (int)uVar8;
            goto LAB_10072ebec;
          }
          bVar1 = puVar9 != (undefined8 *)0x0;
          puVar9 = puVar7;
          if (bVar1) {
            if (param_3 == (uint *)0x0) {
              return 0;
            }
            uVar4 = 0xfffffffe;
            goto LAB_10072ebc8;
          }
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < *param_1);
      puVar7 = puVar9;
      if (puVar9 != (undefined8 *)0x0) {
LAB_10072ebec:
        if (param_3 != (uint *)0x0) {
          *param_3 = (uint)(0 < *(int *)(puVar7 + 1));
        }
        puVar9 = puVar7;
        FUN_10072ee5c();
        lVar3 = 0;
        if (puVar9 != (undefined8 *)0x0) {
          piVar5 = (int *)puVar7[2];
          lVar6 = *(long *)(piVar5 + 2);
          if (puVar9[1] == 0) {
            lVar3 = 0;
            (*(code *)puVar9[4])(0,&stack0xffffffffffffffd0,(long)*piVar5);
          }
          else {
            lVar3 = 0;
            FUN_1004cd664(0,&stack0xffffffffffffffd0,(long)*piVar5);
          }
          if ((lVar3 != 0) && (lVar6 != *(long *)((int *)puVar7[2] + 2) + (long)*(int *)puVar7[2]))
          {
            if (puVar9[1] == 0) {
              (*(code *)puVar9[3])();
            }
            else {
              FUN_1004d164c(&stack0xffffffffffffffd8,puVar9[1],0);
            }
            FUN_1004d2c58(0x14,0,0xa4,&UNK_10f6cf547,0xe9);
            lVar3 = 0;
          }
        }
        return lVar3;
      }
    }
  }
  if (param_4 != (int *)0x0) {
    *param_4 = -1;
  }
  if (param_3 != (uint *)0x0) {
    uVar4 = 0xffffffff;
LAB_10072ebc8:
    *param_3 = uVar4;
  }
  return 0;
}



/* Entry: 10072ec28; end: 10072ecaf;  */

ulong FUN_10072ec28(ushort *param_1,ushort *param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = 0;
  if ((param_1 == (ushort *)0x0) ||
     (uVar2 = (ulong)*(uint *)(param_1 + 8), *(uint *)(param_1 + 8) != 0)) {
    return uVar2;
  }
  lVar3 = 0x113310e80;
  func_0x000107c61288();
  if ((int)lVar3 == 0) {
    lVar3 = 0x113310e80;
    func_0x000107c6128c();
    if ((int)lVar3 == 0) {
      func_0x000107c60ee0(param_1,&UNK_10e527ce2,0x371,2,FUN_10072ecb0);
      if (param_1 == (ushort *)0x0) {
        return 0;
      }
      return (ulong)*(uint *)(&UNK_110c7ccc8 + (ulong)*param_1 * 0x28);
    }
  }
  func_0x000107c60ebc();
  iVar1 = *(int *)(lVar3 + 0x14);
  if (*(int *)(&UNK_110c7cccc + (ulong)*param_2 * 0x28) <= iVar1) {
    if (*(int *)(&UNK_110c7cccc + (ulong)*param_2 * 0x28) < iVar1) {
      return 1;
    }
    if (iVar1 == 0) {
      return 0;
    }
    uVar2 = *(ulong *)(lVar3 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf098. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memcmp_11034c650)(uVar2,*(undefined8 *)(&UNK_110c7ccd0 + (ulong)*param_2 * 0x28))
    ;
    return uVar2;
  }
  return 0xffffffff;
}



/* Entry: 10072ecb0; end: 10072ed03;  */

undefined8 FUN_10072ecb0(long param_1,ushort *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x14);
  if (iVar1 < *(int *)(&UNK_110c7cccc + (ulong)*param_2 * 0x28)) {
    return 0xffffffff;
  }
  if (*(int *)(&UNK_110c7cccc + (ulong)*param_2 * 0x28) < iVar1) {
    return 1;
  }
  if (iVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf098. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memcmp_11034c650)(uVar2,*(undefined8 *)(&UNK_110c7ccd0 + (ulong)*param_2 * 0x28))
    ;
    return uVar2;
  }
  return 0;
}



/* Entry: 10072ed04; end: 10072ed2f; +[SCGrapheneFideliusMetric existingIdentityInit] */

void FUN_10072ed04(void)

{
  func_0x000107c610f4(PTR_PTR_1126c04d8);
  func_0x000107c46d68();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10072ed30; end: 10072ee5b;  */

/* WARNING: Possible PIC construction at 0x00010072edb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010072edf0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010072ee20: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010072edf4) */
/* WARNING: Removing unreachable block (ram,0x00010072edbc) */
/* WARNING: Removing unreachable block (ram,0x00010072ee28) */
/* WARNING: Removing unreachable block (ram,0x00010072ee3c) */
/* WARNING: Removing unreachable block (ram,0x00010072ee30) */
/* WARNING: Removing unreachable block (ram,0x00010072edcc) */
/* WARNING: Removing unreachable block (ram,0x00010072ee24) */
/* WARNING: Removing unreachable block (ram,0x00010072ee44) */

void FUN_10072ed30(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bd088;
  func_0x000107c61174(param_3);
  func_0x000107c4d3e8(puVar1);
  func_0x000107c61180();
  func_0x000107c5c734(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0xb8));
  func_0x000107c61180();
  func_0x000107c4b9f8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10072ee5c; end: 10072ee83;  */

undefined8 FUN_10072ee5c(undefined8 *param_1)

{
  int **ppiVar1;
  undefined8 uVar2;
  int *piStack_80;
  int aiStack_78 [26];
  
  aiStack_78[0] = (int)*param_1;
  FUN_10072ec28();
  if (aiStack_78[0] != 0) {
    ppiVar1 = &piStack_80;
    piStack_80 = aiStack_78;
    if (aiStack_78[0] < 0) {
      uVar2 = 0;
    }
    else {
      func_0x000107c60ee0(&piStack_80,&PTR_DAT_110c893a0,0x20,8,FUN_10072efb0);
      uVar2 = 0;
      if (ppiVar1 != (int **)0x0) {
        uVar2 = *ppiVar1;
      }
    }
    return uVar2;
  }
  return 0;
}



/* Entry: 10072ee84; end: 10072ef57;  */

void FUN_10072ee84(long param_1)

{
  long lVar1;
  long lVar2;
  int *piVar3;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  FUN_10072ee5c();
  if (lVar1 != 0) {
    piVar3 = *(int **)(param_1 + 0x10);
    lStack_30 = *(long *)(piVar3 + 2);
    if (*(long *)(lVar1 + 8) == 0) {
      lVar2 = 0;
      (**(code **)(lVar1 + 0x20))(0,&lStack_30,(long)*piVar3);
    }
    else {
      lVar2 = 0;
      FUN_1004cd664(0,&lStack_30,(long)*piVar3);
    }
    if ((lVar2 != 0) &&
       (lStack_30 != *(long *)(*(int **)(param_1 + 0x10) + 2) + (long)**(int **)(param_1 + 0x10))) {
      if (*(long *)(lVar1 + 8) == 0) {
        (**(code **)(lVar1 + 0x18))();
      }
      else {
        lStack_28 = lVar2;
        FUN_1004d164c(&lStack_28,*(long *)(lVar1 + 8),0);
      }
      FUN_1004d2c58(0x14,0,0xa4,&UNK_10f6cf547,0xe9);
    }
  }
  return;
}



/* Entry: 10072ef58; end: 10072efaf;  */

void FUN_10072ef58(int param_1)

{
  int *piStack_80;
  int aiStack_78 [26];
  
  piStack_80 = aiStack_78;
  if (-1 < param_1) {
    aiStack_78[0] = param_1;
    func_0x000107c60ee0(&piStack_80,&PTR_DAT_110c893a0,0x20,8,FUN_10072efb0);
  }
  return;
}



/* Entry: 10072efb0; end: 10072efc7;  */

int FUN_10072efb0(undefined8 *param_1,undefined8 *param_2)

{
  return *(int *)*param_1 - *(int *)*param_2;
}



/* Entry: 10072efc8; end: 10072f2cb; -[SCFideliusLogger logAppOpen:failureReason:source:withIdentityLoaded:] */

undefined *
FUN_10072efc8(long param_1,long *param_2,undefined8 param_3,undefined *param_4,undefined *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  long lStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puVar1 = PTR_PTR_1126c0558;
  func_0x000107c610fc(PTR_PTR_1126c0558);
  func_0x000107c5a7bc();
  func_0x000107c5487c(puVar1);
  func_0x000107c59558(puVar1);
  func_0x000107c5a768(puVar1);
  lStack_b0 = param_1;
  func_0x000107c4ba3c(param_1);
  puVar2 = puVar1;
  func_0x000107c44044(puVar1);
  func_0x000107c61180();
  ppuStack_a8 = &PTR____CFConstantStringClassReference_110dab0d8;
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d94c();
  func_0x000107c61180();
  ppuStack_a0 = &PTR____CFConstantStringClassReference_110daf558;
  puVar4 = param_4;
  puStack_88 = puVar3;
  if (param_4 == (undefined *)0x0) {
    puVar4 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x000107c4d8b8();
    func_0x000107c61180();
  }
  ppuStack_98 = &PTR____CFConstantStringClassReference_110dae8d8;
  puVar5 = param_5;
  puStack_80 = puVar4;
  if (param_5 == (undefined *)0x0) {
    puVar5 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x000107c4d8b8();
    func_0x000107c61180();
  }
  ppuStack_90 = &PTR____CFConstantStringClassReference_110e0fd38;
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_78 = puVar5;
  func_0x000107c4d94c();
  func_0x000107c61180();
  puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_70 = puVar6;
  func_0x000107c419ac(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  func_0x000107c61180();
  func_0x000107c3d8e8(lStack_b0);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar6);
  if (param_5 == (undefined *)0x0) {
    func_0x000107c61170(puVar5);
  }
  if (param_4 == (undefined *)0x0) {
    func_0x000107c61170(puVar4);
  }
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
  puVar2 = PTR_PTR_1126c04d8;
  func_0x000107c3de18(PTR_PTR_1126c04d8);
  func_0x000107c61180();
  puVar3 = puVar2;
  func_0x000107c5e508();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000107c5c1ec(PTR__OBJC_CLASS___NSString_1126ae4d0);
  func_0x000107c61180();
  puVar4 = puVar3;
  func_0x000107c5e508(puVar3);
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
  uVar8 = *(undefined8 *)(lStack_b0 + 0x20);
  func_0x000107c5c734(uVar8);
  func_0x000107c61180();
  uVar9 = uVar8;
  func_0x000107c4338c();
  func_0x000107c61180();
  func_0x000107c45318();
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_5);
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_4;
  }
  func_0x000107c60e78();
  if ((int)param_4 == 3) {
    lStack_c8 = *(long *)(*param_2 + 0x10);
    if (lStack_c8 != 0) {
      pcStack_b8 = FUN_10072f2cc;
      puStack_c0 = &stack0xfffffffffffffff0;
      FUN_1004d164c(&lStack_c8,&DAT_110c87418,0);
    }
  }
  else if ((int)param_4 == 1) {
    *(undefined8 *)(*param_2 + 0x10) = 0;
  }
  return (undefined *)0x1;
}



/* Entry: 10072f2cc; end: 10072f323;  */

undefined8 FUN_10072f2cc(int param_1,long *param_2)

{
  long lStack_18;
  
  if (param_1 == 3) {
    lStack_18 = *(long *)(*param_2 + 0x10);
    if (lStack_18 != 0) {
      FUN_1004d164c(&lStack_18,&DAT_110c87418,0);
    }
  }
  else if (param_1 == 1) {
    *(undefined8 *)(*param_2 + 0x10) = 0;
  }
  return 1;
}



/* Entry: 10072f324; end: 10072f333;  */

int FUN_10072f324(int *param_1,int *param_2)

{
  return *param_1 - *param_2;
}



/* Entry: 10072f334; end: 10072f5c7;  */

int ** FUN_10072f334(long param_1,long *param_2,int **param_3,undefined4 *param_4)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  int **ppiVar6;
  long *plVar7;
  int **ppiVar8;
  undefined8 uVar9;
  int *piVar10;
  ulong *puVar11;
  code *pcVar12;
  int **ppiVar13;
  int **ppiVar14;
  undefined8 uVar15;
  int **ppiVar16;
  int *piVar17;
  ulong *puVar18;
  undefined4 *puVar19;
  undefined4 *puVar20;
  int *piVar21;
  long lVar22;
  ulong uVar23;
  int **ppiVar24;
  undefined1 auStack_2f8 [16];
  undefined8 auStack_2e8 [3];
  undefined8 auStack_2d0 [8];
  int aiStack_290 [2];
  undefined1 **ppuStack_288;
  int *piStack_280;
  int *piStack_278;
  undefined1 *apuStack_270 [47];
  long lStack_f8;
  int aiStack_a0 [2];
  undefined8 uStack_98;
  undefined4 auStack_50 [4];
  
  puVar2 = (undefined8 *)(param_1 + 0x10);
  plVar7 = param_2;
  ppiVar13 = param_3;
  func_0x000107c61290();
  if ((int)puVar2 == 0) {
    puVar18 = *(ulong **)(param_1 + 8);
    puVar11 = puVar18;
    plVar7 = param_2;
    ppiVar13 = param_3;
    FUN_10072f5c8();
    iVar1 = (int)puVar11;
    if (iVar1 == -1) {
LAB_10072f3a8:
      puVar19 = (undefined4 *)0x0;
    }
    else {
      puVar19 = (undefined4 *)0x0;
      if (puVar18 != (ulong *)0x0) {
        if (*puVar18 <= (ulong)(long)iVar1) goto LAB_10072f3a8;
        puVar19 = *(undefined4 **)(puVar18[1] + (long)iVar1 * 8);
      }
    }
    puVar2 = (undefined8 *)(param_1 + 0x10);
    func_0x000107c6128c();
    if ((int)puVar2 == 0) {
      if (((int)param_2 == 2) || (puVar20 = puVar19, puVar19 == (undefined4 *)0x0)) {
        piVar10 = *(int **)(param_1 + 0xd8);
        if (piVar10 != (int *)0x0) {
          lVar22 = 0;
          do {
            if (*piVar10 <= lVar22) break;
            lVar3 = *(long *)(*(long *)(piVar10 + 2) + lVar22 * 8);
            if (((*(long *)(lVar3 + 8) != 0) &&
                (pcVar12 = *(code **)(*(long *)(lVar3 + 8) + 0x30), pcVar12 != (code *)0x0)) &&
               (*(int *)(lVar3 + 4) == 0)) {
              (*pcVar12)(lVar3,param_2,param_3,auStack_50);
              puVar20 = auStack_50;
              if (0 < (int)lVar3) goto LAB_10072f424;
              piVar10 = *(int **)(param_1 + 0xd8);
            }
            lVar22 = lVar22 + 1;
          } while (piVar10 != (int *)0x0);
        }
        puVar20 = puVar19;
        if (puVar19 == (undefined4 *)0x0) {
          return (int **)0x0;
        }
      }
LAB_10072f424:
      *param_4 = *puVar20;
      *(undefined8 *)(param_4 + 2) = *(undefined8 *)(puVar20 + 2);
      FUN_1004d1fdc(param_4);
      return (int **)0x1;
    }
  }
  func_0x000107c60ebc();
  piVar10 = aiStack_a0;
  uVar15 = *(undefined8 *)(*ppiVar13 + 6);
  lVar22 = *plVar7;
  FUN_10072f334(lVar22,1,uVar15);
  if ((int)lVar22 == 0) {
    return (int **)0x0;
  }
  plVar4 = plVar7;
  ppiVar8 = ppiVar13;
  uVar9 = uStack_98;
  (*(code *)plVar7[9])();
  if ((int)plVar4 != 0) {
    *puVar2 = uStack_98;
    return (int **)0x1;
  }
  func_0x000107c2b5f8(aiStack_a0);
  ppiVar6 = (int **)(*plVar7 + 0x10);
  func_0x000107c61290();
  if ((int)ppiVar6 == 0) {
    iVar1 = (int)*(undefined8 *)(*plVar7 + 8);
    ppiVar8 = (int **)0x1;
    piVar10 = (int *)0x0;
    uVar9 = uVar15;
    FUN_10072f5c8();
    if (iVar1 == -1) {
LAB_10072f594:
      ppiVar13 = (int **)0x0;
    }
    else {
      uVar23 = (ulong)iVar1;
      do {
        puVar11 = *(ulong **)(*plVar7 + 8);
        if (((puVar11 == (ulong *)0x0) || (*puVar11 <= uVar23)) ||
           (piVar21 = *(int **)(puVar11[1] + uVar23 * 8), *piVar21 != 1)) goto LAB_10072f594;
        ppiVar8 = *(int ***)(**(long **)(piVar21 + 2) + 0x28);
        uVar5 = uVar15;
        FUN_1004d23d0();
        if ((int)uVar5 != 0) goto LAB_10072f594;
        uVar9 = *(undefined8 *)(piVar21 + 2);
        plVar4 = plVar7;
        ppiVar8 = ppiVar13;
        (*(code *)plVar7[9])();
        uVar23 = uVar23 + 1;
      } while ((int)plVar4 == 0);
      *puVar2 = *(undefined8 *)(piVar21 + 2);
      FUN_1004d1fdc(piVar21);
      ppiVar13 = (int **)0x1;
    }
    ppiVar6 = (int **)(*plVar7 + 0x10);
    func_0x000107c6128c();
    if ((int)ppiVar6 == 0) {
      return ppiVar13;
    }
  }
  func_0x000107c60ebc();
  lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  aiStack_290[0] = (int)ppiVar8;
  apuStack_270[0] = auStack_2f8;
  if (aiStack_290[0] == 1) {
    puVar2 = auStack_2d0;
  }
  else {
    puVar2 = auStack_2e8;
  }
  ppuStack_288 = apuStack_270;
  *puVar2 = uVar9;
  ppiVar13 = ppiVar6;
  FUN_1004d2084();
  if (ppiVar6 != (int **)0x0) {
    if (ppiVar6[4] == (int *)0x0) {
      if ((int **)*ppiVar6 != (int **)0x0) {
        ppiVar14 = (int **)0x0;
        do {
          if (*(int **)(ppiVar6[1] + (long)ppiVar14 * 2) == aiStack_290) goto LAB_10072f75c;
          ppiVar14 = (int **)((long)ppiVar14 + 1);
        } while ((int **)*ppiVar6 != ppiVar14);
      }
    }
    else {
      ppiVar24 = (int **)*ppiVar6;
      if (*(int *)(ppiVar6 + 2) == 0) {
        if (ppiVar24 != (int **)0x0) {
          ppiVar14 = (int **)0x0;
          do {
            piStack_280 = *(int **)(ppiVar6[1] + (long)ppiVar14 * 2);
            ppiVar13 = &piStack_278;
            ppiVar8 = &piStack_280;
            piStack_278 = aiStack_290;
            (*(code *)ppiVar6[4])();
            if ((int)ppiVar13 == 0) goto LAB_10072f75c;
            ppiVar14 = (int **)((long)ppiVar14 + 1);
          } while (ppiVar14 < *ppiVar6);
        }
      }
      else if (ppiVar24 != (int **)0x0) {
        ppiVar16 = (int **)0x0;
        do {
          ppiVar14 = (int **)((long)ppiVar16 + (((long)ppiVar24 - (long)ppiVar16) - 1U >> 1));
          piStack_280 = *(int **)(ppiVar6[1] + (long)ppiVar14 * 2);
          ppiVar13 = &piStack_278;
          ppiVar8 = &piStack_280;
          piStack_278 = aiStack_290;
          (*(code *)ppiVar6[4])();
          if ((int)ppiVar13 < 1) {
            if (-1 < (int)ppiVar13) {
              if ((long)ppiVar24 - (long)ppiVar16 == 1) goto LAB_10072f75c;
              ppiVar14 = (int **)((long)ppiVar14 + 1);
            }
          }
          else {
            ppiVar16 = (int **)((long)ppiVar14 + 1);
            ppiVar14 = ppiVar24;
          }
          ppiVar24 = ppiVar14;
        } while (ppiVar16 < ppiVar14);
      }
    }
  }
  ppiVar14 = (int **)0xffffffff;
LAB_10072f724:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f8) {
    return ppiVar14;
  }
  func_0x000107c60e78();
  uVar15 = *(undefined8 *)(*ppiVar13 + 10);
  FUN_1004d23d0(uVar15,*(undefined8 *)(*ppiVar8 + 6));
  if ((int)uVar15 == 0) {
    ppiVar6 = ppiVar13;
    FUN_10072cbdc();
    if (((int)ppiVar6 == 0) || (ppiVar6 = ppiVar8, FUN_10072cbdc(), (int)ppiVar6 == 0)) {
      ppiVar6 = (int **)0x1;
    }
    else if ((ppiVar8[0xc] == (int *)0x0) ||
            (ppiVar6 = ppiVar13, FUN_1007344e4(), (int)ppiVar6 == 0)) {
      if ((*(byte *)((long)ppiVar8 + 0x39) >> 2 & 1) == 0) {
        if ((((uint)ppiVar13[7] >> 1 & 1) != 0) && ((*(byte *)(ppiVar13 + 8) >> 2 & 1) == 0)) {
          return (int **)0x20;
        }
      }
      else if ((((uint)ppiVar13[7] >> 1 & 1) != 0) && (-1 < *(char *)(ppiVar13 + 8))) {
        return (int **)0x27;
      }
      ppiVar6 = (int **)0x0;
    }
  }
  else {
    ppiVar6 = (int **)0x1d;
  }
  return ppiVar6;
LAB_10072f75c:
  if (piVar10 != (int *)0x0) {
    *piVar10 = 1;
    piStack_280 = aiStack_290;
    iVar1 = (int)ppiVar14 + 1;
    piVar21 = *ppiVar6;
    if (iVar1 < (int)piVar21) {
      piVar17 = (int *)(long)iVar1;
      do {
        if (piVar17 < piVar21) {
          piStack_278 = *(int **)(ppiVar6[1] + (long)piVar17 * 2);
        }
        else {
          piStack_278 = (int *)0x0;
        }
        ppiVar13 = &piStack_278;
        ppiVar8 = &piStack_280;
        func_0x0001004d2374();
        if ((int)ppiVar13 != 0) break;
        *piVar10 = *piVar10 + 1;
        piVar17 = (int *)((long)piVar17 + 1);
        piVar21 = *ppiVar6;
      } while ((long)piVar17 < (long)(int)piVar21);
    }
  }
  goto LAB_10072f724;
}



/* Entry: 10072f5c8; end: 10072f7d3;  */

int ** FUN_10072f5c8(int **param_1,int **param_2,undefined8 param_3,int *param_4)

{
  int iVar1;
  int **ppiVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  int *piVar5;
  int **ppiVar6;
  int **ppiVar7;
  int *piVar8;
  int **ppiVar9;
  undefined1 auStack_258 [16];
  undefined8 auStack_248 [3];
  undefined8 auStack_230 [8];
  int aiStack_1f0 [2];
  undefined1 **ppuStack_1e8;
  int *piStack_1e0;
  int *piStack_1d8;
  undefined1 *apuStack_1d0 [47];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  aiStack_1f0[0] = (int)param_2;
  apuStack_1d0[0] = auStack_258;
  if (aiStack_1f0[0] == 1) {
    puVar4 = auStack_230;
  }
  else {
    puVar4 = auStack_248;
  }
  ppuStack_1e8 = apuStack_1d0;
  *puVar4 = param_3;
  ppiVar2 = param_1;
  FUN_1004d2084();
  if (param_1 != (int **)0x0) {
    if (param_1[4] == (int *)0x0) {
      if ((int **)*param_1 != (int **)0x0) {
        ppiVar6 = (int **)0x0;
        do {
          if (*(int **)(param_1[1] + (long)ppiVar6 * 2) == aiStack_1f0) goto LAB_10072f75c;
          ppiVar6 = (int **)((long)ppiVar6 + 1);
        } while ((int **)*param_1 != ppiVar6);
      }
    }
    else {
      ppiVar9 = (int **)*param_1;
      if (*(int *)(param_1 + 2) == 0) {
        if (ppiVar9 != (int **)0x0) {
          ppiVar6 = (int **)0x0;
          do {
            piStack_1e0 = *(int **)(param_1[1] + (long)ppiVar6 * 2);
            ppiVar2 = &piStack_1d8;
            param_2 = &piStack_1e0;
            piStack_1d8 = aiStack_1f0;
            (*(code *)param_1[4])();
            if ((int)ppiVar2 == 0) goto LAB_10072f75c;
            ppiVar6 = (int **)((long)ppiVar6 + 1);
          } while (ppiVar6 < *param_1);
        }
      }
      else if (ppiVar9 != (int **)0x0) {
        ppiVar7 = (int **)0x0;
        do {
          ppiVar6 = (int **)((long)ppiVar7 + (((long)ppiVar9 - (long)ppiVar7) - 1U >> 1));
          piStack_1e0 = *(int **)(param_1[1] + (long)ppiVar6 * 2);
          ppiVar2 = &piStack_1d8;
          param_2 = &piStack_1e0;
          piStack_1d8 = aiStack_1f0;
          (*(code *)param_1[4])();
          if ((int)ppiVar2 < 1) {
            if (-1 < (int)ppiVar2) {
              if ((long)ppiVar9 - (long)ppiVar7 == 1) goto LAB_10072f75c;
              ppiVar6 = (int **)((long)ppiVar6 + 1);
            }
          }
          else {
            ppiVar7 = (int **)((long)ppiVar6 + 1);
            ppiVar6 = ppiVar9;
          }
          ppiVar9 = ppiVar6;
        } while (ppiVar7 < ppiVar6);
      }
    }
  }
  ppiVar6 = (int **)0xffffffff;
  goto LAB_10072f724;
LAB_10072f75c:
  if (param_4 != (int *)0x0) {
    *param_4 = 1;
    piStack_1e0 = aiStack_1f0;
    iVar1 = (int)ppiVar6 + 1;
    piVar5 = *param_1;
    if (iVar1 < (int)piVar5) {
      piVar8 = (int *)(long)iVar1;
      do {
        if (piVar8 < piVar5) {
          piStack_1d8 = *(int **)(param_1[1] + (long)piVar8 * 2);
        }
        else {
          piStack_1d8 = (int *)0x0;
        }
        ppiVar2 = &piStack_1d8;
        param_2 = &piStack_1e0;
        func_0x0001004d2374();
        if ((int)ppiVar2 != 0) break;
        *param_4 = *param_4 + 1;
        piVar8 = (int *)((long)piVar8 + 1);
        piVar5 = *param_1;
      } while ((long)piVar8 < (long)(int)piVar5);
    }
  }
LAB_10072f724:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return ppiVar6;
  }
  func_0x000107c60e78();
  uVar3 = *(undefined8 *)(*ppiVar2 + 10);
  FUN_1004d23d0(uVar3,*(undefined8 *)(*param_2 + 6));
  if ((int)uVar3 == 0) {
    ppiVar9 = ppiVar2;
    FUN_10072cbdc();
    if (((int)ppiVar9 == 0) || (ppiVar9 = param_2, FUN_10072cbdc(), (int)ppiVar9 == 0)) {
      ppiVar9 = (int **)0x1;
    }
    else if ((param_2[0xc] == (int *)0x0) || (ppiVar9 = ppiVar2, FUN_1007344e4(), (int)ppiVar9 == 0)
            ) {
      if ((*(byte *)((long)param_2 + 0x39) >> 2 & 1) == 0) {
        if ((((uint)ppiVar2[7] >> 1 & 1) != 0) && ((*(byte *)(ppiVar2 + 8) >> 2 & 1) == 0)) {
          return (int **)0x20;
        }
      }
      else if ((((uint)ppiVar2[7] >> 1 & 1) != 0) && (-1 < *(char *)(ppiVar2 + 8))) {
        return (int **)0x27;
      }
      ppiVar9 = (int **)0x0;
    }
  }
  else {
    ppiVar9 = (int **)0x1d;
  }
  return ppiVar9;
}



/* Entry: 10072f7d4; end: 10072f87f;  */

void FUN_10072f7d4(long *param_1,long *param_2)

{
  undefined8 uVar1;
  long *plVar2;
  
  uVar1 = *(undefined8 *)(*param_1 + 0x28);
  FUN_1004d23d0(uVar1,*(undefined8 *)(*param_2 + 0x18));
  if (((((int)uVar1 == 0) && (FUN_10072cbdc(), (int)param_1 != 0)) &&
      (plVar2 = param_2, FUN_10072cbdc(), (int)plVar2 != 0)) && (param_2[0xc] != 0)) {
    FUN_1007344e4();
  }
  return;
}



/* Entry: 10072f880; end: 10072f8f3;  */

undefined8 FUN_10072f880(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  FUN_10072f7d4();
  if ((int)uVar1 == 0) {
    uVar1 = 1;
  }
  else {
    if ((*(byte *)(*(long *)(param_1 + 0x20) + 0x18) & 1) != 0) {
      *(int *)(param_1 + 0xb0) = (int)uVar1;
      *(undefined8 *)(param_1 + 0xb8) = param_2;
      *(undefined8 *)(param_1 + 0xc0) = param_3;
      uVar1 = 0;
                    /* WARNING: Could not recover jumptable at 0x00010072f8f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_1 + 0x38))(0,param_1);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 10072f8f4; end: 10072f9d7; -[SCAdPlaybackServiceProvider provide] */

void FUN_10072f8f4(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x000107c61144(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_40,auStack_38);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ca048;
  func_0x000107c610f4(PTR_PTR_1126ca048);
  func_0x000107c455e4();
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10072f9d8; end: 10072fa2f; -[_TtC18AdPlaybackServices18AdPlaybackServices initWithAdPluginProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10072f9d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112ff2410) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 10072fa30; end: 10072fcdb;  */

void FUN_10072fa30(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x100));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x108));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x110));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x118));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x120));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x128));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x130));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x138));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x140));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x148));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x150));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x158));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x160));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x168));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x170));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x178));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x180));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x188));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 400));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x198));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x208));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x210));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x218));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x220));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x228));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x230));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x238));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x240));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x248));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x250));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 600));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x260));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x268));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x270));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x278));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x280));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x288));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x290));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x298));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10072fcdc; end: 10072fce3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10072fcdc(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_10036e5fc();
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_113078d28) = uStack_38;
  puVar1 = auStack_48;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 10072fce4; end: 10072fd4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10072fce4(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_10036e5fc();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_113078d28) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 10072fd50; end: 1007303f7;  */

/* WARNING: Possible PIC construction at 0x000100730158: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100730168: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100730178: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100730188: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100730198: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007301a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007301b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007301c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007301d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007301e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007301f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100730208: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100730218: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100730228: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100730238: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100730248: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100730258: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100730268: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100730278: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100730288: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100730298: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007302a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007302b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007302c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007302d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007302e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007302f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100730308: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100730318: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100730328: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100730338: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100730348: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100730358: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100730368: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100730378: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100730388: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100730398: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007303a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007303b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001007303c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001007303bc) */
/* WARNING: Removing unreachable block (ram,0x0001007303ac) */
/* WARNING: Removing unreachable block (ram,0x00010073039c) */
/* WARNING: Removing unreachable block (ram,0x00010073038c) */
/* WARNING: Removing unreachable block (ram,0x00010073037c) */
/* WARNING: Removing unreachable block (ram,0x00010073036c) */
/* WARNING: Removing unreachable block (ram,0x00010073035c) */
/* WARNING: Removing unreachable block (ram,0x00010073034c) */
/* WARNING: Removing unreachable block (ram,0x00010073033c) */
/* WARNING: Removing unreachable block (ram,0x00010073032c) */
/* WARNING: Removing unreachable block (ram,0x00010073031c) */
/* WARNING: Removing unreachable block (ram,0x00010073030c) */
/* WARNING: Removing unreachable block (ram,0x0001007302fc) */
/* WARNING: Removing unreachable block (ram,0x0001007302ec) */
/* WARNING: Removing unreachable block (ram,0x0001007302dc) */
/* WARNING: Removing unreachable block (ram,0x0001007302cc) */
/* WARNING: Removing unreachable block (ram,0x0001007302bc) */
/* WARNING: Removing unreachable block (ram,0x0001007302ac) */
/* WARNING: Removing unreachable block (ram,0x00010073029c) */
/* WARNING: Removing unreachable block (ram,0x00010073028c) */
/* WARNING: Removing unreachable block (ram,0x00010073027c) */
/* WARNING: Removing unreachable block (ram,0x00010073026c) */
/* WARNING: Removing unreachable block (ram,0x00010073025c) */
/* WARNING: Removing unreachable block (ram,0x00010073024c) */
/* WARNING: Removing unreachable block (ram,0x00010073023c) */
/* WARNING: Removing unreachable block (ram,0x00010073022c) */
/* WARNING: Removing unreachable block (ram,0x00010073021c) */
/* WARNING: Removing unreachable block (ram,0x00010073020c) */
/* WARNING: Removing unreachable block (ram,0x0001007301fc) */
/* WARNING: Removing unreachable block (ram,0x0001007301ec) */
/* WARNING: Removing unreachable block (ram,0x0001007301dc) */
/* WARNING: Removing unreachable block (ram,0x0001007301cc) */
/* WARNING: Removing unreachable block (ram,0x0001007301bc) */
/* WARNING: Removing unreachable block (ram,0x0001007301ac) */
/* WARNING: Removing unreachable block (ram,0x00010073019c) */
/* WARNING: Removing unreachable block (ram,0x00010073018c) */
/* WARNING: Removing unreachable block (ram,0x00010073017c) */
/* WARNING: Removing unreachable block (ram,0x00010073016c) */
/* WARNING: Removing unreachable block (ram,0x00010073015c) */
/* WARNING: Removing unreachable block (ram,0x0001007303cc) */

void FUN_10072fd50(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
                  undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
                  undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
                  undefined8 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44,
                  undefined8 param_45,undefined8 param_46,undefined8 param_47,undefined8 param_48,
                  undefined8 param_49,undefined8 param_50,undefined8 param_51,undefined8 param_52,
                  undefined8 param_53,undefined8 param_54,undefined8 param_55,undefined8 param_56,
                  undefined8 param_57,undefined8 param_58,undefined8 param_59,undefined8 param_60,
                  undefined8 param_61,undefined8 param_62,undefined8 param_63,undefined8 param_64,
                  undefined8 param_65,undefined8 param_66,undefined8 param_67,undefined8 param_68,
                  undefined8 param_69,undefined8 param_70,undefined8 param_71)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 in_stack_000001f0;
  undefined8 in_stack_000001f8;
  undefined8 in_stack_00000200;
  undefined8 in_stack_00000208;
  undefined8 in_stack_00000210;
  undefined8 in_stack_00000218;
  undefined8 in_stack_00000220;
  undefined8 in_stack_00000228;
  undefined8 in_stack_00000230;
  undefined8 in_stack_00000238;
  undefined8 in_stack_00000240;
  
  puVar1 = &UNK_1105b0c58;
  func_0x000107c613fc(&UNK_1105b0c58,0x298,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  *(undefined8 *)(puVar1 + 0x38) = param_7;
  *(undefined8 *)(puVar1 + 0x40) = param_8;
  *(undefined8 *)(puVar1 + 0x48) = param_9;
  *(undefined8 *)(puVar1 + 0x50) = param_10;
  *(undefined8 *)(puVar1 + 0x58) = param_11;
  *(undefined8 *)(puVar1 + 0x60) = param_12;
  *(undefined8 *)(puVar1 + 0x68) = param_13;
  *(undefined8 *)(puVar1 + 0x70) = param_14;
  *(undefined8 *)(puVar1 + 0x78) = param_15;
  *(undefined8 *)(puVar1 + 0x80) = param_16;
  *(undefined8 *)(puVar1 + 0x88) = param_17;
  *(undefined8 *)(puVar1 + 0x90) = param_18;
  *(undefined8 *)(puVar1 + 0x98) = param_19;
  *(undefined8 *)(puVar1 + 0xa0) = param_20;
  *(undefined8 *)(puVar1 + 0xa8) = param_21;
  *(undefined8 *)(puVar1 + 0xb0) = param_22;
  *(undefined8 *)(puVar1 + 0xb8) = param_23;
  *(undefined8 *)(puVar1 + 0xc0) = param_24;
  *(undefined8 *)(puVar1 + 200) = param_25;
  *(undefined8 *)(puVar1 + 0xd0) = param_26;
  *(undefined8 *)(puVar1 + 0xd8) = param_27;
  *(undefined8 *)(puVar1 + 0xe0) = param_28;
  *(undefined8 *)(puVar1 + 0xe8) = param_29;
  *(undefined8 *)(puVar1 + 0xf0) = param_30;
  *(undefined8 *)(puVar1 + 0xf8) = param_31;
  *(undefined8 *)(puVar1 + 0x100) = param_32;
  *(undefined8 *)(puVar1 + 0x108) = param_33;
  *(undefined8 *)(puVar1 + 0x110) = param_34;
  *(undefined8 *)(puVar1 + 0x118) = param_35;
  *(undefined8 *)(puVar1 + 0x120) = param_36;
  *(undefined8 *)(puVar1 + 0x128) = param_37;
  *(undefined8 *)(puVar1 + 0x130) = param_38;
  *(undefined8 *)(puVar1 + 0x138) = param_39;
  *(undefined8 *)(puVar1 + 0x140) = param_40;
  *(undefined8 *)(puVar1 + 0x148) = param_41;
  *(undefined8 *)(puVar1 + 0x150) = param_42;
  *(undefined8 *)(puVar1 + 0x158) = param_43;
  *(undefined8 *)(puVar1 + 0x160) = param_44;
  *(undefined8 *)(puVar1 + 0x168) = param_45;
  *(undefined8 *)(puVar1 + 0x170) = param_46;
  *(undefined8 *)(puVar1 + 0x178) = param_47;
  *(undefined8 *)(puVar1 + 0x180) = param_48;
  *(undefined8 *)(puVar1 + 0x188) = param_49;
  *(undefined8 *)(puVar1 + 400) = param_50;
  *(undefined8 *)(puVar1 + 0x198) = param_51;
  *(undefined8 *)(puVar1 + 0x1a0) = param_52;
  *(undefined8 *)(puVar1 + 0x1a8) = param_53;
  *(undefined8 *)(puVar1 + 0x1b0) = param_54;
  *(undefined8 *)(puVar1 + 0x1b8) = param_55;
  *(undefined8 *)(puVar1 + 0x1c0) = param_56;
  *(undefined8 *)(puVar1 + 0x1c8) = param_57;
  *(undefined8 *)(puVar1 + 0x1d0) = param_58;
  *(undefined8 *)(puVar1 + 0x1d8) = param_59;
  *(undefined8 *)(puVar1 + 0x1e0) = param_60;
  *(undefined8 *)(puVar1 + 0x1e8) = param_61;
  *(undefined8 *)(puVar1 + 0x1f0) = param_62;
  *(undefined8 *)(puVar1 + 0x1f8) = param_63;
  *(undefined8 *)(puVar1 + 0x200) = param_64;
  *(undefined8 *)(puVar1 + 0x208) = param_65;
  *(undefined8 *)(puVar1 + 0x210) = param_66;
  *(undefined8 *)(puVar1 + 0x218) = param_67;
  *(undefined8 *)(puVar1 + 0x220) = param_68;
  *(undefined8 *)(puVar1 + 0x228) = param_69;
  *(undefined8 *)(puVar1 + 0x230) = param_70;
  *(undefined8 *)(puVar1 + 0x238) = param_71;
  *(undefined8 *)(puVar1 + 0x240) = in_stack_000001f0;
  *(undefined8 *)(puVar1 + 0x248) = in_stack_000001f8;
  *(undefined8 *)(puVar1 + 0x250) = in_stack_00000200;
  *(undefined8 *)(puVar1 + 600) = in_stack_00000208;
  *(undefined8 *)(puVar1 + 0x260) = in_stack_00000210;
  *(undefined8 *)(puVar1 + 0x268) = in_stack_00000218;
  *(undefined8 *)(puVar1 + 0x270) = in_stack_00000220;
  *(undefined8 *)(puVar1 + 0x278) = in_stack_00000228;
  *(undefined8 *)(puVar1 + 0x280) = in_stack_00000230;
  *(undefined8 *)(puVar1 + 0x288) = in_stack_00000238;
  *(undefined8 *)(puVar1 + 0x290) = in_stack_00000240;
  uVar2 = 0x112efe990;
  FUN_1000285a8(0x112efe990,&UNK_10db31840);
  func_0x000107c613fc();
  puVar3 = &UNK_102c0584c;
  FUN_1000841f8(&UNK_102c0584c,puVar1,uVar2);
  FUN_100084214(&UNK_10db31810,0x2a,2);
  *param_1 = puVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 1007303f8; end: 1007303fb;  */

void FUN_1007303f8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x100));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x108));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x110));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x118));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x120));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x128));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x130));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x138));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x140));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x148));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x150));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x158));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x160));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x168));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x170));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x178));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x180));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x188));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 400));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x198));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x208));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x210));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x218));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x220));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x228));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x230));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x238));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x240));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x248));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x250));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 600));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x260));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x268));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x270));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x278));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x280));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x288));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x290));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1007303fc; end: 100730507;  */

void FUN_1007303fc(void)

{
  long unaff_x20;
  
  FUN_10072fd50(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                *(undefined8 *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xa8),
                *(undefined8 *)(unaff_x20 + 0xb0),*(undefined8 *)(unaff_x20 + 0xb8),
                *(undefined8 *)(unaff_x20 + 0xc0),*(undefined8 *)(unaff_x20 + 200),
                *(undefined8 *)(unaff_x20 + 0xd0),*(undefined8 *)(unaff_x20 + 0xd8),
                *(undefined8 *)(unaff_x20 + 0xe0),*(undefined8 *)(unaff_x20 + 0xe8),
                *(undefined8 *)(unaff_x20 + 0xf0),*(undefined8 *)(unaff_x20 + 0xf8),
                *(undefined8 *)(unaff_x20 + 0x100),*(undefined8 *)(unaff_x20 + 0x108),
                *(undefined8 *)(unaff_x20 + 0x110),*(undefined8 *)(unaff_x20 + 0x118),
                *(undefined8 *)(unaff_x20 + 0x120),*(undefined8 *)(unaff_x20 + 0x128),
                *(undefined8 *)(unaff_x20 + 0x130),*(undefined8 *)(unaff_x20 + 0x138),
                *(undefined8 *)(unaff_x20 + 0x140),*(undefined8 *)(unaff_x20 + 0x148),
                *(undefined8 *)(unaff_x20 + 0x150),*(undefined8 *)(unaff_x20 + 0x158),
                *(undefined8 *)(unaff_x20 + 0x160),*(undefined8 *)(unaff_x20 + 0x168),
                *(undefined8 *)(unaff_x20 + 0x170),*(undefined8 *)(unaff_x20 + 0x178),
                *(undefined8 *)(unaff_x20 + 0x180),*(undefined8 *)(unaff_x20 + 0x188),
                *(undefined8 *)(unaff_x20 + 400),*(undefined8 *)(unaff_x20 + 0x198),
                *(undefined8 *)(unaff_x20 + 0x1a0),*(undefined8 *)(unaff_x20 + 0x1a8),
                *(undefined8 *)(unaff_x20 + 0x1b0),*(undefined8 *)(unaff_x20 + 0x1b8),
                *(undefined8 *)(unaff_x20 + 0x1c0),*(undefined8 *)(unaff_x20 + 0x1c8),
                *(undefined8 *)(unaff_x20 + 0x1d0),*(undefined8 *)(unaff_x20 + 0x1d8),
                *(undefined8 *)(unaff_x20 + 0x1e0),*(undefined8 *)(unaff_x20 + 0x1e8),
                *(undefined8 *)(unaff_x20 + 0x1f0),*(undefined8 *)(unaff_x20 + 0x1f8),
                *(undefined8 *)(unaff_x20 + 0x200),*(undefined8 *)(unaff_x20 + 0x208),
                *(undefined8 *)(unaff_x20 + 0x210),*(undefined8 *)(unaff_x20 + 0x218),
                *(undefined8 *)(unaff_x20 + 0x220),*(undefined8 *)(unaff_x20 + 0x228),
                *(undefined8 *)(unaff_x20 + 0x230),*(undefined8 *)(unaff_x20 + 0x238));
  return;
}



/* Entry: 100730508; end: 10073050b;  */

void FUN_100730508(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x100));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x108));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x110));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x118));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x120));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x128));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x130));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x138));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x140));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x148));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x150));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x158));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x160));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x168));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x170));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x178));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x180));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x188));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 400));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x198));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x208));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x210));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x218));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x220));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x228));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x230));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x238));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x240));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x248));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x250));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 600));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x260));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x268));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x270));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x278));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x280));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x288));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x290));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10073050c; end: 1007307af;  */

void FUN_10073050c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x100));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x108));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x110));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x118));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x120));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x128));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x130));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x138));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x140));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x148));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x150));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x158));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x160));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x168));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x170));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x178));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x180));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x188));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 400));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x198));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x208));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x210));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x218));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x220));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x228));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x230));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x238));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x240));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x248));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x250));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 600));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x260));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x268));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x270));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x278));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x280));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x288));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x290));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1007307b0; end: 1007307c7;  */

void FUN_1007307b0(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  FUN_100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 1007307c8; end: 10073081b; -[SCAFideliusAppOpen setWithSuccess:] */

void FUN_1007307c8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d94c(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c61180();
  func_0x000107c54984(param_1,param_2,&PTR____CFConstantStringClassReference_110fe7f58,6,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10073081c; end: 100730833; -[SCAFideliusAppOpen setFailureReason:] */

void FUN_10073081c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110dbdcd8,3,param_3,0);
  return;
}



/* Entry: 100730834; end: 10073084b; -[SCAFideliusAppOpen setSource:] */

void FUN_100730834(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19b850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setField_fieldNumber_value_type__112644830,
             &PTR____CFConstantStringClassReference_110dae8d8,4,param_3,0);
  return;
}



/* Entry: 10073084c; end: 10073089f; -[SCAFideliusAppOpen setWithIdentityLoaded:] */

void FUN_10073084c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d94c(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c61180();
  func_0x000107c54984(param_1,param_2,&PTR____CFConstantStringClassReference_110fef518,5,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1007308a0; end: 1007308ab; -[SCAFideliusAppOpen getEventName] */

undefined ** FUN_1007308a0(void)

{
  return &PTR____CFConstantStringClassReference_110fef4f8;
}



/* Entry: 1007308ac; end: 100731267; -[SCCameraUIScopedLensOperaServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007308ac(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  undefined *puVar28;
  long lVar29;
  long lVar30;
  undefined *puVar31;
  undefined *puVar32;
  long lVar33;
  long lVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  undefined8 uStack_160;
  long lStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  undefined *puStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lVar33 = param_1 + _DAT_11273f1bc;
  func_0x000107c61148();
  lVar1 = lVar33;
  func_0x000107c4b254();
  func_0x000107c61180();
  func_0x000107c61170(lVar33);
  lVar33 = param_1 + _DAT_11273f1c0;
  func_0x000107c61148();
  lVar2 = lVar33;
  func_0x000107c515b4();
  func_0x000107c61180();
  func_0x000107c61170(lVar33);
  lVar33 = param_1 + _DAT_11273f1c4;
  func_0x000107c61148();
  lVar3 = lVar33;
  func_0x000107c414e4();
  func_0x000107c61180();
  func_0x000107c61170(lVar33);
  lVar33 = param_1 + _DAT_11273f1c8;
  func_0x000107c61148();
  lVar4 = lVar33;
  func_0x000107c41930();
  func_0x000107c61180();
  func_0x000107c61170(lVar33);
  lVar33 = param_1 + _DAT_11273f1cc;
  func_0x000107c61148();
  lVar5 = lVar33;
  func_0x000107c5dac4();
  func_0x000107c61180();
  func_0x000107c61170(lVar33);
  lVar33 = param_1 + _DAT_11273f1d0;
  func_0x000107c61148();
  lVar6 = lVar33;
  func_0x000107c3d28c();
  func_0x000107c61180();
  func_0x000107c61170(lVar33);
  lVar33 = param_1 + _DAT_11273f1d4;
  func_0x000107c61148();
  lVar7 = lVar33;
  func_0x000107c444a4();
  func_0x000107c61180();
  func_0x000107c61170(lVar33);
  lVar33 = param_1 + _DAT_11273f1d8;
  func_0x000107c61148();
  lVar8 = lVar33;
  func_0x000107c3d3c0();
  func_0x000107c61180();
  func_0x000107c61170(lVar33);
  if (param_1 == 0) {
    lVar33 = 0;
  }
  else {
    lVar33 = param_1 + _DAT_11273f224;
    func_0x000107c61148();
  }
  lVar9 = lVar33;
  func_0x000107c5b0b4();
  func_0x000107c61180();
  func_0x000107c61170(lVar33);
  if (param_1 == 0) {
    lVar33 = 0;
  }
  else {
    lVar33 = param_1 + _DAT_11273f22c;
    func_0x000107c61148();
  }
  lVar10 = lVar33;
  func_0x000107c4ed64();
  func_0x000107c61180();
  func_0x000107c61170(lVar33);
  if (param_1 == 0) {
    lVar33 = 0;
  }
  else {
    lVar33 = param_1 + _DAT_11273f228;
    func_0x000107c61148();
  }
  lVar11 = lVar33;
  func_0x000107c40fb0();
  func_0x000107c61180();
  func_0x000107c61170(lVar33);
  uVar12 = *(undefined8 *)(param_1 + _DAT_11273f1dc);
  func_0x000107c61174();
  lVar33 = param_1 + _DAT_11273f23c;
  func_0x000107c61148();
  uVar13 = *(undefined8 *)(param_1 + _DAT_11273f1e0);
  func_0x000107c61174();
  uVar14 = *(undefined8 *)(param_1 + _DAT_11273f1e4);
  func_0x000107c61174();
  lVar15 = param_1 + _DAT_11273f230;
  func_0x000107c61148();
  lVar16 = lVar15;
  func_0x000107c4af44();
  func_0x000107c61180();
  func_0x000107c61170(lVar15);
  lVar15 = param_1 + _DAT_11273f234;
  func_0x000107c61148();
  lVar17 = lVar15;
  func_0x000107c5d8d8();
  func_0x000107c61180();
  func_0x000107c61170(lVar15);
  lVar15 = param_1 + _DAT_11273f1e8;
  func_0x000107c61148();
  lVar18 = lVar15;
  func_0x000107c52030();
  func_0x000107c61180();
  func_0x000107c61170(lVar15);
  lVar15 = param_1 + _DAT_11273f1ec;
  func_0x000107c61148();
  lVar19 = lVar15;
  func_0x000107c3e654();
  func_0x000107c61180();
  func_0x000107c61170(lVar15);
  lVar15 = param_1 + _DAT_11273f1f0;
  func_0x000107c61148();
  lVar20 = lVar15;
  func_0x000107c3e710();
  func_0x000107c61180();
  func_0x000107c61170(lVar15);
  lVar15 = param_1 + _DAT_11273f1f4;
  func_0x000107c61148();
  lVar21 = lVar15;
  func_0x000107c5c22c();
  func_0x000107c61180();
  func_0x000107c61170(lVar15);
  lVar34 = (long)_DAT_11273f1f8;
  lVar15 = param_1 + lVar34;
  func_0x000107c61148();
  lVar22 = lVar15;
  func_0x000107c5a8f0();
  func_0x000107c61180();
  func_0x000107c61170(lVar15);
  lVar34 = param_1 + lVar34;
  func_0x000107c61148();
  lVar23 = lVar34;
  func_0x000107c4ac50();
  func_0x000107c61180();
  func_0x000107c61170(lVar34);
  lVar15 = param_1 + _DAT_11273f1fc;
  func_0x000107c61148();
  lVar34 = lVar15;
  func_0x000107c4e9a8();
  func_0x000107c61180();
  func_0x000107c61170(lVar15);
  lVar15 = param_1 + _DAT_11273f200;
  func_0x000107c61148();
  lVar24 = lVar15;
  func_0x000107c4dedc();
  func_0x000107c61180();
  func_0x000107c61170(lVar15);
  lVar15 = param_1 + _DAT_11273f204;
  func_0x000107c61148();
  lVar25 = lVar15;
  func_0x000107c41178();
  func_0x000107c61180();
  func_0x000107c61170(lVar15);
  lVar15 = param_1 + _DAT_11273f208;
  func_0x000107c61148();
  lVar26 = lVar15;
  func_0x000107c5dbd4();
  func_0x000107c61180();
  func_0x000107c61170(lVar15);
  lVar15 = param_1 + _DAT_11273f220;
  func_0x000107c61148();
  lVar27 = lVar15;
  func_0x000107c3fa04();
  func_0x000107c61180();
  func_0x000107c61170(lVar15);
  puVar28 = PTR_PTR_1126ae720;
  puVar32 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  puStack_90 = &UNK_1060d2cfc;
  puStack_88 = &UNK_11090d900;
  func_0x000107c61174(lVar27);
  lStack_80 = lVar27;
  func_0x000107c3e4fc(puVar28,param_2,&puStack_a0);
  func_0x000107c61180();
  lVar15 = param_1 + _DAT_11273f238;
  func_0x000107c61148();
  lVar29 = lVar15;
  func_0x000107c4f260();
  func_0x000107c61180();
  func_0x000107c61170(lVar15);
  lVar15 = param_1 + _DAT_11273f20c;
  func_0x000107c61148();
  lVar30 = lVar15;
  func_0x000107c41fd4();
  func_0x000107c61180();
  func_0x000107c61170(lVar15);
  uVar36 = *(undefined8 *)(param_1 + _DAT_11273f210);
  func_0x000107c61174(uVar36);
  uVar35 = *(undefined8 *)(param_1 + _DAT_11273f214);
  func_0x000107c61174(uVar35);
  param_1 = param_1 + _DAT_11273f218;
  func_0x000107c61148();
  puVar31 = PTR_PTR_1126ae720;
  puStack_1d0 = puVar32;
  puStack_1c0 = &UNK_1060d2d98;
  puStack_1b8 = &UNK_11090d960;
  uStack_1c8 = 0xc2000000;
  lStack_1b0 = lVar1;
  lStack_1a8 = lVar2;
  lStack_1a0 = lVar3;
  lStack_198 = lVar4;
  lStack_190 = lVar5;
  lStack_188 = lVar6;
  lStack_180 = lVar8;
  lStack_178 = lVar9;
  lStack_170 = lVar10;
  lStack_168 = lVar11;
  uStack_160 = uVar12;
  lStack_158 = lVar33;
  uStack_150 = uVar14;
  uStack_148 = uVar13;
  lStack_140 = lVar16;
  lStack_138 = lVar17;
  lStack_130 = lVar7;
  lStack_128 = lVar18;
  lStack_120 = lVar19;
  lStack_118 = lVar20;
  lStack_110 = lVar21;
  lStack_108 = lVar22;
  lStack_100 = lVar23;
  lStack_f8 = lVar34;
  lStack_f0 = lVar24;
  lStack_e8 = lVar25;
  lStack_e0 = lVar26;
  puStack_d8 = puVar28;
  lStack_d0 = lVar27;
  lStack_c8 = lVar29;
  lStack_c0 = lVar30;
  uStack_b8 = uVar36;
  uStack_b0 = uVar35;
  lStack_a8 = param_1;
  func_0x000107c61174();
  func_0x000107c61174(uVar35);
  func_0x000107c61174(uVar36);
  func_0x000107c61174(lVar30);
  func_0x000107c61174(lVar29);
  func_0x000107c61174(lVar27);
  func_0x000107c61174(puVar28);
  func_0x000107c61174(lVar26);
  func_0x000107c61174(lVar25);
  func_0x000107c61174(lVar24);
  func_0x000107c61174(lVar34);
  func_0x000107c61174(lVar23);
  func_0x000107c61174(lVar22);
  func_0x000107c61174(lVar21);
  func_0x000107c61174(lVar20);
  func_0x000107c61174(lVar19);
  func_0x000107c61174(lVar18);
  func_0x000107c61174(lVar7);
  func_0x000107c61174(lVar17);
  func_0x000107c61174(lVar16);
  func_0x000107c61174(uVar13);
  func_0x000107c61174(uVar14);
  func_0x000107c61174(lVar33);
  func_0x000107c61174(uVar12);
  func_0x000107c61174(lVar11);
  func_0x000107c61174(lVar10);
  func_0x000107c61174(lVar9);
  func_0x000107c61174(lVar6);
  func_0x000107c61174(lVar5);
  func_0x000107c61174(lVar4);
  func_0x000107c61174(lVar3);
  func_0x000107c61174(lVar2);
  func_0x000107c61174(lVar1);
  func_0x000107c3e4fc(puVar31,param_2,&puStack_1d0);
  func_0x000107c61180();
  puVar32 = PTR_PTR_1126c7cf8;
  func_0x000107c610f4();
  func_0x000107c473a4();
  func_0x000107c61170(puVar31);
  func_0x000107c61170(lStack_a8);
  func_0x000107c61170(uStack_b0);
  func_0x000107c61170(uStack_b8);
  func_0x000107c61170(lStack_c0);
  func_0x000107c61170(lStack_c8);
  func_0x000107c61170(lStack_d0);
  func_0x000107c61170(puStack_d8);
  func_0x000107c61170(lStack_e0);
  func_0x000107c61170(lStack_e8);
  func_0x000107c61170(lStack_f0);
  func_0x000107c61170(lStack_f8);
  func_0x000107c61170(lStack_100);
  func_0x000107c61170(lStack_108);
  func_0x000107c61170(lStack_110);
  func_0x000107c61170(lStack_118);
  func_0x000107c61170(lStack_120);
  func_0x000107c61170(lStack_128);
  func_0x000107c61170(lStack_130);
  func_0x000107c61170(lStack_138);
  func_0x000107c61170(lStack_140);
  func_0x000107c61170(uStack_148);
  func_0x000107c61170(uStack_150);
  func_0x000107c61170(lStack_158);
  func_0x000107c61170(uStack_160);
  func_0x000107c61170(lStack_168);
  func_0x000107c61170(lStack_170);
  func_0x000107c61170(lStack_178);
  func_0x000107c61170(lStack_188);
  func_0x000107c61170(lStack_190);
  func_0x000107c61170(lStack_198);
  func_0x000107c61170(lStack_1a0);
  func_0x000107c61170(lStack_1a8);
  func_0x000107c61170(lStack_1b0);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar35);
  func_0x000107c61170(uVar36);
  func_0x000107c61170(lVar30);
  func_0x000107c61170(lVar29);
  func_0x000107c61170(puVar28);
  func_0x000107c61170(lStack_80);
  func_0x000107c61170(lVar27);
  func_0x000107c61170(lVar26);
  func_0x000107c61170(lVar25);
  func_0x000107c61170(lVar24);
  func_0x000107c61170(lVar34);
  func_0x000107c61170(lVar23);
  func_0x000107c61170(lVar22);
  func_0x000107c61170(lVar21);
  func_0x000107c61170(lVar20);
  func_0x000107c61170(lVar19);
  func_0x000107c61170(lVar18);
  func_0x000107c61170(lVar17);
  func_0x000107c61170(lVar16);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(lVar33);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(lVar11);
  func_0x000107c61170(lVar10);
  func_0x000107c61170(lVar9);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar1);
  func_0x000107c61170(lVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar32);
  return;
}



/* Entry: 100731268; end: 10073126f; -[SCSafeBrowsingServices safeBrowsingAPI] */

undefined8 FUN_100731268(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100731270; end: 100731277; -[SCDeepLinkHandlingServices deepLinkHandling] */

undefined8 FUN_100731270(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100731278; end: 100731287; -[_TtC18AdPlaybackServices18AdPlaybackServices adPluginProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100731278(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ff2410));
  return;
}



/* Entry: 100731288; end: 100731297; -[_TtC28AdOperationalLoggingServices28AdOperationalLoggingServices skAdNetworkMetricsManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100731288(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113010c08));
  return;
}



/* Entry: 100731298; end: 1007312a7; -[_TtC32SCSKStoreProductPrefetchServices32SCSKStoreProductPrefetchServices prefetcher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100731298(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fbd370));
  return;
}



/* Entry: 1007312a8; end: 1007312b3; -[SCAFideliusAppOpen getPerUserSamplingRateV2] */

undefined8 FUN_1007312a8(void)

{
  return 0x3fa999999999999a;
}



/* Entry: 1007312b4; end: 1007312bb; -[SCShakeToReportServices shakeInfoHolder] */

undefined8 FUN_1007312b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1007312bc; end: 1007312c3; -[SCShakeToReportServices lazyEventAnnouncer] */

undefined8 FUN_1007312bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1007312c4; end: 1007312d3; -[SCPlayerServices playerProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007312c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11307a4a0));
  return;
}


