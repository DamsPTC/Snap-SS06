/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107082818; end: 107082823; -[SCMessageRenderingPluginServices .cxx_destruct] */

void FUN_107082818(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107082824; end: 10708282b; -[SCChatGroupUpdateContentViewModel cellWillDisplayAction] */

undefined8 FUN_107082824(void)

{
  return 0;
}



/* Entry: 10708282c; end: 107082833; -[SCChatGroupUpdateContentViewModel hidden] */

undefined8 FUN_10708282c(void)

{
  return 0;
}



/* Entry: 107082834; end: 107082837; -[SCChatGroupUpdateContentViewModel contentSizeForMaxWidth:] */

void FUN_107082834(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf4d5f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_contentSize_1125b0f20);
  return;
}



/* Entry: 107082838; end: 107083257;  */

void FUN_107082838(undefined *param_1,undefined *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined *puVar16;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puVar7;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar3 = param_1;
  func_0x00010c27dd80();
  puVar4 = param_1;
  func_0x00010c0d0380();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_4;
  func_0x00010bd869d0(param_4,&PTR___NSConcreteGlobalBlock_11098cf80,
                      &PTR___NSConcreteGlobalBlock_11098cfc0);
  puVar6 = puVar4;
  func_0x000108ef37e4(puVar4,param_3,uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(puVar4);
  puVar4 = param_1;
  func_0x00010c0d0380();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_2);
  _objc_retain(puVar4);
  if (param_2 == puVar4) {
    iVar1 = 1;
  }
  else if (puVar4 == (undefined *)0x0) {
    iVar1 = 0;
  }
  else {
    puVar7 = param_2;
    func_0x00010c0720c0();
    iVar1 = (int)puVar7;
  }
  _objc_release(puVar4);
  _objc_release(param_2);
  puVar7 = param_1;
  func_0x00010c0d03e0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010bf4b900();
  iVar2 = (int)puVar8;
  _objc_release(puVar7);
  puVar7 = param_1;
  func_0x00010c0d03e0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010c0d3c80();
  if (puVar8 == (undefined *)0x0) {
    puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(puVar8);
    puVar9 = puVar8;
  }
  _objc_release(puVar8);
  _objc_release(puVar7);
  func_0x00010c12d360(puVar9);
  puVar8 = puVar9;
  func_0x00010708d04c(puVar9,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR____NSArray0__struct_11034ab48;
  if (puVar8 != (undefined *)0x0) {
    puVar7 = puVar8;
  }
  _objc_retain(puVar7);
  _objc_release(puVar8);
  puVar8 = param_1;
  func_0x00010c0d03e0();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar8;
  func_0x00010bf529e0();
  if (puVar16 == (undefined *)0x1) {
    puVar10 = param_1;
    func_0x00010c0d03e0();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar10;
    func_0x00010bf4b900();
    _objc_release(puVar10);
  }
  else {
    puVar16 = (undefined *)0x0;
  }
  _objc_release(puVar8);
  puVar8 = param_1;
  func_0x00010bfcef60();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar6);
  _objc_retain(puVar8);
  puVar10 = puVar7;
  func_0x00010c0d3c80();
  puVar11 = puVar10;
  func_0x00010bf529e0();
  if (puVar11 == (undefined *)0x0) {
    puStack_70 = (undefined *)0x0;
  }
  else {
    puStack_70 = puVar10;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d3c0(puVar10);
  }
  puVar11 = puVar10;
  func_0x00010bf529e0();
  if (puVar11 == (undefined *)0x0) {
    puStack_78 = (undefined *)0x0;
    ppuVar14 = (undefined **)0x0;
  }
  else {
    ppuVar14 = &PTR____CFConstantStringClassReference_110dc4178;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc4178,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_78 = puVar10;
    func_0x00010bf446e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar14);
  }
  ppuVar12 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
  if ((long)puVar3 < 7) {
    ppuVar13 = &PTR____CFConstantStringClassReference_110daafd8;
    if ((long)puVar3 < 3) {
      if (puVar3 == (undefined *)0x1) {
        if (((ulong)puVar16 & 1) == 0) {
          if (iVar1 == 0) {
LAB_107082efc:
            if (iVar2 == 0) {
              if (puStack_78 != (undefined *)0x0) {
                ppuVar14 = &PTR____CFConstantStringClassReference_110e9a3f8;
                goto LAB_1070830ac;
              }
              ppuVar14 = &PTR____CFConstantStringClassReference_110e9a418;
LAB_1070830f4:
              ppuVar12 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
              func_0x00010bcbeaa8(ppuVar14,0);
              _objc_retainAutoreleasedReturnValue();
            }
            else if (puStack_70 == (undefined *)0x0) {
              ppuVar14 = &PTR____CFConstantStringClassReference_110e9a3d8;
              func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e9a3d8,0);
              _objc_retainAutoreleasedReturnValue();
            }
            else {
              if (puStack_78 == (undefined *)0x0) {
                ppuVar14 = &PTR____CFConstantStringClassReference_110e9a3b8;
                goto LAB_1070830f4;
              }
              ppuVar14 = &PTR____CFConstantStringClassReference_110e9a398;
LAB_1070830ac:
              ppuVar12 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
              func_0x00010bcbeaa8(ppuVar14,0);
              _objc_retainAutoreleasedReturnValue();
            }
          }
          else if (puStack_78 == (undefined *)0x0) {
            ppuVar14 = &PTR____CFConstantStringClassReference_110e9a378;
            func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e9a378,0);
            _objc_retainAutoreleasedReturnValue();
          }
          else {
            ppuVar14 = &PTR____CFConstantStringClassReference_110e9a358;
            func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e9a358,0);
            _objc_retainAutoreleasedReturnValue();
          }
          goto LAB_107083118;
        }
LAB_107082c50:
        ppuVar14 = &PTR____CFConstantStringClassReference_110e9a338;
      }
      else {
        if (puVar3 != (undefined *)0x2) goto LAB_10708313c;
        ppuVar14 = &PTR____CFConstantStringClassReference_110e9a1d8;
      }
LAB_107082d94:
      func_0x00010bcbeaa8(ppuVar14,0);
      _objc_retainAutoreleasedReturnValue();
LAB_107082db0:
      func_0x00010c14de00(ppuVar12);
      _objc_retainAutoreleasedReturnValue();
LAB_107082dd0:
      _objc_release(ppuVar14);
      ppuVar13 = ppuVar12;
      goto LAB_10708313c;
    }
    if (puVar3 == (undefined *)0x3) {
      if (iVar1 == 0) {
        ppuVar14 = &PTR____CFConstantStringClassReference_110e9a218;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e9a218,0);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        ppuVar14 = &PTR____CFConstantStringClassReference_110e9a1f8;
LAB_107082e94:
        ppuVar12 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010bcbeaa8(ppuVar14,0);
        _objc_retainAutoreleasedReturnValue();
      }
    }
    else {
      if (puVar3 != (undefined *)0x4) goto LAB_10708313c;
      if (iVar1 == 0) {
        iVar1 = 0;
        if (puStack_70 != (undefined *)0x0) {
          iVar1 = iVar2;
        }
        if (iVar1 != 1) {
          if ((int)puVar16 == 0) goto LAB_107082efc;
          goto LAB_107082c50;
        }
        puVar3 = puVar8;
        func_0x00010c08fa60();
        ppuVar12 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
        if (puStack_78 == (undefined *)0x0) {
          if (puVar3 == (undefined *)0x0) {
            ppuVar14 = &PTR____CFConstantStringClassReference_110e9a318;
            goto LAB_1070830f4;
          }
          ppuVar14 = &PTR____CFConstantStringClassReference_110e9a2f8;
          func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e9a2f8,0);
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          if (puVar3 == (undefined *)0x0) {
            ppuVar14 = &PTR____CFConstantStringClassReference_110e9a2d8;
            goto LAB_1070830ac;
          }
          ppuVar14 = &PTR____CFConstantStringClassReference_110e9a2b8;
          func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e9a2b8,0);
          _objc_retainAutoreleasedReturnValue();
        }
      }
      else {
        puVar3 = puVar8;
        func_0x00010c08fa60();
        if (puVar3 == (undefined *)0x0) {
          if (((puStack_78 == (undefined *)0x0) ||
              (puVar3 = puStack_78, func_0x00010c08fa60(), puVar3 == (undefined *)0x0)) ||
             ((puStack_70 == (undefined *)0x0 ||
              (puVar3 = puStack_70, func_0x00010c08fa60(),
              ppuVar12 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0,
              puVar3 == (undefined *)0x0)))) {
            ppuVar13 = &PTR____CFConstantStringClassReference_110e9a298;
            goto LAB_107082fe0;
          }
          ppuVar14 = &PTR____CFConstantStringClassReference_110e9a278;
          func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e9a278,0);
          _objc_retainAutoreleasedReturnValue();
          goto LAB_107082db0;
        }
        if ((((puStack_78 == (undefined *)0x0) ||
             (puVar3 = puStack_78, func_0x00010c08fa60(), puVar3 == (undefined *)0x0)) ||
            (puStack_70 == (undefined *)0x0)) ||
           (puVar3 = puStack_70, func_0x00010c08fa60(),
           ppuVar12 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0, puVar3 == (undefined *)0x0
           )) {
          ppuVar14 = &PTR____CFConstantStringClassReference_110e9a258;
          goto LAB_107082e94;
        }
        ppuVar14 = &PTR____CFConstantStringClassReference_110e9a238;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e9a238,0);
        _objc_retainAutoreleasedReturnValue();
      }
    }
LAB_107083118:
    func_0x00010c14de00(ppuVar12);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    ppuVar13 = &PTR____CFConstantStringClassReference_110daafd8;
    if (8 < (long)puVar3) {
      if (puVar3 == (undefined *)0x9) {
        if (iVar1 != 0) {
          ppuVar13 = &PTR____CFConstantStringClassReference_110e9a498;
LAB_107082fe0:
          func_0x00010bcbeaa8(ppuVar13,0);
          _objc_retainAutoreleasedReturnValue();
          goto LAB_10708313c;
        }
        ppuVar14 = &PTR____CFConstantStringClassReference_110e9a4b8;
        goto LAB_107082d94;
      }
      if (puVar3 != (undefined *)0xa) goto LAB_10708313c;
      if (iVar1 == 0) {
        if (iVar2 == 0) {
          if (puStack_78 == (undefined *)0x0) {
            func_0x0001070834d0();
            _objc_retainAutoreleasedReturnValue();
          }
          else {
            func_0x000107083530();
            _objc_retainAutoreleasedReturnValue();
          }
        }
        else if (puStack_70 == (undefined *)0x0) {
          func_0x0001070834e8();
          _objc_retainAutoreleasedReturnValue();
        }
        else if (puStack_78 == (undefined *)0x0) {
          func_0x000107083500();
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          func_0x000107083518();
          _objc_retainAutoreleasedReturnValue();
        }
      }
      else if (puStack_78 == (undefined *)0x0) {
        func_0x0001070834a0();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x0001070834b8();
        _objc_retainAutoreleasedReturnValue();
      }
      goto LAB_107083118;
    }
    if (puVar3 != (undefined *)0x7) {
      if (puVar3 != (undefined *)0x8) goto LAB_10708313c;
      if (iVar1 != 0) {
        func_0x000107083470();
        _objc_retainAutoreleasedReturnValue();
        ppuVar13 = ppuVar14;
        goto LAB_10708313c;
      }
      func_0x000107083488();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_107082db0;
    }
    if (iVar1 != 0) {
      ppuVar14 = &PTR____CFConstantStringClassReference_110e9a438;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e9a438,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(ppuVar12);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_107082dd0;
    }
    if (iVar2 == 0) {
      ppuVar14 = &PTR____CFConstantStringClassReference_110e9a478;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e9a478,0);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      ppuVar14 = &PTR____CFConstantStringClassReference_110e9a458;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e9a458,0);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c14de00(ppuVar12);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(ppuVar14);
  ppuVar13 = ppuVar12;
LAB_10708313c:
  _objc_release(puStack_78);
  _objc_release(puStack_70);
  _objc_release(puVar10);
  _objc_release(puVar8);
  _objc_release(puVar6);
  _objc_release(puVar7);
  _objc_release(puVar8);
  puVar3 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  ppuVar14 = ppuVar13;
  func_0x00010c09e940(ppuVar13);
  _objc_retainAutoreleasedReturnValue();
  ppuVar12 = ppuVar14;
  FUN_10708cc70();
  _objc_retainAutoreleasedReturnValue();
  ppuVar15 = ppuVar12;
  func_0x00010708cc80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0e320(0x3ff0000000000000,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar15);
  _objc_release(ppuVar12);
  _objc_release(ppuVar14);
  _objc_release(ppuVar13);
  _objc_release(puVar9);
  _objc_release(puVar4);
  _objc_release(puVar6);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107083258; end: 107083303; -[SCChatGroupUpdateContentViewModelGenerator _contentForGroupUpdate:group:currentUserId:payloadWidth:snapchattersData:] */

void FUN_107083258(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  double dVar2;
  
  FUN_107082838(param_4,param_6,param_5,param_7);
  _objc_retainAutoreleasedReturnValue();
  dVar2 = 1.79769313486232e+308;
  func_0x00010c23d600(param_1,0x7fefffffffffffff,PTR_PTR_1126af270);
  puVar1 = PTR_PTR_1126cb790;
  _objc_alloc(PTR_PTR_1126cb790);
  func_0x00010c0192c0(param_1,(double)(long)dVar2 + 2.0);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107083304; end: 107083467; -[SCChatGroupUpdateContentViewModelGenerator contentFromParameterProvider:] */

void FUN_107083304(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010c0cbb20(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010bfcf4e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_4;
  func_0x00010bf507c0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x000108ef5474();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_4;
  func_0x00010bf60a00(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f65a0(param_4);
  uVar7 = param_4;
  func_0x00010c244a80(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010bde7c60(param_1,param_2,param_3,uVar1,uVar4,uVar6,uVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 107083468; end: 107083547; -[SCChatGroupUpdateContentViewModelGenerator quotedContentFromQuotedMessage:viewModel:] */

undefined8 FUN_107083468(void)

{
  return 0;
}



/* Entry: 107083548; end: 107083607; -[SCChatGroupUpdateContentViewModel initWithGroupUpdateAttributedText:contentSize:reuseIdentifier:] */

undefined1 *
FUN_107083548(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126f8870;
  uStack_50 = param_3;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x18) = param_1;
    *(undefined8 *)((long)puVar1 + 0x20) = param_2;
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 107083608; end: 10708362b; -[SCChatGroupUpdateContentViewModel copyWithZone:] */

undefined8 FUN_107083608(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10708362c; end: 1070836e7; -[SCChatGroupUpdateContentViewModel hash] */

undefined8 * FUN_10708362c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uVar7 = ~*(ulong *)(param_1 + 0x18) + *(ulong *)(param_1 + 0x18) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_40 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_40 = uStack_40 ^ uStack_40 >> 0x16;
  uVar7 = ~*(ulong *)(param_1 + 0x20) + *(ulong *)(param_1 + 0x20) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_38 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_38 = uStack_38 ^ uStack_38 >> 0x16;
  uStack_48 = uVar2;
  func_0x00010bfde980();
  puVar4 = &uStack_48;
  uStack_30 = uVar3;
  func_0x000100505190(puVar4,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == param_3) {
LAB_10708377c:
    puVar8 = (undefined8 *)0x1;
  }
  else {
    puVar8 = (undefined8 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_107083788;
    puVar8 = puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    if (((ulong)puVar5 & 1) != 0) {
      bVar1 = false;
      if (((double)puVar4[3] == (double)param_3[3]) &&
         (bVar1 = false, !NAN((double)puVar4[4]) && !NAN((double)param_3[4]))) {
        bVar1 = (double)puVar4[4] == (double)param_3[4];
      }
      if ((bVar1) &&
         ((lVar6 = puVar4[1], lVar6 == param_3[1] || (func_0x00010c071ae0(), (int)lVar6 != 0)))) {
        puVar8 = (undefined8 *)puVar4[2];
        if (puVar8 != (undefined8 *)param_3[2]) {
          func_0x00010c071ae0();
          goto LAB_107083788;
        }
        goto LAB_10708377c;
      }
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_107083788:
  _objc_release(param_3);
  return puVar8;
}



/* Entry: 1070836e8; end: 1070837a3; -[SCChatGroupUpdateContentViewModel isEqual:] */

long FUN_1070836e8(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10708377c:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107083788;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if ((uVar3 & 1) != 0) {
      bVar1 = false;
      if ((*(double *)(param_1 + 0x18) == *(double *)(param_3 + 0x18)) &&
         (bVar1 = false, !NAN(*(double *)(param_1 + 0x20)) && !NAN(*(double *)(param_3 + 0x20)))) {
        bVar1 = *(double *)(param_1 + 0x20) == *(double *)(param_3 + 0x20);
      }
      if ((bVar1) &&
         ((lVar4 = *(long *)(param_1 + 8), lVar4 == *(long *)(param_3 + 8) ||
          (func_0x00010c071ae0(), (int)lVar4 != 0)))) {
        lVar4 = *(long *)(param_1 + 0x10);
        if (lVar4 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_107083788;
        }
        goto LAB_10708377c;
      }
    }
    lVar4 = 0;
  }
LAB_107083788:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 1070837a4; end: 1070837ab; -[SCChatGroupUpdateContentViewModel groupUpdateAttributedText] */

undefined8 FUN_1070837a4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1070837ac; end: 1070837b3; -[SCChatGroupUpdateContentViewModel contentSize] */

undefined1  [16] FUN_1070837ac(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x18);
}



/* Entry: 1070837b4; end: 1070837bb; -[SCChatGroupUpdateContentViewModel reuseIdentifier] */

undefined8 FUN_1070837b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1070837bc; end: 1070837eb; -[SCChatGroupUpdateContentViewModel .cxx_destruct] */

void FUN_1070837bc(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1070837ec; end: 107083aab; -[SCChatMediaSaveStatusContentViewModelGenerator contentFromParameterProvider:] */

void FUN_1070837ec(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  double dVar12;
  undefined8 uVar13;
  double dVar14;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c0cbb20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0b8620();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    puVar10 = (undefined *)0x0;
  }
  else {
    lVar1 = lVar2;
    func_0x00010bfb1920(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c14ba20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = param_3;
    func_0x00010c0cbb20(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1;
    func_0x00010c0ba200();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    puVar8 = PTR_PTR_1126d44f8;
    lVar1 = param_3;
    func_0x00010bf60940(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_3;
    func_0x00010bf507c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x000108ef5474();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_3;
    func_0x00010c244a80(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c6580(puVar8,param_2,lVar2,lVar1,lVar3,lVar4,lVar6,lVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar1);
    puVar9 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
    FUN_10708cc70();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar1;
    func_0x00010708cc80();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = 0x3ff0000000000000;
    func_0x00010bf0e320(0x3ff0000000000000,puVar9,param_2,puVar8,lVar1,lVar5,1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    _objc_release(lVar1);
    func_0x00010c0f65a0(param_3);
    dVar12 = 1.79769313486232e+308;
    func_0x00010c23d600(PTR_PTR_1126af270,param_2,puVar9,0);
    lVar1 = param_3;
    func_0x00010c12f740();
    uVar13 = 0;
    dVar14 = dVar12;
    if ((int)lVar1 == 0) {
      uVar13 = 0x4008000000000000;
      dVar14 = dVar12 + 5.0;
    }
    puVar10 = PTR_PTR_1126cb4a8;
    _objc_alloc(PTR_PTR_1126cb4a8);
    func_0x00010bff4f20(uVar13,dVar12,uVar11,dVar14);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(lVar4);
    _objc_release(lVar3);
  }
  _objc_release(lVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 107083aac; end: 107083abb;  */

void FUN_107083aac(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0c6570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_mediaSave_11260f370);
  return;
}



/* Entry: 107083abc; end: 107083ac3; -[SCChatMediaSaveStatusContentViewModelGenerator quotedContentFromQuotedMessage:viewModel:] */

undefined8 FUN_107083abc(void)

{
  return 0;
}



/* Entry: 107083ac4; end: 107083cc3; +[SCChatMediaSaveStatusMessageStringHelpers _remotesSavedYourMediaStringWithMediaType:singleRemote:remoteDisplayNames:mediaSavedCount:currentUserSavedMedia:] */

void FUN_107083ac4(undefined8 param_1,undefined8 param_2,long param_3,undefined *param_4,
                  undefined *param_5,long param_6,undefined *param_7)

{
  undefined *puVar1;
  
  puVar1 = param_5;
  _objc_retain(param_5);
  if (((int)param_4 == 0) || ((int)param_7 == 0)) {
    if (param_6 == 1) {
      if (param_3 == 0) {
        if (((ulong)param_4 & 1) == 0) {
          func_0x000107086ec8();
          _objc_retainAutoreleasedReturnValue();
          param_7 = puVar1;
        }
        else {
          func_0x000107086dd8();
          _objc_retainAutoreleasedReturnValue();
          param_7 = puVar1;
        }
      }
      else if (param_3 == 2) {
        if (((ulong)param_4 & 1) == 0) {
          func_0x000107086ef8();
          _objc_retainAutoreleasedReturnValue();
          param_7 = puVar1;
        }
        else {
          func_0x000107086e08();
          _objc_retainAutoreleasedReturnValue();
          param_7 = puVar1;
        }
      }
      else {
        param_7 = (undefined *)0x1;
        if (param_3 == 1) {
          if (((ulong)param_4 & 1) == 0) {
            func_0x000107086e98();
            _objc_retainAutoreleasedReturnValue();
            param_7 = puVar1;
          }
          else {
            func_0x000107086da8();
            _objc_retainAutoreleasedReturnValue();
            param_7 = puVar1;
          }
        }
      }
      param_4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_7);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      if (param_3 == 0) {
        if (((ulong)param_4 & 1) == 0) {
          func_0x000107086ee0();
          _objc_retainAutoreleasedReturnValue();
          param_7 = puVar1;
        }
        else {
          func_0x000107086df0();
          _objc_retainAutoreleasedReturnValue();
          param_7 = puVar1;
        }
      }
      else if (param_3 == 2) {
        if (((ulong)param_4 & 1) == 0) {
          func_0x000107086f10();
          _objc_retainAutoreleasedReturnValue();
          param_7 = puVar1;
        }
        else {
          func_0x000107086e20();
          _objc_retainAutoreleasedReturnValue();
          param_7 = puVar1;
        }
      }
      else if (param_3 == 1) {
        if (((ulong)param_4 & 1) == 0) {
          func_0x000107086eb0();
          _objc_retainAutoreleasedReturnValue();
          param_7 = puVar1;
        }
        else {
          func_0x000107086dc0();
          _objc_retainAutoreleasedReturnValue();
          param_7 = puVar1;
        }
      }
      param_4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_7);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(param_7);
  }
  else if (param_3 == 0) {
    func_0x000107086bf8();
    _objc_retainAutoreleasedReturnValue();
    param_4 = puVar1;
  }
  else if (param_3 == 2) {
    func_0x000107086c10();
    _objc_retainAutoreleasedReturnValue();
    param_4 = puVar1;
  }
  else if (param_3 == 1) {
    func_0x000107086be0();
    _objc_retainAutoreleasedReturnValue();
    param_4 = puVar1;
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_4);
  return;
}



/* Entry: 107083cc4; end: 107083dcb; +[SCChatMediaSaveStatusMessageStringHelpers _youSavedMediaStringWithMediaType:saveCount:mediaSenderDisplayName:] */

void FUN_107083cc4(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = param_5;
  _objc_retain(param_5);
  if (param_4 == 1) {
    if (param_3 == 0) {
      func_0x000107086bb0();
      _objc_retainAutoreleasedReturnValue();
    }
    else if (param_3 == 2) {
      func_0x000107086bc8();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x000107086b98();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    param_3 = lVar1;
  }
  else {
    FUN_107083dcc();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_3;
    func_0x000107086b80();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  _objc_release(param_3);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107083dcc; end: 107083e1f;  */

void FUN_107083dcc(long param_1)

{
  if (param_1 == 0) {
    func_0x000107086f40();
    _objc_retainAutoreleasedReturnValue();
  }
  else if (param_1 == 2) {
    func_0x000107086f58();
    _objc_retainAutoreleasedReturnValue();
  }
  else if (param_1 == 1) {
    func_0x000107086f28();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107083e20; end: 107083f97; +[SCChatMediaSaveStatusMessageStringHelpers _youAndRemotesSavedMediaStringWithMediaType:singleRemote:saveCount:remoteDisplayNames:mediaSenderDisplayName:] */

void FUN_107083e20(undefined8 param_1,undefined8 param_2,long param_3,uint param_4,long param_5,
                  undefined8 param_6,long param_7)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_6);
  lVar1 = param_7;
  _objc_retain(param_7);
  if (param_5 == 1) {
    if (param_3 == 0) {
      if ((param_4 & 1) == 0) {
        func_0x000107086cb8();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x000107086c58();
        _objc_retainAutoreleasedReturnValue();
      }
    }
    else if (param_3 == 2) {
      if ((param_4 & 1) == 0) {
        func_0x000107086cd0();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x000107086c70();
        _objc_retainAutoreleasedReturnValue();
      }
    }
    else if ((param_4 & 1) == 0) {
      func_0x000107086ca0();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x000107086c40();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    param_3 = lVar1;
  }
  else {
    FUN_107083dcc();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_3;
    if (param_4 == 0) {
      func_0x000107086c88();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x000107086c28();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  _objc_release(param_3);
  _objc_release(param_7);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107083f98; end: 10708410f; +[SCChatMediaSaveStatusMessageStringHelpers _remotesSavedMediaStringWithMediaType:singleRemote:saveCount:remoteDisplayNames:mediaSenderDisplayName:] */

void FUN_107083f98(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4,long param_5,
                  undefined8 param_6,long param_7)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_6);
  lVar1 = param_7;
  _objc_retain(param_7);
  if (param_5 == 1) {
    if (param_3 == 0) {
      if ((param_4 & 1) == 0) {
        func_0x000107086e68();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x000107086d78();
        _objc_retainAutoreleasedReturnValue();
      }
    }
    else if (param_3 == 2) {
      if ((param_4 & 1) == 0) {
        func_0x000107086e80();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x000107086d90();
        _objc_retainAutoreleasedReturnValue();
      }
    }
    else if ((param_4 & 1) == 0) {
      func_0x000107086e50();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x000107086d60();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    param_3 = lVar1;
  }
  else {
    FUN_107083dcc();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_3;
    if ((param_4 & 1) == 0) {
      func_0x000107086e38();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x000107086d48();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  _objc_release(param_3);
  _objc_release(param_7);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107084110; end: 10708447f; +[SCChatMediaSaveStatusMessageStringHelpers _mediaTypeToSaveCountFromSave:] */

void FUN_107084110(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  long lVar17;
  long lVar18;
  undefined *puVar19;
  long lVar20;
  long lVar21;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  _objc_retain(param_3);
  puVar14 = &uStack_1b0;
  puVar15 = auStack_f0;
  puVar16 = (undefined1 *)0x10;
  puVar4 = param_3;
  func_0x00010bf52a60();
  if (puVar4 != (undefined *)0x0) {
    lVar17 = *plStack_1a0;
    do {
      puVar19 = (undefined *)0x0;
      do {
        if (*plStack_1a0 != lVar17) {
          _objc_enumerationMutation(param_3);
        }
        lVar20 = *(long *)(lStack_1a8 + (long)puVar19 * 8);
        lVar5 = lVar20;
        func_0x00010c14ba00();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar3;
        func_0x00010bf4b900();
        if (((ulong)puVar6 & 1) == 0) {
          func_0x00010befa120(puVar3);
          lVar7 = lVar20;
          func_0x00010c0c6d40();
          _objc_retainAutoreleasedReturnValue();
          lVar8 = lVar7;
          func_0x00010bf52a60();
          lVar1 = lRam0000000000000000;
          while (lVar8 != 0) {
            lVar21 = 0;
            do {
              if (lRam0000000000000000 != lVar1) {
                _objc_enumerationMutation(lVar7);
              }
              lVar18 = *(long *)(lVar21 * 8);
              _objc_retain(lVar18);
              lVar9 = lVar18;
              func_0x00010bf32ee0();
              if (lVar9 != 0) {
                func_0x00010bf32ee0();
              }
              _objc_release(lVar18);
              lVar9 = lVar20;
              func_0x00010c0c6d40(lVar20);
              _objc_retainAutoreleasedReturnValue();
              lVar18 = lVar9;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c067fc0();
              _objc_release(lVar18);
              _objc_release(lVar9);
              puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
              _objc_retainAutoreleasedReturnValue();
              puVar10 = puVar2;
              func_0x00010c0e00e0(puVar2);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c067fc0();
              _objc_release(puVar10);
              _objc_release(puVar6);
              puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
              _objc_retainAutoreleasedReturnValue();
              puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1d0640(puVar2);
              _objc_release(puVar10);
              _objc_release(puVar6);
              lVar21 = lVar21 + 1;
            } while (lVar8 != lVar21);
            lVar8 = lVar7;
            func_0x00010bf52a60();
          }
          _objc_release(lVar7);
        }
        _objc_release(lVar5);
        puVar19 = puVar19 + 1;
      } while (puVar19 != puVar4);
      puVar14 = &uStack_1b0;
      puVar15 = auStack_f0;
      puVar16 = (undefined1 *)0x10;
      puVar4 = param_3;
      func_0x00010bf52a60();
    } while (puVar4 != (undefined *)0x0);
  }
  _objc_release(param_3);
  puVar4 = puVar2;
  func_0x00010bf51e00();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  _objc_retain(puVar15);
  _objc_retain(puVar16);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(puVar14);
  func_0x00010bd869d0(param_8,&PTR___NSConcreteGlobalBlock_11098cf80,
                      &PTR___NSConcreteGlobalBlock_11098cfc0);
  puVar2 = param_3;
  func_0x00010be5ed80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar14);
  puVar11 = puVar16;
  func_0x000108ef3960(puVar16,param_7,param_8);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar11;
  func_0x00010c09e940();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar11);
  puVar3 = puVar2;
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c124d20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067fc0();
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar3 = puVar2;
  func_0x00010bf529e0();
  uVar13 = param_7;
  func_0x00010c0ecc20(param_7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  lVar17 = param_6;
  FUN_10708d18c(param_6,puVar15,uVar13,param_8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar13);
  if (puVar3 == (undefined *)0x1) {
    puVar3 = puVar2;
    func_0x00010bf002e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067fc0();
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  lVar5 = param_6;
  func_0x00010bf4b900();
  _objc_retain(puVar16);
  _objc_retain(puVar15);
  if (puVar16 == puVar15) {
    _objc_release(puVar15);
    _objc_release(puVar16);
LAB_1070846a0:
    func_0x00010bf529e0(param_6);
    func_0x00010be8b2a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = param_3;
  }
  else {
    if (puVar15 == (undefined1 *)0x0) {
      _objc_release();
    }
    else {
      puVar11 = puVar16;
      func_0x00010c071ae0();
      _objc_release(puVar15);
      _objc_release(puVar16);
      if ((int)puVar11 != 0) goto LAB_1070846a0;
    }
    lVar20 = param_6;
    func_0x00010bf529e0();
    if ((int)lVar5 == 0) {
      func_0x00010be8b280(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = param_3;
    }
    else if (lVar20 == 1) {
      func_0x00010beebea0(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = param_3;
    }
    else {
      func_0x00010bf529e0(param_6);
      func_0x00010beebe80(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = param_3;
    }
  }
  _objc_release(lVar17);
  _objc_release(puVar12);
  _objc_release(puVar2);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(puVar16);
  _objc_release(puVar15);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 107084480; end: 1070847cb; +[SCChatMediaSaveStatusMessageStringHelpers mediaSaveStatusMessageForMediaSaves:currentUserId:mediaSenderUserId:saverUserIds:group:snapchattersData:] */

void FUN_107084480(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
                  long param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_3);
  func_0x00010bd869d0(param_8,&PTR___NSConcreteGlobalBlock_11098cf80,
                      &PTR___NSConcreteGlobalBlock_11098cfc0);
  lVar1 = param_1;
  func_0x00010be5ed80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar2 = param_5;
  func_0x000108ef3960(param_5,param_7,param_8);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c09e940();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = lVar1;
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c124d20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067fc0();
  _objc_release(lVar4);
  _objc_release(lVar2);
  lVar2 = lVar1;
  func_0x00010bf529e0();
  uVar5 = param_7;
  func_0x00010c0ecc20(param_7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  lVar4 = param_6;
  FUN_10708d18c(param_6,param_4,uVar5,param_8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  if (lVar2 == 1) {
    lVar2 = lVar1;
    func_0x00010bf002e0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067fc0();
    _objc_release(lVar6);
    _objc_release(lVar2);
  }
  lVar2 = param_6;
  func_0x00010bf4b900();
  _objc_retain(param_5);
  _objc_retain(param_4);
  if (param_5 == param_4) {
    _objc_release(param_4);
    _objc_release(param_5);
LAB_1070846a0:
    func_0x00010bf529e0(param_6);
    func_0x00010be8b2a0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (param_4 == 0) {
      _objc_release();
    }
    else {
      lVar6 = param_5;
      func_0x00010c071ae0();
      _objc_release(param_4);
      _objc_release(param_5);
      if ((int)lVar6 != 0) goto LAB_1070846a0;
    }
    lVar6 = param_6;
    func_0x00010bf529e0();
    if ((int)lVar2 == 0) {
      func_0x00010be8b280(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
    else if (lVar6 == 1) {
      func_0x00010beebea0(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010bf529e0(param_6);
      func_0x00010beebe80(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar1);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1070847cc; end: 10708482b;  */

void FUN_1070847cc(undefined8 param_1,long param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_retain(param_3);
  func_0x00010c067fc0(param_2);
  lVar2 = param_3;
  func_0x00010c067fc0(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,lVar2 + param_2);
  return;
}



/* Entry: 10708482c; end: 107084833; -[SCChatMergedStatusContentViewModel cellWillDisplayAction] */

undefined8 FUN_10708482c(void)

{
  return 0;
}



/* Entry: 107084834; end: 10708483b; -[SCChatMergedStatusContentViewModel hidden] */

undefined8 FUN_107084834(void)

{
  return 0;
}



/* Entry: 10708483c; end: 10708483f; -[SCChatMergedStatusContentViewModel contentSizeForMaxWidth:] */

void FUN_10708483c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf4d5f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_contentSize_1125b0f20);
  return;
}



/* Entry: 107084840; end: 107084a7b; -[SCChatMergedStatusContentViewModelGenerator contentFromParameterProvider:] */

void FUN_107084840(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  double dVar10;
  undefined8 uVar11;
  double dVar12;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c0cbb20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  FUN_10708522c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar3 == 0) {
    puVar8 = (undefined *)0x0;
  }
  else {
    lVar1 = param_3;
    func_0x00010c0cbb20(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010bf60940(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_3;
    func_0x00010bf507c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_3;
    func_0x00010c244a80(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar3;
    FUN_107084a84(lVar3,lVar1,lVar2,lVar4,lVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar2);
    _objc_release(lVar1);
    puVar7 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
    FUN_10708cc70();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010708cc80();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = 0x3ff0000000000000;
    func_0x00010bf0e320(0x3ff0000000000000,puVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
    func_0x00010c0f65a0(param_3);
    dVar10 = 1.79769313486232e+308;
    func_0x00010c23d600(PTR_PTR_1126af270);
    lVar1 = param_3;
    func_0x00010c12f740();
    uVar11 = 0;
    dVar12 = dVar10;
    if ((int)lVar1 == 0) {
      uVar11 = 0x4008000000000000;
      dVar12 = dVar10 + 5.0;
    }
    puVar8 = PTR_PTR_1126cb4a8;
    _objc_alloc(PTR_PTR_1126cb4a8);
    func_0x00010bff4f20(uVar11,dVar10,uVar9,dVar12);
    _objc_release(puVar7);
    _objc_release(lVar6);
  }
  _objc_release(lVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 107084a7c; end: 107084a83; -[SCChatMergedStatusContentViewModelGenerator quotedContentFromQuotedMessage:viewModel:] */

undefined8 FUN_107084a7c(void)

{
  return 0;
}



/* Entry: 107084a84; end: 107085003;  */

void FUN_107084a84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_retain(param_1);
  func_0x000108ef5474();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c2bee60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c2beea0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c2bee80();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010c086100(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x00010c23cce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  func_0x00010c0d2820(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  func_0x00010c23ccc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar8 = uVar1;
  func_0x000107084c40(uVar1,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7,param_2,param_3,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar8);
  return;
}



/* Entry: 107085004; end: 10708500b;  */

void FUN_107085004(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010beeedd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_actionPerformingUserId_112599518);
  return;
}



/* Entry: 10708500c; end: 107085187; -[SCChatMergedStatusMessageStringContainer initWithJustYou:youMultiple:youRemote:youMultipleRemote:singleRemote:singleRemoteMultiple:multipleRemote:] */

undefined1 *
FUN_10708500c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_1126f8878;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    _objc_release(uVar2);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107085188; end: 10708518f; -[SCChatMergedStatusMessageStringContainer justYou] */

undefined8 FUN_107085188(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 107085190; end: 107085197; -[SCChatMergedStatusMessageStringContainer youMultiple] */

undefined8 FUN_107085190(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107085198; end: 10708519f; -[SCChatMergedStatusMessageStringContainer youRemote] */

undefined8 FUN_107085198(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1070851a0; end: 1070851a7; -[SCChatMergedStatusMessageStringContainer youMultipleRemote] */

undefined8 FUN_1070851a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1070851a8; end: 1070851af; -[SCChatMergedStatusMessageStringContainer singleRemote] */

undefined8 FUN_1070851a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1070851b0; end: 1070851b7; -[SCChatMergedStatusMessageStringContainer singleRemoteMultiple] */

undefined8 FUN_1070851b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1070851b8; end: 1070851bf; -[SCChatMergedStatusMessageStringContainer multipleRemote] */

undefined8 FUN_1070851b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 1070851c0; end: 10708522b; -[SCChatMergedStatusMessageStringContainer .cxx_destruct] */

void FUN_1070851c0(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10708522c; end: 107085767;  */

void FUN_10708522c(undefined *param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined1 uStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined1 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined1 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 uStack_78;
  
  _objc_retain();
  puVar2 = param_1;
  func_0x00010c27dd80();
  puVar7 = (undefined *)0x0;
  puVar3 = PTR_PTR_1126ae720;
  if ((long)puVar2 < 0x1f) {
    if ((long)puVar2 < 0x17) {
      if (puVar2 == (undefined *)0x3) {
        puVar2 = param_1;
        func_0x00010c151020();
        puVar7 = param_1;
        if ((long)puVar2 < 2) {
          if (puVar2 == (undefined *)0x0) {
            func_0x00010c07d380();
            if (((ulong)puVar7 & 1) == 0) {
              func_0x0001070858d4();
              _objc_retainAutoreleasedReturnValue();
            }
            else {
              func_0x000107085768();
              _objc_retainAutoreleasedReturnValue();
            }
            goto LAB_1070856bc;
          }
          if (puVar2 == (undefined *)0x1) {
            func_0x00010c07d380();
            if (((ulong)puVar7 & 1) == 0) {
              func_0x000107085e84();
              _objc_retainAutoreleasedReturnValue();
            }
            else {
              func_0x000107085d18();
              _objc_retainAutoreleasedReturnValue();
            }
            goto LAB_1070856bc;
          }
        }
        else {
          if (puVar2 == (undefined *)0x2) {
            func_0x00010c07d380();
            if (((ulong)puVar7 & 1) == 0) {
              func_0x000107085bac();
              _objc_retainAutoreleasedReturnValue();
            }
            else {
              func_0x000107085a40();
              _objc_retainAutoreleasedReturnValue();
            }
            goto LAB_1070856bc;
          }
          if (puVar2 == (undefined *)0x3) {
            func_0x00010c07d380();
            if (((ulong)puVar7 & 1) == 0) {
              func_0x00010708615c();
              _objc_retainAutoreleasedReturnValue();
            }
            else {
              func_0x000107085ff0();
              _objc_retainAutoreleasedReturnValue();
            }
            goto LAB_1070856bc;
          }
        }
LAB_1070855e4:
        puVar3 = PTR_PTR_1126ae720;
        func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&PTR___NSConcreteGlobalBlock_11098aae0);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR_PTR_1126ae720;
        func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&PTR___NSConcreteGlobalBlock_11098ab00);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR_PTR_1126ae720;
        func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&PTR___NSConcreteGlobalBlock_11098ab20);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR_PTR_1126ae720;
        _objc_retain(puVar3);
        ppuVar6 = &PTR___NSConcreteGlobalBlock_11098ab40;
        goto LAB_107085650;
      }
      if (puVar2 != (undefined *)0x16) goto LAB_1070856bc;
      puVar3 = param_1;
      func_0x00010c0721e0();
      puVar2 = PTR___NSConcreteStackBlock_11034bd00;
      puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_90 = 0xc0000000;
      pcStack_88 = FUN_1070862c8;
      puStack_80 = &UNK_11098a3c0;
      uVar1 = SUB81(puVar3,0);
      puVar3 = PTR_PTR_1126ae720;
      uStack_78 = uVar1;
      func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&puStack_98);
      _objc_retainAutoreleasedReturnValue();
      puStack_c0 = puVar2;
      uStack_b8 = 0xc0000000;
      uStack_b0 = 0x1070862fc;
      puStack_a8 = &UNK_11098a3c0;
      puVar4 = PTR_PTR_1126ae720;
      uStack_a0 = uVar1;
      func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&puStack_c0);
      _objc_retainAutoreleasedReturnValue();
      puStack_e8 = puVar2;
      uStack_e0 = 0xc0000000;
      uStack_d8 = 0x107086330;
      puStack_d0 = &UNK_11098a3c0;
      puVar5 = PTR_PTR_1126ae720;
      uStack_c8 = uVar1;
      func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&puStack_e8);
      _objc_retainAutoreleasedReturnValue();
      puStack_110 = puVar2;
      uStack_108 = 0xc0000000;
      uStack_100 = 0x107086364;
      puStack_f8 = &UNK_11098a3c0;
      puVar2 = PTR_PTR_1126ae720;
      uStack_f0 = uVar1;
      func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&puStack_110);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR_PTR_1126d4500;
      _objc_alloc(PTR_PTR_1126d4500);
      func_0x00010c0209c0();
    }
    else {
      if (puVar2 == (undefined *)0x17) goto LAB_1070855e4;
      if (puVar2 != (undefined *)0x18) goto LAB_1070856bc;
      func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&PTR___NSConcreteGlobalBlock_11098ab60);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR_PTR_1126ae720;
      func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&PTR___NSConcreteGlobalBlock_11098ab80);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR_PTR_1126ae720;
      func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&PTR___NSConcreteGlobalBlock_11098aba0);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR_PTR_1126ae720;
      _objc_retain(puVar3);
      ppuVar6 = &PTR___NSConcreteGlobalBlock_11098abc0;
LAB_107085650:
      func_0x00010bf11fe0(puVar2,param_2,ppuVar6);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR_PTR_1126d4500;
      _objc_alloc(PTR_PTR_1126d4500);
      func_0x00010c0209c0();
      _objc_release(puVar3);
    }
    _objc_release(puVar2);
    _objc_release(puVar5);
  }
  else {
    if ((long)puVar2 < 0x21) {
      if (puVar2 == (undefined *)0x1f) {
        func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&PTR___NSConcreteGlobalBlock_11098abe0);
        _objc_retainAutoreleasedReturnValue();
        ppuVar6 = &PTR___NSConcreteGlobalBlock_11098ac00;
      }
      else {
        if (puVar2 != (undefined *)0x20) goto LAB_1070856bc;
        func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&PTR___NSConcreteGlobalBlock_11098ac20);
        _objc_retainAutoreleasedReturnValue();
        ppuVar6 = &PTR___NSConcreteGlobalBlock_11098ac40;
      }
    }
    else if (puVar2 == (undefined *)0x21) {
      func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&PTR___NSConcreteGlobalBlock_11098ac60);
      _objc_retainAutoreleasedReturnValue();
      ppuVar6 = &PTR___NSConcreteGlobalBlock_11098ac80;
    }
    else if (puVar2 == (undefined *)0x29) {
      func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&PTR___NSConcreteGlobalBlock_11098aca0);
      _objc_retainAutoreleasedReturnValue();
      ppuVar6 = &PTR___NSConcreteGlobalBlock_11098acc0;
    }
    else {
      if (puVar2 != (undefined *)0x2a) goto LAB_1070856bc;
      func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&PTR___NSConcreteGlobalBlock_11098ace0);
      _objc_retainAutoreleasedReturnValue();
      ppuVar6 = &PTR___NSConcreteGlobalBlock_11098ad00;
    }
    puVar4 = PTR_PTR_1126ae720;
    func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,ppuVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126d4500;
    _objc_alloc(PTR_PTR_1126d4500);
    func_0x00010c0209c0();
  }
  _objc_release(puVar4);
  _objc_release(puVar3);
LAB_1070856bc:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 107085768; end: 1070862c7;  */

void FUN_107085768(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  puVar1 = PTR_PTR_1126ae720;
  func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&PTR___NSConcreteGlobalBlock_11098a3e0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae720;
  func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&PTR___NSConcreteGlobalBlock_11098a400);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126ae720;
  func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&PTR___NSConcreteGlobalBlock_11098a420);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126ae720;
  func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&PTR___NSConcreteGlobalBlock_11098a440);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126ae720;
  func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&PTR___NSConcreteGlobalBlock_11098a460);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126ae720;
  func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&PTR___NSConcreteGlobalBlock_11098a480);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126ae720;
  func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&PTR___NSConcreteGlobalBlock_11098a4a0);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126d4500;
  _objc_alloc(PTR_PTR_1126d4500);
  func_0x00010c0209c0();
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 1070862c8; end: 107086397;  */

void FUN_1070862c8(long param_1)

{
  if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
    func_0x000107086538();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x0001070864d8();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107086398; end: 107086fff;  */

void FUN_107086398(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e9a738;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e9a738,
                      &PTR____CFConstantStringClassReference_110e9a638,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 107087000; end: 1070870d3; -[SCChatMergedStatusContentViewModel initWithAttributedStatusText:topMargin:height:contentSize:reuseIdentifier:] */

undefined1 *
FUN_107087000(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126f8880;
  uStack_60 = param_5;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
    *(undefined8 *)((long)puVar1 + 0x18) = param_2;
    *(undefined8 *)((long)puVar1 + 0x28) = param_3;
    *(undefined8 *)((long)puVar1 + 0x30) = param_4;
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  return (undefined1 *)puVar1;
}



/* Entry: 1070870d4; end: 1070870f7; -[SCChatMergedStatusContentViewModel copyWithZone:] */

undefined8 FUN_1070870d4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1070870f8; end: 1070871ef; -[SCChatMergedStatusContentViewModel hash] */

undefined8 * FUN_1070870f8(long param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong uVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  double dVar10;
  double dVar11;
  undefined8 uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar8 = ~*(ulong *)(param_1 + 0x10) + *(ulong *)(param_1 + 0x10) * 0x40000;
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  uStack_50 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_50 = uStack_50 ^ uStack_50 >> 0x16;
  uVar8 = ~*(ulong *)(param_1 + 0x18) + *(ulong *)(param_1 + 0x18) * 0x40000;
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = ~*(ulong *)(param_1 + 0x28) + *(ulong *)(param_1 + 0x28) * 0x40000;
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  uStack_48 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_48 = uStack_48 ^ uStack_48 >> 0x16;
  uVar8 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uStack_40 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_40 = uStack_40 ^ uStack_40 >> 0x16;
  uVar8 = ~*(ulong *)(param_1 + 0x30) + *(ulong *)(param_1 + 0x30) * 0x40000;
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  uStack_38 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_38 = uStack_38 ^ uStack_38 >> 0x16;
  uStack_58 = uVar3;
  func_0x00010bfde980();
  puVar5 = &uStack_58;
  uStack_30 = uVar4;
  func_0x000100505190(puVar5,6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar5;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar5 == param_3) {
LAB_1070872fc:
    puVar9 = (undefined8 *)0x1;
  }
  else {
    puVar9 = (undefined8 *)0x0;
    if ((puVar5 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_107087308;
    puVar9 = puVar5;
    _objc_opt_class(puVar5);
    puVar6 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar9);
    if (((ulong)puVar6 & 1) != 0) {
      dVar11 = ABS((double)puVar5[2] - (double)param_3[2]);
      dVar10 = ABS((double)puVar5[2] + (double)param_3[2]) * 2.220446049250313e-16;
      bVar2 = true;
      if ((2.2250738585072014e-308 <= dVar11) && (bVar2 = false, !NAN(dVar11) && !NAN(dVar10))) {
        bVar2 = dVar11 < dVar10;
      }
      if (bVar2) {
        dVar11 = ABS((double)puVar5[3] - (double)param_3[3]);
        dVar10 = ABS((double)puVar5[3] + (double)param_3[3]) * 2.220446049250313e-16;
        bVar2 = true;
        if ((2.2250738585072014e-308 <= dVar11) && (bVar2 = false, !NAN(dVar11) && !NAN(dVar10))) {
          bVar2 = dVar11 < dVar10;
        }
        if (bVar2) {
          puVar9 = (undefined8 *)0x0;
          if (((double)puVar5[5] != (double)param_3[5]) || ((double)puVar5[6] != (double)param_3[6])
             ) goto LAB_107087308;
          lVar7 = puVar5[1];
          if ((lVar7 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar7 != 0)) {
            puVar9 = (undefined8 *)puVar5[4];
            if (puVar9 != (undefined8 *)param_3[4]) {
              func_0x00010c071ae0();
              goto LAB_107087308;
            }
            goto LAB_1070872fc;
          }
        }
      }
    }
    puVar9 = (undefined8 *)0x0;
  }
LAB_107087308:
  _objc_release(param_3);
  return puVar9;
}



/* Entry: 1070871f0; end: 107087323; -[SCChatMergedStatusContentViewModel isEqual:] */

long FUN_1070871f0(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1070872fc:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_107087308;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if ((uVar3 & 1) != 0) {
      dVar6 = ABS(*(double *)(param_1 + 0x10) - *(double *)(param_3 + 0x10));
      dVar5 = ABS(*(double *)(param_1 + 0x10) + *(double *)(param_3 + 0x10)) * 2.220446049250313e-16
      ;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if (bVar1) {
        dVar6 = ABS(*(double *)(param_1 + 0x18) - *(double *)(param_3 + 0x18));
        dVar5 = ABS(*(double *)(param_1 + 0x18) + *(double *)(param_3 + 0x18)) *
                2.220446049250313e-16;
        bVar1 = true;
        if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
          bVar1 = dVar6 < dVar5;
        }
        if (bVar1) {
          lVar4 = 0;
          if ((*(double *)(param_1 + 0x28) != *(double *)(param_3 + 0x28)) ||
             (*(double *)(param_1 + 0x30) != *(double *)(param_3 + 0x30))) goto LAB_107087308;
          lVar4 = *(long *)(param_1 + 8);
          if ((lVar4 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar4 != 0)) {
            lVar4 = *(long *)(param_1 + 0x20);
            if (lVar4 != *(long *)(param_3 + 0x20)) {
              func_0x00010c071ae0();
              goto LAB_107087308;
            }
            goto LAB_1070872fc;
          }
        }
      }
    }
    lVar4 = 0;
  }
LAB_107087308:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 107087324; end: 10708732b; -[SCChatMergedStatusContentViewModel attributedStatusText] */

undefined8 FUN_107087324(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10708732c; end: 107087333; -[SCChatMergedStatusContentViewModel topMargin] */

undefined8 FUN_10708732c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107087334; end: 10708733b; -[SCChatMergedStatusContentViewModel height] */

undefined8 FUN_107087334(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10708733c; end: 107087343; -[SCChatMergedStatusContentViewModel contentSize] */

undefined1  [16] FUN_10708733c(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 0x28);
}



/* Entry: 107087344; end: 10708734b; -[SCChatMergedStatusContentViewModel reuseIdentifier] */

undefined8 FUN_107087344(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10708734c; end: 10708737b; -[SCChatMergedStatusContentViewModel .cxx_destruct] */

void FUN_10708734c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10708737c; end: 107087383; -[SCChatSnapContentViewModel hidden] */

undefined8 FUN_10708737c(void)

{
  return 0;
}



/* Entry: 107087384; end: 1070873ab; -[SCChatSnapContentViewModel contentSizeForMaxWidth:] */

undefined1  [16] FUN_107087384(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = param_1;
  func_0x00010bf4c660();
  auVar2._8_8_ = uVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 1070873ac; end: 10708750b;  */

void FUN_1070873ac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c078c00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_1);
  puVar3 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  if (((ulong)puVar1 & 1) == 0) {
    FUN_10708cc70();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010708cc80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0e320(0x3ff0000000000000,puVar3,param_2,param_1,puVar1,puVar2,1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  else {
    puVar3 = (undefined *)0x0;
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10708750c; end: 10708758b;  */

void FUN_10708750c(int param_1,uint param_2)

{
  if (param_1 == 0) {
    if ((param_2 & 1) == 0) {
      func_0x00010708a9ec();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010708ab0c();
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else if ((param_2 & 1) == 0) {
    func_0x00010b0af29c();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x0001070b0678();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10708758c; end: 10708778f;  */

void FUN_10708758c(undefined *param_1,undefined8 param_2,int param_3,ulong param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar4 = param_1;
  func_0x00010bf529e0();
  if (puVar4 == (undefined *)0x0) {
    puVar4 = (undefined *)0x0;
    goto LAB_107087750;
  }
  puVar1 = param_1;
  func_0x00010bf4b900();
  puVar2 = param_1;
  FUN_10708d18c(param_1,param_2,param_5,param_6);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = param_1;
  func_0x00010bf529e0();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (((param_4 & 1) == 0) && (param_3 != 0)) {
    if ((int)puVar1 == 0) {
      func_0x00010708aa7c();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_107087720;
    }
    if (puVar4 == (undefined *)0x2) {
      func_0x00010708aa4c();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_107087720;
    }
    if (puVar4 != (undefined *)0x1) {
      func_0x00010708aa64();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_107087720;
    }
    func_0x00010708aa34();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if ((int)puVar1 == 0) {
      if (puVar4 == (undefined *)0x1) {
        func_0x00010708aadc();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x00010708aaf4();
        _objc_retainAutoreleasedReturnValue();
      }
    }
    else if (puVar4 == (undefined *)0x2) {
      func_0x00010708aaac();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      if (puVar4 == (undefined *)0x1) {
        func_0x00010708aa94();
        _objc_retainAutoreleasedReturnValue();
        goto LAB_107087748;
      }
      func_0x00010708aac4();
      _objc_retainAutoreleasedReturnValue();
    }
LAB_107087720:
    func_0x00010c14de00(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    puVar4 = puVar3;
  }
LAB_107087748:
  _objc_release(puVar2);
LAB_107087750:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 107087790; end: 107087baf;  */

void FUN_107087790(undefined *param_1,undefined8 param_2,int param_3,ulong param_4,
                  undefined8 param_5,undefined8 param_6,int param_7)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  uint uVar11;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar10 = param_1;
  func_0x00010bf529e0();
  if (puVar10 == (undefined *)0x0) {
    puVar10 = (undefined *)0x0;
    goto LAB_107087b6c;
  }
  puVar2 = param_1;
  func_0x00010bf4b900();
  puVar3 = param_1;
  FUN_10708d18c(param_1,param_2,param_5,param_6);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = param_1;
  func_0x00010bf529e0();
  puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar11 = (uint)puVar2;
  if (param_7 == 0) {
    if (((param_4 & 1) == 0) && (param_3 != 0)) {
      if (uVar11 == 0) {
        func_0x00010708ab6c();
        _objc_retainAutoreleasedReturnValue();
      }
      else if (puVar4 == (undefined *)0x2) {
        func_0x00010708ab3c();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        if (puVar4 == (undefined *)0x1) {
          func_0x00010708ab24();
          _objc_retainAutoreleasedReturnValue();
          goto LAB_107087b48;
        }
        func_0x00010708ab54();
        _objc_retainAutoreleasedReturnValue();
      }
    }
    else if (uVar11 == 0) {
      if (puVar4 == (undefined *)0x1) {
        func_0x00010708abcc();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x00010708abe4();
        _objc_retainAutoreleasedReturnValue();
      }
    }
    else if (puVar4 == (undefined *)0x2) {
      func_0x00010708ab9c();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      if (puVar4 == (undefined *)0x1) {
        func_0x00010708ab84();
        _objc_retainAutoreleasedReturnValue();
        goto LAB_107087b48;
      }
      func_0x00010708abb4();
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c14de00(puVar10);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    puVar4 = puVar10;
LAB_107087b48:
    puVar10 = puVar4;
    func_0x0001070873ac(puVar4);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar1 = 0;
    if (puVar4 < (undefined *)0x2) {
      uVar1 = uVar11;
    }
    if (((param_4 & 1) == 0) && (param_3 != 0)) {
      if (uVar11 == 0) {
        func_0x00010708ab6c();
        _objc_retainAutoreleasedReturnValue();
      }
      else if (puVar4 == (undefined *)0x2) {
        func_0x00010708ab3c();
        _objc_retainAutoreleasedReturnValue();
      }
      else if (puVar4 == (undefined *)0x1) {
        func_0x00010708ab24();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x00010708ab54();
        _objc_retainAutoreleasedReturnValue();
      }
    }
    else if (uVar11 == 0) {
      if (puVar4 == (undefined *)0x1) {
        func_0x00010708abcc();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x00010708abe4();
        _objc_retainAutoreleasedReturnValue();
      }
    }
    else if (puVar4 == (undefined *)0x2) {
      func_0x00010708ab9c();
      _objc_retainAutoreleasedReturnValue();
    }
    else if (puVar4 == (undefined *)0x1) {
      func_0x00010708ab84();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010708abb4();
      _objc_retainAutoreleasedReturnValue();
    }
    if ((uVar1 & 1) != 0) goto LAB_107087b48;
    puVar10 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08);
    func_0x00010c11f420(puVar4);
    puVar2 = puVar4;
    func_0x00010c260c80();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
    func_0x00010708745c();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c08fa60();
    if (puVar6 != (undefined *)0x0) {
      func_0x00010bf069e0(puVar10);
    }
    puVar6 = puVar3;
    func_0x0001070873ac();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c08fa60();
    if (puVar7 != (undefined *)0x0) {
      func_0x00010bf069e0(puVar10);
    }
    func_0x00010c11f420(puVar4);
    func_0x00010c08fa60(puVar4);
    puVar7 = puVar4;
    func_0x00010c260c80();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010708745c();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010c08fa60();
    if (puVar9 != (undefined *)0x0) {
      func_0x00010bf069e0(puVar10);
    }
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar2);
  }
  _objc_release(puVar4);
  _objc_release(puVar3);
LAB_107087b6c:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 107087bb0; end: 1070880e3;  */

void FUN_107087bb0(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  uint param_5,uint param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = param_1;
  func_0x00010bf529e0();
  puVar3 = (undefined *)0x0;
  if (((param_6 | param_5 ^ 1) != 1) || (puVar1 == (undefined *)0x0)) goto LAB_107087d44;
  puVar3 = param_1;
  func_0x00010bf4b900();
  puVar2 = param_1;
  FUN_10708d18c(param_1,param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (((ulong)puVar3 & 1) == 0) {
    puVar3 = puVar2;
    if (param_5 == 0) {
      func_0x0001070b0600();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x0001070b0660();
      _objc_retainAutoreleasedReturnValue();
    }
LAB_107087d14:
    func_0x00010c14de00(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar3 = puVar1;
  }
  else {
    puVar3 = param_1;
    func_0x00010bf529e0();
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (puVar3 == (undefined *)0x2) {
      if (param_5 == 0) {
        func_0x0001070b05d0();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x0001070b0630();
        _objc_retainAutoreleasedReturnValue();
      }
      goto LAB_107087d14;
    }
    if (puVar3 != (undefined *)0x1) {
      if (param_5 == 0) {
        func_0x0001070b05e8();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x0001070b0648();
        _objc_retainAutoreleasedReturnValue();
      }
      goto LAB_107087d14;
    }
    if (param_5 == 0) {
      func_0x0001070b05b8();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x0001070b0618();
      _objc_retainAutoreleasedReturnValue();
    }
  }
  _objc_release(puVar2);
LAB_107087d44:
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1070880e4; end: 10708816f;  */

undefined1  [16] FUN_1070880e4(double param_1,undefined8 param_2,int param_3)

{
  bool bVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  
  bVar1 = param_3 == 0;
  dVar4 = 12.0;
  if (bVar1) {
    dVar4 = *(double *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18);
  }
  dVar5 = 12.0;
  if (bVar1) {
    dVar5 = *(double *)(PTR__UIEdgeInsetsZero_110345bb0 + 8);
  }
  dVar6 = 8.0;
  if (bVar1) {
    dVar6 = *(double *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10);
  }
  dVar7 = 8.0;
  if (bVar1) {
    dVar7 = *(double *)PTR__UIEdgeInsetsZero_110345bb0;
  }
  dVar2 = (param_1 - dVar5) - dVar4;
  dVar3 = 3.4028234663852886e+38;
  func_0x00010c23d600(dVar2,0x47efffffe0000000,PTR_PTR_1126af270,param_3,param_2,0);
  auVar8._8_8_ = dVar6 + dVar7 + dVar3 + 2.0 + 2.0;
  auVar8._0_8_ = dVar5 + dVar4 + dVar2;
  return auVar8;
}



/* Entry: 107088170; end: 107088197;  */

void FUN_107088170(int param_1)

{
  if (param_1 != 0) {
    func_0x00010708a9ec();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107088198; end: 107088227;  */

undefined * FUN_107088198(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain();
  func_0x00010901d430();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010901ccf8();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  if (lVar1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010c0702e0(PTR__OBJC_CLASS___NSDate_1126ae770);
  }
  _objc_release(lVar1);
  _objc_release(param_1);
  return puVar2;
}



/* Entry: 107088228; end: 107088283;  */

void FUN_107088228(long param_1,long param_2)

{
  long lVar1;
  
  _objc_retain();
  if ((param_1 == 0) || ((3 < param_2 - 5U && (param_2 != 1)))) {
    lVar1 = 0;
  }
  else {
    _objc_retain(param_1);
    lVar1 = param_1;
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 107088284; end: 1070882ef; -[SCChatSnapContentViewModelGenerator initWithHighlightReplayAgainNotification:] */

undefined1 * FUN_107088284(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f8888;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
    puVar2 = PTR_PTR_1126b2e38;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1070882f0; end: 107088c6f; -[SCChatSnapContentViewModelGenerator contentFromParameterProvider:] */

void FUN_1070882f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined *puVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  ulong uVar30;
  ulong uVar31;
  ulong uVar32;
  ulong uVar33;
  undefined *puVar34;
  ulong uVar35;
  ulong uVar36;
  ulong uVar37;
  ulong uVar38;
  ulong uVar39;
  
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010c0cbb20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010bf500c0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_4;
  func_0x00010bf60940(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001070b6780(uVar2,uVar1,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010bf507c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x000108ef55a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010bf507c0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x000108ef5474();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010c0cb8c0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_4;
  func_0x00010bf60940(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c071ae0();
  _objc_release(uVar5);
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010bf60940(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c07d0e0();
  _objc_release(uVar1);
  func_0x00010bf2c580();
  uVar1 = param_4;
  func_0x00010bf500c0(param_4);
  _objc_retainAutoreleasedReturnValue();
  FUN_1070b63bc(uVar2,uVar1);
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010bf36440(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c07ee60();
  _objc_release(uVar5);
  _objc_release(uVar1);
  func_0x00010c079140();
  uVar1 = uVar2;
  func_0x00010c0cb340();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar1;
  func_0x00010c2421a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar5;
  func_0x00010c15aca0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067fc0();
  _objc_release(uVar7);
  _objc_release(uVar5);
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010c07d6a0();
  if (((int)uVar1 != 0) && (uVar1 = uVar2, func_0x00010bfdbd60(), (uVar1 & 1) == 0)) {
    uVar1 = uVar2;
    func_0x00010c0cc0c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf5a4a0();
    _objc_release(uVar1);
  }
  uVar1 = uVar2;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126b0cd8;
  uVar5 = param_4;
  func_0x00010bf60940(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc35c0(puVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107d6bf54(uVar1,puVar8);
  _objc_release(puVar8);
  _objc_release(uVar5);
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010bf60940();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010c0cb8c0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar2;
  func_0x00010c121240();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar2;
  func_0x00010c131620();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar2;
  func_0x00010c131460();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSSet_1126ae870;
  uVar11 = uVar2;
  func_0x00010c151a40();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar11;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c225c20();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR__OBJC_CLASS___NSSet_1126ae870;
  uVar13 = uVar2;
  func_0x00010c1512a0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar13;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c225c20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15cca0();
  uVar16 = param_4;
  func_0x00010bf500c0();
  _objc_retainAutoreleasedReturnValue();
  FUN_1070b6368();
  uVar17 = param_4;
  func_0x00010bf500c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c074920();
  uVar18 = param_4;
  func_0x00010bf500c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c076ee0();
  uVar19 = param_4;
  func_0x00010bf500c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfdcfe0();
  func_0x00010bf9fe80();
  uVar20 = param_4;
  func_0x00010bf500c0();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = param_4;
  func_0x00010bf60a00();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = uVar21;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  FUN_1070b60d4(uVar2,uVar20,uVar3,uVar22,uVar6);
  uVar6 = uVar2;
  func_0x00010c0c3fe0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c075780();
  func_0x00010c07d080();
  uVar23 = uVar2;
  func_0x00010c0c3fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = uVar23;
  func_0x00010c0c6c20();
  if (uVar24 != 0xb) {
    func_0x0001085439dc();
  }
  uVar25 = uVar4;
  func_0x00010c0ecc20();
  _objc_retainAutoreleasedReturnValue();
  uVar26 = param_4;
  func_0x00010bf500c0();
  _objc_retainAutoreleasedReturnValue();
  uVar27 = uVar26;
  func_0x00010bfe5d80();
  _objc_retainAutoreleasedReturnValue();
  uVar28 = uVar2;
  func_0x00010bf490e0();
  _objc_retainAutoreleasedReturnValue();
  uVar29 = uVar2;
  func_0x00010c0c3fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar30 = uVar2;
  func_0x00010c0cb9a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f6780(param_4);
  uVar31 = param_4;
  func_0x00010c15dc60();
  _objc_retainAutoreleasedReturnValue();
  uVar32 = param_4;
  func_0x00010bf03aa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1314c0();
  uVar33 = param_4;
  func_0x00010c108300();
  _objc_retainAutoreleasedReturnValue();
  puVar34 = PTR_PTR_1126d4518;
  _objc_opt_class(PTR_PTR_1126d4518);
  uVar35 = uVar33;
  _objc_opt_isKindOfClass(uVar33,puVar34);
  uVar24 = uVar33;
  if ((uVar35 & 1) == 0) {
    uVar24 = 0;
  }
  _objc_retain(uVar24);
  _objc_release(uVar33);
  if (uVar24 == 0) {
    uVar33 = param_4;
    func_0x00010c1050e0();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar35 = param_4;
  func_0x00010c244a80();
  _objc_retainAutoreleasedReturnValue();
  uVar36 = param_4;
  func_0x00010bf60a00();
  _objc_retainAutoreleasedReturnValue();
  uVar37 = param_4;
  func_0x00010c23fa40();
  _objc_retainAutoreleasedReturnValue();
  uVar38 = param_4;
  func_0x00010bf48f20();
  _objc_retainAutoreleasedReturnValue();
  uVar39 = uVar38;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c06f000();
  func_0x00010bf2c560();
  func_0x00010bde7c40(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar24);
  _objc_release(uVar39);
  _objc_release(uVar38);
  _objc_release(uVar37);
  _objc_release(uVar36);
  _objc_release(uVar35);
  if (uVar24 == 0) {
    _objc_release(uVar33);
  }
  _objc_release(uVar32);
  _objc_release(uVar31);
  _objc_release(uVar30);
  _objc_release(uVar29);
  _objc_release(uVar28);
  _objc_release(uVar27);
  _objc_release(uVar26);
  _objc_release(uVar25);
  _objc_release(uVar23);
  _objc_release(uVar6);
  _objc_release(uVar22);
  _objc_release(uVar21);
  _objc_release(uVar20);
  _objc_release(uVar19);
  _objc_release(uVar18);
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(puVar15);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(puVar8);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar7);
  _objc_release(uVar5);
  _objc_release(uVar1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 107088c70; end: 10708a8a3; -[SCChatSnapContentViewModelGenerator _contentForCurrentUserId:senderUserId:readByParticipants:replayUsers:replayAgainUsers:screenshotUsers:screenRecordingUsers:status:isSentByUser:isReceivedBySelf:isGroupConversation:isLockedConversation:summarizedUserListsEnabled:isFailed:isPending:isInfiniteSnap:isSaved:isSavedBySelf:canBeSaved:isVideoWithSound:orderedGroupParticipants:cellState:conversationId:messageId:media:timestamp:payloadWidth:senderHeaderIdentifier:replayAnimationState:postSnapActionsParams:group:snapchattersData:currentUserSnapchatter:snapCountDownManager:networkIsConnected:tapToContinueEnabled:replayCount:canBeReplayed:isOneTimeOnly:isSelfDestruct:selfDestructTimestampMs:isReadByAllOthers:highlightReplayAgainNotification:message:] */

undefined *
FUN_107088c70(double param_1,long param_2,undefined8 param_3,undefined *param_4,undefined *param_5,
             ulong param_6,undefined8 param_7,long param_8,undefined8 param_9,ulong param_10,
             undefined4 param_11,undefined4 param_12,uint param_13,uint param_14,uint param_15,
             undefined4 param_16,long param_17,ulong param_18,undefined8 param_19,
             undefined *param_20,long param_21,undefined8 param_22)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  undefined *puVar18;
  undefined *puVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  uint uVar25;
  long lVar26;
  undefined **ppuVar27;
  undefined8 uVar28;
  ulong uVar29;
  ulong uVar30;
  undefined *puVar31;
  ulong uVar32;
  byte bVar33;
  undefined *puVar34;
  long lVar35;
  undefined *puVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  ulong in_stack_00000060;
  undefined *in_stack_00000068;
  undefined *in_stack_00000070;
  undefined8 in_stack_00000078;
  char cStack0000000000000088;
  char cStack0000000000000089;
  long in_stack_00000090;
  byte bStack0000000000000098;
  char cStack0000000000000099;
  byte bStack000000000000009a;
  byte bStack00000000000000a8;
  char cStack00000000000000a9;
  long in_stack_000000b0;
  undefined **ppuStack_2c0;
  undefined *puStack_2b8;
  undefined *puStack_288;
  undefined *puStack_280;
  undefined *puStack_268;
  undefined *puStack_260;
  undefined *puStack_208;
  undefined *puStack_1f8;
  
  uVar4 = param_15 >> 0x18;
  uVar25 = param_15 >> 0x10 & 0xff;
  lVar26 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_17);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_22);
  _objc_retain(in_stack_00000060);
  _objc_retain(in_stack_00000068);
  _objc_retain(in_stack_00000070);
  _objc_retain(in_stack_00000078);
  _objc_retain(in_stack_000000b0);
  func_0x00010bf529e0(param_9);
  uVar5 = param_10;
  func_0x00010bf529e0();
  bVar1 = param_13._1_1_ | (byte)param_13 ^ 1;
  if ((bVar1 & 1) == 0) {
    if (param_18 == 0) {
      if (cStack0000000000000088 == '\0') {
LAB_107088f5c:
        func_0x00010708a914();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
      }
      else {
        func_0x00010708a8fc();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
      }
    }
    else if (param_14._1_1_ == '\0') {
      if ((long)param_18 < 4) {
        if (param_18 == 2) goto LAB_107089000;
        if (param_18 == 3) goto LAB_107088ff0;
      }
      else {
        if ((param_18 == 4) || (param_18 == 8)) goto LAB_107088fb4;
        if (param_18 == 6) goto LAB_107089018;
      }
      if (param_14._2_1_ == '\0') {
        if (param_18 == 9) goto LAB_107089078;
        if (param_18 == 7) goto LAB_107088f1c;
        func_0x00010708a9a4();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
      }
      else {
        func_0x00010708a98c();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
      }
    }
    else {
      if (cStack0000000000000088 == '\0') goto LAB_107088f5c;
      func_0x00010708a92c();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
    }
  }
  else if (param_18 - 8 < 0xfffffffffffffffe) {
    uVar6 = 0;
    if ((long)param_18 < 5) {
      if (param_18 == 2) {
LAB_107089000:
        func_0x00010708a9bc();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
      }
      else if (param_18 == 3) {
LAB_107088ff0:
        func_0x00010708a9d4();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
      }
      else if (param_18 == 4) goto LAB_107088fb4;
    }
    else if (param_18 == 5) {
      if (param_14._3_1_ != '\0') goto LAB_107089018;
      if (cStack0000000000000089 == '\0') goto LAB_107088fb4;
      func_0x00010708a974();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
    }
    else if (param_18 == 9) {
LAB_107089078:
      func_0x00010708aa04();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
    }
    else if (param_18 == 8) {
LAB_107088fb4:
      func_0x00010708a95c();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
    }
  }
  else if (param_18 == 7) {
LAB_107088f1c:
    uVar6 = (ulong)uVar25;
    FUN_10708750c(uVar6,in_stack_00000090 != 0);
    _objc_retainAutoreleasedReturnValue();
  }
  else if (uVar25 == 0) {
LAB_107089018:
    func_0x00010708a944();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
  }
  else {
    func_0x00010b0af2b4();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
  }
  _objc_retain(param_8);
  _objc_retain(param_5);
  if ((cStack00000000000000a9 == '\0') || (lVar7 = param_8, func_0x00010bf529e0(), lVar7 == 0)) {
    uVar25 = 0;
  }
  else {
    lVar7 = param_8;
    func_0x00010bf4b900();
    uVar25 = (uint)lVar7 ^ 1;
  }
  _objc_release(param_5);
  _objc_release(param_8);
  puVar9 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  puVar36 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf6d680(0x4031000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___UIColor_1126aea70;
  if (((param_14 & 0x100) == 0) && (param_18 != 0)) {
    func_0x00010c23ba80();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c14c4a0(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010bf0e300();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  _objc_release(puVar36);
  puVar8 = in_stack_00000070;
  func_0x00010bd869d0(in_stack_00000070,&PTR___NSConcreteGlobalBlock_11098cf80,
                      &PTR___NSConcreteGlobalBlock_11098cfc0);
  uVar10 = param_7;
  FUN_10708758c(param_7,param_4,(byte)param_13,param_13._1_1_,param_17,puVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  FUN_1070873ac();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_8;
  FUN_107087790(param_8,param_4,(byte)param_13,param_13._1_1_,param_17,puVar8,uVar25);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = param_9;
  func_0x000107087d84(param_9,param_4,(byte)param_13,param_13._1_1_,param_17,puVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar12;
  FUN_1070873ac();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_10;
  func_0x000107087f34(param_10,param_4,(byte)param_13,param_13._1_1_,param_17,puVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar5;
  FUN_1070873ac();
  _objc_retainAutoreleasedReturnValue();
  puVar34 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c078c00();
  puVar36 = PTR__UIEdgeInsetsZero_110345bb0;
  if ((int)puVar34 == 0) {
LAB_107089290:
    func_0x00010c078c00();
    dVar39 = *(double *)(puVar36 + 0x10);
    dVar40 = *(double *)puVar36;
    dVar38 = 3.4028234663852886e+38;
    func_0x00010c23d600((param_1 - *(double *)(puVar36 + 8)) - *(double *)(puVar36 + 0x18),
                        0x47efffffe0000000,PTR_PTR_1126af270);
    dVar38 = dVar39 + dVar40 + dVar38 + 2.0 + 2.0;
  }
  else {
    puVar34 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c078c00();
    dVar38 = 0.0;
    if (((ulong)puVar34 & 1) == 0) goto LAB_107089290;
  }
  puVar34 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c078c00();
  dVar39 = 0.0;
  dVar40 = 0.0;
  if (((ulong)puVar34 & 1) == 0) {
    dVar41 = *(double *)(puVar36 + 0x10);
    dVar42 = *(double *)puVar36;
    dVar40 = 3.4028234663852886e+38;
    func_0x00010c23d600((param_1 - *(double *)(puVar36 + 8)) - *(double *)(puVar36 + 0x18),
                        0x47efffffe0000000,PTR_PTR_1126af270);
    dVar40 = dVar41 + dVar42 + dVar40 + 2.0 + 2.0;
  }
  lVar15 = lVar7;
  func_0x00010c25cd40();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar15;
  func_0x00010c08fa60();
  _objc_release(lVar15);
  if (lVar16 != 0) {
    dVar41 = *(double *)(puVar36 + 0x10);
    dVar42 = *(double *)puVar36;
    dVar39 = 3.4028234663852886e+38;
    func_0x00010c23d600((param_1 - *(double *)(puVar36 + 8)) - *(double *)(puVar36 + 0x18),
                        0x47efffffe0000000,PTR_PTR_1126af270);
    dVar39 = dVar41 + dVar42 + dVar39 + 2.0 + 2.0;
  }
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_17);
  puStack_280 = puVar8;
  _objc_retain();
  if ((param_18 == 9) || (param_18 == 6)) {
    if (((param_13 & 1) == 0) && (cStack0000000000000099 != '\0')) {
      func_0x00010708aa1c();
      _objc_retainAutoreleasedReturnValue();
    }
    else if (((param_13 & 1) == 0) && (param_18 == 9)) {
      func_0x00010708ad94();
      _objc_retainAutoreleasedReturnValue();
    }
    else if ((((bVar1 | (byte)param_14) & 1) == 0) &&
            (uVar17 = param_6, func_0x00010bf529e0(), uVar17 != 0)) {
      uVar17 = param_6;
      func_0x00010c0d3c80();
      func_0x00010c12d360();
      uVar32 = uVar17;
      func_0x00010bf529e0();
      if (uVar32 == 0) {
        puStack_280 = (undefined *)0x0;
      }
      else {
        lVar15 = param_17;
        func_0x00010bf529e0();
        if (lVar15 == 0) {
          puStack_280 = (undefined *)(ulong)bStack0000000000000098;
          FUN_107088170();
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          _objc_retain(uVar17);
          _objc_retain(param_17);
          _objc_retain(puVar8);
          _objc_retain(param_5);
          _objc_retain(param_4);
          _objc_retain(uVar17);
          _objc_retain(param_17);
          _objc_retain(param_17);
          lVar15 = param_17;
          func_0x00010bf52a60();
          lVar16 = lRam0000000000000000;
          while (lVar15 != 0) {
            lVar35 = 0;
            do {
              if (lRam0000000000000000 != lVar16) {
                _objc_enumerationMutation(param_17);
              }
              puVar31 = *(undefined **)(lVar35 * 8);
              puVar36 = puVar31;
              func_0x00010c2923e0();
              _objc_retainAutoreleasedReturnValue();
              _objc_retain();
              _objc_retain(param_5);
              puVar34 = puVar36;
              puVar18 = param_5;
              if (puVar36 == param_5) {
LAB_107089768:
                _objc_release(puVar18);
                _objc_release(puVar34);
LAB_10708977c:
                _objc_release(puVar36);
              }
              else {
                if (param_5 != (undefined *)0x0) {
                  func_0x00010c071ae0();
                  _objc_release(param_5);
                  _objc_release(puVar36);
                  if (((ulong)puVar34 & 1) == 0) goto LAB_1070896f8;
                  goto LAB_10708977c;
                }
                _objc_release();
LAB_1070896f8:
                puVar34 = puVar31;
                func_0x00010c2923e0();
                _objc_retainAutoreleasedReturnValue();
                _objc_retain();
                _objc_retain(param_4);
                if (puVar34 == param_4) {
                  _objc_release(param_4);
                  puVar18 = puVar34;
                  goto LAB_107089768;
                }
                if (param_4 == (undefined *)0x0) {
                  _objc_release();
                  _objc_release(puVar34);
                  _objc_release(puVar36);
LAB_1070897a8:
                  func_0x00010c2923e0(puVar31);
                  _objc_retainAutoreleasedReturnValue();
                  uVar32 = uVar17;
                  func_0x00010bf4b900();
                  _objc_release(puVar31);
                  if ((uVar32 & 1) == 0) {
                    _objc_release(param_17);
                    _objc_release(param_17);
                    _objc_release(uVar17);
                    _objc_release(param_4);
                    _objc_release(param_5);
                    uVar32 = uVar17;
                    func_0x000108ef3a20(uVar17,param_17,puVar8);
                    _objc_retainAutoreleasedReturnValue();
                    puVar36 = PTR__OBJC_CLASS___NSString_1126ae4d0;
                    uVar24 = uVar32;
                    if ((_bStack0000000000000098 & 1) == 0) {
                      func_0x00010708ad4c();
                      _objc_retainAutoreleasedReturnValue();
                    }
                    else {
                      func_0x00010708ad64();
                      _objc_retainAutoreleasedReturnValue();
                    }
                    func_0x00010c14de00(puVar36);
                    _objc_retainAutoreleasedReturnValue();
                    _objc_release(uVar24);
                    puVar34 = PTR__OBJC_CLASS___UIFont_1126aec38;
                    func_0x00010c127e40(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
                    _objc_retainAutoreleasedReturnValue();
                    dVar41 = 1.79769313486232e+308;
                    func_0x00010c14dd00(0x7fefffffffffffff,0x7fefffffffffffff,puVar36);
                    _objc_release(puVar34);
                    puVar34 = PTR__OBJC_CLASS___UIFont_1126aec38;
                    func_0x00010c127e40(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
                    _objc_retainAutoreleasedReturnValue();
                    uVar24 = uVar32;
                    func_0x000108ef620c((param_1 + -18.0 + -18.0 + -21.0 + -7.0 + -4.0) - dVar41,
                                        uVar32,puVar34,1);
                    _objc_retainAutoreleasedReturnValue();
                    _objc_release(puVar34);
                    puStack_280 = PTR__OBJC_CLASS___NSString_1126ae4d0;
                    if ((_bStack0000000000000098 & 1) == 0) {
                      func_0x00010708ad4c();
                      _objc_retainAutoreleasedReturnValue();
                    }
                    else {
                      func_0x00010708ad64();
                      _objc_retainAutoreleasedReturnValue();
                    }
                    func_0x00010c14de00();
                    _objc_retainAutoreleasedReturnValue();
                    _objc_release(puVar34);
                    _objc_release(uVar24);
                    _objc_release(puVar36);
                    _objc_release(uVar32);
                    goto LAB_10708a87c;
                  }
                }
                else {
                  puVar18 = puVar34;
                  func_0x00010c071ae0();
                  _objc_release(param_4);
                  _objc_release(puVar34);
                  _objc_release(puVar34);
                  _objc_release(puVar36);
                  if (((ulong)puVar18 & 1) == 0) goto LAB_1070897a8;
                }
              }
              lVar35 = lVar35 + 1;
            } while (lVar15 != lVar35);
            lVar15 = param_17;
            func_0x00010bf52a60();
          }
          _objc_release(param_17);
          _objc_release(param_17);
          _objc_release(uVar17);
          _objc_release(param_4);
          puStack_280 = param_5;
          _objc_release();
          if ((_bStack0000000000000098 & 1) == 0) {
            func_0x00010708ad1c();
            _objc_retainAutoreleasedReturnValue();
          }
          else {
            func_0x00010708ad34();
            _objc_retainAutoreleasedReturnValue();
          }
LAB_10708a87c:
          _objc_release(puVar8);
          _objc_release(param_17);
          _objc_release(uVar17);
        }
      }
      _objc_release(uVar17);
    }
    else {
      puStack_280 = (undefined *)0x0;
    }
  }
  else {
    puStack_280 = (undefined *)0x0;
  }
  _objc_release(puVar8);
  _objc_release(param_17);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_5);
  _objc_retain(param_22);
  _objc_retain(in_stack_00000078);
  _objc_retain(param_6);
  if ((bVar1 & 1) == 0) {
    if ((param_14 & 0x100) == 0) {
      uVar28 = in_stack_00000078;
      func_0x00010c2923e0(in_stack_00000078);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain();
      _objc_retain(param_6);
      _objc_retain(param_6);
      uVar17 = param_6;
      func_0x00010bf52a60();
      lVar15 = lRam0000000000000000;
      if (uVar17 == 0) {
        bVar2 = false;
      }
      else {
        do {
          uVar32 = 0;
          do {
            if (lRam0000000000000000 != lVar15) {
              _objc_enumerationMutation(param_6);
            }
            iVar3 = (int)*(undefined8 *)(uVar32 * 8);
            func_0x00010c0720c0();
            if (iVar3 == 0) {
              bVar2 = true;
              goto LAB_107089864;
            }
            uVar32 = uVar32 + 1;
          } while (uVar17 != uVar32);
          uVar17 = param_6;
          func_0x00010bf52a60();
        } while (uVar17 != 0);
        bVar2 = false;
      }
LAB_107089864:
      _objc_release(param_6);
      _objc_release(param_6);
      _objc_release(uVar28);
      _objc_release(uVar28);
      if ((param_18 == 8) || (bVar2)) {
        ppuStack_2c0 = &PTR____CFConstantStringClassReference_110e9b558;
        if (uVar4 == 0) {
          ppuStack_2c0 = &PTR____CFConstantStringClassReference_110e9b578;
        }
      }
      else if ((param_14 & 0x10000) == 0) {
        if (param_18 != 9) {
          ppuVar27 = &PTR____CFConstantStringClassReference_110e9b5f8;
          ppuStack_2c0 = &PTR____CFConstantStringClassReference_110e9b5d8;
          goto LAB_107089920;
        }
        ppuStack_2c0 = &PTR____CFConstantStringClassReference_110e9b598;
        if (uVar4 == 0) {
          ppuStack_2c0 = &PTR____CFConstantStringClassReference_110e9b5b8;
        }
        _objc_retain();
      }
      else {
        ppuStack_2c0 = &PTR____CFConstantStringClassReference_110e9b538;
      }
    }
    else {
      ppuStack_2c0 = &PTR____CFConstantStringClassReference_110e9b538;
    }
    goto LAB_107089928;
  }
  if (param_18 - 9 < 0xfffffffffffffffc) {
    if (uVar4 == 0) {
      if (param_18 != 9) {
        uVar28 = param_22;
        FUN_107088198(param_22,in_stack_00000078);
        uVar4 = (uint)uVar28;
        ppuVar27 = &PTR____CFConstantStringClassReference_110e9b678;
        ppuStack_2c0 = &PTR____CFConstantStringClassReference_110e9b658;
        goto LAB_107089920;
      }
      ppuStack_2c0 = &PTR____CFConstantStringClassReference_110e9b5b8;
    }
    else {
      if (param_18 != 9) {
        uVar28 = param_22;
        FUN_107088198(param_22,in_stack_00000078);
        uVar4 = (uint)uVar28;
        ppuVar27 = &PTR____CFConstantStringClassReference_110e9b638;
        ppuStack_2c0 = &PTR____CFConstantStringClassReference_110e9b618;
        goto LAB_107089920;
      }
      ppuStack_2c0 = &PTR____CFConstantStringClassReference_110e9b598;
    }
  }
  else {
    ppuVar27 = &PTR____CFConstantStringClassReference_110e9b6b8;
    ppuStack_2c0 = &PTR____CFConstantStringClassReference_110e9b698;
LAB_107089920:
    if (uVar4 == 0) {
      ppuStack_2c0 = ppuVar27;
    }
  }
LAB_107089928:
  _objc_release(param_6);
  _objc_release(in_stack_00000078);
  _objc_release(param_22);
  _objc_retain(param_20);
  if ((param_13 & 1) == 0) {
    puVar36 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puStack_260 = PTR_PTR_1126d4508;
    _objc_alloc();
    func_0x00010c03e380();
    _objc_release(puVar36);
  }
  else {
    puStack_260 = (undefined *)0x0;
  }
  _objc_release(param_20);
  lVar15 = param_21;
  func_0x00010bf8b160(param_21);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  _objc_retain(param_19);
  _objc_retain(param_20);
  puStack_1f8 = (undefined *)0x0;
  if (((param_14 & 0x1000000) == 0) && (param_18 == 5)) {
    puVar36 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puStack_1f8 = PTR_PTR_1126d4510;
    _objc_alloc();
    func_0x00010c0548a0();
    _objc_release(puVar36);
  }
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(lVar15);
  _objc_retain(param_20);
  _objc_retain(param_19);
  _objc_retain(param_21);
  _objc_retain(param_5);
  _objc_retain(in_stack_00000068);
  _objc_retain(in_stack_00000070);
  if (param_14._1_1_ == '\0') {
    if (param_18 == 4) {
LAB_107089b84:
      if ((param_13 & 0x10000) == 0) {
        _objc_retain(param_5);
        puVar36 = param_5;
      }
      else {
        puVar36 = in_stack_00000068;
        func_0x00010bfceb20(in_stack_00000068);
        _objc_retainAutoreleasedReturnValue();
      }
      puVar34 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780();
      _objc_retainAutoreleasedReturnValue();
      puVar18 = PTR_PTR_1126cb2b0;
      _objc_alloc(PTR_PTR_1126cb2b0);
      puVar31 = in_stack_00000070;
      func_0x00010bd869d0(in_stack_00000070,&PTR___NSConcreteGlobalBlock_11098cf80,
                          &PTR___NSConcreteGlobalBlock_11098cfc0);
      puVar19 = param_5;
      func_0x000108ef37e4(param_5,in_stack_00000068,puVar31);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c02b6c0(puVar18);
      _objc_release(puVar19);
      _objc_release(puVar31);
      puVar31 = PTR_PTR_1126b02a8;
      _objc_alloc();
      func_0x00010c01b460();
      _objc_release(puVar18);
      _objc_release(puVar34);
      _objc_release(puVar36);
    }
    else {
      if (param_18 == 2) {
LAB_107089ac4:
        puVar36 = PTR_PTR_1126cb2a8;
        _objc_alloc(PTR_PTR_1126cb2a8);
        func_0x00010c02b680();
        puVar31 = PTR_PTR_1126b02a8;
        _objc_alloc();
      }
      else {
        lVar15 = param_21;
        func_0x00010c075780();
        uVar4 = 0;
        if (param_18 == 5) {
          uVar4 = (uint)lVar15 ^ 1;
        }
        if ((param_18 == 8) || (uVar4 != 0)) goto LAB_107089b84;
        if (param_18 == 3) goto LAB_107089ac4;
        if (uVar25 == 0) {
          puVar31 = (undefined *)0x0;
          goto LAB_107089ca0;
        }
        puVar36 = PTR_PTR_1126cb2c8;
        _objc_alloc(PTR_PTR_1126cb2c8);
        func_0x00010c02b5e0();
        puVar31 = PTR_PTR_1126b02a8;
        _objc_alloc();
      }
      func_0x00010c01b460();
      _objc_release(puVar36);
    }
  }
  else {
    puVar31 = param_20;
    FUN_10708cef0(param_20,param_19);
    _objc_retainAutoreleasedReturnValue();
  }
LAB_107089ca0:
  _objc_release(in_stack_00000070);
  _objc_release(in_stack_00000068);
  _objc_release(param_5);
  _objc_release(param_21);
  _objc_release(param_19);
  _objc_release(param_20);
  puVar36 = puVar31;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  puVar34 = puVar36;
  func_0x00010c08fa60();
  _objc_release(puVar36);
  uVar28 = *(undefined8 *)(param_2 + 0x10);
  if (puVar34 == (undefined *)0x0) {
    FUN_1070a514c(uVar28,&PTR____CFConstantStringClassReference_110dd2518,1);
  }
  else {
    puVar36 = puVar31;
    func_0x00010bfe5ec0(puVar31);
    _objc_retainAutoreleasedReturnValue();
    FUN_1070a514c(uVar28,puVar36,1);
    _objc_release(puVar36);
  }
  puVar36 = PTR_PTR_1126cb2b8;
  puStack_208 = (undefined *)0x0;
  if (((param_15 & 0x10000) == 0) && (param_18 == 7)) {
    _objc_retain(param_20);
    _objc_retain(param_19);
    _objc_alloc(puVar36);
    func_0x00010c02b640();
    _objc_release(param_20);
    _objc_release(param_19);
    puStack_208 = PTR_PTR_1126b02a8;
    _objc_alloc();
    func_0x00010c01b460();
    _objc_release(puVar36);
  }
  lVar15 = param_21;
  func_0x00010c0c5180();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  if ((param_18 == 3) && (lVar15 != 0)) {
    puVar36 = PTR_PTR_1126cb2c0;
    _objc_alloc();
    func_0x00010c029540();
    if (puVar36 != (undefined *)0x0) {
      puStack_288 = PTR_PTR_1126b02a8;
      _objc_alloc();
      func_0x00010c01b460();
      _objc_release(puVar36);
      goto LAB_107089e50;
    }
  }
  puStack_288 = (undefined *)0x0;
LAB_107089e50:
  _objc_release(lVar15);
  _objc_release(lVar15);
  _objc_retain(param_20);
  _objc_retain(param_19);
  _objc_retain(param_21);
  if ((param_18 == 8) && (lVar15 = param_21, func_0x00010c0c56c0(), lVar15 != 2)) {
    puVar36 = PTR_PTR_1126cb2a8;
    _objc_alloc(PTR_PTR_1126cb2a8);
    func_0x00010c02b680();
    puStack_2b8 = PTR_PTR_1126b02a8;
    _objc_alloc();
    func_0x00010c01b460();
    _objc_release(puVar36);
  }
  else {
    puStack_2b8 = (undefined *)0x0;
  }
  _objc_release(param_21);
  _objc_release(param_19);
  _objc_release(param_20);
  _objc_retain(param_20);
  _objc_retain(param_19);
  _objc_retain(param_21);
  if (((param_14 & 0x100) == 0) && ((param_18 == 8 || (param_18 == 2)))) {
    puVar36 = PTR_PTR_1126cb2a8;
    _objc_alloc(PTR_PTR_1126cb2a8);
    func_0x00010c02b680();
    puStack_268 = PTR_PTR_1126b02a8;
    _objc_alloc();
    func_0x00010c01b460();
    _objc_release(puVar36);
  }
  else {
    puStack_268 = (undefined *)0x0;
  }
  _objc_release(param_21);
  _objc_release(param_19);
  _objc_release(param_20);
  bVar1 = 0;
  if (param_18 != 9) {
    bVar1 = (byte)param_13 & bStack00000000000000a8 ^ 1;
  }
  if ((bStack000000000000009a & bVar1) == 1) {
    puVar34 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    puVar18 = puVar34;
    func_0x00010708ad7c();
    _objc_retainAutoreleasedReturnValue();
    puVar36 = PTR_PTR_1126d4520;
    _objc_alloc();
    func_0x00010c052ae0();
    _objc_release(puVar18);
    _objc_release(puVar34);
  }
  else {
    puVar36 = (undefined *)0x0;
  }
  bVar33 = 0;
  if (((param_18 & 0xfffffffffffffffe) == 6 || param_18 == 1) &&
     ((_bStack0000000000000098 & 0x10000) == 0)) {
    puVar34 = puStack_280;
    func_0x00010c08fa60();
    bVar33 = 0;
    if (puVar34 == (undefined *)0x0) {
      bVar33 = bStack000000000000009a & bVar1 ^ 1;
    }
  }
  puVar34 = in_stack_00000070;
  func_0x00010bd869d0(in_stack_00000070,&PTR___NSConcreteGlobalBlock_11098cf80,
                      &PTR___NSConcreteGlobalBlock_11098cfc0);
  puVar18 = param_5;
  func_0x000108ef3960(param_5,in_stack_00000068,puVar34);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar34);
  _objc_retain(puVar18);
  puVar34 = (undefined *)0x0;
  if ((in_stack_000000b0 != 0) && (bVar33 != 0)) {
    lVar15 = in_stack_000000b0;
    func_0x000107d6151c();
    _objc_retainAutoreleasedReturnValue();
    if (lVar15 == 0) {
      puVar34 = (undefined *)0x0;
    }
    else {
      puVar34 = PTR_PTR_1126d4528;
      func_0x00010c27d320();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(lVar15);
  }
  _objc_release(puVar18);
  uVar17 = in_stack_00000060;
  FUN_107088228(in_stack_00000060,param_18);
  _objc_retainAutoreleasedReturnValue();
  uVar32 = uVar17;
  FUN_1070baeb4();
  uVar24 = uVar17;
  if (((int)uVar32 != 0) && (puVar34 == (undefined *)0x0)) {
    _objc_retain(puVar18);
    bVar33 = bVar33 ^ 1;
    if (uVar17 == 0) {
      bVar33 = 1;
    }
    if ((bVar33 & 1) == 0) {
      uVar32 = uVar17;
      func_0x00010c105080();
      _objc_retainAutoreleasedReturnValue();
      uVar20 = uVar32;
      func_0x00010bf52a60();
      lVar15 = lRam0000000000000000;
      puVar34 = (undefined *)0x0;
      if (uVar20 != 0) {
        do {
          uVar30 = 0;
          do {
            if (lRam0000000000000000 != lVar15) {
              _objc_enumerationMutation(uVar32);
            }
            uVar29 = *(ulong *)(uVar30 * 8);
            uVar21 = uVar29;
            func_0x00010beedca0();
            _objc_retainAutoreleasedReturnValue();
            uVar22 = uVar21;
            func_0x00010beeed20();
            if ((int)uVar22 == 0xe) {
              uVar22 = uVar21;
              func_0x00010c08fba0();
              _objc_retainAutoreleasedReturnValue();
              uVar23 = uVar22;
              func_0x00010c074340();
              _objc_release(uVar22);
              puVar34 = PTR_PTR_1126d4528;
              if ((uVar23 & 1) != 0) {
                func_0x00010c09e8e0(uVar29);
                _objc_retainAutoreleasedReturnValue();
                uVar20 = uVar29;
                func_0x00010bfa0560();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c1006a0();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(uVar20);
                _objc_release(uVar29);
                _objc_release(uVar21);
                goto LAB_10708a2a4;
              }
            }
            _objc_release(uVar21);
            uVar30 = uVar30 + 1;
          } while (uVar20 != uVar30);
          uVar20 = uVar32;
          func_0x00010bf52a60();
        } while (uVar20 != 0);
        puVar34 = (undefined *)0x0;
      }
LAB_10708a2a4:
      _objc_release(uVar32);
    }
    else {
      puVar34 = (undefined *)0x0;
    }
    _objc_release(puVar18);
    FUN_1070bb3f4();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar17);
  }
  uVar17 = uVar24;
  func_0x00010c105080();
  _objc_retainAutoreleasedReturnValue();
  uVar32 = uVar17;
  func_0x00010bf04920();
  _objc_release(uVar17);
  uVar17 = uVar24;
  func_0x00010c105080();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = uVar17;
  func_0x00010bf529e0();
  _objc_release(uVar17);
  puVar19 = puVar34;
  func_0x00010c08fa60();
  dVar41 = 56.0;
  if ((int)uVar32 == 0) {
    dVar41 = 50.0;
  }
  dVar42 = 54.0;
  if ((long)(uVar20 - (uVar32 & 0xffffffff)) < 1) {
    dVar42 = 0.0;
  }
  dVar37 = 0.0;
  if (puVar19 != (undefined *)0x0) {
    dVar37 = 16.0;
  }
  dVar37 = dVar37 + dVar41 + dVar42;
  puVar19 = PTR_PTR_1126cb470;
  _objc_alloc();
  lVar15 = param_21;
  func_0x00010c0c5180();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff4f00(0x4049000000000000,dVar37,dVar38,dVar40,dVar39,dVar42,
                      dVar39 + dVar40 + dVar38 + dVar37 + 16.0);
  _objc_release(lVar15);
  _objc_release(uVar24);
  _objc_release(puVar34);
  _objc_release(puVar18);
  _objc_release(puVar36);
  _objc_release(puStack_268);
  _objc_release(puStack_2b8);
  _objc_release(puStack_288);
  _objc_release(puStack_208);
  _objc_release(puVar31);
  _objc_release(puStack_1f8);
  _objc_release(puStack_260);
  _objc_release(ppuStack_2c0);
  _objc_release(puStack_280);
  _objc_release(uVar14);
  _objc_release(uVar5);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(lVar7);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(puVar8);
  _objc_release(puVar9);
  _objc_release(uVar6);
  _objc_release(in_stack_000000b0);
  _objc_release(in_stack_00000078);
  _objc_release(in_stack_00000070);
  _objc_release(in_stack_00000068);
  _objc_release(in_stack_00000060);
  _objc_release(param_22);
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_17);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar26) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar19);
    return puVar19;
  }
  ___stack_chk_fail();
  func_0x00010beedca0(param_18);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_18;
  func_0x00010beeed20();
  _objc_release(param_18);
  return (undefined *)(ulong)((int)uVar5 == 4);
}



/* Entry: 10708a8a4; end: 10708a8e7;  */

bool FUN_10708a8a4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010beedca0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010beeed20();
  _objc_release(param_2);
  return (int)uVar1 == 4;
}



/* Entry: 10708a8e8; end: 10708a8ef; -[SCChatSnapContentViewModelGenerator quotedContentFromQuotedMessage:viewModel:] */

undefined8 FUN_10708a8e8(void)

{
  return 0;
}



/* Entry: 10708a8f0; end: 10708adab; -[SCChatSnapContentViewModelGenerator .cxx_destruct] */

void FUN_10708a8f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10708adac; end: 10708b263; -[SCChatSnapContentViewModel initWithAttributedSnapActionText:attributedReplayNotificationText:attributedReplayAgainNotificationText:attributedScreenshotNotificationText:attributedScreenRecordingNotificationText:subLabelText:gameLabelText:snapIconImageName:snapMediaCardHeight:mediaCardHeight:shouldAllowTapReplayAgainNotificationLabel:screenshotNotificationLabelHeight:replayNotificationLabelHeight:replayAgainNotificationLabelHeight:showActivitySpinner:thumbnailIdentifier:replayAnimationData:countDownAnimationData:tapAction:longPressAction:displayLoggingAction:setViewModelAction:postSnapActionsHeight:postSnapActionsParams:reuseIdentifier:contentHeight:cellWillDisplayAction:displaySnapchatPlusBorder:expirationAnimationData:] */

undefined8 *
FUN_10708adac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined4 param_18,undefined4 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined1 param_30,undefined4 param_31,undefined8 param_32)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_22);
  _objc_retain(param_23);
  _objc_retain(param_24);
  _objc_retain(param_25);
  _objc_retain(param_26);
  _objc_retain(param_27);
  _objc_retain(param_28);
  _objc_retain(param_29);
  _objc_retain(param_32);
  puStack_b0 = PTR_PTR_1126f8890;
  puVar1 = &uStack_b8;
  uStack_b8 = param_8;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = puVar1[2];
    puVar1[2] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_11;
    func_0x00010bf51e00();
    uVar3 = puVar1[3];
    puVar1[3] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_12;
    func_0x00010bf51e00();
    uVar3 = puVar1[4];
    puVar1[4] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_13;
    func_0x00010bf51e00();
    uVar3 = puVar1[5];
    puVar1[5] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_14;
    func_0x00010bf51e00();
    uVar3 = puVar1[6];
    puVar1[6] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_15;
    func_0x00010bf51e00();
    uVar3 = puVar1[7];
    puVar1[7] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_16;
    func_0x00010bf51e00();
    uVar3 = puVar1[8];
    puVar1[8] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_17;
    func_0x00010bf51e00();
    uVar3 = puVar1[9];
    puVar1[9] = uVar2;
    _objc_release(uVar3);
    puVar1[10] = param_1;
    puVar1[0xb] = param_2;
    *(undefined1 *)(puVar1 + 1) = (undefined1)param_18;
    puVar1[0xc] = param_3;
    puVar1[0xd] = param_4;
    puVar1[0xe] = param_5;
    *(undefined1 *)((long)puVar1 + 9) = param_18._1_1_;
    uVar2 = param_20;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xf];
    puVar1[0xf] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_21;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x10];
    puVar1[0x10] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_22;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x11];
    puVar1[0x11] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_23;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x12];
    puVar1[0x12] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_24;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x13];
    puVar1[0x13] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_25;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x14];
    puVar1[0x14] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_26;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x15];
    puVar1[0x15] = uVar2;
    _objc_release(uVar3);
    puVar1[0x16] = param_6;
    uVar2 = param_27;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x17];
    puVar1[0x17] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_28;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x18];
    puVar1[0x18] = uVar2;
    _objc_release(uVar3);
    puVar1[0x19] = param_7;
    uVar2 = param_29;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x1a];
    puVar1[0x1a] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 10) = param_30;
    uVar2 = param_32;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x1b];
    puVar1[0x1b] = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_32);
  _objc_release(param_29);
  _objc_release(param_28);
  _objc_release(param_27);
  _objc_release(param_26);
  _objc_release(param_25);
  _objc_release(param_24);
  _objc_release(param_23);
  _objc_release(param_22);
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  return puVar1;
}



/* Entry: 10708b264; end: 10708b287; -[SCChatSnapContentViewModel copyWithZone:] */

undefined8 FUN_10708b264(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10708b288; end: 10708b4bf; -[SCChatSnapContentViewModel hash] */

undefined8 * FUN_10708b288(long param_1,undefined8 param_2,undefined1 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  ulong uVar8;
  undefined1 *puVar9;
  double dVar10;
  double dVar11;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  puVar5 = &uStack_120;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uStack_120 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_118 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uStack_110 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_108 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  uStack_100 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uStack_f8 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  uStack_f0 = uVar2;
  func_0x00010bfde980();
  uVar8 = ~*(ulong *)(param_1 + 0x50) + *(ulong *)(param_1 + 0x50) * 0x40000;
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  uStack_e0 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_e0 = uStack_e0 ^ uStack_e0 >> 0x16;
  uVar8 = ~*(ulong *)(param_1 + 0x58) + *(ulong *)(param_1 + 0x58) * 0x40000;
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  uStack_d8 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_d8 = uStack_d8 ^ uStack_d8 >> 0x16;
  uStack_d0 = (ulong)*(byte *)(param_1 + 8);
  uVar8 = ~*(ulong *)(param_1 + 0x60) + *(ulong *)(param_1 + 0x60) * 0x40000;
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  uStack_c8 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_c8 = uStack_c8 ^ uStack_c8 >> 0x16;
  uVar8 = ~*(ulong *)(param_1 + 0x68) + *(ulong *)(param_1 + 0x68) * 0x40000;
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  uStack_c0 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_c0 = uStack_c0 ^ uStack_c0 >> 0x16;
  uVar2 = *(undefined8 *)(param_1 + 0x78);
  uVar8 = ~*(ulong *)(param_1 + 0x70) + *(ulong *)(param_1 + 0x70) * 0x40000;
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  uStack_b0 = (ulong)*(byte *)(param_1 + 9);
  uStack_b8 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_b8 = uStack_b8 ^ uStack_b8 >> 0x16;
  uStack_e8 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x80);
  uStack_a8 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x88);
  uStack_a0 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x90);
  uStack_98 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x98);
  uStack_90 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0xa0);
  uStack_88 = uVar2;
  func_0x00010bfde980();
  uVar4 = *(undefined8 *)(param_1 + 0xa8);
  uStack_80 = uVar3;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0xb8);
  uVar8 = ~*(ulong *)(param_1 + 0xb0) + *(ulong *)(param_1 + 0xb0) * 0x40000;
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  uStack_70 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_70 = uStack_70 ^ uStack_70 >> 0x16;
  uStack_78 = uVar4;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0xc0);
  uStack_68 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0xd0);
  uVar8 = ~*(ulong *)(param_1 + 200) + *(ulong *)(param_1 + 200) * 0x40000;
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  uStack_58 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_58 = uStack_58 ^ uStack_58 >> 0x16;
  uStack_60 = uVar3;
  func_0x00010bfde980();
  uStack_48 = (ulong)*(byte *)(param_1 + 10);
  uVar3 = *(undefined8 *)(param_1 + 0xd8);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uStack_40 = uVar3;
  func_0x000100505190(&uStack_120,0x1d);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar5;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar5 == (undefined8 *)param_3) {
LAB_10708b880:
    puVar9 = (undefined1 *)0x1;
  }
  else {
    puVar9 = (undefined1 *)0x0;
    if ((puVar5 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10708b88c;
    puVar9 = (undefined1 *)puVar5;
    _objc_opt_class(puVar5);
    puVar6 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar9);
    if ((((ulong)puVar6 & 1) != 0) &&
       (((*(char *)((long)puVar5 + 8) == param_3[8] && (*(char *)((long)puVar5 + 9) == param_3[9]))
        && (*(char *)((long)puVar5 + 10) == param_3[10])))) {
      dVar11 = ABS(*(double *)((long)puVar5 + 0x50) - *(double *)(param_3 + 0x50));
      dVar10 = ABS(*(double *)((long)puVar5 + 0x50) + *(double *)(param_3 + 0x50)) *
               2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar11) && (bVar1 = false, !NAN(dVar11) && !NAN(dVar10))) {
        bVar1 = dVar11 < dVar10;
      }
      if (bVar1) {
        dVar11 = ABS(*(double *)((long)puVar5 + 0x58) - *(double *)(param_3 + 0x58));
        dVar10 = ABS(*(double *)((long)puVar5 + 0x58) + *(double *)(param_3 + 0x58)) *
                 2.220446049250313e-16;
        bVar1 = true;
        if ((2.2250738585072014e-308 <= dVar11) && (bVar1 = false, !NAN(dVar11) && !NAN(dVar10))) {
          bVar1 = dVar11 < dVar10;
        }
        if (bVar1) {
          dVar11 = ABS(*(double *)((long)puVar5 + 0x60) - *(double *)(param_3 + 0x60));
          dVar10 = ABS(*(double *)((long)puVar5 + 0x60) + *(double *)(param_3 + 0x60)) *
                   2.220446049250313e-16;
          bVar1 = true;
          if ((2.2250738585072014e-308 <= dVar11) && (bVar1 = false, !NAN(dVar11) && !NAN(dVar10)))
          {
            bVar1 = dVar11 < dVar10;
          }
          if (bVar1) {
            dVar10 = ABS(*(double *)((long)puVar5 + 0x68) - *(double *)(param_3 + 0x68));
            if ((dVar10 < 2.2250738585072014e-308) ||
               (dVar10 < ABS(*(double *)((long)puVar5 + 0x68) + *(double *)(param_3 + 0x68)) *
                         2.220446049250313e-16)) {
              dVar10 = ABS(*(double *)((long)puVar5 + 0x70) - *(double *)(param_3 + 0x70));
              if ((dVar10 < 2.2250738585072014e-308) ||
                 (dVar10 < ABS(*(double *)((long)puVar5 + 0x70) + *(double *)(param_3 + 0x70)) *
                           2.220446049250313e-16)) {
                dVar10 = ABS(*(double *)((long)puVar5 + 0xb0) - *(double *)(param_3 + 0xb0));
                if ((dVar10 < 2.2250738585072014e-308) ||
                   (dVar10 < ABS(*(double *)((long)puVar5 + 0xb0) + *(double *)(param_3 + 0xb0)) *
                             2.220446049250313e-16)) {
                  dVar10 = ABS(*(double *)((long)puVar5 + 200) - *(double *)(param_3 + 200));
                  if ((((dVar10 < 2.2250738585072014e-308) ||
                       (dVar10 < ABS(*(double *)((long)puVar5 + 200) + *(double *)(param_3 + 200)) *
                                 2.220446049250313e-16)) &&
                      (((((lVar7 = *(long *)((long)puVar5 + 0x10),
                          lVar7 == *(long *)(param_3 + 0x10) ||
                          (func_0x00010c071ae0(), (int)lVar7 != 0)) &&
                         ((lVar7 = *(long *)((long)puVar5 + 0x18),
                          lVar7 == *(long *)(param_3 + 0x18) ||
                          (func_0x00010c071ae0(), (int)lVar7 != 0)))) &&
                        ((lVar7 = *(long *)((long)puVar5 + 0x20), lVar7 == *(long *)(param_3 + 0x20)
                         || (func_0x00010c071ae0(), (int)lVar7 != 0)))) &&
                       ((lVar7 = *(long *)((long)puVar5 + 0x28), lVar7 == *(long *)(param_3 + 0x28)
                        || (func_0x00010c071ae0(), (int)lVar7 != 0)))))) &&
                     ((((((lVar7 = *(long *)((long)puVar5 + 0x30),
                          lVar7 == *(long *)(param_3 + 0x30) ||
                          (func_0x00010c071ae0(), (int)lVar7 != 0)) &&
                         ((lVar7 = *(long *)((long)puVar5 + 0x38),
                          lVar7 == *(long *)(param_3 + 0x38) ||
                          (func_0x00010c071ae0(), (int)lVar7 != 0)))) &&
                        (((lVar7 = *(long *)((long)puVar5 + 0x40),
                          lVar7 == *(long *)(param_3 + 0x40) ||
                          (func_0x00010c071ae0(), (int)lVar7 != 0)) &&
                         ((lVar7 = *(long *)((long)puVar5 + 0x48),
                          lVar7 == *(long *)(param_3 + 0x48) ||
                          (func_0x00010c071ae0(), (int)lVar7 != 0)))))) &&
                       (((lVar7 = *(long *)((long)puVar5 + 0x78), lVar7 == *(long *)(param_3 + 0x78)
                         || (func_0x00010c071ae0(), (int)lVar7 != 0)) &&
                        ((lVar7 = *(long *)((long)puVar5 + 0x80), lVar7 == *(long *)(param_3 + 0x80)
                         || (func_0x00010c071ae0(), (int)lVar7 != 0)))))) &&
                      ((((lVar7 = *(long *)((long)puVar5 + 0x88), lVar7 == *(long *)(param_3 + 0x88)
                         || (func_0x00010c071ae0(), (int)lVar7 != 0)) &&
                        ((lVar7 = *(long *)((long)puVar5 + 0x90), lVar7 == *(long *)(param_3 + 0x90)
                         || (func_0x00010c071ae0(), (int)lVar7 != 0)))) &&
                       ((((((lVar7 = *(long *)((long)puVar5 + 0x98),
                            lVar7 == *(long *)(param_3 + 0x98) ||
                            (func_0x00010c071ae0(), (int)lVar7 != 0)) &&
                           ((lVar7 = *(long *)((long)puVar5 + 0xa0),
                            lVar7 == *(long *)(param_3 + 0xa0) ||
                            (func_0x00010c071ae0(), (int)lVar7 != 0)))) &&
                          ((lVar7 = *(long *)((long)puVar5 + 0xa8),
                           lVar7 == *(long *)(param_3 + 0xa8) ||
                           (func_0x00010c071ae0(), (int)lVar7 != 0)))) &&
                         ((lVar7 = *(long *)((long)puVar5 + 0xb8),
                          lVar7 == *(long *)(param_3 + 0xb8) ||
                          (func_0x00010c071ae0(), (int)lVar7 != 0)))) &&
                        (((lVar7 = *(long *)((long)puVar5 + 0xc0),
                          lVar7 == *(long *)(param_3 + 0xc0) ||
                          (func_0x00010c071ae0(), (int)lVar7 != 0)) &&
                         ((lVar7 = *(long *)((long)puVar5 + 0xd0),
                          lVar7 == *(long *)(param_3 + 0xd0) ||
                          (func_0x00010c071ae0(), (int)lVar7 != 0)))))))))))) {
                    puVar9 = *(undefined1 **)((long)puVar5 + 0xd8);
                    if (puVar9 != *(undefined1 **)(param_3 + 0xd8)) {
                      func_0x00010c071ae0();
                      goto LAB_10708b88c;
                    }
                    goto LAB_10708b880;
                  }
                }
              }
            }
          }
        }
      }
    }
    puVar9 = (undefined1 *)0x0;
  }
LAB_10708b88c:
  _objc_release(param_3);
  return (undefined8 *)puVar9;
}



/* Entry: 10708b4c0; end: 10708b8a7; -[SCChatSnapContentViewModel isEqual:] */

long FUN_10708b4c0(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10708b880:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10708b88c;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) &&
       (((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
         (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))) &&
        (*(char *)(param_1 + 10) == *(char *)(param_3 + 10))))) {
      dVar6 = ABS(*(double *)(param_1 + 0x50) - *(double *)(param_3 + 0x50));
      dVar5 = ABS(*(double *)(param_1 + 0x50) + *(double *)(param_3 + 0x50)) * 2.220446049250313e-16
      ;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if (bVar1) {
        dVar6 = ABS(*(double *)(param_1 + 0x58) - *(double *)(param_3 + 0x58));
        dVar5 = ABS(*(double *)(param_1 + 0x58) + *(double *)(param_3 + 0x58)) *
                2.220446049250313e-16;
        bVar1 = true;
        if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
          bVar1 = dVar6 < dVar5;
        }
        if (bVar1) {
          dVar6 = ABS(*(double *)(param_1 + 0x60) - *(double *)(param_3 + 0x60));
          dVar5 = ABS(*(double *)(param_1 + 0x60) + *(double *)(param_3 + 0x60)) *
                  2.220446049250313e-16;
          bVar1 = true;
          if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
            bVar1 = dVar6 < dVar5;
          }
          if (bVar1) {
            dVar5 = ABS(*(double *)(param_1 + 0x68) - *(double *)(param_3 + 0x68));
            if ((dVar5 < 2.2250738585072014e-308) ||
               (dVar5 < ABS(*(double *)(param_1 + 0x68) + *(double *)(param_3 + 0x68)) *
                        2.220446049250313e-16)) {
              dVar5 = ABS(*(double *)(param_1 + 0x70) - *(double *)(param_3 + 0x70));
              if ((dVar5 < 2.2250738585072014e-308) ||
                 (dVar5 < ABS(*(double *)(param_1 + 0x70) + *(double *)(param_3 + 0x70)) *
                          2.220446049250313e-16)) {
                dVar5 = ABS(*(double *)(param_1 + 0xb0) - *(double *)(param_3 + 0xb0));
                if ((dVar5 < 2.2250738585072014e-308) ||
                   (dVar5 < ABS(*(double *)(param_1 + 0xb0) + *(double *)(param_3 + 0xb0)) *
                            2.220446049250313e-16)) {
                  dVar5 = ABS(*(double *)(param_1 + 200) - *(double *)(param_3 + 200));
                  if ((((dVar5 < 2.2250738585072014e-308) ||
                       (dVar5 < ABS(*(double *)(param_1 + 200) + *(double *)(param_3 + 200)) *
                                2.220446049250313e-16)) &&
                      (((((lVar4 = *(long *)(param_1 + 0x10), lVar4 == *(long *)(param_3 + 0x10) ||
                          (func_0x00010c071ae0(), (int)lVar4 != 0)) &&
                         ((lVar4 = *(long *)(param_1 + 0x18), lVar4 == *(long *)(param_3 + 0x18) ||
                          (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
                        ((lVar4 = *(long *)(param_1 + 0x20), lVar4 == *(long *)(param_3 + 0x20) ||
                         (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
                       ((lVar4 = *(long *)(param_1 + 0x28), lVar4 == *(long *)(param_3 + 0x28) ||
                        (func_0x00010c071ae0(), (int)lVar4 != 0)))))) &&
                     ((((((lVar4 = *(long *)(param_1 + 0x30), lVar4 == *(long *)(param_3 + 0x30) ||
                          (func_0x00010c071ae0(), (int)lVar4 != 0)) &&
                         ((lVar4 = *(long *)(param_1 + 0x38), lVar4 == *(long *)(param_3 + 0x38) ||
                          (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
                        (((lVar4 = *(long *)(param_1 + 0x40), lVar4 == *(long *)(param_3 + 0x40) ||
                          (func_0x00010c071ae0(), (int)lVar4 != 0)) &&
                         ((lVar4 = *(long *)(param_1 + 0x48), lVar4 == *(long *)(param_3 + 0x48) ||
                          (func_0x00010c071ae0(), (int)lVar4 != 0)))))) &&
                       (((lVar4 = *(long *)(param_1 + 0x78), lVar4 == *(long *)(param_3 + 0x78) ||
                         (func_0x00010c071ae0(), (int)lVar4 != 0)) &&
                        ((lVar4 = *(long *)(param_1 + 0x80), lVar4 == *(long *)(param_3 + 0x80) ||
                         (func_0x00010c071ae0(), (int)lVar4 != 0)))))) &&
                      ((((lVar4 = *(long *)(param_1 + 0x88), lVar4 == *(long *)(param_3 + 0x88) ||
                         (func_0x00010c071ae0(), (int)lVar4 != 0)) &&
                        ((lVar4 = *(long *)(param_1 + 0x90), lVar4 == *(long *)(param_3 + 0x90) ||
                         (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
                       ((((((lVar4 = *(long *)(param_1 + 0x98), lVar4 == *(long *)(param_3 + 0x98)
                            || (func_0x00010c071ae0(), (int)lVar4 != 0)) &&
                           ((lVar4 = *(long *)(param_1 + 0xa0), lVar4 == *(long *)(param_3 + 0xa0)
                            || (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
                          ((lVar4 = *(long *)(param_1 + 0xa8), lVar4 == *(long *)(param_3 + 0xa8) ||
                           (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
                         ((lVar4 = *(long *)(param_1 + 0xb8), lVar4 == *(long *)(param_3 + 0xb8) ||
                          (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
                        (((lVar4 = *(long *)(param_1 + 0xc0), lVar4 == *(long *)(param_3 + 0xc0) ||
                          (func_0x00010c071ae0(), (int)lVar4 != 0)) &&
                         ((lVar4 = *(long *)(param_1 + 0xd0), lVar4 == *(long *)(param_3 + 0xd0) ||
                          (func_0x00010c071ae0(), (int)lVar4 != 0)))))))))))) {
                    lVar4 = *(long *)(param_1 + 0xd8);
                    if (lVar4 != *(long *)(param_3 + 0xd8)) {
                      func_0x00010c071ae0();
                      goto LAB_10708b88c;
                    }
                    goto LAB_10708b880;
                  }
                }
              }
            }
          }
        }
      }
    }
    lVar4 = 0;
  }
LAB_10708b88c:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 10708b8a8; end: 10708b8af; -[SCChatSnapContentViewModel attributedSnapActionText] */

undefined8 FUN_10708b8a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10708b8b0; end: 10708b8b7; -[SCChatSnapContentViewModel attributedReplayNotificationText] */

undefined8 FUN_10708b8b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10708b8b8; end: 10708b8bf; -[SCChatSnapContentViewModel attributedReplayAgainNotificationText] */

undefined8 FUN_10708b8b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10708b8c0; end: 10708b8c7; -[SCChatSnapContentViewModel attributedScreenshotNotificationText] */

undefined8 FUN_10708b8c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10708b8c8; end: 10708b8cf; -[SCChatSnapContentViewModel attributedScreenRecordingNotificationText] */

undefined8 FUN_10708b8c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10708b8d0; end: 10708b8d7; -[SCChatSnapContentViewModel subLabelText] */

undefined8 FUN_10708b8d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10708b8d8; end: 10708b8df; -[SCChatSnapContentViewModel gameLabelText] */

undefined8 FUN_10708b8d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10708b8e0; end: 10708b8e7; -[SCChatSnapContentViewModel snapIconImageName] */

undefined8 FUN_10708b8e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10708b8e8; end: 10708b8ef; -[SCChatSnapContentViewModel snapMediaCardHeight] */

undefined8 FUN_10708b8e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10708b8f0; end: 10708b8f7; -[SCChatSnapContentViewModel mediaCardHeight] */

undefined8 FUN_10708b8f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 10708b8f8; end: 10708b8ff; -[SCChatSnapContentViewModel shouldAllowTapReplayAgainNotificationLabel] */

undefined1 FUN_10708b8f8(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10708b900; end: 10708b907; -[SCChatSnapContentViewModel screenshotNotificationLabelHeight] */

undefined8 FUN_10708b900(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 10708b908; end: 10708b90f; -[SCChatSnapContentViewModel replayNotificationLabelHeight] */

undefined8 FUN_10708b908(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 10708b910; end: 10708b917; -[SCChatSnapContentViewModel replayAgainNotificationLabelHeight] */

undefined8 FUN_10708b910(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 10708b918; end: 10708b91f; -[SCChatSnapContentViewModel showActivitySpinner] */

undefined1 FUN_10708b918(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10708b920; end: 10708b927; -[SCChatSnapContentViewModel thumbnailIdentifier] */

undefined8 FUN_10708b920(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 10708b928; end: 10708b92f; -[SCChatSnapContentViewModel replayAnimationData] */

undefined8 FUN_10708b928(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 10708b930; end: 10708b937; -[SCChatSnapContentViewModel countDownAnimationData] */

undefined8 FUN_10708b930(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 10708b938; end: 10708b93f; -[SCChatSnapContentViewModel tapAction] */

undefined8 FUN_10708b938(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 10708b940; end: 10708b947; -[SCChatSnapContentViewModel longPressAction] */

undefined8 FUN_10708b940(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 10708b948; end: 10708b94f; -[SCChatSnapContentViewModel displayLoggingAction] */

undefined8 FUN_10708b948(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



/* Entry: 10708b950; end: 10708b957; -[SCChatSnapContentViewModel setViewModelAction] */

undefined8 FUN_10708b950(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}


